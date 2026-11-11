// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg5e16_v_bf16mf4x5(__bf16 *rs1, vbfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_bf16mf4x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_bf16mf2x5(__bf16 *rs1, vbfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_bf16mf2x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_bf16m1x5(__bf16 *rs1, vbfloat16m1x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_bf16m1x5(rs1, vs3, vl);
}

void test_vsseg5e16_v_bf16mf4x5_m(vbool64_t vm, __bf16 *rs1,
                                  vbfloat16mf4x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_bf16mf4x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_bf16mf2x5_m(vbool32_t vm, __bf16 *rs1,
                                  vbfloat16mf2x5_t vs3, size_t vl) {
  return __riscv_vsseg5e16_v_bf16mf2x5_m(vm, rs1, vs3, vl);
}

void test_vsseg5e16_v_bf16m1x5_m(vbool16_t vm, __bf16 *rs1, vbfloat16m1x5_t vs3,
                                 size_t vl) {
  return __riscv_vsseg5e16_v_bf16m1x5_m(vm, rs1, vs3, vl);
}
