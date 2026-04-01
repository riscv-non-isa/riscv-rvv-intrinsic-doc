/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vuint8mf8_t test_vabs_v_u8mf8(vint8mf8_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint8mf4_t test_vabs_v_u8mf4(vint8mf4_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint8mf2_t test_vabs_v_u8mf2(vint8mf2_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint8m1_t test_vabs_v_u8m1(vint8m1_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint8m2_t test_vabs_v_u8m2(vint8m2_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint8m4_t test_vabs_v_u8m4(vint8m4_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint8m8_t test_vabs_v_u8m8(vint8m8_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint16mf4_t test_vabs_v_u16mf4(vint16mf4_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint16mf2_t test_vabs_v_u16mf2(vint16mf2_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint16m1_t test_vabs_v_u16m1(vint16m1_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint16m2_t test_vabs_v_u16m2(vint16m2_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint16m4_t test_vabs_v_u16m4(vint16m4_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint16m8_t test_vabs_v_u16m8(vint16m8_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint32mf2_t test_vabs_v_u32mf2(vint32mf2_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint32m1_t test_vabs_v_u32m1(vint32m1_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint32m2_t test_vabs_v_u32m2(vint32m2_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint32m4_t test_vabs_v_u32m4(vint32m4_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint32m8_t test_vabs_v_u32m8(vint32m8_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint64m1_t test_vabs_v_u64m1(vint64m1_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint64m2_t test_vabs_v_u64m2(vint64m2_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint64m4_t test_vabs_v_u64m4(vint64m4_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint64m8_t test_vabs_v_u64m8(vint64m8_t vs2, size_t vl) {
  return __riscv_vabs(vs2, vl);
}

vuint8mf8_t test_vabs_v_u8mf8_m(vbool64_t vm, vint8mf8_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint8mf4_t test_vabs_v_u8mf4_m(vbool32_t vm, vint8mf4_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint8mf2_t test_vabs_v_u8mf2_m(vbool16_t vm, vint8mf2_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint8m1_t test_vabs_v_u8m1_m(vbool8_t vm, vint8m1_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint8m2_t test_vabs_v_u8m2_m(vbool4_t vm, vint8m2_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint8m4_t test_vabs_v_u8m4_m(vbool2_t vm, vint8m4_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint8m8_t test_vabs_v_u8m8_m(vbool1_t vm, vint8m8_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint16mf4_t test_vabs_v_u16mf4_m(vbool64_t vm, vint16mf4_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint16mf2_t test_vabs_v_u16mf2_m(vbool32_t vm, vint16mf2_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint16m1_t test_vabs_v_u16m1_m(vbool16_t vm, vint16m1_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint16m2_t test_vabs_v_u16m2_m(vbool8_t vm, vint16m2_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint16m4_t test_vabs_v_u16m4_m(vbool4_t vm, vint16m4_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint16m8_t test_vabs_v_u16m8_m(vbool2_t vm, vint16m8_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint32mf2_t test_vabs_v_u32mf2_m(vbool64_t vm, vint32mf2_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint32m1_t test_vabs_v_u32m1_m(vbool32_t vm, vint32m1_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint32m2_t test_vabs_v_u32m2_m(vbool16_t vm, vint32m2_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint32m4_t test_vabs_v_u32m4_m(vbool8_t vm, vint32m4_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint32m8_t test_vabs_v_u32m8_m(vbool4_t vm, vint32m8_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint64m1_t test_vabs_v_u64m1_m(vbool64_t vm, vint64m1_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint64m2_t test_vabs_v_u64m2_m(vbool32_t vm, vint64m2_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint64m4_t test_vabs_v_u64m4_m(vbool16_t vm, vint64m4_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}

vuint64m8_t test_vabs_v_u64m8_m(vbool8_t vm, vint64m8_t vs2, size_t vl) {
  return __riscv_vabs(vm, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vabs\.[ivxfswum.]+\s+} 44 } } */
