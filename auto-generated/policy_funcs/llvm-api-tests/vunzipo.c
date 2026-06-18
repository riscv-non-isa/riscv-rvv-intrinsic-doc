// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfh \
// RUN:   -target-feature +zvzip \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vunzipo_v_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf2_t vs,
                                       size_t vl) {
  return __riscv_vunzipo_v_f16mf4_tu(vd, vs, vl);
}

vfloat16mf2_t test_vunzipo_v_f16mf2_tu(vfloat16mf2_t vd, vfloat16m1_t vs,
                                       size_t vl) {
  return __riscv_vunzipo_v_f16mf2_tu(vd, vs, vl);
}

vfloat16m1_t test_vunzipo_v_f16m1_tu(vfloat16m1_t vd, vfloat16m2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f16m1_tu(vd, vs, vl);
}

vfloat16m2_t test_vunzipo_v_f16m2_tu(vfloat16m2_t vd, vfloat16m4_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f16m2_tu(vd, vs, vl);
}

vfloat16m4_t test_vunzipo_v_f16m4_tu(vfloat16m4_t vd, vfloat16m8_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f16m4_tu(vd, vs, vl);
}

vfloat32mf2_t test_vunzipo_v_f32mf2_tu(vfloat32mf2_t vd, vfloat32m1_t vs,
                                       size_t vl) {
  return __riscv_vunzipo_v_f32mf2_tu(vd, vs, vl);
}

vfloat32m1_t test_vunzipo_v_f32m1_tu(vfloat32m1_t vd, vfloat32m2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f32m1_tu(vd, vs, vl);
}

vfloat32m2_t test_vunzipo_v_f32m2_tu(vfloat32m2_t vd, vfloat32m4_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f32m2_tu(vd, vs, vl);
}

vfloat32m4_t test_vunzipo_v_f32m4_tu(vfloat32m4_t vd, vfloat32m8_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f32m4_tu(vd, vs, vl);
}

vfloat64m1_t test_vunzipo_v_f64m1_tu(vfloat64m1_t vd, vfloat64m2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f64m1_tu(vd, vs, vl);
}

vfloat64m2_t test_vunzipo_v_f64m2_tu(vfloat64m2_t vd, vfloat64m4_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f64m2_tu(vd, vs, vl);
}

vfloat64m4_t test_vunzipo_v_f64m4_tu(vfloat64m4_t vd, vfloat64m8_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_f64m4_tu(vd, vs, vl);
}

vint8mf8_t test_vunzipo_v_i8mf8_tu(vint8mf8_t vd, vint8mf4_t vs, size_t vl) {
  return __riscv_vunzipo_v_i8mf8_tu(vd, vs, vl);
}

vint8mf4_t test_vunzipo_v_i8mf4_tu(vint8mf4_t vd, vint8mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i8mf4_tu(vd, vs, vl);
}

vint8mf2_t test_vunzipo_v_i8mf2_tu(vint8mf2_t vd, vint8m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i8mf2_tu(vd, vs, vl);
}

vint8m1_t test_vunzipo_v_i8m1_tu(vint8m1_t vd, vint8m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i8m1_tu(vd, vs, vl);
}

vint8m2_t test_vunzipo_v_i8m2_tu(vint8m2_t vd, vint8m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_i8m2_tu(vd, vs, vl);
}

vint8m4_t test_vunzipo_v_i8m4_tu(vint8m4_t vd, vint8m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_i8m4_tu(vd, vs, vl);
}

vint16mf4_t test_vunzipo_v_i16mf4_tu(vint16mf4_t vd, vint16mf2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i16mf4_tu(vd, vs, vl);
}

vint16mf2_t test_vunzipo_v_i16mf2_tu(vint16mf2_t vd, vint16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16mf2_tu(vd, vs, vl);
}

vint16m1_t test_vunzipo_v_i16m1_tu(vint16m1_t vd, vint16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16m1_tu(vd, vs, vl);
}

vint16m2_t test_vunzipo_v_i16m2_tu(vint16m2_t vd, vint16m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16m2_tu(vd, vs, vl);
}

