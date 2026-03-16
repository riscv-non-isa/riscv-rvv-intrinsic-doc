// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfh \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tu(vint8mf8_t vd, vfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf8_tu(vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tu(vint8mf4_t vd, vfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf4_tu(vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tu(vint8mf2_t vd, vfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf2_tu(vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tu(vint8m1_t vd, vfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m1_tu(vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tu(vint8m2_t vd, vfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m2_tu(vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tu(vint8m4_t vd, vfloat16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m4_tu(vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tu(vuint8mf8_t vd, vfloat16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf8_tu(vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tu(vuint8mf4_t vd, vfloat16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf4_tu(vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tu(vuint8mf2_t vd, vfloat16m1_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf2_tu(vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tu(vuint8m1_t vd, vfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m1_tu(vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tu(vuint8m2_t vd, vfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m2_tu(vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tu(vuint8m4_t vd, vfloat16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m4_tu(vd, vs2, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tu(vint16mf4_t vd, vfloat32mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf4_tu(vd, vs2, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tu(vint16mf2_t vd, vfloat32m1_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf2_tu(vd, vs2, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tu(vint16m1_t vd, vfloat32m2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m1_tu(vd, vs2, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tu(vint16m2_t vd, vfloat32m4_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m2_tu(vd, vs2, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tu(vint16m4_t vd, vfloat32m8_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m4_tu(vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tu(vuint16mf4_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf4_tu(vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tu(vuint16mf2_t vd, vfloat32m1_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf2_tu(vd, vs2, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tu(vuint16m1_t vd, vfloat32m2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m1_tu(vd, vs2, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tu(vuint16m2_t vd, vfloat32m4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m2_tu(vd, vs2, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tu(vuint16m4_t vd, vfloat32m8_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m4_tu(vd, vs2, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tu(vint32mf2_t vd, vfloat64m1_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32mf2_tu(vd, vs2, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tu(vint32m1_t vd, vfloat64m2_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m1_tu(vd, vs2, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tu(vint32m2_t vd, vfloat64m4_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m2_tu(vd, vs2, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tu(vint32m4_t vd, vfloat64m8_t vs2,
                                          size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m4_tu(vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tu(vuint32mf2_t vd, vfloat64m1_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32mf2_tu(vd, vs2, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tu(vuint32m1_t vd, vfloat64m2_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m1_tu(vd, vs2, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tu(vuint32m2_t vd, vfloat64m4_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m2_tu(vd, vs2, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tu(vuint32m4_t vd, vfloat64m8_t vs2,
                                            size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m4_tu(vd, vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tum(vbool64_t vm, vint8mf8_t vd,
                                           vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf8_tum(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tum(vbool32_t vm, vint8mf4_t vd,
                                           vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf4_tum(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tum(vbool16_t vm, vint8mf2_t vd,
                                           vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf2_tum(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tum(vbool8_t vm, vint8m1_t vd,
                                         vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m1_tum(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tum(vbool4_t vm, vint8m2_t vd,
                                         vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m2_tum(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tum(vbool2_t vm, vint8m4_t vd,
                                         vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m4_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd,
                                             vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf8_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd,
                                             vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf4_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd,
                                             vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf2_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tum(vbool8_t vm, vuint8m1_t vd,
                                           vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m1_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tum(vbool4_t vm, vuint8m2_t vd,
                                           vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m2_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tum(vbool2_t vm, vuint8m4_t vd,
                                           vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m4_tum(vm, vd, vs2, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                             vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf4_tum(vm, vd, vs2, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                             vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf2_tum(vm, vd, vs2, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tum(vbool16_t vm, vint16m1_t vd,
                                           vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m1_tum(vm, vd, vs2, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tum(vbool8_t vm, vint16m2_t vd,
                                           vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m2_tum(vm, vd, vs2, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tum(vbool4_t vm, vint16m4_t vd,
                                           vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m4_tum(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd,
                                               vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf4_tum(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd,
                                               vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf2_tum(vm, vd, vs2, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tum(vbool16_t vm, vuint16m1_t vd,
                                             vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m1_tum(vm, vd, vs2, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tum(vbool8_t vm, vuint16m2_t vd,
                                             vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m2_tum(vm, vd, vs2, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tum(vbool4_t vm, vuint16m4_t vd,
                                             vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m4_tum(vm, vd, vs2, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                             vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32mf2_tum(vm, vd, vs2, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tum(vbool32_t vm, vint32m1_t vd,
                                           vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m1_tum(vm, vd, vs2, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tum(vbool16_t vm, vint32m2_t vd,
                                           vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m2_tum(vm, vd, vs2, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tum(vbool8_t vm, vint32m4_t vd,
                                           vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m4_tum(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                               vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32mf2_tum(vm, vd, vs2, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                             vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m1_tum(vm, vd, vs2, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                             vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m2_tum(vm, vd, vs2, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                             vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m4_tum(vm, vd, vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf8_tumu(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf4_tumu(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd,
                                            vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf2_tumu(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_tumu(vbool8_t vm, vint8m1_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m1_tumu(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_tumu(vbool4_t vm, vint8m2_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m2_tumu(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_tumu(vbool2_t vm, vint8m4_t vd,
                                          vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m4_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd,
                                              vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf8_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd,
                                              vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf4_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd,
                                              vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf2_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_tumu(vbool8_t vm, vuint8m1_t vd,
                                            vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m1_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_tumu(vbool4_t vm, vuint8m2_t vd,
                                            vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m2_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_tumu(vbool2_t vm, vuint8m4_t vd,
                                            vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m4_tumu(vm, vd, vs2, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf4_tumu(vm, vd, vs2, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                              vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf2_tumu(vm, vd, vs2, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_tumu(vbool16_t vm, vint16m1_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m1_tumu(vm, vd, vs2, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_tumu(vbool8_t vm, vint16m2_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m2_tumu(vm, vd, vs2, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_tumu(vbool4_t vm, vint16m4_t vd,
                                            vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m4_tumu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd,
                                                vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf4_tumu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd,
                                                vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf2_tumu(vm, vd, vs2, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_tumu(vbool16_t vm, vuint16m1_t vd,
                                              vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m1_tumu(vm, vd, vs2, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_tumu(vbool8_t vm, vuint16m2_t vd,
                                              vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m2_tumu(vm, vd, vs2, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_tumu(vbool4_t vm, vuint16m4_t vd,
                                              vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m4_tumu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                              vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32mf2_tumu(vm, vd, vs2, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                            vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m1_tumu(vm, vd, vs2, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_tumu(vbool16_t vm, vint32m2_t vd,
                                            vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m2_tumu(vm, vd, vs2, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_tumu(vbool8_t vm, vint32m4_t vd,
                                            vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m4_tumu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                                vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32mf2_tumu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                              vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m1_tumu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                              vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m2_tumu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                              vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m4_tumu(vm, vd, vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_i8mf8_mu(vbool64_t vm, vint8mf8_t vd,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf8_mu(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_i8mf4_mu(vbool32_t vm, vint8mf4_t vd,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf4_mu(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_i8mf2_mu(vbool16_t vm, vint8mf2_t vd,
                                          vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8mf2_mu(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_i8m1_mu(vbool8_t vm, vint8m1_t vd,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m1_mu(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_i8m2_mu(vbool4_t vm, vint8m2_t vd,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m2_mu(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_i8m4_mu(vbool2_t vm, vint8m4_t vd,
                                        vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i8m4_mu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf8_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf4_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd,
                                            vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8mf2_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_u8m1_mu(vbool8_t vm, vuint8m1_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m1_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_u8m2_mu(vbool4_t vm, vuint8m2_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m2_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_u8m4_mu(vbool2_t vm, vuint8m4_t vd,
                                          vfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u8m4_mu(vm, vd, vs2, vl);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf4_mu(vm, vd, vs2, vl);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                            vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16mf2_mu(vm, vd, vs2, vl);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_mu(vbool16_t vm, vint16m1_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m1_mu(vm, vd, vs2, vl);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_mu(vbool8_t vm, vint16m2_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m2_mu(vm, vd, vs2, vl);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_mu(vbool4_t vm, vint16m4_t vd,
                                          vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i16m4_mu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf4_mu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd,
                                              vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16mf2_mu(vm, vd, vs2, vl);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_mu(vbool16_t vm, vuint16m1_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m1_mu(vm, vd, vs2, vl);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_mu(vbool8_t vm, vuint16m2_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m2_mu(vm, vd, vs2, vl);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_mu(vbool4_t vm, vuint16m4_t vd,
                                            vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u16m4_mu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                            vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32mf2_mu(vm, vd, vs2, vl);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_mu(vbool32_t vm, vint32m1_t vd,
                                          vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m1_mu(vm, vd, vs2, vl);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_mu(vbool16_t vm, vint32m2_t vd,
                                          vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m2_mu(vm, vd, vs2, vl);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_mu(vbool8_t vm, vint32m4_t vd,
                                          vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_i32m4_mu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                              vfloat64m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32mf2_mu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                            vfloat64m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m1_mu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                            vfloat64m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m2_mu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_mu(vbool8_t vm, vuint32m4_t vd,
                                            vfloat64m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_u32m4_mu(vm, vd, vs2, vl);
}
