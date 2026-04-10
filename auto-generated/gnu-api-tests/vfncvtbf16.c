/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat8e4m3mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e4m3mf8(vs2, vl);
}

vfloat8e4m3mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8(vs2, vl);
}

vfloat8e4m3mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e4m3mf4(vs2, vl);
}

vfloat8e4m3mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4(vs2, vl);
}

vfloat8e4m3mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e4m3mf2(vs2, vl);
}

vfloat8e4m3mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2(vs2, vl);
}

vfloat8e4m3m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e4m3m1(vs2, vl);
}

vfloat8e4m3m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1(vs2, vl);
}

vfloat8e4m3m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e4m3m2(vs2, vl);
}

vfloat8e4m3m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2(vs2, vl);
}

vfloat8e4m3m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e4m3m4(vs2, vl);
}

vfloat8e4m3m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4(vs2, vl);
}

vfloat8e4m3mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_m(vm, vs2, vl);
}

vfloat8e4m3mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_m(vm, vs2, vl);
}

vfloat8e4m3mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_m(vm, vs2, vl);
}

vfloat8e4m3mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_m(vm, vs2, vl);
}

vfloat8e4m3mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e4m3mf2_m(vm, vs2, vl);
}

vfloat8e4m3mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_m(vm, vs2, vl);
}

vfloat8e4m3m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e4m3m1_m(vm, vs2, vl);
}

vfloat8e4m3m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_m(vm, vs2, vl);
}

vfloat8e4m3m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e4m3m2_m(vm, vs2, vl);
}

vfloat8e4m3m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_m(vm, vs2, vl);
}

vfloat8e4m3m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e4m3m4_m(vm, vs2, vl);
}

vfloat8e4m3m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_m(vm, vs2, vl);
}

vfloat8e4m3mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf8_t test_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e4m3mf8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e4m3mf8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf4_t test_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e4m3mf4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e4m3mf4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf2_t test_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e4m3mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e4m3mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m1_t test_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e4m3m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e4m3m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m2_t test_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e4m3m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e4m3m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m4_t test_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e4m3m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e4m3m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e4m3m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e5m2mf8(vs2, vl);
}

vfloat8e5m2mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8(vs2, vl);
}

vfloat8e5m2mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e5m2mf4(vs2, vl);
}

vfloat8e5m2mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4(vs2, vl);
}

vfloat8e5m2mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e5m2mf2(vs2, vl);
}

vfloat8e5m2mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2(vs2, vl);
}

vfloat8e5m2m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e5m2m1(vs2, vl);
}

vfloat8e5m2m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1(vs2, vl);
}

vfloat8e5m2m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e5m2m2(vs2, vl);
}

vfloat8e5m2m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2(vs2, vl);
}

vfloat8e5m2m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e5m2m4(vs2, vl);
}

vfloat8e5m2m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4(vs2, vl);
}

vfloat8e5m2mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_m(vm, vs2, vl);
}

vfloat8e5m2mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_m(vm, vs2, vl);
}

vfloat8e5m2mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_m(vm, vs2, vl);
}

vfloat8e5m2mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_m(vm, vs2, vl);
}

vfloat8e5m2mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e5m2mf2_m(vm, vs2, vl);
}

vfloat8e5m2mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_m(vm, vs2, vl);
}

vfloat8e5m2m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e5m2m1_m(vm, vs2, vl);
}

vfloat8e5m2m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_m(vm, vs2, vl);
}

vfloat8e5m2m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e5m2m2_m(vm, vs2, vl);
}

vfloat8e5m2m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_m(vm, vs2, vl);
}

vfloat8e5m2m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e5m2m4_m(vm, vs2, vl);
}

vfloat8e5m2m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_m(vm, vs2, vl);
}

vfloat8e5m2mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm(vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf8_t test_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf4_f8e5m2mf8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf8_t test_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm_m(vbool64_t vm, vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf4_f8e5m2mf8_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf4_t test_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16mf2_f8e5m2mf4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf4_t test_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm_m(vbool32_t vm, vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16mf2_f8e5m2mf4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf2_t test_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m1_f8e5m2mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2mf2_t test_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm_m(vbool16_t vm, vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m1_f8e5m2mf2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m1_t test_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m2_f8e5m2m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m1_t test_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m2_f8e5m2m1_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m2_t test_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m4_f8e5m2m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m2_t test_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m4_f8e5m2m2_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m4_t test_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_f_f_w_bf16m8_f8e5m2m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}

vfloat8e5m2m4_t test_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_sat_f_f_w_bf16m8_f8e5m2m4_rm_m(vm, vs2, __RISCV_FRM_RNE, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfncvtbf16\.[ivxfswum.]+\s+} 96 } } */
