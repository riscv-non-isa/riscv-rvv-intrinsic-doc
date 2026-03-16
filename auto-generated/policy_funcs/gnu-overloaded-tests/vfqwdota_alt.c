/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_tu(vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_tu(vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_tu(vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_tu(vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_tu(vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_tu(vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_tu(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_tu(vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_tu(vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_tu(vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_tu(vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_tu(vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_tu(vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_tu(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_tum(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_tum(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_tum(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_tum(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_tum(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_tum(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_tum(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_tum(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_tum(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_tum(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_tum(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_tum(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_tumu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_tumu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_tumu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_tumu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_tumu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_tumu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_tumu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_tumu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_tumu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_tumu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_tumu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_tumu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_mu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_mu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_mu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_mu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_mu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_mu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_mu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_mu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_mu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_mu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_mu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_mu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_rm_tu(vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_rm_tu(vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_rm_tu(vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_rm_tu(vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_rm_tu(vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_rm_tu(vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_rm_tu(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_rm_tu(vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_rm_tu(vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_rm_tu(vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_rm_tu(vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_rm_tu(vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_rm_tu(vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_rm_tu(vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_rm_tum(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_rm_tum(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_rm_tum(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_rm_tum(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_rm_tum(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_rm_tum(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_rm_tum(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_rm_tum(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_rm_tum(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_rm_tum(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_rm_tum(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_rm_tum(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_rm_tumu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_rm_tumu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_rm_tumu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_rm_tumu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_rm_tumu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_rm_tumu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_rm_tumu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_rm_tumu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_rm_tumu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_rm_tumu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_rm_tumu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_rm_tumu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_rm_mu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_rm_mu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_rm_mu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_rm_mu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_rm_mu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_rm_mu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_rm_mu(vbool64_t vm, vfloat32m1_t vd, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_rm_mu(vbool16_t vm, vfloat32m1_t vd, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_rm_mu(vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_rm_mu(vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_rm_mu(vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_rm_mu(vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfqwdota\.alt[ivxfswum.]*\s+} 112 } } */
