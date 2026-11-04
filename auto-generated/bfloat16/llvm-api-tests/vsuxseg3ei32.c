// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsuxseg3ei32_v_bf16mf4x3(__bf16 *rs1, vuint32mf2_t vs2,
                                   vbfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16mf4x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei32_v_bf16mf2x3(__bf16 *rs1, vuint32m1_t vs2,
                                   vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16mf2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei32_v_bf16m1x3(__bf16 *rs1, vuint32m2_t vs2,
                                  vbfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16m1x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei32_v_bf16m2x3(__bf16 *rs1, vuint32m4_t vs2,
                                  vbfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16m2x3(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei32_v_bf16mf4x3_m(vbool64_t vm, __bf16 *rs1,
                                     vuint32mf2_t vs2, vbfloat16mf4x3_t vs3,
                                     size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16mf4x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei32_v_bf16mf2x3_m(vbool32_t vm, __bf16 *rs1, vuint32m1_t vs2,
                                     vbfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16mf2x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei32_v_bf16m1x3_m(vbool16_t vm, __bf16 *rs1, vuint32m2_t vs2,
                                    vbfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16m1x3_m(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei32_v_bf16m2x3_m(vbool8_t vm, __bf16 *rs1, vuint32m4_t vs2,
                                    vbfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei32_v_bf16m2x3_m(vm, rs1, vs2, vs3, vl);
}
