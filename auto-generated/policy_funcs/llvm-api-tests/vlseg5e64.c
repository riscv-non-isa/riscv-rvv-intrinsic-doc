// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x5_t test_vlseg5e64_v_f64m1x5_tu(vfloat64m1x5_t vd, const double *rs1,
                                           size_t vl) {
  return __riscv_vlseg5e64_v_f64m1x5_tu(vd, rs1, vl);
}

vint64m1x5_t test_vlseg5e64_v_i64m1x5_tu(vint64m1x5_t vd, const int64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg5e64_v_i64m1x5_tu(vd, rs1, vl);
}

vuint64m1x5_t test_vlseg5e64_v_u64m1x5_tu(vuint64m1x5_t vd, const uint64_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg5e64_v_u64m1x5_tu(vd, rs1, vl);
}

vfloat64m1x5_t test_vlseg5e64_v_f64m1x5_tum(vbool64_t vm, vfloat64m1x5_t vd,
                                            const double *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_f64m1x5_tum(vm, vd, rs1, vl);
}

vint64m1x5_t test_vlseg5e64_v_i64m1x5_tum(vbool64_t vm, vint64m1x5_t vd,
                                          const int64_t *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_i64m1x5_tum(vm, vd, rs1, vl);
}

vuint64m1x5_t test_vlseg5e64_v_u64m1x5_tum(vbool64_t vm, vuint64m1x5_t vd,
                                           const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_u64m1x5_tum(vm, vd, rs1, vl);
}

vfloat64m1x5_t test_vlseg5e64_v_f64m1x5_tumu(vbool64_t vm, vfloat64m1x5_t vd,
                                             const double *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_f64m1x5_tumu(vm, vd, rs1, vl);
}

vint64m1x5_t test_vlseg5e64_v_i64m1x5_tumu(vbool64_t vm, vint64m1x5_t vd,
                                           const int64_t *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_i64m1x5_tumu(vm, vd, rs1, vl);
}

vuint64m1x5_t test_vlseg5e64_v_u64m1x5_tumu(vbool64_t vm, vuint64m1x5_t vd,
                                            const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_u64m1x5_tumu(vm, vd, rs1, vl);
}

vfloat64m1x5_t test_vlseg5e64_v_f64m1x5_mu(vbool64_t vm, vfloat64m1x5_t vd,
                                           const double *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_f64m1x5_mu(vm, vd, rs1, vl);
}

vint64m1x5_t test_vlseg5e64_v_i64m1x5_mu(vbool64_t vm, vint64m1x5_t vd,
                                         const int64_t *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_i64m1x5_mu(vm, vd, rs1, vl);
}

vuint64m1x5_t test_vlseg5e64_v_u64m1x5_mu(vbool64_t vm, vuint64m1x5_t vd,
                                          const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg5e64_v_u64m1x5_mu(vm, vd, rs1, vl);
}
