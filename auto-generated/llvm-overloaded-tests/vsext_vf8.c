// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64x \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint64m1_t test_vsext_vf8_i64m1(vint8mf8_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vs2, vl);
}

vint64m2_t test_vsext_vf8_i64m2(vint8mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vs2, vl);
}

vint64m4_t test_vsext_vf8_i64m4(vint8mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vs2, vl);
}

vint64m8_t test_vsext_vf8_i64m8(vint8m1_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vs2, vl);
}

vint64m1_t test_vsext_vf8_i64m1_m(vbool64_t vm, vint8mf8_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vm, vs2, vl);
}

vint64m2_t test_vsext_vf8_i64m2_m(vbool32_t vm, vint8mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vm, vs2, vl);
}

vint64m4_t test_vsext_vf8_i64m4_m(vbool16_t vm, vint8mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vm, vs2, vl);
}

vint64m8_t test_vsext_vf8_i64m8_m(vbool8_t vm, vint8m1_t vs2, size_t vl) {
  return __riscv_vsext_vf8(vm, vs2, vl);
}
