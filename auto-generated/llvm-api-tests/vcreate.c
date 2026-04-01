// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16m2_t test_vcreate_v_f16m1_f16m2(vfloat16m1_t v0, vfloat16m1_t v1) {
  return __riscv_vcreate_v_f16m1_f16m2(v0, v1);
}

vfloat16m4_t test_vcreate_v_f16m1_f16m4(vfloat16m1_t v0, vfloat16m1_t v1,
                                        vfloat16m1_t v2, vfloat16m1_t v3) {
  return __riscv_vcreate_v_f16m1_f16m4(v0, v1, v2, v3);
}

vfloat16m8_t test_vcreate_v_f16m1_f16m8(vfloat16m1_t v0, vfloat16m1_t v1,
                                        vfloat16m1_t v2, vfloat16m1_t v3,
                                        vfloat16m1_t v4, vfloat16m1_t v5,
                                        vfloat16m1_t v6, vfloat16m1_t v7) {
  return __riscv_vcreate_v_f16m1_f16m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16m4_t test_vcreate_v_f16m2_f16m4(vfloat16m2_t v0, vfloat16m2_t v1) {
  return __riscv_vcreate_v_f16m2_f16m4(v0, v1);
}

vfloat16m8_t test_vcreate_v_f16m2_f16m8(vfloat16m2_t v0, vfloat16m2_t v1,
                                        vfloat16m2_t v2, vfloat16m2_t v3) {
  return __riscv_vcreate_v_f16m2_f16m8(v0, v1, v2, v3);
}

vfloat16m8_t test_vcreate_v_f16m4_f16m8(vfloat16m4_t v0, vfloat16m4_t v1) {
  return __riscv_vcreate_v_f16m4_f16m8(v0, v1);
}

vfloat32m2_t test_vcreate_v_f32m1_f32m2(vfloat32m1_t v0, vfloat32m1_t v1) {
  return __riscv_vcreate_v_f32m1_f32m2(v0, v1);
}

vfloat32m4_t test_vcreate_v_f32m1_f32m4(vfloat32m1_t v0, vfloat32m1_t v1,
                                        vfloat32m1_t v2, vfloat32m1_t v3) {
  return __riscv_vcreate_v_f32m1_f32m4(v0, v1, v2, v3);
}

vfloat32m8_t test_vcreate_v_f32m1_f32m8(vfloat32m1_t v0, vfloat32m1_t v1,
                                        vfloat32m1_t v2, vfloat32m1_t v3,
                                        vfloat32m1_t v4, vfloat32m1_t v5,
                                        vfloat32m1_t v6, vfloat32m1_t v7) {
  return __riscv_vcreate_v_f32m1_f32m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat32m4_t test_vcreate_v_f32m2_f32m4(vfloat32m2_t v0, vfloat32m2_t v1) {
  return __riscv_vcreate_v_f32m2_f32m4(v0, v1);
}

vfloat32m8_t test_vcreate_v_f32m2_f32m8(vfloat32m2_t v0, vfloat32m2_t v1,
                                        vfloat32m2_t v2, vfloat32m2_t v3) {
  return __riscv_vcreate_v_f32m2_f32m8(v0, v1, v2, v3);
}

vfloat32m8_t test_vcreate_v_f32m4_f32m8(vfloat32m4_t v0, vfloat32m4_t v1) {
  return __riscv_vcreate_v_f32m4_f32m8(v0, v1);
}

vfloat64m2_t test_vcreate_v_f64m1_f64m2(vfloat64m1_t v0, vfloat64m1_t v1) {
  return __riscv_vcreate_v_f64m1_f64m2(v0, v1);
}

vfloat64m4_t test_vcreate_v_f64m1_f64m4(vfloat64m1_t v0, vfloat64m1_t v1,
                                        vfloat64m1_t v2, vfloat64m1_t v3) {
  return __riscv_vcreate_v_f64m1_f64m4(v0, v1, v2, v3);
}

vfloat64m8_t test_vcreate_v_f64m1_f64m8(vfloat64m1_t v0, vfloat64m1_t v1,
                                        vfloat64m1_t v2, vfloat64m1_t v3,
                                        vfloat64m1_t v4, vfloat64m1_t v5,
                                        vfloat64m1_t v6, vfloat64m1_t v7) {
  return __riscv_vcreate_v_f64m1_f64m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat64m4_t test_vcreate_v_f64m2_f64m4(vfloat64m2_t v0, vfloat64m2_t v1) {
  return __riscv_vcreate_v_f64m2_f64m4(v0, v1);
}

vfloat64m8_t test_vcreate_v_f64m2_f64m8(vfloat64m2_t v0, vfloat64m2_t v1,
                                        vfloat64m2_t v2, vfloat64m2_t v3) {
  return __riscv_vcreate_v_f64m2_f64m8(v0, v1, v2, v3);
}

vfloat64m8_t test_vcreate_v_f64m4_f64m8(vfloat64m4_t v0, vfloat64m4_t v1) {
  return __riscv_vcreate_v_f64m4_f64m8(v0, v1);
}

vint8m2_t test_vcreate_v_i8m1_i8m2(vint8m1_t v0, vint8m1_t v1) {
  return __riscv_vcreate_v_i8m1_i8m2(v0, v1);
}

vint8m4_t test_vcreate_v_i8m1_i8m4(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2,
                                   vint8m1_t v3) {
  return __riscv_vcreate_v_i8m1_i8m4(v0, v1, v2, v3);
}

vint8m8_t test_vcreate_v_i8m1_i8m8(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2,
                                   vint8m1_t v3, vint8m1_t v4, vint8m1_t v5,
                                   vint8m1_t v6, vint8m1_t v7) {
  return __riscv_vcreate_v_i8m1_i8m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint8m4_t test_vcreate_v_i8m2_i8m4(vint8m2_t v0, vint8m2_t v1) {
  return __riscv_vcreate_v_i8m2_i8m4(v0, v1);
}

vint8m8_t test_vcreate_v_i8m2_i8m8(vint8m2_t v0, vint8m2_t v1, vint8m2_t v2,
                                   vint8m2_t v3) {
  return __riscv_vcreate_v_i8m2_i8m8(v0, v1, v2, v3);
}

vint8m8_t test_vcreate_v_i8m4_i8m8(vint8m4_t v0, vint8m4_t v1) {
  return __riscv_vcreate_v_i8m4_i8m8(v0, v1);
}

vint16m2_t test_vcreate_v_i16m1_i16m2(vint16m1_t v0, vint16m1_t v1) {
  return __riscv_vcreate_v_i16m1_i16m2(v0, v1);
}

vint16m4_t test_vcreate_v_i16m1_i16m4(vint16m1_t v0, vint16m1_t v1,
                                      vint16m1_t v2, vint16m1_t v3) {
  return __riscv_vcreate_v_i16m1_i16m4(v0, v1, v2, v3);
}

vint16m8_t test_vcreate_v_i16m1_i16m8(vint16m1_t v0, vint16m1_t v1,
                                      vint16m1_t v2, vint16m1_t v3,
                                      vint16m1_t v4, vint16m1_t v5,
                                      vint16m1_t v6, vint16m1_t v7) {
  return __riscv_vcreate_v_i16m1_i16m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint16m4_t test_vcreate_v_i16m2_i16m4(vint16m2_t v0, vint16m2_t v1) {
  return __riscv_vcreate_v_i16m2_i16m4(v0, v1);
}

vint16m8_t test_vcreate_v_i16m2_i16m8(vint16m2_t v0, vint16m2_t v1,
                                      vint16m2_t v2, vint16m2_t v3) {
  return __riscv_vcreate_v_i16m2_i16m8(v0, v1, v2, v3);
}

vint16m8_t test_vcreate_v_i16m4_i16m8(vint16m4_t v0, vint16m4_t v1) {
  return __riscv_vcreate_v_i16m4_i16m8(v0, v1);
}

vint32m2_t test_vcreate_v_i32m1_i32m2(vint32m1_t v0, vint32m1_t v1) {
  return __riscv_vcreate_v_i32m1_i32m2(v0, v1);
}

vint32m4_t test_vcreate_v_i32m1_i32m4(vint32m1_t v0, vint32m1_t v1,
                                      vint32m1_t v2, vint32m1_t v3) {
  return __riscv_vcreate_v_i32m1_i32m4(v0, v1, v2, v3);
}

vint32m8_t test_vcreate_v_i32m1_i32m8(vint32m1_t v0, vint32m1_t v1,
                                      vint32m1_t v2, vint32m1_t v3,
                                      vint32m1_t v4, vint32m1_t v5,
                                      vint32m1_t v6, vint32m1_t v7) {
  return __riscv_vcreate_v_i32m1_i32m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint32m4_t test_vcreate_v_i32m2_i32m4(vint32m2_t v0, vint32m2_t v1) {
  return __riscv_vcreate_v_i32m2_i32m4(v0, v1);
}

vint32m8_t test_vcreate_v_i32m2_i32m8(vint32m2_t v0, vint32m2_t v1,
                                      vint32m2_t v2, vint32m2_t v3) {
  return __riscv_vcreate_v_i32m2_i32m8(v0, v1, v2, v3);
}

vint32m8_t test_vcreate_v_i32m4_i32m8(vint32m4_t v0, vint32m4_t v1) {
  return __riscv_vcreate_v_i32m4_i32m8(v0, v1);
}

vint64m2_t test_vcreate_v_i64m1_i64m2(vint64m1_t v0, vint64m1_t v1) {
  return __riscv_vcreate_v_i64m1_i64m2(v0, v1);
}

vint64m4_t test_vcreate_v_i64m1_i64m4(vint64m1_t v0, vint64m1_t v1,
                                      vint64m1_t v2, vint64m1_t v3) {
  return __riscv_vcreate_v_i64m1_i64m4(v0, v1, v2, v3);
}

vint64m8_t test_vcreate_v_i64m1_i64m8(vint64m1_t v0, vint64m1_t v1,
                                      vint64m1_t v2, vint64m1_t v3,
                                      vint64m1_t v4, vint64m1_t v5,
                                      vint64m1_t v6, vint64m1_t v7) {
  return __riscv_vcreate_v_i64m1_i64m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint64m4_t test_vcreate_v_i64m2_i64m4(vint64m2_t v0, vint64m2_t v1) {
  return __riscv_vcreate_v_i64m2_i64m4(v0, v1);
}

vint64m8_t test_vcreate_v_i64m2_i64m8(vint64m2_t v0, vint64m2_t v1,
                                      vint64m2_t v2, vint64m2_t v3) {
  return __riscv_vcreate_v_i64m2_i64m8(v0, v1, v2, v3);
}

vint64m8_t test_vcreate_v_i64m4_i64m8(vint64m4_t v0, vint64m4_t v1) {
  return __riscv_vcreate_v_i64m4_i64m8(v0, v1);
}

vuint8m2_t test_vcreate_v_u8m1_u8m2(vuint8m1_t v0, vuint8m1_t v1) {
  return __riscv_vcreate_v_u8m1_u8m2(v0, v1);
}

vuint8m4_t test_vcreate_v_u8m1_u8m4(vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2,
                                    vuint8m1_t v3) {
  return __riscv_vcreate_v_u8m1_u8m4(v0, v1, v2, v3);
}

vuint8m8_t test_vcreate_v_u8m1_u8m8(vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2,
                                    vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5,
                                    vuint8m1_t v6, vuint8m1_t v7) {
  return __riscv_vcreate_v_u8m1_u8m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint8m4_t test_vcreate_v_u8m2_u8m4(vuint8m2_t v0, vuint8m2_t v1) {
  return __riscv_vcreate_v_u8m2_u8m4(v0, v1);
}

vuint8m8_t test_vcreate_v_u8m2_u8m8(vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2,
                                    vuint8m2_t v3) {
  return __riscv_vcreate_v_u8m2_u8m8(v0, v1, v2, v3);
}

vuint8m8_t test_vcreate_v_u8m4_u8m8(vuint8m4_t v0, vuint8m4_t v1) {
  return __riscv_vcreate_v_u8m4_u8m8(v0, v1);
}

vuint16m2_t test_vcreate_v_u16m1_u16m2(vuint16m1_t v0, vuint16m1_t v1) {
  return __riscv_vcreate_v_u16m1_u16m2(v0, v1);
}

vuint16m4_t test_vcreate_v_u16m1_u16m4(vuint16m1_t v0, vuint16m1_t v1,
                                       vuint16m1_t v2, vuint16m1_t v3) {
  return __riscv_vcreate_v_u16m1_u16m4(v0, v1, v2, v3);
}

vuint16m8_t test_vcreate_v_u16m1_u16m8(vuint16m1_t v0, vuint16m1_t v1,
                                       vuint16m1_t v2, vuint16m1_t v3,
                                       vuint16m1_t v4, vuint16m1_t v5,
                                       vuint16m1_t v6, vuint16m1_t v7) {
  return __riscv_vcreate_v_u16m1_u16m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint16m4_t test_vcreate_v_u16m2_u16m4(vuint16m2_t v0, vuint16m2_t v1) {
  return __riscv_vcreate_v_u16m2_u16m4(v0, v1);
}

vuint16m8_t test_vcreate_v_u16m2_u16m8(vuint16m2_t v0, vuint16m2_t v1,
                                       vuint16m2_t v2, vuint16m2_t v3) {
  return __riscv_vcreate_v_u16m2_u16m8(v0, v1, v2, v3);
}

vuint16m8_t test_vcreate_v_u16m4_u16m8(vuint16m4_t v0, vuint16m4_t v1) {
  return __riscv_vcreate_v_u16m4_u16m8(v0, v1);
}

vuint32m2_t test_vcreate_v_u32m1_u32m2(vuint32m1_t v0, vuint32m1_t v1) {
  return __riscv_vcreate_v_u32m1_u32m2(v0, v1);
}

vuint32m4_t test_vcreate_v_u32m1_u32m4(vuint32m1_t v0, vuint32m1_t v1,
                                       vuint32m1_t v2, vuint32m1_t v3) {
  return __riscv_vcreate_v_u32m1_u32m4(v0, v1, v2, v3);
}

vuint32m8_t test_vcreate_v_u32m1_u32m8(vuint32m1_t v0, vuint32m1_t v1,
                                       vuint32m1_t v2, vuint32m1_t v3,
                                       vuint32m1_t v4, vuint32m1_t v5,
                                       vuint32m1_t v6, vuint32m1_t v7) {
  return __riscv_vcreate_v_u32m1_u32m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint32m4_t test_vcreate_v_u32m2_u32m4(vuint32m2_t v0, vuint32m2_t v1) {
  return __riscv_vcreate_v_u32m2_u32m4(v0, v1);
}

vuint32m8_t test_vcreate_v_u32m2_u32m8(vuint32m2_t v0, vuint32m2_t v1,
                                       vuint32m2_t v2, vuint32m2_t v3) {
  return __riscv_vcreate_v_u32m2_u32m8(v0, v1, v2, v3);
}

vuint32m8_t test_vcreate_v_u32m4_u32m8(vuint32m4_t v0, vuint32m4_t v1) {
  return __riscv_vcreate_v_u32m4_u32m8(v0, v1);
}

vuint64m2_t test_vcreate_v_u64m1_u64m2(vuint64m1_t v0, vuint64m1_t v1) {
  return __riscv_vcreate_v_u64m1_u64m2(v0, v1);
}

vuint64m4_t test_vcreate_v_u64m1_u64m4(vuint64m1_t v0, vuint64m1_t v1,
                                       vuint64m1_t v2, vuint64m1_t v3) {
  return __riscv_vcreate_v_u64m1_u64m4(v0, v1, v2, v3);
}

vuint64m8_t test_vcreate_v_u64m1_u64m8(vuint64m1_t v0, vuint64m1_t v1,
                                       vuint64m1_t v2, vuint64m1_t v3,
                                       vuint64m1_t v4, vuint64m1_t v5,
                                       vuint64m1_t v6, vuint64m1_t v7) {
  return __riscv_vcreate_v_u64m1_u64m8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint64m4_t test_vcreate_v_u64m2_u64m4(vuint64m2_t v0, vuint64m2_t v1) {
  return __riscv_vcreate_v_u64m2_u64m4(v0, v1);
}

vuint64m8_t test_vcreate_v_u64m2_u64m8(vuint64m2_t v0, vuint64m2_t v1,
                                       vuint64m2_t v2, vuint64m2_t v3) {
  return __riscv_vcreate_v_u64m2_u64m8(v0, v1, v2, v3);
}

vuint64m8_t test_vcreate_v_u64m4_u64m8(vuint64m4_t v0, vuint64m4_t v1) {
  return __riscv_vcreate_v_u64m4_u64m8(v0, v1);
}

vfloat16mf4x2_t test_vcreate_v_f16mf4x2(vfloat16mf4_t v0, vfloat16mf4_t v1) {
  return __riscv_vcreate_v_f16mf4x2(v0, v1);
}

vfloat16mf4x3_t test_vcreate_v_f16mf4x3(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2) {
  return __riscv_vcreate_v_f16mf4x3(v0, v1, v2);
}

vfloat16mf4x4_t test_vcreate_v_f16mf4x4(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3) {
  return __riscv_vcreate_v_f16mf4x4(v0, v1, v2, v3);
}

vfloat16mf4x5_t test_vcreate_v_f16mf4x5(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4) {
  return __riscv_vcreate_v_f16mf4x5(v0, v1, v2, v3, v4);
}

vfloat16mf4x6_t test_vcreate_v_f16mf4x6(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4, vfloat16mf4_t v5) {
  return __riscv_vcreate_v_f16mf4x6(v0, v1, v2, v3, v4, v5);
}

vfloat16mf4x7_t test_vcreate_v_f16mf4x7(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4, vfloat16mf4_t v5,
                                        vfloat16mf4_t v6) {
  return __riscv_vcreate_v_f16mf4x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat16mf4x8_t test_vcreate_v_f16mf4x8(vfloat16mf4_t v0, vfloat16mf4_t v1,
                                        vfloat16mf4_t v2, vfloat16mf4_t v3,
                                        vfloat16mf4_t v4, vfloat16mf4_t v5,
                                        vfloat16mf4_t v6, vfloat16mf4_t v7) {
  return __riscv_vcreate_v_f16mf4x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16mf2x2_t test_vcreate_v_f16mf2x2(vfloat16mf2_t v0, vfloat16mf2_t v1) {
  return __riscv_vcreate_v_f16mf2x2(v0, v1);
}

vfloat16mf2x3_t test_vcreate_v_f16mf2x3(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2) {
  return __riscv_vcreate_v_f16mf2x3(v0, v1, v2);
}

vfloat16mf2x4_t test_vcreate_v_f16mf2x4(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3) {
  return __riscv_vcreate_v_f16mf2x4(v0, v1, v2, v3);
}

vfloat16mf2x5_t test_vcreate_v_f16mf2x5(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4) {
  return __riscv_vcreate_v_f16mf2x5(v0, v1, v2, v3, v4);
}

vfloat16mf2x6_t test_vcreate_v_f16mf2x6(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4, vfloat16mf2_t v5) {
  return __riscv_vcreate_v_f16mf2x6(v0, v1, v2, v3, v4, v5);
}

vfloat16mf2x7_t test_vcreate_v_f16mf2x7(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4, vfloat16mf2_t v5,
                                        vfloat16mf2_t v6) {
  return __riscv_vcreate_v_f16mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat16mf2x8_t test_vcreate_v_f16mf2x8(vfloat16mf2_t v0, vfloat16mf2_t v1,
                                        vfloat16mf2_t v2, vfloat16mf2_t v3,
                                        vfloat16mf2_t v4, vfloat16mf2_t v5,
                                        vfloat16mf2_t v6, vfloat16mf2_t v7) {
  return __riscv_vcreate_v_f16mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16m1x2_t test_vcreate_v_f16m1x2(vfloat16m1_t v0, vfloat16m1_t v1) {
  return __riscv_vcreate_v_f16m1x2(v0, v1);
}

vfloat16m1x3_t test_vcreate_v_f16m1x3(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2) {
  return __riscv_vcreate_v_f16m1x3(v0, v1, v2);
}

vfloat16m1x4_t test_vcreate_v_f16m1x4(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3) {
  return __riscv_vcreate_v_f16m1x4(v0, v1, v2, v3);
}

vfloat16m1x5_t test_vcreate_v_f16m1x5(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4) {
  return __riscv_vcreate_v_f16m1x5(v0, v1, v2, v3, v4);
}

vfloat16m1x6_t test_vcreate_v_f16m1x6(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4, vfloat16m1_t v5) {
  return __riscv_vcreate_v_f16m1x6(v0, v1, v2, v3, v4, v5);
}

vfloat16m1x7_t test_vcreate_v_f16m1x7(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4, vfloat16m1_t v5,
                                      vfloat16m1_t v6) {
  return __riscv_vcreate_v_f16m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat16m1x8_t test_vcreate_v_f16m1x8(vfloat16m1_t v0, vfloat16m1_t v1,
                                      vfloat16m1_t v2, vfloat16m1_t v3,
                                      vfloat16m1_t v4, vfloat16m1_t v5,
                                      vfloat16m1_t v6, vfloat16m1_t v7) {
  return __riscv_vcreate_v_f16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat16m2x2_t test_vcreate_v_f16m2x2(vfloat16m2_t v0, vfloat16m2_t v1) {
  return __riscv_vcreate_v_f16m2x2(v0, v1);
}

vfloat16m2x3_t test_vcreate_v_f16m2x3(vfloat16m2_t v0, vfloat16m2_t v1,
                                      vfloat16m2_t v2) {
  return __riscv_vcreate_v_f16m2x3(v0, v1, v2);
}

vfloat16m2x4_t test_vcreate_v_f16m2x4(vfloat16m2_t v0, vfloat16m2_t v1,
                                      vfloat16m2_t v2, vfloat16m2_t v3) {
  return __riscv_vcreate_v_f16m2x4(v0, v1, v2, v3);
}

vfloat16m4x2_t test_vcreate_v_f16m4x2(vfloat16m4_t v0, vfloat16m4_t v1) {
  return __riscv_vcreate_v_f16m4x2(v0, v1);
}

vfloat32mf2x2_t test_vcreate_v_f32mf2x2(vfloat32mf2_t v0, vfloat32mf2_t v1) {
  return __riscv_vcreate_v_f32mf2x2(v0, v1);
}

vfloat32mf2x3_t test_vcreate_v_f32mf2x3(vfloat32mf2_t v0, vfloat32mf2_t v1,
                                        vfloat32mf2_t v2) {
  return __riscv_vcreate_v_f32mf2x3(v0, v1, v2);
}

vfloat32mf2x4_t test_vcreate_v_f32mf2x4(vfloat32mf2_t v0, vfloat32mf2_t v1,
                                        vfloat32mf2_t v2, vfloat32mf2_t v3) {
  return __riscv_vcreate_v_f32mf2x4(v0, v1, v2, v3);
}

vfloat32mf2x5_t test_vcreate_v_f32mf2x5(vfloat32mf2_t v0, vfloat32mf2_t v1,
                                        vfloat32mf2_t v2, vfloat32mf2_t v3,
                                        vfloat32mf2_t v4) {
  return __riscv_vcreate_v_f32mf2x5(v0, v1, v2, v3, v4);
}

vfloat32mf2x6_t test_vcreate_v_f32mf2x6(vfloat32mf2_t v0, vfloat32mf2_t v1,
                                        vfloat32mf2_t v2, vfloat32mf2_t v3,
                                        vfloat32mf2_t v4, vfloat32mf2_t v5) {
  return __riscv_vcreate_v_f32mf2x6(v0, v1, v2, v3, v4, v5);
}

vfloat32mf2x7_t test_vcreate_v_f32mf2x7(vfloat32mf2_t v0, vfloat32mf2_t v1,
                                        vfloat32mf2_t v2, vfloat32mf2_t v3,
                                        vfloat32mf2_t v4, vfloat32mf2_t v5,
                                        vfloat32mf2_t v6) {
  return __riscv_vcreate_v_f32mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat32mf2x8_t test_vcreate_v_f32mf2x8(vfloat32mf2_t v0, vfloat32mf2_t v1,
                                        vfloat32mf2_t v2, vfloat32mf2_t v3,
                                        vfloat32mf2_t v4, vfloat32mf2_t v5,
                                        vfloat32mf2_t v6, vfloat32mf2_t v7) {
  return __riscv_vcreate_v_f32mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat32m1x2_t test_vcreate_v_f32m1x2(vfloat32m1_t v0, vfloat32m1_t v1) {
  return __riscv_vcreate_v_f32m1x2(v0, v1);
}

vfloat32m1x3_t test_vcreate_v_f32m1x3(vfloat32m1_t v0, vfloat32m1_t v1,
                                      vfloat32m1_t v2) {
  return __riscv_vcreate_v_f32m1x3(v0, v1, v2);
}

vfloat32m1x4_t test_vcreate_v_f32m1x4(vfloat32m1_t v0, vfloat32m1_t v1,
                                      vfloat32m1_t v2, vfloat32m1_t v3) {
  return __riscv_vcreate_v_f32m1x4(v0, v1, v2, v3);
}

vfloat32m1x5_t test_vcreate_v_f32m1x5(vfloat32m1_t v0, vfloat32m1_t v1,
                                      vfloat32m1_t v2, vfloat32m1_t v3,
                                      vfloat32m1_t v4) {
  return __riscv_vcreate_v_f32m1x5(v0, v1, v2, v3, v4);
}

vfloat32m1x6_t test_vcreate_v_f32m1x6(vfloat32m1_t v0, vfloat32m1_t v1,
                                      vfloat32m1_t v2, vfloat32m1_t v3,
                                      vfloat32m1_t v4, vfloat32m1_t v5) {
  return __riscv_vcreate_v_f32m1x6(v0, v1, v2, v3, v4, v5);
}

vfloat32m1x7_t test_vcreate_v_f32m1x7(vfloat32m1_t v0, vfloat32m1_t v1,
                                      vfloat32m1_t v2, vfloat32m1_t v3,
                                      vfloat32m1_t v4, vfloat32m1_t v5,
                                      vfloat32m1_t v6) {
  return __riscv_vcreate_v_f32m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat32m1x8_t test_vcreate_v_f32m1x8(vfloat32m1_t v0, vfloat32m1_t v1,
                                      vfloat32m1_t v2, vfloat32m1_t v3,
                                      vfloat32m1_t v4, vfloat32m1_t v5,
                                      vfloat32m1_t v6, vfloat32m1_t v7) {
  return __riscv_vcreate_v_f32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat32m2x2_t test_vcreate_v_f32m2x2(vfloat32m2_t v0, vfloat32m2_t v1) {
  return __riscv_vcreate_v_f32m2x2(v0, v1);
}

vfloat32m2x3_t test_vcreate_v_f32m2x3(vfloat32m2_t v0, vfloat32m2_t v1,
                                      vfloat32m2_t v2) {
  return __riscv_vcreate_v_f32m2x3(v0, v1, v2);
}

vfloat32m2x4_t test_vcreate_v_f32m2x4(vfloat32m2_t v0, vfloat32m2_t v1,
                                      vfloat32m2_t v2, vfloat32m2_t v3) {
  return __riscv_vcreate_v_f32m2x4(v0, v1, v2, v3);
}

vfloat32m4x2_t test_vcreate_v_f32m4x2(vfloat32m4_t v0, vfloat32m4_t v1) {
  return __riscv_vcreate_v_f32m4x2(v0, v1);
}

vfloat64m1x2_t test_vcreate_v_f64m1x2(vfloat64m1_t v0, vfloat64m1_t v1) {
  return __riscv_vcreate_v_f64m1x2(v0, v1);
}

vfloat64m1x3_t test_vcreate_v_f64m1x3(vfloat64m1_t v0, vfloat64m1_t v1,
                                      vfloat64m1_t v2) {
  return __riscv_vcreate_v_f64m1x3(v0, v1, v2);
}

vfloat64m1x4_t test_vcreate_v_f64m1x4(vfloat64m1_t v0, vfloat64m1_t v1,
                                      vfloat64m1_t v2, vfloat64m1_t v3) {
  return __riscv_vcreate_v_f64m1x4(v0, v1, v2, v3);
}

vfloat64m1x5_t test_vcreate_v_f64m1x5(vfloat64m1_t v0, vfloat64m1_t v1,
                                      vfloat64m1_t v2, vfloat64m1_t v3,
                                      vfloat64m1_t v4) {
  return __riscv_vcreate_v_f64m1x5(v0, v1, v2, v3, v4);
}

vfloat64m1x6_t test_vcreate_v_f64m1x6(vfloat64m1_t v0, vfloat64m1_t v1,
                                      vfloat64m1_t v2, vfloat64m1_t v3,
                                      vfloat64m1_t v4, vfloat64m1_t v5) {
  return __riscv_vcreate_v_f64m1x6(v0, v1, v2, v3, v4, v5);
}

vfloat64m1x7_t test_vcreate_v_f64m1x7(vfloat64m1_t v0, vfloat64m1_t v1,
                                      vfloat64m1_t v2, vfloat64m1_t v3,
                                      vfloat64m1_t v4, vfloat64m1_t v5,
                                      vfloat64m1_t v6) {
  return __riscv_vcreate_v_f64m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vfloat64m1x8_t test_vcreate_v_f64m1x8(vfloat64m1_t v0, vfloat64m1_t v1,
                                      vfloat64m1_t v2, vfloat64m1_t v3,
                                      vfloat64m1_t v4, vfloat64m1_t v5,
                                      vfloat64m1_t v6, vfloat64m1_t v7) {
  return __riscv_vcreate_v_f64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vfloat64m2x2_t test_vcreate_v_f64m2x2(vfloat64m2_t v0, vfloat64m2_t v1) {
  return __riscv_vcreate_v_f64m2x2(v0, v1);
}

vfloat64m2x3_t test_vcreate_v_f64m2x3(vfloat64m2_t v0, vfloat64m2_t v1,
                                      vfloat64m2_t v2) {
  return __riscv_vcreate_v_f64m2x3(v0, v1, v2);
}

vfloat64m2x4_t test_vcreate_v_f64m2x4(vfloat64m2_t v0, vfloat64m2_t v1,
                                      vfloat64m2_t v2, vfloat64m2_t v3) {
  return __riscv_vcreate_v_f64m2x4(v0, v1, v2, v3);
}

vfloat64m4x2_t test_vcreate_v_f64m4x2(vfloat64m4_t v0, vfloat64m4_t v1) {
  return __riscv_vcreate_v_f64m4x2(v0, v1);
}

vint8mf8x2_t test_vcreate_v_i8mf8x2(vint8mf8_t v0, vint8mf8_t v1) {
  return __riscv_vcreate_v_i8mf8x2(v0, v1);
}

vint8mf8x3_t test_vcreate_v_i8mf8x3(vint8mf8_t v0, vint8mf8_t v1,
                                    vint8mf8_t v2) {
  return __riscv_vcreate_v_i8mf8x3(v0, v1, v2);
}

vint8mf8x4_t test_vcreate_v_i8mf8x4(vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2,
                                    vint8mf8_t v3) {
  return __riscv_vcreate_v_i8mf8x4(v0, v1, v2, v3);
}

vint8mf8x5_t test_vcreate_v_i8mf8x5(vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2,
                                    vint8mf8_t v3, vint8mf8_t v4) {
  return __riscv_vcreate_v_i8mf8x5(v0, v1, v2, v3, v4);
}

vint8mf8x6_t test_vcreate_v_i8mf8x6(vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2,
                                    vint8mf8_t v3, vint8mf8_t v4,
                                    vint8mf8_t v5) {
  return __riscv_vcreate_v_i8mf8x6(v0, v1, v2, v3, v4, v5);
}

vint8mf8x7_t test_vcreate_v_i8mf8x7(vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2,
                                    vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5,
                                    vint8mf8_t v6) {
  return __riscv_vcreate_v_i8mf8x7(v0, v1, v2, v3, v4, v5, v6);
}

vint8mf8x8_t test_vcreate_v_i8mf8x8(vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2,
                                    vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5,
                                    vint8mf8_t v6, vint8mf8_t v7) {
  return __riscv_vcreate_v_i8mf8x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint8mf4x2_t test_vcreate_v_i8mf4x2(vint8mf4_t v0, vint8mf4_t v1) {
  return __riscv_vcreate_v_i8mf4x2(v0, v1);
}

vint8mf4x3_t test_vcreate_v_i8mf4x3(vint8mf4_t v0, vint8mf4_t v1,
                                    vint8mf4_t v2) {
  return __riscv_vcreate_v_i8mf4x3(v0, v1, v2);
}

vint8mf4x4_t test_vcreate_v_i8mf4x4(vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2,
                                    vint8mf4_t v3) {
  return __riscv_vcreate_v_i8mf4x4(v0, v1, v2, v3);
}

vint8mf4x5_t test_vcreate_v_i8mf4x5(vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2,
                                    vint8mf4_t v3, vint8mf4_t v4) {
  return __riscv_vcreate_v_i8mf4x5(v0, v1, v2, v3, v4);
}

vint8mf4x6_t test_vcreate_v_i8mf4x6(vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2,
                                    vint8mf4_t v3, vint8mf4_t v4,
                                    vint8mf4_t v5) {
  return __riscv_vcreate_v_i8mf4x6(v0, v1, v2, v3, v4, v5);
}

vint8mf4x7_t test_vcreate_v_i8mf4x7(vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2,
                                    vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5,
                                    vint8mf4_t v6) {
  return __riscv_vcreate_v_i8mf4x7(v0, v1, v2, v3, v4, v5, v6);
}

vint8mf4x8_t test_vcreate_v_i8mf4x8(vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2,
                                    vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5,
                                    vint8mf4_t v6, vint8mf4_t v7) {
  return __riscv_vcreate_v_i8mf4x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint8mf2x2_t test_vcreate_v_i8mf2x2(vint8mf2_t v0, vint8mf2_t v1) {
  return __riscv_vcreate_v_i8mf2x2(v0, v1);
}

vint8mf2x3_t test_vcreate_v_i8mf2x3(vint8mf2_t v0, vint8mf2_t v1,
                                    vint8mf2_t v2) {
  return __riscv_vcreate_v_i8mf2x3(v0, v1, v2);
}

vint8mf2x4_t test_vcreate_v_i8mf2x4(vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2,
                                    vint8mf2_t v3) {
  return __riscv_vcreate_v_i8mf2x4(v0, v1, v2, v3);
}

vint8mf2x5_t test_vcreate_v_i8mf2x5(vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2,
                                    vint8mf2_t v3, vint8mf2_t v4) {
  return __riscv_vcreate_v_i8mf2x5(v0, v1, v2, v3, v4);
}

vint8mf2x6_t test_vcreate_v_i8mf2x6(vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2,
                                    vint8mf2_t v3, vint8mf2_t v4,
                                    vint8mf2_t v5) {
  return __riscv_vcreate_v_i8mf2x6(v0, v1, v2, v3, v4, v5);
}

vint8mf2x7_t test_vcreate_v_i8mf2x7(vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2,
                                    vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5,
                                    vint8mf2_t v6) {
  return __riscv_vcreate_v_i8mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vint8mf2x8_t test_vcreate_v_i8mf2x8(vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2,
                                    vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5,
                                    vint8mf2_t v6, vint8mf2_t v7) {
  return __riscv_vcreate_v_i8mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint8m1x2_t test_vcreate_v_i8m1x2(vint8m1_t v0, vint8m1_t v1) {
  return __riscv_vcreate_v_i8m1x2(v0, v1);
}

vint8m1x3_t test_vcreate_v_i8m1x3(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2) {
  return __riscv_vcreate_v_i8m1x3(v0, v1, v2);
}

vint8m1x4_t test_vcreate_v_i8m1x4(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2,
                                  vint8m1_t v3) {
  return __riscv_vcreate_v_i8m1x4(v0, v1, v2, v3);
}

vint8m1x5_t test_vcreate_v_i8m1x5(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2,
                                  vint8m1_t v3, vint8m1_t v4) {
  return __riscv_vcreate_v_i8m1x5(v0, v1, v2, v3, v4);
}

vint8m1x6_t test_vcreate_v_i8m1x6(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2,
                                  vint8m1_t v3, vint8m1_t v4, vint8m1_t v5) {
  return __riscv_vcreate_v_i8m1x6(v0, v1, v2, v3, v4, v5);
}

vint8m1x7_t test_vcreate_v_i8m1x7(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2,
                                  vint8m1_t v3, vint8m1_t v4, vint8m1_t v5,
                                  vint8m1_t v6) {
  return __riscv_vcreate_v_i8m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vint8m1x8_t test_vcreate_v_i8m1x8(vint8m1_t v0, vint8m1_t v1, vint8m1_t v2,
                                  vint8m1_t v3, vint8m1_t v4, vint8m1_t v5,
                                  vint8m1_t v6, vint8m1_t v7) {
  return __riscv_vcreate_v_i8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint8m2x2_t test_vcreate_v_i8m2x2(vint8m2_t v0, vint8m2_t v1) {
  return __riscv_vcreate_v_i8m2x2(v0, v1);
}

vint8m2x3_t test_vcreate_v_i8m2x3(vint8m2_t v0, vint8m2_t v1, vint8m2_t v2) {
  return __riscv_vcreate_v_i8m2x3(v0, v1, v2);
}

vint8m2x4_t test_vcreate_v_i8m2x4(vint8m2_t v0, vint8m2_t v1, vint8m2_t v2,
                                  vint8m2_t v3) {
  return __riscv_vcreate_v_i8m2x4(v0, v1, v2, v3);
}

vint8m4x2_t test_vcreate_v_i8m4x2(vint8m4_t v0, vint8m4_t v1) {
  return __riscv_vcreate_v_i8m4x2(v0, v1);
}

vint16mf4x2_t test_vcreate_v_i16mf4x2(vint16mf4_t v0, vint16mf4_t v1) {
  return __riscv_vcreate_v_i16mf4x2(v0, v1);
}

vint16mf4x3_t test_vcreate_v_i16mf4x3(vint16mf4_t v0, vint16mf4_t v1,
                                      vint16mf4_t v2) {
  return __riscv_vcreate_v_i16mf4x3(v0, v1, v2);
}

vint16mf4x4_t test_vcreate_v_i16mf4x4(vint16mf4_t v0, vint16mf4_t v1,
                                      vint16mf4_t v2, vint16mf4_t v3) {
  return __riscv_vcreate_v_i16mf4x4(v0, v1, v2, v3);
}

vint16mf4x5_t test_vcreate_v_i16mf4x5(vint16mf4_t v0, vint16mf4_t v1,
                                      vint16mf4_t v2, vint16mf4_t v3,
                                      vint16mf4_t v4) {
  return __riscv_vcreate_v_i16mf4x5(v0, v1, v2, v3, v4);
}

vint16mf4x6_t test_vcreate_v_i16mf4x6(vint16mf4_t v0, vint16mf4_t v1,
                                      vint16mf4_t v2, vint16mf4_t v3,
                                      vint16mf4_t v4, vint16mf4_t v5) {
  return __riscv_vcreate_v_i16mf4x6(v0, v1, v2, v3, v4, v5);
}

vint16mf4x7_t test_vcreate_v_i16mf4x7(vint16mf4_t v0, vint16mf4_t v1,
                                      vint16mf4_t v2, vint16mf4_t v3,
                                      vint16mf4_t v4, vint16mf4_t v5,
                                      vint16mf4_t v6) {
  return __riscv_vcreate_v_i16mf4x7(v0, v1, v2, v3, v4, v5, v6);
}

vint16mf4x8_t test_vcreate_v_i16mf4x8(vint16mf4_t v0, vint16mf4_t v1,
                                      vint16mf4_t v2, vint16mf4_t v3,
                                      vint16mf4_t v4, vint16mf4_t v5,
                                      vint16mf4_t v6, vint16mf4_t v7) {
  return __riscv_vcreate_v_i16mf4x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint16mf2x2_t test_vcreate_v_i16mf2x2(vint16mf2_t v0, vint16mf2_t v1) {
  return __riscv_vcreate_v_i16mf2x2(v0, v1);
}

vint16mf2x3_t test_vcreate_v_i16mf2x3(vint16mf2_t v0, vint16mf2_t v1,
                                      vint16mf2_t v2) {
  return __riscv_vcreate_v_i16mf2x3(v0, v1, v2);
}

vint16mf2x4_t test_vcreate_v_i16mf2x4(vint16mf2_t v0, vint16mf2_t v1,
                                      vint16mf2_t v2, vint16mf2_t v3) {
  return __riscv_vcreate_v_i16mf2x4(v0, v1, v2, v3);
}

vint16mf2x5_t test_vcreate_v_i16mf2x5(vint16mf2_t v0, vint16mf2_t v1,
                                      vint16mf2_t v2, vint16mf2_t v3,
                                      vint16mf2_t v4) {
  return __riscv_vcreate_v_i16mf2x5(v0, v1, v2, v3, v4);
}

vint16mf2x6_t test_vcreate_v_i16mf2x6(vint16mf2_t v0, vint16mf2_t v1,
                                      vint16mf2_t v2, vint16mf2_t v3,
                                      vint16mf2_t v4, vint16mf2_t v5) {
  return __riscv_vcreate_v_i16mf2x6(v0, v1, v2, v3, v4, v5);
}

vint16mf2x7_t test_vcreate_v_i16mf2x7(vint16mf2_t v0, vint16mf2_t v1,
                                      vint16mf2_t v2, vint16mf2_t v3,
                                      vint16mf2_t v4, vint16mf2_t v5,
                                      vint16mf2_t v6) {
  return __riscv_vcreate_v_i16mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vint16mf2x8_t test_vcreate_v_i16mf2x8(vint16mf2_t v0, vint16mf2_t v1,
                                      vint16mf2_t v2, vint16mf2_t v3,
                                      vint16mf2_t v4, vint16mf2_t v5,
                                      vint16mf2_t v6, vint16mf2_t v7) {
  return __riscv_vcreate_v_i16mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint16m1x2_t test_vcreate_v_i16m1x2(vint16m1_t v0, vint16m1_t v1) {
  return __riscv_vcreate_v_i16m1x2(v0, v1);
}

vint16m1x3_t test_vcreate_v_i16m1x3(vint16m1_t v0, vint16m1_t v1,
                                    vint16m1_t v2) {
  return __riscv_vcreate_v_i16m1x3(v0, v1, v2);
}

vint16m1x4_t test_vcreate_v_i16m1x4(vint16m1_t v0, vint16m1_t v1, vint16m1_t v2,
                                    vint16m1_t v3) {
  return __riscv_vcreate_v_i16m1x4(v0, v1, v2, v3);
}

vint16m1x5_t test_vcreate_v_i16m1x5(vint16m1_t v0, vint16m1_t v1, vint16m1_t v2,
                                    vint16m1_t v3, vint16m1_t v4) {
  return __riscv_vcreate_v_i16m1x5(v0, v1, v2, v3, v4);
}

vint16m1x6_t test_vcreate_v_i16m1x6(vint16m1_t v0, vint16m1_t v1, vint16m1_t v2,
                                    vint16m1_t v3, vint16m1_t v4,
                                    vint16m1_t v5) {
  return __riscv_vcreate_v_i16m1x6(v0, v1, v2, v3, v4, v5);
}

vint16m1x7_t test_vcreate_v_i16m1x7(vint16m1_t v0, vint16m1_t v1, vint16m1_t v2,
                                    vint16m1_t v3, vint16m1_t v4, vint16m1_t v5,
                                    vint16m1_t v6) {
  return __riscv_vcreate_v_i16m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vint16m1x8_t test_vcreate_v_i16m1x8(vint16m1_t v0, vint16m1_t v1, vint16m1_t v2,
                                    vint16m1_t v3, vint16m1_t v4, vint16m1_t v5,
                                    vint16m1_t v6, vint16m1_t v7) {
  return __riscv_vcreate_v_i16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint16m2x2_t test_vcreate_v_i16m2x2(vint16m2_t v0, vint16m2_t v1) {
  return __riscv_vcreate_v_i16m2x2(v0, v1);
}

vint16m2x3_t test_vcreate_v_i16m2x3(vint16m2_t v0, vint16m2_t v1,
                                    vint16m2_t v2) {
  return __riscv_vcreate_v_i16m2x3(v0, v1, v2);
}

vint16m2x4_t test_vcreate_v_i16m2x4(vint16m2_t v0, vint16m2_t v1, vint16m2_t v2,
                                    vint16m2_t v3) {
  return __riscv_vcreate_v_i16m2x4(v0, v1, v2, v3);
}

vint16m4x2_t test_vcreate_v_i16m4x2(vint16m4_t v0, vint16m4_t v1) {
  return __riscv_vcreate_v_i16m4x2(v0, v1);
}

vint32mf2x2_t test_vcreate_v_i32mf2x2(vint32mf2_t v0, vint32mf2_t v1) {
  return __riscv_vcreate_v_i32mf2x2(v0, v1);
}

vint32mf2x3_t test_vcreate_v_i32mf2x3(vint32mf2_t v0, vint32mf2_t v1,
                                      vint32mf2_t v2) {
  return __riscv_vcreate_v_i32mf2x3(v0, v1, v2);
}

vint32mf2x4_t test_vcreate_v_i32mf2x4(vint32mf2_t v0, vint32mf2_t v1,
                                      vint32mf2_t v2, vint32mf2_t v3) {
  return __riscv_vcreate_v_i32mf2x4(v0, v1, v2, v3);
}

vint32mf2x5_t test_vcreate_v_i32mf2x5(vint32mf2_t v0, vint32mf2_t v1,
                                      vint32mf2_t v2, vint32mf2_t v3,
                                      vint32mf2_t v4) {
  return __riscv_vcreate_v_i32mf2x5(v0, v1, v2, v3, v4);
}

vint32mf2x6_t test_vcreate_v_i32mf2x6(vint32mf2_t v0, vint32mf2_t v1,
                                      vint32mf2_t v2, vint32mf2_t v3,
                                      vint32mf2_t v4, vint32mf2_t v5) {
  return __riscv_vcreate_v_i32mf2x6(v0, v1, v2, v3, v4, v5);
}

vint32mf2x7_t test_vcreate_v_i32mf2x7(vint32mf2_t v0, vint32mf2_t v1,
                                      vint32mf2_t v2, vint32mf2_t v3,
                                      vint32mf2_t v4, vint32mf2_t v5,
                                      vint32mf2_t v6) {
  return __riscv_vcreate_v_i32mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vint32mf2x8_t test_vcreate_v_i32mf2x8(vint32mf2_t v0, vint32mf2_t v1,
                                      vint32mf2_t v2, vint32mf2_t v3,
                                      vint32mf2_t v4, vint32mf2_t v5,
                                      vint32mf2_t v6, vint32mf2_t v7) {
  return __riscv_vcreate_v_i32mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint32m1x2_t test_vcreate_v_i32m1x2(vint32m1_t v0, vint32m1_t v1) {
  return __riscv_vcreate_v_i32m1x2(v0, v1);
}

vint32m1x3_t test_vcreate_v_i32m1x3(vint32m1_t v0, vint32m1_t v1,
                                    vint32m1_t v2) {
  return __riscv_vcreate_v_i32m1x3(v0, v1, v2);
}

vint32m1x4_t test_vcreate_v_i32m1x4(vint32m1_t v0, vint32m1_t v1, vint32m1_t v2,
                                    vint32m1_t v3) {
  return __riscv_vcreate_v_i32m1x4(v0, v1, v2, v3);
}

vint32m1x5_t test_vcreate_v_i32m1x5(vint32m1_t v0, vint32m1_t v1, vint32m1_t v2,
                                    vint32m1_t v3, vint32m1_t v4) {
  return __riscv_vcreate_v_i32m1x5(v0, v1, v2, v3, v4);
}

vint32m1x6_t test_vcreate_v_i32m1x6(vint32m1_t v0, vint32m1_t v1, vint32m1_t v2,
                                    vint32m1_t v3, vint32m1_t v4,
                                    vint32m1_t v5) {
  return __riscv_vcreate_v_i32m1x6(v0, v1, v2, v3, v4, v5);
}

vint32m1x7_t test_vcreate_v_i32m1x7(vint32m1_t v0, vint32m1_t v1, vint32m1_t v2,
                                    vint32m1_t v3, vint32m1_t v4, vint32m1_t v5,
                                    vint32m1_t v6) {
  return __riscv_vcreate_v_i32m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vint32m1x8_t test_vcreate_v_i32m1x8(vint32m1_t v0, vint32m1_t v1, vint32m1_t v2,
                                    vint32m1_t v3, vint32m1_t v4, vint32m1_t v5,
                                    vint32m1_t v6, vint32m1_t v7) {
  return __riscv_vcreate_v_i32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint32m2x2_t test_vcreate_v_i32m2x2(vint32m2_t v0, vint32m2_t v1) {
  return __riscv_vcreate_v_i32m2x2(v0, v1);
}

vint32m2x3_t test_vcreate_v_i32m2x3(vint32m2_t v0, vint32m2_t v1,
                                    vint32m2_t v2) {
  return __riscv_vcreate_v_i32m2x3(v0, v1, v2);
}

vint32m2x4_t test_vcreate_v_i32m2x4(vint32m2_t v0, vint32m2_t v1, vint32m2_t v2,
                                    vint32m2_t v3) {
  return __riscv_vcreate_v_i32m2x4(v0, v1, v2, v3);
}

vint32m4x2_t test_vcreate_v_i32m4x2(vint32m4_t v0, vint32m4_t v1) {
  return __riscv_vcreate_v_i32m4x2(v0, v1);
}

vint64m1x2_t test_vcreate_v_i64m1x2(vint64m1_t v0, vint64m1_t v1) {
  return __riscv_vcreate_v_i64m1x2(v0, v1);
}

vint64m1x3_t test_vcreate_v_i64m1x3(vint64m1_t v0, vint64m1_t v1,
                                    vint64m1_t v2) {
  return __riscv_vcreate_v_i64m1x3(v0, v1, v2);
}

vint64m1x4_t test_vcreate_v_i64m1x4(vint64m1_t v0, vint64m1_t v1, vint64m1_t v2,
                                    vint64m1_t v3) {
  return __riscv_vcreate_v_i64m1x4(v0, v1, v2, v3);
}

vint64m1x5_t test_vcreate_v_i64m1x5(vint64m1_t v0, vint64m1_t v1, vint64m1_t v2,
                                    vint64m1_t v3, vint64m1_t v4) {
  return __riscv_vcreate_v_i64m1x5(v0, v1, v2, v3, v4);
}

vint64m1x6_t test_vcreate_v_i64m1x6(vint64m1_t v0, vint64m1_t v1, vint64m1_t v2,
                                    vint64m1_t v3, vint64m1_t v4,
                                    vint64m1_t v5) {
  return __riscv_vcreate_v_i64m1x6(v0, v1, v2, v3, v4, v5);
}

vint64m1x7_t test_vcreate_v_i64m1x7(vint64m1_t v0, vint64m1_t v1, vint64m1_t v2,
                                    vint64m1_t v3, vint64m1_t v4, vint64m1_t v5,
                                    vint64m1_t v6) {
  return __riscv_vcreate_v_i64m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vint64m1x8_t test_vcreate_v_i64m1x8(vint64m1_t v0, vint64m1_t v1, vint64m1_t v2,
                                    vint64m1_t v3, vint64m1_t v4, vint64m1_t v5,
                                    vint64m1_t v6, vint64m1_t v7) {
  return __riscv_vcreate_v_i64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vint64m2x2_t test_vcreate_v_i64m2x2(vint64m2_t v0, vint64m2_t v1) {
  return __riscv_vcreate_v_i64m2x2(v0, v1);
}

vint64m2x3_t test_vcreate_v_i64m2x3(vint64m2_t v0, vint64m2_t v1,
                                    vint64m2_t v2) {
  return __riscv_vcreate_v_i64m2x3(v0, v1, v2);
}

vint64m2x4_t test_vcreate_v_i64m2x4(vint64m2_t v0, vint64m2_t v1, vint64m2_t v2,
                                    vint64m2_t v3) {
  return __riscv_vcreate_v_i64m2x4(v0, v1, v2, v3);
}

vint64m4x2_t test_vcreate_v_i64m4x2(vint64m4_t v0, vint64m4_t v1) {
  return __riscv_vcreate_v_i64m4x2(v0, v1);
}

vuint8mf8x2_t test_vcreate_v_u8mf8x2(vuint8mf8_t v0, vuint8mf8_t v1) {
  return __riscv_vcreate_v_u8mf8x2(v0, v1);
}

vuint8mf8x3_t test_vcreate_v_u8mf8x3(vuint8mf8_t v0, vuint8mf8_t v1,
                                     vuint8mf8_t v2) {
  return __riscv_vcreate_v_u8mf8x3(v0, v1, v2);
}

vuint8mf8x4_t test_vcreate_v_u8mf8x4(vuint8mf8_t v0, vuint8mf8_t v1,
                                     vuint8mf8_t v2, vuint8mf8_t v3) {
  return __riscv_vcreate_v_u8mf8x4(v0, v1, v2, v3);
}

vuint8mf8x5_t test_vcreate_v_u8mf8x5(vuint8mf8_t v0, vuint8mf8_t v1,
                                     vuint8mf8_t v2, vuint8mf8_t v3,
                                     vuint8mf8_t v4) {
  return __riscv_vcreate_v_u8mf8x5(v0, v1, v2, v3, v4);
}

vuint8mf8x6_t test_vcreate_v_u8mf8x6(vuint8mf8_t v0, vuint8mf8_t v1,
                                     vuint8mf8_t v2, vuint8mf8_t v3,
                                     vuint8mf8_t v4, vuint8mf8_t v5) {
  return __riscv_vcreate_v_u8mf8x6(v0, v1, v2, v3, v4, v5);
}

vuint8mf8x7_t test_vcreate_v_u8mf8x7(vuint8mf8_t v0, vuint8mf8_t v1,
                                     vuint8mf8_t v2, vuint8mf8_t v3,
                                     vuint8mf8_t v4, vuint8mf8_t v5,
                                     vuint8mf8_t v6) {
  return __riscv_vcreate_v_u8mf8x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint8mf8x8_t test_vcreate_v_u8mf8x8(vuint8mf8_t v0, vuint8mf8_t v1,
                                     vuint8mf8_t v2, vuint8mf8_t v3,
                                     vuint8mf8_t v4, vuint8mf8_t v5,
                                     vuint8mf8_t v6, vuint8mf8_t v7) {
  return __riscv_vcreate_v_u8mf8x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint8mf4x2_t test_vcreate_v_u8mf4x2(vuint8mf4_t v0, vuint8mf4_t v1) {
  return __riscv_vcreate_v_u8mf4x2(v0, v1);
}

vuint8mf4x3_t test_vcreate_v_u8mf4x3(vuint8mf4_t v0, vuint8mf4_t v1,
                                     vuint8mf4_t v2) {
  return __riscv_vcreate_v_u8mf4x3(v0, v1, v2);
}

vuint8mf4x4_t test_vcreate_v_u8mf4x4(vuint8mf4_t v0, vuint8mf4_t v1,
                                     vuint8mf4_t v2, vuint8mf4_t v3) {
  return __riscv_vcreate_v_u8mf4x4(v0, v1, v2, v3);
}

vuint8mf4x5_t test_vcreate_v_u8mf4x5(vuint8mf4_t v0, vuint8mf4_t v1,
                                     vuint8mf4_t v2, vuint8mf4_t v3,
                                     vuint8mf4_t v4) {
  return __riscv_vcreate_v_u8mf4x5(v0, v1, v2, v3, v4);
}

vuint8mf4x6_t test_vcreate_v_u8mf4x6(vuint8mf4_t v0, vuint8mf4_t v1,
                                     vuint8mf4_t v2, vuint8mf4_t v3,
                                     vuint8mf4_t v4, vuint8mf4_t v5) {
  return __riscv_vcreate_v_u8mf4x6(v0, v1, v2, v3, v4, v5);
}

vuint8mf4x7_t test_vcreate_v_u8mf4x7(vuint8mf4_t v0, vuint8mf4_t v1,
                                     vuint8mf4_t v2, vuint8mf4_t v3,
                                     vuint8mf4_t v4, vuint8mf4_t v5,
                                     vuint8mf4_t v6) {
  return __riscv_vcreate_v_u8mf4x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint8mf4x8_t test_vcreate_v_u8mf4x8(vuint8mf4_t v0, vuint8mf4_t v1,
                                     vuint8mf4_t v2, vuint8mf4_t v3,
                                     vuint8mf4_t v4, vuint8mf4_t v5,
                                     vuint8mf4_t v6, vuint8mf4_t v7) {
  return __riscv_vcreate_v_u8mf4x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint8mf2x2_t test_vcreate_v_u8mf2x2(vuint8mf2_t v0, vuint8mf2_t v1) {
  return __riscv_vcreate_v_u8mf2x2(v0, v1);
}

vuint8mf2x3_t test_vcreate_v_u8mf2x3(vuint8mf2_t v0, vuint8mf2_t v1,
                                     vuint8mf2_t v2) {
  return __riscv_vcreate_v_u8mf2x3(v0, v1, v2);
}

vuint8mf2x4_t test_vcreate_v_u8mf2x4(vuint8mf2_t v0, vuint8mf2_t v1,
                                     vuint8mf2_t v2, vuint8mf2_t v3) {
  return __riscv_vcreate_v_u8mf2x4(v0, v1, v2, v3);
}

vuint8mf2x5_t test_vcreate_v_u8mf2x5(vuint8mf2_t v0, vuint8mf2_t v1,
                                     vuint8mf2_t v2, vuint8mf2_t v3,
                                     vuint8mf2_t v4) {
  return __riscv_vcreate_v_u8mf2x5(v0, v1, v2, v3, v4);
}

vuint8mf2x6_t test_vcreate_v_u8mf2x6(vuint8mf2_t v0, vuint8mf2_t v1,
                                     vuint8mf2_t v2, vuint8mf2_t v3,
                                     vuint8mf2_t v4, vuint8mf2_t v5) {
  return __riscv_vcreate_v_u8mf2x6(v0, v1, v2, v3, v4, v5);
}

vuint8mf2x7_t test_vcreate_v_u8mf2x7(vuint8mf2_t v0, vuint8mf2_t v1,
                                     vuint8mf2_t v2, vuint8mf2_t v3,
                                     vuint8mf2_t v4, vuint8mf2_t v5,
                                     vuint8mf2_t v6) {
  return __riscv_vcreate_v_u8mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint8mf2x8_t test_vcreate_v_u8mf2x8(vuint8mf2_t v0, vuint8mf2_t v1,
                                     vuint8mf2_t v2, vuint8mf2_t v3,
                                     vuint8mf2_t v4, vuint8mf2_t v5,
                                     vuint8mf2_t v6, vuint8mf2_t v7) {
  return __riscv_vcreate_v_u8mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint8m1x2_t test_vcreate_v_u8m1x2(vuint8m1_t v0, vuint8m1_t v1) {
  return __riscv_vcreate_v_u8m1x2(v0, v1);
}

vuint8m1x3_t test_vcreate_v_u8m1x3(vuint8m1_t v0, vuint8m1_t v1,
                                   vuint8m1_t v2) {
  return __riscv_vcreate_v_u8m1x3(v0, v1, v2);
}

vuint8m1x4_t test_vcreate_v_u8m1x4(vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2,
                                   vuint8m1_t v3) {
  return __riscv_vcreate_v_u8m1x4(v0, v1, v2, v3);
}

vuint8m1x5_t test_vcreate_v_u8m1x5(vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2,
                                   vuint8m1_t v3, vuint8m1_t v4) {
  return __riscv_vcreate_v_u8m1x5(v0, v1, v2, v3, v4);
}

vuint8m1x6_t test_vcreate_v_u8m1x6(vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2,
                                   vuint8m1_t v3, vuint8m1_t v4,
                                   vuint8m1_t v5) {
  return __riscv_vcreate_v_u8m1x6(v0, v1, v2, v3, v4, v5);
}

vuint8m1x7_t test_vcreate_v_u8m1x7(vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2,
                                   vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5,
                                   vuint8m1_t v6) {
  return __riscv_vcreate_v_u8m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint8m1x8_t test_vcreate_v_u8m1x8(vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2,
                                   vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5,
                                   vuint8m1_t v6, vuint8m1_t v7) {
  return __riscv_vcreate_v_u8m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint8m2x2_t test_vcreate_v_u8m2x2(vuint8m2_t v0, vuint8m2_t v1) {
  return __riscv_vcreate_v_u8m2x2(v0, v1);
}

vuint8m2x3_t test_vcreate_v_u8m2x3(vuint8m2_t v0, vuint8m2_t v1,
                                   vuint8m2_t v2) {
  return __riscv_vcreate_v_u8m2x3(v0, v1, v2);
}

vuint8m2x4_t test_vcreate_v_u8m2x4(vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2,
                                   vuint8m2_t v3) {
  return __riscv_vcreate_v_u8m2x4(v0, v1, v2, v3);
}

vuint8m4x2_t test_vcreate_v_u8m4x2(vuint8m4_t v0, vuint8m4_t v1) {
  return __riscv_vcreate_v_u8m4x2(v0, v1);
}

vuint16mf4x2_t test_vcreate_v_u16mf4x2(vuint16mf4_t v0, vuint16mf4_t v1) {
  return __riscv_vcreate_v_u16mf4x2(v0, v1);
}

vuint16mf4x3_t test_vcreate_v_u16mf4x3(vuint16mf4_t v0, vuint16mf4_t v1,
                                       vuint16mf4_t v2) {
  return __riscv_vcreate_v_u16mf4x3(v0, v1, v2);
}

vuint16mf4x4_t test_vcreate_v_u16mf4x4(vuint16mf4_t v0, vuint16mf4_t v1,
                                       vuint16mf4_t v2, vuint16mf4_t v3) {
  return __riscv_vcreate_v_u16mf4x4(v0, v1, v2, v3);
}

vuint16mf4x5_t test_vcreate_v_u16mf4x5(vuint16mf4_t v0, vuint16mf4_t v1,
                                       vuint16mf4_t v2, vuint16mf4_t v3,
                                       vuint16mf4_t v4) {
  return __riscv_vcreate_v_u16mf4x5(v0, v1, v2, v3, v4);
}

vuint16mf4x6_t test_vcreate_v_u16mf4x6(vuint16mf4_t v0, vuint16mf4_t v1,
                                       vuint16mf4_t v2, vuint16mf4_t v3,
                                       vuint16mf4_t v4, vuint16mf4_t v5) {
  return __riscv_vcreate_v_u16mf4x6(v0, v1, v2, v3, v4, v5);
}

vuint16mf4x7_t test_vcreate_v_u16mf4x7(vuint16mf4_t v0, vuint16mf4_t v1,
                                       vuint16mf4_t v2, vuint16mf4_t v3,
                                       vuint16mf4_t v4, vuint16mf4_t v5,
                                       vuint16mf4_t v6) {
  return __riscv_vcreate_v_u16mf4x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint16mf4x8_t test_vcreate_v_u16mf4x8(vuint16mf4_t v0, vuint16mf4_t v1,
                                       vuint16mf4_t v2, vuint16mf4_t v3,
                                       vuint16mf4_t v4, vuint16mf4_t v5,
                                       vuint16mf4_t v6, vuint16mf4_t v7) {
  return __riscv_vcreate_v_u16mf4x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint16mf2x2_t test_vcreate_v_u16mf2x2(vuint16mf2_t v0, vuint16mf2_t v1) {
  return __riscv_vcreate_v_u16mf2x2(v0, v1);
}

vuint16mf2x3_t test_vcreate_v_u16mf2x3(vuint16mf2_t v0, vuint16mf2_t v1,
                                       vuint16mf2_t v2) {
  return __riscv_vcreate_v_u16mf2x3(v0, v1, v2);
}

vuint16mf2x4_t test_vcreate_v_u16mf2x4(vuint16mf2_t v0, vuint16mf2_t v1,
                                       vuint16mf2_t v2, vuint16mf2_t v3) {
  return __riscv_vcreate_v_u16mf2x4(v0, v1, v2, v3);
}

vuint16mf2x5_t test_vcreate_v_u16mf2x5(vuint16mf2_t v0, vuint16mf2_t v1,
                                       vuint16mf2_t v2, vuint16mf2_t v3,
                                       vuint16mf2_t v4) {
  return __riscv_vcreate_v_u16mf2x5(v0, v1, v2, v3, v4);
}

vuint16mf2x6_t test_vcreate_v_u16mf2x6(vuint16mf2_t v0, vuint16mf2_t v1,
                                       vuint16mf2_t v2, vuint16mf2_t v3,
                                       vuint16mf2_t v4, vuint16mf2_t v5) {
  return __riscv_vcreate_v_u16mf2x6(v0, v1, v2, v3, v4, v5);
}

vuint16mf2x7_t test_vcreate_v_u16mf2x7(vuint16mf2_t v0, vuint16mf2_t v1,
                                       vuint16mf2_t v2, vuint16mf2_t v3,
                                       vuint16mf2_t v4, vuint16mf2_t v5,
                                       vuint16mf2_t v6) {
  return __riscv_vcreate_v_u16mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint16mf2x8_t test_vcreate_v_u16mf2x8(vuint16mf2_t v0, vuint16mf2_t v1,
                                       vuint16mf2_t v2, vuint16mf2_t v3,
                                       vuint16mf2_t v4, vuint16mf2_t v5,
                                       vuint16mf2_t v6, vuint16mf2_t v7) {
  return __riscv_vcreate_v_u16mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint16m1x2_t test_vcreate_v_u16m1x2(vuint16m1_t v0, vuint16m1_t v1) {
  return __riscv_vcreate_v_u16m1x2(v0, v1);
}

vuint16m1x3_t test_vcreate_v_u16m1x3(vuint16m1_t v0, vuint16m1_t v1,
                                     vuint16m1_t v2) {
  return __riscv_vcreate_v_u16m1x3(v0, v1, v2);
}

vuint16m1x4_t test_vcreate_v_u16m1x4(vuint16m1_t v0, vuint16m1_t v1,
                                     vuint16m1_t v2, vuint16m1_t v3) {
  return __riscv_vcreate_v_u16m1x4(v0, v1, v2, v3);
}

vuint16m1x5_t test_vcreate_v_u16m1x5(vuint16m1_t v0, vuint16m1_t v1,
                                     vuint16m1_t v2, vuint16m1_t v3,
                                     vuint16m1_t v4) {
  return __riscv_vcreate_v_u16m1x5(v0, v1, v2, v3, v4);
}

vuint16m1x6_t test_vcreate_v_u16m1x6(vuint16m1_t v0, vuint16m1_t v1,
                                     vuint16m1_t v2, vuint16m1_t v3,
                                     vuint16m1_t v4, vuint16m1_t v5) {
  return __riscv_vcreate_v_u16m1x6(v0, v1, v2, v3, v4, v5);
}

vuint16m1x7_t test_vcreate_v_u16m1x7(vuint16m1_t v0, vuint16m1_t v1,
                                     vuint16m1_t v2, vuint16m1_t v3,
                                     vuint16m1_t v4, vuint16m1_t v5,
                                     vuint16m1_t v6) {
  return __riscv_vcreate_v_u16m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint16m1x8_t test_vcreate_v_u16m1x8(vuint16m1_t v0, vuint16m1_t v1,
                                     vuint16m1_t v2, vuint16m1_t v3,
                                     vuint16m1_t v4, vuint16m1_t v5,
                                     vuint16m1_t v6, vuint16m1_t v7) {
  return __riscv_vcreate_v_u16m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint16m2x2_t test_vcreate_v_u16m2x2(vuint16m2_t v0, vuint16m2_t v1) {
  return __riscv_vcreate_v_u16m2x2(v0, v1);
}

vuint16m2x3_t test_vcreate_v_u16m2x3(vuint16m2_t v0, vuint16m2_t v1,
                                     vuint16m2_t v2) {
  return __riscv_vcreate_v_u16m2x3(v0, v1, v2);
}

vuint16m2x4_t test_vcreate_v_u16m2x4(vuint16m2_t v0, vuint16m2_t v1,
                                     vuint16m2_t v2, vuint16m2_t v3) {
  return __riscv_vcreate_v_u16m2x4(v0, v1, v2, v3);
}

vuint16m4x2_t test_vcreate_v_u16m4x2(vuint16m4_t v0, vuint16m4_t v1) {
  return __riscv_vcreate_v_u16m4x2(v0, v1);
}

vuint32mf2x2_t test_vcreate_v_u32mf2x2(vuint32mf2_t v0, vuint32mf2_t v1) {
  return __riscv_vcreate_v_u32mf2x2(v0, v1);
}

vuint32mf2x3_t test_vcreate_v_u32mf2x3(vuint32mf2_t v0, vuint32mf2_t v1,
                                       vuint32mf2_t v2) {
  return __riscv_vcreate_v_u32mf2x3(v0, v1, v2);
}

vuint32mf2x4_t test_vcreate_v_u32mf2x4(vuint32mf2_t v0, vuint32mf2_t v1,
                                       vuint32mf2_t v2, vuint32mf2_t v3) {
  return __riscv_vcreate_v_u32mf2x4(v0, v1, v2, v3);
}

vuint32mf2x5_t test_vcreate_v_u32mf2x5(vuint32mf2_t v0, vuint32mf2_t v1,
                                       vuint32mf2_t v2, vuint32mf2_t v3,
                                       vuint32mf2_t v4) {
  return __riscv_vcreate_v_u32mf2x5(v0, v1, v2, v3, v4);
}

vuint32mf2x6_t test_vcreate_v_u32mf2x6(vuint32mf2_t v0, vuint32mf2_t v1,
                                       vuint32mf2_t v2, vuint32mf2_t v3,
                                       vuint32mf2_t v4, vuint32mf2_t v5) {
  return __riscv_vcreate_v_u32mf2x6(v0, v1, v2, v3, v4, v5);
}

vuint32mf2x7_t test_vcreate_v_u32mf2x7(vuint32mf2_t v0, vuint32mf2_t v1,
                                       vuint32mf2_t v2, vuint32mf2_t v3,
                                       vuint32mf2_t v4, vuint32mf2_t v5,
                                       vuint32mf2_t v6) {
  return __riscv_vcreate_v_u32mf2x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint32mf2x8_t test_vcreate_v_u32mf2x8(vuint32mf2_t v0, vuint32mf2_t v1,
                                       vuint32mf2_t v2, vuint32mf2_t v3,
                                       vuint32mf2_t v4, vuint32mf2_t v5,
                                       vuint32mf2_t v6, vuint32mf2_t v7) {
  return __riscv_vcreate_v_u32mf2x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint32m1x2_t test_vcreate_v_u32m1x2(vuint32m1_t v0, vuint32m1_t v1) {
  return __riscv_vcreate_v_u32m1x2(v0, v1);
}

vuint32m1x3_t test_vcreate_v_u32m1x3(vuint32m1_t v0, vuint32m1_t v1,
                                     vuint32m1_t v2) {
  return __riscv_vcreate_v_u32m1x3(v0, v1, v2);
}

vuint32m1x4_t test_vcreate_v_u32m1x4(vuint32m1_t v0, vuint32m1_t v1,
                                     vuint32m1_t v2, vuint32m1_t v3) {
  return __riscv_vcreate_v_u32m1x4(v0, v1, v2, v3);
}

vuint32m1x5_t test_vcreate_v_u32m1x5(vuint32m1_t v0, vuint32m1_t v1,
                                     vuint32m1_t v2, vuint32m1_t v3,
                                     vuint32m1_t v4) {
  return __riscv_vcreate_v_u32m1x5(v0, v1, v2, v3, v4);
}

vuint32m1x6_t test_vcreate_v_u32m1x6(vuint32m1_t v0, vuint32m1_t v1,
                                     vuint32m1_t v2, vuint32m1_t v3,
                                     vuint32m1_t v4, vuint32m1_t v5) {
  return __riscv_vcreate_v_u32m1x6(v0, v1, v2, v3, v4, v5);
}

vuint32m1x7_t test_vcreate_v_u32m1x7(vuint32m1_t v0, vuint32m1_t v1,
                                     vuint32m1_t v2, vuint32m1_t v3,
                                     vuint32m1_t v4, vuint32m1_t v5,
                                     vuint32m1_t v6) {
  return __riscv_vcreate_v_u32m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint32m1x8_t test_vcreate_v_u32m1x8(vuint32m1_t v0, vuint32m1_t v1,
                                     vuint32m1_t v2, vuint32m1_t v3,
                                     vuint32m1_t v4, vuint32m1_t v5,
                                     vuint32m1_t v6, vuint32m1_t v7) {
  return __riscv_vcreate_v_u32m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint32m2x2_t test_vcreate_v_u32m2x2(vuint32m2_t v0, vuint32m2_t v1) {
  return __riscv_vcreate_v_u32m2x2(v0, v1);
}

vuint32m2x3_t test_vcreate_v_u32m2x3(vuint32m2_t v0, vuint32m2_t v1,
                                     vuint32m2_t v2) {
  return __riscv_vcreate_v_u32m2x3(v0, v1, v2);
}

vuint32m2x4_t test_vcreate_v_u32m2x4(vuint32m2_t v0, vuint32m2_t v1,
                                     vuint32m2_t v2, vuint32m2_t v3) {
  return __riscv_vcreate_v_u32m2x4(v0, v1, v2, v3);
}

vuint32m4x2_t test_vcreate_v_u32m4x2(vuint32m4_t v0, vuint32m4_t v1) {
  return __riscv_vcreate_v_u32m4x2(v0, v1);
}

vuint64m1x2_t test_vcreate_v_u64m1x2(vuint64m1_t v0, vuint64m1_t v1) {
  return __riscv_vcreate_v_u64m1x2(v0, v1);
}

vuint64m1x3_t test_vcreate_v_u64m1x3(vuint64m1_t v0, vuint64m1_t v1,
                                     vuint64m1_t v2) {
  return __riscv_vcreate_v_u64m1x3(v0, v1, v2);
}

vuint64m1x4_t test_vcreate_v_u64m1x4(vuint64m1_t v0, vuint64m1_t v1,
                                     vuint64m1_t v2, vuint64m1_t v3) {
  return __riscv_vcreate_v_u64m1x4(v0, v1, v2, v3);
}

vuint64m1x5_t test_vcreate_v_u64m1x5(vuint64m1_t v0, vuint64m1_t v1,
                                     vuint64m1_t v2, vuint64m1_t v3,
                                     vuint64m1_t v4) {
  return __riscv_vcreate_v_u64m1x5(v0, v1, v2, v3, v4);
}

vuint64m1x6_t test_vcreate_v_u64m1x6(vuint64m1_t v0, vuint64m1_t v1,
                                     vuint64m1_t v2, vuint64m1_t v3,
                                     vuint64m1_t v4, vuint64m1_t v5) {
  return __riscv_vcreate_v_u64m1x6(v0, v1, v2, v3, v4, v5);
}

vuint64m1x7_t test_vcreate_v_u64m1x7(vuint64m1_t v0, vuint64m1_t v1,
                                     vuint64m1_t v2, vuint64m1_t v3,
                                     vuint64m1_t v4, vuint64m1_t v5,
                                     vuint64m1_t v6) {
  return __riscv_vcreate_v_u64m1x7(v0, v1, v2, v3, v4, v5, v6);
}

vuint64m1x8_t test_vcreate_v_u64m1x8(vuint64m1_t v0, vuint64m1_t v1,
                                     vuint64m1_t v2, vuint64m1_t v3,
                                     vuint64m1_t v4, vuint64m1_t v5,
                                     vuint64m1_t v6, vuint64m1_t v7) {
  return __riscv_vcreate_v_u64m1x8(v0, v1, v2, v3, v4, v5, v6, v7);
}

vuint64m2x2_t test_vcreate_v_u64m2x2(vuint64m2_t v0, vuint64m2_t v1) {
  return __riscv_vcreate_v_u64m2x2(v0, v1);
}

vuint64m2x3_t test_vcreate_v_u64m2x3(vuint64m2_t v0, vuint64m2_t v1,
                                     vuint64m2_t v2) {
  return __riscv_vcreate_v_u64m2x3(v0, v1, v2);
}

vuint64m2x4_t test_vcreate_v_u64m2x4(vuint64m2_t v0, vuint64m2_t v1,
                                     vuint64m2_t v2, vuint64m2_t v3) {
  return __riscv_vcreate_v_u64m2x4(v0, v1, v2, v3);
}

vuint64m4x2_t test_vcreate_v_u64m4x2(vuint64m4_t v0, vuint64m4_t v1) {
  return __riscv_vcreate_v_u64m4x2(v0, v1);
}
