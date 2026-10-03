"""
Template for rendering vector crypto intrinsics.
Current version is for v20230531.
https://github.com/riscv/riscv-crypto/blob/v20230531/doc/vector/riscv-crypto-spec-vector.adoc
"""

from utils import prod
from utils import TypeHelper
from enums import InstInfo
from enums import InstType
from enums import ExtraAttr

operand_mnemonic_dict = {}
# Zvbb: Vector Bit-manipulation used in Cryptography
operand_mnemonic_dict["vandn"] = ["vv", "vx"]
operand_mnemonic_dict["vbrev"] = ["v"]
operand_mnemonic_dict["vbrev8"] = ["v"]
operand_mnemonic_dict["vrev8"] = ["v"]
operand_mnemonic_dict["vclz"] = ["v"]
operand_mnemonic_dict["vctz"] = ["v"]
operand_mnemonic_dict["vcpop"] = ["v"]
operand_mnemonic_dict["vrol"] = ["vv", "vx"]
operand_mnemonic_dict["vror"] = ["vv", "vx"]  # saving the `vi` variant
operand_mnemonic_dict["vwsll"] = ["vv", "vx"]  # saving the `vi` variant
# Zvbc/Zvbc32e: Vector Carryless Multiplication
operand_mnemonic_dict["vclmul"] = ["vv", "vx"]
operand_mnemonic_dict["vclmulh"] = ["vv", "vx"]
# Zvkg/Zvkgs: Vector GCM/GMAC
operand_mnemonic_dict["vghsh"] = ["vv", "vs"]
operand_mnemonic_dict["vgmul"] = ["vv", "vs"]
# Zvkned: NIST Suite: Vector AES Block Cipher
operand_mnemonic_dict["vaesef"] = ["vv", "vs"]
operand_mnemonic_dict["vaesem"] = ["vv", "vs"]
operand_mnemonic_dict["vaesdf"] = ["vv", "vs"]
operand_mnemonic_dict["vaesdm"] = ["vv", "vs"]
operand_mnemonic_dict["vaeskf1"] = ["vi"]
operand_mnemonic_dict["vaeskf2"] = ["vi"]
operand_mnemonic_dict["vaesz"] = ["vs"]
# Zvkned: NIST Suite: Vector AES Block Cipher
operand_mnemonic_dict["vsha2ms"] = ["vv"]
operand_mnemonic_dict["vsha2ch"] = ["vv"]
operand_mnemonic_dict["vsha2cl"] = ["vv"]
# Zvkned: NIST Suite: Vector AES Block Cipher
operand_mnemonic_dict["vsm4k"] = ["vi"]
operand_mnemonic_dict["vsm4r"] = ["vv", "vs"]
# Zvksh: ShangMi Suite: SM3 Secure Hash
operand_mnemonic_dict["vsm3me"] = ["vv"]
operand_mnemonic_dict["vsm3c"] = ["vi"]


def has_vd_input(name):
  has_vd_input_inst_set = {
      "vghsh", "vgmul", "vaesef", "vaesem", "vaesdf", "vaesdm", "vaesz",
      "vsha2ms", "vsha2ch", "vsha2cl", "vsm4r", "vsm3c", "vaeskf2"
  }

  return name in has_vd_input_inst_set


def has_vs1_input(name):
  has_vs1_input_inst_set = {
      "vandn", "vrol", "vror", "vwsll", "vclmul", "vclmulh", "vghsh", "vsha2ms",
      "vsha2ch", "vsha2cl", "vsm3me"
  }

  return name in has_vs1_input_inst_set


