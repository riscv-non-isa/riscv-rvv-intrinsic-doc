// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vundefined_f16mf4() { return __riscv_vundefined_f16mf4(); }

vfloat16mf2_t test_vundefined_f16mf2() { return __riscv_vundefined_f16mf2(); }

vfloat16m1_t test_vundefined_f16m1() { return __riscv_vundefined_f16m1(); }

vfloat16m2_t test_vundefined_f16m2() { return __riscv_vundefined_f16m2(); }

vfloat16m4_t test_vundefined_f16m4() { return __riscv_vundefined_f16m4(); }

vfloat16m8_t test_vundefined_f16m8() { return __riscv_vundefined_f16m8(); }

vfloat32mf2_t test_vundefined_f32mf2() { return __riscv_vundefined_f32mf2(); }

vfloat32m1_t test_vundefined_f32m1() { return __riscv_vundefined_f32m1(); }

vfloat32m2_t test_vundefined_f32m2() { return __riscv_vundefined_f32m2(); }

vfloat32m4_t test_vundefined_f32m4() { return __riscv_vundefined_f32m4(); }

vfloat32m8_t test_vundefined_f32m8() { return __riscv_vundefined_f32m8(); }

vfloat64m1_t test_vundefined_f64m1() { return __riscv_vundefined_f64m1(); }

vfloat64m2_t test_vundefined_f64m2() { return __riscv_vundefined_f64m2(); }

vfloat64m4_t test_vundefined_f64m4() { return __riscv_vundefined_f64m4(); }

vfloat64m8_t test_vundefined_f64m8() { return __riscv_vundefined_f64m8(); }

vint8mf8_t test_vundefined_i8mf8() { return __riscv_vundefined_i8mf8(); }

vint8mf4_t test_vundefined_i8mf4() { return __riscv_vundefined_i8mf4(); }

vint8mf2_t test_vundefined_i8mf2() { return __riscv_vundefined_i8mf2(); }

vint8m1_t test_vundefined_i8m1() { return __riscv_vundefined_i8m1(); }

vint8m2_t test_vundefined_i8m2() { return __riscv_vundefined_i8m2(); }

vint8m4_t test_vundefined_i8m4() { return __riscv_vundefined_i8m4(); }

vint8m8_t test_vundefined_i8m8() { return __riscv_vundefined_i8m8(); }

vint16mf4_t test_vundefined_i16mf4() { return __riscv_vundefined_i16mf4(); }

vint16mf2_t test_vundefined_i16mf2() { return __riscv_vundefined_i16mf2(); }

vint16m1_t test_vundefined_i16m1() { return __riscv_vundefined_i16m1(); }

vint16m2_t test_vundefined_i16m2() { return __riscv_vundefined_i16m2(); }

vint16m4_t test_vundefined_i16m4() { return __riscv_vundefined_i16m4(); }

vint16m8_t test_vundefined_i16m8() { return __riscv_vundefined_i16m8(); }

vint32mf2_t test_vundefined_i32mf2() { return __riscv_vundefined_i32mf2(); }

vint32m1_t test_vundefined_i32m1() { return __riscv_vundefined_i32m1(); }

vint32m2_t test_vundefined_i32m2() { return __riscv_vundefined_i32m2(); }

vint32m4_t test_vundefined_i32m4() { return __riscv_vundefined_i32m4(); }

vint32m8_t test_vundefined_i32m8() { return __riscv_vundefined_i32m8(); }

vint64m1_t test_vundefined_i64m1() { return __riscv_vundefined_i64m1(); }

vint64m2_t test_vundefined_i64m2() { return __riscv_vundefined_i64m2(); }

vint64m4_t test_vundefined_i64m4() { return __riscv_vundefined_i64m4(); }

vint64m8_t test_vundefined_i64m8() { return __riscv_vundefined_i64m8(); }

vuint8mf8_t test_vundefined_u8mf8() { return __riscv_vundefined_u8mf8(); }

vuint8mf4_t test_vundefined_u8mf4() { return __riscv_vundefined_u8mf4(); }

vuint8mf2_t test_vundefined_u8mf2() { return __riscv_vundefined_u8mf2(); }

