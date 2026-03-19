#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfslide1down_vf_bf16mf4_tu(vbfloat16mf4_t vd,
                                               vbfloat16mf4_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf4_tu(vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfslide1down_vf_bf16mf2_tu(vbfloat16mf2_t vd,
                                               vbfloat16mf2_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf2_tu(vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfslide1down_vf_bf16m1_tu(vbfloat16m1_t vd,
                                             vbfloat16m1_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m1_tu(vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfslide1down_vf_bf16m2_tu(vbfloat16m2_t vd,
                                             vbfloat16m2_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m2_tu(vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfslide1down_vf_bf16m4_tu(vbfloat16m4_t vd,
                                             vbfloat16m4_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m4_tu(vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfslide1down_vf_bf16m8_tu(vbfloat16m8_t vd,
                                             vbfloat16m8_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m8_tu(vd, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfslide1down_vf_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                                vbfloat16mf4_t vs2, __bf16 rs1,
                                                size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf4_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfslide1down_vf_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                                vbfloat16mf2_t vs2, __bf16 rs1,
                                                size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf2_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfslide1down_vf_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                              vbfloat16m1_t vs2, __bf16 rs1,
                                              size_t vl) {
  return __riscv_vfslide1down_vf_bf16m1_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfslide1down_vf_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                              vbfloat16m2_t vs2, __bf16 rs1,
                                              size_t vl) {
  return __riscv_vfslide1down_vf_bf16m2_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfslide1down_vf_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                              vbfloat16m4_t vs2, __bf16 rs1,
                                              size_t vl) {
  return __riscv_vfslide1down_vf_bf16m4_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfslide1down_vf_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                              vbfloat16m8_t vs2, __bf16 rs1,
                                              size_t vl) {
  return __riscv_vfslide1down_vf_bf16m8_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfslide1down_vf_bf16mf4_tumu(vbool64_t vm,
                                                 vbfloat16mf4_t vd,
                                                 vbfloat16mf4_t vs2, __bf16 rs1,
                                                 size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf4_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfslide1down_vf_bf16mf2_tumu(vbool32_t vm,
                                                 vbfloat16mf2_t vd,
                                                 vbfloat16mf2_t vs2, __bf16 rs1,
                                                 size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf2_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfslide1down_vf_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                               vbfloat16m1_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16m1_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfslide1down_vf_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                               vbfloat16m2_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16m2_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfslide1down_vf_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                               vbfloat16m4_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16m4_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfslide1down_vf_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                               vbfloat16m8_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16m8_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfslide1down_vf_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                               vbfloat16mf4_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf4_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfslide1down_vf_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                               vbfloat16mf2_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfslide1down_vf_bf16mf2_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfslide1down_vf_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                             vbfloat16m1_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m1_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfslide1down_vf_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                             vbfloat16m2_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m2_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfslide1down_vf_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                             vbfloat16m4_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m4_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfslide1down_vf_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                             vbfloat16m8_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfslide1down_vf_bf16m8_mu(vm, vd, vs2, rs1, vl);
}
