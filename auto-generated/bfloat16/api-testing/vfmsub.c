#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfmsub_vv_bf16mf4(vbfloat16mf4_t vd, vbfloat16mf4_t vs1,
                                      vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16mf4(vd, vs1, vs2, vl);
}

vbfloat16mf4_t test_vfmsub_vf_bf16mf4(vbfloat16mf4_t vd, __bf16 rs1,
                                      vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16mf4(vd, rs1, vs2, vl);
}

vbfloat16mf2_t test_vfmsub_vv_bf16mf2(vbfloat16mf2_t vd, vbfloat16mf2_t vs1,
                                      vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16mf2(vd, vs1, vs2, vl);
}

vbfloat16mf2_t test_vfmsub_vf_bf16mf2(vbfloat16mf2_t vd, __bf16 rs1,
                                      vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16mf2(vd, rs1, vs2, vl);
}

vbfloat16m1_t test_vfmsub_vv_bf16m1(vbfloat16m1_t vd, vbfloat16m1_t vs1,
                                    vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m1(vd, vs1, vs2, vl);
}

vbfloat16m1_t test_vfmsub_vf_bf16m1(vbfloat16m1_t vd, __bf16 rs1,
                                    vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m1(vd, rs1, vs2, vl);
}

vbfloat16m2_t test_vfmsub_vv_bf16m2(vbfloat16m2_t vd, vbfloat16m2_t vs1,
                                    vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m2(vd, vs1, vs2, vl);
}

vbfloat16m2_t test_vfmsub_vf_bf16m2(vbfloat16m2_t vd, __bf16 rs1,
                                    vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m2(vd, rs1, vs2, vl);
}

vbfloat16m4_t test_vfmsub_vv_bf16m4(vbfloat16m4_t vd, vbfloat16m4_t vs1,
                                    vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m4(vd, vs1, vs2, vl);
}

vbfloat16m4_t test_vfmsub_vf_bf16m4(vbfloat16m4_t vd, __bf16 rs1,
                                    vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m4(vd, rs1, vs2, vl);
}

vbfloat16m8_t test_vfmsub_vv_bf16m8(vbfloat16m8_t vd, vbfloat16m8_t vs1,
                                    vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m8(vd, vs1, vs2, vl);
}

vbfloat16m8_t test_vfmsub_vf_bf16m8(vbfloat16m8_t vd, __bf16 rs1,
                                    vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m8(vd, rs1, vs2, vl);
}

vbfloat16mf4_t test_vfmsub_vv_bf16mf4_m(vbool64_t vm, vbfloat16mf4_t vd,
                                        vbfloat16mf4_t vs1, vbfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_vv_bf16mf4_m(vm, vd, vs1, vs2, vl);
}

vbfloat16mf4_t test_vfmsub_vf_bf16mf4_m(vbool64_t vm, vbfloat16mf4_t vd,
                                        __bf16 rs1, vbfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_vf_bf16mf4_m(vm, vd, rs1, vs2, vl);
}

vbfloat16mf2_t test_vfmsub_vv_bf16mf2_m(vbool32_t vm, vbfloat16mf2_t vd,
                                        vbfloat16mf2_t vs1, vbfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_vv_bf16mf2_m(vm, vd, vs1, vs2, vl);
}

vbfloat16mf2_t test_vfmsub_vf_bf16mf2_m(vbool32_t vm, vbfloat16mf2_t vd,
                                        __bf16 rs1, vbfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfmsub_vf_bf16mf2_m(vm, vd, rs1, vs2, vl);
}

vbfloat16m1_t test_vfmsub_vv_bf16m1_m(vbool16_t vm, vbfloat16m1_t vd,
                                      vbfloat16m1_t vs1, vbfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_vv_bf16m1_m(vm, vd, vs1, vs2, vl);
}

vbfloat16m1_t test_vfmsub_vf_bf16m1_m(vbool16_t vm, vbfloat16m1_t vd,
                                      __bf16 rs1, vbfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_vf_bf16m1_m(vm, vd, rs1, vs2, vl);
}

vbfloat16m2_t test_vfmsub_vv_bf16m2_m(vbool8_t vm, vbfloat16m2_t vd,
                                      vbfloat16m2_t vs1, vbfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_vv_bf16m2_m(vm, vd, vs1, vs2, vl);
}

vbfloat16m2_t test_vfmsub_vf_bf16m2_m(vbool8_t vm, vbfloat16m2_t vd, __bf16 rs1,
                                      vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m2_m(vm, vd, rs1, vs2, vl);
}

vbfloat16m4_t test_vfmsub_vv_bf16m4_m(vbool4_t vm, vbfloat16m4_t vd,
                                      vbfloat16m4_t vs1, vbfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_vv_bf16m4_m(vm, vd, vs1, vs2, vl);
}