vuint8m1_t test_vundefined_u8m1() { return __riscv_vundefined_u8m1(); }

vuint8m2_t test_vundefined_u8m2() { return __riscv_vundefined_u8m2(); }

vuint8m4_t test_vundefined_u8m4() { return __riscv_vundefined_u8m4(); }

vuint8m8_t test_vundefined_u8m8() { return __riscv_vundefined_u8m8(); }

vuint16mf4_t test_vundefined_u16mf4() { return __riscv_vundefined_u16mf4(); }

vuint16mf2_t test_vundefined_u16mf2() { return __riscv_vundefined_u16mf2(); }

vuint16m1_t test_vundefined_u16m1() { return __riscv_vundefined_u16m1(); }

vuint16m2_t test_vundefined_u16m2() { return __riscv_vundefined_u16m2(); }

vuint16m4_t test_vundefined_u16m4() { return __riscv_vundefined_u16m4(); }

vuint16m8_t test_vundefined_u16m8() { return __riscv_vundefined_u16m8(); }

vuint32mf2_t test_vundefined_u32mf2() { return __riscv_vundefined_u32mf2(); }

vuint32m1_t test_vundefined_u32m1() { return __riscv_vundefined_u32m1(); }

vuint32m2_t test_vundefined_u32m2() { return __riscv_vundefined_u32m2(); }

vuint32m4_t test_vundefined_u32m4() { return __riscv_vundefined_u32m4(); }

vuint32m8_t test_vundefined_u32m8() { return __riscv_vundefined_u32m8(); }

vuint64m1_t test_vundefined_u64m1() { return __riscv_vundefined_u64m1(); }

vuint64m2_t test_vundefined_u64m2() { return __riscv_vundefined_u64m2(); }

vuint64m4_t test_vundefined_u64m4() { return __riscv_vundefined_u64m4(); }

vuint64m8_t test_vundefined_u64m8() { return __riscv_vundefined_u64m8(); }

vfloat16mf4x2_t test_vundefined_f16mf4x2() {
  return __riscv_vundefined_f16mf4x2();
}

vfloat16mf4x3_t test_vundefined_f16mf4x3() {
  return __riscv_vundefined_f16mf4x3();
}

vfloat16mf4x4_t test_vundefined_f16mf4x4() {
  return __riscv_vundefined_f16mf4x4();
}

vfloat16mf4x5_t test_vundefined_f16mf4x5() {
  return __riscv_vundefined_f16mf4x5();
}

vfloat16mf4x6_t test_vundefined_f16mf4x6() {
  return __riscv_vundefined_f16mf4x6();
}

vfloat16mf4x7_t test_vundefined_f16mf4x7() {
  return __riscv_vundefined_f16mf4x7();
}

vfloat16mf4x8_t test_vundefined_f16mf4x8() {
  return __riscv_vundefined_f16mf4x8();
}

vfloat16mf2x2_t test_vundefined_f16mf2x2() {
  return __riscv_vundefined_f16mf2x2();
}

vfloat16mf2x3_t test_vundefined_f16mf2x3() {
  return __riscv_vundefined_f16mf2x3();
}

vfloat16mf2x4_t test_vundefined_f16mf2x4() {
  return __riscv_vundefined_f16mf2x4();
}

vfloat16mf2x5_t test_vundefined_f16mf2x5() {
  return __riscv_vundefined_f16mf2x5();
}

vfloat16mf2x6_t test_vundefined_f16mf2x6() {
  return __riscv_vundefined_f16mf2x6();
}

vfloat16mf2x7_t test_vundefined_f16mf2x7() {
  return __riscv_vundefined_f16mf2x7();
}

vfloat16mf2x8_t test_vundefined_f16mf2x8() {
  return __riscv_vundefined_f16mf2x8();
}

vfloat16m1x2_t test_vundefined_f16m1x2() {
  return __riscv_vundefined_f16m1x2();
}

vfloat16m1x3_t test_vundefined_f16m1x3() {
  return __riscv_vundefined_f16m1x3();
}

vfloat16m1x4_t test_vundefined_f16m1x4() {
  return __riscv_vundefined_f16m1x4();
}

vfloat16m1x5_t test_vundefined_f16m1x5() {
  return __riscv_vundefined_f16m1x5();
}

