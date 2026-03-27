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

Template for rendering binary operand instructions to their corresponding
intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from utils import get_string_lmul
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
    for args in prod(
        OP=op_list,
        TYPE=type_list,
        SEW=sew_list,
        LMUL=lmul_list,
        OP2=["v", "s"]):
      assert args["OP"] is not None
      data_type = args["TYPE"]
      op = args["OP"]
      sew = args["SEW"]
      op2 = args["OP2"]

      if op2 == "s":
        if data_type in ["float", "bfloat"] and op != "rgather":
          args["OP2"] = "f"
        else:
          args["OP2"] = "x"
      if data_type == "uint" and op in [
          "max", "min", "mulh", "div", "rem", "sadd", "ssub", "aadd", "asub"
      ]:
        args["OP"] = op + "u"

      type_helper = TypeHelper(**args)

      # rgather/rgatherei16/zip/paire/pairo are data movement; everything else is compute
      is_compute = op not in ["rgather", "rgatherei16", "zip", "paire", "pairo"]

      s_op2 = None
      if (op in ["mulhsu", "ssra", "sra"] and data_type == "uint") or \
         (op in ["ssrl", "srl"] and data_type == "int"):
        # Unsigned mulhsu and ssra are unsupported, signed ssrl is unsupported
        continue
      if (op2 == "v") and op in ["rsub", "frsub", "frdiv"]:
        # rsub and rdiv only support vs version
        continue
      if op2 == "s" and op == "rgatherei16":
        # rgatheri16 only support vv version
        continue
      if op in ["abd", "abdu"]:
        # abd and abdu only support vv version.
        if op2 != "v":
          continue
        args["TYPE"] = "uint"
      if op2 != "v" and op in ["zip", "paire", "pairo"]:
        # zip/paire/pairo only support vv version
        continue
      if op == "rgather":
        v_op2 = type_helper.uiv
        s_op2 = type_helper.size_t
      elif op == "rgatherei16":
        elmul = type_helper.get_elmul(16, sew)
        if elmul == 0:
          continue
        elmul_str = get_string_lmul(elmul, 1)
        v_op2 = f"vuint16m{elmul_str}_t"
      elif ("mulhsu" in op and data_type == "int"):
        v_op2 = type_helper.uiv
        s_op2 = type_helper.uis
      else:
        v_op2 = type_helper.v
        s_op2 = type_helper.s

      args["OP"] = "v" + args["OP"]

      inst_info_vv = InstInfo.get(
          args, decorator, InstType.VVV, required_ext=required_ext_list, is_compute=is_compute)
      inst_info_vx = InstInfo.get(
          args, decorator, InstType.VVX, required_ext=required_ext_list, is_compute=is_compute)
      inst_info_vf = InstInfo.get(
          args, decorator, InstType.VVF, required_ext=required_ext_list, is_compute=is_compute)
      inst_info_v = InstInfo.get(
          args, decorator, InstType.VV, required_ext=required_ext_list, is_compute=is_compute)
      if args["OP2"] == "v":
        inst_info = inst_info_vv
      elif args["OP2"] == "x":
        inst_info = inst_info_vx
      elif args["OP2"] == "f":
        inst_info = inst_info_vf
      else:
        raise ValueError("Unknown op2 type.")

      if op in ["ssra", "sra", "ssrl", "srl", "sll"]:
        if args["OP2"] == "v":
          G.func(
              inst_info,
              name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              vs2=type_helper.v,
              vs1=type_helper.uiv,
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)
        else:  # vx, vf
          G.func(
              inst_info,
              name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              vs2=type_helper.v,
              rs1="size_t",
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)

      elif "rgather" == op:
        if op2 == "v":
          G.func(
              InstInfo.get(
                  args, decorator, InstType.VVV,
                  required_ext=required_ext_list, is_compute=is_compute),
              name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              vs2=type_helper.v,
              vs1=v_op2,
              vl=type_helper.size_t)
        else:  # vx
          G.func(
              InstInfo.get(
                  args, decorator, InstType.VVV,
                  required_ext=required_ext_list, is_compute=is_compute),
              name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              vs2=type_helper.v,
              vs1=s_op2,
              vl=type_helper.size_t)
      elif op in ["abd", "abdu"]:
        G.func(
            inst_info,
            name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.uiv,
            **decorator.mask_args(type_helper.m, type_helper.uiv),
            **decorator.tu_dest_args(type_helper.uiv),
            vs2=type_helper.v,
            vs1=v_op2,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
      elif "zip" == op:
        G.func(
            InstInfo.get(
                args, decorator, InstType.VVV,
                required_ext=required_ext_list, is_compute=is_compute),
            name="{OP}_v{OP2}_{TYPE}{SEW}m{WLMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v_lmulx2,
            **decorator.mask_args(type_helper.m, type_helper.v_lmulx2),
            **decorator.tu_dest_args(type_helper.v_lmulx2),
            vs2=type_helper.v,
            vs1=v_op2,
            vl=type_helper.size_t)
      elif op in ["paire", "pairo"]:
        G.func(
            InstInfo.get(
                args, decorator, InstType.VVV,
                required_ext=required_ext_list, is_compute=is_compute),
            name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            **decorator.tu_dest_args(type_helper.v),
            vs2=type_helper.v,
            vs1=v_op2,
            vl=type_helper.size_t)
      else:
        if op2 == "v":
          G.func(
              inst_info,
              name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              vs2=type_helper.v,
              vs1=v_op2,
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)
        else:  # vx, vf
          G.func(
              inst_info,
              name="{OP}_v{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              return_type=type_helper.v,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              vs2=type_helper.v,
              rs1=s_op2,
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)

  G.inst_group_epilogue()
