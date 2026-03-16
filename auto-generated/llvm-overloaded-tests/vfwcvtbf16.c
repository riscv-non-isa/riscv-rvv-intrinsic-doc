// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfofp8min \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e4m3mf2_bf16m1(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e4m3m1_bf16m2(vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e4m3m2_bf16m4(vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e4m3m4_bf16m8(vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4_m(vbool64_t vm,
                                                     vuint8mf8_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2_m(vbool32_t vm,
                                                     vuint8mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e4m3mf2_bf16m1_m(vbool16_t vm,
                                                   vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e4m3m1_bf16m2_m(vbool8_t vm, vuint8m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e4m3m2_bf16m4_m(vbool4_t vm, vuint8m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e4m3m4_bf16m8_m(vbool2_t vm, vuint8m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f8e4m3_bf16(vm, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e5m2mf2_bf16m1(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e5m2m1_bf16m2(vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e5m2m2_bf16m4(vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e5m2m4_bf16m8(vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4_m(vbool64_t vm,
                                                     vuint8mf8_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2_m(vbool32_t vm,
                                                     vuint8mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e5m2mf2_bf16m1_m(vbool16_t vm,
                                                   vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e5m2m1_bf16m2_m(vbool8_t vm, vuint8m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e5m2m2_bf16m4_m(vbool4_t vm, vuint8m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e5m2m4_bf16m8_m(vbool2_t vm, vuint8m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f8e5m2_bf16(vm, vs2, vl);
}
