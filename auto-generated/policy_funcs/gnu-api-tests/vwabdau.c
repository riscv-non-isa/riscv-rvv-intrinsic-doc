/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vuint16mf4_t test_vwabdau_vv_u16mf4_tu(vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf4_tu(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabdau_vv_u16mf2_tu(vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf2_tu(vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabdau_vv_u16m1_tu(vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m1_tu(vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabdau_vv_u16m2_tu(vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m2_tu(vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabdau_vv_u16m4_tu(vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m4_tu(vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabdau_vv_u16m8_tu(vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m8_tu(vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabdau_vv_u32mf2_tu(vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32mf2_tu(vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabdau_vv_u32m1_tu(vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m1_tu(vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabdau_vv_u32m2_tu(vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m2_tu(vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabdau_vv_u32m4_tu(vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m4_tu(vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabdau_vv_u32m8_tu(vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m8_tu(vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwabdau_vv_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf4_tum(vm, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabdau_vv_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf2_tum(vm, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabdau_vv_u16m1_tum(vbool16_t vm, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m1_tum(vm, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabdau_vv_u16m2_tum(vbool8_t vm, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m2_tum(vm, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabdau_vv_u16m4_tum(vbool4_t vm, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m4_tum(vm, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabdau_vv_u16m8_tum(vbool2_t vm, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m8_tum(vm, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabdau_vv_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32mf2_tum(vm, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabdau_vv_u32m1_tum(vbool32_t vm, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m1_tum(vm, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabdau_vv_u32m2_tum(vbool16_t vm, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m2_tum(vm, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabdau_vv_u32m4_tum(vbool8_t vm, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m4_tum(vm, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabdau_vv_u32m8_tum(vbool4_t vm, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m8_tum(vm, vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwabdau_vv_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf4_tumu(vm, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabdau_vv_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf2_tumu(vm, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabdau_vv_u16m1_tumu(vbool16_t vm, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m1_tumu(vm, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabdau_vv_u16m2_tumu(vbool8_t vm, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m2_tumu(vm, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabdau_vv_u16m4_tumu(vbool4_t vm, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m4_tumu(vm, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabdau_vv_u16m8_tumu(vbool2_t vm, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m8_tumu(vm, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabdau_vv_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32mf2_tumu(vm, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabdau_vv_u32m1_tumu(vbool32_t vm, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m1_tumu(vm, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabdau_vv_u32m2_tumu(vbool16_t vm, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m2_tumu(vm, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabdau_vv_u32m4_tumu(vbool8_t vm, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m4_tumu(vm, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabdau_vv_u32m8_tumu(vbool4_t vm, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m8_tumu(vm, vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwabdau_vv_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd, vuint8mf8_t vs1, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf4_mu(vm, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabdau_vv_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd, vuint8mf4_t vs1, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf2_mu(vm, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabdau_vv_u16m1_mu(vbool16_t vm, vuint16m1_t vd, vuint8mf2_t vs1, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m1_mu(vm, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabdau_vv_u16m2_mu(vbool8_t vm, vuint16m2_t vd, vuint8m1_t vs1, vuint8m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m2_mu(vm, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabdau_vv_u16m4_mu(vbool4_t vm, vuint16m4_t vd, vuint8m2_t vs1, vuint8m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m4_mu(vm, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabdau_vv_u16m8_mu(vbool2_t vm, vuint16m8_t vd, vuint8m4_t vs1, vuint8m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m8_mu(vm, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabdau_vv_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd, vuint16mf4_t vs1, vuint16mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32mf2_mu(vm, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabdau_vv_u32m1_mu(vbool32_t vm, vuint32m1_t vd, vuint16mf2_t vs1, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m1_mu(vm, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabdau_vv_u32m2_mu(vbool16_t vm, vuint32m2_t vd, vuint16m1_t vs1, vuint16m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m2_mu(vm, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabdau_vv_u32m4_mu(vbool8_t vm, vuint32m4_t vd, vuint16m2_t vs1, vuint16m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m4_mu(vm, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabdau_vv_u32m8_mu(vbool4_t vm, vuint32m8_t vd, vuint16m4_t vs1, vuint16m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m8_mu(vm, vd, vs1, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vwabdau\.[ivxfswum.]+\s+} 44 } } */
