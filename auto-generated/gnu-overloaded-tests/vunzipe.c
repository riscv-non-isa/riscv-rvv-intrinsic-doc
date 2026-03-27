/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat16mf4_t test_vunzipe_v_f16mf4(vfloat16mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat16mf2_t test_vunzipe_v_f16mf2(vfloat16m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat16m1_t test_vunzipe_v_f16m1(vfloat16m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat16m2_t test_vunzipe_v_f16m2(vfloat16m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat16m4_t test_vunzipe_v_f16m4(vfloat16m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat32mf2_t test_vunzipe_v_f32mf2(vfloat32m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat32m1_t test_vunzipe_v_f32m1(vfloat32m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat32m2_t test_vunzipe_v_f32m2(vfloat32m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat32m4_t test_vunzipe_v_f32m4(vfloat32m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat64m1_t test_vunzipe_v_f64m1(vfloat64m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat64m2_t test_vunzipe_v_f64m2(vfloat64m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat64m4_t test_vunzipe_v_f64m4(vfloat64m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint8mf8_t test_vunzipe_v_i8mf8(vint8mf4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint8mf4_t test_vunzipe_v_i8mf4(vint8mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint8mf2_t test_vunzipe_v_i8mf2(vint8m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint8m1_t test_vunzipe_v_i8m1(vint8m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint8m2_t test_vunzipe_v_i8m2(vint8m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint8m4_t test_vunzipe_v_i8m4(vint8m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint16mf4_t test_vunzipe_v_i16mf4(vint16mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint16mf2_t test_vunzipe_v_i16mf2(vint16m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint16m1_t test_vunzipe_v_i16m1(vint16m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint16m2_t test_vunzipe_v_i16m2(vint16m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint16m4_t test_vunzipe_v_i16m4(vint16m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint32mf2_t test_vunzipe_v_i32mf2(vint32m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint32m1_t test_vunzipe_v_i32m1(vint32m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint32m2_t test_vunzipe_v_i32m2(vint32m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint32m4_t test_vunzipe_v_i32m4(vint32m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint64m1_t test_vunzipe_v_i64m1(vint64m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint64m2_t test_vunzipe_v_i64m2(vint64m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vint64m4_t test_vunzipe_v_i64m4(vint64m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint8mf8_t test_vunzipe_v_u8mf8(vuint8mf4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint8mf4_t test_vunzipe_v_u8mf4(vuint8mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint8mf2_t test_vunzipe_v_u8mf2(vuint8m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint8m1_t test_vunzipe_v_u8m1(vuint8m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint8m2_t test_vunzipe_v_u8m2(vuint8m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint8m4_t test_vunzipe_v_u8m4(vuint8m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint16mf4_t test_vunzipe_v_u16mf4(vuint16mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint16mf2_t test_vunzipe_v_u16mf2(vuint16m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint16m1_t test_vunzipe_v_u16m1(vuint16m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint16m2_t test_vunzipe_v_u16m2(vuint16m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint16m4_t test_vunzipe_v_u16m4(vuint16m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint32mf2_t test_vunzipe_v_u32mf2(vuint32m1_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint32m1_t test_vunzipe_v_u32m1(vuint32m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint32m2_t test_vunzipe_v_u32m2(vuint32m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint32m4_t test_vunzipe_v_u32m4(vuint32m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint64m1_t test_vunzipe_v_u64m1(vuint64m2_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint64m2_t test_vunzipe_v_u64m2(vuint64m4_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vuint64m4_t test_vunzipe_v_u64m4(vuint64m8_t vs, size_t vl) {
  return __riscv_vunzipe(vs, vl);
}

vfloat16mf4_t test_vunzipe_v_f16mf4_m(vbool64_t vm, vfloat16mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat16mf2_t test_vunzipe_v_f16mf2_m(vbool32_t vm, vfloat16m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat16m1_t test_vunzipe_v_f16m1_m(vbool16_t vm, vfloat16m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat16m2_t test_vunzipe_v_f16m2_m(vbool8_t vm, vfloat16m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat16m4_t test_vunzipe_v_f16m4_m(vbool4_t vm, vfloat16m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat32mf2_t test_vunzipe_v_f32mf2_m(vbool64_t vm, vfloat32m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat32m1_t test_vunzipe_v_f32m1_m(vbool32_t vm, vfloat32m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat32m2_t test_vunzipe_v_f32m2_m(vbool16_t vm, vfloat32m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat32m4_t test_vunzipe_v_f32m4_m(vbool8_t vm, vfloat32m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat64m1_t test_vunzipe_v_f64m1_m(vbool64_t vm, vfloat64m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat64m2_t test_vunzipe_v_f64m2_m(vbool32_t vm, vfloat64m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vfloat64m4_t test_vunzipe_v_f64m4_m(vbool16_t vm, vfloat64m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint8mf8_t test_vunzipe_v_i8mf8_m(vbool64_t vm, vint8mf4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint8mf4_t test_vunzipe_v_i8mf4_m(vbool32_t vm, vint8mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint8mf2_t test_vunzipe_v_i8mf2_m(vbool16_t vm, vint8m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint8m1_t test_vunzipe_v_i8m1_m(vbool8_t vm, vint8m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint8m2_t test_vunzipe_v_i8m2_m(vbool4_t vm, vint8m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint8m4_t test_vunzipe_v_i8m4_m(vbool2_t vm, vint8m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint16mf4_t test_vunzipe_v_i16mf4_m(vbool64_t vm, vint16mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint16mf2_t test_vunzipe_v_i16mf2_m(vbool32_t vm, vint16m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint16m1_t test_vunzipe_v_i16m1_m(vbool16_t vm, vint16m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint16m2_t test_vunzipe_v_i16m2_m(vbool8_t vm, vint16m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint16m4_t test_vunzipe_v_i16m4_m(vbool4_t vm, vint16m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint32mf2_t test_vunzipe_v_i32mf2_m(vbool64_t vm, vint32m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint32m1_t test_vunzipe_v_i32m1_m(vbool32_t vm, vint32m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint32m2_t test_vunzipe_v_i32m2_m(vbool16_t vm, vint32m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint32m4_t test_vunzipe_v_i32m4_m(vbool8_t vm, vint32m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint64m1_t test_vunzipe_v_i64m1_m(vbool64_t vm, vint64m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint64m2_t test_vunzipe_v_i64m2_m(vbool32_t vm, vint64m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vint64m4_t test_vunzipe_v_i64m4_m(vbool16_t vm, vint64m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint8mf8_t test_vunzipe_v_u8mf8_m(vbool64_t vm, vuint8mf4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint8mf4_t test_vunzipe_v_u8mf4_m(vbool32_t vm, vuint8mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint8mf2_t test_vunzipe_v_u8mf2_m(vbool16_t vm, vuint8m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint8m1_t test_vunzipe_v_u8m1_m(vbool8_t vm, vuint8m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint8m2_t test_vunzipe_v_u8m2_m(vbool4_t vm, vuint8m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint8m4_t test_vunzipe_v_u8m4_m(vbool2_t vm, vuint8m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint16mf4_t test_vunzipe_v_u16mf4_m(vbool64_t vm, vuint16mf2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint16mf2_t test_vunzipe_v_u16mf2_m(vbool32_t vm, vuint16m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint16m1_t test_vunzipe_v_u16m1_m(vbool16_t vm, vuint16m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint16m2_t test_vunzipe_v_u16m2_m(vbool8_t vm, vuint16m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint16m4_t test_vunzipe_v_u16m4_m(vbool4_t vm, vuint16m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint32mf2_t test_vunzipe_v_u32mf2_m(vbool64_t vm, vuint32m1_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint32m1_t test_vunzipe_v_u32m1_m(vbool32_t vm, vuint32m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint32m2_t test_vunzipe_v_u32m2_m(vbool16_t vm, vuint32m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint32m4_t test_vunzipe_v_u32m4_m(vbool8_t vm, vuint32m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint64m1_t test_vunzipe_v_u64m1_m(vbool64_t vm, vuint64m2_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint64m2_t test_vunzipe_v_u64m2_m(vbool32_t vm, vuint64m4_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}

vuint64m4_t test_vunzipe_v_u64m4_m(vbool16_t vm, vuint64m8_t vs, size_t vl) {
  return __riscv_vunzipe(vm, vs, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vunzipe\.[ivxfswum.]+\s+} 96 } } */
