/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint32mf2_t test_vqwbdotau_vv_i8m1_i32mf2(vint32mf2_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32mf2(vd, vs2, vs1, ci, vl);
}

vint32m1_t test_vqwbdotau_vv_i8m1_i32m1(vint32m1_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m1(vd, vs2, vs1, ci, vl);
}

vint32m2_t test_vqwbdotau_vv_i8m1_i32m2(vint32m2_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m2(vd, vs2, vs1, ci, vl);
}

vint32m4_t test_vqwbdotau_vv_i8m1_i32m4(vint32m4_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m4(vd, vs2, vs1, ci, vl);
}

vint32m8_t test_vqwbdotau_vv_i8m1_i32m8(vint32m8_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m8(vd, vs2, vs1, ci, vl);
}

vuint32mf2_t test_vqwbdotau_vv_u8m1_u32mf2(vuint32mf2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32mf2(vd, vs2, vs1, ci, vl);
}

vuint32m1_t test_vqwbdotau_vv_u8m1_u32m1(vuint32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m1(vd, vs2, vs1, ci, vl);
}

vuint32m2_t test_vqwbdotau_vv_u8m1_u32m2(vuint32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m2(vd, vs2, vs1, ci, vl);
}

vuint32m4_t test_vqwbdotau_vv_u8m1_u32m4(vuint32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m4(vd, vs2, vs1, ci, vl);
}

vuint32m8_t test_vqwbdotau_vv_u8m1_u32m8(vuint32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m8(vd, vs2, vs1, ci, vl);
}

vint32mf2_t test_vqwbdotau_vv_i8m1_i32mf2_m(vbool64_t vm, vint32mf2_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32mf2_m(vm, vd, vs2, vs1, ci, vl);
}

vint32m1_t test_vqwbdotau_vv_i8m1_i32m1_m(vbool32_t vm, vint32m1_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m1_m(vm, vd, vs2, vs1, ci, vl);
}

vint32m2_t test_vqwbdotau_vv_i8m1_i32m2_m(vbool16_t vm, vint32m2_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m2_m(vm, vd, vs2, vs1, ci, vl);
}

vint32m4_t test_vqwbdotau_vv_i8m1_i32m4_m(vbool8_t vm, vint32m4_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m4_m(vm, vd, vs2, vs1, ci, vl);
}

vint32m8_t test_vqwbdotau_vv_i8m1_i32m8_m(vbool4_t vm, vint32m8_t vd, vuint8m8_t vs2, vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i8m1_i32m8_m(vm, vd, vs2, vs1, ci, vl);
}

vuint32mf2_t test_vqwbdotau_vv_u8m1_u32mf2_m(vbool64_t vm, vuint32mf2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32mf2_m(vm, vd, vs2, vs1, ci, vl);
}

vuint32m1_t test_vqwbdotau_vv_u8m1_u32m1_m(vbool32_t vm, vuint32m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m1_m(vm, vd, vs2, vs1, ci, vl);
}

vuint32m2_t test_vqwbdotau_vv_u8m1_u32m2_m(vbool16_t vm, vuint32m2_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m2_m(vm, vd, vs2, vs1, ci, vl);
}

vuint32m4_t test_vqwbdotau_vv_u8m1_u32m4_m(vbool8_t vm, vuint32m4_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m4_m(vm, vd, vs2, vs1, ci, vl);
}

vuint32m8_t test_vqwbdotau_vv_u8m1_u32m8_m(vbool4_t vm, vuint32m8_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u8m1_u32m8_m(vm, vd, vs2, vs1, ci, vl);
}

vint64m1_t test_vqwbdotau_vv_i16m1_i64m1(vint64m1_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m1(vd, vs2, vs1, ci, vl);
}

vint64m2_t test_vqwbdotau_vv_i16m1_i64m2(vint64m2_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m2(vd, vs2, vs1, ci, vl);
}

vint64m4_t test_vqwbdotau_vv_i16m1_i64m4(vint64m4_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m4(vd, vs2, vs1, ci, vl);
}

vint64m8_t test_vqwbdotau_vv_i16m1_i64m8(vint64m8_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m8(vd, vs2, vs1, ci, vl);
}

vuint64m1_t test_vqwbdotau_vv_u16m1_u64m1(vuint64m1_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m1(vd, vs2, vs1, ci, vl);
}

vuint64m2_t test_vqwbdotau_vv_u16m1_u64m2(vuint64m2_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m2(vd, vs2, vs1, ci, vl);
}

vuint64m4_t test_vqwbdotau_vv_u16m1_u64m4(vuint64m4_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m4(vd, vs2, vs1, ci, vl);
}

vuint64m8_t test_vqwbdotau_vv_u16m1_u64m8(vuint64m8_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m8(vd, vs2, vs1, ci, vl);
}

vint64m1_t test_vqwbdotau_vv_i16m1_i64m1_m(vbool64_t vm, vint64m1_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m1_m(vm, vd, vs2, vs1, ci, vl);
}

vint64m2_t test_vqwbdotau_vv_i16m1_i64m2_m(vbool32_t vm, vint64m2_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m2_m(vm, vd, vs2, vs1, ci, vl);
}

vint64m4_t test_vqwbdotau_vv_i16m1_i64m4_m(vbool16_t vm, vint64m4_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m4_m(vm, vd, vs2, vs1, ci, vl);
}

vint64m8_t test_vqwbdotau_vv_i16m1_i64m8_m(vbool8_t vm, vint64m8_t vd, vuint16m8_t vs2, vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_i16m1_i64m8_m(vm, vd, vs2, vs1, ci, vl);
}

vuint64m1_t test_vqwbdotau_vv_u16m1_u64m1_m(vbool64_t vm, vuint64m1_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m1_m(vm, vd, vs2, vs1, ci, vl);
}

vuint64m2_t test_vqwbdotau_vv_u16m1_u64m2_m(vbool32_t vm, vuint64m2_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m2_m(vm, vd, vs2, vs1, ci, vl);
}

vuint64m4_t test_vqwbdotau_vv_u16m1_u64m4_m(vbool16_t vm, vuint64m4_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m4_m(vm, vd, vs2, vs1, ci, vl);
}

vuint64m8_t test_vqwbdotau_vv_u16m1_u64m8_m(vbool8_t vm, vuint64m8_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotau_vv_u16m1_u64m8_m(vm, vd, vs2, vs1, ci, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vqwbdotau\.[ivxfswum.]+\s+} 36 } } */
