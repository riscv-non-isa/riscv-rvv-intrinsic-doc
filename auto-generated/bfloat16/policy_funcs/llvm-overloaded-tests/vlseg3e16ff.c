// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x3_t test_vlseg3e16ff_v_bf16mf4x3_tu(vbfloat16mf4x3_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf2x3_t test_vlseg3e16ff_v_bf16mf2x3_tu(vbfloat16mf2x3_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16m1x3_t test_vlseg3e16ff_v_bf16m1x3_tu(vbfloat16m1x3_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16m2x3_t test_vlseg3e16ff_v_bf16m2x3_tu(vbfloat16m2x3_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf4x3_t test_vlseg3e16ff_v_bf16mf4x3_tum(vbool64_t vm,
                                                  vbfloat16mf4x3_t vd,
                                                  const __bf16 *rs1,
                                                  size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x3_t test_vlseg3e16ff_v_bf16mf2x3_tum(vbool32_t vm,
                                                  vbfloat16mf2x3_t vd,
                                                  const __bf16 *rs1,
                                                  size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x3_t test_vlseg3e16ff_v_bf16m1x3_tum(vbool16_t vm,
                                                vbfloat16m1x3_t vd,
                                                const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2x3_t test_vlseg3e16ff_v_bf16m2x3_tum(vbool8_t vm, vbfloat16m2x3_t vd,
                                                const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x3_t test_vlseg3e16ff_v_bf16mf4x3_tumu(vbool64_t vm,
                                                   vbfloat16mf4x3_t vd,
                                                   const __bf16 *rs1,
                                                   size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x3_t test_vlseg3e16ff_v_bf16mf2x3_tumu(vbool32_t vm,
                                                   vbfloat16mf2x3_t vd,
                                                   const __bf16 *rs1,
                                                   size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x3_t test_vlseg3e16ff_v_bf16m1x3_tumu(vbool16_t vm,
                                                 vbfloat16m1x3_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2x3_t test_vlseg3e16ff_v_bf16m2x3_tumu(vbool8_t vm,
                                                 vbfloat16m2x3_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x3_t test_vlseg3e16ff_v_bf16mf4x3_mu(vbool64_t vm,
                                                 vbfloat16mf4x3_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x3_t test_vlseg3e16ff_v_bf16mf2x3_mu(vbool32_t vm,
                                                 vbfloat16mf2x3_t vd,
                                                 const __bf16 *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x3_t test_vlseg3e16ff_v_bf16m1x3_mu(vbool16_t vm, vbfloat16m1x3_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m2x3_t test_vlseg3e16ff_v_bf16m2x3_mu(vbool8_t vm, vbfloat16m2x3_t vd,
                                               const __bf16 *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg3e16ff_mu(vm, vd, rs1, new_vl, vl);
}
