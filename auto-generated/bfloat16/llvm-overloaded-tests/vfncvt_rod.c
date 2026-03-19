// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vfncvt_rod_f_f_w_bf16mf4(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vs2, vl);
}

vbfloat16mf2_t test_vfncvt_rod_f_f_w_bf16mf2(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vs2, vl);
}

vbfloat16m1_t test_vfncvt_rod_f_f_w_bf16m1(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vs2, vl);
}

vbfloat16m2_t test_vfncvt_rod_f_f_w_bf16m2(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vs2, vl);
}

vbfloat16m4_t test_vfncvt_rod_f_f_w_bf16m4(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vs2, vl);
}

vbfloat16mf4_t test_vfncvt_rod_f_f_w_bf16mf4_m(vbool64_t vm, vfloat32mf2_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vm, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_rod_f_f_w_bf16mf2_m(vbool32_t vm, vfloat32m1_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vm, vs2, vl);
}

vbfloat16m1_t test_vfncvt_rod_f_f_w_bf16m1_m(vbool16_t vm, vfloat32m2_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vm, vs2, vl);
}

vbfloat16m2_t test_vfncvt_rod_f_f_w_bf16m2_m(vbool8_t vm, vfloat32m4_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vm, vs2, vl);
}

vbfloat16m4_t test_vfncvt_rod_f_f_w_bf16m4_m(vbool4_t vm, vfloat32m8_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_rod_f_bf16(vm, vs2, vl);
}
