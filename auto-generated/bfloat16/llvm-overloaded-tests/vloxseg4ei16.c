// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x4_t test_vloxseg4ei16_v_bf16mf4x4(const __bf16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg4ei16(rs1, rs2, vl);
}

vbfloat16mf2x4_t test_vloxseg4ei16_v_bf16mf2x4(const __bf16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg4ei16(rs1, rs2, vl);
}

vbfloat16m1x4_t test_vloxseg4ei16_v_bf16m1x4(const __bf16 *rs1, vuint16m1_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg4ei16(rs1, rs2, vl);
}

vbfloat16m2x4_t test_vloxseg4ei16_v_bf16m2x4(const __bf16 *rs1, vuint16m2_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg4ei16(rs1, rs2, vl);
}

vbfloat16mf4x4_t test_vloxseg4ei16_v_bf16mf4x4_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg4ei16(vm, rs1, rs2, vl);
}

vbfloat16mf2x4_t test_vloxseg4ei16_v_bf16mf2x4_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg4ei16(vm, rs1, rs2, vl);
}

vbfloat16m1x4_t test_vloxseg4ei16_v_bf16m1x4_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg4ei16(vm, rs1, rs2, vl);
}

vbfloat16m2x4_t test_vloxseg4ei16_v_bf16m2x4_m(vbool8_t vm, const __bf16 *rs1,
                                               vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg4ei16(vm, rs1, rs2, vl);
}
