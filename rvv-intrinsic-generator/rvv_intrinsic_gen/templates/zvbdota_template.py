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
    for args in prod(
        OP=op_list,
        TYPE=type_list,
        VS1_TYPE=type_list,
        SEW=sew_list,
        LMUL=lmul_list):
      op = args["OP"]
      vs2_type = args["TYPE"]
      vs1_type = args["VS1_TYPE"]

      if "int" in vs2_type and decorator.flags & ExtraAttr.HAS_FRM:
        continue

      args["OUT_SEW"] = args["SEW"] * (4 if "qwbdota" in op else
                                       (2 if "wbdota" in op else 1))
      is_fp8 = vs2_type in ["f8e4m3", "f8e5m2"]
      is_float = "float" in vs2_type or vs2_type == "bfloat"

      vs2_signed = (vs2_type == "int")
      vs1_signed = (vs1_type == "int")
      args["OTYPE"] = "float" if (is_float or is_fp8) else ("int" if (
          vs2_signed or vs1_signed) else "uint")

      vs1_type_helper = TypeHelper(SEW=args["SEW"], LMUL=1, TYPE=vs1_type)
      vs2_type_helper = TypeHelper(SEW=args["SEW"], LMUL=8, TYPE=vs2_type)
      dst_type_helper = TypeHelper(
          SEW=args["OUT_SEW"], LMUL=args["LMUL"], TYPE=args["OTYPE"])

      if not dst_type_helper.valid_vtype(dst_type_helper.v):
        continue

      if is_fp8:
        vs1_type = TypeHelper(SEW=args["SEW"], LMUL=1, TYPE="uint").v
        vs2_type = TypeHelper(SEW=args["SEW"], LMUL=8, TYPE="uint").v
        func_name = (f"{op}_vv_{args['TYPE']}m8_{args['VS1_TYPE']}m1_"
                     f"{args['OTYPE']}{args['OUT_SEW']}m{args['LMUL']}")
      else:
        vs1_type = vs1_type_helper.v
        vs2_type = vs2_type_helper.v
        if "float" in args["TYPE"]:
          func_name = (
              f"{op}_vv_{args['OTYPE']}{args['OUT_SEW']}m{args['LMUL']}")
        else:
          func_name = (f"{op}_vv_{args['TYPE']}{args['SEW']}m8_"
                       f"{args['VS1_TYPE']}{args['SEW']}m1_"
                       f"{args['OTYPE']}{args['OUT_SEW']}m{args['LMUL']}")

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
