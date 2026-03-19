#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2_t test_vfwadd_vv_bf16mf4_f32mf2(vbfloat16mf4_t vs2,
                                            vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_bf16mf4_f32mf2(vbfloat16mf4_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_bf16mf4_f32mf2(vfloat32mf2_t vs2,
                                            vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_bf16_f32mf2(vfloat32mf2_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_bf16mf2_f32m1(vbfloat16mf2_t vs2,
                                          vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_bf16mf2_f32m1(vbfloat16mf2_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_bf16mf2_f32m1(vfloat32m1_t vs2, vbfloat16mf2_t vs1,
                                          size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_bf16_f32m1(vfloat32m1_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_bf16m1_f32m2(vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_bf16m1_f32m2(vbfloat16m1_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_bf16m1_f32m2(vfloat32m2_t vs2, vbfloat16m1_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_bf16_f32m2(vfloat32m2_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_bf16m2_f32m4(vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_bf16m2_f32m4(vbfloat16m2_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_bf16m2_f32m4(vfloat32m4_t vs2, vbfloat16m2_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_bf16_f32m4(vfloat32m4_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_bf16m4_f32m8(vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_bf16m4_f32m8(vbfloat16m4_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_bf16m4_f32m8(vfloat32m8_t vs2, vbfloat16m4_t vs1,
                                         size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_bf16_f32m8(vfloat32m8_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_bf16mf4_f32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                              vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_vf_bf16mf4_f32mf2_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_wv_bf16mf4_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2,
                                              vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vfwadd_wf_bf16_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2,
                                           __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_vv_bf16mf2_f32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                            vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_vf_bf16mf2_f32m1_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                            __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, vl);
}

vfloat32m1_t test_vfwadd_wv_bf16mf2_f32m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                            vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwadd_wf_bf16_f32m1_m(vbool32_t vm, vfloat32m1_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_vv_bf16m1_f32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                           vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_vf_bf16m1_f32m2_m(vbool16_t vm, vbfloat16m1_t vs2,
                                           __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, vl);
}

vfloat32m2_t test_vfwadd_wv_bf16m1_f32m2_m(vbool16_t vm, vfloat32m2_t vs2,
                                           vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vfwadd_wf_bf16_f32m2_m(vbool16_t vm, vfloat32m2_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_vv_bf16m2_f32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                           vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_vf_bf16m2_f32m4_m(vbool8_t vm, vbfloat16m2_t vs2,
                                           __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, vl);
}

vfloat32m4_t test_vfwadd_wv_bf16m2_f32m4_m(vbool8_t vm, vfloat32m4_t vs2,
                                           vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vfwadd_wf_bf16_f32m4_m(vbool8_t vm, vfloat32m4_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_vv_bf16m4_f32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                           vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_vf_bf16m4_f32m8_m(vbool4_t vm, vbfloat16m4_t vs2,
                                           __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, vl);
}

vfloat32m8_t test_vfwadd_wv_bf16m4_f32m8_m(vbool4_t vm, vfloat32m8_t vs2,
                                           vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vfwadd_wf_bf16_f32m8_m(vbool4_t vm, vfloat32m8_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, vl);
}

vfloat32mf2_t test_vfwadd_vv_bf16mf4_f32mf2_rm(vbfloat16mf4_t vs2,
                                               vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_bf16mf4_f32mf2_rm(vbfloat16mf4_t vs2, __bf16 rs1,
                                               size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_bf16mf4_f32mf2_rm(vfloat32mf2_t vs2,
                                               vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_bf16_f32mf2_rm(vfloat32mf2_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_bf16mf2_f32m1_rm(vbfloat16mf2_t vs2,
                                             vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_bf16mf2_f32m1_rm(vbfloat16mf2_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_bf16mf2_f32m1_rm(vfloat32m1_t vs2,
                                             vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_bf16_f32m1_rm(vfloat32m1_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_bf16m1_f32m2_rm(vbfloat16m1_t vs2,
                                            vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_bf16m1_f32m2_rm(vbfloat16m1_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_bf16m1_f32m2_rm(vfloat32m2_t vs2, vbfloat16m1_t vs1,
                                            size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_bf16_f32m2_rm(vfloat32m2_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_bf16m2_f32m4_rm(vbfloat16m2_t vs2,
                                            vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_bf16m2_f32m4_rm(vbfloat16m2_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_bf16m2_f32m4_rm(vfloat32m4_t vs2, vbfloat16m2_t vs1,
                                            size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_bf16_f32m4_rm(vfloat32m4_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_bf16m4_f32m8_rm(vbfloat16m4_t vs2,
                                            vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_bf16m4_f32m8_rm(vbfloat16m4_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfwadd_vf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_bf16m4_f32m8_rm(vfloat32m8_t vs2, vbfloat16m4_t vs1,
                                            size_t vl) {
  return __riscv_vfwadd_wv(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_bf16_f32m8_rm(vfloat32m8_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfwadd_wf(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vv_bf16mf4_f32mf2_rm_m(vbool64_t vm,
                                                 vbfloat16mf4_t vs2,
                                                 vbfloat16mf4_t vs1,
                                                 size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_vf_bf16mf4_f32mf2_rm_m(vbool64_t vm,
                                                 vbfloat16mf4_t vs2, __bf16 rs1,
                                                 size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wv_bf16mf4_f32mf2_rm_m(vbool64_t vm,
                                                 vfloat32mf2_t vs2,
                                                 vbfloat16mf4_t vs1,
                                                 size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32mf2_t test_vfwadd_wf_bf16_f32mf2_rm_m(vbool64_t vm, vfloat32mf2_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vv_bf16mf2_f32m1_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                               vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_vf_bf16mf2_f32m1_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                               __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wv_bf16mf2_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                               vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwadd_wf_bf16_f32m1_rm_m(vbool32_t vm, vfloat32m1_t vs2,
                                            __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vv_bf16m1_f32m2_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                              vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_vf_bf16m1_f32m2_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wv_bf16m1_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                              vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m2_t test_vfwadd_wf_bf16_f32m2_rm_m(vbool16_t vm, vfloat32m2_t vs2,
                                            __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vv_bf16m2_f32m4_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                              vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_vf_bf16m2_f32m4_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wv_bf16m2_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                              vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m4_t test_vfwadd_wf_bf16_f32m4_rm_m(vbool8_t vm, vfloat32m4_t vs2,
                                            __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vv_bf16m4_f32m8_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                              vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_vv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_vf_bf16m4_f32m8_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                              __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_vf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wv_bf16m4_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                              vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfwadd_wv(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m8_t test_vfwadd_wf_bf16_f32m8_rm_m(vbool4_t vm, vfloat32m8_t vs2,
                                            __bf16 rs1, size_t vl) {
  return __riscv_vfwadd_wf(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}