vint16m4_t test_vunzipo_v_i16m4_tu(vint16m4_t vd, vint16m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16m4_tu(vd, vs, vl);
}

vint32mf2_t test_vunzipo_v_i32mf2_tu(vint32mf2_t vd, vint32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i32mf2_tu(vd, vs, vl);
}

vint32m1_t test_vunzipo_v_i32m1_tu(vint32m1_t vd, vint32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i32m1_tu(vd, vs, vl);
}

vint32m2_t test_vunzipo_v_i32m2_tu(vint32m2_t vd, vint32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_i32m2_tu(vd, vs, vl);
}

vint32m4_t test_vunzipo_v_i32m4_tu(vint32m4_t vd, vint32m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_i32m4_tu(vd, vs, vl);
}

vint64m1_t test_vunzipo_v_i64m1_tu(vint64m1_t vd, vint64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i64m1_tu(vd, vs, vl);
}

vint64m2_t test_vunzipo_v_i64m2_tu(vint64m2_t vd, vint64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_i64m2_tu(vd, vs, vl);
}

vint64m4_t test_vunzipo_v_i64m4_tu(vint64m4_t vd, vint64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_i64m4_tu(vd, vs, vl);
}

vuint8mf8_t test_vunzipo_v_u8mf8_tu(vuint8mf8_t vd, vuint8mf4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf8_tu(vd, vs, vl);
}

vuint8mf4_t test_vunzipo_v_u8mf4_tu(vuint8mf4_t vd, vuint8mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf4_tu(vd, vs, vl);
}

vuint8mf2_t test_vunzipo_v_u8mf2_tu(vuint8mf2_t vd, vuint8m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf2_tu(vd, vs, vl);
}

vuint8m1_t test_vunzipo_v_u8m1_tu(vuint8m1_t vd, vuint8m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8m1_tu(vd, vs, vl);
}

vuint8m2_t test_vunzipo_v_u8m2_tu(vuint8m2_t vd, vuint8m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8m2_tu(vd, vs, vl);
}

vuint8m4_t test_vunzipo_v_u8m4_tu(vuint8m4_t vd, vuint8m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8m4_tu(vd, vs, vl);
}

vuint16mf4_t test_vunzipo_v_u16mf4_tu(vuint16mf4_t vd, vuint16mf2_t vs,
                                      size_t vl) {
  return __riscv_vunzipo_v_u16mf4_tu(vd, vs, vl);
}

vuint16mf2_t test_vunzipo_v_u16mf2_tu(vuint16mf2_t vd, vuint16m1_t vs,
                                      size_t vl) {
  return __riscv_vunzipo_v_u16mf2_tu(vd, vs, vl);
}

vuint16m1_t test_vunzipo_v_u16m1_tu(vuint16m1_t vd, vuint16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m1_tu(vd, vs, vl);
}

vuint16m2_t test_vunzipo_v_u16m2_tu(vuint16m2_t vd, vuint16m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m2_tu(vd, vs, vl);
}

vuint16m4_t test_vunzipo_v_u16m4_tu(vuint16m4_t vd, vuint16m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m4_tu(vd, vs, vl);
}

vuint32mf2_t test_vunzipo_v_u32mf2_tu(vuint32mf2_t vd, vuint32m1_t vs,
                                      size_t vl) {
  return __riscv_vunzipo_v_u32mf2_tu(vd, vs, vl);
}

vuint32m1_t test_vunzipo_v_u32m1_tu(vuint32m1_t vd, vuint32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m1_tu(vd, vs, vl);
}

vuint32m2_t test_vunzipo_v_u32m2_tu(vuint32m2_t vd, vuint32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m2_tu(vd, vs, vl);
}

vuint32m4_t test_vunzipo_v_u32m4_tu(vuint32m4_t vd, vuint32m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m4_tu(vd, vs, vl);
}

vuint64m1_t test_vunzipo_v_u64m1_tu(vuint64m1_t vd, vuint64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m1_tu(vd, vs, vl);
}

