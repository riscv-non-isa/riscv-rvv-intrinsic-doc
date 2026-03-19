// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_tu(vint8mf8_t vd, vbfloat16mf4_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_tu(vint8mf4_t vd, vbfloat16mf2_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_tu(vint8mf2_t vd, vbfloat16m1_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_tu(vint8m1_t vd, vbfloat16m2_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_tu(vint8m2_t vd, vbfloat16m4_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_tu(vint8m4_t vd, vbfloat16m8_t vs2,
                                           size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_tu(vuint8mf8_t vd,
                                                vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_tu(vuint8mf4_t vd,
                                                vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_tu(vuint8mf2_t vd,
                                               vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_tu(vuint8m1_t vd, vbfloat16m2_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_tu(vuint8m2_t vd, vbfloat16m4_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_tu(vuint8m4_t vd, vbfloat16m8_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_tum(vbool64_t vm, vint8mf8_t vd,
                                               vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_tum(vbool32_t vm, vint8mf4_t vd,
                                               vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_tum(vbool16_t vm, vint8mf2_t vd,
                                              vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_tum(vbool8_t vm, vint8m1_t vd,
                                            vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_tum(vbool4_t vm, vint8m2_t vd,
                                            vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_tum(vbool2_t vm, vint8m4_t vd,
                                            vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd,
                                                 vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd,
                                                 vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd,
                                                vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_tum(vbool8_t vm, vuint8m1_t vd,
                                              vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_tum(vbool4_t vm, vuint8m2_t vd,
                                              vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_tum(vbool2_t vm, vuint8m4_t vd,
                                              vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd,
                                                vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd,
                                                vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd,
                                               vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_tumu(vbool8_t vm, vint8m1_t vd,
                                             vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_tumu(vbool4_t vm, vint8m2_t vd,
                                             vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_tumu(vbool2_t vm, vint8m4_t vd,
                                             vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_tumu(vbool8_t vm, vuint8m1_t vd,
                                               vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_tumu(vbool4_t vm, vuint8m2_t vd,
                                               vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_tumu(vbool2_t vm, vuint8m4_t vd,
                                               vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_mu(vbool64_t vm, vint8mf8_t vd,
                                              vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_mu(vbool32_t vm, vint8mf4_t vd,
                                              vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_mu(vbool16_t vm, vint8mf2_t vd,
                                             vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_mu(vbool8_t vm, vint8m1_t vd,
                                           vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_mu(vbool4_t vm, vint8m2_t vd,
                                           vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_mu(vbool2_t vm, vint8m4_t vd,
                                           vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd,
                                                vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd,
                                                vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd,
                                               vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_mu(vbool8_t vm, vuint8m1_t vd,
                                             vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_mu(vbool4_t vm, vuint8m2_t vd,
                                             vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_mu(vbool2_t vm, vuint8m4_t vd,
                                             vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_rm_tu(vint8mf8_t vd,
                                                 vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_rm_tu(vint8mf4_t vd,
                                                 vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_rm_tu(vint8mf2_t vd,
                                                vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_rm_tu(vint8m1_t vd, vbfloat16m2_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_rm_tu(vint8m2_t vd, vbfloat16m4_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_rm_tu(vint8m4_t vd, vbfloat16m8_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_rm_tu(vuint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_rm_tu(vuint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_rm_tu(vuint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_rm_tu(vuint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_rm_tu(vuint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_rm_tu(vuint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_rm_tum(vbool64_t vm, vint8mf8_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_rm_tum(vbool32_t vm, vint8mf4_t vd,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_rm_tum(vbool16_t vm, vint8mf2_t vd,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_rm_tum(vbool8_t vm, vint8m1_t vd,
                                               vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_rm_tum(vbool4_t vm, vint8m2_t vd,
                                               vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_rm_tum(vbool2_t vm, vint8m4_t vd,
                                               vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_rm_tum(vbool64_t vm,
                                                    vuint8mf8_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_rm_tum(vbool32_t vm,
                                                    vuint8mf4_t vd,
                                                    vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_rm_tum(vbool16_t vm, vuint8mf2_t vd,
                                                   vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_rm_tum(vbool8_t vm, vuint8m1_t vd,
                                                 vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_rm_tum(vbool4_t vm, vuint8m2_t vd,
                                                 vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_rm_tum(vbool2_t vm, vuint8m4_t vd,
                                                 vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_rm_tumu(vbool64_t vm, vint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_rm_tumu(vbool32_t vm, vint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_rm_tumu(vbool16_t vm, vint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_rm_tumu(vbool8_t vm, vint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_rm_tumu(vbool4_t vm, vint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_rm_tumu(vbool2_t vm, vint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_rm_tumu(vbool64_t vm,
                                                     vuint8mf8_t vd,
                                                     vbfloat16mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_rm_tumu(vbool32_t vm,
                                                     vuint8mf4_t vd,
                                                     vbfloat16mf2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_rm_tumu(vbool16_t vm,
                                                    vuint8mf2_t vd,
                                                    vbfloat16m1_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_rm_tumu(vbool8_t vm, vuint8m1_t vd,
                                                  vbfloat16m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_rm_tumu(vbool4_t vm, vuint8m2_t vd,
                                                  vbfloat16m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_rm_tumu(vbool2_t vm, vuint8m4_t vd,
                                                  vbfloat16m8_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf8_t test_vfncvt_x_f_w_bf16mf4_i8mf8_rm_mu(vbool64_t vm, vint8mf8_t vd,
                                                 vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf4_t test_vfncvt_x_f_w_bf16mf2_i8mf4_rm_mu(vbool32_t vm, vint8mf4_t vd,
                                                 vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8mf2_t test_vfncvt_x_f_w_bf16m1_i8mf2_rm_mu(vbool16_t vm, vint8mf2_t vd,
                                                vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m1_t test_vfncvt_x_f_w_bf16m2_i8m1_rm_mu(vbool8_t vm, vint8m1_t vd,
                                              vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m2_t test_vfncvt_x_f_w_bf16m4_i8m2_rm_mu(vbool4_t vm, vint8m2_t vd,
                                              vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint8m4_t test_vfncvt_x_f_w_bf16m8_i8m4_rm_mu(vbool2_t vm, vint8m4_t vd,
                                              vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_xu_f_w_bf16mf4_u8mf8_rm_mu(vbool64_t vm, vuint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_xu_f_w_bf16mf2_u8mf4_rm_mu(vbool32_t vm, vuint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_xu_f_w_bf16m1_u8mf2_rm_mu(vbool16_t vm, vuint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_xu_f_w_bf16m2_u8m1_rm_mu(vbool8_t vm, vuint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_xu_f_w_bf16m4_u8m2_rm_mu(vbool4_t vm, vuint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_xu_f_w_bf16m8_u8m4_rm_mu(vbool2_t vm, vuint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_tu(vbfloat16mf4_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_tu(vbfloat16mf2_t vd, vfloat32m1_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_tu(vbfloat16m1_t vd, vfloat32m2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_tu(vbfloat16m2_t vd, vfloat32m4_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_tu(vbfloat16m4_t vd, vfloat32m8_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                             vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                             vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                           vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                           vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                           vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                              vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                            vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                            vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                          vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_rm_tu(vbfloat16mf4_t vd,
                                               vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_rm_tu(vbfloat16mf2_t vd,
                                               vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_rm_tu(vbfloat16m1_t vd, vfloat32m2_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_rm_tu(vbfloat16m2_t vd, vfloat32m4_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_rm_tu(vbfloat16m4_t vd, vfloat32m8_t vs2,
                                             size_t vl) {
  return __riscv_vfncvt_f_bf16_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_rm_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                                vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_rm_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                                vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_rm_tum(vbool16_t vm, vbfloat16m1_t vd,
                                              vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_rm_tum(vbool8_t vm, vbfloat16m2_t vd,
                                              vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_rm_tum(vbool4_t vm, vbfloat16m4_t vd,
                                              vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_rm_tumu(vbool64_t vm,
                                                 vbfloat16mf4_t vd,
                                                 vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_rm_tumu(vbool32_t vm,
                                                 vbfloat16mf2_t vd,
                                                 vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_rm_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                               vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_rm_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                               vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_rm_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                               vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfncvt_f_f_w_bf16mf4_rm_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                               vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfncvt_f_f_w_bf16mf2_rm_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                               vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfncvt_f_f_w_bf16m1_rm_mu(vbool16_t vm, vbfloat16m1_t vd,
                                             vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfncvt_f_f_w_bf16m2_rm_mu(vbool8_t vm, vbfloat16m2_t vd,
                                             vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfncvt_f_f_w_bf16m4_rm_mu(vbool4_t vm, vbfloat16m4_t vd,
                                             vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}
