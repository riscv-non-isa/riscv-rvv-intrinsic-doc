#include <riscv_vector.h>
#include <stdint.h>

vint8mf8_t test_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_tu(vint8mf8_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_tu(vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_tu(vint8mf4_t vd,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_tu(vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_bf16m1_i8mf2_tu(vint8mf2_t vd,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m1_i8mf2_tu(vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_bf16m2_i8m1_tu(vint8m1_t vd, vbfloat16m2_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m2_i8m1_tu(vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_bf16m4_i8m2_tu(vint8m2_t vd, vbfloat16m4_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m4_i8m2_tu(vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_bf16m8_i8m4_tu(vint8m4_t vd, vbfloat16m8_t vs2,
                                               size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m8_i8m4_tu(vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_tu(vuint8mf8_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_tu(vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_tu(vuint8mf4_t vd,
                                                    vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_tu(vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_tu(vuint8mf2_t vd,
                                                   vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_tu(vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_bf16m2_u8m1_tu(vuint8m1_t vd,
                                                 vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m2_u8m1_tu(vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_bf16m4_u8m2_tu(vuint8m2_t vd,
                                                 vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m4_u8m2_tu(vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_bf16m8_u8m4_tu(vuint8m4_t vd,
                                                 vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m8_u8m4_tu(vd, vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_tum(vbool64_t vm, vint8mf8_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_tum(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_tum(vbool32_t vm, vint8mf4_t vd,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_tum(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_bf16m1_i8mf2_tum(vbool16_t vm, vint8mf2_t vd,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m1_i8mf2_tum(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_bf16m2_i8m1_tum(vbool8_t vm, vint8m1_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m2_i8m1_tum(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_bf16m4_i8m2_tum(vbool4_t vm, vint8m2_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m4_i8m2_tum(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_bf16m8_i8m4_tum(vbool2_t vm, vint8m4_t vd,
                                                vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m8_i8m4_tum(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_tum(vbool64_t vm,
                                                     vuint8mf8_t vd,
                                                     vbfloat16mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_tum(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_tum(vbool32_t vm,
                                                     vuint8mf4_t vd,
                                                     vbfloat16mf2_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_tum(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_tum(vbool16_t vm,
                                                    vuint8mf2_t vd,
                                                    vbfloat16m1_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_tum(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_bf16m2_u8m1_tum(vbool8_t vm, vuint8m1_t vd,
                                                  vbfloat16m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m2_u8m1_tum(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_bf16m4_u8m2_tum(vbool4_t vm, vuint8m2_t vd,
                                                  vbfloat16m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m4_u8m2_tum(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_bf16m8_u8m4_tum(vbool2_t vm, vuint8m4_t vd,
                                                  vbfloat16m8_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m8_u8m4_tum(vm, vd, vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_tumu(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd,
                                                    vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_tumu(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_bf16m1_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd,
                                                   vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m1_i8mf2_tumu(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_bf16m2_i8m1_tumu(vbool8_t vm, vint8m1_t vd,
                                                 vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m2_i8m1_tumu(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_bf16m4_i8m2_tumu(vbool4_t vm, vint8m2_t vd,
                                                 vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m4_i8m2_tumu(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_bf16m8_i8m4_tumu(vbool2_t vm, vint8m4_t vd,
                                                 vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m8_i8m4_tumu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_tumu(vbool64_t vm,
                                                      vuint8mf8_t vd,
                                                      vbfloat16mf4_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_tumu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_tumu(vbool32_t vm,
                                                      vuint8mf4_t vd,
                                                      vbfloat16mf2_t vs2,
                                                      size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_tumu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_tumu(vbool16_t vm,
                                                     vuint8mf2_t vd,
                                                     vbfloat16m1_t vs2,
                                                     size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_tumu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_bf16m2_u8m1_tumu(vbool8_t vm, vuint8m1_t vd,
                                                   vbfloat16m2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m2_u8m1_tumu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_bf16m4_u8m2_tumu(vbool4_t vm, vuint8m2_t vd,
                                                   vbfloat16m4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m4_u8m2_tumu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_bf16m8_u8m4_tumu(vbool2_t vm, vuint8m4_t vd,
                                                   vbfloat16m8_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m8_u8m4_tumu(vm, vd, vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_mu(vbool64_t vm, vint8mf8_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_mu(vm, vd, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_mu(vbool32_t vm, vint8mf4_t vd,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_mu(vm, vd, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_bf16m1_i8mf2_mu(vbool16_t vm, vint8mf2_t vd,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m1_i8mf2_mu(vm, vd, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_bf16m2_i8m1_mu(vbool8_t vm, vint8m1_t vd,
                                               vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m2_i8m1_mu(vm, vd, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_bf16m4_i8m2_mu(vbool4_t vm, vint8m2_t vd,
                                               vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m4_i8m2_mu(vm, vd, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_bf16m8_i8m4_mu(vbool2_t vm, vint8m4_t vd,
                                               vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m8_i8m4_mu(vm, vd, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_mu(vbool64_t vm,
                                                    vuint8mf8_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_mu(vm, vd, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_mu(vbool32_t vm,
                                                    vuint8mf4_t vd,
                                                    vbfloat16mf2_t vs2,
                                                    size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_mu(vm, vd, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd,
                                                   vbfloat16m1_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_mu(vm, vd, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_bf16m2_u8m1_mu(vbool8_t vm, vuint8m1_t vd,
                                                 vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m2_u8m1_mu(vm, vd, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_bf16m4_u8m2_mu(vbool4_t vm, vuint8m2_t vd,
                                                 vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m4_u8m2_mu(vm, vd, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_bf16m8_u8m4_mu(vbool2_t vm, vuint8m4_t vd,
                                                 vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m8_u8m4_mu(vm, vd, vs2, vl);
}
