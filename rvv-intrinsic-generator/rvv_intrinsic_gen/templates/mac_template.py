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

Template for rendering multiply-add instructions to their corresponding
intrinsics.
"""

#pylint: disable=relative-beyond-top-level
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
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  for decorator in decorator_list:
    decorator.write_text_header(G)
    for args in prod(OP=op_list, TYPE=type_list, SEW=sew_list, LMUL=lmul_list):
      assert args["TYPE"] is not None
      data_type = args["TYPE"]
      op = args["OP"]

      args["ORIG_SEW"] = args["SEW"]
      args["ORIG_LMUL"] = args["LMUL"]

      # Integer intrinsics do not have frm variant.
      if "int" in data_type and decorator.flags & ExtraAttr.HAS_FRM:
        continue

      if data_type in ["float", "bfloat"]:
        args["S_TYPE"] = "f"
        args["OP"] = "f" + op
        inst_type = InstType.VVF
      else:
        args["S_TYPE"] = "x"
        inst_type = InstType.VVX

      if op in ["wmacc", "qmacc", "dot4a"] and data_type == "uint":
        args["OP"] = args["OP"] + "u"

      args["OP"] = "v" + args["OP"]

      inst_info_vs = InstInfo.get(
          args,
          decorator,
          inst_type,
          extra_attr=ExtraAttr.MAC,
          required_ext=required_ext_list, is_compute=True)
      inst_info_vv = InstInfo.get(
          args,
          decorator,
          InstType.VVV,
          extra_attr=ExtraAttr.MAC,
          required_ext=required_ext_list, is_compute=True)
      inst_info_vx = InstInfo.get(
          args,
          decorator,
          InstType.VVX,
          extra_attr=ExtraAttr.MAC,
          required_ext=required_ext_list, is_compute=True)

      type_helper = TypeHelper(**args)
      if (("maccsu" in op) or ("maccus" in op) or
          op in ["dot4asu", "dot4aus"]) and data_type == "uint":
        # maccsu and maccus only support int type
        continue
      elif (("w" in op) or ("q" in op) or
            ("dot4" in op)) and ("int" in data_type):
        # going through widening instructions, vdot4a* has same sew for both
        # input and output.
        if "macc" in op:
          w_vtype = type_helper.wv
          args["SEW"] = args["WSEW"]
          args["LMUL"] = args["WLMUL"]
          rt = w_vtype

        if "maccsu" in op:
          G.func(
              inst_info_vv,
              name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              vs1=type_helper.siv,
              vs2=type_helper.uiv,
              vl=type_helper.size_t)
          G.func(
              inst_info_vx,
              name="{OP}_vx_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              rs1=type_helper.sis,
              vs2=type_helper.uiv,
              vl=type_helper.size_t)
        elif "dot4asu" in op:
          G.func(
              inst_info_vv,
              name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.siv,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=type_helper.siv,
              vs2=type_helper.uiv,
              vs1=type_helper.uiv,
              vl=type_helper.size_t)
          G.func(
              inst_info_vx,
              name="{OP}_vx_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.siv,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=type_helper.siv,
              vs2=type_helper.uiv,
              rs1=type_helper.uis,
              vl=type_helper.size_t)
        elif "maccus" in op:
          G.func(
              inst_info_vx,
              name="{OP}_vx_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              rs1=type_helper.uis,
              vs2=type_helper.siv,
              vl=type_helper.size_t)
        elif "dot4aus" in op:
          G.func(
              inst_info_vx,
              name="{OP}_vx_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.siv,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=type_helper.siv,
              vs2=type_helper.uiv,
              rs1=type_helper.uis,
              vl=type_helper.size_t)
        elif "macc" in op:
          G.func(
              inst_info_vv,
              name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              vs1=type_helper.v,
              vs2=type_helper.v,
              vl=type_helper.size_t)
          G.func(
              inst_info_vs,
              name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=rt,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=rt,
              rs1=type_helper.s,
              vs2=type_helper.v,
              vl=type_helper.size_t)
        elif "dot4a" in op:
          G.func(
              inst_info_vv,
              name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=type_helper.v,
              vs2=type_helper.uiv,
              vs1=type_helper.uiv,
              vl=type_helper.size_t)
          G.func(
              inst_info_vs,
              name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              vd=type_helper.v,
              vs2=type_helper.uiv,
              rs1=type_helper.uis,
              vl=type_helper.size_t)
      elif data_type in ["float", "bfloat"] and "w" in op:
        if data_type == "bfloat":
          args["TYPE"] = "float"
          dst_type_helper = TypeHelper(**args)
          dst_type = dst_type_helper.wv
          if "wmaccbf16" in op:
            name_suffix = ""
            name_base_vv = "{OP}_vv_f{WSEW}m{WLMUL}"
            name_base_vf = "{OP}_vf_f{WSEW}m{WLMUL}"
          else:
            name_suffix = "_f{WSEW}m{WLMUL}"
            name_base_vv = "{OP}_vv_bf{ORIG_SEW}m{ORIG_LMUL}"
            name_base_vf = "{OP}_vf_bf{ORIG_SEW}m{ORIG_LMUL}"
        else:
          dst_type = type_helper.wv
          name_suffix = ""
          name_base_vv = "{OP}_vv_{TYPE}{WSEW}m{WLMUL}"
          name_base_vf = "{OP}_v{S_TYPE}_{TYPE}{WSEW}m{WLMUL}"

        G.func(
            inst_info_vv,
            name=(name_base_vv + name_suffix).format_map(args) +
            decorator.func_suffix,
            return_type=dst_type,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=dst_type,
            vs1=type_helper.v,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
        G.func(
            inst_info_vs,
            name=(name_base_vf + name_suffix).format_map(args) +
            decorator.func_suffix,
            return_type=dst_type,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=dst_type,
            vs1=type_helper.s,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
      else:
        G.func(
            inst_info_vv,
            name="{OP}_vv_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=type_helper.v,
            vs1=type_helper.v,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
        G.func(
            inst_info_vs,
            name="{OP}_v{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            vd=type_helper.v,
            rs1=type_helper.s,
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)

  G.inst_group_epilogue()
