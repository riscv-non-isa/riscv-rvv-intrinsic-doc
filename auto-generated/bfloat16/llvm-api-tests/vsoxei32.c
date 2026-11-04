// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsoxei32_v_bf16mf4(__bf16 *rs1, vuint32mf2_t rs2, vbfloat16mf4_t vs3,
                             size_t vl) {
  return __riscv_vsoxei32_v_bf16mf4(rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16mf2(__bf16 *rs1, vuint32m1_t rs2, vbfloat16mf2_t vs3,
                             size_t vl) {
  return __riscv_vsoxei32_v_bf16mf2(rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16m1(__bf16 *rs1, vuint32m2_t rs2, vbfloat16m1_t vs3,
                            size_t vl) {
  return __riscv_vsoxei32_v_bf16m1(rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16m2(__bf16 *rs1, vuint32m4_t rs2, vbfloat16m2_t vs3,
                            size_t vl) {
  return __riscv_vsoxei32_v_bf16m2(rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16m4(__bf16 *rs1, vuint32m8_t rs2, vbfloat16m4_t vs3,
                            size_t vl) {
  return __riscv_vsoxei32_v_bf16m4(rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16mf4_m(vbool64_t vm, __bf16 *rs1, vuint32mf2_t rs2,
                               vbfloat16mf4_t vs3, size_t vl) {
  return __riscv_vsoxei32_v_bf16mf4_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16mf2_m(vbool32_t vm, __bf16 *rs1, vuint32m1_t rs2,
                               vbfloat16mf2_t vs3, size_t vl) {
  return __riscv_vsoxei32_v_bf16mf2_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16m1_m(vbool16_t vm, __bf16 *rs1, vuint32m2_t rs2,
                              vbfloat16m1_t vs3, size_t vl) {
  return __riscv_vsoxei32_v_bf16m1_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16m2_m(vbool8_t vm, __bf16 *rs1, vuint32m4_t rs2,
                              vbfloat16m2_t vs3, size_t vl) {
  return __riscv_vsoxei32_v_bf16m2_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei32_v_bf16m4_m(vbool4_t vm, __bf16 *rs1, vuint32m8_t rs2,
                              vbfloat16m4_t vs3, size_t vl) {
  return __riscv_vsoxei32_v_bf16m4_m(vm, rs1, rs2, vs3, vl);
}