vuint64m2_t test_vunzipo_v_u64m2_tu(vuint64m2_t vd, vuint64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m2_tu(vd, vs, vl);
}

vuint64m4_t test_vunzipo_v_u64m4_tu(vuint64m4_t vd, vuint64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m4_tu(vd, vs, vl);
}

vfloat16mf4_t test_vunzipo_v_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                        vfloat16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16mf4_tum(vm, vd, vs, vl);
}

vfloat16mf2_t test_vunzipo_v_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                        vfloat16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16mf2_tum(vm, vd, vs, vl);
}

vfloat16m1_t test_vunzipo_v_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                      vfloat16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m1_tum(vm, vd, vs, vl);
}

vfloat16m2_t test_vunzipo_v_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                      vfloat16m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m2_tum(vm, vd, vs, vl);
}

vfloat16m4_t test_vunzipo_v_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                      vfloat16m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m4_tum(vm, vd, vs, vl);
}

vfloat32mf2_t test_vunzipo_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                        vfloat32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32mf2_tum(vm, vd, vs, vl);
}

vfloat32m1_t test_vunzipo_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                      vfloat32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m1_tum(vm, vd, vs, vl);
}

vfloat32m2_t test_vunzipo_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                      vfloat32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m2_tum(vm, vd, vs, vl);
}

vfloat32m4_t test_vunzipo_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                      vfloat32m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m4_tum(vm, vd, vs, vl);
}

vfloat64m1_t test_vunzipo_v_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                      vfloat64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m1_tum(vm, vd, vs, vl);
}

vfloat64m2_t test_vunzipo_v_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                      vfloat64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m2_tum(vm, vd, vs, vl);
}

vfloat64m4_t test_vunzipo_v_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                      vfloat64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m4_tum(vm, vd, vs, vl);
}

vint8mf8_t test_vunzipo_v_i8mf8_tum(vbool64_t vm, vint8mf8_t vd, vint8mf4_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i8mf8_tum(vm, vd, vs, vl);
}

vint8mf4_t test_vunzipo_v_i8mf4_tum(vbool32_t vm, vint8mf4_t vd, vint8mf2_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i8mf4_tum(vm, vd, vs, vl);
}

vint8mf2_t test_vunzipo_v_i8mf2_tum(vbool16_t vm, vint8mf2_t vd, vint8m1_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i8mf2_tum(vm, vd, vs, vl);
}

vint8m1_t test_vunzipo_v_i8m1_tum(vbool8_t vm, vint8m1_t vd, vint8m2_t vs,
                                  size_t vl) {
  return __riscv_vunzipo_v_i8m1_tum(vm, vd, vs, vl);
}

vint8m2_t test_vunzipo_v_i8m2_tum(vbool4_t vm, vint8m2_t vd, vint8m4_t vs,
                                  size_t vl) {
  return __riscv_vunzipo_v_i8m2_tum(vm, vd, vs, vl);
}

vint8m4_t test_vunzipo_v_i8m4_tum(vbool2_t vm, vint8m4_t vd, vint8m8_t vs,
                                  size_t vl) {
  return __riscv_vunzipo_v_i8m4_tum(vm, vd, vs, vl);
}

vint16mf4_t test_vunzipo_v_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                      vint16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16mf4_tum(vm, vd, vs, vl);
}

vint16mf2_t test_vunzipo_v_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                      vint16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16mf2_tum(vm, vd, vs, vl);
}

vint16m1_t test_vunzipo_v_i16m1_tum(vbool16_t vm, vint16m1_t vd, vint16m2_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i16m1_tum(vm, vd, vs, vl);
}

vint16m2_t test_vunzipo_v_i16m2_tum(vbool8_t vm, vint16m2_t vd, vint16m4_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i16m2_tum(vm, vd, vs, vl);
}

vint16m4_t test_vunzipo_v_i16m4_tum(vbool4_t vm, vint16m4_t vd, vint16m8_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i16m4_tum(vm, vd, vs, vl);
}