vfloat16m1x6_t test_vundefined_f16m1x6() {
  return __riscv_vundefined_f16m1x6();
}

vfloat16m1x7_t test_vundefined_f16m1x7() {
  return __riscv_vundefined_f16m1x7();
}

vfloat16m1x8_t test_vundefined_f16m1x8() {
  return __riscv_vundefined_f16m1x8();
}

vfloat16m2x2_t test_vundefined_f16m2x2() {
  return __riscv_vundefined_f16m2x2();
}

vfloat16m2x3_t test_vundefined_f16m2x3() {
  return __riscv_vundefined_f16m2x3();
}

vfloat16m2x4_t test_vundefined_f16m2x4() {
  return __riscv_vundefined_f16m2x4();
}

vfloat16m4x2_t test_vundefined_f16m4x2() {
  return __riscv_vundefined_f16m4x2();
}

vfloat32mf2x2_t test_vundefined_f32mf2x2() {
  return __riscv_vundefined_f32mf2x2();
}

vfloat32mf2x3_t test_vundefined_f32mf2x3() {
  return __riscv_vundefined_f32mf2x3();
}

vfloat32mf2x4_t test_vundefined_f32mf2x4() {
  return __riscv_vundefined_f32mf2x4();
}

vfloat32mf2x5_t test_vundefined_f32mf2x5() {
  return __riscv_vundefined_f32mf2x5();
}

vfloat32mf2x6_t test_vundefined_f32mf2x6() {
  return __riscv_vundefined_f32mf2x6();
}

vfloat32mf2x7_t test_vundefined_f32mf2x7() {
  return __riscv_vundefined_f32mf2x7();
}

vfloat32mf2x8_t test_vundefined_f32mf2x8() {
  return __riscv_vundefined_f32mf2x8();
}

vfloat32m1x2_t test_vundefined_f32m1x2() {
  return __riscv_vundefined_f32m1x2();
}

vfloat32m1x3_t test_vundefined_f32m1x3() {
  return __riscv_vundefined_f32m1x3();
}

vfloat32m1x4_t test_vundefined_f32m1x4() {
  return __riscv_vundefined_f32m1x4();
}

vfloat32m1x5_t test_vundefined_f32m1x5() {
  return __riscv_vundefined_f32m1x5();
}

vfloat32m1x6_t test_vundefined_f32m1x6() {
  return __riscv_vundefined_f32m1x6();
}

vfloat32m1x7_t test_vundefined_f32m1x7() {
  return __riscv_vundefined_f32m1x7();
}

vfloat32m1x8_t test_vundefined_f32m1x8() {
  return __riscv_vundefined_f32m1x8();
}

vfloat32m2x2_t test_vundefined_f32m2x2() {
  return __riscv_vundefined_f32m2x2();
}

vfloat32m2x3_t test_vundefined_f32m2x3() {
  return __riscv_vundefined_f32m2x3();
}

vfloat32m2x4_t test_vundefined_f32m2x4() {
  return __riscv_vundefined_f32m2x4();
}

vfloat32m4x2_t test_vundefined_f32m4x2() {
  return __riscv_vundefined_f32m4x2();
}

vfloat64m1x2_t test_vundefined_f64m1x2() {
  return __riscv_vundefined_f64m1x2();
}

vfloat64m1x3_t test_vundefined_f64m1x3() {
  return __riscv_vundefined_f64m1x3();
}

vfloat64m1x4_t test_vundefined_f64m1x4() {
  return __riscv_vundefined_f64m1x4();
}

vfloat64m1x5_t test_vundefined_f64m1x5() {
  return __riscv_vundefined_f64m1x5();
}

vfloat64m1x6_t test_vundefined_f64m1x6() {
  return __riscv_vundefined_f64m1x6();
}

vfloat64m1x7_t test_vundefined_f64m1x7() {
  return __riscv_vundefined_f64m1x7();
}

vfloat64m1x8_t test_vundefined_f64m1x8() {
  return __riscv_vundefined_f64m1x8();
}

vfloat64m2x2_t test_vundefined_f64m2x2() {
  return __riscv_vundefined_f64m2x2();
}

