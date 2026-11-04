// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg2e16_v_bf16mf4x2(__bf16 *rs1, vbfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16mf2x2(__bf16 *rs1, vbfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m1x2(__bf16 *rs1, vbfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m2x2(__bf16 *rs1, vbfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m4x2(__bf16 *rs1, vbfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16mf4x2_m(vbool64_t vm, __bf16 *rs1,
                                  vbfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16mf2x2_m(vbool32_t vm, __bf16 *rs1,
                                  vbfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m1x2_m(vbool16_t vm, __bf16 *rs1, vbfloat16m1x2_t vs3,
                                 size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m2x2_m(vbool8_t vm, __bf16 *rs1, vbfloat16m2x2_t vs3,
                                 size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m4x2_m(vbool4_t vm, __bf16 *rs1, vbfloat16m4x2_t vs3,
                                 size_t vl) {
  return __riscv_vsseg2e16(vm, rs1, vs3, vl);
}
