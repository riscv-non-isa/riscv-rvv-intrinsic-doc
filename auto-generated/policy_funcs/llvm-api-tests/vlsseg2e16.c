// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_tu(vfloat16mf4x2_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4x2_tu(vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_tu(vfloat16mf2x2_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2x2_tu(vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_tu(vfloat16m1x2_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1x2_tu(vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_tu(vfloat16m2x2_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2x2_tu(vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_tu(vfloat16m4x2_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4x2_tu(vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_tu(vint16mf4x2_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4x2_tu(vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_tu(vint16mf2x2_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2x2_tu(vd, rs1, rs2, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_tu(vint16m1x2_t vd, const int16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1x2_tu(vd, rs1, rs2, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_tu(vint16m2x2_t vd, const int16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2x2_tu(vd, rs1, rs2, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_tu(vint16m4x2_t vd, const int16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4x2_tu(vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_tu(vuint16mf4x2_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4x2_tu(vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_tu(vuint16mf2x2_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2x2_tu(vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_tu(vuint16m1x2_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1x2_tu(vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_tu(vuint16m2x2_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2x2_tu(vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_tu(vuint16m4x2_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4x2_tu(vd, rs1, rs2, vl);
}

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_tum(vbool64_t vm, vfloat16mf4x2_t vd,
                                               const _Float16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_tum(vbool32_t vm, vfloat16mf2x2_t vd,
                                               const _Float16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_tum(vbool16_t vm, vfloat16m1x2_t vd,
                                             const _Float16 *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_tum(vbool8_t vm, vfloat16m2x2_t vd,
                                             const _Float16 *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_tum(vbool4_t vm, vfloat16m4x2_t vd,
                                             const _Float16 *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4x2_tum(vm, vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_tum(vbool64_t vm, vint16mf4x2_t vd,
                                             const int16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_tum(vbool32_t vm, vint16mf2x2_t vd,
                                             const int16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_tum(vbool16_t vm, vint16m1x2_t vd,
                                           const int16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1x2_tum(vm, vd, rs1, rs2, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_tum(vbool8_t vm, vint16m2x2_t vd,
                                           const int16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2x2_tum(vm, vd, rs1, rs2, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_tum(vbool4_t vm, vint16m4x2_t vd,
                                           const int16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_tum(vbool64_t vm, vuint16mf4x2_t vd,
                                              const uint16_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_tum(vbool32_t vm, vuint16mf2x2_t vd,
                                              const uint16_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_tum(vbool16_t vm, vuint16m1x2_t vd,
                                            const uint16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_tum(vbool8_t vm, vuint16m2x2_t vd,
                                            const uint16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_tum(vbool4_t vm, vuint16m4x2_t vd,
                                            const uint16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_tumu(vbool64_t vm,
                                                vfloat16mf4x2_t vd,
                                                const _Float16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_tumu(vbool32_t vm,
                                                vfloat16mf2x2_t vd,
                                                const _Float16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_tumu(vbool16_t vm, vfloat16m1x2_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_tumu(vbool8_t vm, vfloat16m2x2_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_tumu(vbool4_t vm, vfloat16m4x2_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_tumu(vbool64_t vm, vint16mf4x2_t vd,
                                              const int16_t *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_tumu(vbool32_t vm, vint16mf2x2_t vd,
                                              const int16_t *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_tumu(vbool16_t vm, vint16m1x2_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_tumu(vbool8_t vm, vint16m2x2_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_tumu(vbool4_t vm, vint16m4x2_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_tumu(vbool64_t vm, vuint16mf4x2_t vd,
                                               const uint16_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_tumu(vbool32_t vm, vuint16mf2x2_t vd,
                                               const uint16_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_tumu(vbool16_t vm, vuint16m1x2_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_tumu(vbool8_t vm, vuint16m2x2_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_tumu(vbool4_t vm, vuint16m4x2_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_mu(vbool64_t vm, vfloat16mf4x2_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_mu(vbool32_t vm, vfloat16mf2x2_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_mu(vbool16_t vm, vfloat16m1x2_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_mu(vbool8_t vm, vfloat16m2x2_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_mu(vbool4_t vm, vfloat16m4x2_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4x2_mu(vm, vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_mu(vbool64_t vm, vint16mf4x2_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_mu(vbool32_t vm, vint16mf2x2_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_mu(vbool16_t vm, vint16m1x2_t vd,
                                          const int16_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1x2_mu(vm, vd, rs1, rs2, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_mu(vbool8_t vm, vint16m2x2_t vd,
                                          const int16_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2x2_mu(vm, vd, rs1, rs2, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_mu(vbool4_t vm, vint16m4x2_t vd,
                                          const int16_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_mu(vbool64_t vm, vuint16mf4x2_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_mu(vbool32_t vm, vuint16mf2x2_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_mu(vbool16_t vm, vuint16m1x2_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_mu(vbool8_t vm, vuint16m2x2_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_mu(vbool4_t vm, vuint16m4x2_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4x2_mu(vm, vd, rs1, rs2, vl);
}
