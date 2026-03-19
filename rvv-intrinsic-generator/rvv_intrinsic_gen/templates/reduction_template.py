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

Template for rendering reduction instructions to their corresponding
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
      assert args["OP"] is not None
      data_type = args["TYPE"]
      op = args["OP"]
      sew = args["SEW"]

      type_helper = TypeHelper(**args)

      # No frm variant for vfredmax and vfredmin
      if decorator.flags & ExtraAttr.HAS_FRM and ("max" in op or "min" in op):
        continue

      if data_type == "float":
        args["OP"] = "f" + op
      if data_type == "uint" and op in ["redmax", "redmin", "wredsum"]:
        args["OP"] = args["OP"] + "u"

      if "w" in op:
        s = type_helper.wvm1
        args["WSEW"] = 2 * sew
        inst_type = InstType.W1VW1
      else:
        inst_type = InstType.V1VV1
        s = type_helper.vm1

      if not type_helper.valid_vtype(s):
        continue

      args["OP"] = "v" + args["OP"]

      inst_info = InstInfo.get(
          args,
          decorator,
          inst_type,
          extra_attr=ExtraAttr.REDUCE,
          required_ext=required_ext_list, is_compute=True)
      if (data_type == "float" and
          op in ["redosum","redusum","redmax","redmin","wredosum","wredusum"])\
         or ("int" in data_type):
        if "w" in op:
          G.func(
              inst_info,
              name="{OP}_vs_{TYPE}{SEW}m{LMUL}_{TYPE}{WSEW}m1".format_map(args)
              + decorator.func_suffix,
              return_type=s,
              **decorator.mask_args(type_helper.m, s),
              **decorator.dest_args(s),
              vs2=type_helper.v,
              vs1=s,
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)
        else:
          G.func(
              inst_info,
              name="{OP}_vs_{TYPE}{SEW}m{LMUL}_{TYPE}{SEW}m1".format_map(args) +
              decorator.func_suffix,
              return_type=s,
              **decorator.mask_args(type_helper.m, s),
              **decorator.dest_args(s),
              vs2=type_helper.v,
              vs1=s,
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)

  G.inst_group_epilogue()
