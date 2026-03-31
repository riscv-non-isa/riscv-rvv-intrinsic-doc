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

Declares the intrinsics and links to the templates for its realization into
function prototype. The documents are generated under the sequence and
grouping.
"""

from intrinsic_decorator import IntrinsicDecorators
from legacy_intrinsic_decorator import LegacyIntrinsicDecorators
from templates import setvl_template
from templates import load_template
from templates import seg_load_template
from templates import store_template
from templates import seg_store_template
from templates import binary_op_template
from templates import binary_wop_template
from templates import binary_nop_template
from templates import binary_intcarry_template
from templates import cmp_template
from templates import mac_template
from templates import unary_op_template
from templates import cvt_op_template
from templates import misc_op_template
from templates import reint_op_template
from templates import get_set_diff_lmul_op_template
from templates import reduction_template
from templates import mask_template
from templates import mask_load_store_template
from templates import permute_template
from templates import zvfofp8min_template
from templates import zvdota_template
from templates import zvbdota_template
from constants import NONFRACLMULS,LMULS,WLMULS,NCVTLMULS,SEWS,WSEWS,FSEWS,\
  WFSEWS,NSEWS,TYPES,ITYPE,ITYPES,FTYPES,BFTYPES,MTYPES,MLENS
from generator import CompatibleHeaderGenerator


def gen(g):
  if isinstance(g, CompatibleHeaderGenerator):
    decorators = LegacyIntrinsicDecorators(g.has_tail_policy)
  else:
    decorators = IntrinsicDecorators(g.has_tail_policy)

  ####################################################################
  g.start_group("Vector Loads and Stores Intrinsics")

  g.function_group(load_template, "Vector Unit-Stride Load Intrinsics",
                   "vector-unit-stride-load", ["vle"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Unit-Stride Store Intrinsics",
                   "vector-unit-stride-store", ["vse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(mask_load_store_template,
                   "Vector Mask Load/Store Intrinsics", "vector-unit-stride",
                   ["vlm", "vsm"], MTYPES, MLENS, [1],
                   decorators.has_no_masking)

  g.function_group(load_template, "Vector Strided Load Intrinsics",
                   "vector-strided-load", ["vlse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Strided Store Intrinsics",
                   "vector-strided-store", ["vsse"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff)

  g.function_group(load_template, "Vector Indexed Load Intrinsics",
                   "vector-indexed-load", ["vloxei", "vluxei"], TYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(store_template, "Vector Indexed Store Intrinsics",
                   "vector-indexed-store", ["vsoxei", "vsuxei"], TYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(load_template,
                   "Unit-stride Fault-Only-First Loads Intrinsics",
                   "unit-stride-fault-only-first-loads", ["vleff"], TYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  ####################################################################

  g.start_group("Vector Loads and Stores Segment Intrinsics")

  g.function_group(seg_load_template,
                   "Vector Unit-Stride Segment Load Intrinsics",
                   "vector-unit-stride-segment-load", ["vlseg", "vlsegff"],
                   TYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Unit-Stride Segment Store Intrinsics",
                   "vecrtor-unit-stride-segment-store", ["vsseg"], TYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(seg_load_template, "Vector Strided Segment Load Intrinsics",
                   "vector-strided-segment-load", ["vlsseg"], TYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Strided Segment Store Intrinsics",
                   "vector-strided-segment-store", ["vssseg"], TYPES, SEWS,
                   LMULS, decorators.has_masking_no_maskedoff)

  g.function_group(seg_load_template, "Vector Indexed Segment Load Intrinsics",
                   "vector-indexed-segment-load", ["vloxseg", "vluxseg"], TYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(seg_store_template,
                   "Vector Indexed Segment Store Intrinsics",
                   "vector-indexed-segment-store", ["vsoxseg", "vsuxseg"],
                   TYPES, SEWS, LMULS, decorators.has_masking_no_maskedoff)

  ####################################################################

  g.start_group("Vector Integer Arithmetic Intrinsics")

  g.function_group(binary_op_template,
                   "Vector Single-Width Integer Add and Subtract Intrinsics",
                   "vector-single-width-integer-add-and-subtract",
                   ["add", "sub", "rsub"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_wop_template,
                   "Vector Widening Integer Add/Subtract Intrinsics",
                   "vector-widening-integer-add-subtract", ["wadd", "wsub"],
                   ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(cvt_op_template, "Vector Integer Widening Intrinsics",
                   "vector-integer-widening", ["wcvt"], ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Integer Extension Intrinsics",
                   "vector-integer-extension", ["zext", "sext"], ITYPES, SEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Integer Neg Intrinsics",
                   "vector-integer-neg", ["neg"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  if g.has_tail_policy:
    g.function_group(
        binary_intcarry_template,
        "Vector Integer Add-with-Carry / Subtract-with-Borrow Intrinsics",
        "vector-integer-add-with-carry-subtract-with-borrow", ["adc", "sbc"],
        ITYPES, SEWS, LMULS, decorators.has_no_masking_policy)

    g.function_group(binary_intcarry_template,
                     "Vector Integer Carry-out / Borrow-out Intrinsics",
                     "vector-integer-carry-out-borrow-out", ["madc", "msbc"],
                     ITYPES, SEWS, LMULS, decorators.has_no_masking)
  else:
    g.function_group(
        binary_intcarry_template,
        "Vector Integer Add-with-Carry / Subtract-with-Borrow Intrinsics",
        "vector-integer-add-with-carry-subtract-with-borrow",
        ["adc", "sbc", "madc", "msbc"], ITYPES, SEWS, LMULS,
        decorators.has_no_masking)

  g.function_group(binary_op_template,
                   "Vector Bitwise Binary Logical Intrinsics",
                   "vector-bitwise-binary-logical", ["and", "or", "xor"],
                   ITYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Bitwise Unary Logical Intrinsics",
                   "vector-bitwise-unary-logical", ["not"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Single-Width Bit Shift Intrinsics",
                   "vector-single-width-bit-shift", ["sll", "srl", "sra"],
                   ITYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(binary_nop_template,
                   "Vector Narrowing Integer Right Shift Intrinsics",
                   "vector-narrowing-integer-right-shift", ["nsrl", "nsra"],
                   ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(cvt_op_template, "Vector Integer Narrowing Intrinsics",
                   "vector-integer-narrowing", ["ncvt"], ITYPES, NSEWS,
                   NCVTLMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(cmp_template, "Vector Integer Compare Intrinsics",
                   "vector-integer-comparison",
                   ["eq", "ne", "lt", "le", "gt", "ge"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(binary_op_template, "Vector Integer Min/Max Intrinsics",
                   "vector-integer-minmax", ["min", "max"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Single-Width Integer Multiply Intrinsics",
                   "vector-single-width-integer-multiply",
                   ["mul", "mulh", "mulhsu"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template, "Vector Integer Divide Intrinsics",
                   "vector-integer-divide", ["div", "rem"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(binary_wop_template,
                   "Vector Widening Integer Multiply Intrinsics",
                   "vector-widening-integer-multiply", ["wmul", "wmulsu"],
                   ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(mac_template,
                   "Vector Single-Width Integer Multiply-Add Intrinsics",
                   "vector-single-width-integer-multiply-add",
                   ["macc", "nmsac", "madd", "nmsub"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_policy)

  g.function_group(mac_template,
                   "Vector Widening Integer Multiply-Add Intrinsics",
                   "vector-widening-integer-multiply-add",
                   ["wmacc", "wmaccsu", "wmaccus"], ITYPES, WSEWS, WLMULS,
                   decorators.has_masking_no_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Integer Merge Intrinsics",
                   "vector-integer-merge", ["merge"], ITYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector Integer Move Intrinsics",
                   "vector-integer-move", ["mv"], ITYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  ####################################################################
  g.start_group("Vector Fixed-Point Arithmetic Intrinsics")
  vxsat_description = "After executing an intrinsic in this section, " + \
                      "the `vxsat` CSR assumes an UNSPECIFIED value."

  g.function_group(
      binary_op_template,
      "Vector Single-Width Saturating Add and Subtract Intrinsics",
      "vector-single-width-saturating-add-and-subtract", ["sadd", "ssub"],
      ITYPES,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy,
      description=vxsat_description)

  g.function_group(binary_op_template,
                   "Vector Single-Width Averaging Add and Subtract Intrinsics",
                   "vector-single-width-averaging-add-and-subtract",
                   ["aadd", "asub"], ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Fractional Multiply with Rounding and Saturation" +
      "Intrinsics",
      "vector-single-width-fractional-multiply-with-rounding-and-" +
      "saturation", ["smul"], ["int"],
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy_vxrm,
      description=vxsat_description)

  g.function_group(binary_op_template,
                   "Vector Single-Width Scaling Shift Intrinsics",
                   "vector-single-width-scaling-shift", ["ssrl", "ssra"],
                   ITYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_vxrm)

  g.function_group(
      binary_nop_template,
      "Vector Narrowing Fixed-Point Clip Intrinsics",
      "vector-narrowing-fixed-point-clip", ["nclip"],
      ITYPES,
      WSEWS,
      WLMULS,
      decorators.has_masking_maskedoff_policy_vxrm,
      description=vxsat_description)

  ####################################################################
  g.start_group("Vector Floating-Point Intrinsics")

  g.function_group(
      binary_op_template,
      "Vector Single-Width Floating-Point Add/Subtract Intrinsics",
      "vector-single-width-floating-point-add-subtract",
      ["fadd", "fsub", "frsub"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_wop_template,
                   "Vector Widening Floating-Point Add/Subtract Intrinsics",
                   "vector-widening-floating-point-add-subtract",
                   ["fwadd", "fwsub"], FTYPES, WFSEWS, WLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      binary_op_template,
      "Vector Single-Width Floating-Point Multiply/Divide Intrinsics",
      "vector-single-width-floating-point-multiply-divide",
      ["fmul", "fdiv", "frdiv"], FTYPES, FSEWS, LMULS,
      decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_wop_template,
                   "Vector Widening Floating-Point Multiply Intrinsics",
                   "vector-widening-floating-point-multiply", ["fwmul"], FTYPES,
                   WFSEWS, WLMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      mac_template,
      "Vector Single-Width Floating-Point Fused Multiply-Add Intrinsics",
      "vector-single-width-floating-point-fused-multiply-add",
      ["macc", "nmacc", "msac", "nmsac", "madd", "nmadd", "msub", "nmsub"],
      FTYPES, FSEWS, LMULS, decorators.has_masking_no_maskedoff_policy_frm)

  g.function_group(
      mac_template,
      "Vector Widening Floating-Point Fused Multiply-Add Intrinsics",
      "vector-widening-floating-point-fused-multiply-add",
      ["wmacc", "wnmacc", "wmsac", "wnmsac"], FTYPES, WFSEWS, WLMULS,
      decorators.has_masking_no_maskedoff_policy_frm)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Square-Root Intrinsics",
                   "vector-floating-point-square-root", ["sqrt"], FTYPES, FSEWS,
                   LMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(
      unary_op_template,
      "Vector Floating-Point Reciprocal Square-Root Estimate Intrinsics",
      "vector-floating-point-reciprocal-square-root-estimate", ["rsqrt7"],
      FTYPES, FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Reciprocal Estimate Intrinsics",
                   "#1410-vector-floating-point-reciprocal-estimate", ["rec7"],
                   FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.function_group(binary_op_template,
                   "Vector Floating-Point MIN/MAX Intrinsics",
                   "vector-floating-point-minmax", ["fmin", "fmax"], FTYPES,
                   FSEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template,
                   "Vector Floating-Point Sign-Injection Intrinsics",
                   "vector-floating-point-sign-injection",
                   ["fsgnj", "fsgnjn", "fsgnjx"], FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Abs and Neg Intrinsics",
                   "vector-floating-point-abs-neg-value", ["abs", "neg"],
                   FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(cmp_template, "Vector Floating-Point Compare Intrinsics",
                   "vector-floating-point-compare",
                   ["eq", "ne", "lt", "le", "gt", "ge"], FTYPES, FSEWS, LMULS,
                   decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(unary_op_template,
                   "Vector Floating-Point Classify Intrinsics",
                   "vector-floating-point-classify", ["class"], FTYPES, FSEWS,
                   LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Merge Intrinsics",
                   "vector-floating-point-merge", ["merge"], FTYPES, FSEWS,
                   LMULS, decorators.has_no_masking_policy)

  g.function_group(unary_op_template, "Vector Floating-Point Move Intrinsics",
                   "vector-floating-point-move", ["mv"], FTYPES, FSEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(
      cvt_op_template,
      "Single-Width Floating-Point/Integer Type-Convert Intrinsics",
      "single-width-floating-pointinteger-type-convert", ["cvt"], "", SEWS,
      LMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template,
                   "Widening Floating-Point/Integer Type-Convert Intrinsics",
                   "widening-floating-pointinteger-type-convert", ["wcvt"], "",
                   WSEWS, WLMULS, decorators.has_masking_maskedoff_policy_frm)

  g.function_group(cvt_op_template,
                   "Narrowing Floating-Point/Integer Type-Convert Intrinsics",
                   "narrowing-floating-pointinteger-type-convert", ["ncvt"], "",
                   NSEWS, NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  ####################################################################
  g.start_group("Vector Reduction Operations")

  g.function_group(reduction_template,
                   "Vector Single-Width Integer Reduction Intrinsics",
                   "vector-single-width-integer-reduction",
                   ["redsum", "redmax", "redmin", "redand", "redor", "redxor"],
                   ITYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy)

  g.function_group(reduction_template,
                   "Vector Widening Integer Reduction Intrinsics",
                   "vector-widening-integer-reduction", ["wredsum"], ITYPES,
                   SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy)

  g.function_group(reduction_template,
                   "Vector Single-Width Floating-Point Reduction Intrinsics",
                   "vector-single-width-floating-point-reduction",
                   ["redosum", "redusum", "redmax", "redmin"], FTYPES, FSEWS,
                   LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy_frm)

  g.function_group(reduction_template,
                   "Vector Widening Floating-Point Reduction Intrinsics",
                   "vector-widening-floating-point-reduction",
                   ["wredosum", "wredusum"], FTYPES, FSEWS, LMULS,
                   decorators.has_masking_no_maskedoff_reduction_policy_frm)

  ####################################################################
  g.start_group("Vector Mask Intrinsics")

  g.function_group(mask_template, "Vector Mask-Register Logical",
                   "vector-mask-register-logical", [
                       "and", "nand", "andn", "xor", "or", "nor", "orn", "xnor",
                       "mv", "clr", "set", "not"
                   ], MTYPES, MLENS, [1], decorators.has_no_masking)

  g.function_group(mask_template, "Vector count population in mask `vcpop.m`",
                   "vector-count-population-in-mask-vcpopm", ["cpop"], MTYPES,
                   MLENS, [1], decorators.has_masking_no_maskedoff)

  g.function_group(mask_template, "`vfirst` find-first-set mask bit",
                   "vfirst-find-first-set-mask-bit", ["first"], MTYPES, MLENS,
                   [1], decorators.has_masking_no_maskedoff)

  g.function_group(mask_template, "`vmsbf.m` set-before-first mask bit",
                   "vmsbfm-set-before-first-mask-bit", ["sbf"], MTYPES, MLENS,
                   [1], decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "`vmsif.m` set-including-first mask bit",
                   "vmsifm-set-including-first-mask-bit", ["sif"], MTYPES,
                   MLENS, [1], decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "`vmsof.m` set-only-first mask bit",
                   "vmsofm-set-only-first-mask-bit", ["sof"], MTYPES, MLENS,
                   [1], decorators.has_masking_maskedoff_policy_mu_ma)

  g.function_group(mask_template, "Vector Iota Intrinsics", "vector-iota",
                   ["iota"], MTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(mask_template, "Vector Element Index Intrinsics",
                   "vector-element-index", ["id"], MTYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  ####################################################################
  g.start_group("Vector Permutation Intrinsics")

  g.function_group(permute_template,
                   "Integer and Floating-Point Scalar Move Intrinsics",
                   "integer-scalar-move", ["mv"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  g.function_group(permute_template, "Vector Slideup Intrinsics",
                   "vector-slideup", ["slideup"], TYPES, SEWS, LMULS,
                   decorators.has_masking_no_maskedoff_policy_vslide)

  g.function_group(permute_template, "Vector Slidedown Intrinsics",
                   "vector-slidedown", ["slidedown"], TYPES, SEWS, LMULS,
                   decorators.has_masking_maskedoff_policy)

  g.function_group(permute_template,
                   "Vector Slide1up and Slide1down Intrinsics",
                   "vector-slide1up-and-slide1down", ["slide1up", "slide1down"],
                   TYPES, SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(binary_op_template, "Vector Register Gather Intrinsics",
                   "vector-register-gather", ["rgather", "rgatherei16"], TYPES,
                   SEWS, LMULS, decorators.has_masking_maskedoff_policy)

  g.function_group(permute_template, "Vector Compress Intrinsics",
                   "vector-compress", ["compress"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking_policy)

  ####################################################################
  g.start_group("Miscellaneous Vector Utility Intrinsics")

  g.function_group(setvl_template, "Get `vl` with specific vtype",
                   "set-vl-and-vtype", ["vsetvl"], [], SEWS, LMULS, [])

  g.function_group(setvl_template, "Get `VLMAX` with specific vtype",
                   "set-vl-to-vlmax-with-specific-vtype", ["vsetvlmax"], [],
                   SEWS, LMULS, [])

  g.function_group(reint_op_template, "Reinterpret Cast Conversion Intrinsics",
                   "reinterpret-cast-conversion", ["vreinterpret"], "", SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Extension Intrinsics",
                   "vector-lmul-extensionn", ["vlmul_ext_v"], TYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector LMUL Truncation Intrinsics",
                   "vector-lmul-truncation", ["vlmul_trunc_v"], TYPES, SEWS,
                   LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Initialization Intrinsics",
                   "vector-initialization", ["vundefined"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template, "Vector Insertion Intrinsics",
                   "vector-insertion", ["vset"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  g.function_group(get_set_diff_lmul_op_template,
                   "Vector Extraction Intrinsics", "vector-extraction",
                   ["vget"], TYPES, SEWS, LMULS, decorators.has_no_masking)

  g.function_group(misc_op_template, "Vector Creation Intrinsics",
                   "vector-creation", ["vcreate"], TYPES, SEWS, LMULS,
                   decorators.has_no_masking)

  ####################################################################
  g.start_group("Zvdot4a8i - Vector quad widening 4D Dot Product")
  g.function_group(mac_template,
                   "Zvdot4a8i - Vector quad widening 4D Dot Product",
                   "zvdot4a8i-vector-quad-widening-4d-dot-product",
                   ["dot4a", "dot4asu", "dot4aus"], ITYPES, [32], LMULS,
                   decorators.has_masking_no_maskedoff_policy)

  ####################################################################
  g.start_group("Zvfofp8min - OFP8 to BF16 conversion instructions")
  g.function_group(zvfofp8min_template,
                   "OFP8(E4M3) to BF16 conversion instructions",
                   "ofp8-e4m3-to-bf16-conversion-instructions", ["wcvtbf16"],
                   ["f8e4m3"], [8], WLMULS,
                   decorators.has_masking_maskedoff_policy)
  g.function_group(zvfofp8min_template,
                   "OFP8(E5M2) to BF16 conversion instructions",
                   "ofp8-e5m2-to-bf16-conversion-instructions", ["wcvtbf16"],
                   ["f8e5m2"], [8], WLMULS,
                   decorators.has_masking_maskedoff_policy)

  g.start_group("Zvfofp8min - BF16 to OFP8 conversion instructions")
  g.function_group(zvfofp8min_template,
                   "BF16 to OFP8(E4M3) conversion instructions",
                   "bf16-to-ofp8-e4m3-conversion-instructions", ["ncvtbf16"],
                   ["f8e4m3"], [16], NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)
  g.function_group(zvfofp8min_template,
                   "BF16 to OFP8(E5M2) conversion instructions",
                   "bf16-to-ofp8-e5m2-conversion-instructions", ["ncvtbf16"],
                   ["f8e5m2"], [16], NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)

  g.start_group("Zvfofp8min - FP32 to OFP8 conversion instructions")
  g.function_group(zvfofp8min_template,
                   "FP32 to OFP8(E4M3) conversion instructions",
                   "fp32-to-ofp8-e4m3-conversion-instructions", ["ncvt"],
                   ["f8e4m3"], [32], NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)
  g.function_group(zvfofp8min_template,
                   "FP32 to OFP8(E5M2) conversion instructions",
                   "fp32-to-ofp8-e5m2-conversion-instructions", ["ncvt"],
                   ["f8e5m2"], [32], NCVTLMULS,
                   decorators.has_masking_maskedoff_policy_frm)
  ####################################################################
  # Zvdota Family of Dot-Product Extensions
  ####################################################################

  g.start_group("Zvqwdota8i - 8-bit Integer Quad-Widening Dot Product")
  g.function_group(
      zvdota_template,
      "Zvqwdota8i - 8-bit Integer Quad-Widening Dot Product",
      "zvqwdota8i-8-bit-integer-quad-widening-dot-product",
      ["qwdotas", "qwdotau"],
      ITYPES, [8],
      LMULS,
      decorators.has_masking_no_maskedoff_policy,
      required_ext_list=["zvqwdota8i"])

  g.start_group("Zvqwdota16i - 16-bit Integer Quad-Widening Dot Product")
  g.function_group(
      zvdota_template,
      "Zvqwdota16i - 16-bit Integer Quad-Widening Dot Product",
      "zvqwdota16i-16-bit-integer-quad-widening-dot-product",
      ["qwdotas", "qwdotau"],
      ITYPES, [16],
      LMULS,
      decorators.has_masking_no_maskedoff_policy,
      required_ext_list=["zvqwdota16i"])

  g.start_group("Zvfwdota16bf - BF16 Widening Dot Product")
  g.function_group(
      zvdota_template,
      "Zvfwdota16bf - BF16 Widening Dot Product",
      "zvfwdota16bf-bf16-widening-dot-product", ["wdota"],
      BFTYPES, [16],
      WLMULS,
      decorators.has_masking_no_maskedoff_policy_frm,
      required_ext_list=["zvfwdota16bf"])

  g.start_group("Zvfqwdota8f - FP8 Quad-Widening Dot Product")
  g.function_group(
      zvdota_template,
      "Zvfqwdota8f - FP8 Quad-Widening Dot Product",
      "zvfqwdota8f-fp8-quad-widening-dot-product", ["fqwdota", "fqwdota_alt"],
      ["f8e4m3", "f8e5m2"], [8],
      LMULS,
      decorators.has_masking_no_maskedoff_policy_frm,
      required_ext_list=["zvfqwdota8f"])

  ####################################################################
  # Zvbdota Family of Batched Dot-Product Extensions
  ####################################################################

  g.start_group("Zvqwbdota8i - 8-bit Integer Batched Quad-Widening Dot Product")
  g.function_group(
      zvbdota_template,
      "Zvqwbdota8i - 8-bit Integer Batched Quad-Widening Dot Product",
      "zvqwbdota8i-8-bit-integer-batched-quad-widening-dot-product",
      ["vqwbdota"],
      ITYPES, [8],
      NONFRACLMULS,
      decorators.has_masking_no_maskedoff_policy,
      required_ext_list=["zvqwbdota8i"])

  g.start_group(
      "Zvqwbdota16i - 16-bit Integer Batched Quad-Widening Dot Product")
  g.function_group(
      zvbdota_template,
      "Zvqwbdota16i - 16-bit Integer Batched Quad-Widening Dot Product",
      "zvqwbdota16i-16-bit-integer-batched-quad-widening-dot-product",
      ["vqwbdota"],
      ITYPES, [16],
      NONFRACLMULS,
      decorators.has_masking_no_maskedoff_policy,
      required_ext_list=["zvqwbdota16i"])

  g.start_group("Zvfwbdota16bf - BF16 Batched Widening Dot Product")
  g.function_group(
      zvbdota_template,
      "Zvfwbdota16bf - BF16 Batched Widening Dot Product",
      "zvfwbdota16bf-bf16-batched-widening-dot-product", ["vfwbdota"],
      BFTYPES, [16],
      NONFRACLMULS,
      decorators.has_masking_no_maskedoff_policy,
      required_ext_list=["zvfwbdota16bf"])

  g.start_group("Zvfqwbdota8f - FP8 Batched Quad-Widening Dot Product")
  g.function_group(
      zvbdota_template,
      "Zvfqwbdota8f - FP8 Batched Quad-Widening Dot Product",
      "zvfqwbdota8f-fp8-batched-quad-widening-dot-product", ["vfqwbdota"],
      ["f8e4m3", "f8e5m2"], [8],
      NONFRACLMULS,
      decorators.has_masking_no_maskedoff_policy,
      required_ext_list=["zvfqwbdota8f"])

  g.start_group("Zvfbdota32f - FP32 Batched Dot Product")
  g.function_group(
      zvbdota_template,
      "Zvfbdota32f - FP32 Batched Dot Product",
      "zvfbdota32f-fp32-batched-dot-product", ["vfbdota"],
      FTYPES, [32],
      NONFRACLMULS,
      decorators.has_masking_no_maskedoff_policy_frm,
      required_ext_list=["zvfbdota32f"])
  ####################################################################

  g.gen_prologue()
