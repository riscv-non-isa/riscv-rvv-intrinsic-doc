// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfhmin \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsuxseg3ei64_v_f16mf4x3(_Float16 *rs1, vuint64m1_t vs2,
                                  vfloat16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f16mf2x3(_Float16 *rs1, vuint64m2_t vs2,
                                  vfloat16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f16m1x3(_Float16 *rs1, vuint64m4_t vs2,
                                 vfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f16m2x3(_Float16 *rs1, vuint64m8_t vs2,
                                 vfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f32mf2x3(float *rs1, vuint64m1_t vs2,
                                  vfloat32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f32m1x3(float *rs1, vuint64m2_t vs2,
                                 vfloat32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f32m2x3(float *rs1, vuint64m4_t vs2,
                                 vfloat32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f64m1x3(double *rs1, vuint64m1_t vs2,
                                 vfloat64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f64m2x3(double *rs1, vuint64m2_t vs2,
                                 vfloat64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8mf8x3(int8_t *rs1, vuint64m1_t vs2, vint8mf8x3_t vs3,
                                 size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8mf4x3(int8_t *rs1, vuint64m2_t vs2, vint8mf4x3_t vs3,
                                 size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8mf2x3(int8_t *rs1, vuint64m4_t vs2, vint8mf2x3_t vs3,
                                 size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8m1x3(int8_t *rs1, vuint64m8_t vs2, vint8m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16mf4x3(int16_t *rs1, vuint64m1_t vs2,
                                  vint16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16mf2x3(int16_t *rs1, vuint64m2_t vs2,
                                  vint16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16m1x3(int16_t *rs1, vuint64m4_t vs2,
                                 vint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16m2x3(int16_t *rs1, vuint64m8_t vs2,
                                 vint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i32mf2x3(int32_t *rs1, vuint64m1_t vs2,
                                  vint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i32m1x3(int32_t *rs1, vuint64m2_t vs2,
                                 vint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i32m2x3(int32_t *rs1, vuint64m4_t vs2,
                                 vint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i64m1x3(int64_t *rs1, vuint64m1_t vs2,
                                 vint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i64m2x3(int64_t *rs1, vuint64m2_t vs2,
                                 vint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8mf8x3(uint8_t *rs1, vuint64m1_t vs2,
                                 vuint8mf8x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8mf4x3(uint8_t *rs1, vuint64m2_t vs2,
                                 vuint8mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8mf2x3(uint8_t *rs1, vuint64m4_t vs2,
                                 vuint8mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8m1x3(uint8_t *rs1, vuint64m8_t vs2, vuint8m1x3_t vs3,
                                size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16mf4x3(uint16_t *rs1, vuint64m1_t vs2,
                                  vuint16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16mf2x3(uint16_t *rs1, vuint64m2_t vs2,
                                  vuint16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16m1x3(uint16_t *rs1, vuint64m4_t vs2,
                                 vuint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16m2x3(uint16_t *rs1, vuint64m8_t vs2,
                                 vuint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u32mf2x3(uint32_t *rs1, vuint64m1_t vs2,
                                  vuint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u32m1x3(uint32_t *rs1, vuint64m2_t vs2,
                                 vuint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u32m2x3(uint32_t *rs1, vuint64m4_t vs2,
                                 vuint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u64m1x3(uint64_t *rs1, vuint64m1_t vs2,
                                 vuint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u64m2x3(uint64_t *rs1, vuint64m2_t vs2,
                                 vuint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f16mf4x3_m(vbool64_t vm, _Float16 *rs1,
                                    vuint64m1_t vs2, vfloat16mf4x3_t vs3,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f16mf2x3_m(vbool32_t vm, _Float16 *rs1,
                                    vuint64m2_t vs2, vfloat16mf2x3_t vs3,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f16m1x3_m(vbool16_t vm, _Float16 *rs1, vuint64m4_t vs2,
                                   vfloat16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f16m2x3_m(vbool8_t vm, _Float16 *rs1, vuint64m8_t vs2,
                                   vfloat16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f32mf2x3_m(vbool64_t vm, float *rs1, vuint64m1_t vs2,
                                    vfloat32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f32m1x3_m(vbool32_t vm, float *rs1, vuint64m2_t vs2,
                                   vfloat32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f32m2x3_m(vbool16_t vm, float *rs1, vuint64m4_t vs2,
                                   vfloat32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f64m1x3_m(vbool64_t vm, double *rs1, vuint64m1_t vs2,
                                   vfloat64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_f64m2x3_m(vbool32_t vm, double *rs1, vuint64m2_t vs2,
                                   vfloat64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8mf8x3_m(vbool64_t vm, int8_t *rs1, vuint64m1_t vs2,
                                   vint8mf8x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8mf4x3_m(vbool32_t vm, int8_t *rs1, vuint64m2_t vs2,
                                   vint8mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8mf2x3_m(vbool16_t vm, int8_t *rs1, vuint64m4_t vs2,
                                   vint8mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i8m1x3_m(vbool8_t vm, int8_t *rs1, vuint64m8_t vs2,
                                  vint8m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16mf4x3_m(vbool64_t vm, int16_t *rs1, vuint64m1_t vs2,
                                    vint16mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16mf2x3_m(vbool32_t vm, int16_t *rs1, vuint64m2_t vs2,
                                    vint16mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16m1x3_m(vbool16_t vm, int16_t *rs1, vuint64m4_t vs2,
                                   vint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i16m2x3_m(vbool8_t vm, int16_t *rs1, vuint64m8_t vs2,
                                   vint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i32mf2x3_m(vbool64_t vm, int32_t *rs1, vuint64m1_t vs2,
                                    vint32mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i32m1x3_m(vbool32_t vm, int32_t *rs1, vuint64m2_t vs2,
                                   vint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i32m2x3_m(vbool16_t vm, int32_t *rs1, vuint64m4_t vs2,
                                   vint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i64m1x3_m(vbool64_t vm, int64_t *rs1, vuint64m1_t vs2,
                                   vint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_i64m2x3_m(vbool32_t vm, int64_t *rs1, vuint64m2_t vs2,
                                   vint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8mf8x3_m(vbool64_t vm, uint8_t *rs1, vuint64m1_t vs2,
                                   vuint8mf8x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8mf4x3_m(vbool32_t vm, uint8_t *rs1, vuint64m2_t vs2,
                                   vuint8mf4x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8mf2x3_m(vbool16_t vm, uint8_t *rs1, vuint64m4_t vs2,
                                   vuint8mf2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u8m1x3_m(vbool8_t vm, uint8_t *rs1, vuint64m8_t vs2,
                                  vuint8m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16mf4x3_m(vbool64_t vm, uint16_t *rs1,
                                    vuint64m1_t vs2, vuint16mf4x3_t vs3,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16mf2x3_m(vbool32_t vm, uint16_t *rs1,
                                    vuint64m2_t vs2, vuint16mf2x3_t vs3,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16m1x3_m(vbool16_t vm, uint16_t *rs1, vuint64m4_t vs2,
                                   vuint16m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u16m2x3_m(vbool8_t vm, uint16_t *rs1, vuint64m8_t vs2,
                                   vuint16m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u32mf2x3_m(vbool64_t vm, uint32_t *rs1,
                                    vuint64m1_t vs2, vuint32mf2x3_t vs3,
                                    size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u32m1x3_m(vbool32_t vm, uint32_t *rs1, vuint64m2_t vs2,
                                   vuint32m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u32m2x3_m(vbool16_t vm, uint32_t *rs1, vuint64m4_t vs2,
                                   vuint32m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u64m1x3_m(vbool64_t vm, uint64_t *rs1, vuint64m1_t vs2,
                                   vuint64m1x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}

void test_vsuxseg3ei64_v_u64m2x3_m(vbool32_t vm, uint64_t *rs1, vuint64m2_t vs2,
                                   vuint64m2x3_t vs3, size_t vl) {
  return __riscv_vsuxseg3ei64(vm, rs1, vs2, vs3, vl);
}
