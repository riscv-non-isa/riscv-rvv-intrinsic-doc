// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_tu(vfloat64m1x8_t vd,
                                            const double *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e64_v_f64m1x8_tu(vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_tu(vint64m1x8_t vd, const int64_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg8e64_v_i64m1x8_tu(vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_tu(vuint64m1x8_t vd,
                                           const uint64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e64_v_u64m1x8_tu(vd, rs1, rs2, vl);
}

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_tum(vbool64_t vm, vfloat64m1x8_t vd,
                                             const double *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg8e64_v_f64m1x8_tum(vm, vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_tum(vbool64_t vm, vint64m1x8_t vd,
                                           const int64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e64_v_i64m1x8_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_tum(vbool64_t vm, vuint64m1x8_t vd,
                                            const uint64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e64_v_u64m1x8_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_tumu(vbool64_t vm, vfloat64m1x8_t vd,
                                              const double *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg8e64_v_f64m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_tumu(vbool64_t vm, vint64m1x8_t vd,
                                            const int64_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e64_v_i64m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_tumu(vbool64_t vm, vuint64m1x8_t vd,
                                             const uint64_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg8e64_v_u64m1x8_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x8_t test_vlsseg8e64_v_f64m1x8_mu(vbool64_t vm, vfloat64m1x8_t vd,
                                            const double *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg8e64_v_f64m1x8_mu(vm, vd, rs1, rs2, vl);
}

vint64m1x8_t test_vlsseg8e64_v_i64m1x8_mu(vbool64_t vm, vint64m1x8_t vd,
                                          const int64_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg8e64_v_i64m1x8_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1x8_t test_vlsseg8e64_v_u64m1x8_mu(vbool64_t vm, vuint64m1x8_t vd,
                                           const uint64_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg8e64_v_u64m1x8_mu(vm, vd, rs1, rs2, vl);
}
