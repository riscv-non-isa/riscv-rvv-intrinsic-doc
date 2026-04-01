// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vle16ff_v_f16mf4(const _Float16 *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_f16mf4(rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2(const _Float16 *rs1, size_t *new_vl,
                                    size_t vl) {
  return __riscv_vle16ff_v_f16mf2(rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m1(rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m2(rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m4(rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8(const _Float16 *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_f16m8(rs1, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4(const int16_t *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_i16mf4(rs1, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2(const int16_t *rs1, size_t *new_vl,
                                  size_t vl) {
  return __riscv_vle16ff_v_i16mf2(rs1, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1(const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m1(rs1, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2(const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m2(rs1, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4(const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m4(rs1, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8(const int16_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m8(rs1, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4(const uint16_t *rs1, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle16ff_v_u16mf4(rs1, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2(const uint16_t *rs1, size_t *new_vl,
                                   size_t vl) {
  return __riscv_vle16ff_v_u16mf2(rs1, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1(const uint16_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle16ff_v_u16m1(rs1, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2(const uint16_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle16ff_v_u16m2(rs1, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4(const uint16_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle16ff_v_u16m4(rs1, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8(const uint16_t *rs1, size_t *new_vl,
                                 size_t vl) {
  return __riscv_vle16ff_v_u16m8(rs1, new_vl, vl);
}

vfloat16mf4_t test_vle16ff_v_f16mf4_m(vbool64_t vm, const _Float16 *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16mf4_m(vm, rs1, new_vl, vl);
}

vfloat16mf2_t test_vle16ff_v_f16mf2_m(vbool32_t vm, const _Float16 *rs1,
                                      size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16mf2_m(vm, rs1, new_vl, vl);
}

vfloat16m1_t test_vle16ff_v_f16m1_m(vbool16_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m1_m(vm, rs1, new_vl, vl);
}

vfloat16m2_t test_vle16ff_v_f16m2_m(vbool8_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m2_m(vm, rs1, new_vl, vl);
}

vfloat16m4_t test_vle16ff_v_f16m4_m(vbool4_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m4_m(vm, rs1, new_vl, vl);
}

vfloat16m8_t test_vle16ff_v_f16m8_m(vbool2_t vm, const _Float16 *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_f16m8_m(vm, rs1, new_vl, vl);
}

vint16mf4_t test_vle16ff_v_i16mf4_m(vbool64_t vm, const int16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf4_m(vm, rs1, new_vl, vl);
}

vint16mf2_t test_vle16ff_v_i16mf2_m(vbool32_t vm, const int16_t *rs1,
                                    size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16mf2_m(vm, rs1, new_vl, vl);
}

vint16m1_t test_vle16ff_v_i16m1_m(vbool16_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m1_m(vm, rs1, new_vl, vl);
}

vint16m2_t test_vle16ff_v_i16m2_m(vbool8_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m2_m(vm, rs1, new_vl, vl);
}

vint16m4_t test_vle16ff_v_i16m4_m(vbool4_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m4_m(vm, rs1, new_vl, vl);
}

vint16m8_t test_vle16ff_v_i16m8_m(vbool2_t vm, const int16_t *rs1,
                                  size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_i16m8_m(vm, rs1, new_vl, vl);
}

vuint16mf4_t test_vle16ff_v_u16mf4_m(vbool64_t vm, const uint16_t *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf4_m(vm, rs1, new_vl, vl);
}

vuint16mf2_t test_vle16ff_v_u16mf2_m(vbool32_t vm, const uint16_t *rs1,
                                     size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16mf2_m(vm, rs1, new_vl, vl);
}

vuint16m1_t test_vle16ff_v_u16m1_m(vbool16_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m1_m(vm, rs1, new_vl, vl);
}

vuint16m2_t test_vle16ff_v_u16m2_m(vbool8_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m2_m(vm, rs1, new_vl, vl);
}

vuint16m4_t test_vle16ff_v_u16m4_m(vbool4_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m4_m(vm, rs1, new_vl, vl);
}

vuint16m8_t test_vle16ff_v_u16m8_m(vbool2_t vm, const uint16_t *rs1,
                                   size_t *new_vl, size_t vl) {
  return __riscv_vle16ff_v_u16m8_m(vm, rs1, new_vl, vl);
}
