// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16m1_t test_vget_v_bf16m2_bf16m1(vbfloat16m2_t src, size_t index) {
  return __riscv_vget_v_bf16m2_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m4_bf16m1(vbfloat16m4_t src, size_t index) {
  return __riscv_vget_v_bf16m4_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m8_bf16m1(vbfloat16m8_t src, size_t index) {
  return __riscv_vget_v_bf16m8_bf16m1(src, 0);
}

vbfloat16m2_t test_vget_v_bf16m4_bf16m2(vbfloat16m4_t src, size_t index) {
  return __riscv_vget_v_bf16m4_bf16m2(src, 0);
}

vbfloat16m2_t test_vget_v_bf16m8_bf16m2(vbfloat16m8_t src, size_t index) {
  return __riscv_vget_v_bf16m8_bf16m2(src, 0);
}

vbfloat16m4_t test_vget_v_bf16m8_bf16m4(vbfloat16m8_t src, size_t index) {
  return __riscv_vget_v_bf16m8_bf16m4(src, 0);
}

vbfloat16mf4_t test_vget_v_bf16mf4x2_bf16mf4(vbfloat16mf4x2_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf4x2_bf16mf4(src, 0);
}

vbfloat16mf4_t test_vget_v_bf16mf4x3_bf16mf4(vbfloat16mf4x3_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf4x3_bf16mf4(src, 0);
}

vbfloat16mf4_t test_vget_v_bf16mf4x4_bf16mf4(vbfloat16mf4x4_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf4x4_bf16mf4(src, 0);
}

vbfloat16mf4_t test_vget_v_bf16mf4x5_bf16mf4(vbfloat16mf4x5_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf4x5_bf16mf4(src, 0);
}

vbfloat16mf4_t test_vget_v_bf16mf4x6_bf16mf4(vbfloat16mf4x6_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf4x6_bf16mf4(src, 0);
}

vbfloat16mf4_t test_vget_v_bf16mf4x7_bf16mf4(vbfloat16mf4x7_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf4x7_bf16mf4(src, 0);
}

vbfloat16mf4_t test_vget_v_bf16mf4x8_bf16mf4(vbfloat16mf4x8_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf4x8_bf16mf4(src, 0);
}

vbfloat16mf2_t test_vget_v_bf16mf2x2_bf16mf2(vbfloat16mf2x2_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf2x2_bf16mf2(src, 0);
}

vbfloat16mf2_t test_vget_v_bf16mf2x3_bf16mf2(vbfloat16mf2x3_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf2x3_bf16mf2(src, 0);
}

vbfloat16mf2_t test_vget_v_bf16mf2x4_bf16mf2(vbfloat16mf2x4_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf2x4_bf16mf2(src, 0);
}

vbfloat16mf2_t test_vget_v_bf16mf2x5_bf16mf2(vbfloat16mf2x5_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf2x5_bf16mf2(src, 0);
}

vbfloat16mf2_t test_vget_v_bf16mf2x6_bf16mf2(vbfloat16mf2x6_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf2x6_bf16mf2(src, 0);
}

vbfloat16mf2_t test_vget_v_bf16mf2x7_bf16mf2(vbfloat16mf2x7_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf2x7_bf16mf2(src, 0);
}

vbfloat16mf2_t test_vget_v_bf16mf2x8_bf16mf2(vbfloat16mf2x8_t src,
                                             size_t index) {
  return __riscv_vget_v_bf16mf2x8_bf16mf2(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m1x2_bf16m1(vbfloat16m1x2_t src, size_t index) {
  return __riscv_vget_v_bf16m1x2_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m1x3_bf16m1(vbfloat16m1x3_t src, size_t index) {
  return __riscv_vget_v_bf16m1x3_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m1x4_bf16m1(vbfloat16m1x4_t src, size_t index) {
  return __riscv_vget_v_bf16m1x4_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m1x5_bf16m1(vbfloat16m1x5_t src, size_t index) {
  return __riscv_vget_v_bf16m1x5_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m1x6_bf16m1(vbfloat16m1x6_t src, size_t index) {
  return __riscv_vget_v_bf16m1x6_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m1x7_bf16m1(vbfloat16m1x7_t src, size_t index) {
  return __riscv_vget_v_bf16m1x7_bf16m1(src, 0);
}

vbfloat16m1_t test_vget_v_bf16m1x8_bf16m1(vbfloat16m1x8_t src, size_t index) {
  return __riscv_vget_v_bf16m1x8_bf16m1(src, 0);
}

vbfloat16m2_t test_vget_v_bf16m2x2_bf16m2(vbfloat16m2x2_t src, size_t index) {
  return __riscv_vget_v_bf16m2x2_bf16m2(src, 0);
}

vbfloat16m2_t test_vget_v_bf16m2x3_bf16m2(vbfloat16m2x3_t src, size_t index) {
  return __riscv_vget_v_bf16m2x3_bf16m2(src, 0);
}

vbfloat16m2_t test_vget_v_bf16m2x4_bf16m2(vbfloat16m2x4_t src, size_t index) {
  return __riscv_vget_v_bf16m2x4_bf16m2(src, 0);
}

vbfloat16m4_t test_vget_v_bf16m4x2_bf16m4(vbfloat16m4x2_t src, size_t index) {
  return __riscv_vget_v_bf16m4x2_bf16m4(src, 0);
}
