// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vlmul_trunc_v_f16mf2_f16mf4(vfloat16mf2_t value) {
  return __riscv_vlmul_trunc_v_f16mf2_f16mf4(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m1_f16mf4(vfloat16m1_t value) {
  return __riscv_vlmul_trunc_v_f16m1_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m1_f16mf2(vfloat16m1_t value) {
  return __riscv_vlmul_trunc_v_f16m1_f16mf2(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m2_f16mf4(vfloat16m2_t value) {
  return __riscv_vlmul_trunc_v_f16m2_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m2_f16mf2(vfloat16m2_t value) {
  return __riscv_vlmul_trunc_v_f16m2_f16mf2(value);
}

vfloat16m1_t test_vlmul_trunc_v_f16m2_f16m1(vfloat16m2_t value) {
  return __riscv_vlmul_trunc_v_f16m2_f16m1(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m4_f16mf4(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m4_f16mf2(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16mf2(value);
}

vfloat16m1_t test_vlmul_trunc_v_f16m4_f16m1(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16m1(value);
}

vfloat16m2_t test_vlmul_trunc_v_f16m4_f16m2(vfloat16m4_t value) {
  return __riscv_vlmul_trunc_v_f16m4_f16m2(value);
}

vfloat16mf4_t test_vlmul_trunc_v_f16m8_f16mf4(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16mf4(value);
}

vfloat16mf2_t test_vlmul_trunc_v_f16m8_f16mf2(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16mf2(value);
}

vfloat16m1_t test_vlmul_trunc_v_f16m8_f16m1(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16m1(value);
}

vfloat16m2_t test_vlmul_trunc_v_f16m8_f16m2(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16m2(value);
}

vfloat16m4_t test_vlmul_trunc_v_f16m8_f16m4(vfloat16m8_t value) {
  return __riscv_vlmul_trunc_v_f16m8_f16m4(value);
}

vfloat32mf2_t test_vlmul_trunc_v_f32m1_f32mf2(vfloat32m1_t value) {
  return __riscv_vlmul_trunc_v_f32m1_f32mf2(value);
}

vfloat32mf2_t test_vlmul_trunc_v_f32m2_f32mf2(vfloat32m2_t value) {
  return __riscv_vlmul_trunc_v_f32m2_f32mf2(value);
}

vfloat32m1_t test_vlmul_trunc_v_f32m2_f32m1(vfloat32m2_t value) {
  return __riscv_vlmul_trunc_v_f32m2_f32m1(value);
}

vfloat32mf2_t test_vlmul_trunc_v_f32m4_f32mf2(vfloat32m4_t value) {
  return __riscv_vlmul_trunc_v_f32m4_f32mf2(value);
}

vfloat32m1_t test_vlmul_trunc_v_f32m4_f32m1(vfloat32m4_t value) {
  return __riscv_vlmul_trunc_v_f32m4_f32m1(value);
}

vfloat32m2_t test_vlmul_trunc_v_f32m4_f32m2(vfloat32m4_t value) {
  return __riscv_vlmul_trunc_v_f32m4_f32m2(value);
}

vfloat32mf2_t test_vlmul_trunc_v_f32m8_f32mf2(vfloat32m8_t value) {
  return __riscv_vlmul_trunc_v_f32m8_f32mf2(value);
}

vfloat32m1_t test_vlmul_trunc_v_f32m8_f32m1(vfloat32m8_t value) {
  return __riscv_vlmul_trunc_v_f32m8_f32m1(value);
}

vfloat32m2_t test_vlmul_trunc_v_f32m8_f32m2(vfloat32m8_t value) {
  return __riscv_vlmul_trunc_v_f32m8_f32m2(value);
}

vfloat32m4_t test_vlmul_trunc_v_f32m8_f32m4(vfloat32m8_t value) {
  return __riscv_vlmul_trunc_v_f32m8_f32m4(value);
}

vfloat64m1_t test_vlmul_trunc_v_f64m2_f64m1(vfloat64m2_t value) {
  return __riscv_vlmul_trunc_v_f64m2_f64m1(value);
}

vfloat64m1_t test_vlmul_trunc_v_f64m4_f64m1(vfloat64m4_t value) {
  return __riscv_vlmul_trunc_v_f64m4_f64m1(value);
}

vfloat64m2_t test_vlmul_trunc_v_f64m4_f64m2(vfloat64m4_t value) {
  return __riscv_vlmul_trunc_v_f64m4_f64m2(value);
}

vfloat64m1_t test_vlmul_trunc_v_f64m8_f64m1(vfloat64m8_t value) {
  return __riscv_vlmul_trunc_v_f64m8_f64m1(value);
}

vfloat64m2_t test_vlmul_trunc_v_f64m8_f64m2(vfloat64m8_t value) {
  return __riscv_vlmul_trunc_v_f64m8_f64m2(value);
}

vfloat64m4_t test_vlmul_trunc_v_f64m8_f64m4(vfloat64m8_t value) {
  return __riscv_vlmul_trunc_v_f64m8_f64m4(value);
}

vint8mf8_t test_vlmul_trunc_v_i8mf4_i8mf8(vint8mf4_t value) {
  return __riscv_vlmul_trunc_v_i8mf4_i8mf8(value);
}

vint8mf8_t test_vlmul_trunc_v_i8mf2_i8mf8(vint8mf2_t value) {
  return __riscv_vlmul_trunc_v_i8mf2_i8mf8(value);
}

vint8mf4_t test_vlmul_trunc_v_i8mf2_i8mf4(vint8mf2_t value) {
  return __riscv_vlmul_trunc_v_i8mf2_i8mf4(value);
}

vint8mf8_t test_vlmul_trunc_v_i8m1_i8mf8(vint8m1_t value) {
  return __riscv_vlmul_trunc_v_i8m1_i8mf8(value);
}

vint8mf4_t test_vlmul_trunc_v_i8m1_i8mf4(vint8m1_t value) {
  return __riscv_vlmul_trunc_v_i8m1_i8mf4(value);
}

vint8mf2_t test_vlmul_trunc_v_i8m1_i8mf2(vint8m1_t value) {
  return __riscv_vlmul_trunc_v_i8m1_i8mf2(value);
}

vint8mf8_t test_vlmul_trunc_v_i8m2_i8mf8(vint8m2_t value) {
  return __riscv_vlmul_trunc_v_i8m2_i8mf8(value);
}

vint8mf4_t test_vlmul_trunc_v_i8m2_i8mf4(vint8m2_t value) {
  return __riscv_vlmul_trunc_v_i8m2_i8mf4(value);
}

vint8mf2_t test_vlmul_trunc_v_i8m2_i8mf2(vint8m2_t value) {
  return __riscv_vlmul_trunc_v_i8m2_i8mf2(value);
}

vint8m1_t test_vlmul_trunc_v_i8m2_i8m1(vint8m2_t value) {
  return __riscv_vlmul_trunc_v_i8m2_i8m1(value);
}

vint8mf8_t test_vlmul_trunc_v_i8m4_i8mf8(vint8m4_t value) {
  return __riscv_vlmul_trunc_v_i8m4_i8mf8(value);
}

vint8mf4_t test_vlmul_trunc_v_i8m4_i8mf4(vint8m4_t value) {
  return __riscv_vlmul_trunc_v_i8m4_i8mf4(value);
}

vint8mf2_t test_vlmul_trunc_v_i8m4_i8mf2(vint8m4_t value) {
  return __riscv_vlmul_trunc_v_i8m4_i8mf2(value);
}

vint8m1_t test_vlmul_trunc_v_i8m4_i8m1(vint8m4_t value) {
  return __riscv_vlmul_trunc_v_i8m4_i8m1(value);
}

vint8m2_t test_vlmul_trunc_v_i8m4_i8m2(vint8m4_t value) {
  return __riscv_vlmul_trunc_v_i8m4_i8m2(value);
}

vint8mf8_t test_vlmul_trunc_v_i8m8_i8mf8(vint8m8_t value) {
  return __riscv_vlmul_trunc_v_i8m8_i8mf8(value);
}

vint8mf4_t test_vlmul_trunc_v_i8m8_i8mf4(vint8m8_t value) {
  return __riscv_vlmul_trunc_v_i8m8_i8mf4(value);
}

vint8mf2_t test_vlmul_trunc_v_i8m8_i8mf2(vint8m8_t value) {
  return __riscv_vlmul_trunc_v_i8m8_i8mf2(value);
}

vint8m1_t test_vlmul_trunc_v_i8m8_i8m1(vint8m8_t value) {
  return __riscv_vlmul_trunc_v_i8m8_i8m1(value);
}

vint8m2_t test_vlmul_trunc_v_i8m8_i8m2(vint8m8_t value) {
  return __riscv_vlmul_trunc_v_i8m8_i8m2(value);
}

vint8m4_t test_vlmul_trunc_v_i8m8_i8m4(vint8m8_t value) {
  return __riscv_vlmul_trunc_v_i8m8_i8m4(value);
}

vint16mf4_t test_vlmul_trunc_v_i16mf2_i16mf4(vint16mf2_t value) {
  return __riscv_vlmul_trunc_v_i16mf2_i16mf4(value);
}

vint16mf4_t test_vlmul_trunc_v_i16m1_i16mf4(vint16m1_t value) {
  return __riscv_vlmul_trunc_v_i16m1_i16mf4(value);
}

vint16mf2_t test_vlmul_trunc_v_i16m1_i16mf2(vint16m1_t value) {
  return __riscv_vlmul_trunc_v_i16m1_i16mf2(value);
}

vint16mf4_t test_vlmul_trunc_v_i16m2_i16mf4(vint16m2_t value) {
  return __riscv_vlmul_trunc_v_i16m2_i16mf4(value);
}

vint16mf2_t test_vlmul_trunc_v_i16m2_i16mf2(vint16m2_t value) {
  return __riscv_vlmul_trunc_v_i16m2_i16mf2(value);
}

vint16m1_t test_vlmul_trunc_v_i16m2_i16m1(vint16m2_t value) {
  return __riscv_vlmul_trunc_v_i16m2_i16m1(value);
}

vint16mf4_t test_vlmul_trunc_v_i16m4_i16mf4(vint16m4_t value) {
  return __riscv_vlmul_trunc_v_i16m4_i16mf4(value);
}

vint16mf2_t test_vlmul_trunc_v_i16m4_i16mf2(vint16m4_t value) {
  return __riscv_vlmul_trunc_v_i16m4_i16mf2(value);
}

vint16m1_t test_vlmul_trunc_v_i16m4_i16m1(vint16m4_t value) {
  return __riscv_vlmul_trunc_v_i16m4_i16m1(value);
}

vint16m2_t test_vlmul_trunc_v_i16m4_i16m2(vint16m4_t value) {
  return __riscv_vlmul_trunc_v_i16m4_i16m2(value);
}

vint16mf4_t test_vlmul_trunc_v_i16m8_i16mf4(vint16m8_t value) {
  return __riscv_vlmul_trunc_v_i16m8_i16mf4(value);
}

vint16mf2_t test_vlmul_trunc_v_i16m8_i16mf2(vint16m8_t value) {
  return __riscv_vlmul_trunc_v_i16m8_i16mf2(value);
}

vint16m1_t test_vlmul_trunc_v_i16m8_i16m1(vint16m8_t value) {
  return __riscv_vlmul_trunc_v_i16m8_i16m1(value);
}

vint16m2_t test_vlmul_trunc_v_i16m8_i16m2(vint16m8_t value) {
  return __riscv_vlmul_trunc_v_i16m8_i16m2(value);
}

vint16m4_t test_vlmul_trunc_v_i16m8_i16m4(vint16m8_t value) {
  return __riscv_vlmul_trunc_v_i16m8_i16m4(value);
}

vint32mf2_t test_vlmul_trunc_v_i32m1_i32mf2(vint32m1_t value) {
  return __riscv_vlmul_trunc_v_i32m1_i32mf2(value);
}

vint32mf2_t test_vlmul_trunc_v_i32m2_i32mf2(vint32m2_t value) {
  return __riscv_vlmul_trunc_v_i32m2_i32mf2(value);
}

vint32m1_t test_vlmul_trunc_v_i32m2_i32m1(vint32m2_t value) {
  return __riscv_vlmul_trunc_v_i32m2_i32m1(value);
}

vint32mf2_t test_vlmul_trunc_v_i32m4_i32mf2(vint32m4_t value) {
  return __riscv_vlmul_trunc_v_i32m4_i32mf2(value);
}

vint32m1_t test_vlmul_trunc_v_i32m4_i32m1(vint32m4_t value) {
  return __riscv_vlmul_trunc_v_i32m4_i32m1(value);
}

vint32m2_t test_vlmul_trunc_v_i32m4_i32m2(vint32m4_t value) {
  return __riscv_vlmul_trunc_v_i32m4_i32m2(value);
}

vint32mf2_t test_vlmul_trunc_v_i32m8_i32mf2(vint32m8_t value) {
  return __riscv_vlmul_trunc_v_i32m8_i32mf2(value);
}

vint32m1_t test_vlmul_trunc_v_i32m8_i32m1(vint32m8_t value) {
  return __riscv_vlmul_trunc_v_i32m8_i32m1(value);
}

vint32m2_t test_vlmul_trunc_v_i32m8_i32m2(vint32m8_t value) {
  return __riscv_vlmul_trunc_v_i32m8_i32m2(value);
}

vint32m4_t test_vlmul_trunc_v_i32m8_i32m4(vint32m8_t value) {
  return __riscv_vlmul_trunc_v_i32m8_i32m4(value);
}

vint64m1_t test_vlmul_trunc_v_i64m2_i64m1(vint64m2_t value) {
  return __riscv_vlmul_trunc_v_i64m2_i64m1(value);
}

vint64m1_t test_vlmul_trunc_v_i64m4_i64m1(vint64m4_t value) {
  return __riscv_vlmul_trunc_v_i64m4_i64m1(value);
}

vint64m2_t test_vlmul_trunc_v_i64m4_i64m2(vint64m4_t value) {
  return __riscv_vlmul_trunc_v_i64m4_i64m2(value);
}

vint64m1_t test_vlmul_trunc_v_i64m8_i64m1(vint64m8_t value) {
  return __riscv_vlmul_trunc_v_i64m8_i64m1(value);
}

vint64m2_t test_vlmul_trunc_v_i64m8_i64m2(vint64m8_t value) {
  return __riscv_vlmul_trunc_v_i64m8_i64m2(value);
}

vint64m4_t test_vlmul_trunc_v_i64m8_i64m4(vint64m8_t value) {
  return __riscv_vlmul_trunc_v_i64m8_i64m4(value);
}

vuint8mf8_t test_vlmul_trunc_v_u8mf4_u8mf8(vuint8mf4_t value) {
  return __riscv_vlmul_trunc_v_u8mf4_u8mf8(value);
}

vuint8mf8_t test_vlmul_trunc_v_u8mf2_u8mf8(vuint8mf2_t value) {
  return __riscv_vlmul_trunc_v_u8mf2_u8mf8(value);
}

vuint8mf4_t test_vlmul_trunc_v_u8mf2_u8mf4(vuint8mf2_t value) {
  return __riscv_vlmul_trunc_v_u8mf2_u8mf4(value);
}

vuint8mf8_t test_vlmul_trunc_v_u8m1_u8mf8(vuint8m1_t value) {
  return __riscv_vlmul_trunc_v_u8m1_u8mf8(value);
}

vuint8mf4_t test_vlmul_trunc_v_u8m1_u8mf4(vuint8m1_t value) {
  return __riscv_vlmul_trunc_v_u8m1_u8mf4(value);
}

vuint8mf2_t test_vlmul_trunc_v_u8m1_u8mf2(vuint8m1_t value) {
  return __riscv_vlmul_trunc_v_u8m1_u8mf2(value);
}

vuint8mf8_t test_vlmul_trunc_v_u8m2_u8mf8(vuint8m2_t value) {
  return __riscv_vlmul_trunc_v_u8m2_u8mf8(value);
}

vuint8mf4_t test_vlmul_trunc_v_u8m2_u8mf4(vuint8m2_t value) {
  return __riscv_vlmul_trunc_v_u8m2_u8mf4(value);
}

vuint8mf2_t test_vlmul_trunc_v_u8m2_u8mf2(vuint8m2_t value) {
  return __riscv_vlmul_trunc_v_u8m2_u8mf2(value);
}

vuint8m1_t test_vlmul_trunc_v_u8m2_u8m1(vuint8m2_t value) {
  return __riscv_vlmul_trunc_v_u8m2_u8m1(value);
}

vuint8mf8_t test_vlmul_trunc_v_u8m4_u8mf8(vuint8m4_t value) {
  return __riscv_vlmul_trunc_v_u8m4_u8mf8(value);
}

vuint8mf4_t test_vlmul_trunc_v_u8m4_u8mf4(vuint8m4_t value) {
  return __riscv_vlmul_trunc_v_u8m4_u8mf4(value);
}

vuint8mf2_t test_vlmul_trunc_v_u8m4_u8mf2(vuint8m4_t value) {
  return __riscv_vlmul_trunc_v_u8m4_u8mf2(value);
}

vuint8m1_t test_vlmul_trunc_v_u8m4_u8m1(vuint8m4_t value) {
  return __riscv_vlmul_trunc_v_u8m4_u8m1(value);
}

vuint8m2_t test_vlmul_trunc_v_u8m4_u8m2(vuint8m4_t value) {
  return __riscv_vlmul_trunc_v_u8m4_u8m2(value);
}

vuint8mf8_t test_vlmul_trunc_v_u8m8_u8mf8(vuint8m8_t value) {
  return __riscv_vlmul_trunc_v_u8m8_u8mf8(value);
}

vuint8mf4_t test_vlmul_trunc_v_u8m8_u8mf4(vuint8m8_t value) {
  return __riscv_vlmul_trunc_v_u8m8_u8mf4(value);
}

vuint8mf2_t test_vlmul_trunc_v_u8m8_u8mf2(vuint8m8_t value) {
  return __riscv_vlmul_trunc_v_u8m8_u8mf2(value);
}

vuint8m1_t test_vlmul_trunc_v_u8m8_u8m1(vuint8m8_t value) {
  return __riscv_vlmul_trunc_v_u8m8_u8m1(value);
}

vuint8m2_t test_vlmul_trunc_v_u8m8_u8m2(vuint8m8_t value) {
  return __riscv_vlmul_trunc_v_u8m8_u8m2(value);
}

vuint8m4_t test_vlmul_trunc_v_u8m8_u8m4(vuint8m8_t value) {
  return __riscv_vlmul_trunc_v_u8m8_u8m4(value);
}

vuint16mf4_t test_vlmul_trunc_v_u16mf2_u16mf4(vuint16mf2_t value) {
  return __riscv_vlmul_trunc_v_u16mf2_u16mf4(value);
}

vuint16mf4_t test_vlmul_trunc_v_u16m1_u16mf4(vuint16m1_t value) {
  return __riscv_vlmul_trunc_v_u16m1_u16mf4(value);
}

vuint16mf2_t test_vlmul_trunc_v_u16m1_u16mf2(vuint16m1_t value) {
  return __riscv_vlmul_trunc_v_u16m1_u16mf2(value);
}

vuint16mf4_t test_vlmul_trunc_v_u16m2_u16mf4(vuint16m2_t value) {
  return __riscv_vlmul_trunc_v_u16m2_u16mf4(value);
}

vuint16mf2_t test_vlmul_trunc_v_u16m2_u16mf2(vuint16m2_t value) {
  return __riscv_vlmul_trunc_v_u16m2_u16mf2(value);
}

vuint16m1_t test_vlmul_trunc_v_u16m2_u16m1(vuint16m2_t value) {
  return __riscv_vlmul_trunc_v_u16m2_u16m1(value);
}

vuint16mf4_t test_vlmul_trunc_v_u16m4_u16mf4(vuint16m4_t value) {
  return __riscv_vlmul_trunc_v_u16m4_u16mf4(value);
}

vuint16mf2_t test_vlmul_trunc_v_u16m4_u16mf2(vuint16m4_t value) {
  return __riscv_vlmul_trunc_v_u16m4_u16mf2(value);
}

vuint16m1_t test_vlmul_trunc_v_u16m4_u16m1(vuint16m4_t value) {
  return __riscv_vlmul_trunc_v_u16m4_u16m1(value);
}

vuint16m2_t test_vlmul_trunc_v_u16m4_u16m2(vuint16m4_t value) {
  return __riscv_vlmul_trunc_v_u16m4_u16m2(value);
}

vuint16mf4_t test_vlmul_trunc_v_u16m8_u16mf4(vuint16m8_t value) {
  return __riscv_vlmul_trunc_v_u16m8_u16mf4(value);
}

vuint16mf2_t test_vlmul_trunc_v_u16m8_u16mf2(vuint16m8_t value) {
  return __riscv_vlmul_trunc_v_u16m8_u16mf2(value);
}

vuint16m1_t test_vlmul_trunc_v_u16m8_u16m1(vuint16m8_t value) {
  return __riscv_vlmul_trunc_v_u16m8_u16m1(value);
}

vuint16m2_t test_vlmul_trunc_v_u16m8_u16m2(vuint16m8_t value) {
  return __riscv_vlmul_trunc_v_u16m8_u16m2(value);
}

vuint16m4_t test_vlmul_trunc_v_u16m8_u16m4(vuint16m8_t value) {
  return __riscv_vlmul_trunc_v_u16m8_u16m4(value);
}

vuint32mf2_t test_vlmul_trunc_v_u32m1_u32mf2(vuint32m1_t value) {
  return __riscv_vlmul_trunc_v_u32m1_u32mf2(value);
}

vuint32mf2_t test_vlmul_trunc_v_u32m2_u32mf2(vuint32m2_t value) {
  return __riscv_vlmul_trunc_v_u32m2_u32mf2(value);
}

vuint32m1_t test_vlmul_trunc_v_u32m2_u32m1(vuint32m2_t value) {
  return __riscv_vlmul_trunc_v_u32m2_u32m1(value);
}

vuint32mf2_t test_vlmul_trunc_v_u32m4_u32mf2(vuint32m4_t value) {
  return __riscv_vlmul_trunc_v_u32m4_u32mf2(value);
}

vuint32m1_t test_vlmul_trunc_v_u32m4_u32m1(vuint32m4_t value) {
  return __riscv_vlmul_trunc_v_u32m4_u32m1(value);
}

vuint32m2_t test_vlmul_trunc_v_u32m4_u32m2(vuint32m4_t value) {
  return __riscv_vlmul_trunc_v_u32m4_u32m2(value);
}

vuint32mf2_t test_vlmul_trunc_v_u32m8_u32mf2(vuint32m8_t value) {
  return __riscv_vlmul_trunc_v_u32m8_u32mf2(value);
}

vuint32m1_t test_vlmul_trunc_v_u32m8_u32m1(vuint32m8_t value) {
  return __riscv_vlmul_trunc_v_u32m8_u32m1(value);
}

vuint32m2_t test_vlmul_trunc_v_u32m8_u32m2(vuint32m8_t value) {
  return __riscv_vlmul_trunc_v_u32m8_u32m2(value);
}

vuint32m4_t test_vlmul_trunc_v_u32m8_u32m4(vuint32m8_t value) {
  return __riscv_vlmul_trunc_v_u32m8_u32m4(value);
}

vuint64m1_t test_vlmul_trunc_v_u64m2_u64m1(vuint64m2_t value) {
  return __riscv_vlmul_trunc_v_u64m2_u64m1(value);
}

vuint64m1_t test_vlmul_trunc_v_u64m4_u64m1(vuint64m4_t value) {
  return __riscv_vlmul_trunc_v_u64m4_u64m1(value);
}

vuint64m2_t test_vlmul_trunc_v_u64m4_u64m2(vuint64m4_t value) {
  return __riscv_vlmul_trunc_v_u64m4_u64m2(value);
}

vuint64m1_t test_vlmul_trunc_v_u64m8_u64m1(vuint64m8_t value) {
  return __riscv_vlmul_trunc_v_u64m8_u64m1(value);
}

vuint64m2_t test_vlmul_trunc_v_u64m8_u64m2(vuint64m8_t value) {
  return __riscv_vlmul_trunc_v_u64m8_u64m2(value);
}

vuint64m4_t test_vlmul_trunc_v_u64m8_u64m4(vuint64m8_t value) {
  return __riscv_vlmul_trunc_v_u64m8_u64m4(value);
}
