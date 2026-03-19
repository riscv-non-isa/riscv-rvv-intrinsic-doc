#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfncvt_rod_f_f_w_bf16mf4_tu(vbfloat16mf4_t vd,
                                                vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf4_tu(vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_rod_f_f_w_bf16mf2_tu(vbfloat16mf2_t vd,
                                                vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf2_tu(vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_rod_f_f_w_bf16m1_tu(vbfloat16m1_t vd,
                                              vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m1_tu(vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_rod_f_f_w_bf16m2_tu(vbfloat16m2_t vd,
                                              vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m2_tu(vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_rod_f_f_w_bf16m4_tu(vbfloat16m4_t vd,
                                              vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m4_tu(vd, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_rod_f_f_w_bf16mf4_tum(vbool64_t vm,
                                                 vbfloat16mf4_t vd,
                                                 vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf4_tum(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_rod_f_f_w_bf16mf2_tum(vbool32_t vm,
                                                 vbfloat16mf2_t vd,
                                                 vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf2_tum(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_rod_f_f_w_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                               vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m1_tum(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_rod_f_f_w_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                               vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m2_tum(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_rod_f_f_w_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                               vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m4_tum(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_rod_f_f_w_bf16mf4_tumu(vbool64_t vm,
                                                  vbfloat16mf4_t vd,
                                                  vfloat32mf2_t vs2,
                                                  size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf4_tumu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_rod_f_f_w_bf16mf2_tumu(vbool32_t vm,
                                                  vbfloat16mf2_t vd,
                                                  vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf2_tumu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_rod_f_f_w_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                                vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m1_tumu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_rod_f_f_w_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                                vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m2_tumu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_rod_f_f_w_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                                vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m4_tumu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfncvt_rod_f_f_w_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                                vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf4_mu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfncvt_rod_f_f_w_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                                vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16mf2_mu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfncvt_rod_f_f_w_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                              vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m1_mu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfncvt_rod_f_f_w_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                              vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m2_mu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfncvt_rod_f_f_w_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                              vfloat32m8_t vs2, size_t vl) {
  return __riscv_vfncvt_rod_f_f_w_bf16m4_mu(vm, vd, vs2, vl);
}
