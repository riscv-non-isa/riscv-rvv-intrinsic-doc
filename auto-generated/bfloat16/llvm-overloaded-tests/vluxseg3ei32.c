// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x3_t test_vluxseg3ei32_v_bf16mf4x3(const __bf16 *rs1,
                                               vuint32mf2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32(rs1, rs2, vl);
}

vbfloat16mf2x3_t test_vluxseg3ei32_v_bf16mf2x3(const __bf16 *rs1,
                                               vuint32m1_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32(rs1, rs2, vl);
}

vbfloat16m1x3_t test_vluxseg3ei32_v_bf16m1x3(const __bf16 *rs1, vuint32m2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg3ei32(rs1, rs2, vl);
}

vbfloat16m2x3_t test_vluxseg3ei32_v_bf16m2x3(const __bf16 *rs1, vuint32m4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg3ei32(rs1, rs2, vl);
}

vbfloat16mf4x3_t test_vluxseg3ei32_v_bf16mf4x3_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32mf2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32(vm, rs1, rs2, vl);
}

vbfloat16mf2x3_t test_vluxseg3ei32_v_bf16mf2x3_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint32m1_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32(vm, rs1, rs2, vl);
}

vbfloat16m1x3_t test_vluxseg3ei32_v_bf16m1x3_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint32m2_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32(vm, rs1, rs2, vl);
}

vbfloat16m2x3_t test_vluxseg3ei32_v_bf16m2x3_m(vbool8_t vm, const __bf16 *rs1,
                                               vuint32m4_t rs2, size_t vl) {
  return __riscv_vluxseg3ei32(vm, rs1, rs2, vl);
}
