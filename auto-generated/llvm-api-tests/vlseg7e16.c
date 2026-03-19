// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_f16mf4x7(rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_f16mf2x7(rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7(const _Float16 *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_f16m1x7(rs1, vl);
}

vint16mf4x7_t test_vlseg7e16_v_i16mf4x7(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_i16mf4x7(rs1, vl);
}

vint16mf2x7_t test_vlseg7e16_v_i16mf2x7(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_i16mf2x7(rs1, vl);
}

vint16m1x7_t test_vlseg7e16_v_i16m1x7(const int16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_i16m1x7(rs1, vl);
}

vuint16mf4x7_t test_vlseg7e16_v_u16mf4x7(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_u16mf4x7(rs1, vl);
}

vuint16mf2x7_t test_vlseg7e16_v_u16mf2x7(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_u16mf2x7(rs1, vl);
}

vuint16m1x7_t test_vlseg7e16_v_u16m1x7(const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg7e16_v_u16m1x7(rs1, vl);
}

vfloat16mf4x7_t test_vlseg7e16_v_f16mf4x7_m(vbool64_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg7e16_v_f16mf4x7_m(vm, rs1, vl);
}

vfloat16mf2x7_t test_vlseg7e16_v_f16mf2x7_m(vbool32_t vm, const _Float16 *rs1,
                                            size_t vl) {
  return __riscv_vlseg7e16_v_f16mf2x7_m(vm, rs1, vl);
}

vfloat16m1x7_t test_vlseg7e16_v_f16m1x7_m(vbool16_t vm, const _Float16 *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e16_v_f16m1x7_m(vm, rs1, vl);
}

vint16mf4x7_t test_vlseg7e16_v_i16mf4x7_m(vbool64_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e16_v_i16mf4x7_m(vm, rs1, vl);
}

vint16mf2x7_t test_vlseg7e16_v_i16mf2x7_m(vbool32_t vm, const int16_t *rs1,
                                          size_t vl) {
  return __riscv_vlseg7e16_v_i16mf2x7_m(vm, rs1, vl);
}

vint16m1x7_t test_vlseg7e16_v_i16m1x7_m(vbool16_t vm, const int16_t *rs1,
                                        size_t vl) {
  return __riscv_vlseg7e16_v_i16m1x7_m(vm, rs1, vl);
}

vuint16mf4x7_t test_vlseg7e16_v_u16mf4x7_m(vbool64_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg7e16_v_u16mf4x7_m(vm, rs1, vl);
}

vuint16mf2x7_t test_vlseg7e16_v_u16mf2x7_m(vbool32_t vm, const uint16_t *rs1,
                                           size_t vl) {
  return __riscv_vlseg7e16_v_u16mf2x7_m(vm, rs1, vl);
}

vuint16m1x7_t test_vlseg7e16_v_u16m1x7_m(vbool16_t vm, const uint16_t *rs1,
                                         size_t vl) {
  return __riscv_vlseg7e16_v_u16m1x7_m(vm, rs1, vl);
}
