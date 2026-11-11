// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16m2_t test_vcreate_v_bf16m1_bf16m2(vbfloat16m1_t v0, vbfloat16m1_t v1) {
  return __riscv_vcreate_v_bf16m1_bf16m2(v0, v1);
}

vbfloat16m4_t test_vcreate_v_bf16m1_bf16m4(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                           vbfloat16m1_t v2, vbfloat16m1_t v3) {
  return __riscv_vcreate_v_bf16m1_bf16m4(v0, v1, v2, v3);
}

vbfloat16m8_t test_vcreate_v_bf16m1_bf16m8(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                           vbfloat16m1_t v2, vbfloat16m1_t v3,
                                           vbfloat16m1_t v4, vbfloat16m1_t v5,
                                           vbfloat16m1_t v6, vbfloat16m1_t v7) {
  return __riscv_vcreate_v_bf16m1_bf16m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vbfloat16m4_t test_vcreate_v_bf16m2_bf16m4(vbfloat16m2_t v0, vbfloat16m2_t v1) {
  return __riscv_vcreate_v_bf16m2_bf16m4(v0, v1);
}

vbfloat16m8_t test_vcreate_v_bf16m2_bf16m8(vbfloat16m2_t v0, vbfloat16m2_t v1,
                                           vbfloat16m2_t v2, vbfloat16m2_t v3) {
  return __riscv_vcreate_v_bf16m2_bf16m8(v0, v1, v2, v3);
}

vbfloat16m8_t test_vcreate_v_bf16m4_bf16m8(vbfloat16m4_t v0, vbfloat16m4_t v1) {
  return __riscv_vcreate_v_bf16m4_bf16m8(v0, v1);
}

vbfloat16mf4x2_t test_vcreate_v_bf16mf4x2(vbfloat16mf4_t v0,
                                          vbfloat16mf4_t v1) {
  return __riscv_vcreate_v_bf16mf4x2(v0, v1);
}

vbfloat16mf4x3_t test_vcreate_v_bf16mf4x3(vbfloat16mf4_t v0, vbfloat16mf4_t v1,
                                          vbfloat16mf4_t v2) {
  return __riscv_vcreate_v_bf16mf4x3(v0, v1, v2);
}

vbfloat16mf4x4_t test_vcreate_v_bf16mf4x4(vbfloat16mf4_t v0, vbfloat16mf4_t v1,
                                          vbfloat16mf4_t v2,
                                          vbfloat16mf4_t v3) {
  return __riscv_vcreate_v_bf16mf4x4(v0, v1, v2, v3);
}

vbfloat16mf4x5_t test_vcreate_v_bf16mf4x5(vbfloat16mf4_t v0, vbfloat16mf4_t v1,
                                          vbfloat16mf4_t v2, vbfloat16mf4_t v3,
                                          vbfloat16mf4_t v4) {
  return __riscv_vcreate_v_bf16mf4x5(v0, v1, v2, v3, v4);
}

vbfloat16mf4x6_t test_vcreate_v_bf16mf4x6(vbfloat16mf4_t v0, vbfloat16mf4_t v1,
                                          vbfloat16mf4_t v2, vbfloat16mf4_t v3,
                                          vbfloat16mf4_t v4,
                                          vbfloat16mf4_t v5) {
  return __riscv_vcreate_v_bf16mf4x6(v0, v1, v2, v3, v4, v5);
}

vbfloat16mf4x7_t test_vcreate_v_bf16mf4x7(vbfloat16mf4_t v0, vbfloat16mf4_t v1,
                                          vbfloat16mf4_t v2, vbfloat16mf4_t v3,
                                          vbfloat16mf4_t v4, vbfloat16mf4_t v5,
                                          vbfloat16mf4_t v6) {
  return __riscv_vcreate_v_bf16mf4x7(v0, v1, v2, v3, v4, v5, v6);
}

vbfloat16mf4x8_t test_vcreate_v_bf16mf4x8(vbfloat16mf4_t v0, vbfloat16mf4_t v1,
                                          vbfloat16mf4_t v2, vbfloat16mf4_t v3,
                                          vbfloat16mf4_t v4, vbfloat16mf4_t v5,
                                          vbfloat16mf4_t v6,
                                          vbfloat16mf4_t v7) {
  return __riscv_vcreate_v_bf16mf4x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vbfloat16mf2x2_t test_vcreate_v_bf16mf2x2(vbfloat16mf2_t v0,
                                          vbfloat16mf2_t v1) {
  return __riscv_vcreate_v_bf16mf2x2(v0, v1);
}

vbfloat16mf2x3_t test_vcreate_v_bf16mf2x3(vbfloat16mf2_t v0, vbfloat16mf2_t v1,
                                          vbfloat16mf2_t v2) {
  return __riscv_vcreate_v_bf16mf2x3(v0, v1, v2);
}

vbfloat16mf2x4_t test_vcreate_v_bf16mf2x4(vbfloat16mf2_t v0, vbfloat16mf2_t v1,
                                          vbfloat16mf2_t v2,
                                          vbfloat16mf2_t v3) {
  return __riscv_vcreate_v_bf16mf2x4(v0, v1, v2, v3);
}

vbfloat16mf2x5_t test_vcreate_v_bf16mf2x5(vbfloat16mf2_t v0, vbfloat16mf2_t v1,
                                          vbfloat16mf2_t v2, vbfloat16mf2_t v3,
                                          vbfloat16mf2_t v4) {
  return __riscv_vcreate_v_bf16mf2x5(v0, v1, v2, v3, v4);
}

vbfloat16mf2x6_t test_vcreate_v_bf16mf2x6(vbfloat16mf2_t v0, vbfloat16mf2_t v1,
                                          vbfloat16mf2_t v2, vbfloat16mf2_t v3,
                                          vbfloat16mf2_t v4,
                                          vbfloat16mf2_t v5) {
  return __riscv_vcreate_v_bf16mf2x6(v0, v1, v2, v3, v4, v5);
}

vbfloat16mf2x7_t test_vcreate_v_bf16mf2x7(vbfloat16mf2_t v0, vbfloat16mf2_t v1,
                                          vbfloat16mf2_t v2, vbfloat16mf2_t v3,
                                          vbfloat16mf2_t v4, vbfloat16mf2_t v5,
                                          vbfloat16mf2_t v6) {
  return __riscv_vcreate_v_bf16mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vbfloat16mf2x8_t test_vcreate_v_bf16mf2x8(vbfloat16mf2_t v0, vbfloat16mf2_t v1,
                                          vbfloat16mf2_t v2, vbfloat16mf2_t v3,
                                          vbfloat16mf2_t v4, vbfloat16mf2_t v5,
                                          vbfloat16mf2_t v6,
                                          vbfloat16mf2_t v7) {
  return __riscv_vcreate_v_bf16mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vbfloat16m1x2_t test_vcreate_v_bf16m1x2(vbfloat16m1_t v0, vbfloat16m1_t v1) {
  return __riscv_vcreate_v_bf16m1x2(v0, v1);
}

vbfloat16m1x3_t test_vcreate_v_bf16m1x3(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                        vbfloat16m1_t v2) {
  return __riscv_vcreate_v_bf16m1x3(v0, v1, v2);
}

vbfloat16m1x4_t test_vcreate_v_bf16m1x4(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                        vbfloat16m1_t v2, vbfloat16m1_t v3) {
  return __riscv_vcreate_v_bf16m1x4(v0, v1, v2, v3);
}

vbfloat16m1x5_t test_vcreate_v_bf16m1x5(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                        vbfloat16m1_t v2, vbfloat16m1_t v3,
                                        vbfloat16m1_t v4) {
  return __riscv_vcreate_v_bf16m1x5(v0, v1, v2, v3, v4);
}

vbfloat16m1x6_t test_vcreate_v_bf16m1x6(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                        vbfloat16m1_t v2, vbfloat16m1_t v3,
                                        vbfloat16m1_t v4, vbfloat16m1_t v5) {
  return __riscv_vcreate_v_bf16m1x6(v0, v1, v2, v3, v4, v5);
}

vbfloat16m1x7_t test_vcreate_v_bf16m1x7(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                        vbfloat16m1_t v2, vbfloat16m1_t v3,
                                        vbfloat16m1_t v4, vbfloat16m1_t v5,
                                        vbfloat16m1_t v6) {
  return __riscv_vcreate_v_bf16m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vbfloat16m1x8_t test_vcreate_v_bf16m1x8(vbfloat16m1_t v0, vbfloat16m1_t v1,
                                        vbfloat16m1_t v2, vbfloat16m1_t v3,
                                        vbfloat16m1_t v4, vbfloat16m1_t v5,
                                        vbfloat16m1_t v6, vbfloat16m1_t v7) {
  return __riscv_vcreate_v_bf16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vbfloat16m2x2_t test_vcreate_v_bf16m2x2(vbfloat16m2_t v0, vbfloat16m2_t v1) {
  return __riscv_vcreate_v_bf16m2x2(v0, v1);
}

vbfloat16m2x3_t test_vcreate_v_bf16m2x3(vbfloat16m2_t v0, vbfloat16m2_t v1,
                                        vbfloat16m2_t v2) {
  return __riscv_vcreate_v_bf16m2x3(v0, v1, v2);
}

vbfloat16m2x4_t test_vcreate_v_bf16m2x4(vbfloat16m2_t v0, vbfloat16m2_t v1,
                                        vbfloat16m2_t v2, vbfloat16m2_t v3) {
  return __riscv_vcreate_v_bf16m2x4(v0, v1, v2, v3);
}

vbfloat16m4x2_t test_vcreate_v_bf16m4x2(vbfloat16m4_t v0, vbfloat16m4_t v1) {
  return __riscv_vcreate_v_bf16m4x2(v0, v1);
}
