// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfh \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1(vfloat16mf4_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf4_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1(vfloat16mf2_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf2_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1(vfloat16m1_t vs2, vfloat32m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f16m1_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1(vfloat16m2_t vs2, vfloat32m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f16m2_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1(vfloat16m4_t vs2, vfloat32m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f16m4_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1(vfloat16m8_t vs2, vfloat32m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f16m8_f32m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1(vfloat32mf2_t vs2,
                                             vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1(vfloat32m1_t vs2, vfloat64m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1(vfloat32m2_t vs2, vfloat64m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1(vfloat32m4_t vs2, vfloat64m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1(vfloat32m8_t vs2, vfloat64m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1_m(vbool64_t vm, vfloat16mf4_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf4_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1_m(vbool32_t vm, vfloat16mf2_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf2_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1_m(vbool16_t vm, vfloat16m1_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m1_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1_m(vbool8_t vm, vfloat16m2_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m2_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1_m(vbool4_t vm, vfloat16m4_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m4_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1_m(vbool2_t vm, vfloat16m8_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m8_f32m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_m(vbool64_t vm, vfloat32mf2_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_m(vbool16_t vm, vfloat32m2_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_m(vbool8_t vm, vfloat32m4_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_m(vbool4_t vm, vfloat32m8_t vs2,
                                              vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1_rm(vfloat16mf4_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf4_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1_rm(vfloat16mf2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf2_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1_rm(vfloat16m1_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m1_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1_rm(vfloat16m2_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m2_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1_rm(vfloat16m4_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m4_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1_rm(vfloat16m8_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m8_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_rm(vfloat32mf2_t vs2,
                                                vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_rm(vfloat32m1_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_rm(vfloat32m2_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_rm(vfloat32m4_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_rm(vfloat32m8_t vs2,
                                               vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf4_f32m1_rm_m(vbool64_t vm,
                                                  vfloat16mf4_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf4_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat32m1_t test_vfwredosum_vs_f16mf2_f32m1_rm_m(vbool32_t vm,
                                                  vfloat16mf2_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16mf2_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m1_f32m1_rm_m(vbool16_t vm, vfloat16m1_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m1_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m2_f32m1_rm_m(vbool8_t vm, vfloat16m2_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m2_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m4_f32m1_rm_m(vbool4_t vm, vfloat16m4_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m4_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat32m1_t test_vfwredosum_vs_f16m8_f32m1_rm_m(vbool2_t vm, vfloat16m8_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f16m8_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat64m1_t test_vfwredosum_vs_f32mf2_f64m1_rm_m(vbool64_t vm,
                                                  vfloat32mf2_t vs2,
                                                  vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32mf2_f64m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m1_f64m1_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m1_f64m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m2_f64m1_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m2_f64m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m4_f64m1_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m4_f64m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}

vfloat64m1_t test_vfwredosum_vs_f32m8_f64m1_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                                 vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_f32m8_f64m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                vl);
}
