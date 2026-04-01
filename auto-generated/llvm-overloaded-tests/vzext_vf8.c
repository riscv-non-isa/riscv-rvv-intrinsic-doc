// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64x \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint64m1_t test_vzext_vf8_u64m1(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8(vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vs2, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_m(vbool64_t vm, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_m(vbool32_t vm, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_m(vbool16_t vm, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_m(vbool8_t vm, vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8(vm, vs2, vl);
}
