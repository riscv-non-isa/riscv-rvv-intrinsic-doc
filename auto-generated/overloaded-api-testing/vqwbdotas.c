#include <riscv_vector.h>
#include <stdint.h>

vint32mf2_t test_vqwbdotas_vv_i8m1_i32mf2(vint32mf2_t vd, vint8m8_t vs2,
                                          vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m1_t test_vqwbdotas_vv_i8m1_i32m1(vint32m1_t vd, vint8m8_t vs2,
                                        vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m2_t test_vqwbdotas_vv_i8m1_i32m2(vint32m2_t vd, vint8m8_t vs2,
                                        vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m4_t test_vqwbdotas_vv_i8m1_i32m4(vint32m4_t vd, vint8m8_t vs2,
                                        vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m8_t test_vqwbdotas_vv_i8m1_i32m8(vint32m8_t vd, vint8m8_t vs2,
                                        vint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32mf2_t test_vqwbdotas_vv_u8m1_i32mf2(vint32mf2_t vd, vint8m8_t vs2,
                                          vuint8m1_t vs1, size_t ci,
                                          size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m1_t test_vqwbdotas_vv_u8m1_i32m1(vint32m1_t vd, vint8m8_t vs2,
                                        vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m2_t test_vqwbdotas_vv_u8m1_i32m2(vint32m2_t vd, vint8m8_t vs2,
                                        vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m4_t test_vqwbdotas_vv_u8m1_i32m4(vint32m4_t vd, vint8m8_t vs2,
                                        vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32m8_t test_vqwbdotas_vv_u8m1_i32m8(vint32m8_t vd, vint8m8_t vs2,
                                        vuint8m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint32mf2_t test_vqwbdotas_vv_i8m1_i32mf2_m(vbool64_t vm, vint32mf2_t vd,
                                            vint8m8_t vs2, vint8m1_t vs1,
                                            size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m1_t test_vqwbdotas_vv_i8m1_i32m1_m(vbool32_t vm, vint32m1_t vd,
                                          vint8m8_t vs2, vint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m2_t test_vqwbdotas_vv_i8m1_i32m2_m(vbool16_t vm, vint32m2_t vd,
                                          vint8m8_t vs2, vint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m4_t test_vqwbdotas_vv_i8m1_i32m4_m(vbool8_t vm, vint32m4_t vd,
                                          vint8m8_t vs2, vint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m8_t test_vqwbdotas_vv_i8m1_i32m8_m(vbool4_t vm, vint32m8_t vd,
                                          vint8m8_t vs2, vint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32mf2_t test_vqwbdotas_vv_u8m1_i32mf2_m(vbool64_t vm, vint32mf2_t vd,
                                            vint8m8_t vs2, vuint8m1_t vs1,
                                            size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m1_t test_vqwbdotas_vv_u8m1_i32m1_m(vbool32_t vm, vint32m1_t vd,
                                          vint8m8_t vs2, vuint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m2_t test_vqwbdotas_vv_u8m1_i32m2_m(vbool16_t vm, vint32m2_t vd,
                                          vint8m8_t vs2, vuint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m4_t test_vqwbdotas_vv_u8m1_i32m4_m(vbool8_t vm, vint32m4_t vd,
                                          vint8m8_t vs2, vuint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint32m8_t test_vqwbdotas_vv_u8m1_i32m8_m(vbool4_t vm, vint32m8_t vd,
                                          vint8m8_t vs2, vuint8m1_t vs1,
                                          size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m1_t test_vqwbdotas_vv_i16m1_i64m1(vint64m1_t vd, vint16m8_t vs2,
                                         vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m2_t test_vqwbdotas_vv_i16m1_i64m2(vint64m2_t vd, vint16m8_t vs2,
                                         vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m4_t test_vqwbdotas_vv_i16m1_i64m4(vint64m4_t vd, vint16m8_t vs2,
                                         vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m8_t test_vqwbdotas_vv_i16m1_i64m8(vint64m8_t vd, vint16m8_t vs2,
                                         vint16m1_t vs1, size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m1_t test_vqwbdotas_vv_u16m1_i64m1(vint64m1_t vd, vint16m8_t vs2,
                                         vuint16m1_t vs1, size_t ci,
                                         size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m2_t test_vqwbdotas_vv_u16m1_i64m2(vint64m2_t vd, vint16m8_t vs2,
                                         vuint16m1_t vs1, size_t ci,
                                         size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m4_t test_vqwbdotas_vv_u16m1_i64m4(vint64m4_t vd, vint16m8_t vs2,
                                         vuint16m1_t vs1, size_t ci,
                                         size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m8_t test_vqwbdotas_vv_u16m1_i64m8(vint64m8_t vd, vint16m8_t vs2,
                                         vuint16m1_t vs1, size_t ci,
                                         size_t vl) {
  return __riscv_vqwbdotas(vd, vs2, vs1, ci, vl);
}

vint64m1_t test_vqwbdotas_vv_i16m1_i64m1_m(vbool64_t vm, vint64m1_t vd,
                                           vint16m8_t vs2, vint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m2_t test_vqwbdotas_vv_i16m1_i64m2_m(vbool32_t vm, vint64m2_t vd,
                                           vint16m8_t vs2, vint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m4_t test_vqwbdotas_vv_i16m1_i64m4_m(vbool16_t vm, vint64m4_t vd,
                                           vint16m8_t vs2, vint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m8_t test_vqwbdotas_vv_i16m1_i64m8_m(vbool8_t vm, vint64m8_t vd,
                                           vint16m8_t vs2, vint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m1_t test_vqwbdotas_vv_u16m1_i64m1_m(vbool64_t vm, vint64m1_t vd,
                                           vint16m8_t vs2, vuint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m2_t test_vqwbdotas_vv_u16m1_i64m2_m(vbool32_t vm, vint64m2_t vd,
                                           vint16m8_t vs2, vuint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m4_t test_vqwbdotas_vv_u16m1_i64m4_m(vbool16_t vm, vint64m4_t vd,
                                           vint16m8_t vs2, vuint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}

vint64m8_t test_vqwbdotas_vv_u16m1_i64m8_m(vbool8_t vm, vint64m8_t vd,
                                           vint16m8_t vs2, vuint16m1_t vs1,
                                           size_t ci, size_t vl) {
  return __riscv_vqwbdotas(vm, vd, vs2, vs1, ci, vl);
}
