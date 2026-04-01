// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vcompress_vm_f16mf4_tu(vfloat16mf4_t vd, vfloat16mf4_t vs2,
                                          vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f16mf4_tu(vd, vs2, vs1, vl);
}

vfloat16mf2_t test_vcompress_vm_f16mf2_tu(vfloat16mf2_t vd, vfloat16mf2_t vs2,
                                          vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f16mf2_tu(vd, vs2, vs1, vl);
}

vfloat16m1_t test_vcompress_vm_f16m1_tu(vfloat16m1_t vd, vfloat16m1_t vs2,
                                        vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f16m1_tu(vd, vs2, vs1, vl);
}

vfloat16m2_t test_vcompress_vm_f16m2_tu(vfloat16m2_t vd, vfloat16m2_t vs2,
                                        vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f16m2_tu(vd, vs2, vs1, vl);
}

vfloat16m4_t test_vcompress_vm_f16m4_tu(vfloat16m4_t vd, vfloat16m4_t vs2,
                                        vbool4_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f16m4_tu(vd, vs2, vs1, vl);
}

vfloat16m8_t test_vcompress_vm_f16m8_tu(vfloat16m8_t vd, vfloat16m8_t vs2,
                                        vbool2_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f16m8_tu(vd, vs2, vs1, vl);
}

