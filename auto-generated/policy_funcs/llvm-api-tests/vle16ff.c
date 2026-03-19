// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vle16ff_v_f16mf4_tu(vfloat16mf4_t vd, const _Float16 *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16mf4_tu(vd, rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tu(vfloat16mf2_t vd, const _Float16 *rs1,
                                       size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16mf2_tu(vd, rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_tu(vfloat16m1_t vd, const _Float16 *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m1_tu(vd, rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_tu(vfloat16m2_t vd, const _Float16 *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m2_tu(vd, rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_tu(vfloat16m4_t vd, const _Float16 *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m4_tu(vd, rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_tu(vfloat16m8_t vd, const _Float16 *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m8_tu(vd, rs1, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_tu(vint16mf4_t vd, const int16_t *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf4_tu(vd, rs1, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_tu(vint16mf2_t vd, const int16_t *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf2_tu(vd, rs1, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_tu(vint16m1_t vd, const int16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m1_tu(vd, rs1, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_tu(vint16m2_t vd, const int16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m2_tu(vd, rs1, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_tu(vint16m4_t vd, const int16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m4_tu(vd, rs1, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_tu(vint16m8_t vd, const int16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m8_tu(vd, rs1, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tu(vuint16mf4_t vd, const uint16_t *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf4_tu(vd, rs1, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tu(vuint16mf2_t vd, const uint16_t *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf2_tu(vd, rs1, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_tu(vuint16m1_t vd, const uint16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m1_tu(vd, rs1, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_tu(vuint16m2_t vd, const uint16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m2_tu(vd, rs1, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_tu(vuint16m4_t vd, const uint16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m4_tu(vd, rs1, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_tu(vuint16m8_t vd, const uint16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m8_tu(vd, rs1, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                        const _Float16 *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_v_f16mf4_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                        const _Float16 *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_v_f16mf2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                      const _Float16 *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_f16m1_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                      const _Float16 *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_f16m2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                      const _Float16 *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_f16m4_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                      const _Float16 *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_f16m8_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                      const int16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_i16mf4_tum(vm, vd, rs1, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                      const int16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_i16mf2_tum(vm, vd, rs1, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_tum(vbool16_t vm, vint16m1_t vd,
                                    const int16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_i16m1_tum(vm, vd, rs1, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_tum(vbool8_t vm, vint16m2_t vd,
                                    const int16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_i16m2_tum(vm, vd, rs1, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_tum(vbool4_t vm, vint16m4_t vd,
                                    const int16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_i16m4_tum(vm, vd, rs1, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_tum(vbool2_t vm, vint16m8_t vd,
                                    const int16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_i16m8_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd,
                                       const uint16_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_u16mf4_tum(vm, vd, rs1, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd,
                                       const uint16_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_u16mf2_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_tum(vbool16_t vm, vuint16m1_t vd,
                                     const uint16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_u16m1_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_tum(vbool8_t vm, vuint16m2_t vd,
                                     const uint16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_u16m2_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_tum(vbool4_t vm, vuint16m4_t vd,
                                     const uint16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_u16m4_tum(vm, vd, rs1, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_tum(vbool2_t vm, vuint16m8_t vd,
                                     const uint16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_u16m8_tum(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                         const _Float16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_v_f16mf4_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                         const _Float16 *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vle16ff_v_f16mf2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                       const _Float16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_f16m1_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                       const _Float16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_f16m2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                       const _Float16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_f16m4_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                       const _Float16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_f16m8_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                       const int16_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_i16mf4_tumu(vm, vd, rs1, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                       const int16_t *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_i16mf2_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_tumu(vbool16_t vm, vint16m1_t vd,
                                     const int16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_i16m1_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_tumu(vbool8_t vm, vint16m2_t vd,
                                     const int16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_i16m2_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_tumu(vbool4_t vm, vint16m4_t vd,
                                     const int16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_i16m4_tumu(vm, vd, rs1, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_tumu(vbool2_t vm, vint16m8_t vd,
                                     const int16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_i16m8_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd,
                                        const uint16_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_v_u16mf4_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd,
                                        const uint16_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vle16ff_v_u16mf2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_tumu(vbool16_t vm, vuint16m1_t vd,
                                      const uint16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_u16m1_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_tumu(vbool8_t vm, vuint16m2_t vd,
                                      const uint16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_u16m2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_tumu(vbool4_t vm, vuint16m4_t vd,
                                      const uint16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_u16m4_tumu(vm, vd, rs1, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_tumu(vbool2_t vm, vuint16m8_t vd,
                                      const uint16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_u16m8_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                       const _Float16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_f16mf4_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                       const _Float16 *rs1, size_t *new_vl,
                                       size_t vl) {
  return __riscv_vle16ff_v_f16mf2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                     const _Float16 *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_f16m1_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                     const _Float16 *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_f16m2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                     const _Float16 *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_f16m4_mu(vm, vd, rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                     const _Float16 *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_f16m8_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                     const int16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_i16mf4_mu(vm, vd, rs1, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                     const int16_t *rs1, size_t *new_vl,
                                     size_t vl) {
  return __riscv_vle16ff_v_i16mf2_mu(vm, vd, rs1, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_mu(vbool16_t vm, vint16m1_t vd,
                                   const int16_t *rs1, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle16ff_v_i16m1_mu(vm, vd, rs1, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_mu(vbool8_t vm, vint16m2_t vd,
                                   const int16_t *rs1, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle16ff_v_i16m2_mu(vm, vd, rs1, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_mu(vbool4_t vm, vint16m4_t vd,
                                   const int16_t *rs1, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle16ff_v_i16m4_mu(vm, vd, rs1, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_mu(vbool2_t vm, vint16m8_t vd,
                                   const int16_t *rs1, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle16ff_v_i16m8_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd,
                                      const uint16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_u16mf4_mu(vm, vd, rs1, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd,
                                      const uint16_t *rs1, size_t *new_vl,
                                      size_t vl) {
  return __riscv_vle16ff_v_u16mf2_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_mu(vbool16_t vm, vuint16m1_t vd,
                                    const uint16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_u16m1_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_mu(vbool8_t vm, vuint16m2_t vd,
                                    const uint16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_u16m2_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_mu(vbool4_t vm, vuint16m4_t vd,
                                    const uint16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_u16m4_mu(vm, vd, rs1, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_mu(vbool2_t vm, vuint16m8_t vd,
                                    const uint16_t *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_u16m8_mu(vm, vd, rs1, new_vl, vl);
}
