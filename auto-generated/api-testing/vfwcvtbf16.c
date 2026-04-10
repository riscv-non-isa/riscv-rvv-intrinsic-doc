#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4(vfloat8e4m3mf8_t vs2,
                                                   size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2(vfloat8e4m3mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e4m3mf2_bf16m1(vfloat8e4m3mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3mf2_bf16m1(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e4m3m1_bf16m2(vfloat8e4m3m1_t vs2,
                                                size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3m1_bf16m2(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e4m3m2_bf16m4(vfloat8e4m3m2_t vs2,
                                                size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3m2_bf16m4(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e4m3m4_bf16m8(vfloat8e4m3m4_t vs2,
                                                size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3m4_bf16m8(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4_m(vbool64_t vm,
                                                     vfloat8e4m3mf8_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3mf8_bf16mf4_m(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2_m(vbool32_t vm,
                                                     vfloat8e4m3mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3mf4_bf16mf2_m(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e4m3mf2_bf16m1_m(vbool16_t vm,
                                                   vfloat8e4m3mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3mf2_bf16m1_m(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e4m3m1_bf16m2_m(vbool8_t vm,
                                                  vfloat8e4m3m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3m1_bf16m2_m(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e4m3m2_bf16m4_m(vbool4_t vm,
                                                  vfloat8e4m3m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3m2_bf16m4_m(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e4m3m4_bf16m8_m(vbool2_t vm,
                                                  vfloat8e4m3m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e4m3m4_bf16m8_m(vm, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4(vfloat8e5m2mf8_t vs2,
                                                   size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4(vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2(vfloat8e5m2mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2(vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e5m2mf2_bf16m1(vfloat8e5m2mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2mf2_bf16m1(vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e5m2m1_bf16m2(vfloat8e5m2m1_t vs2,
                                                size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2m1_bf16m2(vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e5m2m2_bf16m4(vfloat8e5m2m2_t vs2,
                                                size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2m2_bf16m4(vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e5m2m4_bf16m8(vfloat8e5m2m4_t vs2,
                                                size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2m4_bf16m8(vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4_m(vbool64_t vm,
                                                     vfloat8e5m2mf8_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2mf8_bf16mf4_m(vm, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2_m(vbool32_t vm,
                                                     vfloat8e5m2mf4_t vs2,
                                                     size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2mf4_bf16mf2_m(vm, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_f_v_f8e5m2mf2_bf16m1_m(vbool16_t vm,
                                                   vfloat8e5m2mf2_t vs2,
                                                   size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2mf2_bf16m1_m(vm, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_f_v_f8e5m2m1_bf16m2_m(vbool8_t vm,
                                                  vfloat8e5m2m1_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2m1_bf16m2_m(vm, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_f_v_f8e5m2m2_bf16m4_m(vbool4_t vm,
                                                  vfloat8e5m2m2_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2m2_bf16m4_m(vm, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_f_v_f8e5m2m4_bf16m8_m(vbool2_t vm,
                                                  vfloat8e5m2m4_t vs2,
                                                  size_t vl) {
  return __riscv_vfwcvt_f_f_v_f8e5m2m4_bf16m8_m(vm, vs2, vl);
}
