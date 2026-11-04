// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vluxei32_v_bf16mf4(const __bf16 *rs1, vuint32mf2_t rs2,
                                       size_t vl) {
  return __riscv_vluxei32(rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei32_v_bf16mf2(const __bf16 *rs1, vuint32m1_t rs2,
                                       size_t vl) {
  return __riscv_vluxei32(rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei32_v_bf16m1(const __bf16 *rs1, vuint32m2_t rs2,
                                     size_t vl) {
  return __riscv_vluxei32(rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei32_v_bf16m2(const __bf16 *rs1, vuint32m4_t rs2,
                                     size_t vl) {
  return __riscv_vluxei32(rs1, rs2, vl);
}

vbfloat16m4_t test_vluxei32_v_bf16m4(const __bf16 *rs1, vuint32m8_t rs2,
                                     size_t vl) {
  return __riscv_vluxei32(rs1, rs2, vl);
}

vbfloat16mf4_t test_vluxei32_v_bf16mf4_m(vbool64_t vm, const __bf16 *rs1,
                                         vuint32mf2_t rs2, size_t vl) {
  return __riscv_vluxei32(vm, rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei32_v_bf16mf2_m(vbool32_t vm, const __bf16 *rs1,
                                         vuint32m1_t rs2, size_t vl) {
  return __riscv_vluxei32(vm, rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei32_v_bf16m1_m(vbool16_t vm, const __bf16 *rs1,
                                       vuint32m2_t rs2, size_t vl) {
  return __riscv_vluxei32(vm, rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei32_v_bf16m2_m(vbool8_t vm, const __bf16 *rs1,
                                       vuint32m4_t rs2, size_t vl) {
  return __riscv_vluxei32(vm, rs1, rs2, vl);
}

vbfloat16m4_t test_vluxei32_v_bf16m4_m(vbool4_t vm, const __bf16 *rs1,
                                       vuint32m8_t rs2, size_t vl) {
  return __riscv_vluxei32(vm, rs1, rs2, vl);
}
