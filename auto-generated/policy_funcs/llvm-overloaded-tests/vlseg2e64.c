// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x2_t test_vlseg2e64_v_f64m1x2_tu(vfloat64m1x2_t vd, const double *rs1,
                                           size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vfloat64m2x2_t test_vlseg2e64_v_f64m2x2_tu(vfloat64m2x2_t vd, const double *rs1,
                                           size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vfloat64m4x2_t test_vlseg2e64_v_f64m4x2_tu(vfloat64m4x2_t vd, const double *rs1,
                                           size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vint64m1x2_t test_vlseg2e64_v_i64m1x2_tu(vint64m1x2_t vd, const int64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vint64m2x2_t test_vlseg2e64_v_i64m2x2_tu(vint64m2x2_t vd, const int64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vint64m4x2_t test_vlseg2e64_v_i64m4x2_tu(vint64m4x2_t vd, const int64_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vuint64m1x2_t test_vlseg2e64_v_u64m1x2_tu(vuint64m1x2_t vd, const uint64_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vuint64m2x2_t test_vlseg2e64_v_u64m2x2_tu(vuint64m2x2_t vd, const uint64_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vuint64m4x2_t test_vlseg2e64_v_u64m4x2_tu(vuint64m4x2_t vd, const uint64_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg2e64_tu(vd, rs1, vl);
}

vfloat64m1x2_t test_vlseg2e64_v_f64m1x2_tum(vbool64_t vm, vfloat64m1x2_t vd,
                                            const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vfloat64m2x2_t test_vlseg2e64_v_f64m2x2_tum(vbool32_t vm, vfloat64m2x2_t vd,
                                            const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vfloat64m4x2_t test_vlseg2e64_v_f64m4x2_tum(vbool16_t vm, vfloat64m4x2_t vd,
                                            const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vint64m1x2_t test_vlseg2e64_v_i64m1x2_tum(vbool64_t vm, vint64m1x2_t vd,
                                          const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vint64m2x2_t test_vlseg2e64_v_i64m2x2_tum(vbool32_t vm, vint64m2x2_t vd,
                                          const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vint64m4x2_t test_vlseg2e64_v_i64m4x2_tum(vbool16_t vm, vint64m4x2_t vd,
                                          const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vuint64m1x2_t test_vlseg2e64_v_u64m1x2_tum(vbool64_t vm, vuint64m1x2_t vd,
                                           const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vuint64m2x2_t test_vlseg2e64_v_u64m2x2_tum(vbool32_t vm, vuint64m2x2_t vd,
                                           const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vuint64m4x2_t test_vlseg2e64_v_u64m4x2_tum(vbool16_t vm, vuint64m4x2_t vd,
                                           const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tum(vm, vd, rs1, vl);
}

vfloat64m1x2_t test_vlseg2e64_v_f64m1x2_tumu(vbool64_t vm, vfloat64m1x2_t vd,
                                             const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vfloat64m2x2_t test_vlseg2e64_v_f64m2x2_tumu(vbool32_t vm, vfloat64m2x2_t vd,
                                             const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vfloat64m4x2_t test_vlseg2e64_v_f64m4x2_tumu(vbool16_t vm, vfloat64m4x2_t vd,
                                             const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vint64m1x2_t test_vlseg2e64_v_i64m1x2_tumu(vbool64_t vm, vint64m1x2_t vd,
                                           const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vint64m2x2_t test_vlseg2e64_v_i64m2x2_tumu(vbool32_t vm, vint64m2x2_t vd,
                                           const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vint64m4x2_t test_vlseg2e64_v_i64m4x2_tumu(vbool16_t vm, vint64m4x2_t vd,
                                           const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vuint64m1x2_t test_vlseg2e64_v_u64m1x2_tumu(vbool64_t vm, vuint64m1x2_t vd,
                                            const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vuint64m2x2_t test_vlseg2e64_v_u64m2x2_tumu(vbool32_t vm, vuint64m2x2_t vd,
                                            const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vuint64m4x2_t test_vlseg2e64_v_u64m4x2_tumu(vbool16_t vm, vuint64m4x2_t vd,
                                            const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_tumu(vm, vd, rs1, vl);
}

vfloat64m1x2_t test_vlseg2e64_v_f64m1x2_mu(vbool64_t vm, vfloat64m1x2_t vd,
                                           const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vfloat64m2x2_t test_vlseg2e64_v_f64m2x2_mu(vbool32_t vm, vfloat64m2x2_t vd,
                                           const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vfloat64m4x2_t test_vlseg2e64_v_f64m4x2_mu(vbool16_t vm, vfloat64m4x2_t vd,
                                           const double *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vint64m1x2_t test_vlseg2e64_v_i64m1x2_mu(vbool64_t vm, vint64m1x2_t vd,
                                         const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vint64m2x2_t test_vlseg2e64_v_i64m2x2_mu(vbool32_t vm, vint64m2x2_t vd,
                                         const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vint64m4x2_t test_vlseg2e64_v_i64m4x2_mu(vbool16_t vm, vint64m4x2_t vd,
                                         const int64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vuint64m1x2_t test_vlseg2e64_v_u64m1x2_mu(vbool64_t vm, vuint64m1x2_t vd,
                                          const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vuint64m2x2_t test_vlseg2e64_v_u64m2x2_mu(vbool32_t vm, vuint64m2x2_t vd,
                                          const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}

vuint64m4x2_t test_vlseg2e64_v_u64m4x2_mu(vbool16_t vm, vuint64m4x2_t vd,
                                          const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg2e64_mu(vm, vd, rs1, vl);
}
