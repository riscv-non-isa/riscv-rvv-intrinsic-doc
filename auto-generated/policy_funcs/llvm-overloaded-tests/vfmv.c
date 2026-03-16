// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfh \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmv_v_f_f16mf4_tu(vfloat16mf4_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat16mf2_t test_vfmv_v_f_f16mf2_tu(vfloat16mf2_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat16m1_t test_vfmv_v_f_f16m1_tu(vfloat16m1_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat16m2_t test_vfmv_v_f_f16m2_tu(vfloat16m2_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat16m4_t test_vfmv_v_f_f16m4_tu(vfloat16m4_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat16m8_t test_vfmv_v_f_f16m8_tu(vfloat16m8_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat32mf2_t test_vfmv_v_f_f32mf2_tu(vfloat32mf2_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat32m1_t test_vfmv_v_f_f32m1_tu(vfloat32m1_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat32m2_t test_vfmv_v_f_f32m2_tu(vfloat32m2_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat32m4_t test_vfmv_v_f_f32m4_tu(vfloat32m4_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat32m8_t test_vfmv_v_f_f32m8_tu(vfloat32m8_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat64m1_t test_vfmv_v_f_f64m1_tu(vfloat64m1_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat64m2_t test_vfmv_v_f_f64m2_tu(vfloat64m2_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat64m4_t test_vfmv_v_f_f64m4_tu(vfloat64m4_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat64m8_t test_vfmv_v_f_f64m8_tu(vfloat64m8_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vfloat16mf4_t test_vfmv_s_f_f16mf4_tu(vfloat16mf4_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat16mf2_t test_vfmv_s_f_f16mf2_tu(vfloat16mf2_t vd, _Float16 rs1,
                                      size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat16m1_t test_vfmv_s_f_f16m1_tu(vfloat16m1_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat16m2_t test_vfmv_s_f_f16m2_tu(vfloat16m2_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat16m4_t test_vfmv_s_f_f16m4_tu(vfloat16m4_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat16m8_t test_vfmv_s_f_f16m8_tu(vfloat16m8_t vd, _Float16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat32mf2_t test_vfmv_s_f_f32mf2_tu(vfloat32mf2_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat32m1_t test_vfmv_s_f_f32m1_tu(vfloat32m1_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat32m2_t test_vfmv_s_f_f32m2_tu(vfloat32m2_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat32m4_t test_vfmv_s_f_f32m4_tu(vfloat32m4_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat32m8_t test_vfmv_s_f_f32m8_tu(vfloat32m8_t vd, float rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat64m1_t test_vfmv_s_f_f64m1_tu(vfloat64m1_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat64m2_t test_vfmv_s_f_f64m2_tu(vfloat64m2_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat64m4_t test_vfmv_s_f_f64m4_tu(vfloat64m4_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vfloat64m8_t test_vfmv_s_f_f64m8_tu(vfloat64m8_t vd, double rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}
