// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfofp8min \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_tu(vuint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_tu(vuint8mf8_t vd,
                                                       vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_tu(vuint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_tu(vuint8mf4_t vd,
                                                       vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_tu(vuint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_tu(vuint8mf2_t vd,
                                                      vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_tu(vuint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_tu(vuint8m1_t vd,
                                                    vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_tu(vuint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_tu(vuint8m2_t vd,
                                                    vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_tu(vuint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_tu(vuint8m4_t vd,
                                                    vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_tum(vbool64_t vm,
                                                    vuint8mf8_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_tum(vbool64_t vm,
                                                        vuint8mf8_t vd,
                                                        vbfloat16mf4_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_tum(vbool32_t vm,
                                                    vuint8mf4_t vd,
                                                    vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_tum(vbool32_t vm,
                                                        vuint8mf4_t vd,
                                                        vbfloat16mf2_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_tum(vbool16_t vm, vuint8mf2_t vd,
                                                   vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_tum(vbool16_t vm,
                                                       vuint8mf2_t vd,
                                                       vbfloat16m1_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_tum(vbool8_t vm, vuint8m1_t vd,
                                                 vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_tum(vbool8_t vm, vuint8m1_t vd,
                                                     vbfloat16m2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_tum(vbool4_t vm, vuint8m2_t vd,
                                                 vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_tum(vbool4_t vm, vuint8m2_t vd,
                                                     vbfloat16m4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_tum(vbool2_t vm, vuint8m4_t vd,
                                                 vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_tum(vbool2_t vm, vuint8m4_t vd,
                                                     vbfloat16m8_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_tumu(vbool64_t vm,
                                                     vuint8mf8_t vd,
                                                     vbfloat16mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_tumu(vbool64_t vm,
                                                         vuint8mf8_t vd,
                                                         vbfloat16mf4_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_tumu(vbool32_t vm,
                                                     vuint8mf4_t vd,
                                                     vbfloat16mf2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_tumu(vbool32_t vm,
                                                         vuint8mf4_t vd,
                                                         vbfloat16mf2_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_tumu(vbool16_t vm,
                                                    vuint8mf2_t vd,
                                                    vbfloat16m1_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_tumu(vbool16_t vm,
                                                        vuint8mf2_t vd,
                                                        vbfloat16m1_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_tumu(vbool8_t vm, vuint8m1_t vd,
                                                  vbfloat16m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_tumu(vbool8_t vm,
                                                      vuint8m1_t vd,
                                                      vbfloat16m2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_tumu(vbool4_t vm, vuint8m2_t vd,
                                                  vbfloat16m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_tumu(vbool4_t vm,
                                                      vuint8m2_t vd,
                                                      vbfloat16m4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_tumu(vbool2_t vm, vuint8m4_t vd,
                                                  vbfloat16m8_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_tumu(vbool2_t vm,
                                                      vuint8m4_t vd,
                                                      vbfloat16m8_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_mu(vbool64_t vm, vuint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_mu(vbool64_t vm,
                                                       vuint8mf8_t vd,
                                                       vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_mu(vbool32_t vm, vuint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_mu(vbool32_t vm,
                                                       vuint8mf4_t vd,
                                                       vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_mu(vbool16_t vm, vuint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_mu(vbool16_t vm,
                                                      vuint8mf2_t vd,
                                                      vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_mu(vbool8_t vm, vuint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_mu(vbool8_t vm, vuint8m1_t vd,
                                                    vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_mu(vbool4_t vm, vuint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_mu(vbool4_t vm, vuint8m2_t vd,
                                                    vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_mu(vbool2_t vm, vuint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_mu(vbool2_t vm, vuint8m4_t vd,
                                                    vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm_tu(vuint8mf8_t vd,
                                                      vbfloat16mf4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm_tu(vuint8mf8_t vd,
                                                          vbfloat16mf4_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm_tu(vuint8mf4_t vd,
                                                      vbfloat16mf2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm_tu(vuint8mf4_t vd,
                                                          vbfloat16mf2_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm_tu(vuint8mf2_t vd,
                                                     vbfloat16m1_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm_tu(vuint8mf2_t vd,
                                                         vbfloat16m1_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm_tu(vuint8m1_t vd,
                                                   vbfloat16m2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm_tu(vuint8m1_t vd,
                                                       vbfloat16m2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm_tu(vuint8m2_t vd,
                                                   vbfloat16m4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm_tu(vuint8m2_t vd,
                                                       vbfloat16m4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm_tu(vuint8m4_t vd,
                                                   vbfloat16m8_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm_tu(vuint8m4_t vd,
                                                       vbfloat16m8_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm_tum(vbool64_t vm,
                                                       vuint8mf8_t vd,
                                                       vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm_tum(vbool64_t vm,
                                                           vuint8mf8_t vd,
                                                           vbfloat16mf4_t vs2,
                                                           size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm_tum(vbool32_t vm,
                                                       vuint8mf4_t vd,
                                                       vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm_tum(vbool32_t vm,
                                                           vuint8mf4_t vd,
                                                           vbfloat16mf2_t vs2,
                                                           size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm_tum(vbool16_t vm,
                                                      vuint8mf2_t vd,
                                                      vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm_tum(vbool16_t vm,
                                                          vuint8mf2_t vd,
                                                          vbfloat16m1_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm_tum(vbool8_t vm, vuint8m1_t vd,
                                                    vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm_tum(vbool8_t vm,
                                                        vuint8m1_t vd,
                                                        vbfloat16m2_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm_tum(vbool4_t vm, vuint8m2_t vd,
                                                    vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm_tum(vbool4_t vm,
                                                        vuint8m2_t vd,
                                                        vbfloat16m4_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm_tum(vbool2_t vm, vuint8m4_t vd,
                                                    vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm_tum(vbool2_t vm,
                                                        vuint8m4_t vd,
                                                        vbfloat16m8_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm_tumu(vbool64_t vm,
                                                        vuint8mf8_t vd,
                                                        vbfloat16mf4_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm_tumu(vbool64_t vm,
                                                            vuint8mf8_t vd,
                                                            vbfloat16mf4_t vs2,
                                                            size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm_tumu(vbool32_t vm,
                                                        vuint8mf4_t vd,
                                                        vbfloat16mf2_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm_tumu(vbool32_t vm,
                                                            vuint8mf4_t vd,
                                                            vbfloat16mf2_t vs2,
                                                            size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm_tumu(vbool16_t vm,
                                                       vuint8mf2_t vd,
                                                       vbfloat16m1_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm_tumu(vbool16_t vm,
                                                           vuint8mf2_t vd,
                                                           vbfloat16m1_t vs2,
                                                           size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm_tumu(vbool8_t vm, vuint8m1_t vd,
                                                     vbfloat16m2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm_tumu(vbool8_t vm,
                                                         vuint8m1_t vd,
                                                         vbfloat16m2_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm_tumu(vbool4_t vm, vuint8m2_t vd,
                                                     vbfloat16m4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm_tumu(vbool4_t vm,
                                                         vuint8m2_t vd,
                                                         vbfloat16m4_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm_tumu(vbool2_t vm, vuint8m4_t vd,
                                                     vbfloat16m8_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm_tumu(vbool2_t vm,
                                                         vuint8m4_t vd,
                                                         vbfloat16m8_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm_mu(vbool64_t vm,
                                                      vuint8mf8_t vd,
                                                      vbfloat16mf4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm_mu(vbool64_t vm,
                                                          vuint8mf8_t vd,
                                                          vbfloat16mf4_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm_mu(vbool32_t vm,
                                                      vuint8mf4_t vd,
                                                      vbfloat16mf2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm_mu(vbool32_t vm,
                                                          vuint8mf4_t vd,
                                                          vbfloat16mf2_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm_mu(vbool16_t vm,
                                                     vuint8mf2_t vd,
                                                     vbfloat16m1_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm_mu(vbool16_t vm,
                                                         vuint8mf2_t vd,
                                                         vbfloat16m1_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm_mu(vbool8_t vm, vuint8m1_t vd,
                                                   vbfloat16m2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm_mu(vbool8_t vm,
                                                       vuint8m1_t vd,
                                                       vbfloat16m2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm_mu(vbool4_t vm, vuint8m2_t vd,
                                                   vbfloat16m4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm_mu(vbool4_t vm,
                                                       vuint8m2_t vd,
                                                       vbfloat16m4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm_mu(vbool2_t vm, vuint8m4_t vd,
                                                   vbfloat16m8_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm_mu(vbool2_t vm,
                                                       vuint8m4_t vd,
                                                       vbfloat16m8_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_tu(vuint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_tu(vuint8mf8_t vd,
                                                       vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_tu(vuint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_tu(vuint8mf4_t vd,
                                                       vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_tu(vuint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_tu(vuint8mf2_t vd,
                                                      vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_tu(vuint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_tu(vuint8m1_t vd,
                                                    vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_tu(vuint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_tu(vuint8m2_t vd,
                                                    vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_tu(vuint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_tu(vuint8m4_t vd,
                                                    vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_tum(vbool64_t vm,
                                                    vuint8mf8_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_tum(vbool64_t vm,
                                                        vuint8mf8_t vd,
                                                        vbfloat16mf4_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_tum(vbool32_t vm,
                                                    vuint8mf4_t vd,
                                                    vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_tum(vbool32_t vm,
                                                        vuint8mf4_t vd,
                                                        vbfloat16mf2_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_tum(vbool16_t vm, vuint8mf2_t vd,
                                                   vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_tum(vbool16_t vm,
                                                       vuint8mf2_t vd,
                                                       vbfloat16m1_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_tum(vbool8_t vm, vuint8m1_t vd,
                                                 vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_tum(vbool8_t vm, vuint8m1_t vd,
                                                     vbfloat16m2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_tum(vbool4_t vm, vuint8m2_t vd,
                                                 vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_tum(vbool4_t vm, vuint8m2_t vd,
                                                     vbfloat16m4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_tum(vbool2_t vm, vuint8m4_t vd,
                                                 vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_tum(vbool2_t vm, vuint8m4_t vd,
                                                     vbfloat16m8_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_tumu(vbool64_t vm,
                                                     vuint8mf8_t vd,
                                                     vbfloat16mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_tumu(vbool64_t vm,
                                                         vuint8mf8_t vd,
                                                         vbfloat16mf4_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_tumu(vbool32_t vm,
                                                     vuint8mf4_t vd,
                                                     vbfloat16mf2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_tumu(vbool32_t vm,
                                                         vuint8mf4_t vd,
                                                         vbfloat16mf2_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_tumu(vbool16_t vm,
                                                    vuint8mf2_t vd,
                                                    vbfloat16m1_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_tumu(vbool16_t vm,
                                                        vuint8mf2_t vd,
                                                        vbfloat16m1_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_tumu(vbool8_t vm, vuint8m1_t vd,
                                                  vbfloat16m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_tumu(vbool8_t vm,
                                                      vuint8m1_t vd,
                                                      vbfloat16m2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_tumu(vbool4_t vm, vuint8m2_t vd,
                                                  vbfloat16m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_tumu(vbool4_t vm,
                                                      vuint8m2_t vd,
                                                      vbfloat16m4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_tumu(vbool2_t vm, vuint8m4_t vd,
                                                  vbfloat16m8_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_tumu(vbool2_t vm,
                                                      vuint8m4_t vd,
                                                      vbfloat16m8_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_mu(vbool64_t vm, vuint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_mu(vbool64_t vm,
                                                       vuint8mf8_t vd,
                                                       vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_mu(vbool32_t vm, vuint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_mu(vbool32_t vm,
                                                       vuint8mf4_t vd,
                                                       vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_mu(vbool16_t vm, vuint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_mu(vbool16_t vm,
                                                      vuint8mf2_t vd,
                                                      vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_mu(vbool8_t vm, vuint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_mu(vbool8_t vm, vuint8m1_t vd,
                                                    vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_mu(vbool4_t vm, vuint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_mu(vbool4_t vm, vuint8m2_t vd,
                                                    vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_mu(vbool2_t vm, vuint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_mu(vbool2_t vm, vuint8m4_t vd,
                                                    vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm_tu(vuint8mf8_t vd,
                                                      vbfloat16mf4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm_tu(vuint8mf8_t vd,
                                                          vbfloat16mf4_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm_tu(vuint8mf4_t vd,
                                                      vbfloat16mf2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm_tu(vuint8mf4_t vd,
                                                          vbfloat16mf2_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm_tu(vuint8mf2_t vd,
                                                     vbfloat16m1_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm_tu(vuint8mf2_t vd,
                                                         vbfloat16m1_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm_tu(vuint8m1_t vd,
                                                   vbfloat16m2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm_tu(vuint8m1_t vd,
                                                       vbfloat16m2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm_tu(vuint8m2_t vd,
                                                   vbfloat16m4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm_tu(vuint8m2_t vd,
                                                       vbfloat16m4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm_tu(vuint8m4_t vd,
                                                   vbfloat16m8_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm_tu(vuint8m4_t vd,
                                                       vbfloat16m8_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm_tum(vbool64_t vm,
                                                       vuint8mf8_t vd,
                                                       vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm_tum(vbool64_t vm,
                                                           vuint8mf8_t vd,
                                                           vbfloat16mf4_t vs2,
                                                           size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm_tum(vbool32_t vm,
                                                       vuint8mf4_t vd,
                                                       vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm_tum(vbool32_t vm,
                                                           vuint8mf4_t vd,
                                                           vbfloat16mf2_t vs2,
                                                           size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm_tum(vbool16_t vm,
                                                      vuint8mf2_t vd,
                                                      vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm_tum(vbool16_t vm,
                                                          vuint8mf2_t vd,
                                                          vbfloat16m1_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm_tum(vbool8_t vm, vuint8m1_t vd,
                                                    vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm_tum(vbool8_t vm,
                                                        vuint8m1_t vd,
                                                        vbfloat16m2_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm_tum(vbool4_t vm, vuint8m2_t vd,
                                                    vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm_tum(vbool4_t vm,
                                                        vuint8m2_t vd,
                                                        vbfloat16m4_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm_tum(vbool2_t vm, vuint8m4_t vd,
                                                    vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm_tum(vbool2_t vm,
                                                        vuint8m4_t vd,
                                                        vbfloat16m8_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm_tumu(vbool64_t vm,
                                                        vuint8mf8_t vd,
                                                        vbfloat16mf4_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm_tumu(vbool64_t vm,
                                                            vuint8mf8_t vd,
                                                            vbfloat16mf4_t vs2,
                                                            size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm_tumu(vbool32_t vm,
                                                        vuint8mf4_t vd,
                                                        vbfloat16mf2_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm_tumu(vbool32_t vm,
                                                            vuint8mf4_t vd,
                                                            vbfloat16mf2_t vs2,
                                                            size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm_tumu(vbool16_t vm,
                                                       vuint8mf2_t vd,
                                                       vbfloat16m1_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm_tumu(vbool16_t vm,
                                                           vuint8mf2_t vd,
                                                           vbfloat16m1_t vs2,
                                                           size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm_tumu(vbool8_t vm, vuint8m1_t vd,
                                                     vbfloat16m2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm_tumu(vbool8_t vm,
                                                         vuint8m1_t vd,
                                                         vbfloat16m2_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm_tumu(vbool4_t vm, vuint8m2_t vd,
                                                     vbfloat16m4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm_tumu(vbool4_t vm,
                                                         vuint8m2_t vd,
                                                         vbfloat16m4_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm_tumu(vbool2_t vm, vuint8m4_t vd,
                                                     vbfloat16m8_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm_tumu(vbool2_t vm,
                                                         vuint8m4_t vd,
                                                         vbfloat16m8_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_tumu(vm, vd, vs2, __RISCV_FRM_RNE,
                                               vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm_mu(vbool64_t vm,
                                                      vuint8mf8_t vd,
                                                      vbfloat16mf4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm_mu(vbool64_t vm,
                                                          vuint8mf8_t vd,
                                                          vbfloat16mf4_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm_mu(vbool32_t vm,
                                                      vuint8mf4_t vd,
                                                      vbfloat16mf2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm_mu(vbool32_t vm,
                                                          vuint8mf4_t vd,
                                                          vbfloat16mf2_t vs2,
                                                          size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm_mu(vbool16_t vm,
                                                     vuint8mf2_t vd,
                                                     vbfloat16m1_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm_mu(vbool16_t vm,
                                                         vuint8mf2_t vd,
                                                         vbfloat16m1_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm_mu(vbool8_t vm, vuint8m1_t vd,
                                                   vbfloat16m2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm_mu(vbool8_t vm,
                                                       vuint8m1_t vd,
                                                       vbfloat16m2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm_mu(vbool4_t vm, vuint8m2_t vd,
                                                   vbfloat16m4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm_mu(vbool4_t vm,
                                                       vuint8m2_t vd,
                                                       vbfloat16m4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm_mu(vbool2_t vm, vuint8m4_t vd,
                                                   vbfloat16m8_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm_mu(vbool2_t vm,
                                                       vuint8m4_t vd,
                                                       vbfloat16m8_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}
