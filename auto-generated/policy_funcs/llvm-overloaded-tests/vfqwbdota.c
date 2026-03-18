// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfqwbdota8f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m1_f32m1_tu(vfloat32m1_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m1_f32m2_tu(vfloat32m2_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m1_f32m4_tu(vfloat32m4_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m1_f32m8_tu(vfloat32m8_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m1_f32m1_tu(vfloat32m1_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m1_f32m2_tu(vfloat32m2_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m1_f32m4_tu(vfloat32m4_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m1_f32m8_tu(vfloat32m8_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tu(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m1_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m1_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m1_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m1_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m1_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m1_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m1_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m1_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                                  vuint8m8_t vs2,
                                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tum(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m1_f32m1_tumu(vbool32_t vm,
                                                   vfloat32m1_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m1_f32m2_tumu(vbool16_t vm,
                                                   vfloat32m2_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m1_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m1_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m1_f32m1_tumu(vbool32_t vm,
                                                   vfloat32m1_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m1_f32m2_tumu(vbool16_t vm,
                                                   vfloat32m2_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m1_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m1_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_tumu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m1_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_mu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m1_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_mu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m1_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_mu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m1_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e4m3_f32_mu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m1_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_mu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m1_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_mu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m1_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_mu(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m1_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                                 vuint8m8_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwbdota_f8e5m2_f32_mu(vm, vd, vs2, vs1, 0, vl);
}