vfloat32mf2_t test_vcompress_vm_f32mf2_tu(vfloat32mf2_t vd, vfloat32mf2_t vs2,
                                          vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f32mf2_tu(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vcompress_vm_f32m1_tu(vfloat32m1_t vd, vfloat32m1_t vs2,
                                        vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f32m1_tu(vd, vs2, vs1, vl);
}

vfloat32m2_t test_vcompress_vm_f32m2_tu(vfloat32m2_t vd, vfloat32m2_t vs2,
                                        vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f32m2_tu(vd, vs2, vs1, vl);
}

vfloat32m4_t test_vcompress_vm_f32m4_tu(vfloat32m4_t vd, vfloat32m4_t vs2,
                                        vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f32m4_tu(vd, vs2, vs1, vl);
}

vfloat32m8_t test_vcompress_vm_f32m8_tu(vfloat32m8_t vd, vfloat32m8_t vs2,
                                        vbool4_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f32m8_tu(vd, vs2, vs1, vl);
}

vfloat64m1_t test_vcompress_vm_f64m1_tu(vfloat64m1_t vd, vfloat64m1_t vs2,
                                        vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f64m1_tu(vd, vs2, vs1, vl);
}

vfloat64m2_t test_vcompress_vm_f64m2_tu(vfloat64m2_t vd, vfloat64m2_t vs2,
                                        vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f64m2_tu(vd, vs2, vs1, vl);
}

vfloat64m4_t test_vcompress_vm_f64m4_tu(vfloat64m4_t vd, vfloat64m4_t vs2,
                                        vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f64m4_tu(vd, vs2, vs1, vl);
}

vfloat64m8_t test_vcompress_vm_f64m8_tu(vfloat64m8_t vd, vfloat64m8_t vs2,
                                        vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_f64m8_tu(vd, vs2, vs1, vl);
}

vint8mf8_t test_vcompress_vm_i8mf8_tu(vint8mf8_t vd, vint8mf8_t vs2,
                                      vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i8mf8_tu(vd, vs2, vs1, vl);
}

vint8mf4_t test_vcompress_vm_i8mf4_tu(vint8mf4_t vd, vint8mf4_t vs2,
                                      vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i8mf4_tu(vd, vs2, vs1, vl);
}

vint8mf2_t test_vcompress_vm_i8mf2_tu(vint8mf2_t vd, vint8mf2_t vs2,
                                      vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i8mf2_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vcompress_vm_i8m1_tu(vint8m1_t vd, vint8m1_t vs2, vbool8_t vs1,
                                    size_t vl) {
  return __riscv_vcompress_vm_i8m1_tu(vd, vs2, vs1, vl);
}

vint8m2_t test_vcompress_vm_i8m2_tu(vint8m2_t vd, vint8m2_t vs2, vbool4_t vs1,
                                    size_t vl) {
  return __riscv_vcompress_vm_i8m2_tu(vd, vs2, vs1, vl);
}

vint8m4_t test_vcompress_vm_i8m4_tu(vint8m4_t vd, vint8m4_t vs2, vbool2_t vs1,
                                    size_t vl) {
  return __riscv_vcompress_vm_i8m4_tu(vd, vs2, vs1, vl);
}

vint8m8_t test_vcompress_vm_i8m8_tu(vint8m8_t vd, vint8m8_t vs2, vbool1_t vs1,
                                    size_t vl) {
  return __riscv_vcompress_vm_i8m8_tu(vd, vs2, vs1, vl);
}

vint16mf4_t test_vcompress_vm_i16mf4_tu(vint16mf4_t vd, vint16mf4_t vs2,
                                        vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i16mf4_tu(vd, vs2, vs1, vl);
}

vint16mf2_t test_vcompress_vm_i16mf2_tu(vint16mf2_t vd, vint16mf2_t vs2,
                                        vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i16mf2_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vcompress_vm_i16m1_tu(vint16m1_t vd, vint16m1_t vs2,
                                      vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i16m1_tu(vd, vs2, vs1, vl);
}

vint16m2_t test_vcompress_vm_i16m2_tu(vint16m2_t vd, vint16m2_t vs2,
                                      vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i16m2_tu(vd, vs2, vs1, vl);
}

vint16m4_t test_vcompress_vm_i16m4_tu(vint16m4_t vd, vint16m4_t vs2,
                                      vbool4_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i16m4_tu(vd, vs2, vs1, vl);
}

vint16m8_t test_vcompress_vm_i16m8_tu(vint16m8_t vd, vint16m8_t vs2,
                                      vbool2_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i16m8_tu(vd, vs2, vs1, vl);
}

vint32mf2_t test_vcompress_vm_i32mf2_tu(vint32mf2_t vd, vint32mf2_t vs2,
                                        vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i32mf2_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vcompress_vm_i32m1_tu(vint32m1_t vd, vint32m1_t vs2,
                                      vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m2_t test_vcompress_vm_i32m2_tu(vint32m2_t vd, vint32m2_t vs2,
                                      vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i32m2_tu(vd, vs2, vs1, vl);
}

vint32m4_t test_vcompress_vm_i32m4_tu(vint32m4_t vd, vint32m4_t vs2,
                                      vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i32m4_tu(vd, vs2, vs1, vl);
}

vint32m8_t test_vcompress_vm_i32m8_tu(vint32m8_t vd, vint32m8_t vs2,
                                      vbool4_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i32m8_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vcompress_vm_i64m1_tu(vint64m1_t vd, vint64m1_t vs2,
                                      vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m2_t test_vcompress_vm_i64m2_tu(vint64m2_t vd, vint64m2_t vs2,
                                      vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i64m2_tu(vd, vs2, vs1, vl);
}

vint64m4_t test_vcompress_vm_i64m4_tu(vint64m4_t vd, vint64m4_t vs2,
                                      vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i64m4_tu(vd, vs2, vs1, vl);
}

vint64m8_t test_vcompress_vm_i64m8_tu(vint64m8_t vd, vint64m8_t vs2,
                                      vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_i64m8_tu(vd, vs2, vs1, vl);
}

vuint8mf8_t test_vcompress_vm_u8mf8_tu(vuint8mf8_t vd, vuint8mf8_t vs2,
                                       vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u8mf8_tu(vd, vs2, vs1, vl);
}

vuint8mf4_t test_vcompress_vm_u8mf4_tu(vuint8mf4_t vd, vuint8mf4_t vs2,
                                       vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u8mf4_tu(vd, vs2, vs1, vl);
}

vuint8mf2_t test_vcompress_vm_u8mf2_tu(vuint8mf2_t vd, vuint8mf2_t vs2,
                                       vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u8mf2_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vcompress_vm_u8m1_tu(vuint8m1_t vd, vuint8m1_t vs2,
                                     vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u8m1_tu(vd, vs2, vs1, vl);
}

vuint8m2_t test_vcompress_vm_u8m2_tu(vuint8m2_t vd, vuint8m2_t vs2,
                                     vbool4_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u8m2_tu(vd, vs2, vs1, vl);
}

vuint8m4_t test_vcompress_vm_u8m4_tu(vuint8m4_t vd, vuint8m4_t vs2,
                                     vbool2_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u8m4_tu(vd, vs2, vs1, vl);
}

vuint8m8_t test_vcompress_vm_u8m8_tu(vuint8m8_t vd, vuint8m8_t vs2,
                                     vbool1_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u8m8_tu(vd, vs2, vs1, vl);
}

vuint16mf4_t test_vcompress_vm_u16mf4_tu(vuint16mf4_t vd, vuint16mf4_t vs2,
                                         vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u16mf4_tu(vd, vs2, vs1, vl);
}

vuint16mf2_t test_vcompress_vm_u16mf2_tu(vuint16mf2_t vd, vuint16mf2_t vs2,
                                         vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u16mf2_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vcompress_vm_u16m1_tu(vuint16m1_t vd, vuint16m1_t vs2,
                                       vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m2_t test_vcompress_vm_u16m2_tu(vuint16m2_t vd, vuint16m2_t vs2,
                                       vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u16m2_tu(vd, vs2, vs1, vl);
}

vuint16m4_t test_vcompress_vm_u16m4_tu(vuint16m4_t vd, vuint16m4_t vs2,
                                       vbool4_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u16m4_tu(vd, vs2, vs1, vl);
}

vuint16m8_t test_vcompress_vm_u16m8_tu(vuint16m8_t vd, vuint16m8_t vs2,
                                       vbool2_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u16m8_tu(vd, vs2, vs1, vl);
}

vuint32mf2_t test_vcompress_vm_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                         vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u32mf2_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vcompress_vm_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                       vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m2_t test_vcompress_vm_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                       vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u32m2_tu(vd, vs2, vs1, vl);
}

vuint32m4_t test_vcompress_vm_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                       vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u32m4_tu(vd, vs2, vs1, vl);
}

vuint32m8_t test_vcompress_vm_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs2,
                                       vbool4_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u32m8_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vcompress_vm_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2,
                                       vbool64_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m2_t test_vcompress_vm_u64m2_tu(vuint64m2_t vd, vuint64m2_t vs2,
                                       vbool32_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u64m2_tu(vd, vs2, vs1, vl);
}

vuint64m4_t test_vcompress_vm_u64m4_tu(vuint64m4_t vd, vuint64m4_t vs2,
                                       vbool16_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u64m4_tu(vd, vs2, vs1, vl);
}

vuint64m8_t test_vcompress_vm_u64m8_tu(vuint64m8_t vd, vuint64m8_t vs2,
                                       vbool8_t vs1, size_t vl) {
  return __riscv_vcompress_vm_u64m8_tu(vd, vs2, vs1, vl);
}
