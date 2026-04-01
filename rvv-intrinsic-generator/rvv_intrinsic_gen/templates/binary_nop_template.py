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

Template for rendering Narrowing Integer Right Shift Add-With-Carry and
Narrowing Fixed-Point Clip instructions to their corresponding intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import TypeHelper
from utils import basic_constraint
from enums import InstInfo
from enums import InstType


def must_int_type(**kargs):
  return kargs["TYPE"] in ["int", "uint"] and basic_constraint(**kargs)


# narrowing op template
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
        constraint=must_int_type,
        OP=op_list,
        TYPE=type_list,
        SEW=sew_list,
        LMUL=lmul_list,
        OP2=["v", "s"]):
      assert args["OP"] is not None
      data_type = args["TYPE"]
      op = args["OP"]
      op2 = args["OP2"]

      if op2 == "s":
        if data_type == "float":
          args["OP2"] = "f"
          inst_type = InstType.VWF
        else:
          args["OP2"] = "x"
          inst_type = InstType.VWX
      else:
        inst_type = InstType.VWV

      if op == "nclip" and data_type == "uint":
        args["OP"] = op + "u"

      args["OP"] = "v" + args["OP"]

      if ((op == "nsrl" and data_type == "int") or
          (op == "nsra" and data_type == "uint")):
        # unsupported cases: unsigned sra is unsupported, signed srl
        # is unsupported
        continue
      type_helper = TypeHelper(**args)

      inst_info = InstInfo.get(
          args, decorator, inst_type, required_ext=required_ext_list, is_compute=True)

      if op in ["nsrl", "nsra", "nclip"]:
        if op2 == "v":
          G.func(
              inst_info,
              name="{OP}_w{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              return_type=type_helper.v,
              vs2=type_helper.wv,
              vs1=type_helper.uiv,
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)
        else:  # vx
          G.func(
              inst_info,
              name="{OP}_w{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              return_type=type_helper.v,
              vs2=type_helper.wv,
              rs1="size_t",
              **decorator.extra_csr_args(type_helper.uint),
              vl=type_helper.size_t)
      else:
        if op2 == "v":
          G.func(
              inst_info,
              name="{OP}_w{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              return_type=type_helper.v,
              vs2=type_helper.wv,
              vs1=type_helper.v,
              vl=type_helper.size_t)
        else:  #vx
          G.func(
              inst_info,
              name="{OP}_w{OP2}_{TYPE}{SEW}m{LMUL}".format_map(args) +
              decorator.func_suffix,
              **decorator.mask_args(type_helper.m, type_helper.v),
              **decorator.tu_dest_args(type_helper.v),
              return_type=type_helper.v,
              vs2=type_helper.wv,
              rs1=type_helper.s,
              vl=type_helper.size_t)

  G.inst_group_epilogue()
