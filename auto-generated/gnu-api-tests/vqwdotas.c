/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint32m1_t test_vqwdotas_vv_i8mf8_i32m1(vint32m1_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf8_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf4_i32m1(vint32m1_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf4_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf2_i32m1(vint32m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf2_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m1_i32m1(vint32m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m1_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m2_i32m1(vint32m1_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m2_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m4_i32m1(vint32m1_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m4_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m8_i32m1(vint32m1_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m8_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf8_i32m1(vint32m1_t vd, vint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf8_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf4_i32m1(vint32m1_t vd, vint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf4_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf2_i32m1(vint32m1_t vd, vint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf2_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m1_i32m1(vint32m1_t vd, vint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m1_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m2_i32m1(vint32m1_t vd, vint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m2_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m4_i32m1(vint32m1_t vd, vint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m4_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m8_i32m1(vint32m1_t vd, vint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m8_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf8_i32m1_m(vbool64_t vm, vint32m1_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf8_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf4_i32m1_m(vbool32_t vm, vint32m1_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf4_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf2_i32m1_m(vbool16_t vm, vint32m1_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf2_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m1_i32m1_m(vbool8_t vm, vint32m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m1_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m2_i32m1_m(vbool4_t vm, vint32m1_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m2_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m4_i32m1_m(vbool2_t vm, vint32m1_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m4_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m8_i32m1_m(vbool1_t vm, vint32m1_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m8_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf8_i32m1_m(vbool64_t vm, vint32m1_t vd, vint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf8_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf4_i32m1_m(vbool32_t vm, vint32m1_t vd, vint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf4_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf2_i32m1_m(vbool16_t vm, vint32m1_t vd, vint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf2_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m1_i32m1_m(vbool8_t vm, vint32m1_t vd, vint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m1_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m2_i32m1_m(vbool4_t vm, vint32m1_t vd, vint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m2_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m4_i32m1_m(vbool2_t vm, vint32m1_t vd, vint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m4_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m8_i32m1_m(vbool1_t vm, vint32m1_t vd, vint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m8_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf4_i64m1(vint64m1_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16mf4_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf2_i64m1(vint64m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16mf2_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m1_i64m1(vint64m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m1_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m2_i64m1(vint64m1_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m2_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m4_i64m1(vint64m1_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m4_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m8_i64m1(vint64m1_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m8_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf4_i64m1(vint64m1_t vd, vint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16mf4_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf2_i64m1(vint64m1_t vd, vint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16mf2_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m1_i64m1(vint64m1_t vd, vint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m1_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m2_i64m1(vint64m1_t vd, vint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m2_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m4_i64m1(vint64m1_t vd, vint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m4_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m8_i64m1(vint64m1_t vd, vint16m8_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m8_i64m1(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf4_i64m1_m(vbool64_t vm, vint64m1_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16mf4_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf2_i64m1_m(vbool32_t vm, vint64m1_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16mf2_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m1_i64m1_m(vbool16_t vm, vint64m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m1_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m2_i64m1_m(vbool8_t vm, vint64m1_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m2_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m4_i64m1_m(vbool4_t vm, vint64m1_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m4_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m8_i64m1_m(vbool2_t vm, vint64m1_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m8_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf4_i64m1_m(vbool64_t vm, vint64m1_t vd, vint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16mf4_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf2_i64m1_m(vbool32_t vm, vint64m1_t vd, vint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16mf2_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m1_i64m1_m(vbool16_t vm, vint64m1_t vd, vint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m1_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m2_i64m1_m(vbool8_t vm, vint64m1_t vd, vint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m2_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m4_i64m1_m(vbool4_t vm, vint64m1_t vd, vint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m4_i64m1_m(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m8_i64m1_m(vbool2_t vm, vint64m1_t vd, vint16m8_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m8_i64m1_m(vm, vd, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vqwdotas\.[ivxfswum.]+\s+} 52 } } */