vbfloat16m4_t test_vfmsub_vf_bf16m4_m(vbool4_t vm, vbfloat16m4_t vd, __bf16 rs1,
                                      vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m4_m(vm, vd, rs1, vs2, vl);
}

vbfloat16m8_t test_vfmsub_vv_bf16m8_m(vbool2_t vm, vbfloat16m8_t vd,
                                      vbfloat16m8_t vs1, vbfloat16m8_t vs2,
                                      size_t vl) {
  return __riscv_vfmsub_vv_bf16m8_m(vm, vd, vs1, vs2, vl);
}

vbfloat16m8_t test_vfmsub_vf_bf16m8_m(vbool2_t vm, vbfloat16m8_t vd, __bf16 rs1,
                                      vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m8_m(vm, vd, rs1, vs2, vl);
}

vbfloat16mf4_t test_vfmsub_vv_bf16mf4_rm(vbfloat16mf4_t vd, vbfloat16mf4_t vs1,
                                         vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16mf4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfmsub_vf_bf16mf4_rm(vbfloat16mf4_t vd, __bf16 rs1,
                                         vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16mf4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfmsub_vv_bf16mf2_rm(vbfloat16mf2_t vd, vbfloat16mf2_t vs1,
                                         vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16mf2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfmsub_vf_bf16mf2_rm(vbfloat16mf2_t vd, __bf16 rs1,
                                         vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16mf2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfmsub_vv_bf16m1_rm(vbfloat16m1_t vd, vbfloat16m1_t vs1,
                                       vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m1_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfmsub_vf_bf16m1_rm(vbfloat16m1_t vd, __bf16 rs1,
                                       vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m1_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfmsub_vv_bf16m2_rm(vbfloat16m2_t vd, vbfloat16m2_t vs1,
                                       vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m2_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfmsub_vf_bf16m2_rm(vbfloat16m2_t vd, __bf16 rs1,
                                       vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m2_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfmsub_vv_bf16m4_rm(vbfloat16m4_t vd, vbfloat16m4_t vs1,
                                       vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m4_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfmsub_vf_bf16m4_rm(vbfloat16m4_t vd, __bf16 rs1,
                                       vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m4_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfmsub_vv_bf16m8_rm(vbfloat16m8_t vd, vbfloat16m8_t vs1,
                                       vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16m8_rm(vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfmsub_vf_bf16m8_rm(vbfloat16m8_t vd, __bf16 rs1,
                                       vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfmsub_vf_bf16m8_rm(vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfmsub_vv_bf16mf4_rm_m(vbool64_t vm, vbfloat16mf4_t vd,
                                           vbfloat16mf4_t vs1,
                                           vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16mf4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfmsub_vf_bf16mf4_rm_m(vbool64_t vm, vbfloat16mf4_t vd,
                                           __bf16 rs1, vbfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfmsub_vf_bf16mf4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfmsub_vv_bf16mf2_rm_m(vbool32_t vm, vbfloat16mf2_t vd,
                                           vbfloat16mf2_t vs1,
                                           vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfmsub_vv_bf16mf2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfmsub_vf_bf16mf2_rm_m(vbool32_t vm, vbfloat16mf2_t vd,
                                           __bf16 rs1, vbfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfmsub_vf_bf16mf2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfmsub_vv_bf16m1_rm_m(vbool16_t vm, vbfloat16m1_t vd,
                                         vbfloat16m1_t vs1, vbfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vv_bf16m1_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfmsub_vf_bf16m1_rm_m(vbool16_t vm, vbfloat16m1_t vd,
                                         __bf16 rs1, vbfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vf_bf16m1_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfmsub_vv_bf16m2_rm_m(vbool8_t vm, vbfloat16m2_t vd,
                                         vbfloat16m2_t vs1, vbfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vv_bf16m2_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfmsub_vf_bf16m2_rm_m(vbool8_t vm, vbfloat16m2_t vd,
                                         __bf16 rs1, vbfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vf_bf16m2_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfmsub_vv_bf16m4_rm_m(vbool4_t vm, vbfloat16m4_t vd,
                                         vbfloat16m4_t vs1, vbfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vv_bf16m4_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfmsub_vf_bf16m4_rm_m(vbool4_t vm, vbfloat16m4_t vd,
                                         __bf16 rs1, vbfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vf_bf16m4_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfmsub_vv_bf16m8_rm_m(vbool2_t vm, vbfloat16m8_t vd,
                                         vbfloat16m8_t vs1, vbfloat16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vv_bf16m8_rm_m(vm, vd, vs1, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfmsub_vf_bf16m8_rm_m(vbool2_t vm, vbfloat16m8_t vd,
                                         __bf16 rs1, vbfloat16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfmsub_vf_bf16m8_rm_m(vm, vd, rs1, vs2, __RISCV_FRM_RNE, vl);
}
