#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2_t test_vfwnmacc_vv_bf16mf4_f32mf2(vfloat32mf2_t vd,
                                              vbfloat16mf4_t vs1,
                                              vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_bf16mf4_f32mf2(vfloat32mf2_t vd, __bf16 vs1,
                                              vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vv_bf16mf2_f32m1(vfloat32m1_t vd, vbfloat16mf2_t vs1,
                                            vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vf_bf16mf2_f32m1(vfloat32m1_t vd, __bf16 vs1,
                                            vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vv_bf16m1_f32m2(vfloat32m2_t vd, vbfloat16m1_t vs1,
                                           vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vf_bf16m1_f32m2(vfloat32m2_t vd, __bf16 vs1,
                                           vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vv_bf16m2_f32m4(vfloat32m4_t vd, vbfloat16m2_t vs1,
                                           vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vf_bf16m2_f32m4(vfloat32m4_t vd, __bf16 vs1,
                                           vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vv_bf16m4_f32m8(vfloat32m8_t vd, vbfloat16m4_t vs1,
                                           vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vf_bf16m4_f32m8(vfloat32m8_t vd, __bf16 vs1,
                                           vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_bf16mf4_f32mf2_m(vbool64_t vm, vfloat32mf2_t vd,
                                                vbfloat16mf4_t vs1,
                                                vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_bf16mf4_f32mf2_m(vbool64_t vm, vfloat32mf2_t vd,
                                                __bf16 vs1, vbfloat16mf4_t vs2,
                                                size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vv_bf16mf2_f32m1_m(vbool32_t vm, vfloat32m1_t vd,
                                              vbfloat16mf2_t vs1,
                                              vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfwnmacc_vf_bf16mf2_f32m1_m(vbool32_t vm, vfloat32m1_t vd,
                                              __bf16 vs1, vbfloat16mf2_t vs2,
                                              size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vv_bf16m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd,
                                             vbfloat16m1_t vs1,
                                             vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfwnmacc_vf_bf16m1_f32m2_m(vbool16_t vm, vfloat32m2_t vd,
                                             __bf16 vs1, vbfloat16m1_t vs2,
                                             size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vv_bf16m2_f32m4_m(vbool8_t vm, vfloat32m4_t vd,
                                             vbfloat16m2_t vs1,
                                             vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfwnmacc_vf_bf16m2_f32m4_m(vbool8_t vm, vfloat32m4_t vd,
                                             __bf16 vs1, vbfloat16m2_t vs2,
                                             size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vv_bf16m4_f32m8_m(vbool4_t vm, vfloat32m8_t vd,
                                             vbfloat16m4_t vs1,
                                             vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfwnmacc_vf_bf16m4_f32m8_m(vbool4_t vm, vfloat32m8_t vd,
                                             __bf16 vs1, vbfloat16m4_t vs2,
                                             size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_bf16mf4_f32mf2_rm(vfloat32mf2_t vd,
                                                 vbfloat16mf4_t vs1,
                                                 vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_bf16mf4_f32mf2_rm(vfloat32mf2_t vd, __bf16 vs1,
                                                 vbfloat16mf4_t vs2,
                                                 size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vv_bf16mf2_f32m1_rm(vfloat32m1_t vd,
                                               vbfloat16mf2_t vs1,
                                               vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vf_bf16mf2_f32m1_rm(vfloat32m1_t vd, __bf16 vs1,
                                               vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vv_bf16m1_f32m2_rm(vfloat32m2_t vd,
                                              vbfloat16m1_t vs1,
                                              vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vf_bf16m1_f32m2_rm(vfloat32m2_t vd, __bf16 vs1,
                                              vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vv_bf16m2_f32m4_rm(vfloat32m4_t vd,
                                              vbfloat16m2_t vs1,
                                              vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vf_bf16m2_f32m4_rm(vfloat32m4_t vd, __bf16 vs1,
                                              vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vv_bf16m4_f32m8_rm(vfloat32m8_t vd,
                                              vbfloat16m4_t vs1,
                                              vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vf_bf16m4_f32m8_rm(vfloat32m8_t vd, __bf16 vs1,
                                              vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vv_bf16mf4_f32mf2_rm_m(vbool64_t vm,
                                                   vfloat32mf2_t vd,
                                                   vbfloat16mf4_t vs1,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwnmacc_vf_bf16mf4_f32mf2_rm_m(vbool64_t vm,
                                                   vfloat32mf2_t vd, __bf16 vs1,
                                                   vbfloat16mf4_t vs2,
                                                   size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vv_bf16mf2_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd,
                                                 vbfloat16mf2_t vs1,
                                                 vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwnmacc_vf_bf16mf2_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vd,
                                                 __bf16 vs1, vbfloat16mf2_t vs2,
                                                 size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vv_bf16m1_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vd,
                                                vbfloat16m1_t vs1,
                                                vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwnmacc_vf_bf16m1_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vd,
                                                __bf16 vs1, vbfloat16m1_t vs2,
                                                size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vv_bf16m2_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vd,
                                                vbfloat16m2_t vs1,
                                                vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwnmacc_vf_bf16m2_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vd,
                                                __bf16 vs1, vbfloat16m2_t vs2,
                                                size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vv_bf16m4_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vd,
                                                vbfloat16m4_t vs1,
                                                vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwnmacc_vf_bf16m4_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vd,
                                                __bf16 vs1, vbfloat16m4_t vs2,
                                                size_t vl) {
  return __riscv_vfwnmacc(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}
