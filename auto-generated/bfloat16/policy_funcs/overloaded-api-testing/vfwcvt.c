#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_tu(vbfloat16mf4_t vd, vint8mf8_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_tu(vbfloat16mf2_t vd, vint8mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_tu(vbfloat16m1_t vd, vint8mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_tu(vbfloat16m2_t vd, vint8m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_tu(vbfloat16m4_t vd, vint8m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_tu(vbfloat16m8_t vd, vint8m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_tu(vbfloat16mf4_t vd, vuint8mf8_t vs2,
                                             size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_tu(vbfloat16mf2_t vd, vuint8mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_tu(vbfloat16m1_t vd, vuint8mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_tu(vbfloat16m2_t vd, vuint8m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_tu(vbfloat16m4_t vd, vuint8m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_tu(vbfloat16m8_t vd, vuint8m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_bf16_tu(vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                             vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                             vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                           vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                           vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                           vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                           vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                              vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                              vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                            vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                            vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                            vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                            vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tum(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                              vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                              vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                            vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                            vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                            vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                            vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                               vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                               vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                             vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                             vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                             vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                             vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_tumu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                            vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                            vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                          vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                          vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                          vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                          vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                             vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                             vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                           vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                           vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                           vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                           vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_bf16mf4_f32mf2_tu(vfloat32mf2_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_bf16mf2_f32m1_tu(vfloat32m1_t vd,
                                                vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_bf16m1_f32m2_tu(vfloat32m2_t vd,
                                               vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_bf16m2_f32m4_tu(vfloat32m4_t vd,
                                               vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_bf16m4_f32m8_tu(vfloat32m8_t vd,
                                               vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_bf16mf4_f32mf2_tum(vbool64_t vm,
                                                   vfloat32mf2_t vd,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_bf16mf2_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                                 vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_bf16m1_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                                vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_bf16m2_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_bf16m4_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_bf16mf4_f32mf2_tumu(vbool64_t vm,
                                                    vfloat32mf2_t vd,
                                                    vbfloat16mf4_t vs2,
                                                    size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_bf16mf2_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                                  vbfloat16mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_bf16m1_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                                 vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_bf16m2_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                                 vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_bf16m4_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                                 vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_bf16mf4_f32mf2_mu(vbool64_t vm,
                                                  vfloat32mf2_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_bf16mf2_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                                vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_bf16m1_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                               vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_bf16m2_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                               vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_bf16m4_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                               vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}
