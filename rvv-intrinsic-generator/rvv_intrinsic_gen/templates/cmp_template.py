"""
--------------------------------------------------------------------------------
Copyright 2022 SiFive Inc

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

Template for rendering comparison instructions to their corresponding
intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType


def render(G,
           op_list,
           type_list,
           sew_list,
           lmul_list,
           decorator_list,
           description,
           required_ext_list=None):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    for args in prod(
        OP=op_list,
        TYPE=type_list,
        SEW=sew_list,
        LMUL=lmul_list,
        OP2=["v", "s"]):
      assert args["OP"] is not None
      data_type = args["TYPE"]
      op = args["OP"]
      op2 = args["OP2"]

      type_helper = TypeHelper(**args)

      args["MLEN"] = type_helper.mlen

      if data_type in ["float", "bfloat"]:
        if op2 == "s":
          args["OP2"] = "f"
          inst_type = InstType.VVF
        else:
          inst_type = InstType.VVV
        op = "mf" + op
      else:
        if op2 == "s":
          args["OP2"] = "x"
          inst_type = InstType.VVX
        else:
          inst_type = InstType.VVV
        op = "ms" + op
        if args["OP"] not in ["eq", "ne"] and data_type == "uint":
          op = op + "u"

      args["OP"] = "v" + op
      inst_info = InstInfo.get(
          args, decorator, inst_type, required_ext=required_ext_list, is_compute=True)
      if op2 == "v":
        G.func(
            inst_info,
            name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}_b{MLEN}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.m,
            **decorator.mask_args(type_helper.m, type_helper.m),
            **decorator.tu_dest_args(type_helper.v),
            vs2=type_helper.v,
            vs1=type_helper.v,
            vl=type_helper.size_t)
      else:  # vx, vf
        G.func(
            inst_info,
            name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}_b{MLEN}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.m,
            **decorator.mask_args(type_helper.m, type_helper.m),
            **decorator.tu_dest_args(type_helper.v),
            vs2=type_helper.v,
            rs1=type_helper.s,
            vl=type_helper.size_t)

  G.inst_group_epilogue()
