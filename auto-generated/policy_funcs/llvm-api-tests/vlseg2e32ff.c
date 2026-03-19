// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve32f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_tu(vfloat32mf2x2_t vd,
                                               const float *rs1, size_t *new_vl,
                                               size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_tu(vd, rs1, new_vl, vl);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_tu(vfloat32m1x2_t vd,
                                             const float *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1x2_tu(vd, rs1, new_vl, vl);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_tu(vfloat32m2x2_t vd,
                                             const float *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2x2_tu(vd, rs1, new_vl, vl);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_tu(vfloat32m4x2_t vd,
                                             const float *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4x2_tu(vd, rs1, new_vl, vl);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_tu(vint32mf2x2_t vd,
                                             const int32_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_tu(vd, rs1, new_vl, vl);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_tu(vint32m1x2_t vd, const int32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1x2_tu(vd, rs1, new_vl, vl);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_tu(vint32m2x2_t vd, const int32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2x2_tu(vd, rs1, new_vl, vl);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_tu(vint32m4x2_t vd, const int32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4x2_tu(vd, rs1, new_vl, vl);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_tu(vuint32mf2x2_t vd,
                                              const uint32_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_tu(vd, rs1, new_vl, vl);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_tu(vuint32m1x2_t vd,
                                            const uint32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1x2_tu(vd, rs1, new_vl, vl);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_tu(vuint32m2x2_t vd,
                                            const uint32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2x2_tu(vd, rs1, new_vl, vl);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_tu(vuint32m4x2_t vd,
                                            const uint32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4x2_tu(vd, rs1, new_vl, vl);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_tum(vbool64_t vm,
                                                vfloat32mf2x2_t vd,
                                                const float *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_tum(vbool32_t vm, vfloat32m1x2_t vd,
                                              const float *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_tum(vbool16_t vm, vfloat32m2x2_t vd,
                                              const float *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_tum(vbool8_t vm, vfloat32m4x2_t vd,
                                              const float *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4x2_tum(vm, vd, rs1, new_vl, vl);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_tum(vbool64_t vm, vint32mf2x2_t vd,
                                              const int32_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_tum(vm, vd, rs1, new_vl, vl);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_tum(vbool32_t vm, vint32m1x2_t vd,
                                            const int32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1x2_tum(vm, vd, rs1, new_vl, vl);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_tum(vbool16_t vm, vint32m2x2_t vd,
                                            const int32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2x2_tum(vm, vd, rs1, new_vl, vl);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_tum(vbool8_t vm, vint32m4x2_t vd,
                                            const int32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_tum(vbool64_t vm, vuint32mf2x2_t vd,
                                               const uint32_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_tum(vbool32_t vm, vuint32m1x2_t vd,
                                             const uint32_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_tum(vbool16_t vm, vuint32m2x2_t vd,
                                             const uint32_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2x2_tum(vm, vd, rs1, new_vl, vl);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_tum(vbool8_t vm, vuint32m4x2_t vd,
                                             const uint32_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4x2_tum(vm, vd, rs1, new_vl, vl);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_tumu(vbool64_t vm,
                                                 vfloat32mf2x2_t vd,
                                                 const float *rs1,
                                                 size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_tumu(vbool32_t vm, vfloat32m1x2_t vd,
                                               const float *rs1, size_t *new_vl,
                                               size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_tumu(vbool16_t vm, vfloat32m2x2_t vd,
                                               const float *rs1, size_t *new_vl,
                                               size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_tumu(vbool8_t vm, vfloat32m4x2_t vd,
                                               const float *rs1, size_t *new_vl,
                                               size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_tumu(vbool64_t vm, vint32mf2x2_t vd,
                                               const int32_t *rs1,
                                               size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_tumu(vbool32_t vm, vint32m1x2_t vd,
                                             const int32_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_tumu(vbool16_t vm, vint32m2x2_t vd,
                                             const int32_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_tumu(vbool8_t vm, vint32m4x2_t vd,
                                             const int32_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_tumu(vbool64_t vm, vuint32mf2x2_t vd,
                                                const uint32_t *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_tumu(vbool32_t vm, vuint32m1x2_t vd,
                                              const uint32_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_tumu(vbool16_t vm, vuint32m2x2_t vd,
                                              const uint32_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2x2_tumu(vm, vd, rs1, new_vl, vl);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_tumu(vbool8_t vm, vuint32m4x2_t vd,
                                              const uint32_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4x2_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat32mf2x2_t test_vlseg2e32ff_v_f32mf2x2_mu(vbool64_t vm, vfloat32mf2x2_t vd,
                                               const float *rs1, size_t *new_vl,
                                               size_t vl) {
  return __riscv_vlseg2e32ff_v_f32mf2x2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat32m1x2_t test_vlseg2e32ff_v_f32m1x2_mu(vbool32_t vm, vfloat32m1x2_t vd,
                                             const float *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m1x2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat32m2x2_t test_vlseg2e32ff_v_f32m2x2_mu(vbool16_t vm, vfloat32m2x2_t vd,
                                             const float *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m2x2_mu(vm, vd, rs1, new_vl, vl);
}

vfloat32m4x2_t test_vlseg2e32ff_v_f32m4x2_mu(vbool8_t vm, vfloat32m4x2_t vd,
                                             const float *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_f32m4x2_mu(vm, vd, rs1, new_vl, vl);
}

vint32mf2x2_t test_vlseg2e32ff_v_i32mf2x2_mu(vbool64_t vm, vint32mf2x2_t vd,
                                             const int32_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg2e32ff_v_i32mf2x2_mu(vm, vd, rs1, new_vl, vl);
}

vint32m1x2_t test_vlseg2e32ff_v_i32m1x2_mu(vbool32_t vm, vint32m1x2_t vd,
                                           const int32_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m1x2_mu(vm, vd, rs1, new_vl, vl);
}

vint32m2x2_t test_vlseg2e32ff_v_i32m2x2_mu(vbool16_t vm, vint32m2x2_t vd,
                                           const int32_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m2x2_mu(vm, vd, rs1, new_vl, vl);
}

vint32m4x2_t test_vlseg2e32ff_v_i32m4x2_mu(vbool8_t vm, vint32m4x2_t vd,
                                           const int32_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg2e32ff_v_i32m4x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint32mf2x2_t test_vlseg2e32ff_v_u32mf2x2_mu(vbool64_t vm, vuint32mf2x2_t vd,
                                              const uint32_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e32ff_v_u32mf2x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint32m1x2_t test_vlseg2e32ff_v_u32m1x2_mu(vbool32_t vm, vuint32m1x2_t vd,
                                            const uint32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m1x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint32m2x2_t test_vlseg2e32ff_v_u32m2x2_mu(vbool16_t vm, vuint32m2x2_t vd,
                                            const uint32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m2x2_mu(vm, vd, rs1, new_vl, vl);
}

vuint32m4x2_t test_vlseg2e32ff_v_u32m4x2_mu(vbool8_t vm, vuint32m4x2_t vd,
                                            const uint32_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg2e32ff_v_u32m4x2_mu(vm, vd, rs1, new_vl, vl);
}
