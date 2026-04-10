"""
--------------------------------------------------------------------------------
Copyright 2025 SiFive Inc

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

Template for rendering OFP8 conversion extension Zvfofp8min
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from enums import ExtraAttr
from constants import ITYPES


def render(G,
           op_list,
           type_list,
           sew_list,
           lmul_list,
           decorator_list,
           description,
           required_ext_list=None):
  #pylint: disable=invalid-name, unused-argument
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    # Variable in list means
    # [dst_type, dst_type_short, src_type, src_type_short]
    if "ncvtbf16" in op_list:
      convert_set = [[type_list[0], "xu", "bfloat", "bf"]]
    elif "ncvt" in op_list:
      convert_set = [[type_list[0], "xu", "float", "f"]]
    elif "wcvtbf16" in op_list:
      convert_set = [["bfloat", "bf", type_list[0], "xu"]]
    else:
      assert False, "Unhandled instruction with type_list = 'bfloat16'"
    for args in prod(
        OP=op_list, SEW=sew_list, TYPES=convert_set, LMUL=lmul_list):
      assert args["TYPES"] is not None
      op = args["OP"]

      type_helper = TypeHelper(**args)
      args["TYPES0"] = args["TYPES"][0]
      args["TYPES1"] = args["TYPES"][1]
      args["TYPES2"] = args["TYPES"][2]
      args["TYPES3"] = args["TYPES"][3]

      factor = ""
      if "ncvtbf16" in op:
        factor = "N"
      elif "ncvt" in op:
        factor = "L"
      elif "wcvtbf16" in op:
        factor = "W"

      args["LLMUL"] = args[factor + "LMUL"]
      args["ORIG_LMUL"] = args["LMUL"]
      args["LSEW"] = args[factor + "SEW"]
      args["OP"] = "vf" + args["OP"]

      extra_attr = ExtraAttr.CONVERT
      inst_info = InstInfo.get(
          args,
          decorator,
          InstType.VV,
          extra_attr=extra_attr,
          required_ext=required_ext_list)

      args["TYPE"] = args["TYPES2"]
      src_type_helper = TypeHelper(**args)
      args["TYPE"] = args["TYPES0"]  # destination type
      args["SEW"] = args["LSEW"]  # destination sew
      args["LMUL"] = args["LLMUL"]  # destination lmul
      dst_type_helper = TypeHelper(**args)
      src_type = src_type_helper.v
      dst_type = dst_type_helper.v
      if not type_helper.valid_vtype(dst_type) or\
         not type_helper.valid_vtype(src_type):
        continue

      args["F8TYPE"] = type_list[0].replace("float8", "f8")
      args["OP_REPLACED"] = args["OP"].replace("bf16", "")
      if "ncvtbf16" in args["OP"]:
        func_name = "{OP_REPLACED}_f_f_w_bf16m{ORIG_LMUL}_{F8TYPE}m{LLMUL}".format_map(
            args)
      elif "ncvt" in args["OP"]:
        func_name = "{OP}_f_f_q_{F8TYPE}m{LLMUL}".format_map(args)
      elif "wcvtbf16" in args["OP"]:
        func_name = "{OP_REPLACED}_f_f_v_{F8TYPE}m{ORIG_LMUL}_bf{LSEW}m{LLMUL}".format_map(
            args)
      else:
        assert False, "Unhandled instruction for bfloat16 type"

      G.func(
          inst_info,
          name=func_name + decorator.func_suffix,
          return_type=dst_type,
          **decorator.mask_args(type_helper.m, dst_type),
          **decorator.tu_dest_args(dst_type),
          vs2=src_type,
          **decorator.extra_csr_args(type_helper.uint),
          vl=type_helper.size_t)

      # wcvt doesn't have saturation version
      if "wcvt" in args["OP"]:
        continue

      if "ncvtbf16" in args["OP"]:
        func_name = "{OP_REPLACED}_sat_f_f_w_bf16m{ORIG_LMUL}_{F8TYPE}m{LLMUL}".format_map(
            args)
      elif "ncvt" in args["OP"]:
        func_name = "{OP}_sat_f_f_q_{F8TYPE}m{LLMUL}".format_map(args)

      G.func(
          inst_info,
          name=func_name + decorator.func_suffix,
          return_type=dst_type,
          **decorator.mask_args(type_helper.m, dst_type),
          **decorator.tu_dest_args(dst_type),
          vs2=src_type,
          **decorator.extra_csr_args(type_helper.uint),
          vl=type_helper.size_t)

  G.inst_group_epilogue()