vfloat64m2x3_t test_vundefined_f64m2x3() {
  return __riscv_vundefined_f64m2x3();
}

vfloat64m2x4_t test_vundefined_f64m2x4() {
  return __riscv_vundefined_f64m2x4();
}

vfloat64m4x2_t test_vundefined_f64m4x2() {
  return __riscv_vundefined_f64m4x2();
}

vint8mf8x2_t test_vundefined_i8mf8x2() { return __riscv_vundefined_i8mf8x2(); }

vint8mf8x3_t test_vundefined_i8mf8x3() { return __riscv_vundefined_i8mf8x3(); }

vint8mf8x4_t test_vundefined_i8mf8x4() { return __riscv_vundefined_i8mf8x4(); }

vint8mf8x5_t test_vundefined_i8mf8x5() { return __riscv_vundefined_i8mf8x5(); }

vint8mf8x6_t test_vundefined_i8mf8x6() { return __riscv_vundefined_i8mf8x6(); }

vint8mf8x7_t test_vundefined_i8mf8x7() { return __riscv_vundefined_i8mf8x7(); }

vint8mf8x8_t test_vundefined_i8mf8x8() { return __riscv_vundefined_i8mf8x8(); }

vint8mf4x2_t test_vundefined_i8mf4x2() { return __riscv_vundefined_i8mf4x2(); }

vint8mf4x3_t test_vundefined_i8mf4x3() { return __riscv_vundefined_i8mf4x3(); }

vint8mf4x4_t test_vundefined_i8mf4x4() { return __riscv_vundefined_i8mf4x4(); }

vint8mf4x5_t test_vundefined_i8mf4x5() { return __riscv_vundefined_i8mf4x5(); }

vint8mf4x6_t test_vundefined_i8mf4x6() { return __riscv_vundefined_i8mf4x6(); }

vint8mf4x7_t test_vundefined_i8mf4x7() { return __riscv_vundefined_i8mf4x7(); }

vint8mf4x8_t test_vundefined_i8mf4x8() { return __riscv_vundefined_i8mf4x8(); }

vint8mf2x2_t test_vundefined_i8mf2x2() { return __riscv_vundefined_i8mf2x2(); }

vint8mf2x3_t test_vundefined_i8mf2x3() { return __riscv_vundefined_i8mf2x3(); }

vint8mf2x4_t test_vundefined_i8mf2x4() { return __riscv_vundefined_i8mf2x4(); }

vint8mf2x5_t test_vundefined_i8mf2x5() { return __riscv_vundefined_i8mf2x5(); }

vint8mf2x6_t test_vundefined_i8mf2x6() { return __riscv_vundefined_i8mf2x6(); }

vint8mf2x7_t test_vundefined_i8mf2x7() { return __riscv_vundefined_i8mf2x7(); }

vint8mf2x8_t test_vundefined_i8mf2x8() { return __riscv_vundefined_i8mf2x8(); }

vint8m1x2_t test_vundefined_i8m1x2() { return __riscv_vundefined_i8m1x2(); }

vint8m1x3_t test_vundefined_i8m1x3() { return __riscv_vundefined_i8m1x3(); }

vint8m1x4_t test_vundefined_i8m1x4() { return __riscv_vundefined_i8m1x4(); }

vint8m1x5_t test_vundefined_i8m1x5() { return __riscv_vundefined_i8m1x5(); }

vint8m1x6_t test_vundefined_i8m1x6() { return __riscv_vundefined_i8m1x6(); }

vint8m1x7_t test_vundefined_i8m1x7() { return __riscv_vundefined_i8m1x7(); }

vint8m1x8_t test_vundefined_i8m1x8() { return __riscv_vundefined_i8m1x8(); }

vint8m2x2_t test_vundefined_i8m2x2() { return __riscv_vundefined_i8m2x2(); }

vint8m2x3_t test_vundefined_i8m2x3() { return __riscv_vundefined_i8m2x3(); }

vint8m2x4_t test_vundefined_i8m2x4() { return __riscv_vundefined_i8m2x4(); }

vint8m4x2_t test_vundefined_i8m4x2() { return __riscv_vundefined_i8m4x2(); }

