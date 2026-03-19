#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2_t test_vfwmul_vv_bf16mf4_f32mf2(vbfloat16mf4_t vs2,
                                            vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16mf4_f32mf2(vs2, vs1, vl);
}

vfloat32mf2_t test_vfwmul_vf_bf16mf4_f32mf2(vbfloat16mf4_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwmul_vf_bf16mf4_f32mf2(vs2, rs1, vl);
}

vfloat32m1_t test_vfwmul_vv_bf16mf2_f32m1(vbfloat16mf2_t vs2,
                                          vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16mf2_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwmul_vf_bf16mf2_f32m1(vbfloat16mf2_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfwmul_vf_bf16mf2_f32m1(vs2, rs1, vl);
}

vfloat32m2_t test_vfwmul_vv_bf16m1_f32m2(vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                         size_t vl) {
  return __riscv_vfwmul_vv_bf16m1_f32m2(vs2, vs1, vl);
}

vfloat32m2_t test_vfwmul_vf_bf16m1_f32m2(vbfloat16m1_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfwmul_vf_bf16m1_f32m2(vs2, rs1, vl);
}

vfloat32m4_t test_vfwmul_vv_bf16m2_f32m4(vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                         size_t vl) {
  return __riscv_vfwmul_vv_bf16m2_f32m4(vs2, vs1, vl);
}

vfloat32m4_t test_vfwmul_vf_bf16m2_f32m4(vbfloat16m2_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfwmul_vf_bf16m2_f32m4(vs2, rs1, vl);
}

vfloat32m8_t test_vfwmul_vv_bf16m4_f32m8(vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                         size_t vl) {
  return __riscv_vfwmul_vv_bf16m4_f32m8(vs2, vs1, vl);
}

vfloat32m8_t test_vfwmul_vf_bf16m4_f32m8(vbfloat16m4_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfwmul_vf_bf16m4_f32m8(vs2, rs1, vl);
}

vfloat32mf2_t test_vfwmul_vv_bf16mf4_f32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                              vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16mf4_f32mf2_m(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwmul_vf_bf16mf4_f32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16mf4_f32mf2_m(vm, vs2, rs1, vl);
}

vfloat32m1_t test_vfwmul_vv_bf16mf2_f32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                            vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16mf2_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwmul_vf_bf16mf2_f32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                            __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16mf2_f32m1_m(vm, vs2, rs1, vl);
}

vfloat32m2_t test_vfwmul_vv_bf16m1_f32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                           vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m1_f32m2_m(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vfwmul_vf_bf16m1_f32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                           __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16m1_f32m2_m(vm, vs2, rs1, vl);
}

vfloat32m4_t test_vfwmul_vv_bf16m2_f32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                           vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m2_f32m4_m(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vfwmul_vf_bf16m2_f32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                           __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16m2_f32m4_m(vm, vs2, rs1, vl);
}

vfloat32m8_t test_vfwmul_vv_bf16m4_f32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                           vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m4_f32m8_m(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vfwmul_vf_bf16m4_f32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                           __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16m4_f32m8_m(vm, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwmul_vv_bf16mf4_f32mf2_rm(vbfloat16mf4_t vs2,
                                               vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16mf4_f32mf2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwmul_vf_bf16mf4_f32mf2_rm(vbfloat16mf4_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfwmul_vf_bf16mf4_f32mf2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwmul_vv_bf16mf2_f32m1_rm(vbfloat16mf2_t vs2,
                                             vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16mf2_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwmul_vf_bf16mf2_f32m1_rm(vbfloat16mf2_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfwmul_vf_bf16mf2_f32m1_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwmul_vv_bf16m1_f32m2_rm(vbfloat16m1_t vs2,
                                            vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m1_f32m2_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwmul_vf_bf16m1_f32m2_rm(vbfloat16m1_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwmul_vf_bf16m1_f32m2_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vv_bf16m2_f32m4_rm(vbfloat16m2_t vs2,
                                            vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m2_f32m4_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vf_bf16m2_f32m4_rm(vbfloat16m2_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwmul_vf_bf16m2_f32m4_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vv_bf16m4_f32m8_rm(vbfloat16m4_t vs2,
                                            vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m4_f32m8_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vf_bf16m4_f32m8_rm(vbfloat16m4_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwmul_vf_bf16m4_f32m8_rm(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwmul_vv_bf16mf4_f32mf2_rm_m(vbool64_t vm,
                                                 vbfloat16mf4_t vs2,
                                                 vbfloat16mf4_t vs1,
                                                 size_t vl) {
  return __riscv_vfwmul_vv_bf16mf4_f32mf2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                               vl);
}

vfloat32mf2_t test_vfwmul_vf_bf16mf4_f32mf2_rm_m(vbool64_t vm,
                                                 vbfloat16mf4_t vs2, __bf16 rs1,
                                                 size_t vl) {
  return __riscv_vfwmul_vf_bf16mf4_f32mf2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE,
                                               vl);
}

vfloat32m1_t test_vfwmul_vv_bf16mf2_f32m1_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                               vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16mf2_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                              vl);
}

vfloat32m1_t test_vfwmul_vf_bf16mf2_f32m1_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                               __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16mf2_f32m1_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE,
                                              vl);
}

vfloat32m2_t test_vfwmul_vv_bf16m1_f32m2_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                              vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m1_f32m2_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwmul_vf_bf16m1_f32m2_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16m1_f32m2_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vv_bf16m2_f32m4_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                              vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m2_f32m4_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwmul_vf_bf16m2_f32m4_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16m2_f32m4_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vv_bf16m4_f32m8_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                              vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwmul_vv_bf16m4_f32m8_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwmul_vf_bf16m4_f32m8_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwmul_vf_bf16m4_f32m8_rm_m(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}
