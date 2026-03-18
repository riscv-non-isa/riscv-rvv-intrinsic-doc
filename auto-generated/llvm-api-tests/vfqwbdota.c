// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfqwbdota8f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m1_f32m1(vfloat32m1_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m1(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m1_f32m2(vfloat32m2_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m2(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m1_f32m4(vfloat32m4_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m4(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m1_f32m8(vfloat32m8_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m8(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m1_f32m1(vfloat32m1_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m1(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m1_f32m2(vfloat32m2_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m2(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m1_f32m4(vfloat32m4_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m4(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m1_f32m8(vfloat32m8_t vd, vuint8m8_t vs2,
                                              vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m8(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m1_f32m1_m(vbool32_t vm, vfloat32m1_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m1_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m2_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m1_f32m4_m(vbool8_t vm, vfloat32m4_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m4_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m1_f32m8_m(vbool4_t vm, vfloat32m8_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m1_f32m8_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m1_f32m1_m(vbool32_t vm, vfloat32m1_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m1_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m2_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m1_f32m4_m(vbool8_t vm, vfloat32m4_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m4_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m1_f32m8_m(vbool4_t vm, vfloat32m8_t vd,
                                                vuint8m8_t vs2, vuint8m1_t vs1,
                                                size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m1_f32m8_m(vm, vd, vs2, vs1, 0, vl);
}