vint16mf4x2_t test_vundefined_i16mf4x2() {
  return __riscv_vundefined_i16mf4x2();
}

vint16mf4x3_t test_vundefined_i16mf4x3() {
  return __riscv_vundefined_i16mf4x3();
}

vint16mf4x4_t test_vundefined_i16mf4x4() {
  return __riscv_vundefined_i16mf4x4();
}

vint16mf4x5_t test_vundefined_i16mf4x5() {
  return __riscv_vundefined_i16mf4x5();
}

vint16mf4x6_t test_vundefined_i16mf4x6() {
  return __riscv_vundefined_i16mf4x6();
}

vint16mf4x7_t test_vundefined_i16mf4x7() {
  return __riscv_vundefined_i16mf4x7();
}

vint16mf4x8_t test_vundefined_i16mf4x8() {
  return __riscv_vundefined_i16mf4x8();
}

vint16mf2x2_t test_vundefined_i16mf2x2() {
  return __riscv_vundefined_i16mf2x2();
}

vint16mf2x3_t test_vundefined_i16mf2x3() {
  return __riscv_vundefined_i16mf2x3();
}

vint16mf2x4_t test_vundefined_i16mf2x4() {
  return __riscv_vundefined_i16mf2x4();
}

vint16mf2x5_t test_vundefined_i16mf2x5() {
  return __riscv_vundefined_i16mf2x5();
}

vint16mf2x6_t test_vundefined_i16mf2x6() {
  return __riscv_vundefined_i16mf2x6();
}

vint16mf2x7_t test_vundefined_i16mf2x7() {
  return __riscv_vundefined_i16mf2x7();
}

vint16mf2x8_t test_vundefined_i16mf2x8() {
  return __riscv_vundefined_i16mf2x8();
}

vint16m1x2_t test_vundefined_i16m1x2() { return __riscv_vundefined_i16m1x2(); }

vint16m1x3_t test_vundefined_i16m1x3() { return __riscv_vundefined_i16m1x3(); }

vint16m1x4_t test_vundefined_i16m1x4() { return __riscv_vundefined_i16m1x4(); }

vint16m1x5_t test_vundefined_i16m1x5() { return __riscv_vundefined_i16m1x5(); }

vint16m1x6_t test_vundefined_i16m1x6() { return __riscv_vundefined_i16m1x6(); }

vint16m1x7_t test_vundefined_i16m1x7() { return __riscv_vundefined_i16m1x7(); }

vint16m1x8_t test_vundefined_i16m1x8() { return __riscv_vundefined_i16m1x8(); }

vint16m2x2_t test_vundefined_i16m2x2() { return __riscv_vundefined_i16m2x2(); }

vint16m2x3_t test_vundefined_i16m2x3() { return __riscv_vundefined_i16m2x3(); }

vint16m2x4_t test_vundefined_i16m2x4() { return __riscv_vundefined_i16m2x4(); }

vint16m4x2_t test_vundefined_i16m4x2() { return __riscv_vundefined_i16m4x2(); }

vint32mf2x2_t test_vundefined_i32mf2x2() {
  return __riscv_vundefined_i32mf2x2();
}

vint32mf2x3_t test_vundefined_i32mf2x3() {
  return __riscv_vundefined_i32mf2x3();
}

vint32mf2x4_t test_vundefined_i32mf2x4() {
  return __riscv_vundefined_i32mf2x4();
}

vint32mf2x5_t test_vundefined_i32mf2x5() {
  return __riscv_vundefined_i32mf2x5();
}

vint32mf2x6_t test_vundefined_i32mf2x6() {
  return __riscv_vundefined_i32mf2x6();
}

vint32mf2x7_t test_vundefined_i32mf2x7() {
  return __riscv_vundefined_i32mf2x7();
}

vint32mf2x8_t test_vundefined_i32mf2x8() {
  return __riscv_vundefined_i32mf2x8();
}

vint32m1x2_t test_vundefined_i32m1x2() { return __riscv_vundefined_i32m1x2(); }

vint32m1x3_t test_vundefined_i32m1x3() { return __riscv_vundefined_i32m1x3(); }

vint32m1x4_t test_vundefined_i32m1x4() { return __riscv_vundefined_i32m1x4(); }

