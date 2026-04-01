// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfh \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_vfwadd_vv_f32mf2(vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                    size_t vl) {
  return __riscv_vfwadd_vv_f32mf2(vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2(vfloat16mf4_t vs2, _Float16 rs1,
                                    size_t vl) {
  return __riscv_vfwadd_vf_f32mf2(vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2(vfloat32mf2_t vs2, vfloat16mf4_t vs1,
                                    size_t vl) {
  return __riscv_vfwadd_wv_f32mf2(vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2(vfloat32mf2_t vs2, _Float16 rs1,
                                    size_t vl) {
  return __riscv_vfwadd_wf_f32mf2(vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1(vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1(vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m1(vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1(vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1(vfloat32m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m1(vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2(vfloat16m1_t vs2, vfloat16m1_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f32m2(vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2(vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m2(vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2(vfloat32m2_t vs2, vfloat16m1_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f32m2(vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2(vfloat32m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m2(vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4(vfloat16m2_t vs2, vfloat16m2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f32m4(vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4(vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m4(vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4(vfloat32m4_t vs2, vfloat16m2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f32m4(vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4(vfloat32m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m4(vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8(vfloat16m4_t vs2, vfloat16m4_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f32m8(vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8(vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m8(vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8(vfloat32m8_t vs2, vfloat16m4_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f32m8(vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8(vfloat32m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m8(vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1(vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1(vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m1(vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1(vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f64m1(vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1(vfloat64m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m1(vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2(vfloat32m1_t vs2, vfloat32m1_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f64m2(vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2(vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m2(vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2(vfloat64m2_t vs2, vfloat32m1_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f64m2(vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2(vfloat64m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m2(vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4(vfloat32m2_t vs2, vfloat32m2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f64m4(vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4(vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m4(vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4(vfloat64m4_t vs2, vfloat32m2_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f64m4(vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4(vfloat64m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m4(vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8(vfloat32m4_t vs2, vfloat32m4_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_vv_f64m8(vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8(vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m8(vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8(vfloat64m8_t vs2, vfloat32m4_t vs1,
                                  size_t vl) {
  return __riscv_vfwadd_wv_f64m8(vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8(vfloat64m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m8(vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_m(vbool64_t vm, vfloat16mf4_t vs2,
                                      vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32mf2_m(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_m(vbool64_t vm, vfloat16mf4_t vs2,
                                      _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32mf2_m(vm, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2,
                                      vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32mf2_m(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2,
                                      _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32mf2_m(vm, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_m(vbool32_t vm, vfloat16mf2_t vs2,
                                    vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_m(vbool32_t vm, vfloat16mf2_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m1_m(vm, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                    vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m1_m(vm, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_m(vbool16_t vm, vfloat16m1_t vs2,
                                    vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m2_m(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_m(vbool16_t vm, vfloat16m1_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m2_m(vm, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_m(vbool16_t vm, vfloat32m2_t vs2,
                                    vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m2_m(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_m(vbool16_t vm, vfloat32m2_t vs2,
                                    _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m2_m(vm, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_m(vbool8_t vm, vfloat16m2_t vs2,
                                    vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m4_m(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_m(vbool8_t vm, vfloat16m2_t vs2, _Float16 rs1,
                                    size_t vl) {
  return __riscv_vfwadd_vf_f32m4_m(vm, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_m(vbool8_t vm, vfloat32m4_t vs2,
                                    vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m4_m(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_m(vbool8_t vm, vfloat32m4_t vs2, _Float16 rs1,
                                    size_t vl) {
  return __riscv_vfwadd_wf_f32m4_m(vm, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_m(vbool4_t vm, vfloat16m4_t vs2,
                                    vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m8_m(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_m(vbool4_t vm, vfloat16m4_t vs2, _Float16 rs1,
                                    size_t vl) {
  return __riscv_vfwadd_vf_f32m8_m(vm, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_m(vbool4_t vm, vfloat32m8_t vs2,
                                    vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m8_m(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_m(vbool4_t vm, vfloat32m8_t vs2, _Float16 rs1,
                                    size_t vl) {
  return __riscv_vfwadd_wf_f32m8_m(vm, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_m(vbool64_t vm, vfloat32mf2_t vs2,
                                    vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_m(vbool64_t vm, vfloat32mf2_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_vf_f64m1_m(vm, vs2, rs1, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_m(vbool64_t vm, vfloat64m1_t vs2,
                                    vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m1_m(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_m(vbool64_t vm, vfloat64m1_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_wf_f64m1_m(vm, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_m(vbool32_t vm, vfloat32m1_t vs2,
                                    vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m2_m(vm, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_m(vbool32_t vm, vfloat32m1_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_vf_f64m2_m(vm, vs2, rs1, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_m(vbool32_t vm, vfloat64m2_t vs2,
                                    vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m2_m(vm, vs2, vs1, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_m(vbool32_t vm, vfloat64m2_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_wf_f64m2_m(vm, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_m(vbool16_t vm, vfloat32m2_t vs2,
                                    vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m4_m(vm, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_m(vbool16_t vm, vfloat32m2_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_vf_f64m4_m(vm, vs2, rs1, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_m(vbool16_t vm, vfloat64m4_t vs2,
                                    vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m4_m(vm, vs2, vs1, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_m(vbool16_t vm, vfloat64m4_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_wf_f64m4_m(vm, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_m(vbool8_t vm, vfloat32m4_t vs2,
                                    vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m8_m(vm, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_m(vbool8_t vm, vfloat32m4_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_vf_f64m8_m(vm, vs2, rs1, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_m(vbool8_t vm, vfloat64m8_t vs2,
                                    vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m8_m(vm, vs2, vs1, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_m(vbool8_t vm, vfloat64m8_t vs2, float rs1,
                                    size_t vl) {
  return __riscv_vfwadd_wf_f64m8_m(vm, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm(vfloat16mf4_t vs2, vfloat16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_vv_f32mf2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm(vfloat16mf4_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_f32mf2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm(vfloat32mf2_t vs2, vfloat16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vfwadd_wv_f32mf2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm(vfloat32mf2_t vs2, _Float16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf_f32mf2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm(vfloat16mf2_t vs2, vfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm(vfloat16mf2_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_f32m1_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm(vfloat32m1_t vs2, vfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm(vfloat32m1_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_f32m1_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm(vfloat16m1_t vs2, vfloat16m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f32m2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm(vfloat16m1_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_f32m2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm(vfloat32m2_t vs2, vfloat16m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f32m2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm(vfloat32m2_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_f32m2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm(vfloat16m2_t vs2, vfloat16m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f32m4_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm(vfloat16m2_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_f32m4_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm(vfloat32m4_t vs2, vfloat16m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f32m4_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm(vfloat32m4_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_f32m4_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm(vfloat16m4_t vs2, vfloat16m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f32m8_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm(vfloat16m4_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_vf_f32m8_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm(vfloat32m8_t vs2, vfloat16m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f32m8_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm(vfloat32m8_t vs2, _Float16 rs1,
                                     size_t vl) {
  return __riscv_vfwadd_wf_f32m8_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm(vfloat32mf2_t vs2, vfloat32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f64m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm(vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m1_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm(vfloat64m1_t vs2, vfloat32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f64m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm(vfloat64m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m1_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm(vfloat32m1_t vs2, vfloat32m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f64m2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm(vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm(vfloat64m2_t vs2, vfloat32m1_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f64m2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm(vfloat64m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm(vfloat32m2_t vs2, vfloat32m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f64m4_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm(vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m4_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm(vfloat64m4_t vs2, vfloat32m2_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f64m4_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm(vfloat64m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m4_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm(vfloat32m4_t vs2, vfloat32m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_vv_f64m8_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm(vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m8_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm(vfloat64m8_t vs2, vfloat32m4_t vs1,
                                     size_t vl) {
  return __riscv_vfwadd_wv_f64m8_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm(vfloat64m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m8_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_f32mf2_rm_m(vbool64_t vm, vfloat16mf4_t vs2,
                                         vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32mf2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_f32mf2_rm_m(vbool64_t vm, vfloat16mf4_t vs2,
                                         _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32mf2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                         vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32mf2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                         _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32mf2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_f32m1_rm_m(vbool32_t vm, vfloat16mf2_t vs2,
                                       vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_f32m1_rm_m(vbool32_t vm, vfloat16mf2_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m1_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                       vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m1_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_f32m2_rm_m(vbool16_t vm, vfloat16m1_t vs2,
                                       vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_f32m2_rm_m(vbool16_t vm, vfloat16m1_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                       vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_f32m4_rm_m(vbool8_t vm, vfloat16m2_t vs2,
                                       vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m4_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_f32m4_rm_m(vbool8_t vm, vfloat16m2_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m4_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                       vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m4_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m4_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_f32m8_rm_m(vbool4_t vm, vfloat16m4_t vs2,
                                       vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f32m8_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_f32m8_rm_m(vbool4_t vm, vfloat16m4_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_vf_f32m8_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                       vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f32m8_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                       _Float16 rs1, size_t vl) {
  return __riscv_vfwadd_wf_f32m8_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vv_f64m1_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                       vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_vf_f64m1_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m1_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wv_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vs2,
                                       vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m1_t test_vfwadd_wf_f64m1_rm_m(vbool64_t vm, vfloat64m1_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m1_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vv_f64m2_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                       vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_vf_f64m2_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wv_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vs2,
                                       vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m2_t test_vfwadd_wf_f64m2_rm_m(vbool32_t vm, vfloat64m2_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vv_f64m4_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                       vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m4_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_vf_f64m4_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwadd_vf_f64m4_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wv_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vs2,
                                       vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m4_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m4_t test_vfwadd_wf_f64m4_rm_m(vbool16_t vm, vfloat64m4_t vs2,
                                       float rs1, size_t vl) {
  return __riscv_vfwadd_wf_f64m4_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vv_f64m8_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                       vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv_f64m8_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_vf_f64m8_rm_m(vbool8_t vm, vfloat32m4_t vs2, float rs1,
                                       size_t vl) {
  return __riscv_vfwadd_vf_f64m8_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wv_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vs2,
                                       vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv_f64m8_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat64m8_t test_vfwadd_wf_f64m8_rm_m(vbool8_t vm, vfloat64m8_t vs2, float rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf_f64m8_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}
