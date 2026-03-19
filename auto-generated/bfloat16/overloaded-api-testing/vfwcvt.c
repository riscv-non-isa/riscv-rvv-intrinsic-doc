#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4(vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2(vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1(vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2(vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4(vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8(vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2(vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4(vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8(vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_bf16(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_m(vbool64_t vm, vint8mf8_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_m(vbool32_t vm, vint8mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_m(vbool16_t vm, vint8mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_m(vbool8_t vm, vint8m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_m(vbool4_t vm, vint8m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_m(vbool2_t vm, vint8m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_m(vbool64_t vm, vuint8mf8_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_m(vbool32_t vm, vuint8mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_m(vbool16_t vm, vuint8mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_m(vbool8_t vm, vuint8m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_m(vbool4_t vm, vuint8m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_m(vbool2_t vm, vuint8m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_bf16(vm, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_bf16mf4_f32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_bf16mf2_f32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_bf16m1_f32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_bf16m2_f32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_bf16m4_f32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f(vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_bf16mf4_f32mf2_m(vbool64_t vm,
                                                 vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_bf16mf2_f32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                               size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_bf16m1_f32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                              size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_bf16m2_f32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                              size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_bf16m4_f32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                              size_t vl) {
  return __riscv_vfwcvt_f(vm, vs2, vl);
}
