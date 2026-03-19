#include <riscv_vector.h>
#include <stdint.h>

vint8mf8_t test_vfncvt_rtz_x_f_w_bf16mf4_i8mf8(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf4_i8mf8(vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_bf16mf2_i8mf4(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf2_i8mf4(vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_bf16m1_i8mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m1_i8mf2(vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_bf16m2_i8m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m2_i8m1(vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_bf16m4_i8m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m4_i8m2(vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_bf16m8_i8m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m8_i8m4(vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8(vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8(vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4(vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4(vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_bf16m1_u8mf2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m1_u8mf2(vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_bf16m2_u8m1(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m2_u8m1(vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_bf16m4_u8m2(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m4_u8m2(vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_bf16m8_u8m4(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m8_u8m4(vs2, vl);
}

vint8mf8_t test_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_m(vbool64_t vm,
                                                 vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf4_i8mf8_m(vm, vs2, vl);
}

vint8mf4_t test_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_m(vbool32_t vm,
                                                 vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16mf2_i8mf4_m(vm, vs2, vl);
}

vint8mf2_t test_vfncvt_rtz_x_f_w_bf16m1_i8mf2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                                size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m1_i8mf2_m(vm, vs2, vl);
}

vint8m1_t test_vfncvt_rtz_x_f_w_bf16m2_i8m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m2_i8m1_m(vm, vs2, vl);
}

vint8m2_t test_vfncvt_rtz_x_f_w_bf16m4_i8m2_m(vbool4_t vm, vbfloat16m4_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m4_i8m2_m(vm, vs2, vl);
}

vint8m4_t test_vfncvt_rtz_x_f_w_bf16m8_i8m4_m(vbool2_t vm, vbfloat16m8_t vs2,
                                              size_t vl) {
  return __riscv_vfncvt_rtz_x_f_w_bf16m8_i8m4_m(vm, vs2, vl);
}

vuint8mf8_t test_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_m(vbool64_t vm,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf4_u8mf8_m(vm, vs2, vl);
}

vuint8mf4_t test_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_m(vbool32_t vm,
                                                   vbfloat16mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16mf2_u8mf4_m(vm, vs2, vl);
}

vuint8mf2_t test_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_m(vbool16_t vm,
                                                  vbfloat16m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m1_u8mf2_m(vm, vs2, vl);
}

vuint8m1_t test_vfncvt_rtz_xu_f_w_bf16m2_u8m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                                size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m2_u8m1_m(vm, vs2, vl);
}

vuint8m2_t test_vfncvt_rtz_xu_f_w_bf16m4_u8m2_m(vbool4_t vm, vbfloat16m4_t vs2,
                                                size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m4_u8m2_m(vm, vs2, vl);
}

vuint8m4_t test_vfncvt_rtz_xu_f_w_bf16m8_u8m4_m(vbool2_t vm, vbfloat16m8_t vs2,
                                                size_t vl) {
  return __riscv_vfncvt_rtz_xu_f_w_bf16m8_u8m4_m(vm, vs2, vl);
}