vint32mf2_t test_vunzipo_v_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                      vint32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i32mf2_tum(vm, vd, vs, vl);
}

vint32m1_t test_vunzipo_v_i32m1_tum(vbool32_t vm, vint32m1_t vd, vint32m2_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i32m1_tum(vm, vd, vs, vl);
}

vint32m2_t test_vunzipo_v_i32m2_tum(vbool16_t vm, vint32m2_t vd, vint32m4_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i32m2_tum(vm, vd, vs, vl);
}

vint32m4_t test_vunzipo_v_i32m4_tum(vbool8_t vm, vint32m4_t vd, vint32m8_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i32m4_tum(vm, vd, vs, vl);
}

vint64m1_t test_vunzipo_v_i64m1_tum(vbool64_t vm, vint64m1_t vd, vint64m2_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i64m1_tum(vm, vd, vs, vl);
}

vint64m2_t test_vunzipo_v_i64m2_tum(vbool32_t vm, vint64m2_t vd, vint64m4_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i64m2_tum(vm, vd, vs, vl);
}

vint64m4_t test_vunzipo_v_i64m4_tum(vbool16_t vm, vint64m4_t vd, vint64m8_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_i64m4_tum(vm, vd, vs, vl);
}

vuint8mf8_t test_vunzipo_v_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd,
                                     vuint8mf4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf8_tum(vm, vd, vs, vl);
}

vuint8mf4_t test_vunzipo_v_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd,
                                     vuint8mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf4_tum(vm, vd, vs, vl);
}

vuint8mf2_t test_vunzipo_v_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd,
                                     vuint8m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf2_tum(vm, vd, vs, vl);
}

vuint8m1_t test_vunzipo_v_u8m1_tum(vbool8_t vm, vuint8m1_t vd, vuint8m2_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_u8m1_tum(vm, vd, vs, vl);
}

vuint8m2_t test_vunzipo_v_u8m2_tum(vbool4_t vm, vuint8m2_t vd, vuint8m4_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_u8m2_tum(vm, vd, vs, vl);
}

vuint8m4_t test_vunzipo_v_u8m4_tum(vbool2_t vm, vuint8m4_t vd, vuint8m8_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_u8m4_tum(vm, vd, vs, vl);
}

vuint16mf4_t test_vunzipo_v_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd,
                                       vuint16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16mf4_tum(vm, vd, vs, vl);
}

vuint16mf2_t test_vunzipo_v_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd,
                                       vuint16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16mf2_tum(vm, vd, vs, vl);
}

vuint16m1_t test_vunzipo_v_u16m1_tum(vbool16_t vm, vuint16m1_t vd,
                                     vuint16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m1_tum(vm, vd, vs, vl);
}

vuint16m2_t test_vunzipo_v_u16m2_tum(vbool8_t vm, vuint16m2_t vd,
                                     vuint16m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m2_tum(vm, vd, vs, vl);
}

vuint16m4_t test_vunzipo_v_u16m4_tum(vbool4_t vm, vuint16m4_t vd,
                                     vuint16m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m4_tum(vm, vd, vs, vl);
}

vuint32mf2_t test_vunzipo_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                       vuint32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32mf2_tum(vm, vd, vs, vl);
}

vuint32m1_t test_vunzipo_v_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                     vuint32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m1_tum(vm, vd, vs, vl);
}

vuint32m2_t test_vunzipo_v_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                     vuint32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m2_tum(vm, vd, vs, vl);
}

vuint32m4_t test_vunzipo_v_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                     vuint32m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m4_tum(vm, vd, vs, vl);
}

vuint64m1_t test_vunzipo_v_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                     vuint64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m1_tum(vm, vd, vs, vl);
}

vuint64m2_t test_vunzipo_v_u64m2_tum(vbool32_t vm, vuint64m2_t vd,
                                     vuint64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m2_tum(vm, vd, vs, vl);
}

vuint64m4_t test_vunzipo_v_u64m4_tum(vbool16_t vm, vuint64m4_t vd,
                                     vuint64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m4_tum(vm, vd, vs, vl);
}

