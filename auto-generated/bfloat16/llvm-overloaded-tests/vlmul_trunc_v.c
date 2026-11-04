// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vlmul_trunc_v_bf16mf2_bf16mf4(vbfloat16mf2_t value) {
  return __riscv_vlmul_trunc_bf16mf4(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_bf16m1_bf16mf4(vbfloat16m1_t value) {
  return __riscv_vlmul_trunc_bf16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_bf16m1_bf16mf2(vbfloat16m1_t value) {
  return __riscv_vlmul_trunc_bf16mf2(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_bf16m2_bf16mf4(vbfloat16m2_t value) {
  return __riscv_vlmul_trunc_bf16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_bf16m2_bf16mf2(vbfloat16m2_t value) {
  return __riscv_vlmul_trunc_bf16mf2(value);
}

vbfloat16m1_t test_vlmul_trunc_v_bf16m2_bf16m1(vbfloat16m2_t value) {
  return __riscv_vlmul_trunc_bf16m1(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_bf16m4_bf16mf4(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_bf16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_bf16m4_bf16mf2(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_bf16mf2(value);
}

vbfloat16m1_t test_vlmul_trunc_v_bf16m4_bf16m1(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_bf16m1(value);
}

vbfloat16m2_t test_vlmul_trunc_v_bf16m4_bf16m2(vbfloat16m4_t value) {
  return __riscv_vlmul_trunc_bf16m2(value);
}

vbfloat16mf4_t test_vlmul_trunc_v_bf16m8_bf16mf4(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_bf16mf4(value);
}

vbfloat16mf2_t test_vlmul_trunc_v_bf16m8_bf16mf2(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_bf16mf2(value);
}

vbfloat16m1_t test_vlmul_trunc_v_bf16m8_bf16m1(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_bf16m1(value);
}

vbfloat16m2_t test_vlmul_trunc_v_bf16m8_bf16m2(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_bf16m2(value);
}

vbfloat16m4_t test_vlmul_trunc_v_bf16m8_bf16m4(vbfloat16m8_t value) {
  return __riscv_vlmul_trunc_bf16m4(value);
}
