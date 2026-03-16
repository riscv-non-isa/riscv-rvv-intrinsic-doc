// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve32f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x8_t test_vlseg8e32_v_f32mf2x8_m(vbool64_t vm, const float *rs1,
                                            size_t vl) {
  return __riscv_vlseg8e32(vm, rs1, vl);
}

vfloat32m1x8_t test_vlseg8e32_v_f32m1x8_m(vbool32_t vm, const float *rs1,
                                          size_t vl) {
  return __riscv_vlseg8e32(vm, rs1, vl);
}

vint32mf2x8_t test_vlseg8e32_v_i32mf2x8_m(vbool64_t vm, const int32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg8e32(vm, rs1, vl);
}

vint32m1x8_t test_vlseg8e32_v_i32m1x8_m(vbool32_t vm, const int32_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg8e32(vm, rs1, vl);
}

vuint32mf2x8_t test_vlseg8e32_v_u32mf2x8_m(vbool64_t vm, const uint32_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg8e32(vm, rs1, vl);
}

vuint32m1x8_t test_vlseg8e32_v_u32m1x8_m(vbool32_t vm, const uint32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg8e32(vm, rs1, vl);
}
