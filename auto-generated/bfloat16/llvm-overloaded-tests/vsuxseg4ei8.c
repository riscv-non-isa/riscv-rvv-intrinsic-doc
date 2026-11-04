// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsuxseg4ei8_v_bf16mf4x4(__bf16 *rs1, vuint8mf8_t vs2,
                                  vbfloat16mf4x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(rs1, vs2, vs3, vl);
}

void test_vsuxseg4ei8_v_bf16mf2x4(__bf16 *rs1, vuint8mf4_t vs2,
                                  vbfloat16mf2x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(rs1, vs2, vs3, vl);
}

void test_vsuxseg4ei8_v_bf16m1x4(__bf16 *rs1, vuint8mf2_t vs2,
                                 vbfloat16m1x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(rs1, vs2, vs3, vl);
}

void test_vsuxseg4ei8_v_bf16m2x4(__bf16 *rs1, vuint8m1_t vs2,
                                 vbfloat16m2x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(rs1, vs2, vs3, vl);
}

void test_vsuxseg4ei8_v_bf16mf4x4_m(vbool64_t vm, __bf16 *rs1, vuint8mf8_t vs2,
                                    vbfloat16mf4x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg4ei8_v_bf16mf2x4_m(vbool32_t vm, __bf16 *rs1, vuint8mf4_t vs2,
                                    vbfloat16mf2x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg4ei8_v_bf16m1x4_m(vbool16_t vm, __bf16 *rs1, vuint8mf2_t vs2,
                                   vbfloat16m1x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg4ei8_v_bf16m2x4_m(vbool8_t vm, __bf16 *rs1, vuint8m1_t vs2,
                                   vbfloat16m2x4_t vs3, size_t vl) {
  return __riscv_vsuxseg4ei8(vm, rs1, vs2, vs3, vl);
}
