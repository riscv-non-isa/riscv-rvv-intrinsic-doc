// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1_t test_vlse64_v_f64m1_tu(vfloat64m1_t vd, const double *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tu(vfloat64m2_t vd, const double *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tu(vfloat64m4_t vd, const double *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tu(vfloat64m8_t vd, const double *rs1,
                                    ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vint64m1_t test_vlse64_v_i64m1_tu(vint64m1_t vd, const int64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vint64m2_t test_vlse64_v_i64m2_tu(vint64m2_t vd, const int64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vint64m4_t test_vlse64_v_i64m4_tu(vint64m4_t vd, const int64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vint64m8_t test_vlse64_v_i64m8_tu(vint64m8_t vd, const int64_t *rs1,
                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tu(vuint64m1_t vd, const uint64_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tu(vuint64m2_t vd, const uint64_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tu(vuint64m4_t vd, const uint64_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tu(vuint64m8_t vd, const uint64_t *rs1,
                                   ptrdiff_t rs2, size_t vl) {
  return __riscv_vlse64_tu(vd, rs1, rs2, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                     const double *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                     const double *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                     const double *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                     const double *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vint64m1_t test_vlse64_v_i64m1_tum(vbool64_t vm, vint64m1_t vd,
                                   const int64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vint64m2_t test_vlse64_v_i64m2_tum(vbool32_t vm, vint64m2_t vd,
                                   const int64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vint64m4_t test_vlse64_v_i64m4_tum(vbool16_t vm, vint64m4_t vd,
                                   const int64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vint64m8_t test_vlse64_v_i64m8_tum(vbool8_t vm, vint64m8_t vd,
                                   const int64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                    const uint64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tum(vbool32_t vm, vuint64m2_t vd,
                                    const uint64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tum(vbool16_t vm, vuint64m4_t vd,
                                    const uint64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tum(vbool8_t vm, vuint64m8_t vd,
                                    const uint64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                      const double *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                      const double *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                      const double *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                      const double *rs1, ptrdiff_t rs2,
                                      size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1_t test_vlse64_v_i64m1_tumu(vbool64_t vm, vint64m1_t vd,
                                    const int64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m2_t test_vlse64_v_i64m2_tumu(vbool32_t vm, vint64m2_t vd,
                                    const int64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m4_t test_vlse64_v_i64m4_tumu(vbool16_t vm, vint64m4_t vd,
                                    const int64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m8_t test_vlse64_v_i64m8_tumu(vbool8_t vm, vint64m8_t vd,
                                    const int64_t *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1_t test_vlse64_v_u64m1_tumu(vbool64_t vm, vuint64m1_t vd,
                                     const uint64_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m2_t test_vlse64_v_u64m2_tumu(vbool32_t vm, vuint64m2_t vd,
                                     const uint64_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m4_t test_vlse64_v_u64m4_tumu(vbool16_t vm, vuint64m4_t vd,
                                     const uint64_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m8_t test_vlse64_v_u64m8_tumu(vbool8_t vm, vuint64m8_t vd,
                                     const uint64_t *rs1, ptrdiff_t rs2,
                                     size_t vl) {
  return __riscv_vlse64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1_t test_vlse64_v_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                    const double *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m2_t test_vlse64_v_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                    const double *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m4_t test_vlse64_v_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                    const double *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m8_t test_vlse64_v_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                    const double *rs1, ptrdiff_t rs2,
                                    size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vint64m1_t test_vlse64_v_i64m1_mu(vbool64_t vm, vint64m1_t vd,
                                  const int64_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vint64m2_t test_vlse64_v_i64m2_mu(vbool32_t vm, vint64m2_t vd,
                                  const int64_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vint64m4_t test_vlse64_v_i64m4_mu(vbool16_t vm, vint64m4_t vd,
                                  const int64_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vint64m8_t test_vlse64_v_i64m8_mu(vbool8_t vm, vint64m8_t vd,
                                  const int64_t *rs1, ptrdiff_t rs2,
                                  size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1_t test_vlse64_v_u64m1_mu(vbool64_t vm, vuint64m1_t vd,
                                   const uint64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m2_t test_vlse64_v_u64m2_mu(vbool32_t vm, vuint64m2_t vd,
                                   const uint64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m4_t test_vlse64_v_u64m4_mu(vbool16_t vm, vuint64m4_t vd,
                                   const uint64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m8_t test_vlse64_v_u64m8_mu(vbool8_t vm, vuint64m8_t vd,
                                   const uint64_t *rs1, ptrdiff_t rs2,
                                   size_t vl) {
  return __riscv_vlse64_mu(vm, vd, rs1, rs2, vl);
}
