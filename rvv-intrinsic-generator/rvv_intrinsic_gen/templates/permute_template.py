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

Template for rendering permutation instructions to their corresponding
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

    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      data_type = args["TYPE"]
      op = args["OP"]

      if data_type in ["float", "bfloat"] and\
         op not in ["compress", "slideup", "slidedown"]:
        args["S_TYPE"] = "f"
        args["OP"] = "f" + args["OP"]
        sv_inst_type = InstType.FV
        vs_inst_type = InstType.VF
        vvs_inst_type = InstType.VVF
      else:
        args["S_TYPE"] = "x"
        sv_inst_type = InstType.XV
        vs_inst_type = InstType.VX
        vvs_inst_type = InstType.VVX

      args["OP"] = "v" + args["OP"]

      type_helper = TypeHelper(**args)

      # slide1up/slide1down/mv use float scalar → compute (zvfh for f16)
      # slideup/slidedown/compress treat elements as opaque → data (zvfhmin)
      if op == "mv":
        if decorator.func_suffix == "":
          G.func(
              InstInfo.get(
                  args, decorator, sv_inst_type,
                  required_ext=required_ext_list,
                  is_compute=True),
              name="{OP}_{S_TYPE}_s_{TYPE}{SEW}m{LMUL}_{TYPE}{SEW}".format_map(
                  args),
              return_type=type_helper.s,
              vs1=type_helper.v)
        G.func(
            InstInfo.get(
                args, decorator, vs_inst_type, required_ext=required_ext_list,
                is_compute=True),
            name="{OP}_s_{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.dest_args(type_helper.v),
            rs1=type_helper.s,
            vl=type_helper.size_t)
      elif op in ["slide1up", "slide1down"]:
        G.func(
            InstInfo.get(
                args, decorator, vvs_inst_type, required_ext=required_ext_list,
                is_compute=True),
            name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            **decorator.tu_dest_args(type_helper.v),
            vs2=type_helper.v,
            rs1=type_helper.s,
            vl=type_helper.size_t)
      elif op == "slideup":
        G.func(
            InstInfo.get(
                args, decorator, InstType.VVX, required_ext=required_ext_list,
                is_compute=False),
            name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=type_helper.v,
            vs2=type_helper.v,
            rs1=type_helper.size_t,
            vl=type_helper.size_t)
      elif op == "slidedown":
        G.func(
            InstInfo.get(
                args, decorator, InstType.VVX, required_ext=required_ext_list,
                is_compute=False),
            name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            **decorator.dest_args(type_helper.v),
            vs2=type_helper.v,
            rs1=type_helper.size_t,
            vl=type_helper.size_t)
      elif op == "compress":
        G.func(
            InstInfo.get(
                args, decorator, InstType.VVV, required_ext=required_ext_list,
                is_compute=False),
            name="{OP}_vm_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.dest_args(type_helper.v),
            vs2=type_helper.v,
            vs1=type_helper.m,
            vl=type_helper.size_t)

  G.inst_group_epilogue()
