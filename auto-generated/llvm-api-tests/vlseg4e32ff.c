// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve32f \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4(const float *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg4e32ff_v_f32mf2x4(rs1, new_vl, vl);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4(const float *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg4e32ff_v_f32m1x4(rs1, new_vl, vl);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4(const float *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg4e32ff_v_f32m2x4(rs1, new_vl, vl);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4(const int32_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg4e32ff_v_i32mf2x4(rs1, new_vl, vl);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4(const int32_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg4e32ff_v_i32m1x4(rs1, new_vl, vl);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4(const int32_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg4e32ff_v_i32m2x4(rs1, new_vl, vl);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4(const uint32_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg4e32ff_v_u32mf2x4(rs1, new_vl, vl);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4(const uint32_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg4e32ff_v_u32m1x4(rs1, new_vl, vl);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4(const uint32_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg4e32ff_v_u32m2x4(rs1, new_vl, vl);
}

vfloat32mf2x4_t test_vlseg4e32ff_v_f32mf2x4_m(vbool64_t vm, const float *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_f32mf2x4_m(vm, rs1, new_vl, vl);
}

vfloat32m1x4_t test_vlseg4e32ff_v_f32m1x4_m(vbool32_t vm, const float *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_f32m1x4_m(vm, rs1, new_vl, vl);
}

vfloat32m2x4_t test_vlseg4e32ff_v_f32m2x4_m(vbool16_t vm, const float *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_f32m2x4_m(vm, rs1, new_vl, vl);
}

vint32mf2x4_t test_vlseg4e32ff_v_i32mf2x4_m(vbool64_t vm, const int32_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_i32mf2x4_m(vm, rs1, new_vl, vl);
}

vint32m1x4_t test_vlseg4e32ff_v_i32m1x4_m(vbool32_t vm, const int32_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_i32m1x4_m(vm, rs1, new_vl, vl);
}

vint32m2x4_t test_vlseg4e32ff_v_i32m2x4_m(vbool16_t vm, const int32_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_i32m2x4_m(vm, rs1, new_vl, vl);
}

vuint32mf2x4_t test_vlseg4e32ff_v_u32mf2x4_m(vbool64_t vm, const uint32_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_u32mf2x4_m(vm, rs1, new_vl, vl);
}

vuint32m1x4_t test_vlseg4e32ff_v_u32m1x4_m(vbool32_t vm, const uint32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_u32m1x4_m(vm, rs1, new_vl, vl);
}

vuint32m2x4_t test_vlseg4e32ff_v_u32m2x4_m(vbool16_t vm, const uint32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e32ff_v_u32m2x4_m(vm, rs1, new_vl, vl);
}
