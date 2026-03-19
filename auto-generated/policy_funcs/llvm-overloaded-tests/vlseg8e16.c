// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_tu(vfloat16mf4x8_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_tu(vfloat16mf2x8_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_tu(vfloat16m1x8_t vd,
                                           const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8_tu(vint16mf4x8_t vd, const int16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8_tu(vint16mf2x8_t vd, const int16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8_tu(vint16m1x8_t vd, const int16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8_tu(vuint16mf4x8_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8_tu(vuint16mf2x8_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8_tu(vuint16m1x8_t vd, const uint16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg8e16_tu(vd, rs1, vl);
}

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_tum(vbool64_t vm, vfloat16mf4x8_t vd,
                                              const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_tum(vbool32_t vm, vfloat16mf2x8_t vd,
                                              const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_tum(vbool16_t vm, vfloat16m1x8_t vd,
                                            const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8_tum(vbool64_t vm, vint16mf4x8_t vd,
                                            const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8_tum(vbool32_t vm, vint16mf2x8_t vd,
                                            const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8_tum(vbool16_t vm, vint16m1x8_t vd,
                                          const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8_tum(vbool64_t vm, vuint16mf4x8_t vd,
                                             const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8_tum(vbool32_t vm, vuint16mf2x8_t vd,
                                             const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8_tum(vbool16_t vm, vuint16m1x8_t vd,
                                           const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tum(vm, vd, rs1, vl);
}

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_tumu(vbool64_t vm, vfloat16mf4x8_t vd,
                                               const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_tumu(vbool32_t vm, vfloat16mf2x8_t vd,
                                               const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_tumu(vbool16_t vm, vfloat16m1x8_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8_tumu(vbool64_t vm, vint16mf4x8_t vd,
                                             const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8_tumu(vbool32_t vm, vint16mf2x8_t vd,
                                             const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8_tumu(vbool16_t vm, vint16m1x8_t vd,
                                           const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8_tumu(vbool64_t vm, vuint16mf4x8_t vd,
                                              const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8_tumu(vbool32_t vm, vuint16mf2x8_t vd,
                                              const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8_tumu(vbool16_t vm, vuint16m1x8_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_tumu(vm, vd, rs1, vl);
}

vfloat16mf4x8_t test_vlseg8e16_v_f16mf4x8_mu(vbool64_t vm, vfloat16mf4x8_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vfloat16mf2x8_t test_vlseg8e16_v_f16mf2x8_mu(vbool32_t vm, vfloat16mf2x8_t vd,
                                             const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vfloat16m1x8_t test_vlseg8e16_v_f16m1x8_mu(vbool16_t vm, vfloat16m1x8_t vd,
                                           const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vint16mf4x8_t test_vlseg8e16_v_i16mf4x8_mu(vbool64_t vm, vint16mf4x8_t vd,
                                           const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vint16mf2x8_t test_vlseg8e16_v_i16mf2x8_mu(vbool32_t vm, vint16mf2x8_t vd,
                                           const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vint16m1x8_t test_vlseg8e16_v_i16m1x8_mu(vbool16_t vm, vint16m1x8_t vd,
                                         const int16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vuint16mf4x8_t test_vlseg8e16_v_u16mf4x8_mu(vbool64_t vm, vuint16mf4x8_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vuint16mf2x8_t test_vlseg8e16_v_u16mf2x8_mu(vbool32_t vm, vuint16mf2x8_t vd,
                                            const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}

vuint16m1x8_t test_vlseg8e16_v_u16m1x8_mu(vbool16_t vm, vuint16m1x8_t vd,
                                          const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg8e16_mu(vm, vd, rs1, vl);
}
