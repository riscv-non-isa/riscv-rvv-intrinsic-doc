#include <riscv_vector.h>
#include <stdint.h>

vuint8mf8_t test_vabs_v_u8mf8_tu(vuint8mf8_t vd, vint8mf8_t vs2, size_t vl) {
  return __riscv_vabs_v_u8mf8_tu(vd, vs2, vl);
}

vuint8mf4_t test_vabs_v_u8mf4_tu(vuint8mf4_t vd, vint8mf4_t vs2, size_t vl) {
  return __riscv_vabs_v_u8mf4_tu(vd, vs2, vl);
}

vuint8mf2_t test_vabs_v_u8mf2_tu(vuint8mf2_t vd, vint8mf2_t vs2, size_t vl) {
  return __riscv_vabs_v_u8mf2_tu(vd, vs2, vl);
}

vuint8m1_t test_vabs_v_u8m1_tu(vuint8m1_t vd, vint8m1_t vs2, size_t vl) {
  return __riscv_vabs_v_u8m1_tu(vd, vs2, vl);
}

vuint8m2_t test_vabs_v_u8m2_tu(vuint8m2_t vd, vint8m2_t vs2, size_t vl) {
  return __riscv_vabs_v_u8m2_tu(vd, vs2, vl);
}

vuint8m4_t test_vabs_v_u8m4_tu(vuint8m4_t vd, vint8m4_t vs2, size_t vl) {
  return __riscv_vabs_v_u8m4_tu(vd, vs2, vl);
}

vuint8m8_t test_vabs_v_u8m8_tu(vuint8m8_t vd, vint8m8_t vs2, size_t vl) {
  return __riscv_vabs_v_u8m8_tu(vd, vs2, vl);
}

vuint16mf4_t test_vabs_v_u16mf4_tu(vuint16mf4_t vd, vint16mf4_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u16mf4_tu(vd, vs2, vl);
}

vuint16mf2_t test_vabs_v_u16mf2_tu(vuint16mf2_t vd, vint16mf2_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u16mf2_tu(vd, vs2, vl);
}

vuint16m1_t test_vabs_v_u16m1_tu(vuint16m1_t vd, vint16m1_t vs2, size_t vl) {
  return __riscv_vabs_v_u16m1_tu(vd, vs2, vl);
}

vuint16m2_t test_vabs_v_u16m2_tu(vuint16m2_t vd, vint16m2_t vs2, size_t vl) {
  return __riscv_vabs_v_u16m2_tu(vd, vs2, vl);
}

vuint16m4_t test_vabs_v_u16m4_tu(vuint16m4_t vd, vint16m4_t vs2, size_t vl) {
  return __riscv_vabs_v_u16m4_tu(vd, vs2, vl);
}

vuint16m8_t test_vabs_v_u16m8_tu(vuint16m8_t vd, vint16m8_t vs2, size_t vl) {
  return __riscv_vabs_v_u16m8_tu(vd, vs2, vl);
}

vuint32mf2_t test_vabs_v_u32mf2_tu(vuint32mf2_t vd, vint32mf2_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u32mf2_tu(vd, vs2, vl);
}

vuint32m1_t test_vabs_v_u32m1_tu(vuint32m1_t vd, vint32m1_t vs2, size_t vl) {
  return __riscv_vabs_v_u32m1_tu(vd, vs2, vl);
}

vuint32m2_t test_vabs_v_u32m2_tu(vuint32m2_t vd, vint32m2_t vs2, size_t vl) {
  return __riscv_vabs_v_u32m2_tu(vd, vs2, vl);
}

vuint32m4_t test_vabs_v_u32m4_tu(vuint32m4_t vd, vint32m4_t vs2, size_t vl) {
  return __riscv_vabs_v_u32m4_tu(vd, vs2, vl);
}

vuint32m8_t test_vabs_v_u32m8_tu(vuint32m8_t vd, vint32m8_t vs2, size_t vl) {
  return __riscv_vabs_v_u32m8_tu(vd, vs2, vl);
}