vint32m1x5_t test_vundefined_i32m1x5() { return __riscv_vundefined_i32m1x5(); }

vint32m1x6_t test_vundefined_i32m1x6() { return __riscv_vundefined_i32m1x6(); }

vint32m1x7_t test_vundefined_i32m1x7() { return __riscv_vundefined_i32m1x7(); }

vint32m1x8_t test_vundefined_i32m1x8() { return __riscv_vundefined_i32m1x8(); }

vint32m2x2_t test_vundefined_i32m2x2() { return __riscv_vundefined_i32m2x2(); }

vint32m2x3_t test_vundefined_i32m2x3() { return __riscv_vundefined_i32m2x3(); }

vint32m2x4_t test_vundefined_i32m2x4() { return __riscv_vundefined_i32m2x4(); }

vint32m4x2_t test_vundefined_i32m4x2() { return __riscv_vundefined_i32m4x2(); }

vint64m1x2_t test_vundefined_i64m1x2() { return __riscv_vundefined_i64m1x2(); }

vint64m1x3_t test_vundefined_i64m1x3() { return __riscv_vundefined_i64m1x3(); }

vint64m1x4_t test_vundefined_i64m1x4() { return __riscv_vundefined_i64m1x4(); }

vint64m1x5_t test_vundefined_i64m1x5() { return __riscv_vundefined_i64m1x5(); }

vint64m1x6_t test_vundefined_i64m1x6() { return __riscv_vundefined_i64m1x6(); }

vint64m1x7_t test_vundefined_i64m1x7() { return __riscv_vundefined_i64m1x7(); }

vint64m1x8_t test_vundefined_i64m1x8() { return __riscv_vundefined_i64m1x8(); }

vint64m2x2_t test_vundefined_i64m2x2() { return __riscv_vundefined_i64m2x2(); }

vint64m2x3_t test_vundefined_i64m2x3() { return __riscv_vundefined_i64m2x3(); }

vint64m2x4_t test_vundefined_i64m2x4() { return __riscv_vundefined_i64m2x4(); }

vint64m4x2_t test_vundefined_i64m4x2() { return __riscv_vundefined_i64m4x2(); }

vuint8mf8x2_t test_vundefined_u8mf8x2() { return __riscv_vundefined_u8mf8x2(); }

vuint8mf8x3_t test_vundefined_u8mf8x3() { return __riscv_vundefined_u8mf8x3(); }

vuint8mf8x4_t test_vundefined_u8mf8x4() { return __riscv_vundefined_u8mf8x4(); }

vuint8mf8x5_t test_vundefined_u8mf8x5() { return __riscv_vundefined_u8mf8x5(); }

vuint8mf8x6_t test_vundefined_u8mf8x6() { return __riscv_vundefined_u8mf8x6(); }

vuint8mf8x7_t test_vundefined_u8mf8x7() { return __riscv_vundefined_u8mf8x7(); }

vuint8mf8x8_t test_vundefined_u8mf8x8() { return __riscv_vundefined_u8mf8x8(); }

vuint8mf4x2_t test_vundefined_u8mf4x2() { return __riscv_vundefined_u8mf4x2(); }

vuint8mf4x3_t test_vundefined_u8mf4x3() { return __riscv_vundefined_u8mf4x3(); }

vuint8mf4x4_t test_vundefined_u8mf4x4() { return __riscv_vundefined_u8mf4x4(); }

vuint8mf4x5_t test_vundefined_u8mf4x5() { return __riscv_vundefined_u8mf4x5(); }

vuint8mf4x6_t test_vundefined_u8mf4x6() { return __riscv_vundefined_u8mf4x6(); }

vuint8mf4x7_t test_vundefined_u8mf4x7() { return __riscv_vundefined_u8mf4x7(); }

vuint8mf4x8_t test_vundefined_u8mf4x8() { return __riscv_vundefined_u8mf4x8(); }

vuint8mf2x2_t test_vundefined_u8mf2x2() { return __riscv_vundefined_u8mf2x2(); }

vuint8mf2x3_t test_vundefined_u8mf2x3() { return __riscv_vundefined_u8mf2x3(); }

