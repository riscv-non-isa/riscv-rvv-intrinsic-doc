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

Template for rendering Add-With-Carry and Subtract-With-Borrow instructions
to their corresponding intrinsics.
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
    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      type_helper = TypeHelper(**args)
      v = type_helper.v
      s = type_helper.s
      m = type_helper.m

      assert args["OP"] is not None
      args["OP"] = "v" + args["OP"]

      inst_info_vvm = InstInfo.get(
          args, decorator, InstType.VVVM, required_ext=required_ext_list, is_compute=True)
      inst_info_vxm = InstInfo.get(
          args, decorator, InstType.VVXM, required_ext=required_ext_list, is_compute=True)

      if not "m" in args["OP"]:
        G.func(
            inst_info=inst_info_vvm,
            name="{OP}_vvm_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=v,
            **decorator.tu_dest_args(v),
            vs2=v,
            vs1=v,
            v0=m,
            vl=type_helper.size_t)
        G.func(
            inst_info=inst_info_vxm,
            name="{OP}_vxm_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=v,
            **decorator.tu_dest_args(v),
            vs2=v,
            rs1=s,
            v0=m,
            vl=type_helper.size_t)

    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      type_helper = TypeHelper(**args)
      v = type_helper.v
      s = type_helper.s
      m = type_helper.m

      assert args["OP"] is not None
      args["OP"] = "v" + args["OP"]

      inst_info_vvm = InstInfo.get(
          args, None, InstType.VVVM, required_ext=required_ext_list, is_compute=True)
      inst_info_vxm = InstInfo.get(
          args, None, InstType.VVXM, required_ext=required_ext_list, is_compute=True)

      inst_info_vv = InstInfo.get(
          args, None, InstType.VVV, required_ext=required_ext_list, is_compute=True)
      inst_info_vx = InstInfo.get(
          args, None, InstType.VVX, required_ext=required_ext_list, is_compute=True)

      # madc or msbc
      if "m" in args["OP"]:
        args["MLEN"] = type_helper.mlen
        G.func(
            inst_info_vvm,
            name="{OP}_vvm_{TYPE}{SEW}m{LMUL}_b{MLEN}".format_map(args) +
            decorator.func_suffix,
            return_type=m,
            vs2=v,
            vs1=v,
            v0=m,
            vl=type_helper.size_t)
        G.func(
            inst_info_vxm,
            name="{OP}_vxm_{TYPE}{SEW}m{LMUL}_b{MLEN}".format_map(args) +
            decorator.func_suffix,
            return_type=m,
            vs2=v,
            rs1=s,
            v0=m,
            vl=type_helper.size_t)
        G.func(
            inst_info_vv,
            name="{OP}_vv_{TYPE}{SEW}m{LMUL}_b{MLEN}".format_map(args) +
            decorator.func_suffix,
            return_type=m,
            vs2=v,
            vs1=v,
            vl=type_helper.size_t)
        G.func(
            inst_info_vx,
            name="{OP}_vx_{TYPE}{SEW}m{LMUL}_b{MLEN}".format_map(args) +
            decorator.func_suffix,
            return_type=m,
            vs2=v,
            rs1=s,
            vl=type_helper.size_t)

  G.inst_group_epilogue()
