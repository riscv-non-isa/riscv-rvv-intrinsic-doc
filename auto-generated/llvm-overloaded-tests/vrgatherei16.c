// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vrgatherei16_vv_f16mf4(vfloat16mf4_t vs2, vuint16mf4_t vs1,
                                          size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat16mf2_t test_vrgatherei16_vv_f16mf2(vfloat16mf2_t vs2, vuint16mf2_t vs1,
                                          size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat16m1_t test_vrgatherei16_vv_f16m1(vfloat16m1_t vs2, vuint16m1_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat16m2_t test_vrgatherei16_vv_f16m2(vfloat16m2_t vs2, vuint16m2_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat16m4_t test_vrgatherei16_vv_f16m4(vfloat16m4_t vs2, vuint16m4_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat16m8_t test_vrgatherei16_vv_f16m8(vfloat16m8_t vs2, vuint16m8_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat32mf2_t test_vrgatherei16_vv_f32mf2(vfloat32mf2_t vs2, vuint16mf4_t vs1,
                                          size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat32m1_t test_vrgatherei16_vv_f32m1(vfloat32m1_t vs2, vuint16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat32m2_t test_vrgatherei16_vv_f32m2(vfloat32m2_t vs2, vuint16m1_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat32m4_t test_vrgatherei16_vv_f32m4(vfloat32m4_t vs2, vuint16m2_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat32m8_t test_vrgatherei16_vv_f32m8(vfloat32m8_t vs2, vuint16m4_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat64m1_t test_vrgatherei16_vv_f64m1(vfloat64m1_t vs2, vuint16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat64m2_t test_vrgatherei16_vv_f64m2(vfloat64m2_t vs2, vuint16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat64m4_t test_vrgatherei16_vv_f64m4(vfloat64m4_t vs2, vuint16m1_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat64m8_t test_vrgatherei16_vv_f64m8(vfloat64m8_t vs2, vuint16m2_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint8mf8_t test_vrgatherei16_vv_i8mf8(vint8mf8_t vs2, vuint16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint8mf4_t test_vrgatherei16_vv_i8mf4(vint8mf4_t vs2, vuint16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint8mf2_t test_vrgatherei16_vv_i8mf2(vint8mf2_t vs2, vuint16m1_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint8m1_t test_vrgatherei16_vv_i8m1(vint8m1_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint8m2_t test_vrgatherei16_vv_i8m2(vint8m2_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint8m4_t test_vrgatherei16_vv_i8m4(vint8m4_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint16mf4_t test_vrgatherei16_vv_i16mf4(vint16mf4_t vs2, vuint16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint16mf2_t test_vrgatherei16_vv_i16mf2(vint16mf2_t vs2, vuint16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint16m1_t test_vrgatherei16_vv_i16m1(vint16m1_t vs2, vuint16m1_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint16m2_t test_vrgatherei16_vv_i16m2(vint16m2_t vs2, vuint16m2_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint16m4_t test_vrgatherei16_vv_i16m4(vint16m4_t vs2, vuint16m4_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint16m8_t test_vrgatherei16_vv_i16m8(vint16m8_t vs2, vuint16m8_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint32mf2_t test_vrgatherei16_vv_i32mf2(vint32mf2_t vs2, vuint16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint32m1_t test_vrgatherei16_vv_i32m1(vint32m1_t vs2, vuint16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint32m2_t test_vrgatherei16_vv_i32m2(vint32m2_t vs2, vuint16m1_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint32m4_t test_vrgatherei16_vv_i32m4(vint32m4_t vs2, vuint16m2_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint32m8_t test_vrgatherei16_vv_i32m8(vint32m8_t vs2, vuint16m4_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint64m1_t test_vrgatherei16_vv_i64m1(vint64m1_t vs2, vuint16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint64m2_t test_vrgatherei16_vv_i64m2(vint64m2_t vs2, vuint16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint64m4_t test_vrgatherei16_vv_i64m4(vint64m4_t vs2, vuint16m1_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vint64m8_t test_vrgatherei16_vv_i64m8(vint64m8_t vs2, vuint16m2_t vs1,
                                      size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint8mf8_t test_vrgatherei16_vv_u8mf8(vuint8mf8_t vs2, vuint16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint8mf4_t test_vrgatherei16_vv_u8mf4(vuint8mf4_t vs2, vuint16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint8mf2_t test_vrgatherei16_vv_u8mf2(vuint8mf2_t vs2, vuint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint8m1_t test_vrgatherei16_vv_u8m1(vuint8m1_t vs2, vuint16m2_t vs1,
                                     size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint8m2_t test_vrgatherei16_vv_u8m2(vuint8m2_t vs2, vuint16m4_t vs1,
                                     size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint8m4_t test_vrgatherei16_vv_u8m4(vuint8m4_t vs2, vuint16m8_t vs1,
                                     size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint16mf4_t test_vrgatherei16_vv_u16mf4(vuint16mf4_t vs2, vuint16mf4_t vs1,
                                         size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint16mf2_t test_vrgatherei16_vv_u16mf2(vuint16mf2_t vs2, vuint16mf2_t vs1,
                                         size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint16m1_t test_vrgatherei16_vv_u16m1(vuint16m1_t vs2, vuint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint16m2_t test_vrgatherei16_vv_u16m2(vuint16m2_t vs2, vuint16m2_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint16m4_t test_vrgatherei16_vv_u16m4(vuint16m4_t vs2, vuint16m4_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint16m8_t test_vrgatherei16_vv_u16m8(vuint16m8_t vs2, vuint16m8_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint32mf2_t test_vrgatherei16_vv_u32mf2(vuint32mf2_t vs2, vuint16mf4_t vs1,
                                         size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint32m1_t test_vrgatherei16_vv_u32m1(vuint32m1_t vs2, vuint16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint32m2_t test_vrgatherei16_vv_u32m2(vuint32m2_t vs2, vuint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint32m4_t test_vrgatherei16_vv_u32m4(vuint32m4_t vs2, vuint16m2_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint32m8_t test_vrgatherei16_vv_u32m8(vuint32m8_t vs2, vuint16m4_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint64m1_t test_vrgatherei16_vv_u64m1(vuint64m1_t vs2, vuint16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint64m2_t test_vrgatherei16_vv_u64m2(vuint64m2_t vs2, vuint16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint64m4_t test_vrgatherei16_vv_u64m4(vuint64m4_t vs2, vuint16m1_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vuint64m8_t test_vrgatherei16_vv_u64m8(vuint64m8_t vs2, vuint16m2_t vs1,
                                       size_t vl) {
  return __riscv_vrgatherei16(vs2, vs1, vl);
}

vfloat16mf4_t test_vrgatherei16_vv_f16mf4_m(vbool64_t vm, vfloat16mf4_t vs2,
                                            vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat16mf2_t test_vrgatherei16_vv_f16mf2_m(vbool32_t vm, vfloat16mf2_t vs2,
                                            vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vrgatherei16_vv_f16m1_m(vbool16_t vm, vfloat16m1_t vs2,
                                          vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat16m2_t test_vrgatherei16_vv_f16m2_m(vbool8_t vm, vfloat16m2_t vs2,
                                          vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat16m4_t test_vrgatherei16_vv_f16m4_m(vbool4_t vm, vfloat16m4_t vs2,
                                          vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat16m8_t test_vrgatherei16_vv_f16m8_m(vbool2_t vm, vfloat16m8_t vs2,
                                          vuint16m8_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vrgatherei16_vv_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2,
                                            vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vrgatherei16_vv_f32m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                          vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vrgatherei16_vv_f32m2_m(vbool16_t vm, vfloat32m2_t vs2,
                                          vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vrgatherei16_vv_f32m4_m(vbool8_t vm, vfloat32m4_t vs2,
                                          vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vrgatherei16_vv_f32m8_m(vbool4_t vm, vfloat32m8_t vs2,
                                          vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vrgatherei16_vv_f64m1_m(vbool64_t vm, vfloat64m1_t vs2,
                                          vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat64m2_t test_vrgatherei16_vv_f64m2_m(vbool32_t vm, vfloat64m2_t vs2,
                                          vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat64m4_t test_vrgatherei16_vv_f64m4_m(vbool16_t vm, vfloat64m4_t vs2,
                                          vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vfloat64m8_t test_vrgatherei16_vv_f64m8_m(vbool8_t vm, vfloat64m8_t vs2,
                                          vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint8mf8_t test_vrgatherei16_vv_i8mf8_m(vbool64_t vm, vint8mf8_t vs2,
                                        vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint8mf4_t test_vrgatherei16_vv_i8mf4_m(vbool32_t vm, vint8mf4_t vs2,
                                        vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint8mf2_t test_vrgatherei16_vv_i8mf2_m(vbool16_t vm, vint8mf2_t vs2,
                                        vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint8m1_t test_vrgatherei16_vv_i8m1_m(vbool8_t vm, vint8m1_t vs2,
                                      vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint8m2_t test_vrgatherei16_vv_i8m2_m(vbool4_t vm, vint8m2_t vs2,
                                      vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint8m4_t test_vrgatherei16_vv_i8m4_m(vbool2_t vm, vint8m4_t vs2,
                                      vuint16m8_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint16mf4_t test_vrgatherei16_vv_i16mf4_m(vbool64_t vm, vint16mf4_t vs2,
                                          vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint16mf2_t test_vrgatherei16_vv_i16mf2_m(vbool32_t vm, vint16mf2_t vs2,
                                          vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint16m1_t test_vrgatherei16_vv_i16m1_m(vbool16_t vm, vint16m1_t vs2,
                                        vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint16m2_t test_vrgatherei16_vv_i16m2_m(vbool8_t vm, vint16m2_t vs2,
                                        vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint16m4_t test_vrgatherei16_vv_i16m4_m(vbool4_t vm, vint16m4_t vs2,
                                        vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint16m8_t test_vrgatherei16_vv_i16m8_m(vbool2_t vm, vint16m8_t vs2,
                                        vuint16m8_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint32mf2_t test_vrgatherei16_vv_i32mf2_m(vbool64_t vm, vint32mf2_t vs2,
                                          vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint32m1_t test_vrgatherei16_vv_i32m1_m(vbool32_t vm, vint32m1_t vs2,
                                        vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint32m2_t test_vrgatherei16_vv_i32m2_m(vbool16_t vm, vint32m2_t vs2,
                                        vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint32m4_t test_vrgatherei16_vv_i32m4_m(vbool8_t vm, vint32m4_t vs2,
                                        vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint32m8_t test_vrgatherei16_vv_i32m8_m(vbool4_t vm, vint32m8_t vs2,
                                        vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint64m1_t test_vrgatherei16_vv_i64m1_m(vbool64_t vm, vint64m1_t vs2,
                                        vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint64m2_t test_vrgatherei16_vv_i64m2_m(vbool32_t vm, vint64m2_t vs2,
                                        vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint64m4_t test_vrgatherei16_vv_i64m4_m(vbool16_t vm, vint64m4_t vs2,
                                        vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vint64m8_t test_vrgatherei16_vv_i64m8_m(vbool8_t vm, vint64m8_t vs2,
                                        vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint8mf8_t test_vrgatherei16_vv_u8mf8_m(vbool64_t vm, vuint8mf8_t vs2,
                                         vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint8mf4_t test_vrgatherei16_vv_u8mf4_m(vbool32_t vm, vuint8mf4_t vs2,
                                         vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint8mf2_t test_vrgatherei16_vv_u8mf2_m(vbool16_t vm, vuint8mf2_t vs2,
                                         vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint8m1_t test_vrgatherei16_vv_u8m1_m(vbool8_t vm, vuint8m1_t vs2,
                                       vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint8m2_t test_vrgatherei16_vv_u8m2_m(vbool4_t vm, vuint8m2_t vs2,
                                       vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint8m4_t test_vrgatherei16_vv_u8m4_m(vbool2_t vm, vuint8m4_t vs2,
                                       vuint16m8_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint16mf4_t test_vrgatherei16_vv_u16mf4_m(vbool64_t vm, vuint16mf4_t vs2,
                                           vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint16mf2_t test_vrgatherei16_vv_u16mf2_m(vbool32_t vm, vuint16mf2_t vs2,
                                           vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint16m1_t test_vrgatherei16_vv_u16m1_m(vbool16_t vm, vuint16m1_t vs2,
                                         vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint16m2_t test_vrgatherei16_vv_u16m2_m(vbool8_t vm, vuint16m2_t vs2,
                                         vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint16m4_t test_vrgatherei16_vv_u16m4_m(vbool4_t vm, vuint16m4_t vs2,
                                         vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint16m8_t test_vrgatherei16_vv_u16m8_m(vbool2_t vm, vuint16m8_t vs2,
                                         vuint16m8_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint32mf2_t test_vrgatherei16_vv_u32mf2_m(vbool64_t vm, vuint32mf2_t vs2,
                                           vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint32m1_t test_vrgatherei16_vv_u32m1_m(vbool32_t vm, vuint32m1_t vs2,
                                         vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint32m2_t test_vrgatherei16_vv_u32m2_m(vbool16_t vm, vuint32m2_t vs2,
                                         vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint32m4_t test_vrgatherei16_vv_u32m4_m(vbool8_t vm, vuint32m4_t vs2,
                                         vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint32m8_t test_vrgatherei16_vv_u32m8_m(vbool4_t vm, vuint32m8_t vs2,
                                         vuint16m4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint64m1_t test_vrgatherei16_vv_u64m1_m(vbool64_t vm, vuint64m1_t vs2,
                                         vuint16mf4_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint64m2_t test_vrgatherei16_vv_u64m2_m(vbool32_t vm, vuint64m2_t vs2,
                                         vuint16mf2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint64m4_t test_vrgatherei16_vv_u64m4_m(vbool16_t vm, vuint64m4_t vs2,
                                         vuint16m1_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}

vuint64m8_t test_vrgatherei16_vv_u64m8_m(vbool8_t vm, vuint64m8_t vs2,
                                         vuint16m2_t vs1, size_t vl) {
  return __riscv_vrgatherei16(vm, vs2, vs1, vl);
}
