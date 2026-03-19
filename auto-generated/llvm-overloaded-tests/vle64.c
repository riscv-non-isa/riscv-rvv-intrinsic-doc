// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1_t test_vle64_v_f64m1_m(vbool64_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vfloat64m2_t test_vle64_v_f64m2_m(vbool32_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vfloat64m4_t test_vle64_v_f64m4_m(vbool16_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vfloat64m8_t test_vle64_v_f64m8_m(vbool8_t vm, const double *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m1_t test_vle64_v_i64m1_m(vbool64_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m2_t test_vle64_v_i64m2_m(vbool32_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m4_t test_vle64_v_i64m4_m(vbool16_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vint64m8_t test_vle64_v_i64m8_m(vbool8_t vm, const int64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m1_t test_vle64_v_u64m1_m(vbool64_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m2_t test_vle64_v_u64m2_m(vbool32_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m4_t test_vle64_v_u64m4_m(vbool16_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}

vuint64m8_t test_vle64_v_u64m8_m(vbool8_t vm, const uint64_t *rs1, size_t vl) {
  return __riscv_vle64(vm, rs1, vl);
}
