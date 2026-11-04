// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x6_t test_vluxseg6ei16_v_bf16mf4x6(const __bf16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg6ei16_v_bf16mf4x6(rs1, rs2, vl);
}

vbfloat16mf2x6_t test_vluxseg6ei16_v_bf16mf2x6(const __bf16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg6ei16_v_bf16mf2x6(rs1, rs2, vl);
}

vbfloat16m1x6_t test_vluxseg6ei16_v_bf16m1x6(const __bf16 *rs1, vuint16m1_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg6ei16_v_bf16m1x6(rs1, rs2, vl);
}

vbfloat16mf4x6_t test_vluxseg6ei16_v_bf16mf4x6_m(vbool64_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf4_t rs2, size_t vl) {
  return __riscv_vluxseg6ei16_v_bf16mf4x6_m(vm, rs1, rs2, vl);
}

vbfloat16mf2x6_t test_vluxseg6ei16_v_bf16mf2x6_m(vbool32_t vm,
                                                 const __bf16 *rs1,
                                                 vuint16mf2_t rs2, size_t vl) {
  return __riscv_vluxseg6ei16_v_bf16mf2x6_m(vm, rs1, rs2, vl);
}

vbfloat16m1x6_t test_vluxseg6ei16_v_bf16m1x6_m(vbool16_t vm, const __bf16 *rs1,
                                               vuint16m1_t rs2, size_t vl) {
  return __riscv_vluxseg6ei16_v_bf16m1x6_m(vm, rs1, rs2, vl);
}