vfloat16mf4_t test_vunzipo_v_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                         vfloat16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16mf4_tumu(vm, vd, vs, vl);
}

vfloat16mf2_t test_vunzipo_v_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                         vfloat16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16mf2_tumu(vm, vd, vs, vl);
}

vfloat16m1_t test_vunzipo_v_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                       vfloat16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m1_tumu(vm, vd, vs, vl);
}

vfloat16m2_t test_vunzipo_v_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                       vfloat16m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m2_tumu(vm, vd, vs, vl);
}

vfloat16m4_t test_vunzipo_v_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                       vfloat16m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m4_tumu(vm, vd, vs, vl);
}

vfloat32mf2_t test_vunzipo_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                         vfloat32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32mf2_tumu(vm, vd, vs, vl);
}

vfloat32m1_t test_vunzipo_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                       vfloat32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m1_tumu(vm, vd, vs, vl);
}

vfloat32m2_t test_vunzipo_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                       vfloat32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m2_tumu(vm, vd, vs, vl);
}

vfloat32m4_t test_vunzipo_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                       vfloat32m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m4_tumu(vm, vd, vs, vl);
}

vfloat64m1_t test_vunzipo_v_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                       vfloat64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m1_tumu(vm, vd, vs, vl);
}

vfloat64m2_t test_vunzipo_v_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                       vfloat64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m2_tumu(vm, vd, vs, vl);
}

vfloat64m4_t test_vunzipo_v_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                       vfloat64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m4_tumu(vm, vd, vs, vl);
}

vint8mf8_t test_vunzipo_v_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd, vint8mf4_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i8mf8_tumu(vm, vd, vs, vl);
}

vint8mf4_t test_vunzipo_v_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd, vint8mf2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i8mf4_tumu(vm, vd, vs, vl);
}

vint8mf2_t test_vunzipo_v_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd, vint8m1_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i8mf2_tumu(vm, vd, vs, vl);
}

vint8m1_t test_vunzipo_v_i8m1_tumu(vbool8_t vm, vint8m1_t vd, vint8m2_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i8m1_tumu(vm, vd, vs, vl);
}

vint8m2_t test_vunzipo_v_i8m2_tumu(vbool4_t vm, vint8m2_t vd, vint8m4_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i8m2_tumu(vm, vd, vs, vl);
}

vint8m4_t test_vunzipo_v_i8m4_tumu(vbool2_t vm, vint8m4_t vd, vint8m8_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i8m4_tumu(vm, vd, vs, vl);
}

vint16mf4_t test_vunzipo_v_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                       vint16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16mf4_tumu(vm, vd, vs, vl);
}

vint16mf2_t test_vunzipo_v_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                       vint16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16mf2_tumu(vm, vd, vs, vl);
}

vint16m1_t test_vunzipo_v_i16m1_tumu(vbool16_t vm, vint16m1_t vd, vint16m2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i16m1_tumu(vm, vd, vs, vl);
}

vint16m2_t test_vunzipo_v_i16m2_tumu(vbool8_t vm, vint16m2_t vd, vint16m4_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i16m2_tumu(vm, vd, vs, vl);
}

vint16m4_t test_vunzipo_v_i16m4_tumu(vbool4_t vm, vint16m4_t vd, vint16m8_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i16m4_tumu(vm, vd, vs, vl);
}

vint32mf2_t test_vunzipo_v_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                       vint32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i32mf2_tumu(vm, vd, vs, vl);
}

vint32m1_t test_vunzipo_v_i32m1_tumu(vbool32_t vm, vint32m1_t vd, vint32m2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i32m1_tumu(vm, vd, vs, vl);
}

vint32m2_t test_vunzipo_v_i32m2_tumu(vbool16_t vm, vint32m2_t vd, vint32m4_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i32m2_tumu(vm, vd, vs, vl);
}

vint32m4_t test_vunzipo_v_i32m4_tumu(vbool8_t vm, vint32m4_t vd, vint32m8_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i32m4_tumu(vm, vd, vs, vl);
}

