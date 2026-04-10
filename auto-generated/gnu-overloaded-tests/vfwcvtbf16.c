/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4(vfloat8e4m3mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2(vfloat8e4m3mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e4m3mf2_bf16m1(vfloat8e4m3mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e4m3m1_bf16m2(vfloat8e4m3m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e4m3m2_bf16m4(vfloat8e4m3m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e4m3m4_bf16m8(vfloat8e4m3m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4_m(vbool64_t vm, vfloat8e4m3mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2_m(vbool32_t vm, vfloat8e4m3mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e4m3mf2_bf16m1_m(vbool16_t vm, vfloat8e4m3mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e4m3m1_bf16m2_m(vbool8_t vm, vfloat8e4m3m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e4m3m2_bf16m4_m(vbool4_t vm, vfloat8e4m3m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e4m3m4_bf16m8_m(vbool2_t vm, vfloat8e4m3m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4(vfloat8e5m2mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2(vfloat8e5m2mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e5m2mf2_bf16m1(vfloat8e5m2mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e5m2m1_bf16m2(vfloat8e5m2m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e5m2m2_bf16m4(vfloat8e5m2m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e5m2m4_bf16m8(vfloat8e5m2m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4_m(vbool64_t vm, vfloat8e5m2mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2_m(vbool32_t vm, vfloat8e5m2mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e5m2mf2_bf16m1_m(vbool16_t vm, vfloat8e5m2mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e5m2m1_bf16m2_m(vbool8_t vm, vfloat8e5m2m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e5m2m2_bf16m4_m(vbool4_t vm, vfloat8e5m2m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e5m2m4_bf16m8_m(vbool2_t vm, vfloat8e5m2m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfwcvtbf16\.[ivxfswum.]+\s+} 24 } } */
