"""
Declares the vector crypto intrinsics through the vector crypto template.
"""

from intrinsic_decorator import IntrinsicDecorators
from templates import vector_crypto_template
from constants import LMULS, WLMULS, SEWS, WSEWS, UITYPE


def gen(g):
  decorators = IntrinsicDecorators(g.has_tail_policy)

  g.start_group("Zvbb - Vector Bit-manipulation used in Cryptography")

  g.function_group(
      vector_crypto_template,
      "Vector Bit-manipulation used in Cryptography - Bitwise And-Not",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vandn"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvbb"])

  g.function_group(
      vector_crypto_template,
      "Vector Basic Bit-manipulation - Reverse",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vbrev", "vbrev8", "vrev8"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvbb"])

  g.function_group(
      vector_crypto_template,
      "Vector Basic Bit-manipulation - Count Bits",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vclz", "vctz"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvbb"])

  g.function_group(
      vector_crypto_template,
      "Vector Basic Bit-manipulation - Vector Population Count",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vcpop"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvbb"])

  g.function_group(
      vector_crypto_template,
      "Vector Bit-manipulation used in Cryptography - Rotate",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vrol", "vror"],
      UITYPE,
      SEWS,
      LMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvkb"])

  g.function_group(
      vector_crypto_template,
      "Vector Basic Bit-manipulation used - Widening Shift",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vwsll"],
      UITYPE,
      WSEWS,
      WLMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvbb"])

  ####################################################################

  g.start_group("Zvbc - Vector Carryless Multiplication")

  g.function_group(
      vector_crypto_template,
      "Vector Carryless Multiplication",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vclmul", "vclmulh"],
      UITYPE,
      [64],
      LMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvbc"])

  ####################################################################

  g.start_group("Zvkg - Vector GCM/GMAC")

  g.function_group(
      vector_crypto_template,
      "Vector GCM/GMAC",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vghsh", "vgmul"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvkg"])

  ####################################################################

  g.start_group("Zvkned - NIST Suite: Vector AES Block Cipher")

  g.function_group(
      vector_crypto_template,
      "Vector AES Encryption",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaesef", "vaesem"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvkned"])

  g.function_group(
      vector_crypto_template,
      "Vector AES Decryption",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaesdf", "vaesdm"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvkned"])

  g.function_group(
      vector_crypto_template,
      "Vector AES-128 Forward KeySchedule generation",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaeskf1", "vaeskf2"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvkned"])

  g.function_group(
      vector_crypto_template,
      "Vector AES round zero",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vaesz"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvkned"])

  ####################################################################

  g.start_group("Zvknh - NIST Suite: Vector SHA-2 Secure Hash")

  # We need extra condition to check if zvknhb is required
  # If SEW=64, then zvknhb is required
  g.function_group(
      vector_crypto_template,
      "Vector SHA-2 message schedule",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vsha2ms"],
      UITYPE,
      [32, 64],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvknha"])

  g.function_group(
      vector_crypto_template,
      "Vector SHA-2 two rounds of compression",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vsha2ch", "vsha2cl"],
      UITYPE,
      [32, 64],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvknha"])

  ####################################################################

  g.start_group("Zvksed - ShangMi Suite: SM4 Block Cipher")

  g.function_group(
      vector_crypto_template,
      "Vector SM4 KeyExpansion",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vsm4k"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvksed"])

  g.function_group(
      vector_crypto_template,
      "Vector SM4 Rounds",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vsm4r"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvksed"])

  ####################################################################

  g.start_group("Zvksh - ShangMi Suite: SM3 Secure Hash")

  g.function_group(
      vector_crypto_template,
      "Vector SM3 Message Expansion",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vsm3me"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvksh"])

  g.function_group(
      vector_crypto_template,
      "Vector SM3 Compression",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vsm3c"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvksh"])

  ####################################################################

  g.start_group("Zvkgs - Vector-Scalar GCM/GMAC")

  g.function_group(
      vector_crypto_template,
      "Vector-Scalar GCM/GMAC",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vghsh", "vgmul"],
      UITYPE,
      [32],
      LMULS,
      decorators.has_no_masking_policy,
      required_ext_list=["zvkgs"])

  ####################################################################

  g.start_group("Zvbc32e - Vector-Scalar Carryless Multiplication")

  g.function_group(
      vector_crypto_template,
      "Vector Carryless Multiplication",
      "",  # FIXME: We probably have a separate document for vector-crypto
      ["vclmul", "vclmulh"],
      UITYPE,
      [8, 16, 32],
      LMULS,
      decorators.has_masking_maskedoff_policy,
      required_ext_list=["zvbc32e"])


####################################################################
