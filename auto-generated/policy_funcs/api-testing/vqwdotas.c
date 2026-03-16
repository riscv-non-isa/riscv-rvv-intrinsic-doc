#include <riscv_vector.h>
#include <stdint.h>

vint32m1_t test_vqwdotas_vv_i8mf8_i32m1_tu(vint32m1_t vd, vint8mf8_t vs2,
                                           vint8mf8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf8_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf4_i32m1_tu(vint32m1_t vd, vint8mf4_t vs2,
                                           vint8mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf4_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf2_i32m1_tu(vint32m1_t vd, vint8mf2_t vs2,
                                           vint8mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8mf2_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m1_i32m1_tu(vint32m1_t vd, vint8m1_t vs2,
                                          vint8m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m1_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m2_i32m1_tu(vint32m1_t vd, vint8m2_t vs2,
                                          vint8m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m2_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m4_i32m1_tu(vint32m1_t vd, vint8m4_t vs2,
                                          vint8m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m4_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m8_i32m1_tu(vint32m1_t vd, vint8m8_t vs2,
                                          vint8m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i8m8_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf8_i32m1_tu(vint32m1_t vd, vint8mf8_t vs2,
                                           vuint8mf8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf8_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf4_i32m1_tu(vint32m1_t vd, vint8mf4_t vs2,
                                           vuint8mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf4_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf2_i32m1_tu(vint32m1_t vd, vint8mf2_t vs2,
                                           vuint8mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8mf2_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m1_i32m1_tu(vint32m1_t vd, vint8m1_t vs2,
                                          vuint8m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m1_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m2_i32m1_tu(vint32m1_t vd, vint8m2_t vs2,
                                          vuint8m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m2_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m4_i32m1_tu(vint32m1_t vd, vint8m4_t vs2,
                                          vuint8m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m4_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m8_i32m1_tu(vint32m1_t vd, vint8m8_t vs2,
                                          vuint8m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u8m8_i32m1_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf8_i32m1_tum(vbool64_t vm, vint32m1_t vd,
                                            vint8mf8_t vs2, vint8mf8_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i8mf8_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf4_i32m1_tum(vbool32_t vm, vint32m1_t vd,
                                            vint8mf4_t vs2, vint8mf4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i8mf4_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf2_i32m1_tum(vbool16_t vm, vint32m1_t vd,
                                            vint8mf2_t vs2, vint8mf2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i8mf2_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m1_i32m1_tum(vbool8_t vm, vint32m1_t vd,
                                           vint8m1_t vs2, vint8m1_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i8m1_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m2_i32m1_tum(vbool4_t vm, vint32m1_t vd,
                                           vint8m2_t vs2, vint8m2_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i8m2_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m4_i32m1_tum(vbool2_t vm, vint32m1_t vd,
                                           vint8m4_t vs2, vint8m4_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i8m4_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m8_i32m1_tum(vbool1_t vm, vint32m1_t vd,
                                           vint8m8_t vs2, vint8m8_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i8m8_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf8_i32m1_tum(vbool64_t vm, vint32m1_t vd,
                                            vint8mf8_t vs2, vuint8mf8_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u8mf8_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf4_i32m1_tum(vbool32_t vm, vint32m1_t vd,
                                            vint8mf4_t vs2, vuint8mf4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u8mf4_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf2_i32m1_tum(vbool16_t vm, vint32m1_t vd,
                                            vint8mf2_t vs2, vuint8mf2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u8mf2_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m1_i32m1_tum(vbool8_t vm, vint32m1_t vd,
                                           vint8m1_t vs2, vuint8m1_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u8m1_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m2_i32m1_tum(vbool4_t vm, vint32m1_t vd,
                                           vint8m2_t vs2, vuint8m2_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u8m2_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m4_i32m1_tum(vbool2_t vm, vint32m1_t vd,
                                           vint8m4_t vs2, vuint8m4_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u8m4_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m8_i32m1_tum(vbool1_t vm, vint32m1_t vd,
                                           vint8m8_t vs2, vuint8m8_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u8m8_i32m1_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf8_i32m1_tumu(vbool64_t vm, vint32m1_t vd,
                                             vint8mf8_t vs2, vint8mf8_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i8mf8_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf4_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                             vint8mf4_t vs2, vint8mf4_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i8mf4_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf2_i32m1_tumu(vbool16_t vm, vint32m1_t vd,
                                             vint8mf2_t vs2, vint8mf2_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i8mf2_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m1_i32m1_tumu(vbool8_t vm, vint32m1_t vd,
                                            vint8m1_t vs2, vint8m1_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i8m1_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m2_i32m1_tumu(vbool4_t vm, vint32m1_t vd,
                                            vint8m2_t vs2, vint8m2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i8m2_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m4_i32m1_tumu(vbool2_t vm, vint32m1_t vd,
                                            vint8m4_t vs2, vint8m4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i8m4_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m8_i32m1_tumu(vbool1_t vm, vint32m1_t vd,
                                            vint8m8_t vs2, vint8m8_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i8m8_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf8_i32m1_tumu(vbool64_t vm, vint32m1_t vd,
                                             vint8mf8_t vs2, vuint8mf8_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u8mf8_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf4_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                             vint8mf4_t vs2, vuint8mf4_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u8mf4_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf2_i32m1_tumu(vbool16_t vm, vint32m1_t vd,
                                             vint8mf2_t vs2, vuint8mf2_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u8mf2_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m1_i32m1_tumu(vbool8_t vm, vint32m1_t vd,
                                            vint8m1_t vs2, vuint8m1_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u8m1_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m2_i32m1_tumu(vbool4_t vm, vint32m1_t vd,
                                            vint8m2_t vs2, vuint8m2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u8m2_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m4_i32m1_tumu(vbool2_t vm, vint32m1_t vd,
                                            vint8m4_t vs2, vuint8m4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u8m4_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m8_i32m1_tumu(vbool1_t vm, vint32m1_t vd,
                                            vint8m8_t vs2, vuint8m8_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u8m8_i32m1_tumu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf8_i32m1_mu(vbool64_t vm, vint32m1_t vd,
                                           vint8mf8_t vs2, vint8mf8_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i8mf8_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf4_i32m1_mu(vbool32_t vm, vint32m1_t vd,
                                           vint8mf4_t vs2, vint8mf4_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i8mf4_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8mf2_i32m1_mu(vbool16_t vm, vint32m1_t vd,
                                           vint8mf2_t vs2, vint8mf2_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i8mf2_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m1_i32m1_mu(vbool8_t vm, vint32m1_t vd,
                                          vint8m1_t vs2, vint8m1_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_i8m1_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m2_i32m1_mu(vbool4_t vm, vint32m1_t vd,
                                          vint8m2_t vs2, vint8m2_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_i8m2_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m4_i32m1_mu(vbool2_t vm, vint32m1_t vd,
                                          vint8m4_t vs2, vint8m4_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_i8m4_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_i8m8_i32m1_mu(vbool1_t vm, vint32m1_t vd,
                                          vint8m8_t vs2, vint8m8_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_i8m8_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf8_i32m1_mu(vbool64_t vm, vint32m1_t vd,
                                           vint8mf8_t vs2, vuint8mf8_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u8mf8_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf4_i32m1_mu(vbool32_t vm, vint32m1_t vd,
                                           vint8mf4_t vs2, vuint8mf4_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u8mf4_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8mf2_i32m1_mu(vbool16_t vm, vint32m1_t vd,
                                           vint8mf2_t vs2, vuint8mf2_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u8mf2_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m1_i32m1_mu(vbool8_t vm, vint32m1_t vd,
                                          vint8m1_t vs2, vuint8m1_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_u8m1_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m2_i32m1_mu(vbool4_t vm, vint32m1_t vd,
                                          vint8m2_t vs2, vuint8m2_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_u8m2_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m4_i32m1_mu(vbool2_t vm, vint32m1_t vd,
                                          vint8m4_t vs2, vuint8m4_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_u8m4_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vqwdotas_vv_u8m8_i32m1_mu(vbool1_t vm, vint32m1_t vd,
                                          vint8m8_t vs2, vuint8m8_t vs1,
                                          size_t vl) {
  return __riscv_vqwdotas_vv_u8m8_i32m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf4_i64m1_tu(vint64m1_t vd, vint16mf4_t vs2,
                                            vint16mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16mf4_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf2_i64m1_tu(vint64m1_t vd, vint16mf2_t vs2,
                                            vint16mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16mf2_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m1_i64m1_tu(vint64m1_t vd, vint16m1_t vs2,
                                           vint16m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m1_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m2_i64m1_tu(vint64m1_t vd, vint16m2_t vs2,
                                           vint16m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m2_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m4_i64m1_tu(vint64m1_t vd, vint16m4_t vs2,
                                           vint16m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m4_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m8_i64m1_tu(vint64m1_t vd, vint16m8_t vs2,
                                           vint16m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_i16m8_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf4_i64m1_tu(vint64m1_t vd, vint16mf4_t vs2,
                                            vuint16mf4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16mf4_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf2_i64m1_tu(vint64m1_t vd, vint16mf2_t vs2,
                                            vuint16mf2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16mf2_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m1_i64m1_tu(vint64m1_t vd, vint16m1_t vs2,
                                           vuint16m1_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m1_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m2_i64m1_tu(vint64m1_t vd, vint16m2_t vs2,
                                           vuint16m2_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m2_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m4_i64m1_tu(vint64m1_t vd, vint16m4_t vs2,
                                           vuint16m4_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m4_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m8_i64m1_tu(vint64m1_t vd, vint16m8_t vs2,
                                           vuint16m8_t vs1, size_t vl) {
  return __riscv_vqwdotas_vv_u16m8_i64m1_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf4_i64m1_tum(vbool64_t vm, vint64m1_t vd,
                                             vint16mf4_t vs2, vint16mf4_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i16mf4_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf2_i64m1_tum(vbool32_t vm, vint64m1_t vd,
                                             vint16mf2_t vs2, vint16mf2_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i16mf2_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m1_i64m1_tum(vbool16_t vm, vint64m1_t vd,
                                            vint16m1_t vs2, vint16m1_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i16m1_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m2_i64m1_tum(vbool8_t vm, vint64m1_t vd,
                                            vint16m2_t vs2, vint16m2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i16m2_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m4_i64m1_tum(vbool4_t vm, vint64m1_t vd,
                                            vint16m4_t vs2, vint16m4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i16m4_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m8_i64m1_tum(vbool2_t vm, vint64m1_t vd,
                                            vint16m8_t vs2, vint16m8_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i16m8_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf4_i64m1_tum(vbool64_t vm, vint64m1_t vd,
                                             vint16mf4_t vs2, vuint16mf4_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u16mf4_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf2_i64m1_tum(vbool32_t vm, vint64m1_t vd,
                                             vint16mf2_t vs2, vuint16mf2_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u16mf2_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m1_i64m1_tum(vbool16_t vm, vint64m1_t vd,
                                            vint16m1_t vs2, vuint16m1_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u16m1_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m2_i64m1_tum(vbool8_t vm, vint64m1_t vd,
                                            vint16m2_t vs2, vuint16m2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u16m2_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m4_i64m1_tum(vbool4_t vm, vint64m1_t vd,
                                            vint16m4_t vs2, vuint16m4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u16m4_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m8_i64m1_tum(vbool2_t vm, vint64m1_t vd,
                                            vint16m8_t vs2, vuint16m8_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u16m8_i64m1_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf4_i64m1_tumu(vbool64_t vm, vint64m1_t vd,
                                              vint16mf4_t vs2, vint16mf4_t vs1,
                                              size_t vl) {
  return __riscv_vqwdotas_vv_i16mf4_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf2_i64m1_tumu(vbool32_t vm, vint64m1_t vd,
                                              vint16mf2_t vs2, vint16mf2_t vs1,
                                              size_t vl) {
  return __riscv_vqwdotas_vv_i16mf2_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m1_i64m1_tumu(vbool16_t vm, vint64m1_t vd,
                                             vint16m1_t vs2, vint16m1_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i16m1_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m2_i64m1_tumu(vbool8_t vm, vint64m1_t vd,
                                             vint16m2_t vs2, vint16m2_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i16m2_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m4_i64m1_tumu(vbool4_t vm, vint64m1_t vd,
                                             vint16m4_t vs2, vint16m4_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i16m4_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m8_i64m1_tumu(vbool2_t vm, vint64m1_t vd,
                                             vint16m8_t vs2, vint16m8_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_i16m8_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf4_i64m1_tumu(vbool64_t vm, vint64m1_t vd,
                                              vint16mf4_t vs2, vuint16mf4_t vs1,
                                              size_t vl) {
  return __riscv_vqwdotas_vv_u16mf4_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf2_i64m1_tumu(vbool32_t vm, vint64m1_t vd,
                                              vint16mf2_t vs2, vuint16mf2_t vs1,
                                              size_t vl) {
  return __riscv_vqwdotas_vv_u16mf2_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m1_i64m1_tumu(vbool16_t vm, vint64m1_t vd,
                                             vint16m1_t vs2, vuint16m1_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u16m1_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m2_i64m1_tumu(vbool8_t vm, vint64m1_t vd,
                                             vint16m2_t vs2, vuint16m2_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u16m2_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m4_i64m1_tumu(vbool4_t vm, vint64m1_t vd,
                                             vint16m4_t vs2, vuint16m4_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u16m4_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m8_i64m1_tumu(vbool2_t vm, vint64m1_t vd,
                                             vint16m8_t vs2, vuint16m8_t vs1,
                                             size_t vl) {
  return __riscv_vqwdotas_vv_u16m8_i64m1_tumu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf4_i64m1_mu(vbool64_t vm, vint64m1_t vd,
                                            vint16mf4_t vs2, vint16mf4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i16mf4_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16mf2_i64m1_mu(vbool32_t vm, vint64m1_t vd,
                                            vint16mf2_t vs2, vint16mf2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_i16mf2_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m1_i64m1_mu(vbool16_t vm, vint64m1_t vd,
                                           vint16m1_t vs2, vint16m1_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i16m1_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m2_i64m1_mu(vbool8_t vm, vint64m1_t vd,
                                           vint16m2_t vs2, vint16m2_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i16m2_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m4_i64m1_mu(vbool4_t vm, vint64m1_t vd,
                                           vint16m4_t vs2, vint16m4_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i16m4_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_i16m8_i64m1_mu(vbool2_t vm, vint64m1_t vd,
                                           vint16m8_t vs2, vint16m8_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_i16m8_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf4_i64m1_mu(vbool64_t vm, vint64m1_t vd,
                                            vint16mf4_t vs2, vuint16mf4_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u16mf4_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16mf2_i64m1_mu(vbool32_t vm, vint64m1_t vd,
                                            vint16mf2_t vs2, vuint16mf2_t vs1,
                                            size_t vl) {
  return __riscv_vqwdotas_vv_u16mf2_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m1_i64m1_mu(vbool16_t vm, vint64m1_t vd,
                                           vint16m1_t vs2, vuint16m1_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u16m1_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m2_i64m1_mu(vbool8_t vm, vint64m1_t vd,
                                           vint16m2_t vs2, vuint16m2_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u16m2_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m4_i64m1_mu(vbool4_t vm, vint64m1_t vd,
                                           vint16m4_t vs2, vuint16m4_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u16m4_i64m1_mu(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vqwdotas_vv_u16m8_i64m1_mu(vbool2_t vm, vint64m1_t vd,
                                           vint16m8_t vs2, vuint16m8_t vs1,
                                           size_t vl) {
  return __riscv_vqwdotas_vv_u16m8_i64m1_mu(vm, vd, vs2, vs1, vl);
}
