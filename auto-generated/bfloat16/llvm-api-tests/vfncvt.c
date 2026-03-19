// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf4_i8mf8(vs2, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf2_i8mf4(vs2, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m1_i8mf2(vs2, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m2_i8m1(vs2, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m4_i8m2(vs2, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m8_i8m4(vs2, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf4_u8mf8(vs2, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf2_u8mf4(vs2, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m1_u8mf2(vs2, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m2_u8m1(vs2, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m4_u8m2(vs2, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m8_u8m4(vs2, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf4_i8mf8_m(vm, vs2, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf2_i8mf4_m(vm, vs2, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m1_i8mf2_m(vm, vs2, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m2_i8m1_m(vm, vs2, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_m(vbool4_t vm, vbfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m4_i8m2_m(vm, vs2, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_m(vbool2_t vm, vbfloat16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m8_i8m4_m(vm, vs2, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf4_u8mf8_m(vm, vs2, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf2_u8mf4_m(vm, vs2, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m1_u8mf2_m(vm, vs2, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m2_u8m1_m(vm, vs2, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_m(vbool4_t vm, vbfloat16m4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m4_u8m2_m(vm, vs2, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_m(vbool2_t vm, vbfloat16m8_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m8_u8m4_m(vm, vs2, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf4_i8mf8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf2_i8mf4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m1_i8mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m2_i8m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m4_i8m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m8_i8m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf4_u8mf8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf2_u8mf4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m1_u8mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m2_u8m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m4_u8m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m8_u8m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_rm_m(vbool64_t vm,
                                                vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf4_i8mf8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_rm_m(vbool32_t vm,
                                                vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16mf2_i8mf4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m1_i8mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m2_i8m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m4_i8m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_rm_m(vbool2_t vm, vbfloat16m8_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_x_f_w_bf16m8_i8m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_rm_m(vbool64_t vm,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf4_u8mf8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_rm_m(vbool32_t vm,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16mf2_u8mf4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_rm_m(vbool16_t vm,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m1_u8mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m2_u8m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m4_u8m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_rm_m(vbool2_t vm, vbfloat16m8_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_xu_f_w_bf16m8_u8m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4(vs2, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2(vs2, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1(vs2, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2(vs2, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4(vs2, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_m(vbool64_t vm, vfloat32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_m(vm, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_m(vbool32_t vm, vfloat32m1_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_m(vm, vs2, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_m(vbool16_t vm, vfloat32m2_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_m(vm, vs2, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_m(vbool8_t vm, vfloat32m4_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_m(vm, vs2, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_m(vbool4_t vm, vfloat32m8_t vs2,
                                         size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_m(vm, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_rm(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_rm(vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_rm(vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_rm(vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_rm(vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}