vint64m1_t test_vunzipo_v_i64m1_tumu(vbool64_t vm, vint64m1_t vd, vint64m2_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i64m1_tumu(vm, vd, vs, vl);
}

vint64m2_t test_vunzipo_v_i64m2_tumu(vbool32_t vm, vint64m2_t vd, vint64m4_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i64m2_tumu(vm, vd, vs, vl);
}

vint64m4_t test_vunzipo_v_i64m4_tumu(vbool16_t vm, vint64m4_t vd, vint64m8_t vs,
                                     size_t vl) {
  return __riscv_vunzipo_v_i64m4_tumu(vm, vd, vs, vl);
}

vuint8mf8_t test_vunzipo_v_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd,
                                      vuint8mf4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf8_tumu(vm, vd, vs, vl);
}

vuint8mf4_t test_vunzipo_v_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd,
                                      vuint8mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf4_tumu(vm, vd, vs, vl);
}

vuint8mf2_t test_vunzipo_v_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd,
                                      vuint8m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf2_tumu(vm, vd, vs, vl);
}

vuint8m1_t test_vunzipo_v_u8m1_tumu(vbool8_t vm, vuint8m1_t vd, vuint8m2_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_u8m1_tumu(vm, vd, vs, vl);
}

vuint8m2_t test_vunzipo_v_u8m2_tumu(vbool4_t vm, vuint8m2_t vd, vuint8m4_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_u8m2_tumu(vm, vd, vs, vl);
}

vuint8m4_t test_vunzipo_v_u8m4_tumu(vbool2_t vm, vuint8m4_t vd, vuint8m8_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_u8m4_tumu(vm, vd, vs, vl);
}

vuint16mf4_t test_vunzipo_v_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd,
                                        vuint16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16mf4_tumu(vm, vd, vs, vl);
}

vuint16mf2_t test_vunzipo_v_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd,
                                        vuint16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16mf2_tumu(vm, vd, vs, vl);
}

vuint16m1_t test_vunzipo_v_u16m1_tumu(vbool16_t vm, vuint16m1_t vd,
                                      vuint16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m1_tumu(vm, vd, vs, vl);
}

vuint16m2_t test_vunzipo_v_u16m2_tumu(vbool8_t vm, vuint16m2_t vd,
                                      vuint16m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m2_tumu(vm, vd, vs, vl);
}

vuint16m4_t test_vunzipo_v_u16m4_tumu(vbool4_t vm, vuint16m4_t vd,
                                      vuint16m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m4_tumu(vm, vd, vs, vl);
}

vuint32mf2_t test_vunzipo_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                        vuint32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32mf2_tumu(vm, vd, vs, vl);
}

vuint32m1_t test_vunzipo_v_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                      vuint32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m1_tumu(vm, vd, vs, vl);
}

vuint32m2_t test_vunzipo_v_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                      vuint32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m2_tumu(vm, vd, vs, vl);
}

vuint32m4_t test_vunzipo_v_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                      vuint32m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m4_tumu(vm, vd, vs, vl);
}

vuint64m1_t test_vunzipo_v_u64m1_tumu(vbool64_t vm, vuint64m1_t vd,
                                      vuint64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m1_tumu(vm, vd, vs, vl);
}

vuint64m2_t test_vunzipo_v_u64m2_tumu(vbool32_t vm, vuint64m2_t vd,
                                      vuint64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m2_tumu(vm, vd, vs, vl);
}

vuint64m4_t test_vunzipo_v_u64m4_tumu(vbool16_t vm, vuint64m4_t vd,
                                      vuint64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m4_tumu(vm, vd, vs, vl);
}

vfloat16mf4_t test_vunzipo_v_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                       vfloat16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16mf4_mu(vm, vd, vs, vl);
}

vfloat16mf2_t test_vunzipo_v_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                       vfloat16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16mf2_mu(vm, vd, vs, vl);
}

vfloat16m1_t test_vunzipo_v_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                     vfloat16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m1_mu(vm, vd, vs, vl);
}

