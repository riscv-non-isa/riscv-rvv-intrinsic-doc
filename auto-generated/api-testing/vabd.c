#include <riscv_vector.h>
#include <stdint.h>

vuint8mf8_t test_vabd_vv_u8mf8(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vabd_vv_u8mf8(vs2, vs1, vl);
}

vuint8mf4_t test_vabd_vv_u8mf4(vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vabd_vv_u8mf4(vs2, vs1, vl);
}

vuint8mf2_t test_vabd_vv_u8mf2(vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vabd_vv_u8mf2(vs2, vs1, vl);
}

vuint8m1_t test_vabd_vv_u8m1(vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vabd_vv_u8m1(vs2, vs1, vl);
}

vuint8m2_t test_vabd_vv_u8m2(vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vabd_vv_u8m2(vs2, vs1, vl);
}

vuint8m4_t test_vabd_vv_u8m4(vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vabd_vv_u8m4(vs2, vs1, vl);
}

vuint8m8_t test_vabd_vv_u8m8(vint8m8_t vs2, vint8m8_t vs1, size_t vl) {
  return __riscv_vabd_vv_u8m8(vs2, vs1, vl);
}

vuint16mf4_t test_vabd_vv_u16mf4(vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16mf4(vs2, vs1, vl);
}

vuint16mf2_t test_vabd_vv_u16mf2(vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16mf2(vs2, vs1, vl);
}

vuint16m1_t test_vabd_vv_u16m1(vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16m1(vs2, vs1, vl);
}

vuint16m2_t test_vabd_vv_u16m2(vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16m2(vs2, vs1, vl);
}

vuint16m4_t test_vabd_vv_u16m4(vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16m4(vs2, vs1, vl);
}

vuint16m8_t test_vabd_vv_u16m8(vint16m8_t vs2, vint16m8_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16m8(vs2, vs1, vl);
}

vuint8mf8_t test_vabd_vv_u8mf8_m(vbool64_t vm, vint8mf8_t vs2, vint8mf8_t vs1,
                                 size_t vl) {
  return __riscv_vabd_vv_u8mf8_m(vm, vs2, vs1, vl);
}

vuint8mf4_t test_vabd_vv_u8mf4_m(vbool32_t vm, vint8mf4_t vs2, vint8mf4_t vs1,
                                 size_t vl) {
  return __riscv_vabd_vv_u8mf4_m(vm, vs2, vs1, vl);
}

vuint8mf2_t test_vabd_vv_u8mf2_m(vbool16_t vm, vint8mf2_t vs2, vint8mf2_t vs1,
                                 size_t vl) {
  return __riscv_vabd_vv_u8mf2_m(vm, vs2, vs1, vl);
}

vuint8m1_t test_vabd_vv_u8m1_m(vbool8_t vm, vint8m1_t vs2, vint8m1_t vs1,
                               size_t vl) {
  return __riscv_vabd_vv_u8m1_m(vm, vs2, vs1, vl);
}

vuint8m2_t test_vabd_vv_u8m2_m(vbool4_t vm, vint8m2_t vs2, vint8m2_t vs1,
                               size_t vl) {
  return __riscv_vabd_vv_u8m2_m(vm, vs2, vs1, vl);
}

vuint8m4_t test_vabd_vv_u8m4_m(vbool2_t vm, vint8m4_t vs2, vint8m4_t vs1,
                               size_t vl) {
  return __riscv_vabd_vv_u8m4_m(vm, vs2, vs1, vl);
}

vuint8m8_t test_vabd_vv_u8m8_m(vbool1_t vm, vint8m8_t vs2, vint8m8_t vs1,
                               size_t vl) {
  return __riscv_vabd_vv_u8m8_m(vm, vs2, vs1, vl);
}

vuint16mf4_t test_vabd_vv_u16mf4_m(vbool64_t vm, vint16mf4_t vs2,
                                   vint16mf4_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16mf4_m(vm, vs2, vs1, vl);
}

vuint16mf2_t test_vabd_vv_u16mf2_m(vbool32_t vm, vint16mf2_t vs2,
                                   vint16mf2_t vs1, size_t vl) {
  return __riscv_vabd_vv_u16mf2_m(vm, vs2, vs1, vl);
}

vuint16m1_t test_vabd_vv_u16m1_m(vbool16_t vm, vint16m1_t vs2, vint16m1_t vs1,
                                 size_t vl) {
  return __riscv_vabd_vv_u16m1_m(vm, vs2, vs1, vl);
}

vuint16m2_t test_vabd_vv_u16m2_m(vbool8_t vm, vint16m2_t vs2, vint16m2_t vs1,
                                 size_t vl) {
  return __riscv_vabd_vv_u16m2_m(vm, vs2, vs1, vl);
}

vuint16m4_t test_vabd_vv_u16m4_m(vbool4_t vm, vint16m4_t vs2, vint16m4_t vs1,
                                 size_t vl) {
  return __riscv_vabd_vv_u16m4_m(vm, vs2, vs1, vl);
}

vuint16m8_t test_vabd_vv_u16m8_m(vbool2_t vm, vint16m8_t vs2, vint16m8_t vs1,
                                 size_t vl) {
  return __riscv_vabd_vv_u16m8_m(vm, vs2, vs1, vl);
}