vuint8mf2x4_t test_vundefined_u8mf2x4() { return __riscv_vundefined_u8mf2x4(); }

vuint8mf2x5_t test_vundefined_u8mf2x5() { return __riscv_vundefined_u8mf2x5(); }

vuint8mf2x6_t test_vundefined_u8mf2x6() { return __riscv_vundefined_u8mf2x6(); }

vuint8mf2x7_t test_vundefined_u8mf2x7() { return __riscv_vundefined_u8mf2x7(); }

vuint8mf2x8_t test_vundefined_u8mf2x8() { return __riscv_vundefined_u8mf2x8(); }

vuint8m1x2_t test_vundefined_u8m1x2() { return __riscv_vundefined_u8m1x2(); }

vuint8m1x3_t test_vundefined_u8m1x3() { return __riscv_vundefined_u8m1x3(); }

vuint8m1x4_t test_vundefined_u8m1x4() { return __riscv_vundefined_u8m1x4(); }

vuint8m1x5_t test_vundefined_u8m1x5() { return __riscv_vundefined_u8m1x5(); }

vuint8m1x6_t test_vundefined_u8m1x6() { return __riscv_vundefined_u8m1x6(); }

vuint8m1x7_t test_vundefined_u8m1x7() { return __riscv_vundefined_u8m1x7(); }

vuint8m1x8_t test_vundefined_u8m1x8() { return __riscv_vundefined_u8m1x8(); }

vuint8m2x2_t test_vundefined_u8m2x2() { return __riscv_vundefined_u8m2x2(); }

vuint8m2x3_t test_vundefined_u8m2x3() { return __riscv_vundefined_u8m2x3(); }

vuint8m2x4_t test_vundefined_u8m2x4() { return __riscv_vundefined_u8m2x4(); }

vuint8m4x2_t test_vundefined_u8m4x2() { return __riscv_vundefined_u8m4x2(); }

vuint16mf4x2_t test_vundefined_u16mf4x2() {
  return __riscv_vundefined_u16mf4x2();
}

vuint16mf4x3_t test_vundefined_u16mf4x3() {
  return __riscv_vundefined_u16mf4x3();
}

vuint16mf4x4_t test_vundefined_u16mf4x4() {
  return __riscv_vundefined_u16mf4x4();
}

vuint16mf4x5_t test_vundefined_u16mf4x5() {
  return __riscv_vundefined_u16mf4x5();
}

vuint16mf4x6_t test_vundefined_u16mf4x6() {
  return __riscv_vundefined_u16mf4x6();
}

vuint16mf4x7_t test_vundefined_u16mf4x7() {
  return __riscv_vundefined_u16mf4x7();
}

vuint16mf4x8_t test_vundefined_u16mf4x8() {
  return __riscv_vundefined_u16mf4x8();
}

vuint16mf2x2_t test_vundefined_u16mf2x2() {
  return __riscv_vundefined_u16mf2x2();
}

vuint16mf2x3_t test_vundefined_u16mf2x3() {
  return __riscv_vundefined_u16mf2x3();
}

vuint16mf2x4_t test_vundefined_u16mf2x4() {
  return __riscv_vundefined_u16mf2x4();
}

vuint16mf2x5_t test_vundefined_u16mf2x5() {
  return __riscv_vundefined_u16mf2x5();
}

vuint16mf2x6_t test_vundefined_u16mf2x6() {
  return __riscv_vundefined_u16mf2x6();
}

vuint16mf2x7_t test_vundefined_u16mf2x7() {
  return __riscv_vundefined_u16mf2x7();
}

vuint16mf2x8_t test_vundefined_u16mf2x8() {
  return __riscv_vundefined_u16mf2x8();
}

vuint16m1x2_t test_vundefined_u16m1x2() { return __riscv_vundefined_u16m1x2(); }

vuint16m1x3_t test_vundefined_u16m1x3() { return __riscv_vundefined_u16m1x3(); }

vuint16m1x4_t test_vundefined_u16m1x4() { return __riscv_vundefined_u16m1x4(); }

vuint16m1x5_t test_vundefined_u16m1x5() { return __riscv_vundefined_u16m1x5(); }

vuint16m1x6_t test_vundefined_u16m1x6() { return __riscv_vundefined_u16m1x6(); }

