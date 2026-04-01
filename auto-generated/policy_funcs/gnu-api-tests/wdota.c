/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_tu(vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_tu(vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_tu(vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_tu(vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_tu(vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_tum(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_tum(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_tum(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_tum(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_tum(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_tumu(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_tumu(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_tumu(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_tumu(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_tumu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_mu(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_mu(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_mu(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_mu(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_mu(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm_tu(vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm_tu(vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm_tu(vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm_tu(vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm_tu(vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_rm_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm_tum(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_rm_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm_tum(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_rm_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm_tum(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_rm_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm_tum(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_rm_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm_tum(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_rm_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm_tumu(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_rm_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm_tumu(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_rm_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm_tumu(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_rm_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm_tumu(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_rm_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm_tumu(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_rm_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm_mu(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf4_f32m1_rm_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm_mu(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16mf2_f32m1_rm_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm_mu(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m1_f32m1_rm_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm_mu(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m2_f32m1_rm_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm_mu(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota_vv_bf16m4_f32m1_rm_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+wdota\.[ivxfswum.]+\s+} 40 } } */