vfloat16m2_t test_vunzipo_v_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                     vfloat16m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m2_mu(vm, vd, vs, vl);
}

vfloat16m4_t test_vunzipo_v_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                     vfloat16m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f16m4_mu(vm, vd, vs, vl);
}

vfloat32mf2_t test_vunzipo_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                       vfloat32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32mf2_mu(vm, vd, vs, vl);
}

vfloat32m1_t test_vunzipo_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                     vfloat32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m1_mu(vm, vd, vs, vl);
}

vfloat32m2_t test_vunzipo_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                     vfloat32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m2_mu(vm, vd, vs, vl);
}

vfloat32m4_t test_vunzipo_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                     vfloat32m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f32m4_mu(vm, vd, vs, vl);
}

vfloat64m1_t test_vunzipo_v_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                     vfloat64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m1_mu(vm, vd, vs, vl);
}

vfloat64m2_t test_vunzipo_v_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                     vfloat64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m2_mu(vm, vd, vs, vl);
}

vfloat64m4_t test_vunzipo_v_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                     vfloat64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_f64m4_mu(vm, vd, vs, vl);
}

vint8mf8_t test_vunzipo_v_i8mf8_mu(vbool64_t vm, vint8mf8_t vd, vint8mf4_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i8mf8_mu(vm, vd, vs, vl);
}

vint8mf4_t test_vunzipo_v_i8mf4_mu(vbool32_t vm, vint8mf4_t vd, vint8mf2_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i8mf4_mu(vm, vd, vs, vl);
}

vint8mf2_t test_vunzipo_v_i8mf2_mu(vbool16_t vm, vint8mf2_t vd, vint8m1_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i8mf2_mu(vm, vd, vs, vl);
}

vint8m1_t test_vunzipo_v_i8m1_mu(vbool8_t vm, vint8m1_t vd, vint8m2_t vs,
                                 size_t vl) {
  return __riscv_vunzipo_v_i8m1_mu(vm, vd, vs, vl);
}

vint8m2_t test_vunzipo_v_i8m2_mu(vbool4_t vm, vint8m2_t vd, vint8m4_t vs,
                                 size_t vl) {
  return __riscv_vunzipo_v_i8m2_mu(vm, vd, vs, vl);
}

vint8m4_t test_vunzipo_v_i8m4_mu(vbool2_t vm, vint8m4_t vd, vint8m8_t vs,
                                 size_t vl) {
  return __riscv_vunzipo_v_i8m4_mu(vm, vd, vs, vl);
}

vint16mf4_t test_vunzipo_v_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                     vint16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16mf4_mu(vm, vd, vs, vl);
}

vint16mf2_t test_vunzipo_v_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                     vint16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i16mf2_mu(vm, vd, vs, vl);
}

vint16m1_t test_vunzipo_v_i16m1_mu(vbool16_t vm, vint16m1_t vd, vint16m2_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i16m1_mu(vm, vd, vs, vl);
}

vint16m2_t test_vunzipo_v_i16m2_mu(vbool8_t vm, vint16m2_t vd, vint16m4_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i16m2_mu(vm, vd, vs, vl);
}

vint16m4_t test_vunzipo_v_i16m4_mu(vbool4_t vm, vint16m4_t vd, vint16m8_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i16m4_mu(vm, vd, vs, vl);
}

vint32mf2_t test_vunzipo_v_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                     vint32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_i32mf2_mu(vm, vd, vs, vl);
}

vint32m1_t test_vunzipo_v_i32m1_mu(vbool32_t vm, vint32m1_t vd, vint32m2_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i32m1_mu(vm, vd, vs, vl);
}

vint32m2_t test_vunzipo_v_i32m2_mu(vbool16_t vm, vint32m2_t vd, vint32m4_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i32m2_mu(vm, vd, vs, vl);
}

vint32m4_t test_vunzipo_v_i32m4_mu(vbool8_t vm, vint32m4_t vd, vint32m8_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i32m4_mu(vm, vd, vs, vl);
}

