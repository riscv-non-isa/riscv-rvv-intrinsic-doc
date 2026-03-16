// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfh \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmsac_vv_f16mf4(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                    vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16mf4(vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsac_vf_f16mf4(vfloat16mf4_t vd, _Float16 rs1,
                                    vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16mf4(vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsac_vv_f16mf2(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                    vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16mf2(vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsac_vf_f16mf2(vfloat16mf2_t vd, _Float16 rs1,
                                    vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16mf2(vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsac_vv_f16m1(vfloat16m1_t vd, vfloat16m1_t vs1,
                                  vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m1(vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsac_vf_f16m1(vfloat16m1_t vd, _Float16 rs1,
                                  vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m1(vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsac_vv_f16m2(vfloat16m2_t vd, vfloat16m2_t vs1,
                                  vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m2(vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsac_vf_f16m2(vfloat16m2_t vd, _Float16 rs1,
                                  vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m2(vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsac_vv_f16m4(vfloat16m4_t vd, vfloat16m4_t vs1,
                                  vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m4(vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsac_vf_f16m4(vfloat16m4_t vd, _Float16 rs1,
                                  vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m4(vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsac_vv_f16m8(vfloat16m8_t vd, vfloat16m8_t vs1,
                                  vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m8(vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsac_vf_f16m8(vfloat16m8_t vd, _Float16 rs1,
                                  vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m8(vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vv_f32mf2(vfloat32mf2_t vd, vfloat32mf2_t vs1,
                                    vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32mf2(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2(vfloat32mf2_t vd, float rs1,
                                    vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32mf2(vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1(vfloat32m1_t vd, vfloat32m1_t vs1,
                                  vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m1(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1(vfloat32m1_t vd, float rs1, vfloat32m1_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f32m1(vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2(vfloat32m2_t vd, vfloat32m2_t vs1,
                                  vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m2(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2(vfloat32m2_t vd, float rs1, vfloat32m2_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f32m2(vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4(vfloat32m4_t vd, vfloat32m4_t vs1,
                                  vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m4(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4(vfloat32m4_t vd, float rs1, vfloat32m4_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f32m4(vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8(vfloat32m8_t vd, vfloat32m8_t vs1,
                                  vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m8(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8(vfloat32m8_t vd, float rs1, vfloat32m8_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f32m8(vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmsac_vv_f64m1(vfloat64m1_t vd, vfloat64m1_t vs1,
                                  vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m1(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmsac_vf_f64m1(vfloat64m1_t vd, double rs1, vfloat64m1_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f64m1(vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmsac_vv_f64m2(vfloat64m2_t vd, vfloat64m2_t vs1,
                                  vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m2(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmsac_vf_f64m2(vfloat64m2_t vd, double rs1, vfloat64m2_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f64m2(vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmsac_vv_f64m4(vfloat64m4_t vd, vfloat64m4_t vs1,
                                  vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m4(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmsac_vf_f64m4(vfloat64m4_t vd, double rs1, vfloat64m4_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f64m4(vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmsac_vv_f64m8(vfloat64m8_t vd, vfloat64m8_t vs1,
                                  vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m8(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmsac_vf_f64m8(vfloat64m8_t vd, double rs1, vfloat64m8_t vs2,
                                  size_t vl) {
  return __riscv_vfmsac_vf_f64m8(vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmsac_vv_f16mf4_m(vbool64_t vm, vfloat16mf4_t vd,
                                      vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                      size_t vl) {
  return __riscv_vfmsac_vv_f16mf4_m(vm, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsac_vf_f16mf4_m(vbool64_t vm, vfloat16mf4_t vd,
                                      _Float16 rs1, vfloat16mf4_t vs2,
                                      size_t vl) {
  return __riscv_vfmsac_vf_f16mf4_m(vm, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsac_vv_f16mf2_m(vbool32_t vm, vfloat16mf2_t vd,
                                      vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfmsac_vv_f16mf2_m(vm, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsac_vf_f16mf2_m(vbool32_t vm, vfloat16mf2_t vd,
                                      _Float16 rs1, vfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfmsac_vf_f16mf2_m(vm, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsac_vv_f16m1_m(vbool16_t vm, vfloat16m1_t vd,
                                    vfloat16m1_t vs1, vfloat16m1_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f16m1_m(vm, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsac_vf_f16m1_m(vbool16_t vm, vfloat16m1_t vd, _Float16 rs1,
                                    vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m1_m(vm, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsac_vv_f16m2_m(vbool8_t vm, vfloat16m2_t vd,
                                    vfloat16m2_t vs1, vfloat16m2_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f16m2_m(vm, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsac_vf_f16m2_m(vbool8_t vm, vfloat16m2_t vd, _Float16 rs1,
                                    vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m2_m(vm, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsac_vv_f16m4_m(vbool4_t vm, vfloat16m4_t vd,
                                    vfloat16m4_t vs1, vfloat16m4_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f16m4_m(vm, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsac_vf_f16m4_m(vbool4_t vm, vfloat16m4_t vd, _Float16 rs1,
                                    vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m4_m(vm, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsac_vv_f16m8_m(vbool2_t vm, vfloat16m8_t vd,
                                    vfloat16m8_t vs1, vfloat16m8_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f16m8_m(vm, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsac_vf_f16m8_m(vbool2_t vm, vfloat16m8_t vd, _Float16 rs1,
                                    vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m8_m(vm, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vv_f32mf2_m(vbool64_t vm, vfloat32mf2_t vd,
                                      vfloat32mf2_t vs1, vfloat32mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfmsac_vv_f32mf2_m(vm, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2_m(vbool64_t vm, vfloat32mf2_t vd, float rs1,
                                      vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32mf2_m(vm, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1_m(vbool32_t vm, vfloat32m1_t vd,
                                    vfloat32m1_t vs1, vfloat32m1_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f32m1_m(vm, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1_m(vbool32_t vm, vfloat32m1_t vd, float rs1,
                                    vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m1_m(vm, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2_m(vbool16_t vm, vfloat32m2_t vd,
                                    vfloat32m2_t vs1, vfloat32m2_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f32m2_m(vm, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2_m(vbool16_t vm, vfloat32m2_t vd, float rs1,
                                    vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m2_m(vm, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4_m(vbool8_t vm, vfloat32m4_t vd,
                                    vfloat32m4_t vs1, vfloat32m4_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f32m4_m(vm, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4_m(vbool8_t vm, vfloat32m4_t vd, float rs1,
                                    vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m4_m(vm, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8_m(vbool4_t vm, vfloat32m8_t vd,
                                    vfloat32m8_t vs1, vfloat32m8_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f32m8_m(vm, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8_m(vbool4_t vm, vfloat32m8_t vd, float rs1,
                                    vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m8_m(vm, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmsac_vv_f64m1_m(vbool64_t vm, vfloat64m1_t vd,
                                    vfloat64m1_t vs1, vfloat64m1_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f64m1_m(vm, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmsac_vf_f64m1_m(vbool64_t vm, vfloat64m1_t vd, double rs1,
                                    vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m1_m(vm, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmsac_vv_f64m2_m(vbool32_t vm, vfloat64m2_t vd,
                                    vfloat64m2_t vs1, vfloat64m2_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f64m2_m(vm, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmsac_vf_f64m2_m(vbool32_t vm, vfloat64m2_t vd, double rs1,
                                    vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m2_m(vm, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmsac_vv_f64m4_m(vbool16_t vm, vfloat64m4_t vd,
                                    vfloat64m4_t vs1, vfloat64m4_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f64m4_m(vm, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmsac_vf_f64m4_m(vbool16_t vm, vfloat64m4_t vd, double rs1,
                                    vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m4_m(vm, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmsac_vv_f64m8_m(vbool8_t vm, vfloat64m8_t vd,
                                    vfloat64m8_t vs1, vfloat64m8_t vs2,
                                    size_t vl) {
  return __riscv_vfmsac_vv_f64m8_m(vm, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmsac_vf_f64m8_m(vbool8_t vm, vfloat64m8_t vd, double rs1,
                                    vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m8_m(vm, vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmsac_vv_f16mf4_rm(vfloat16mf4_t vd, vfloat16mf4_t vs1,
                                       vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16mf4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsac_vf_f16mf4_rm(vfloat16mf4_t vd, _Float16 rs1,
                                       vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16mf4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsac_vv_f16mf2_rm(vfloat16mf2_t vd, vfloat16mf2_t vs1,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16mf2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsac_vf_f16mf2_rm(vfloat16mf2_t vd, _Float16 rs1,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16mf2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsac_vv_f16m1_rm(vfloat16m1_t vd, vfloat16m1_t vs1,
                                     vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m1_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsac_vf_f16m1_rm(vfloat16m1_t vd, _Float16 rs1,
                                     vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m1_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsac_vv_f16m2_rm(vfloat16m2_t vd, vfloat16m2_t vs1,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsac_vf_f16m2_rm(vfloat16m2_t vd, _Float16 rs1,
                                     vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsac_vv_f16m4_rm(vfloat16m4_t vd, vfloat16m4_t vs1,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsac_vf_f16m4_rm(vfloat16m4_t vd, _Float16 rs1,
                                     vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsac_vv_f16m8_rm(vfloat16m8_t vd, vfloat16m8_t vs1,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f16m8_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsac_vf_f16m8_rm(vfloat16m8_t vd, _Float16 rs1,
                                     vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f16m8_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfmsac_vv_f32mf2_rm(vfloat32mf2_t vd, vfloat32mf2_t vs1,
                                       vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32mf2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2_rm(vfloat32mf2_t vd, float rs1,
                                       vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32mf2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1_rm(vfloat32m1_t vd, vfloat32m1_t vs1,
                                     vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m1_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1_rm(vfloat32m1_t vd, float rs1,
                                     vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m1_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2_rm(vfloat32m2_t vd, vfloat32m2_t vs1,
                                     vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2_rm(vfloat32m2_t vd, float rs1,
                                     vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4_rm(vfloat32m4_t vd, vfloat32m4_t vs1,
                                     vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4_rm(vfloat32m4_t vd, float rs1,
                                     vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8_rm(vfloat32m8_t vd, vfloat32m8_t vs1,
                                     vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f32m8_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8_rm(vfloat32m8_t vd, float rs1,
                                     vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m8_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfmsac_vv_f64m1_rm(vfloat64m1_t vd, vfloat64m1_t vs1,
                                     vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m1_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfmsac_vf_f64m1_rm(vfloat64m1_t vd, double rs1,
                                     vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m1_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfmsac_vv_f64m2_rm(vfloat64m2_t vd, vfloat64m2_t vs1,
                                     vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfmsac_vf_f64m2_rm(vfloat64m2_t vd, double rs1,
                                     vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfmsac_vv_f64m4_rm(vfloat64m4_t vd, vfloat64m4_t vs1,
                                     vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfmsac_vf_f64m4_rm(vfloat64m4_t vd, double rs1,
                                     vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfmsac_vv_f64m8_rm(vfloat64m8_t vd, vfloat64m8_t vs1,
                                     vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vv_f64m8_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfmsac_vf_f64m8_rm(vfloat64m8_t vd, double rs1,
                                     vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m8_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsac_vv_f16mf4_rm_m(vbool64_t vm, vfloat16mf4_t vd,
                                         vfloat16mf4_t vs1, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsac_vv_f16mf4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf4_t test_vfmsac_vf_f16mf4_rm_m(vbool64_t vm, vfloat16mf4_t vd,
                                         _Float16 rs1, vfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsac_vf_f16mf4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsac_vv_f16mf2_rm_m(vbool32_t vm, vfloat16mf2_t vd,
                                         vfloat16mf2_t vs1, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsac_vv_f16mf2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16mf2_t test_vfmsac_vf_f16mf2_rm_m(vbool32_t vm, vfloat16mf2_t vd,
                                         _Float16 rs1, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsac_vf_f16mf2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsac_vv_f16m1_rm_m(vbool16_t vm, vfloat16m1_t vd,
                                       vfloat16m1_t vs1, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f16m1_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m1_t test_vfmsac_vf_f16m1_rm_m(vbool16_t vm, vfloat16m1_t vd,
                                       _Float16 rs1, vfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vf_f16m1_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsac_vv_f16m2_rm_m(vbool8_t vm, vfloat16m2_t vd,
                                       vfloat16m2_t vs1, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f16m2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m2_t test_vfmsac_vf_f16m2_rm_m(vbool8_t vm, vfloat16m2_t vd,
                                       _Float16 rs1, vfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vf_f16m2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsac_vv_f16m4_rm_m(vbool4_t vm, vfloat16m4_t vd,
                                       vfloat16m4_t vs1, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f16m4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m4_t test_vfmsac_vf_f16m4_rm_m(vbool4_t vm, vfloat16m4_t vd,
                                       _Float16 rs1, vfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vf_f16m4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsac_vv_f16m8_rm_m(vbool2_t vm, vfloat16m8_t vd,
                                       vfloat16m8_t vs1, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f16m8_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat16m8_t test_vfmsac_vf_f16m8_rm_m(vbool2_t vm, vfloat16m8_t vd,
                                       _Float16 rs1, vfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vf_f16m8_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfmsac_vv_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vd,
                                         vfloat32mf2_t vs1, vfloat32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsac_vv_f32mf2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfmsac_vf_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vd,
                                         float rs1, vfloat32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsac_vf_f32mf2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vv_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd,
                                       vfloat32m1_t vs1, vfloat32m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f32m1_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfmsac_vf_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd, float rs1,
                                       vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m1_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vv_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vd,
                                       vfloat32m2_t vs1, vfloat32m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f32m2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfmsac_vf_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vd, float rs1,
                                       vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vv_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vd,
                                       vfloat32m4_t vs1, vfloat32m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f32m4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfmsac_vf_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vd, float rs1,
                                       vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vv_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vd,
                                       vfloat32m8_t vs1, vfloat32m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f32m8_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfmsac_vf_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vd, float rs1,
                                       vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f32m8_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfmsac_vv_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vd,
                                       vfloat64m1_t vs1, vfloat64m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f64m1_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfmsac_vf_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vd,
                                       double rs1, vfloat64m1_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vf_f64m1_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfmsac_vv_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vd,
                                       vfloat64m2_t vs1, vfloat64m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f64m2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfmsac_vf_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vd,
                                       double rs1, vfloat64m2_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vf_f64m2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfmsac_vv_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vd,
                                       vfloat64m4_t vs1, vfloat64m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f64m4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfmsac_vf_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vd,
                                       double rs1, vfloat64m4_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vf_f64m4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfmsac_vv_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vd,
                                       vfloat64m8_t vs1, vfloat64m8_t vs2,
                                       size_t vl) {
  return __riscv_vfmsac_vv_f64m8_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfmsac_vf_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vd, double rs1,
                                       vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfmsac_vf_f64m8_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}