vuint64m1_t test_vabs_v_u64m1_tu(vuint64m1_t vd, vint64m1_t vs2, size_t vl) {
  return __riscv_vabs_v_u64m1_tu(vd, vs2, vl);
}

vuint64m2_t test_vabs_v_u64m2_tu(vuint64m2_t vd, vint64m2_t vs2, size_t vl) {
  return __riscv_vabs_v_u64m2_tu(vd, vs2, vl);
}

vuint64m4_t test_vabs_v_u64m4_tu(vuint64m4_t vd, vint64m4_t vs2, size_t vl) {
  return __riscv_vabs_v_u64m4_tu(vd, vs2, vl);
}

vuint64m8_t test_vabs_v_u64m8_tu(vuint64m8_t vd, vint64m8_t vs2, size_t vl) {
  return __riscv_vabs_v_u64m8_tu(vd, vs2, vl);
}

vuint8mf8_t test_vabs_v_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd, vint8mf8_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u8mf8_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vabs_v_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd, vint8mf4_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u8mf4_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vabs_v_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd, vint8mf2_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u8mf2_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vabs_v_u8m1_tum(vbool8_t vm, vuint8m1_t vd, vint8m1_t vs2,
                                size_t vl) {
  return __riscv_vabs_v_u8m1_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vabs_v_u8m2_tum(vbool4_t vm, vuint8m2_t vd, vint8m2_t vs2,
                                size_t vl) {
  return __riscv_vabs_v_u8m2_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vabs_v_u8m4_tum(vbool2_t vm, vuint8m4_t vd, vint8m4_t vs2,
                                size_t vl) {
  return __riscv_vabs_v_u8m4_tum(vm, vd, vs2, vl);
}

vuint8m8_t test_vabs_v_u8m8_tum(vbool1_t vm, vuint8m8_t vd, vint8m8_t vs2,
                                size_t vl) {
  return __riscv_vabs_v_u8m8_tum(vm, vd, vs2, vl);
}

vuint16mf4_t test_vabs_v_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd,
                                    vint16mf4_t vs2, size_t vl) {
  return __riscv_vabs_v_u16mf4_tum(vm, vd, vs2, vl);
}

vuint16mf2_t test_vabs_v_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd,
                                    vint16mf2_t vs2, size_t vl) {
  return __riscv_vabs_v_u16mf2_tum(vm, vd, vs2, vl);
}

vuint16m1_t test_vabs_v_u16m1_tum(vbool16_t vm, vuint16m1_t vd, vint16m1_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u16m1_tum(vm, vd, vs2, vl);
}

vuint16m2_t test_vabs_v_u16m2_tum(vbool8_t vm, vuint16m2_t vd, vint16m2_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u16m2_tum(vm, vd, vs2, vl);
}

vuint16m4_t test_vabs_v_u16m4_tum(vbool4_t vm, vuint16m4_t vd, vint16m4_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u16m4_tum(vm, vd, vs2, vl);
}

vuint16m8_t test_vabs_v_u16m8_tum(vbool2_t vm, vuint16m8_t vd, vint16m8_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u16m8_tum(vm, vd, vs2, vl);
}

vuint32mf2_t test_vabs_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                    vint32mf2_t vs2, size_t vl) {
  return __riscv_vabs_v_u32mf2_tum(vm, vd, vs2, vl);
}

vuint32m1_t test_vabs_v_u32m1_tum(vbool32_t vm, vuint32m1_t vd, vint32m1_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u32m1_tum(vm, vd, vs2, vl);
}

vuint32m2_t test_vabs_v_u32m2_tum(vbool16_t vm, vuint32m2_t vd, vint32m2_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u32m2_tum(vm, vd, vs2, vl);
}

vuint32m4_t test_vabs_v_u32m4_tum(vbool8_t vm, vuint32m4_t vd, vint32m4_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u32m4_tum(vm, vd, vs2, vl);
}

vuint32m8_t test_vabs_v_u32m8_tum(vbool4_t vm, vuint32m8_t vd, vint32m8_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u32m8_tum(vm, vd, vs2, vl);
}

