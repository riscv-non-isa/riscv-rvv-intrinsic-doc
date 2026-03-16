// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfqwbdota8f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2(vfloat32mf2_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2(vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1(vfloat32m1_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1(vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2(vfloat32m2_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2(vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4(vfloat32m4_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4(vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8(vfloat32m8_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8(vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2(vfloat32mf2_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2(vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1(vfloat32m1_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1(vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2(vfloat32m2_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2(vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4(vfloat32m4_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4(vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8(vfloat32m8_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t ci,
                                                  size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8(vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_m(vbool64_t vm,
                                                      vfloat32mf2_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_m(vbool32_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_m(vbool16_t vm,
                                                    vfloat32m2_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_m(vbool8_t vm,
                                                    vfloat32m4_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_m(vbool4_t vm,
                                                    vfloat32m8_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_m(vbool64_t vm,
                                                      vfloat32mf2_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_m(vbool32_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_m(vbool16_t vm,
                                                    vfloat32m2_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_m(vbool8_t vm,
                                                    vfloat32m4_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_m(vbool4_t vm,
                                                    vfloat32m8_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m1_t vs1, size_t ci,
                                                    size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_m(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm(vfloat32mf2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm(vd, vs2, vs1, ci,
                                                     __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm(vfloat32m2_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm(vfloat32m4_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm(vfloat32m8_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm(vfloat32mf2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm(vd, vs2, vs1, ci,
                                                     __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm(vfloat32m2_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm(vfloat32m4_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm(vfloat32m8_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm(vd, vs2, vs1, ci,
                                                    __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_m(vbool64_t vm,
                                                         vfloat32mf2_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_m(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_m(vbool32_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_m(vbool16_t vm,
                                                       vfloat32m2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_m(vbool8_t vm,
                                                       vfloat32m4_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_m(vbool4_t vm,
                                                       vfloat32m8_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_m(vbool64_t vm,
                                                         vfloat32mf2_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_m(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_m(vbool32_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_m(vbool16_t vm,
                                                       vfloat32m2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_m(vbool8_t vm,
                                                       vfloat32m4_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_m(vbool4_t vm,
                                                       vfloat32m8_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_m(vm, vd, vs2, vs1, ci,
                                                      __RISCV_FRM_RNE, vl);
}
