// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7(const double *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_f64m1x7(rs1, vl);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7(const int64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_i64m1x7(rs1, vl);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7(const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg7e64_v_u64m1x7(rs1, vl);
}

vfloat64m1x7_t test_vlseg7e64_v_f64m1x7_m(vbool64_t vm, const double *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e64_v_f64m1x7_m(vm, rs1, vl);
}

vint64m1x7_t test_vlseg7e64_v_i64m1x7_m(vbool64_t vm, const int64_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg7e64_v_i64m1x7_m(vm, rs1, vl);
}

vuint64m1x7_t test_vlseg7e64_v_u64m1x7_m(vbool64_t vm, const uint64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg7e64_v_u64m1x7_m(vm, rs1, vl);
}
