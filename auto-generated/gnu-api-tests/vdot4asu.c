/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint32mf2_t test_vdot4asu_vv_i32mf2(vint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32mf2(vd, vs2, vs1, vl);
}

vint32mf2_t test_vdot4asu_vx_i32mf2(vint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32mf2(vd, vs2, rs1, vl);
}

vint32m1_t test_vdot4asu_vv_i32m1(vint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m1(vd, vs2, vs1, vl);
}

vint32m1_t test_vdot4asu_vx_i32m1(vint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m1(vd, vs2, rs1, vl);
}

vint32m2_t test_vdot4asu_vv_i32m2(vint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m2(vd, vs2, vs1, vl);
}

vint32m2_t test_vdot4asu_vx_i32m2(vint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m2(vd, vs2, rs1, vl);
}

vint32m4_t test_vdot4asu_vv_i32m4(vint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m4(vd, vs2, vs1, vl);
}

vint32m4_t test_vdot4asu_vx_i32m4(vint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m4(vd, vs2, rs1, vl);
}

vint32m8_t test_vdot4asu_vv_i32m8(vint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m8(vd, vs2, vs1, vl);
}

vint32m8_t test_vdot4asu_vx_i32m8(vint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m8(vd, vs2, rs1, vl);
}

vint32mf2_t test_vdot4asu_vv_i32mf2_m(vbool64_t vm, vint32mf2_t vd, vuint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32mf2_m(vm, vd, vs2, vs1, vl);
}

vint32mf2_t test_vdot4asu_vx_i32mf2_m(vbool64_t vm, vint32mf2_t vd, vuint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32mf2_m(vm, vd, vs2, rs1, vl);
}

vint32m1_t test_vdot4asu_vv_i32m1_m(vbool32_t vm, vint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m1_m(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vdot4asu_vx_i32m1_m(vbool32_t vm, vint32m1_t vd, vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m1_m(vm, vd, vs2, rs1, vl);
}

vint32m2_t test_vdot4asu_vv_i32m2_m(vbool16_t vm, vint32m2_t vd, vuint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m2_m(vm, vd, vs2, vs1, vl);
}

vint32m2_t test_vdot4asu_vx_i32m2_m(vbool16_t vm, vint32m2_t vd, vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m2_m(vm, vd, vs2, rs1, vl);
}

vint32m4_t test_vdot4asu_vv_i32m4_m(vbool8_t vm, vint32m4_t vd, vuint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m4_m(vm, vd, vs2, vs1, vl);
}

vint32m4_t test_vdot4asu_vx_i32m4_m(vbool8_t vm, vint32m4_t vd, vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m4_m(vm, vd, vs2, rs1, vl);
}

vint32m8_t test_vdot4asu_vv_i32m8_m(vbool4_t vm, vint32m8_t vd, vuint32m8_t vs2, vuint32m8_t vs1, size_t vl) {
  return __riscv_vdot4asu_vv_i32m8_m(vm, vd, vs2, vs1, vl);
}

vint32m8_t test_vdot4asu_vx_i32m8_m(vbool4_t vm, vint32m8_t vd, vuint32m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4asu_vx_i32m8_m(vm, vd, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vdot4asu\.[ivxfswum.]+\s+} 20 } } */
