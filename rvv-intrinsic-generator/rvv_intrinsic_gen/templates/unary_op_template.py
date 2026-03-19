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

Template for rendering unary operand instructions to their corresponding
intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from enums import ExtraAttr
import copy


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

      if op in ["zext", "sext"]:
        break

      if data_type in ["float", "bfloat"]:
        args["S_TYPE"] = "f"
        args["OP"] = "f" + args["OP"]
        inst_type_vvsm = InstType.VVFM
        inst_type_vs = InstType.VF
      else:
        args["S_TYPE"] = "x"
        inst_type_vvsm = InstType.VVXM
        inst_type_vs = InstType.VX

      args["OP"] = "v" + args["OP"]

      type_helper = TypeHelper(**args)

      if op == "merge":
        extra_attr = ExtraAttr.MERGE
      else:
        extra_attr = ExtraAttr.NO_ATTR

      # merge/mv vector variants are data movement (zvfhmin for f16),
      # scalar-float variants and compute ops need full FP (zvfh for f16)
      is_data = op in ["merge", "mv"]
      is_compute_vv = not is_data
      # Scalar variants (vf, vfm) with float use float scalar register → compute
      is_compute_vs = True

      inst_info_vv = InstInfo.get(
          args,
          decorator,
          InstType.VV,
          extra_attr=extra_attr,
          required_ext=required_ext_list,
          is_compute=is_compute_vv)
      inst_info_vs = InstInfo.get(
          args,
          decorator,
          inst_type_vs,
          extra_attr=extra_attr,
          required_ext=required_ext_list,
          is_compute=is_compute_vs)
      inst_info_vvsm = InstInfo.get(
          args,
          decorator,
          inst_type_vvsm,
          extra_attr=extra_attr,
          required_ext=required_ext_list,
          is_compute=is_compute_vs)

      # Special rule for vfmv_v_v, we don"t have vfmv.v.v but vmv.v.v can used
      # for float type, accrdoing current naming scheming it
      # should be vmv_v_v, same for vmerge.vvm.
      vv_args = args
      if data_type in ["float", "bfloat"] and op in ["mv", "merge"]:
        vv_args = copy.deepcopy(args)
        vv_args["OP"] = "v" + op

      if op == "merge":
        G.func(
            InstInfo.get(
                vv_args,
                decorator,
                InstType.VVVM,
                extra_attr=extra_attr,
                required_ext=required_ext_list,
                is_compute=False),
            name="{OP}_vvm_{TYPE}{SEW}m{LMUL}".format_map(vv_args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.tu_dest_args(type_helper.v),
            vs2=type_helper.v,
            vs1=type_helper.v,
            v0=type_helper.m,
            vl=type_helper.size_t)

        G.func(
            inst_info_vvsm,
            name="{OP}_v{S_TYPE}m_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.tu_dest_args(type_helper.v),
            vs2=type_helper.v,
            rs1=type_helper.s,
            v0=type_helper.m,
            vl=type_helper.size_t)
      elif op == "mv":
        G.func(
            InstInfo.get(
                vv_args, decorator, InstType.VV,
                required_ext=required_ext_list,
                is_compute=False),
            name="{OP}_v_v_{TYPE}{SEW}m{LMUL}".format_map(vv_args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.tu_dest_args(type_helper.v),
            vs1=type_helper.v,
            vl=type_helper.size_t)
        G.func(
            inst_info_vs,
            name="{OP}_v_{S_TYPE}_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.tu_dest_args(type_helper.v),
            rs1=type_helper.s,
            vl=type_helper.size_t)
      elif op in ["sqrt", "rsqrt7", "rec7", "abs", "neg"]:
        assert data_type in ["float", "bfloat"] or op == "neg" or op == "abs"
        if op == "neg" and data_type == "uint":
          continue
        if op == "abs" and data_type == "int":
          return_type = type_helper.uiv
          args["TYPE"] = "uint"
        else:
          return_type = type_helper.v
        G.func(
            inst_info_vv,
            name="{OP}_v_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=return_type,
            **decorator.mask_args(type_helper.m, return_type),
            **decorator.tu_dest_args(return_type),
            vs2=type_helper.v,
            **decorator.extra_csr_args(type_helper.uint),
            vl=type_helper.size_t)
      elif op == "class":
        assert data_type in ["float", "bfloat"]
        if data_type == "bfloat":
          func_name = "{OP}_v_bf{SEW}m{LMUL}_u{SEW}m{LMUL}".format_map(args)
        else:
          func_name = "{OP}_v_u{SEW}m{LMUL}".format_map(args)
        G.func(
            inst_info_vv,
            name=func_name + decorator.func_suffix,
            return_type=type_helper.uiv,
            **decorator.mask_args(type_helper.m, type_helper.uiv),
            **decorator.tu_dest_args(type_helper.uiv),
            vs2=type_helper.v,
            vl=type_helper.size_t)
      elif op == "not":
        G.func(
            inst_info_vv,
            name="{OP}_v_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.v,
            **decorator.mask_args(type_helper.m, type_helper.v),
            **decorator.tu_dest_args(type_helper.v),
            vs=type_helper.v,
            vl=type_helper.size_t)
      else:
        assert False, "Unknown instruction"

    # handle Vector Integer Extension
    for args in prod(
        OP=op_list, TYPE=type_list, SEW=sew_list, EXT=[2, 4, 8],
        LMUL=lmul_list):
      op = args["OP"]
      data_type = args["TYPE"]
      ext = args["EXT"]

      if not op in ["zext", "sext"]:
        break
      if data_type == "uint" and op == "sext":
        continue
      if data_type == "int" and op == "zext":
        continue

      type_helper = TypeHelper(**args)

      args["OP"] = f"v{op}_vf{ext}"

      if ext == 2:
        prefix_lowercase = "w"
        prefix_uppercase = "W"
        inst_type = InstType.WV
      elif ext == 4:
        prefix_lowercase = "q"
        prefix_uppercase = "Q"
        inst_type = InstType.QV
      else:
        prefix_lowercase = "o"
        prefix_uppercase = "O"
        inst_type = InstType.OV

      args["SEW"] = args[prefix_uppercase + "SEW"]
      args["LMUL"] = args[prefix_uppercase + "LMUL"]

      rt_type = getattr(type_helper, prefix_lowercase + "v")
      if not type_helper.valid_vtype(rt_type):
        continue

      inst_info_v = InstInfo.get(
          args,
          decorator,
          inst_type,
          extra_attr=ExtraAttr.INT_EXTENSION,
          required_ext=required_ext_list,
          is_compute=True)

      G.func(
          inst_info_v,
          name="{OP}_{TYPE}{SEW}m{LMUL}".format_map(args) +
          decorator.func_suffix,
          return_type=rt_type,
          **decorator.mask_args(type_helper.m, rt_type),
          **decorator.tu_dest_args(rt_type),
          vs2=type_helper.v,
          vl=type_helper.size_t)

  G.inst_group_epilogue()
