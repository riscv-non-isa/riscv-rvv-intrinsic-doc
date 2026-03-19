/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vuint8mf8_t test_vabd_vv_u8mf8_tu(vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint8mf4_t test_vabd_vv_u8mf4_tu(vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint8mf2_t test_vabd_vv_u8mf2_tu(vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vabd_vv_u8m1_tu(vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint8m2_t test_vabd_vv_u8m2_tu(vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint8m4_t test_vabd_vv_u8m4_tu(vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint8m8_t test_vabd_vv_u8m8_tu(vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint16mf4_t test_vabd_vv_u16mf4_tu(vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint16mf2_t test_vabd_vv_u16mf2_tu(vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vabd_vv_u16m1_tu(vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint16m2_t test_vabd_vv_u16m2_tu(vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint16m4_t test_vabd_vv_u16m4_tu(vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint16m8_t test_vabd_vv_u16m8_tu(vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vabd_tu(vd, vs2, vs1, vl);
}

vuint8mf8_t test_vabd_vv_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint8mf4_t test_vabd_vv_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint8mf2_t test_vabd_vv_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vabd_vv_u8m1_tum(vbool8_t vm, vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint8m2_t test_vabd_vv_u8m2_tum(vbool4_t vm, vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint8m4_t test_vabd_vv_u8m4_tum(vbool2_t vm, vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint8m8_t test_vabd_vv_u8m8_tum(vbool1_t vm, vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint16mf4_t test_vabd_vv_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint16mf2_t test_vabd_vv_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vabd_vv_u16m1_tum(vbool16_t vm, vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint16m2_t test_vabd_vv_u16m2_tum(vbool8_t vm, vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint16m4_t test_vabd_vv_u16m4_tum(vbool4_t vm, vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint16m8_t test_vabd_vv_u16m8_tum(vbool2_t vm, vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vabd_tum(vm, vd, vs2, vs1, vl);
}

vuint8mf8_t test_vabd_vv_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint8mf4_t test_vabd_vv_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint8mf2_t test_vabd_vv_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vabd_vv_u8m1_tumu(vbool8_t vm, vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint8m2_t test_vabd_vv_u8m2_tumu(vbool4_t vm, vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint8m4_t test_vabd_vv_u8m4_tumu(vbool2_t vm, vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint8m8_t test_vabd_vv_u8m8_tumu(vbool1_t vm, vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint16mf4_t test_vabd_vv_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint16mf2_t test_vabd_vv_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vabd_vv_u16m1_tumu(vbool16_t vm, vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint16m2_t test_vabd_vv_u16m2_tumu(vbool8_t vm, vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint16m4_t test_vabd_vv_u16m4_tumu(vbool4_t vm, vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint16m8_t test_vabd_vv_u16m8_tumu(vbool2_t vm, vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vabd_tumu(vm, vd, vs2, vs1, vl);
}

vuint8mf8_t test_vabd_vv_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd, vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint8mf4_t test_vabd_vv_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd, vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint8mf2_t test_vabd_vv_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd, vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vabd_vv_u8m1_mu(vbool8_t vm, vuint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint8m2_t test_vabd_vv_u8m2_mu(vbool4_t vm, vuint8m2_t vd, vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint8m4_t test_vabd_vv_u8m4_mu(vbool2_t vm, vuint8m4_t vd, vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint8m8_t test_vabd_vv_u8m8_mu(vbool1_t vm, vuint8m8_t vd, vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint16mf4_t test_vabd_vv_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd, vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint16mf2_t test_vabd_vv_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd, vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vabd_vv_u16m1_mu(vbool16_t vm, vuint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint16m2_t test_vabd_vv_u16m2_mu(vbool8_t vm, vuint16m2_t vd, vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint16m4_t test_vabd_vv_u16m4_mu(vbool4_t vm, vuint16m4_t vd, vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}

vuint16m8_t test_vabd_vv_u16m8_mu(vbool2_t vm, vuint16m8_t vd, vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vabd_mu(vm, vd, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vabd\.[ivxfswum.]+\s+} 52 } } */
