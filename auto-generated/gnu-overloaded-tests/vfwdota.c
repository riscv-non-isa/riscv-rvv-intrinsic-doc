/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1(vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1(vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1(vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1(vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1(vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_m(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_m(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_m(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_m(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_m(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm(vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm(vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm(vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm(vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm(vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf4_f32m1_rm_m(vbool64_t vm, vfloat32m1_t vd, vbfloat16mf4_t vs2, vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16mf2_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd, vbfloat16mf2_t vs2, vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m1_f32m1_rm_m(vbool16_t vm, vfloat32m1_t vd, vbfloat16m1_t vs2, vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m2_f32m1_rm_m(vbool8_t vm, vfloat32m1_t vd, vbfloat16m2_t vs2, vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwdota_vv_bf16m4_f32m1_rm_m(vbool4_t vm, vfloat32m1_t vd, vbfloat16m4_t vs2, vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwdota(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwdota\.[ivxfswum.]+\s+} 20 } } */
