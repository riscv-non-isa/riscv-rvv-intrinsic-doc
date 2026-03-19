// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vfmerge_vfm_bf16mf4_tu(vbfloat16mf4_t vd,
                                           vbfloat16mf4_t vs2, __bf16 rs1,
                                           vbool64_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_bf16mf4_tu(vd, vs2, rs1, v0, vl);
}

vbfloat16mf2_t test_vfmerge_vfm_bf16mf2_tu(vbfloat16mf2_t vd,
                                           vbfloat16mf2_t vs2, __bf16 rs1,
                                           vbool32_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_bf16mf2_tu(vd, vs2, rs1, v0, vl);
}

vbfloat16m1_t test_vfmerge_vfm_bf16m1_tu(vbfloat16m1_t vd, vbfloat16m1_t vs2,
                                         __bf16 rs1, vbool16_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_bf16m1_tu(vd, vs2, rs1, v0, vl);
}

vbfloat16m2_t test_vfmerge_vfm_bf16m2_tu(vbfloat16m2_t vd, vbfloat16m2_t vs2,
                                         __bf16 rs1, vbool8_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_bf16m2_tu(vd, vs2, rs1, v0, vl);
}

vbfloat16m4_t test_vfmerge_vfm_bf16m4_tu(vbfloat16m4_t vd, vbfloat16m4_t vs2,
                                         __bf16 rs1, vbool4_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_bf16m4_tu(vd, vs2, rs1, v0, vl);
}

vbfloat16m8_t test_vfmerge_vfm_bf16m8_tu(vbfloat16m8_t vd, vbfloat16m8_t vs2,
                                         __bf16 rs1, vbool2_t v0, size_t vl) {
  return __riscv_vfmerge_vfm_bf16m8_tu(vd, vs2, rs1, v0, vl);
}
