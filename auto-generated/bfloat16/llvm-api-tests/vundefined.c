// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vundefined_bf16mf4() {
  return __riscv_vundefined_bf16mf4();
}

vbfloat16mf2_t test_vundefined_bf16mf2() {
  return __riscv_vundefined_bf16mf2();
}

vbfloat16m1_t test_vundefined_bf16m1() { return __riscv_vundefined_bf16m1(); }

vbfloat16m2_t test_vundefined_bf16m2() { return __riscv_vundefined_bf16m2(); }

vbfloat16m4_t test_vundefined_bf16m4() { return __riscv_vundefined_bf16m4(); }

vbfloat16m8_t test_vundefined_bf16m8() { return __riscv_vundefined_bf16m8(); }

vbfloat16mf4x2_t test_vundefined_bf16mf4x2() {
  return __riscv_vundefined_bf16mf4x2();
}

vbfloat16mf4x3_t test_vundefined_bf16mf4x3() {
  return __riscv_vundefined_bf16mf4x3();
}

vbfloat16mf4x4_t test_vundefined_bf16mf4x4() {
  return __riscv_vundefined_bf16mf4x4();
}

vbfloat16mf4x5_t test_vundefined_bf16mf4x5() {
  return __riscv_vundefined_bf16mf4x5();
}

vbfloat16mf4x6_t test_vundefined_bf16mf4x6() {
  return __riscv_vundefined_bf16mf4x6();
}

vbfloat16mf4x7_t test_vundefined_bf16mf4x7() {
  return __riscv_vundefined_bf16mf4x7();
}

vbfloat16mf4x8_t test_vundefined_bf16mf4x8() {
  return __riscv_vundefined_bf16mf4x8();
}

vbfloat16mf2x2_t test_vundefined_bf16mf2x2() {
  return __riscv_vundefined_bf16mf2x2();
}

vbfloat16mf2x3_t test_vundefined_bf16mf2x3() {
  return __riscv_vundefined_bf16mf2x3();
}

vbfloat16mf2x4_t test_vundefined_bf16mf2x4() {
  return __riscv_vundefined_bf16mf2x4();
}

vbfloat16mf2x5_t test_vundefined_bf16mf2x5() {
  return __riscv_vundefined_bf16mf2x5();
}

vbfloat16mf2x6_t test_vundefined_bf16mf2x6() {
  return __riscv_vundefined_bf16mf2x6();
}

vbfloat16mf2x7_t test_vundefined_bf16mf2x7() {
  return __riscv_vundefined_bf16mf2x7();
}

vbfloat16mf2x8_t test_vundefined_bf16mf2x8() {
  return __riscv_vundefined_bf16mf2x8();
}

vbfloat16m1x2_t test_vundefined_bf16m1x2() {
  return __riscv_vundefined_bf16m1x2();
}

vbfloat16m1x3_t test_vundefined_bf16m1x3() {
  return __riscv_vundefined_bf16m1x3();
}

vbfloat16m1x4_t test_vundefined_bf16m1x4() {
  return __riscv_vundefined_bf16m1x4();
}

vbfloat16m1x5_t test_vundefined_bf16m1x5() {
  return __riscv_vundefined_bf16m1x5();
}

vbfloat16m1x6_t test_vundefined_bf16m1x6() {
  return __riscv_vundefined_bf16m1x6();
}

vbfloat16m1x7_t test_vundefined_bf16m1x7() {
  return __riscv_vundefined_bf16m1x7();
}

vbfloat16m1x8_t test_vundefined_bf16m1x8() {
  return __riscv_vundefined_bf16m1x8();
}

vbfloat16m2x2_t test_vundefined_bf16m2x2() {
  return __riscv_vundefined_bf16m2x2();
}

vbfloat16m2x3_t test_vundefined_bf16m2x3() {
  return __riscv_vundefined_bf16m2x3();
}

vbfloat16m2x4_t test_vundefined_bf16m2x4() {
  return __riscv_vundefined_bf16m2x4();
}

vbfloat16m4x2_t test_vundefined_bf16m4x2() {
  return __riscv_vundefined_bf16m4x2();
}
