// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg4e64_v_f64m1x4(double *rs1, vfloat64m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e64_v_f64m1x4(rs1, vs3, vl);
}

void test_vsseg4e64_v_f64m2x4(double *rs1, vfloat64m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e64_v_f64m2x4(rs1, vs3, vl);
}

void test_vsseg4e64_v_i64m1x4(int64_t *rs1, vint64m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e64_v_i64m1x4(rs1, vs3, vl);
}

void test_vsseg4e64_v_i64m2x4(int64_t *rs1, vint64m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e64_v_i64m2x4(rs1, vs3, vl);
}

void test_vsseg4e64_v_u64m1x4(uint64_t *rs1, vuint64m1x4_t vs3, size_t vl) {
  return __riscv_vsseg4e64_v_u64m1x4(rs1, vs3, vl);
}

void test_vsseg4e64_v_u64m2x4(uint64_t *rs1, vuint64m2x4_t vs3, size_t vl) {
  return __riscv_vsseg4e64_v_u64m2x4(rs1, vs3, vl);
}

void test_vsseg4e64_v_f64m1x4_m(vbool64_t vm, double *rs1, vfloat64m1x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e64_v_f64m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e64_v_f64m2x4_m(vbool32_t vm, double *rs1, vfloat64m2x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e64_v_f64m2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e64_v_i64m1x4_m(vbool64_t vm, int64_t *rs1, vint64m1x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e64_v_i64m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e64_v_i64m2x4_m(vbool32_t vm, int64_t *rs1, vint64m2x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e64_v_i64m2x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e64_v_u64m1x4_m(vbool64_t vm, uint64_t *rs1, vuint64m1x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e64_v_u64m1x4_m(vm, rs1, vs3, vl);
}

void test_vsseg4e64_v_u64m2x4_m(vbool32_t vm, uint64_t *rs1, vuint64m2x4_t vs3,
                                size_t vl) {
  return __riscv_vsseg4e64_v_u64m2x4_m(vm, rs1, vs3, vl);
}
