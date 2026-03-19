// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfofp8min \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8(vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4(vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2(vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_m(vbool64_t vm,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_m(vbool64_t vm,
                                                      vbfloat16mf4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_m(vbool32_t vm,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_m(vbool32_t vm,
                                                      vbfloat16mf2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_m(vbool16_t vm,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_m(vbool16_t vm,
                                                     vbfloat16m1_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_m(vbool8_t vm,
                                                   vbfloat16m2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_m(vbool4_t vm, vbfloat16m4_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_m(vbool4_t vm,
                                                   vbfloat16m4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_m(vbool2_t vm, vbfloat16m8_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_m(vbool2_t vm,
                                                   vbfloat16m8_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm(vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm(vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm(vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm(vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm(vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm(vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm(vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm(vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm(vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm_m(vbool64_t vm,
                                                     vbfloat16mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm_m(vbool64_t vm,
                                                         vbfloat16mf4_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm_m(vbool32_t vm,
                                                     vbfloat16mf2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm_m(vbool32_t vm,
                                                         vbfloat16mf2_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm_m(vbool16_t vm,
                                                    vbfloat16m1_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm_m(vbool16_t vm,
                                                        vbfloat16m1_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm_m(vbool8_t vm,
                                                  vbfloat16m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm_m(vbool8_t vm,
                                                      vbfloat16m2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm_m(vbool4_t vm,
                                                  vbfloat16m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm_m(vbool4_t vm,
                                                      vbfloat16m4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm_m(vbool2_t vm,
                                                  vbfloat16m8_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm_m(vbool2_t vm,
                                                      vbfloat16m8_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e4m3(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8(vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4(vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2(vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_m(vbool64_t vm,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_m(vbool64_t vm,
                                                      vbfloat16mf4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_m(vbool32_t vm,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_m(vbool32_t vm,
                                                      vbfloat16mf2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_m(vbool16_t vm,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_m(vbool16_t vm,
                                                     vbfloat16m1_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_m(vbool8_t vm,
                                                   vbfloat16m2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_m(vbool4_t vm, vbfloat16m4_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_m(vbool4_t vm,
                                                   vbfloat16m4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_m(vbool2_t vm, vbfloat16m8_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_m(vbool2_t vm,
                                                   vbfloat16m8_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm(vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm(vbfloat16mf4_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm(vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm(vbfloat16mf2_t vs2,
                                                       size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm(vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm(vbfloat16m1_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm(vbfloat16m2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm(vbfloat16m4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm(vbfloat16m8_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm_m(vbool64_t vm,
                                                     vbfloat16mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm_m(vbool64_t vm,
                                                         vbfloat16mf4_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm_m(vbool32_t vm,
                                                     vbfloat16mf2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm_m(vbool32_t vm,
                                                         vbfloat16mf2_t vs2,
                                                         size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm_m(vbool16_t vm,
                                                    vbfloat16m1_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm_m(vbool16_t vm,
                                                        vbfloat16m1_t vs2,
                                                        size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm_m(vbool8_t vm,
                                                  vbfloat16m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm_m(vbool8_t vm,
                                                      vbfloat16m2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm_m(vbool4_t vm,
                                                  vbfloat16m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm_m(vbool4_t vm,
                                                      vbfloat16m4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm_m(vbool2_t vm,
                                                  vbfloat16m8_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint8m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm_m(vbool2_t vm,
                                                      vbfloat16m8_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_sat_f_bf16_f8e5m2(vm, vs2, __RISCV_FRM_RNE, vl);
}
