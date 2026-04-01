// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfwdota16bf \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1(vfloat32m1_t vd, vbfloat16mf4_t vs2,
                                           vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1(vfloat32m1_t vd, vbfloat16mf2_t vs2,
                                           vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1(vfloat32m1_t vd, vbfloat16m1_t vs2,
                                          vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1(vfloat32m1_t vd, vbfloat16m2_t vs2,
                                          vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1(vfloat32m1_t vd, vbfloat16m4_t vs2,
                                          vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_m(vbool64_t vm, vfloat32m1_t vd,
                                             vbfloat16mf4_t vs2,
                                             vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_m(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_m(vbool32_t vm, vfloat32m1_t vd,
                                             vbfloat16mf2_t vs2,
                                             vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_m(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_m(vbool16_t vm, vfloat32m1_t vd,
                                            vbfloat16m1_t vs2,
                                            vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_m(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_m(vbool8_t vm, vfloat32m1_t vd,
                                            vbfloat16m2_t vs2,
                                            vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_m(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_m(vbool4_t vm, vfloat32m1_t vd,
                                            vbfloat16m4_t vs2,
                                            vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_m(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm(vfloat32m1_t vd,
                                              vbfloat16mf4_t vs2,
                                              vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_rm(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm(vfloat32m1_t vd,
                                              vbfloat16mf2_t vs2,
                                              vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_rm(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm(vfloat32m1_t vd, vbfloat16m1_t vs2,
                                             vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_rm(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm(vfloat32m1_t vd, vbfloat16m2_t vs2,
                                             vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_rm(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm(vfloat32m1_t vd, vbfloat16m4_t vs2,
                                             vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_rm(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm_m(vbool64_t vm, vfloat32m1_t vd,
                                                vbfloat16mf4_t vs2,
                                                vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_rm_m(vm, vd, vs2, vs1,
                                               __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd,
                                                vbfloat16mf2_t vs2,
                                                vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_rm_m(vm, vd, vs2, vs1,
                                               __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm_m(vbool16_t vm, vfloat32m1_t vd,
                                               vbfloat16m1_t vs2,
                                               vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_rm_m(vm, vd, vs2, vs1, __RISCV_FRM_RNE,
                                              vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm_m(vbool8_t vm, vfloat32m1_t vd,
                                               vbfloat16m2_t vs2,
                                               vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_rm_m(vm, vd, vs2, vs1, __RISCV_FRM_RNE,
                                              vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm_m(vbool4_t vm, vfloat32m1_t vd,
                                               vbfloat16m4_t vs2,
                                               vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_rm_m(vm, vd, vs2, vs1, __RISCV_FRM_RNE,
                                              vl);
}
