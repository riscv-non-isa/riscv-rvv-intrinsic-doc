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

Template for rendering load instructions to their corresponding intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from utils import get_string_lmul
import collections
from enums import InstInfo
from enums import InstType
from enums import MemType
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
        OP=op_list, TYPE=type_list, SEW=sew_list, EEW=sew_list, LMUL=lmul_list):
      assert args["OP"] is not None
      op = args["OP"]
      sew = args["SEW"]
      eew = args["EEW"]

      type_helper = TypeHelper(**args)

      extra_addr_args = collections.OrderedDict()
      inst_type = InstType.VX
      extra_attr = ExtraAttr.NO_ATTR
      if op in ["vlse"]:
        extra_addr_args["rs2"] = "ptrdiff_t"
        inst_type = InstType.VXX
      if op in ["vloxei", "vluxei"]:
        elmul = type_helper.get_elmul(eew, sew)
        if elmul == 0:
          continue
        elmul_str = get_string_lmul(elmul, 1)
        extra_addr_args["rs2"] = f"vuint{eew}m{elmul_str}_t"
        inst_type = InstType.VV

      if op == "vleff":
        extra_attr |= ExtraAttr.FIRST_FAULT
        args["OP"] = "vle" + str(eew) + "ff"
        extra_addr_args["new_vl"] = "size_t *"
      else:
        args["OP"] = op + str(eew)

      if op not in ["vloxei", "vluxei"] and sew != eew:
        continue
      inst_info =\
      InstInfo.get(args, decorator, inst_type, MemType.LOAD, extra_attr,
                   required_ext=required_ext_list, is_compute=False)
      G.func(
          inst_info,
          name=\
          "{OP}_v_{TYPE}{SEW}m{LMUL}".format_map(args) + decorator.func_suffix,
          return_type=type_helper.v,
          **decorator.mask_args(type_helper.m, type_helper.v),
          **decorator.tu_dest_args(type_helper.v),
          rs1=f"const {type_helper.s} *",
          **extra_addr_args,
          vl=type_helper.size_t)

  G.inst_group_epilogue()