def has_rs1_input(name):
  has_rs1_input_inst_set = {
      "vandn", "vrol", "vror", "vwsll", "vclmul", "vclmulh"
  }

  return name in has_rs1_input_inst_set


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
      op = args["OP"]
      for operand_mnemonic in operand_mnemonic_dict[op]:
        # Dirty: patching operand_mnemonic is order to discriminate between
        # (vghsh/vgmul).vv (zvkg) and (vghsh/vgmul).vs (zvkgs)
        if op in ["vghsh", "vgmul"]:
          if "zvkgs" in required_ext_list and operand_mnemonic != "vs":
            continue
          if "zvkgs" not in required_ext_list and operand_mnemonic == "vs":
            continue

        if operand_mnemonic in ("vv", "vs"):
          if op == "vwsll":
            inst_info = InstInfo.get(
                args,
                decorator,
                InstType.WVV,
                ExtraAttr.NO_ATTR,
                required_ext=required_ext_list)
          else:
            inst_info = InstInfo.get(
                args,
                decorator,
                InstType.VV,
                ExtraAttr.NO_ATTR,
                required_ext=required_ext_list)
        elif operand_mnemonic == "vx":
          if op == "vwsll":
            inst_info = InstInfo.get(
                args,
                decorator,
                InstType.WVX,
                ExtraAttr.NO_ATTR,
                required_ext=required_ext_list)
          else:
            inst_info = InstInfo.get(
                args,
                decorator,
                InstType.VX,
                ExtraAttr.NO_ATTR,
                required_ext=required_ext_list)
        elif operand_mnemonic == "vi":
          inst_info = InstInfo.get(
              args,
              decorator,
              InstType.VI,
              ExtraAttr.NO_ATTR,
              required_ext=required_ext_list)
        elif operand_mnemonic == "v":
          inst_info = InstInfo.get(
              args,
              decorator,
              InstType.V,
              ExtraAttr.NO_ATTR,
              required_ext=required_ext_list)
        else:
          assert False, "Unreachable, unrecognized mnemonic"

        args["MNEMONIC"] = operand_mnemonic
        type_helper = TypeHelper(**args)
        kwargs = {}
        if op == "vwsll":
          kwargs["return_type"] = type_helper.wv
        else:
          kwargs["return_type"] = type_helper.v
        if op == "vwsll":
          kwargs = {
              **kwargs,
              **decorator.mask_args(type_helper.m, type_helper.wv)
          }
        else:
          kwargs = {
              **kwargs,
              **decorator.mask_args(type_helper.m, type_helper.v)
          }
        # If vd is already in the input parameter, we don't need to emit another
        # parameter when tail policy is TU.
        if has_vd_input(op):
          kwargs["vd"] = type_helper.v
        else:
          if op == "vwsll":
            kwargs = {**kwargs, **decorator.tu_dest_args(type_helper.wv)}
          else:
            kwargs = {**kwargs, **decorator.tu_dest_args(type_helper.v)}

        kwargs["vs2"] = type_helper.v

        if operand_mnemonic == "vv" and has_vs1_input(op):
          kwargs["vs1"] = type_helper.v
        if operand_mnemonic == "vx" and has_rs1_input(op):
          if op in ["vwsll", "vrol", "vror"]:
            kwargs["rs1"] = type_helper.size_t
          else:
            kwargs["rs1"] = type_helper.s
        if "vi" in operand_mnemonic_dict[op]:
          kwargs["uimm"] = type_helper.size_t

        kwargs["vl"] = type_helper.size_t

        lmul_num = 2**(lmul_list.index(args["LMUL"]) - 3)
        if int(args["SEW"] / lmul_num) == 64:
          inst_info.add_required_ext("zve64x")
        else:
          inst_info.add_required_ext("zve32x")
        # Add Zvl constraint
        # If zvkg, zvkned, zvknha, zvknhb, zvksed, zvksh in required_ext_list,
        # then add Zvl constraint by checking if LMUL * VLEN >= EGW
        if any(ext in inst_info.get_required_exts() for ext in
               ["zvkg", "zvkned", "zvknha", "zvknhb", "zvksed", "zvksh"]):
          # EGW = EGS * EEW(SEW)
          # For SM3 instruction group (Zvksh), EGS = 8, otherwise EGS = 4
          if op in ["vsm3me", "vsm3c"]:
            EGW = int(8 * args["SEW"])
          else:
            EGW = int(4 * args["SEW"])
          required_VLEN = int(EGW / lmul_num)
          if required_VLEN >= 32:
            inst_info.add_required_ext(f"zvl{int(EGW / lmul_num)}b")
        # If SEW == 64, zvknhb is required.
        # Zvknhb also requires zve64x
        # Note that zvknhb is mutually exclusive with zvknha
        if op in ["vsha2ms", "vsha2ch", "vsha2cl"] and args["SEW"] == 64:
          inst_info.remove_required_ext("zvknha")
          inst_info.add_required_ext("zvknhb")
          inst_info.add_required_ext("zve64x")

        if operand_mnemonic == "vs":
          starting_from_lmul_index = lmul_list.index(args["LMUL"])
          # print(starting_from_lmul_index)
          for i in range(starting_from_lmul_index, len(lmul_list)):
            if args["LMUL"] == 8:
              continue

            kwargs["return_type"] =\
                f"v{args['TYPE']}{args['SEW']}m{lmul_list[i]}_t"
            kwargs["vd"] = f"v{args['TYPE']}{args['SEW']}m{lmul_list[i]}_t"
            kwargs["vs2"] = f"v{args['TYPE']}{args['SEW']}m{args['LMUL']}_t"
            func_name = "{OP}_{MNEMONIC}_".format_map(args) +\
                        f"{args['TYPE']}{args['SEW']}m{args['LMUL']}_" +\
                          f"{args['TYPE']}{args['SEW']}m{lmul_list[i]}"
            G.func(inst_info, name=func_name + decorator.func_suffix, **kwargs)
        else:
          if op == "vwsll":
            G.func(
                inst_info,
                name="{OP}_{MNEMONIC}_{TYPE}{WSEW}m{WLMUL}".format_map(args) +
                decorator.func_suffix,
                **kwargs)
          else:
            G.func(
                inst_info,
                name="{OP}_{MNEMONIC}_{TYPE}{SEW}m{LMUL}".format_map(args) +
                decorator.func_suffix,
                **kwargs)

  G.inst_group_epilogue()
