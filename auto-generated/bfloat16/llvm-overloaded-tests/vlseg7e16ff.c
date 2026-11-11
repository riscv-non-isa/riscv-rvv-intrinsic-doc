// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x7_t test_vlseg7e16ff_v_bf16mf4x7_m(vbool64_t vm, const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff(vm, rs1, new_vl, vl);
}

vbfloat16mf2x7_t test_vlseg7e16ff_v_bf16mf2x7_m(vbool32_t vm, const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff(vm, rs1, new_vl, vl);
}

vbfloat16m1x7_t test_vlseg7e16ff_v_bf16m1x7_m(vbool16_t vm, const __bf16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff(vm, rs1, new_vl, vl);
}
