"""
--------------------------------------------------------------------------------
Copyright 2026 SiFive Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
--------------------------------------------------------------------------------

Template for rendering Zvbdota family of batched dot-product extensions
"""

from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from enums import ExtraAttr


def render(G,
           op_list,
           type_list,
           sew_list,
           lmul_list,
           decorator_list,
           description,
           required_ext_list=None):
  #pylint: disable=invalid-name, unused-argument
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      op = args["OP"]
      data_type = args["TYPE"]

      if "int" in data_type and decorator.flags & ExtraAttr.HAS_FRM:
        continue

      args["OUT_SEW"] = args["SEW"] * (4 if "qwbdota" in op else
                                       (2 if "wbdota" in op else 1))
      args["OUT_LMUL"] = args["LMUL"]

      is_fp8 = data_type in ["f8e4m3", "f8e5m2"]
      is_float = "float" in data_type or data_type == "bfloat"

      vs2_signed = (op == "vqwbdotas")
      vs1_signed = (data_type == "int")
      args["OTYPE"] = "float" if (is_float or is_fp8) else ("int" if (
          vs2_signed or vs1_signed) else "uint")

      vs1_type_helper = TypeHelper(SEW=args["SEW"], LMUL=1, TYPE=data_type)
      vs2_type_helper = TypeHelper(SEW=args["SEW"], LMUL=8, TYPE=data_type)
      dst_type_helper = TypeHelper(
          SEW=args["OUT_SEW"], LMUL=args["OUT_LMUL"], TYPE=args["OTYPE"])

      if not dst_type_helper.valid_vtype(dst_type_helper.v):
        continue

      if is_fp8:
        vs1_type = TypeHelper(SEW=args["SEW"], LMUL=1, TYPE="uint").v
        vs2_type = TypeHelper(SEW=args["SEW"], LMUL=8, TYPE="uint").v
        func_name = (f"{op}_vv_{args['TYPE']}m1_"
                     f"{args['OTYPE']}{args['OUT_SEW']}m{args['OUT_LMUL']}")
      else:
        vs1_type = vs1_type_helper.v if is_float else (
            vs1_type_helper.siv if vs1_signed else vs1_type_helper.uiv)
        vs2_type = vs2_type_helper.v if is_float else (
            vs2_type_helper.siv if vs2_signed else vs2_type_helper.uiv)
        func_name = (f"{op}_vv_{args['TYPE']}{args['SEW']}m1_"
                     f"{args['OTYPE']}{args['OUT_SEW']}m{args['OUT_LMUL']}")

      G.func(
          InstInfo.get(
              args,
              decorator,
              InstType.VVV,
              extra_attr=ExtraAttr.MAC,
              required_ext=required_ext_list),
          name=func_name + decorator.func_suffix,
          return_type=dst_type_helper.v,
          **decorator.mask_args(dst_type_helper.m, dst_type_helper.v),
          vd=dst_type_helper.v,
          vs2=vs2_type,
          vs1=vs1_type,
          ci="size_t",
          **decorator.extra_csr_args(dst_type_helper.uint),
          vl=dst_type_helper.size_t)

  G.inst_group_epilogue()
