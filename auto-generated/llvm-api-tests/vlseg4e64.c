// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x4_t test_vlseg4e64_v_f64m1x4(const double *rs1, size_t vl) {
  return __riscv_vlseg4e64_v_f64m1x4(rs1, vl);
}

vfloat64m2x4_t test_vlseg4e64_v_f64m2x4(const double *rs1, size_t vl) {
  return __riscv_vlseg4e64_v_f64m2x4(rs1, vl);
}

vint64m1x4_t test_vlseg4e64_v_i64m1x4(const int64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64_v_i64m1x4(rs1, vl);
}

vint64m2x4_t test_vlseg4e64_v_i64m2x4(const int64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64_v_i64m2x4(rs1, vl);
}

vuint64m1x4_t test_vlseg4e64_v_u64m1x4(const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64_v_u64m1x4(rs1, vl);
}

vuint64m2x4_t test_vlseg4e64_v_u64m2x4(const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg4e64_v_u64m2x4(rs1, vl);
}

vfloat64m1x4_t test_vlseg4e64_v_f64m1x4_m(vbool64_t vm, const double *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e64_v_f64m1x4_m(vm, rs1, vl);
}

vfloat64m2x4_t test_vlseg4e64_v_f64m2x4_m(vbool32_t vm, const double *rs1,
                                          size_t vl) {
  return __riscv_vlseg4e64_v_f64m2x4_m(vm, rs1, vl);
}

vint64m1x4_t test_vlseg4e64_v_i64m1x4_m(vbool64_t vm, const int64_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg4e64_v_i64m1x4_m(vm, rs1, vl);
}

vint64m2x4_t test_vlseg4e64_v_i64m2x4_m(vbool32_t vm, const int64_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg4e64_v_i64m2x4_m(vm, rs1, vl);
}

vuint64m1x4_t test_vlseg4e64_v_u64m1x4_m(vbool64_t vm, const uint64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg4e64_v_u64m1x4_m(vm, rs1, vl);
}

vuint64m2x4_t test_vlseg4e64_v_u64m2x4_m(vbool32_t vm, const uint64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg4e64_v_u64m2x4_m(vm, rs1, vl);
}
