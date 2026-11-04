// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x8_t test_vlsseg8e16_v_bf16mf4x8_m(vbool64_t vm, const __bf16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e16(vm, rs1, rs2, vl);
}

vbfloat16mf2x8_t test_vlsseg8e16_v_bf16mf2x8_m(vbool32_t vm, const __bf16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e16(vm, rs1, rs2, vl);
}

vbfloat16m1x8_t test_vlsseg8e16_v_bf16m1x8_m(vbool16_t vm, const __bf16 *rs1,
                                             ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e16(vm, rs1, rs2, vl);
}
