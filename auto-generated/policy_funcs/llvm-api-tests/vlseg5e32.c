// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve32f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_tu(vfloat32mf2x5_t vd,
                                             const float *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_f32mf2x5_tu(vd, rs1, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_tu(vfloat32m1x5_t vd, const float *rs1,
                                           size_t vl) {
  return __riscv_vlseg5e32_v_f32m1x5_tu(vd, rs1, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_tu(vint32mf2x5_t vd, const int32_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg5e32_v_i32mf2x5_tu(vd, rs1, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_tu(vint32m1x5_t vd, const int32_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg5e32_v_i32m1x5_tu(vd, rs1, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_tu(vuint32mf2x5_t vd,
                                            const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_u32mf2x5_tu(vd, rs1, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_tu(vuint32m1x5_t vd, const uint32_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg5e32_v_u32m1x5_tu(vd, rs1, vl);
}

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_tum(vbool64_t vm, vfloat32mf2x5_t vd,
                                              const float *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_f32mf2x5_tum(vm, vd, rs1, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_tum(vbool32_t vm, vfloat32m1x5_t vd,
                                            const float *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_f32m1x5_tum(vm, vd, rs1, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_tum(vbool64_t vm, vint32mf2x5_t vd,
                                            const int32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_i32mf2x5_tum(vm, vd, rs1, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_tum(vbool32_t vm, vint32m1x5_t vd,
                                          const int32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_i32m1x5_tum(vm, vd, rs1, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_tum(vbool64_t vm, vuint32mf2x5_t vd,
                                             const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_u32mf2x5_tum(vm, vd, rs1, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_tum(vbool32_t vm, vuint32m1x5_t vd,
                                           const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_u32m1x5_tum(vm, vd, rs1, vl);
}

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_tumu(vbool64_t vm, vfloat32mf2x5_t vd,
                                               const float *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_f32mf2x5_tumu(vm, vd, rs1, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_tumu(vbool32_t vm, vfloat32m1x5_t vd,
                                             const float *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_f32m1x5_tumu(vm, vd, rs1, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_tumu(vbool64_t vm, vint32mf2x5_t vd,
                                             const int32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_i32mf2x5_tumu(vm, vd, rs1, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_tumu(vbool32_t vm, vint32m1x5_t vd,
                                           const int32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_i32m1x5_tumu(vm, vd, rs1, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_tumu(vbool64_t vm, vuint32mf2x5_t vd,
                                              const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_u32mf2x5_tumu(vm, vd, rs1, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_tumu(vbool32_t vm, vuint32m1x5_t vd,
                                            const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_u32m1x5_tumu(vm, vd, rs1, vl);
}

vfloat32mf2x5_t test_vlseg5e32_v_f32mf2x5_mu(vbool64_t vm, vfloat32mf2x5_t vd,
                                             const float *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_f32mf2x5_mu(vm, vd, rs1, vl);
}

vfloat32m1x5_t test_vlseg5e32_v_f32m1x5_mu(vbool32_t vm, vfloat32m1x5_t vd,
                                           const float *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_f32m1x5_mu(vm, vd, rs1, vl);
}

vint32mf2x5_t test_vlseg5e32_v_i32mf2x5_mu(vbool64_t vm, vint32mf2x5_t vd,
                                           const int32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_i32mf2x5_mu(vm, vd, rs1, vl);
}

vint32m1x5_t test_vlseg5e32_v_i32m1x5_mu(vbool32_t vm, vint32m1x5_t vd,
                                         const int32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_i32m1x5_mu(vm, vd, rs1, vl);
}

vuint32mf2x5_t test_vlseg5e32_v_u32mf2x5_mu(vbool64_t vm, vuint32mf2x5_t vd,
                                            const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_u32mf2x5_mu(vm, vd, rs1, vl);
}

vuint32m1x5_t test_vlseg5e32_v_u32m1x5_mu(vbool32_t vm, vuint32m1x5_t vd,
                                          const uint32_t *rs1, size_t vl) {
  return __riscv_vlseg5e32_v_u32m1x5_mu(vm, vd, rs1, vl);
}
