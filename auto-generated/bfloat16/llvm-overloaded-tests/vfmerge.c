// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vfmerge_vfm_bf16mf4(vbfloat16mf4_t vs2, __bf16 rs1,
                                        vbool64_t v0, size_t vl) {
  return __riscv_vfmerge(vs2, rs1, v0, vl);
}

vbfloat16mf2_t test_vfmerge_vfm_bf16mf2(vbfloat16mf2_t vs2, __bf16 rs1,
                                        vbool32_t v0, size_t vl) {
  return __riscv_vfmerge(vs2, rs1, v0, vl);
}

vbfloat16m1_t test_vfmerge_vfm_bf16m1(vbfloat16m1_t vs2, __bf16 rs1,
                                      vbool16_t v0, size_t vl) {
  return __riscv_vfmerge(vs2, rs1, v0, vl);
}

vbfloat16m2_t test_vfmerge_vfm_bf16m2(vbfloat16m2_t vs2, __bf16 rs1,
                                      vbool8_t v0, size_t vl) {
  return __riscv_vfmerge(vs2, rs1, v0, vl);
}

vbfloat16m4_t test_vfmerge_vfm_bf16m4(vbfloat16m4_t vs2, __bf16 rs1,
                                      vbool4_t v0, size_t vl) {
  return __riscv_vfmerge(vs2, rs1, v0, vl);
}

vbfloat16m8_t test_vfmerge_vfm_bf16m8(vbfloat16m8_t vs2, __bf16 rs1,
                                      vbool2_t v0, size_t vl) {
  return __riscv_vfmerge(vs2, rs1, v0, vl);
}
