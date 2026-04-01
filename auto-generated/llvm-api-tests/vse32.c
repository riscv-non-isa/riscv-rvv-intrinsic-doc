// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve32f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vse32_v_f32mf2(float *rs1, vfloat32mf2_t vs3, size_t vl) {
  return __riscv_vse32_v_f32mf2(rs1, vs3, vl);
}

void test_vse32_v_f32m1(float *rs1, vfloat32m1_t vs3, size_t vl) {
  return __riscv_vse32_v_f32m1(rs1, vs3, vl);
}

void test_vse32_v_f32m2(float *rs1, vfloat32m2_t vs3, size_t vl) {
  return __riscv_vse32_v_f32m2(rs1, vs3, vl);
}

void test_vse32_v_f32m4(float *rs1, vfloat32m4_t vs3, size_t vl) {
  return __riscv_vse32_v_f32m4(rs1, vs3, vl);
}

void test_vse32_v_f32m8(float *rs1, vfloat32m8_t vs3, size_t vl) {
  return __riscv_vse32_v_f32m8(rs1, vs3, vl);
}

void test_vse32_v_i32mf2(int32_t *rs1, vint32mf2_t vs3, size_t vl) {
  return __riscv_vse32_v_i32mf2(rs1, vs3, vl);
}

void test_vse32_v_i32m1(int32_t *rs1, vint32m1_t vs3, size_t vl) {
  return __riscv_vse32_v_i32m1(rs1, vs3, vl);
}

void test_vse32_v_i32m2(int32_t *rs1, vint32m2_t vs3, size_t vl) {
  return __riscv_vse32_v_i32m2(rs1, vs3, vl);
}

void test_vse32_v_i32m4(int32_t *rs1, vint32m4_t vs3, size_t vl) {
  return __riscv_vse32_v_i32m4(rs1, vs3, vl);
}

void test_vse32_v_i32m8(int32_t *rs1, vint32m8_t vs3, size_t vl) {
  return __riscv_vse32_v_i32m8(rs1, vs3, vl);
}

void test_vse32_v_u32mf2(uint32_t *rs1, vuint32mf2_t vs3, size_t vl) {
  return __riscv_vse32_v_u32mf2(rs1, vs3, vl);
}

void test_vse32_v_u32m1(uint32_t *rs1, vuint32m1_t vs3, size_t vl) {
  return __riscv_vse32_v_u32m1(rs1, vs3, vl);
}

void test_vse32_v_u32m2(uint32_t *rs1, vuint32m2_t vs3, size_t vl) {
  return __riscv_vse32_v_u32m2(rs1, vs3, vl);
}

void test_vse32_v_u32m4(uint32_t *rs1, vuint32m4_t vs3, size_t vl) {
  return __riscv_vse32_v_u32m4(rs1, vs3, vl);
}

void test_vse32_v_u32m8(uint32_t *rs1, vuint32m8_t vs3, size_t vl) {
  return __riscv_vse32_v_u32m8(rs1, vs3, vl);
}

void test_vse32_v_f32mf2_m(vbool64_t vm, float *rs1, vfloat32mf2_t vs3,
                           size_t vl) {
  return __riscv_vse32_v_f32mf2_m(vm, rs1, vs3, vl);
}

void test_vse32_v_f32m1_m(vbool32_t vm, float *rs1, vfloat32m1_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_f32m1_m(vm, rs1, vs3, vl);
}

void test_vse32_v_f32m2_m(vbool16_t vm, float *rs1, vfloat32m2_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_f32m2_m(vm, rs1, vs3, vl);
}

void test_vse32_v_f32m4_m(vbool8_t vm, float *rs1, vfloat32m4_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_f32m4_m(vm, rs1, vs3, vl);
}

void test_vse32_v_f32m8_m(vbool4_t vm, float *rs1, vfloat32m8_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_f32m8_m(vm, rs1, vs3, vl);
}

void test_vse32_v_i32mf2_m(vbool64_t vm, int32_t *rs1, vint32mf2_t vs3,
                           size_t vl) {
  return __riscv_vse32_v_i32mf2_m(vm, rs1, vs3, vl);
}

void test_vse32_v_i32m1_m(vbool32_t vm, int32_t *rs1, vint32m1_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_i32m1_m(vm, rs1, vs3, vl);
}

void test_vse32_v_i32m2_m(vbool16_t vm, int32_t *rs1, vint32m2_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_i32m2_m(vm, rs1, vs3, vl);
}

void test_vse32_v_i32m4_m(vbool8_t vm, int32_t *rs1, vint32m4_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_i32m4_m(vm, rs1, vs3, vl);
}

void test_vse32_v_i32m8_m(vbool4_t vm, int32_t *rs1, vint32m8_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_i32m8_m(vm, rs1, vs3, vl);
}

void test_vse32_v_u32mf2_m(vbool64_t vm, uint32_t *rs1, vuint32mf2_t vs3,
                           size_t vl) {
  return __riscv_vse32_v_u32mf2_m(vm, rs1, vs3, vl);
}

void test_vse32_v_u32m1_m(vbool32_t vm, uint32_t *rs1, vuint32m1_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_u32m1_m(vm, rs1, vs3, vl);
}

void test_vse32_v_u32m2_m(vbool16_t vm, uint32_t *rs1, vuint32m2_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_u32m2_m(vm, rs1, vs3, vl);
}

void test_vse32_v_u32m4_m(vbool8_t vm, uint32_t *rs1, vuint32m4_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_u32m4_m(vm, rs1, vs3, vl);
}

void test_vse32_v_u32m8_m(vbool4_t vm, uint32_t *rs1, vuint32m8_t vs3,
                          size_t vl) {
  return __riscv_vse32_v_u32m8_m(vm, rs1, vs3, vl);
}
