/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vuint8mf8_t test_vabdu_vv_u8mf8(vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint8mf4_t test_vabdu_vv_u8mf4(vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint8mf2_t test_vabdu_vv_u8mf2(vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint8m1_t test_vabdu_vv_u8m1(vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint8m2_t test_vabdu_vv_u8m2(vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint8m4_t test_vabdu_vv_u8m4(vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint8m8_t test_vabdu_vv_u8m8(vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint16mf4_t test_vabdu_vv_u16mf4(vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint16mf2_t test_vabdu_vv_u16mf2(vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint16m1_t test_vabdu_vv_u16m1(vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint16m2_t test_vabdu_vv_u16m2(vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint16m4_t test_vabdu_vv_u16m4(vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint16m8_t test_vabdu_vv_u16m8(vuint16m8_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vabdu(vs2, vs1, vl);
}

vuint8mf8_t test_vabdu_vv_u8mf8_m(vbool64_t vm, vuint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint8mf4_t test_vabdu_vv_u8mf4_m(vbool32_t vm, vuint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint8mf2_t test_vabdu_vv_u8mf2_m(vbool16_t vm, vuint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint8m1_t test_vabdu_vv_u8m1_m(vbool8_t vm, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint8m2_t test_vabdu_vv_u8m2_m(vbool4_t vm, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint8m4_t test_vabdu_vv_u8m4_m(vbool2_t vm, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint8m8_t test_vabdu_vv_u8m8_m(vbool1_t vm, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint16mf4_t test_vabdu_vv_u16mf4_m(vbool64_t vm, vuint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint16mf2_t test_vabdu_vv_u16mf2_m(vbool32_t vm, vuint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint16m1_t test_vabdu_vv_u16m1_m(vbool16_t vm, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint16m2_t test_vabdu_vv_u16m2_m(vbool8_t vm, vuint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint16m4_t test_vabdu_vv_u16m4_m(vbool4_t vm, vuint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}

vuint16m8_t test_vabdu_vv_u16m8_m(vbool2_t vm, vuint16m8_t vs2, vuint16m8_t vs1, size_t vl) {
  return __riscv_vabdu(vm, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vabdu\.[ivxfswum.]+\s+} 26 } } */
