// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg5e64_v_f64m1x5(double *rs1, ptrdiff_t rs2, vfloat64m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e64(rs1, rs2, vs3, vl);
}

void test_vssseg5e64_v_i64m1x5(int64_t *rs1, ptrdiff_t rs2, vint64m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e64(rs1, rs2, vs3, vl);
}

void test_vssseg5e64_v_u64m1x5(uint64_t *rs1, ptrdiff_t rs2, vuint64m1x5_t vs3,
                               size_t vl) {
  return __riscv_vssseg5e64(rs1, rs2, vs3, vl);
}

void test_vssseg5e64_v_f64m1x5_m(vbool64_t vm, double *rs1, ptrdiff_t rs2,
                                 vfloat64m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e64_v_i64m1x5_m(vbool64_t vm, int64_t *rs1, ptrdiff_t rs2,
                                 vint64m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e64(vm, rs1, rs2, vs3, vl);
}

void test_vssseg5e64_v_u64m1x5_m(vbool64_t vm, uint64_t *rs1, ptrdiff_t rs2,
                                 vuint64m1x5_t vs3, size_t vl) {
  return __riscv_vssseg5e64(vm, rs1, rs2, vs3, vl);
}
