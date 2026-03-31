/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m1(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m1(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m2(vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m2(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m4(vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m4(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m8(vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m8(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m1(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m1(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m2(vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m2(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m4(vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m4(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m8(vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m8(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m1(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m1(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m2(vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m2(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m4(vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m4(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m8(vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m8(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m1(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m1(vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m2(vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m2(vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m4(vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m4(vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m8(vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m8(vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m1_m(vbool32_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m1_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m2_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m4_m(vbool8_t vm, vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m4_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m8_m(vbool4_t vm, vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e4m3m1_f32m8_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m1_m(vbool32_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m1_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m2_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m4_m(vbool8_t vm, vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m4_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m8_m(vbool4_t vm, vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e4m3m8_f8e5m2m1_f32m8_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m1_m(vbool32_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m1_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m2_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m4_m(vbool8_t vm, vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m4_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m8_m(vbool4_t vm, vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e4m3m1_f32m8_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m1_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m1_m(vbool32_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m1_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m2_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m2_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m4_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m4_m(vbool8_t vm, vfloat32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m4_m(vm, vd, vs2, vs1, 0, vl);
}

vfloat32m8_t test_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m8_m(vbool4_t vm, vfloat32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwbdota_vv_f8e5m2m8_f8e5m2m1_f32m8_m(vm, vd, vs2, vs1, 0, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfqwbdota\.[ivxfswum.]+\s+} 32 } } */
