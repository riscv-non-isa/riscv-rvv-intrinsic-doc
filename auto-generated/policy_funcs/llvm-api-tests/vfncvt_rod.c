// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve32f \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tu(vfloat16mf4_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_tu(vd, vs2, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tu(vfloat16mf2_t vd,
                                              vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_tu(vd, vs2, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tu(vfloat16m1_t vd, vfloat32m2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_tu(vd, vs2, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tu(vfloat16m2_t vd, vfloat32m4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_tu(vd, vs2, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tu(vfloat16m4_t vd, vfloat32m8_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tu(vfloat32mf2_t vd,
                                              vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tu(vfloat32m1_t vd, vfloat64m2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tu(vfloat32m2_t vd, vfloat64m4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tu(vfloat32m4_t vd, vfloat64m8_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_tu(vd, vs2, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                               vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_tum(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                               vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_tum(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                             vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_tum(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                             vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_tum(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                             vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                               vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                             vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                             vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                             vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_tum(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                                vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_tumu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                                vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_tumu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                              vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_tumu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                              vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_tumu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                              vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                                vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                              vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                              vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                              vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_tumu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf4_mu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                              vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16mf2_mu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m1_mu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m2_mu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                            vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f16m4_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                              vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32mf2_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                            vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m1_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                            vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m2_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                            vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_f32m4_mu(vm, vd, vs2, vl);
}
