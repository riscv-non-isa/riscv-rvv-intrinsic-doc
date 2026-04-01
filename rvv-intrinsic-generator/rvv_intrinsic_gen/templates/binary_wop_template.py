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

Template for rendering Widening Integer/Floating-Point Add/Subtract/Multiply
instructions to their corresponding intrinsics.
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
      assert args["OP"] is not None
      data_type = args["TYPE"]
      op = args["OP"]

      args["ORIG_SEW"] = args["SEW"]
      args["ORIG_LMUL"] = args["LMUL"]

      type_helper = TypeHelper(**args)

      if op == "wmul" and data_type == "uint":
        args["OP"] = op + "u"

      if op in ["wadd", "wsub"] and data_type == "uint":
        args["OP"] = op + "u"

      args["OP"] = "v" + args["OP"]

      inst_info_wvv = InstInfo.get(
          args, decorator, InstType.WVV, required_ext=required_ext_list, is_compute=True)
      inst_info_wvx = InstInfo.get(
          args, decorator, InstType.WVX, required_ext=required_ext_list, is_compute=True)
      inst_info_wvf = InstInfo.get(
          args, decorator, InstType.WVF, required_ext=required_ext_list, is_compute=True)
      inst_info_wwv = InstInfo.get(
          args, decorator, InstType.WWV, required_ext=required_ext_list, is_compute=True)
      inst_info_wwx = InstInfo.get(
          args, decorator, InstType.WWX, required_ext=required_ext_list, is_compute=True)
      inst_info_wwf = InstInfo.get(
          args, decorator, InstType.WWF, required_ext=required_ext_list, is_compute=True)

      if data_type == "bfloat":
        name_suffix = "_f{WSEW}m{WLMUL}"
        name_base_vv = "{OP}_vv_bf{ORIG_SEW}m{ORIG_LMUL}"
        name_base_vf = "{OP}_vf_bf{ORIG_SEW}m{ORIG_LMUL}"
        name_base_wv = "{OP}_wv_bf{ORIG_SEW}m{ORIG_LMUL}"
        name_base_wf = "{OP}_wf_bf{ORIG_SEW}"
      else:
        name_suffix = ""
        name_base_vv = "{OP}_vv_{TYPE}{SEW}m{LMUL}"
        name_base_vf = "{OP}_v{SCALAR}_{TYPE}{SEW}m{LMUL}"
        name_base_wv = "{OP}_wv_{TYPE}{SEW}m{LMUL}"
        name_base_wf = "{OP}_w{SCALAR}_{TYPE}{SEW}m{LMUL}"

      args["LMUL"] = args["WLMUL"]
      args["SEW"] = args["WSEW"]
      if data_type in ["float", "bfloat"]:
        args["SCALAR"] = "f"
        inst_info_wws = inst_info_wwf
        inst_info_wvs = inst_info_wvf
      else:
        args["SCALAR"] = "x"
        inst_info_wws = inst_info_wwx
        inst_info_wvs = inst_info_wvx

      if op == "wmulsu":
        if data_type != "int":
          # unsupported cases: wmulsu only support int type
          pass
        else:  #data_type == "int"
          G.func(
              inst_info_wvv,
              name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.wv,
              **decorator.mask_args(type_helper.m, type_helper.wv),
              **decorator.tu_dest_args(type_helper.wv),
              vs2=type_helper.v,
              vs1=type_helper.uiv,
              vl=type_helper.size_t)
          G.func(
              inst_info_wvs,
              name="{OP}_v{SCALAR}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.wv,
              **decorator.mask_args(type_helper.m, type_helper.wv),
              **decorator.tu_dest_args(type_helper.wv),
              vs2=type_helper.v,
              rs1=type_helper.uis,
              vl=type_helper.size_t)
      else:
        G.func(
            inst_info_wvv,
            name=(name_base_vv + name_suffix).format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.wv,
            **decorator.mask_args(type_helper.m, type_helper.wv),
            **decorator.tu_dest_args(type_helper.wv),
            vs2=type_helper.v,
            vs1=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
        G.func(
            inst_info_wvs,
            name=(name_base_vf + name_suffix).format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.wv,
            **decorator.mask_args(type_helper.m, type_helper.wv),
            **decorator.tu_dest_args(type_helper.wv),
            vs2=type_helper.v,
            rs1=type_helper.s,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)

      if "add" in op or "sub" in op:
        # integer/floating wadd and wsub support "2*sew = 2*sew op SEW"
        G.func(
            inst_info_wwv,
            name=(name_base_wv + name_suffix).format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.wv,
            **decorator.mask_args(type_helper.m, type_helper.wv),
            **decorator.tu_dest_args(type_helper.wv),
            vs2=type_helper.wv,
            vs1=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
        G.func(
            inst_info_wws,
            name=(name_base_wf + name_suffix).format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.wv,
            **decorator.mask_args(type_helper.m, type_helper.wv),
            **decorator.tu_dest_args(type_helper.wv),
            vs2=type_helper.wv,
            rs1=type_helper.s,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)

  G.inst_group_epilogue()
