// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vluxei8_v_bf16mf4(const __bf16 *rs1, vuint8mf8_t rs2,
                                      size_t vl) {
  return __riscv_vluxei8(rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei8_v_bf16mf2(const __bf16 *rs1, vuint8mf4_t rs2,
                                      size_t vl) {
  return __riscv_vluxei8(rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei8_v_bf16m1(const __bf16 *rs1, vuint8mf2_t rs2,
                                    size_t vl) {
  return __riscv_vluxei8(rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei8_v_bf16m2(const __bf16 *rs1, vuint8m1_t rs2,
                                    size_t vl) {
  return __riscv_vluxei8(rs1, rs2, vl);
}

vbfloat16m4_t test_vluxei8_v_bf16m4(const __bf16 *rs1, vuint8m2_t rs2,
                                    size_t vl) {
  return __riscv_vluxei8(rs1, rs2, vl);
}

vbfloat16m8_t test_vluxei8_v_bf16m8(const __bf16 *rs1, vuint8m4_t rs2,
                                    size_t vl) {
  return __riscv_vluxei8(rs1, rs2, vl);
}

vbfloat16mf4_t test_vluxei8_v_bf16mf4_m(vbool64_t vm, const __bf16 *rs1,
                                        vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxei8(vm, rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei8_v_bf16mf2_m(vbool32_t vm, const __bf16 *rs1,
                                        vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxei8(vm, rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei8_v_bf16m1_m(vbool16_t vm, const __bf16 *rs1,
                                      vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxei8(vm, rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei8_v_bf16m2_m(vbool8_t vm, const __bf16 *rs1,
                                      vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxei8(vm, rs1, rs2, vl);
}

vbfloat16m4_t test_vluxei8_v_bf16m4_m(vbool4_t vm, const __bf16 *rs1,
                                      vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxei8(vm, rs1, rs2, vl);
}

vbfloat16m8_t test_vluxei8_v_bf16m8_m(vbool2_t vm, const __bf16 *rs1,
                                      vuint8m4_t rs2, size_t vl) {
  return __riscv_vluxei8(vm, rs1, rs2, vl);
}
