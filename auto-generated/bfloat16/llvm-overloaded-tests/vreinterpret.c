// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vreinterpret_v_i16mf4_bf16mf4(vint16mf4_t src) {
  return __riscv_vreinterpret_bf16mf4(src);
}

vbfloat16mf2_t test_vreinterpret_v_i16mf2_bf16mf2(vint16mf2_t src) {
  return __riscv_vreinterpret_bf16mf2(src);
}

vbfloat16m1_t test_vreinterpret_v_i16m1_bf16m1(vint16m1_t src) {
  return __riscv_vreinterpret_bf16m1(src);
}

vbfloat16m2_t test_vreinterpret_v_i16m2_bf16m2(vint16m2_t src) {
  return __riscv_vreinterpret_bf16m2(src);
}

vbfloat16m4_t test_vreinterpret_v_i16m4_bf16m4(vint16m4_t src) {
  return __riscv_vreinterpret_bf16m4(src);
}

vbfloat16m8_t test_vreinterpret_v_i16m8_bf16m8(vint16m8_t src) {
  return __riscv_vreinterpret_bf16m8(src);
}

vbfloat16mf4_t test_vreinterpret_v_u16mf4_bf16mf4(vuint16mf4_t src) {
  return __riscv_vreinterpret_bf16mf4(src);
}

vbfloat16mf2_t test_vreinterpret_v_u16mf2_bf16mf2(vuint16mf2_t src) {
  return __riscv_vreinterpret_bf16mf2(src);
}

vbfloat16m1_t test_vreinterpret_v_u16m1_bf16m1(vuint16m1_t src) {
  return __riscv_vreinterpret_bf16m1(src);
}

vbfloat16m2_t test_vreinterpret_v_u16m2_bf16m2(vuint16m2_t src) {
  return __riscv_vreinterpret_bf16m2(src);
}

vbfloat16m4_t test_vreinterpret_v_u16m4_bf16m4(vuint16m4_t src) {
  return __riscv_vreinterpret_bf16m4(src);
}

vbfloat16m8_t test_vreinterpret_v_u16m8_bf16m8(vuint16m8_t src) {
  return __riscv_vreinterpret_bf16m8(src);
}

vint16mf4_t test_vreinterpret_v_bf16mf4_i16mf4(vbfloat16mf4_t src) {
  return __riscv_vreinterpret_i16mf4(src);
}

vint16mf2_t test_vreinterpret_v_bf16mf2_i16mf2(vbfloat16mf2_t src) {
  return __riscv_vreinterpret_i16mf2(src);
}

vint16m1_t test_vreinterpret_v_bf16m1_i16m1(vbfloat16m1_t src) {
  return __riscv_vreinterpret_i16m1(src);
}

vint16m2_t test_vreinterpret_v_bf16m2_i16m2(vbfloat16m2_t src) {
  return __riscv_vreinterpret_i16m2(src);
}

vint16m4_t test_vreinterpret_v_bf16m4_i16m4(vbfloat16m4_t src) {
  return __riscv_vreinterpret_i16m4(src);
}

vint16m8_t test_vreinterpret_v_bf16m8_i16m8(vbfloat16m8_t src) {
  return __riscv_vreinterpret_i16m8(src);
}

vuint16mf4_t test_vreinterpret_v_bf16mf4_u16mf4(vbfloat16mf4_t src) {
  return __riscv_vreinterpret_u16mf4(src);
}

vuint16mf2_t test_vreinterpret_v_bf16mf2_u16mf2(vbfloat16mf2_t src) {
  return __riscv_vreinterpret_u16mf2(src);
}

vuint16m1_t test_vreinterpret_v_bf16m1_u16m1(vbfloat16m1_t src) {
  return __riscv_vreinterpret_u16m1(src);
}

vuint16m2_t test_vreinterpret_v_bf16m2_u16m2(vbfloat16m2_t src) {
  return __riscv_vreinterpret_u16m2(src);
}

vuint16m4_t test_vreinterpret_v_bf16m4_u16m4(vbfloat16m4_t src) {
  return __riscv_vreinterpret_u16m4(src);
}

vuint16m8_t test_vreinterpret_v_bf16m8_u16m8(vbfloat16m8_t src) {
  return __riscv_vreinterpret_u16m8(src);
}
