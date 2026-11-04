// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vluxei64_v_bf16mf4_tu(vbfloat16mf4_t vd, const __bf16 *rs1,
                                          vuint64m1_t rs2, size_t vl) {
  return __riscv_vluxei64_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei64_v_bf16mf2_tu(vbfloat16mf2_t vd, const __bf16 *rs1,
                                          vuint64m2_t rs2, size_t vl) {
  return __riscv_vluxei64_tu(vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei64_v_bf16m1_tu(vbfloat16m1_t vd, const __bf16 *rs1,
                                        vuint64m4_t rs2, size_t vl) {
  return __riscv_vluxei64_tu(vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei64_v_bf16m2_tu(vbfloat16m2_t vd, const __bf16 *rs1,
                                        vuint64m8_t rs2, size_t vl) {
  return __riscv_vluxei64_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4_t test_vluxei64_v_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                           const __bf16 *rs1, vuint64m1_t rs2,
                                           size_t vl) {
  return __riscv_vluxei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei64_v_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                           const __bf16 *rs1, vuint64m2_t rs2,
                                           size_t vl) {
  return __riscv_vluxei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei64_v_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                         const __bf16 *rs1, vuint64m4_t rs2,
                                         size_t vl) {
  return __riscv_vluxei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei64_v_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                         const __bf16 *rs1, vuint64m8_t rs2,
                                         size_t vl) {
  return __riscv_vluxei64_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4_t test_vluxei64_v_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                            const __bf16 *rs1, vuint64m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei64_v_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                            const __bf16 *rs1, vuint64m2_t rs2,
                                            size_t vl) {
  return __riscv_vluxei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei64_v_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                          const __bf16 *rs1, vuint64m4_t rs2,
                                          size_t vl) {
  return __riscv_vluxei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei64_v_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                          const __bf16 *rs1, vuint64m8_t rs2,
                                          size_t vl) {
  return __riscv_vluxei64_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4_t test_vluxei64_v_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                          const __bf16 *rs1, vuint64m1_t rs2,
                                          size_t vl) {
  return __riscv_vluxei64_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2_t test_vluxei64_v_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                          const __bf16 *rs1, vuint64m2_t rs2,
                                          size_t vl) {
  return __riscv_vluxei64_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1_t test_vluxei64_v_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                        const __bf16 *rs1, vuint64m4_t rs2,
                                        size_t vl) {
  return __riscv_vluxei64_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m2_t test_vluxei64_v_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                        const __bf16 *rs1, vuint64m8_t rs2,
                                        size_t vl) {
  return __riscv_vluxei64_mu(vm, vd, rs1, rs2, vl);
}