vuint16m1x7_t test_vundefined_u16m1x7() { return __riscv_vundefined_u16m1x7(); }

vuint16m1x8_t test_vundefined_u16m1x8() { return __riscv_vundefined_u16m1x8(); }

vuint16m2x2_t test_vundefined_u16m2x2() { return __riscv_vundefined_u16m2x2(); }

vuint16m2x3_t test_vundefined_u16m2x3() { return __riscv_vundefined_u16m2x3(); }

vuint16m2x4_t test_vundefined_u16m2x4() { return __riscv_vundefined_u16m2x4(); }

vuint16m4x2_t test_vundefined_u16m4x2() { return __riscv_vundefined_u16m4x2(); }

vuint32mf2x2_t test_vundefined_u32mf2x2() {
  return __riscv_vundefined_u32mf2x2();
}

vuint32mf2x3_t test_vundefined_u32mf2x3() {
  return __riscv_vundefined_u32mf2x3();
}

vuint32mf2x4_t test_vundefined_u32mf2x4() {
  return __riscv_vundefined_u32mf2x4();
}

vuint32mf2x5_t test_vundefined_u32mf2x5() {
  return __riscv_vundefined_u32mf2x5();
}

vuint32mf2x6_t test_vundefined_u32mf2x6() {
  return __riscv_vundefined_u32mf2x6();
}

vuint32mf2x7_t test_vundefined_u32mf2x7() {
  return __riscv_vundefined_u32mf2x7();
}

vuint32mf2x8_t test_vundefined_u32mf2x8() {
  return __riscv_vundefined_u32mf2x8();
}

vuint32m1x2_t test_vundefined_u32m1x2() { return __riscv_vundefined_u32m1x2(); }

vuint32m1x3_t test_vundefined_u32m1x3() { return __riscv_vundefined_u32m1x3(); }

vuint32m1x4_t test_vundefined_u32m1x4() { return __riscv_vundefined_u32m1x4(); }

vuint32m1x5_t test_vundefined_u32m1x5() { return __riscv_vundefined_u32m1x5(); }

vuint32m1x6_t test_vundefined_u32m1x6() { return __riscv_vundefined_u32m1x6(); }

vuint32m1x7_t test_vundefined_u32m1x7() { return __riscv_vundefined_u32m1x7(); }

vuint32m1x8_t test_vundefined_u32m1x8() { return __riscv_vundefined_u32m1x8(); }

vuint32m2x2_t test_vundefined_u32m2x2() { return __riscv_vundefined_u32m2x2(); }

vuint32m2x3_t test_vundefined_u32m2x3() { return __riscv_vundefined_u32m2x3(); }

vuint32m2x4_t test_vundefined_u32m2x4() { return __riscv_vundefined_u32m2x4(); }

vuint32m4x2_t test_vundefined_u32m4x2() { return __riscv_vundefined_u32m4x2(); }

vuint64m1x2_t test_vundefined_u64m1x2() { return __riscv_vundefined_u64m1x2(); }

vuint64m1x3_t test_vundefined_u64m1x3() { return __riscv_vundefined_u64m1x3(); }

vuint64m1x4_t test_vundefined_u64m1x4() { return __riscv_vundefined_u64m1x4(); }

vuint64m1x5_t test_vundefined_u64m1x5() { return __riscv_vundefined_u64m1x5(); }

vuint64m1x6_t test_vundefined_u64m1x6() { return __riscv_vundefined_u64m1x6(); }

vuint64m1x7_t test_vundefined_u64m1x7() { return __riscv_vundefined_u64m1x7(); }

vuint64m1x8_t test_vundefined_u64m1x8() { return __riscv_vundefined_u64m1x8(); }

vuint64m2x2_t test_vundefined_u64m2x2() { return __riscv_vundefined_u64m2x2(); }

vuint64m2x3_t test_vundefined_u64m2x3() { return __riscv_vundefined_u64m2x3(); }

vuint64m2x4_t test_vundefined_u64m2x4() { return __riscv_vundefined_u64m2x4(); }

vuint64m4x2_t test_vundefined_u64m4x2() { return __riscv_vundefined_u64m4x2(); }
