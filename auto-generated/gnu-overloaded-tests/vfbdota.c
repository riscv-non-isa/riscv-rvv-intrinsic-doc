/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32mf2_t test_vfbdota_vv_f32m1_f32mf2(vfloat32mf2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfbdota_vv_f32m1_f32m1(vfloat32m1_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfbdota_vv_f32m1_f32m2(vfloat32m2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfbdota_vv_f32m1_f32m4(vfloat32m4_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfbdota_vv_f32m1_f32m8(vfloat32m8_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfbdota_vv_f32m1_f32mf2_m(vbool64_t vm, vfloat32mf2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m1_t test_vfbdota_vv_f32m1_f32m1_m(vbool32_t vm, vfloat32m1_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m2_t test_vfbdota_vv_f32m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m4_t test_vfbdota_vv_f32m1_f32m4_m(vbool8_t vm, vfloat32m4_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, vl);
}

vfloat32m8_t test_vfbdota_vv_f32m1_f32m8_m(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, vl);
}

vfloat32mf2_t test_vfbdota_vv_f32m1_f32mf2_rm(vfloat32mf2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfbdota_vv_f32m1_f32m1_rm(vfloat32m1_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfbdota_vv_f32m1_f32m2_rm(vfloat32m2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfbdota_vv_f32m1_f32m4_rm(vfloat32m4_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfbdota_vv_f32m1_f32m8_rm(vfloat32m8_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfbdota_vv_f32m1_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfbdota_vv_f32m1_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfbdota_vv_f32m1_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfbdota_vv_f32m1_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfbdota_vv_f32m1_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vd, vfloat32m8_t vs2, vfloat32m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vfbdota(vm, vd, vs2, vs1, ci, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfbdota\.[ivxfswum.]+\s+} 20 } } */