vint64m1_t test_vunzipo_v_i64m1_mu(vbool64_t vm, vint64m1_t vd, vint64m2_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i64m1_mu(vm, vd, vs, vl);
}

vint64m2_t test_vunzipo_v_i64m2_mu(vbool32_t vm, vint64m2_t vd, vint64m4_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i64m2_mu(vm, vd, vs, vl);
}

vint64m4_t test_vunzipo_v_i64m4_mu(vbool16_t vm, vint64m4_t vd, vint64m8_t vs,
                                   size_t vl) {
  return __riscv_vunzipo_v_i64m4_mu(vm, vd, vs, vl);
}

vuint8mf8_t test_vunzipo_v_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd,
                                    vuint8mf4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf8_mu(vm, vd, vs, vl);
}

vuint8mf4_t test_vunzipo_v_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd,
                                    vuint8mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u8mf4_mu(vm, vd, vs, vl);
}

vuint8mf2_t test_vunzipo_v_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd, vuint8m1_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_u8mf2_mu(vm, vd, vs, vl);
}

vuint8m1_t test_vunzipo_v_u8m1_mu(vbool8_t vm, vuint8m1_t vd, vuint8m2_t vs,
                                  size_t vl) {
  return __riscv_vunzipo_v_u8m1_mu(vm, vd, vs, vl);
}

vuint8m2_t test_vunzipo_v_u8m2_mu(vbool4_t vm, vuint8m2_t vd, vuint8m4_t vs,
                                  size_t vl) {
  return __riscv_vunzipo_v_u8m2_mu(vm, vd, vs, vl);
}

vuint8m4_t test_vunzipo_v_u8m4_mu(vbool2_t vm, vuint8m4_t vd, vuint8m8_t vs,
                                  size_t vl) {
  return __riscv_vunzipo_v_u8m4_mu(vm, vd, vs, vl);
}

vuint16mf4_t test_vunzipo_v_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd,
                                      vuint16mf2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16mf4_mu(vm, vd, vs, vl);
}

vuint16mf2_t test_vunzipo_v_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd,
                                      vuint16m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16mf2_mu(vm, vd, vs, vl);
}

vuint16m1_t test_vunzipo_v_u16m1_mu(vbool16_t vm, vuint16m1_t vd,
                                    vuint16m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u16m1_mu(vm, vd, vs, vl);
}

vuint16m2_t test_vunzipo_v_u16m2_mu(vbool8_t vm, vuint16m2_t vd, vuint16m4_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_u16m2_mu(vm, vd, vs, vl);
}

vuint16m4_t test_vunzipo_v_u16m4_mu(vbool4_t vm, vuint16m4_t vd, vuint16m8_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_u16m4_mu(vm, vd, vs, vl);
}

vuint32mf2_t test_vunzipo_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                      vuint32m1_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32mf2_mu(vm, vd, vs, vl);
}

vuint32m1_t test_vunzipo_v_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                    vuint32m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m1_mu(vm, vd, vs, vl);
}

vuint32m2_t test_vunzipo_v_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                    vuint32m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u32m2_mu(vm, vd, vs, vl);
}

vuint32m4_t test_vunzipo_v_u32m4_mu(vbool8_t vm, vuint32m4_t vd, vuint32m8_t vs,
                                    size_t vl) {
  return __riscv_vunzipo_v_u32m4_mu(vm, vd, vs, vl);
}

vuint64m1_t test_vunzipo_v_u64m1_mu(vbool64_t vm, vuint64m1_t vd,
                                    vuint64m2_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m1_mu(vm, vd, vs, vl);
}

vuint64m2_t test_vunzipo_v_u64m2_mu(vbool32_t vm, vuint64m2_t vd,
                                    vuint64m4_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m2_mu(vm, vd, vs, vl);
}

vuint64m4_t test_vunzipo_v_u64m4_mu(vbool16_t vm, vuint64m4_t vd,
                                    vuint64m8_t vs, size_t vl) {
  return __riscv_vunzipo_v_u64m4_mu(vm, vd, vs, vl);
}
