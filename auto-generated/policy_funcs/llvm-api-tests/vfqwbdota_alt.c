// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfqwbdota8f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_tu(vfloat32mf2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_tu(vfloat32m1_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_tu(vfloat32m2_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_tu(vfloat32m4_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_tu(vfloat32m8_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_tu(vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_tu(vfloat32mf2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_tu(vfloat32m1_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_tu(vfloat32m2_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_tu(vfloat32m4_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_tu(vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_tu(vfloat32m8_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_tu(vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_tum(vbool64_t vm,
                                                        vfloat32mf2_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_tum(vbool32_t vm,
                                                      vfloat32m1_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_tum(vbool16_t vm,
                                                      vfloat32m2_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_tum(vbool8_t vm,
                                                      vfloat32m4_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_tum(vbool4_t vm,
                                                      vfloat32m8_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_tum(vbool64_t vm,
                                                        vfloat32mf2_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_tum(vbool32_t vm,
                                                      vfloat32m1_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_tum(vbool16_t vm,
                                                      vfloat32m2_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_tum(vbool8_t vm,
                                                      vfloat32m4_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_tum(vbool4_t vm,
                                                      vfloat32m8_t vd,
                                                      vuint8m8_t vs2,
                                                      vuint8m1_t vs1, size_t ci,
                                                      size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_tum(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_tumu(vbool64_t vm,
                                                         vfloat32mf2_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_tumu(vm, vd, vs2, vs1, ci,
                                                       vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_tumu(vbool32_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_tumu(vbool16_t vm,
                                                       vfloat32m2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_tumu(vbool8_t vm,
                                                       vfloat32m4_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_tumu(vbool4_t vm,
                                                       vfloat32m8_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_tumu(vbool64_t vm,
                                                         vfloat32mf2_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_tumu(vm, vd, vs2, vs1, ci,
                                                       vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_tumu(vbool32_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_tumu(vbool16_t vm,
                                                       vfloat32m2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_tumu(vbool8_t vm,
                                                       vfloat32m4_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_tumu(vbool4_t vm,
                                                       vfloat32m8_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_tumu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_mu(vbool64_t vm,
                                                       vfloat32mf2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_mu(vbool32_t vm,
                                                     vfloat32m1_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_mu(vbool16_t vm,
                                                     vfloat32m2_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_mu(vbool8_t vm,
                                                     vfloat32m4_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_mu(vbool4_t vm,
                                                     vfloat32m8_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_mu(vbool64_t vm,
                                                       vfloat32mf2_t vd,
                                                       vuint8m8_t vs2,
                                                       vuint8m1_t vs1,
                                                       size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_mu(vbool32_t vm,
                                                     vfloat32m1_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_mu(vbool16_t vm,
                                                     vfloat32m2_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_mu(vbool8_t vm,
                                                     vfloat32m4_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_mu(vbool4_t vm,
                                                     vfloat32m8_t vd,
                                                     vuint8m8_t vs2,
                                                     vuint8m1_t vs1, size_t ci,
                                                     size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_mu(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_tu(
    vfloat32mf2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_tu(vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_tu(vfloat32m1_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_tu(vfloat32m2_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_tu(vfloat32m4_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_tu(vfloat32m8_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_tu(
    vfloat32mf2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_tu(vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_tu(vfloat32m1_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_tu(vfloat32m2_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_tu(vfloat32m4_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_tu(vfloat32m8_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_tu(vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t
test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_tum(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_tum(vbool32_t vm,
                                                         vfloat32m1_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_tum(vbool16_t vm,
                                                         vfloat32m2_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_tum(vbool8_t vm,
                                                         vfloat32m4_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_tum(vbool4_t vm,
                                                         vfloat32m8_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t
test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_tum(vbool64_t vm, vfloat32mf2_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_tum(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_tum(vbool32_t vm,
                                                         vfloat32m1_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_tum(vbool16_t vm,
                                                         vfloat32m2_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_tum(vbool8_t vm,
                                                         vfloat32m4_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_tum(vbool4_t vm,
                                                         vfloat32m8_t vd,
                                                         vuint8m8_t vs2,
                                                         vuint8m1_t vs1,
                                                         size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_tum(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t
test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                              vuint8m8_t vs2, vuint8m1_t vs1,
                                              size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_tumu(vm, vd, vs2, vs1, ci,
                                                          __RISCV_FRM_RNE, vl);
}

vfloat32m1_t
test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m2_t
test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m4_t
test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m8_t
test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t
test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                              vuint8m8_t vs2, vuint8m1_t vs1,
                                              size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_tumu(vm, vd, vs2, vs1, ci,
                                                          __RISCV_FRM_RNE, vl);
}

vfloat32m1_t
test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m2_t
test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_tumu(vbool16_t vm, vfloat32m2_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m4_t
test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_tumu(vbool8_t vm, vfloat32m4_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32m8_t
test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_tumu(vbool4_t vm, vfloat32m8_t vd,
                                             vuint8m8_t vs2, vuint8m1_t vs1,
                                             size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_tumu(vm, vd, vs2, vs1, ci,
                                                         __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t
test_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                            vuint8m8_t vs2, vuint8m1_t vs1,
                                            size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32mf2_rm_mu(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_mu(vbool32_t vm,
                                                        vfloat32m1_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m1_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_mu(vbool16_t vm,
                                                        vfloat32m2_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m2_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_mu(vbool8_t vm,
                                                        vfloat32m4_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m4_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_mu(vbool4_t vm,
                                                        vfloat32m8_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e4m3m1_f32m8_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t
test_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_mu(vbool64_t vm, vfloat32mf2_t vd,
                                            vuint8m8_t vs2, vuint8m1_t vs1,
                                            size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32mf2_rm_mu(vm, vd, vs2, vs1, ci,
                                                        __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_mu(vbool32_t vm,
                                                        vfloat32m1_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m1_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_mu(vbool16_t vm,
                                                        vfloat32m2_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m2_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_mu(vbool8_t vm,
                                                        vfloat32m4_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m4_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_mu(vbool4_t vm,
                                                        vfloat32m8_t vd,
                                                        vuint8m8_t vs2,
                                                        vuint8m1_t vs1,
                                                        size_t ci, size_t vl) {
  return __riscv_vfqwbdota_alt_vv_f8e5m2m1_f32m8_rm_mu(vm, vd, vs2, vs1, ci,
                                                       __RISCV_FRM_RNE, vl);
}
