// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_tu(vfloat16mf4x2_t vd,
                                               const _Float16 *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf4x2_tu(vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_tu(vfloat16mf2x2_t vd,
                                               const _Float16 *rs1,
                                               vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf2x2_tu(vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_tu(vfloat16m1x2_t vd,
                                             const _Float16 *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m1x2_tu(vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_tu(vfloat16m2x2_t vd,
                                             const _Float16 *rs1,
                                             vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m2x2_tu(vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_tu(vfloat16m4x2_t vd,
                                             const _Float16 *rs1,
                                             vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m4x2_tu(vd, rs1, rs2, vl);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_tu(vfloat32mf2x2_t vd,
                                               const float *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f32mf2x2_tu(vd, rs1, rs2, vl);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_tu(vfloat32m1x2_t vd,
                                             const float *rs1, vuint8mf4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m1x2_tu(vd, rs1, rs2, vl);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_tu(vfloat32m2x2_t vd,
                                             const float *rs1, vuint8mf2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m2x2_tu(vd, rs1, rs2, vl);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_tu(vfloat32m4x2_t vd,
                                             const float *rs1, vuint8m1_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m4x2_tu(vd, rs1, rs2, vl);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_tu(vfloat64m1x2_t vd,
                                             const double *rs1, vuint8mf8_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m1x2_tu(vd, rs1, rs2, vl);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_tu(vfloat64m2x2_t vd,
                                             const double *rs1, vuint8mf4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m2x2_tu(vd, rs1, rs2, vl);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_tu(vfloat64m4x2_t vd,
                                             const double *rs1, vuint8mf2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m4x2_tu(vd, rs1, rs2, vl);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_tu(vint8mf8x2_t vd, const int8_t *rs1,
                                           vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf8x2_tu(vd, rs1, rs2, vl);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_tu(vint8mf4x2_t vd, const int8_t *rs1,
                                           vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf4x2_tu(vd, rs1, rs2, vl);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_tu(vint8mf2x2_t vd, const int8_t *rs1,
                                           vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf2x2_tu(vd, rs1, rs2, vl);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_tu(vint8m1x2_t vd, const int8_t *rs1,
                                         vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m1x2_tu(vd, rs1, rs2, vl);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_tu(vint8m2x2_t vd, const int8_t *rs1,
                                         vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m2x2_tu(vd, rs1, rs2, vl);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_tu(vint8m4x2_t vd, const int8_t *rs1,
                                         vuint8m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m4x2_tu(vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_tu(vint16mf4x2_t vd,
                                             const int16_t *rs1,
                                             vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf4x2_tu(vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_tu(vint16mf2x2_t vd,
                                             const int16_t *rs1,
                                             vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf2x2_tu(vd, rs1, rs2, vl);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_tu(vint16m1x2_t vd, const int16_t *rs1,
                                           vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m1x2_tu(vd, rs1, rs2, vl);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_tu(vint16m2x2_t vd, const int16_t *rs1,
                                           vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m2x2_tu(vd, rs1, rs2, vl);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_tu(vint16m4x2_t vd, const int16_t *rs1,
                                           vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m4x2_tu(vd, rs1, rs2, vl);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_tu(vint32mf2x2_t vd,
                                             const int32_t *rs1,
                                             vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32mf2x2_tu(vd, rs1, rs2, vl);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_tu(vint32m1x2_t vd, const int32_t *rs1,
                                           vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m1x2_tu(vd, rs1, rs2, vl);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_tu(vint32m2x2_t vd, const int32_t *rs1,
                                           vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m2x2_tu(vd, rs1, rs2, vl);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_tu(vint32m4x2_t vd, const int32_t *rs1,
                                           vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m4x2_tu(vd, rs1, rs2, vl);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_tu(vint64m1x2_t vd, const int64_t *rs1,
                                           vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m1x2_tu(vd, rs1, rs2, vl);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_tu(vint64m2x2_t vd, const int64_t *rs1,
                                           vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m2x2_tu(vd, rs1, rs2, vl);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_tu(vint64m4x2_t vd, const int64_t *rs1,
                                           vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m4x2_tu(vd, rs1, rs2, vl);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_tu(vuint8mf8x2_t vd,
                                            const uint8_t *rs1, vuint8mf8_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf8x2_tu(vd, rs1, rs2, vl);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_tu(vuint8mf4x2_t vd,
                                            const uint8_t *rs1, vuint8mf4_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf4x2_tu(vd, rs1, rs2, vl);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_tu(vuint8mf2x2_t vd,
                                            const uint8_t *rs1, vuint8mf2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf2x2_tu(vd, rs1, rs2, vl);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_tu(vuint8m1x2_t vd, const uint8_t *rs1,
                                          vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m1x2_tu(vd, rs1, rs2, vl);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_tu(vuint8m2x2_t vd, const uint8_t *rs1,
                                          vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m2x2_tu(vd, rs1, rs2, vl);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_tu(vuint8m4x2_t vd, const uint8_t *rs1,
                                          vuint8m4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m4x2_tu(vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_tu(vuint16mf4x2_t vd,
                                              const uint16_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf4x2_tu(vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_tu(vuint16mf2x2_t vd,
                                              const uint16_t *rs1,
                                              vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf2x2_tu(vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_tu(vuint16m1x2_t vd,
                                            const uint16_t *rs1,
                                            vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m1x2_tu(vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_tu(vuint16m2x2_t vd,
                                            const uint16_t *rs1, vuint8m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m2x2_tu(vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_tu(vuint16m4x2_t vd,
                                            const uint16_t *rs1, vuint8m2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m4x2_tu(vd, rs1, rs2, vl);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_tu(vuint32mf2x2_t vd,
                                              const uint32_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32mf2x2_tu(vd, rs1, rs2, vl);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_tu(vuint32m1x2_t vd,
                                            const uint32_t *rs1,
                                            vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m1x2_tu(vd, rs1, rs2, vl);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_tu(vuint32m2x2_t vd,
                                            const uint32_t *rs1,
                                            vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m2x2_tu(vd, rs1, rs2, vl);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_tu(vuint32m4x2_t vd,
                                            const uint32_t *rs1, vuint8m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m4x2_tu(vd, rs1, rs2, vl);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_tu(vuint64m1x2_t vd,
                                            const uint64_t *rs1,
                                            vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m1x2_tu(vd, rs1, rs2, vl);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_tu(vuint64m2x2_t vd,
                                            const uint64_t *rs1,
                                            vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m2x2_tu(vd, rs1, rs2, vl);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_tu(vuint64m4x2_t vd,
                                            const uint64_t *rs1,
                                            vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m4x2_tu(vd, rs1, rs2, vl);
}

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_tum(vbool64_t vm,
                                                vfloat16mf4x2_t vd,
                                                const _Float16 *rs1,
                                                vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_tum(vbool32_t vm,
                                                vfloat16mf2x2_t vd,
                                                const _Float16 *rs1,
                                                vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_tum(vbool16_t vm, vfloat16m1x2_t vd,
                                              const _Float16 *rs1,
                                              vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m1x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_tum(vbool8_t vm, vfloat16m2x2_t vd,
                                              const _Float16 *rs1,
                                              vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m2x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_tum(vbool4_t vm, vfloat16m4x2_t vd,
                                              const _Float16 *rs1,
                                              vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m4x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_tum(vbool64_t vm,
                                                vfloat32mf2x2_t vd,
                                                const float *rs1,
                                                vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f32mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_tum(vbool32_t vm, vfloat32m1x2_t vd,
                                              const float *rs1, vuint8mf4_t rs2,
                                              size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m1x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_tum(vbool16_t vm, vfloat32m2x2_t vd,
                                              const float *rs1, vuint8mf2_t rs2,
                                              size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m2x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_tum(vbool8_t vm, vfloat32m4x2_t vd,
                                              const float *rs1, vuint8m1_t rs2,
                                              size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m4x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_tum(vbool64_t vm, vfloat64m1x2_t vd,
                                              const double *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m1x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_tum(vbool32_t vm, vfloat64m2x2_t vd,
                                              const double *rs1,
                                              vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m2x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_tum(vbool16_t vm, vfloat64m4x2_t vd,
                                              const double *rs1,
                                              vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m4x2_tum(vm, vd, rs1, rs2, vl);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_tum(vbool64_t vm, vint8mf8x2_t vd,
                                            const int8_t *rs1, vuint8mf8_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf8x2_tum(vm, vd, rs1, rs2, vl);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_tum(vbool32_t vm, vint8mf4x2_t vd,
                                            const int8_t *rs1, vuint8mf4_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_tum(vbool16_t vm, vint8mf2x2_t vd,
                                            const int8_t *rs1, vuint8mf2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_tum(vbool8_t vm, vint8m1x2_t vd,
                                          const int8_t *rs1, vuint8m1_t rs2,
                                          size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m1x2_tum(vm, vd, rs1, rs2, vl);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_tum(vbool4_t vm, vint8m2x2_t vd,
                                          const int8_t *rs1, vuint8m2_t rs2,
                                          size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m2x2_tum(vm, vd, rs1, rs2, vl);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_tum(vbool2_t vm, vint8m4x2_t vd,
                                          const int8_t *rs1, vuint8m4_t rs2,
                                          size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m4x2_tum(vm, vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_tum(vbool64_t vm, vint16mf4x2_t vd,
                                              const int16_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_tum(vbool32_t vm, vint16mf2x2_t vd,
                                              const int16_t *rs1,
                                              vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_tum(vbool16_t vm, vint16m1x2_t vd,
                                            const int16_t *rs1, vuint8mf2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m1x2_tum(vm, vd, rs1, rs2, vl);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_tum(vbool8_t vm, vint16m2x2_t vd,
                                            const int16_t *rs1, vuint8m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m2x2_tum(vm, vd, rs1, rs2, vl);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_tum(vbool4_t vm, vint16m4x2_t vd,
                                            const int16_t *rs1, vuint8m2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m4x2_tum(vm, vd, rs1, rs2, vl);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_tum(vbool64_t vm, vint32mf2x2_t vd,
                                              const int32_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_tum(vbool32_t vm, vint32m1x2_t vd,
                                            const int32_t *rs1, vuint8mf4_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m1x2_tum(vm, vd, rs1, rs2, vl);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_tum(vbool16_t vm, vint32m2x2_t vd,
                                            const int32_t *rs1, vuint8mf2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m2x2_tum(vm, vd, rs1, rs2, vl);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_tum(vbool8_t vm, vint32m4x2_t vd,
                                            const int32_t *rs1, vuint8m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m4x2_tum(vm, vd, rs1, rs2, vl);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_tum(vbool64_t vm, vint64m1x2_t vd,
                                            const int64_t *rs1, vuint8mf8_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m1x2_tum(vm, vd, rs1, rs2, vl);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_tum(vbool32_t vm, vint64m2x2_t vd,
                                            const int64_t *rs1, vuint8mf4_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m2x2_tum(vm, vd, rs1, rs2, vl);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_tum(vbool16_t vm, vint64m4x2_t vd,
                                            const int64_t *rs1, vuint8mf2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_tum(vbool64_t vm, vuint8mf8x2_t vd,
                                             const uint8_t *rs1,
                                             vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf8x2_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_tum(vbool32_t vm, vuint8mf4x2_t vd,
                                             const uint8_t *rs1,
                                             vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_tum(vbool16_t vm, vuint8mf2x2_t vd,
                                             const uint8_t *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_tum(vbool8_t vm, vuint8m1x2_t vd,
                                           const uint8_t *rs1, vuint8m1_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m1x2_tum(vm, vd, rs1, rs2, vl);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_tum(vbool4_t vm, vuint8m2x2_t vd,
                                           const uint8_t *rs1, vuint8m2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_tum(vbool2_t vm, vuint8m4x2_t vd,
                                           const uint8_t *rs1, vuint8m4_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_tum(vbool64_t vm, vuint16mf4x2_t vd,
                                               const uint16_t *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_tum(vbool32_t vm, vuint16mf2x2_t vd,
                                               const uint16_t *rs1,
                                               vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_tum(vbool16_t vm, vuint16m1x2_t vd,
                                             const uint16_t *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m1x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_tum(vbool8_t vm, vuint16m2x2_t vd,
                                             const uint16_t *rs1,
                                             vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_tum(vbool4_t vm, vuint16m4x2_t vd,
                                             const uint16_t *rs1,
                                             vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_tum(vbool64_t vm, vuint32mf2x2_t vd,
                                               const uint32_t *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32mf2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_tum(vbool32_t vm, vuint32m1x2_t vd,
                                             const uint32_t *rs1,
                                             vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m1x2_tum(vm, vd, rs1, rs2, vl);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_tum(vbool16_t vm, vuint32m2x2_t vd,
                                             const uint32_t *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_tum(vbool8_t vm, vuint32m4x2_t vd,
                                             const uint32_t *rs1,
                                             vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m4x2_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_tum(vbool64_t vm, vuint64m1x2_t vd,
                                             const uint64_t *rs1,
                                             vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m1x2_tum(vm, vd, rs1, rs2, vl);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_tum(vbool32_t vm, vuint64m2x2_t vd,
                                             const uint64_t *rs1,
                                             vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m2x2_tum(vm, vd, rs1, rs2, vl);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_tum(vbool16_t vm, vuint64m4x2_t vd,
                                             const uint64_t *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m4x2_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_tumu(vbool64_t vm,
                                                 vfloat16mf4x2_t vd,
                                                 const _Float16 *rs1,
                                                 vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_tumu(vbool32_t vm,
                                                 vfloat16mf2x2_t vd,
                                                 const _Float16 *rs1,
                                                 vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_tumu(vbool16_t vm, vfloat16m1x2_t vd,
                                               const _Float16 *rs1,
                                               vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_tumu(vbool8_t vm, vfloat16m2x2_t vd,
                                               const _Float16 *rs1,
                                               vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_tumu(vbool4_t vm, vfloat16m4x2_t vd,
                                               const _Float16 *rs1,
                                               vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_tumu(vbool64_t vm,
                                                 vfloat32mf2x2_t vd,
                                                 const float *rs1,
                                                 vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f32mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_tumu(vbool32_t vm, vfloat32m1x2_t vd,
                                               const float *rs1,
                                               vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_tumu(vbool16_t vm, vfloat32m2x2_t vd,
                                               const float *rs1,
                                               vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_tumu(vbool8_t vm, vfloat32m4x2_t vd,
                                               const float *rs1, vuint8m1_t rs2,
                                               size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_tumu(vbool64_t vm, vfloat64m1x2_t vd,
                                               const double *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_tumu(vbool32_t vm, vfloat64m2x2_t vd,
                                               const double *rs1,
                                               vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_tumu(vbool16_t vm, vfloat64m4x2_t vd,
                                               const double *rs1,
                                               vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_tumu(vbool64_t vm, vint8mf8x2_t vd,
                                             const int8_t *rs1, vuint8mf8_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf8x2_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_tumu(vbool32_t vm, vint8mf4x2_t vd,
                                             const int8_t *rs1, vuint8mf4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_tumu(vbool16_t vm, vint8mf2x2_t vd,
                                             const int8_t *rs1, vuint8mf2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_tumu(vbool8_t vm, vint8m1x2_t vd,
                                           const int8_t *rs1, vuint8m1_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_tumu(vbool4_t vm, vint8m2x2_t vd,
                                           const int8_t *rs1, vuint8m2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_tumu(vbool2_t vm, vint8m4x2_t vd,
                                           const int8_t *rs1, vuint8m4_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_tumu(vbool64_t vm, vint16mf4x2_t vd,
                                               const int16_t *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_tumu(vbool32_t vm, vint16mf2x2_t vd,
                                               const int16_t *rs1,
                                               vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_tumu(vbool16_t vm, vint16m1x2_t vd,
                                             const int16_t *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_tumu(vbool8_t vm, vint16m2x2_t vd,
                                             const int16_t *rs1, vuint8m1_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_tumu(vbool4_t vm, vint16m4x2_t vd,
                                             const int16_t *rs1, vuint8m2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_tumu(vbool64_t vm, vint32mf2x2_t vd,
                                               const int32_t *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_tumu(vbool32_t vm, vint32m1x2_t vd,
                                             const int32_t *rs1,
                                             vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_tumu(vbool16_t vm, vint32m2x2_t vd,
                                             const int32_t *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_tumu(vbool8_t vm, vint32m4x2_t vd,
                                             const int32_t *rs1, vuint8m1_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_tumu(vbool64_t vm, vint64m1x2_t vd,
                                             const int64_t *rs1,
                                             vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_tumu(vbool32_t vm, vint64m2x2_t vd,
                                             const int64_t *rs1,
                                             vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_tumu(vbool16_t vm, vint64m4x2_t vd,
                                             const int64_t *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_tumu(vbool64_t vm, vuint8mf8x2_t vd,
                                              const uint8_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf8x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_tumu(vbool32_t vm, vuint8mf4x2_t vd,
                                              const uint8_t *rs1,
                                              vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_tumu(vbool16_t vm, vuint8mf2x2_t vd,
                                              const uint8_t *rs1,
                                              vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_tumu(vbool8_t vm, vuint8m1x2_t vd,
                                            const uint8_t *rs1, vuint8m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_tumu(vbool4_t vm, vuint8m2x2_t vd,
                                            const uint8_t *rs1, vuint8m2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_tumu(vbool2_t vm, vuint8m4x2_t vd,
                                            const uint8_t *rs1, vuint8m4_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_tumu(vbool64_t vm, vuint16mf4x2_t vd,
                                                const uint16_t *rs1,
                                                vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_tumu(vbool32_t vm, vuint16mf2x2_t vd,
                                                const uint16_t *rs1,
                                                vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_tumu(vbool16_t vm, vuint16m1x2_t vd,
                                              const uint16_t *rs1,
                                              vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_tumu(vbool8_t vm, vuint16m2x2_t vd,
                                              const uint16_t *rs1,
                                              vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_tumu(vbool4_t vm, vuint16m4x2_t vd,
                                              const uint16_t *rs1,
                                              vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_tumu(vbool64_t vm, vuint32mf2x2_t vd,
                                                const uint32_t *rs1,
                                                vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32mf2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_tumu(vbool32_t vm, vuint32m1x2_t vd,
                                              const uint32_t *rs1,
                                              vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_tumu(vbool16_t vm, vuint32m2x2_t vd,
                                              const uint32_t *rs1,
                                              vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_tumu(vbool8_t vm, vuint32m4x2_t vd,
                                              const uint32_t *rs1,
                                              vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_tumu(vbool64_t vm, vuint64m1x2_t vd,
                                              const uint64_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m1x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_tumu(vbool32_t vm, vuint64m2x2_t vd,
                                              const uint64_t *rs1,
                                              vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m2x2_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_tumu(vbool16_t vm, vuint64m4x2_t vd,
                                              const uint64_t *rs1,
                                              vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m4x2_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x2_t test_vluxseg2ei8_v_f16mf4x2_mu(vbool64_t vm, vfloat16mf4x2_t vd,
                                               const _Float16 *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x2_t test_vluxseg2ei8_v_f16mf2x2_mu(vbool32_t vm, vfloat16mf2x2_t vd,
                                               const _Float16 *rs1,
                                               vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x2_t test_vluxseg2ei8_v_f16m1x2_mu(vbool16_t vm, vfloat16m1x2_t vd,
                                             const _Float16 *rs1,
                                             vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m1x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m2x2_t test_vluxseg2ei8_v_f16m2x2_mu(vbool8_t vm, vfloat16m2x2_t vd,
                                             const _Float16 *rs1,
                                             vuint8m1_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m2x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m4x2_t test_vluxseg2ei8_v_f16m4x2_mu(vbool4_t vm, vfloat16m4x2_t vd,
                                             const _Float16 *rs1,
                                             vuint8m2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f16m4x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2x2_t test_vluxseg2ei8_v_f32mf2x2_mu(vbool64_t vm, vfloat32mf2x2_t vd,
                                               const float *rs1,
                                               vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_f32mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m1x2_t test_vluxseg2ei8_v_f32m1x2_mu(vbool32_t vm, vfloat32m1x2_t vd,
                                             const float *rs1, vuint8mf4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m1x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m2x2_t test_vluxseg2ei8_v_f32m2x2_mu(vbool16_t vm, vfloat32m2x2_t vd,
                                             const float *rs1, vuint8mf2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m2x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m4x2_t test_vluxseg2ei8_v_f32m4x2_mu(vbool8_t vm, vfloat32m4x2_t vd,
                                             const float *rs1, vuint8m1_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f32m4x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m1x2_t test_vluxseg2ei8_v_f64m1x2_mu(vbool64_t vm, vfloat64m1x2_t vd,
                                             const double *rs1, vuint8mf8_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m1x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m2x2_t test_vluxseg2ei8_v_f64m2x2_mu(vbool32_t vm, vfloat64m2x2_t vd,
                                             const double *rs1, vuint8mf4_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m2x2_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m4x2_t test_vluxseg2ei8_v_f64m4x2_mu(vbool16_t vm, vfloat64m4x2_t vd,
                                             const double *rs1, vuint8mf2_t rs2,
                                             size_t vl) {
  return __riscv_vluxseg2ei8_v_f64m4x2_mu(vm, vd, rs1, rs2, vl);
}

vint8mf8x2_t test_vluxseg2ei8_v_i8mf8x2_mu(vbool64_t vm, vint8mf8x2_t vd,
                                           const int8_t *rs1, vuint8mf8_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf8x2_mu(vm, vd, rs1, rs2, vl);
}

vint8mf4x2_t test_vluxseg2ei8_v_i8mf4x2_mu(vbool32_t vm, vint8mf4x2_t vd,
                                           const int8_t *rs1, vuint8mf4_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vint8mf2x2_t test_vluxseg2ei8_v_i8mf2x2_mu(vbool16_t vm, vint8mf2x2_t vd,
                                           const int8_t *rs1, vuint8mf2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i8mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vint8m1x2_t test_vluxseg2ei8_v_i8m1x2_mu(vbool8_t vm, vint8m1x2_t vd,
                                         const int8_t *rs1, vuint8m1_t rs2,
                                         size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m1x2_mu(vm, vd, rs1, rs2, vl);
}

vint8m2x2_t test_vluxseg2ei8_v_i8m2x2_mu(vbool4_t vm, vint8m2x2_t vd,
                                         const int8_t *rs1, vuint8m2_t rs2,
                                         size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m2x2_mu(vm, vd, rs1, rs2, vl);
}

vint8m4x2_t test_vluxseg2ei8_v_i8m4x2_mu(vbool2_t vm, vint8m4x2_t vd,
                                         const int8_t *rs1, vuint8m4_t rs2,
                                         size_t vl) {
  return __riscv_vluxseg2ei8_v_i8m4x2_mu(vm, vd, rs1, rs2, vl);
}

vint16mf4x2_t test_vluxseg2ei8_v_i16mf4x2_mu(vbool64_t vm, vint16mf4x2_t vd,
                                             const int16_t *rs1,
                                             vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vint16mf2x2_t test_vluxseg2ei8_v_i16mf2x2_mu(vbool32_t vm, vint16mf2x2_t vd,
                                             const int16_t *rs1,
                                             vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i16mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vint16m1x2_t test_vluxseg2ei8_v_i16m1x2_mu(vbool16_t vm, vint16m1x2_t vd,
                                           const int16_t *rs1, vuint8mf2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m1x2_mu(vm, vd, rs1, rs2, vl);
}

vint16m2x2_t test_vluxseg2ei8_v_i16m2x2_mu(vbool8_t vm, vint16m2x2_t vd,
                                           const int16_t *rs1, vuint8m1_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m2x2_mu(vm, vd, rs1, rs2, vl);
}

vint16m4x2_t test_vluxseg2ei8_v_i16m4x2_mu(vbool4_t vm, vint16m4x2_t vd,
                                           const int16_t *rs1, vuint8m2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i16m4x2_mu(vm, vd, rs1, rs2, vl);
}

vint32mf2x2_t test_vluxseg2ei8_v_i32mf2x2_mu(vbool64_t vm, vint32mf2x2_t vd,
                                             const int32_t *rs1,
                                             vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_i32mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vint32m1x2_t test_vluxseg2ei8_v_i32m1x2_mu(vbool32_t vm, vint32m1x2_t vd,
                                           const int32_t *rs1, vuint8mf4_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m1x2_mu(vm, vd, rs1, rs2, vl);
}

vint32m2x2_t test_vluxseg2ei8_v_i32m2x2_mu(vbool16_t vm, vint32m2x2_t vd,
                                           const int32_t *rs1, vuint8mf2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m2x2_mu(vm, vd, rs1, rs2, vl);
}

vint32m4x2_t test_vluxseg2ei8_v_i32m4x2_mu(vbool8_t vm, vint32m4x2_t vd,
                                           const int32_t *rs1, vuint8m1_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i32m4x2_mu(vm, vd, rs1, rs2, vl);
}

vint64m1x2_t test_vluxseg2ei8_v_i64m1x2_mu(vbool64_t vm, vint64m1x2_t vd,
                                           const int64_t *rs1, vuint8mf8_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m1x2_mu(vm, vd, rs1, rs2, vl);
}

vint64m2x2_t test_vluxseg2ei8_v_i64m2x2_mu(vbool32_t vm, vint64m2x2_t vd,
                                           const int64_t *rs1, vuint8mf4_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m2x2_mu(vm, vd, rs1, rs2, vl);
}

vint64m4x2_t test_vluxseg2ei8_v_i64m4x2_mu(vbool16_t vm, vint64m4x2_t vd,
                                           const int64_t *rs1, vuint8mf2_t rs2,
                                           size_t vl) {
  return __riscv_vluxseg2ei8_v_i64m4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf8x2_t test_vluxseg2ei8_v_u8mf8x2_mu(vbool64_t vm, vuint8mf8x2_t vd,
                                            const uint8_t *rs1, vuint8mf8_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf8x2_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf4x2_t test_vluxseg2ei8_v_u8mf4x2_mu(vbool32_t vm, vuint8mf4x2_t vd,
                                            const uint8_t *rs1, vuint8mf4_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf2x2_t test_vluxseg2ei8_v_u8mf2x2_mu(vbool16_t vm, vuint8mf2x2_t vd,
                                            const uint8_t *rs1, vuint8mf2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u8mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint8m1x2_t test_vluxseg2ei8_v_u8m1x2_mu(vbool8_t vm, vuint8m1x2_t vd,
                                          const uint8_t *rs1, vuint8m1_t rs2,
                                          size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m1x2_mu(vm, vd, rs1, rs2, vl);
}

vuint8m2x2_t test_vluxseg2ei8_v_u8m2x2_mu(vbool4_t vm, vuint8m2x2_t vd,
                                          const uint8_t *rs1, vuint8m2_t rs2,
                                          size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint8m4x2_t test_vluxseg2ei8_v_u8m4x2_mu(vbool2_t vm, vuint8m4x2_t vd,
                                          const uint8_t *rs1, vuint8m4_t rs2,
                                          size_t vl) {
  return __riscv_vluxseg2ei8_v_u8m4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x2_t test_vluxseg2ei8_v_u16mf4x2_mu(vbool64_t vm, vuint16mf4x2_t vd,
                                              const uint16_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x2_t test_vluxseg2ei8_v_u16mf2x2_mu(vbool32_t vm, vuint16mf2x2_t vd,
                                              const uint16_t *rs1,
                                              vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16m1x2_t test_vluxseg2ei8_v_u16m1x2_mu(vbool16_t vm, vuint16m1x2_t vd,
                                            const uint16_t *rs1,
                                            vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m1x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16m2x2_t test_vluxseg2ei8_v_u16m2x2_mu(vbool8_t vm, vuint16m2x2_t vd,
                                            const uint16_t *rs1, vuint8m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint16m4x2_t test_vluxseg2ei8_v_u16m4x2_mu(vbool4_t vm, vuint16m4x2_t vd,
                                            const uint16_t *rs1, vuint8m2_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u16m4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint32mf2x2_t test_vluxseg2ei8_v_u32mf2x2_mu(vbool64_t vm, vuint32mf2x2_t vd,
                                              const uint32_t *rs1,
                                              vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32mf2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint32m1x2_t test_vluxseg2ei8_v_u32m1x2_mu(vbool32_t vm, vuint32m1x2_t vd,
                                            const uint32_t *rs1,
                                            vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m1x2_mu(vm, vd, rs1, rs2, vl);
}

vuint32m2x2_t test_vluxseg2ei8_v_u32m2x2_mu(vbool16_t vm, vuint32m2x2_t vd,
                                            const uint32_t *rs1,
                                            vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint32m4x2_t test_vluxseg2ei8_v_u32m4x2_mu(vbool8_t vm, vuint32m4x2_t vd,
                                            const uint32_t *rs1, vuint8m1_t rs2,
                                            size_t vl) {
  return __riscv_vluxseg2ei8_v_u32m4x2_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1x2_t test_vluxseg2ei8_v_u64m1x2_mu(vbool64_t vm, vuint64m1x2_t vd,
                                            const uint64_t *rs1,
                                            vuint8mf8_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m1x2_mu(vm, vd, rs1, rs2, vl);
}

vuint64m2x2_t test_vluxseg2ei8_v_u64m2x2_mu(vbool32_t vm, vuint64m2x2_t vd,
                                            const uint64_t *rs1,
                                            vuint8mf4_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m2x2_mu(vm, vd, rs1, rs2, vl);
}

vuint64m4x2_t test_vluxseg2ei8_v_u64m4x2_mu(vbool16_t vm, vuint64m4x2_t vd,
                                            const uint64_t *rs1,
                                            vuint8mf2_t rs2, size_t vl) {
  return __riscv_vluxseg2ei8_v_u64m4x2_mu(vm, vd, rs1, rs2, vl);
}