vuint64m1_t test_vabs_v_u64m1_tum(vbool64_t vm, vuint64m1_t vd, vint64m1_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u64m1_tum(vm, vd, vs2, vl);
}

vuint64m2_t test_vabs_v_u64m2_tum(vbool32_t vm, vuint64m2_t vd, vint64m2_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u64m2_tum(vm, vd, vs2, vl);
}

vuint64m4_t test_vabs_v_u64m4_tum(vbool16_t vm, vuint64m4_t vd, vint64m4_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u64m4_tum(vm, vd, vs2, vl);
}

vuint64m8_t test_vabs_v_u64m8_tum(vbool8_t vm, vuint64m8_t vd, vint64m8_t vs2,
                                  size_t vl) {
  return __riscv_vabs_v_u64m8_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vabs_v_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd, vint8mf8_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u8mf8_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vabs_v_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd, vint8mf4_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u8mf4_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vabs_v_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd, vint8mf2_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u8mf2_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vabs_v_u8m1_tumu(vbool8_t vm, vuint8m1_t vd, vint8m1_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u8m1_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vabs_v_u8m2_tumu(vbool4_t vm, vuint8m2_t vd, vint8m2_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u8m2_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vabs_v_u8m4_tumu(vbool2_t vm, vuint8m4_t vd, vint8m4_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u8m4_tumu(vm, vd, vs2, vl);
}

vuint8m8_t test_vabs_v_u8m8_tumu(vbool1_t vm, vuint8m8_t vd, vint8m8_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u8m8_tumu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vabs_v_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd,
                                     vint16mf4_t vs2, size_t vl) {
  return __riscv_vabs_v_u16mf4_tumu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vabs_v_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd,
                                     vint16mf2_t vs2, size_t vl) {
  return __riscv_vabs_v_u16mf2_tumu(vm, vd, vs2, vl);
}

vuint16m1_t test_vabs_v_u16m1_tumu(vbool16_t vm, vuint16m1_t vd, vint16m1_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u16m1_tumu(vm, vd, vs2, vl);
}

vuint16m2_t test_vabs_v_u16m2_tumu(vbool8_t vm, vuint16m2_t vd, vint16m2_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u16m2_tumu(vm, vd, vs2, vl);
}

vuint16m4_t test_vabs_v_u16m4_tumu(vbool4_t vm, vuint16m4_t vd, vint16m4_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u16m4_tumu(vm, vd, vs2, vl);
}

vuint16m8_t test_vabs_v_u16m8_tumu(vbool2_t vm, vuint16m8_t vd, vint16m8_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u16m8_tumu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vabs_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                     vint32mf2_t vs2, size_t vl) {
  return __riscv_vabs_v_u32mf2_tumu(vm, vd, vs2, vl);
}

vuint32m1_t test_vabs_v_u32m1_tumu(vbool32_t vm, vuint32m1_t vd, vint32m1_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u32m1_tumu(vm, vd, vs2, vl);
}

vuint32m2_t test_vabs_v_u32m2_tumu(vbool16_t vm, vuint32m2_t vd, vint32m2_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u32m2_tumu(vm, vd, vs2, vl);
}

vuint32m4_t test_vabs_v_u32m4_tumu(vbool8_t vm, vuint32m4_t vd, vint32m4_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u32m4_tumu(vm, vd, vs2, vl);
}

vuint32m8_t test_vabs_v_u32m8_tumu(vbool4_t vm, vuint32m8_t vd, vint32m8_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u32m8_tumu(vm, vd, vs2, vl);
}

vuint64m1_t test_vabs_v_u64m1_tumu(vbool64_t vm, vuint64m1_t vd, vint64m1_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u64m1_tumu(vm, vd, vs2, vl);
}

vuint64m2_t test_vabs_v_u64m2_tumu(vbool32_t vm, vuint64m2_t vd, vint64m2_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u64m2_tumu(vm, vd, vs2, vl);
}

vuint64m4_t test_vabs_v_u64m4_tumu(vbool16_t vm, vuint64m4_t vd, vint64m4_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u64m4_tumu(vm, vd, vs2, vl);
}

vuint64m8_t test_vabs_v_u64m8_tumu(vbool8_t vm, vuint64m8_t vd, vint64m8_t vs2,
                                   size_t vl) {
  return __riscv_vabs_v_u64m8_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vabs_v_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd, vint8mf8_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u8mf8_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vabs_v_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd, vint8mf4_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u8mf4_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vabs_v_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd, vint8mf2_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u8mf2_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vabs_v_u8m1_mu(vbool8_t vm, vuint8m1_t vd, vint8m1_t vs2,
                               size_t vl) {
  return __riscv_vabs_v_u8m1_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vabs_v_u8m2_mu(vbool4_t vm, vuint8m2_t vd, vint8m2_t vs2,
                               size_t vl) {
  return __riscv_vabs_v_u8m2_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vabs_v_u8m4_mu(vbool2_t vm, vuint8m4_t vd, vint8m4_t vs2,
                               size_t vl) {
  return __riscv_vabs_v_u8m4_mu(vm, vd, vs2, vl);
}

vuint8m8_t test_vabs_v_u8m8_mu(vbool1_t vm, vuint8m8_t vd, vint8m8_t vs2,
                               size_t vl) {
  return __riscv_vabs_v_u8m8_mu(vm, vd, vs2, vl);
}

vuint16mf4_t test_vabs_v_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd,
                                   vint16mf4_t vs2, size_t vl) {
  return __riscv_vabs_v_u16mf4_mu(vm, vd, vs2, vl);
}

vuint16mf2_t test_vabs_v_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd,
                                   vint16mf2_t vs2, size_t vl) {
  return __riscv_vabs_v_u16mf2_mu(vm, vd, vs2, vl);
}

vuint16m1_t test_vabs_v_u16m1_mu(vbool16_t vm, vuint16m1_t vd, vint16m1_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u16m1_mu(vm, vd, vs2, vl);
}

vuint16m2_t test_vabs_v_u16m2_mu(vbool8_t vm, vuint16m2_t vd, vint16m2_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u16m2_mu(vm, vd, vs2, vl);
}

vuint16m4_t test_vabs_v_u16m4_mu(vbool4_t vm, vuint16m4_t vd, vint16m4_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u16m4_mu(vm, vd, vs2, vl);
}

vuint16m8_t test_vabs_v_u16m8_mu(vbool2_t vm, vuint16m8_t vd, vint16m8_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u16m8_mu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vabs_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                   vint32mf2_t vs2, size_t vl) {
  return __riscv_vabs_v_u32mf2_mu(vm, vd, vs2, vl);
}

vuint32m1_t test_vabs_v_u32m1_mu(vbool32_t vm, vuint32m1_t vd, vint32m1_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u32m1_mu(vm, vd, vs2, vl);
}

vuint32m2_t test_vabs_v_u32m2_mu(vbool16_t vm, vuint32m2_t vd, vint32m2_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u32m2_mu(vm, vd, vs2, vl);
}

vuint32m4_t test_vabs_v_u32m4_mu(vbool8_t vm, vuint32m4_t vd, vint32m4_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u32m4_mu(vm, vd, vs2, vl);
}

vuint32m8_t test_vabs_v_u32m8_mu(vbool4_t vm, vuint32m8_t vd, vint32m8_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u32m8_mu(vm, vd, vs2, vl);
}

vuint64m1_t test_vabs_v_u64m1_mu(vbool64_t vm, vuint64m1_t vd, vint64m1_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u64m1_mu(vm, vd, vs2, vl);
}

vuint64m2_t test_vabs_v_u64m2_mu(vbool32_t vm, vuint64m2_t vd, vint64m2_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u64m2_mu(vm, vd, vs2, vl);
}

vuint64m4_t test_vabs_v_u64m4_mu(vbool16_t vm, vuint64m4_t vd, vint64m4_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u64m4_mu(vm, vd, vs2, vl);
}

vuint64m8_t test_vabs_v_u64m8_mu(vbool8_t vm, vuint64m8_t vd, vint64m8_t vs2,
                                 size_t vl) {
  return __riscv_vabs_v_u64m8_mu(vm, vd, vs2, vl);
}
