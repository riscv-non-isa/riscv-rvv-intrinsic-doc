#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfadd_vv_bf16mf4_tu(vbfloat16mf4_t vd, vbfloat16mf4_t vs2,
                                        vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_tu(vbfloat16mf4_t vd, vbfloat16mf4_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_tu(vbfloat16mf2_t vd, vbfloat16mf2_t vs2,
                                        vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_tu(vbfloat16mf2_t vd, vbfloat16mf2_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_tu(vbfloat16m1_t vd, vbfloat16m1_t vs2,
                                      vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_tu(vbfloat16m1_t vd, vbfloat16m1_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_tu(vbfloat16m2_t vd, vbfloat16m2_t vs2,
                                      vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_tu(vbfloat16m2_t vd, vbfloat16m2_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_tu(vbfloat16m4_t vd, vbfloat16m4_t vs2,
                                      vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_tu(vbfloat16m4_t vd, vbfloat16m4_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_tu(vbfloat16m8_t vd, vbfloat16m8_t vs2,
                                      vbfloat16m8_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_tu(vbfloat16m8_t vd, vbfloat16m8_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfadd_vv_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                         vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                         size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                         vbfloat16mf4_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                         vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                         size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                         vbfloat16mf2_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                       vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                       vbfloat16m1_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                       vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                       vbfloat16m2_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                       vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                       vbfloat16m4_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                       vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                       vbfloat16m8_t vs2, __bf16 rs1,
                                       size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfadd_vv_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                          vbfloat16mf4_t vs2,
                                          vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                          vbfloat16mf4_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                          vbfloat16mf2_t vs2,
                                          vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                          vbfloat16mf2_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                        vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                        vbfloat16m1_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                        vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                        vbfloat16m2_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                        vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                        vbfloat16m4_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                        vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                        vbfloat16m8_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfadd_vv_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                        vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                        vbfloat16mf4_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                        vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                        vbfloat16mf2_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                      vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                      vbfloat16m1_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                      vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                      vbfloat16m2_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                      vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                      vbfloat16m4_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                      vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                      vbfloat16m8_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfadd_vv_bf16mf4_rm_tu(vbfloat16mf4_t vd,
                                           vbfloat16mf4_t vs2,
                                           vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_rm_tu(vbfloat16mf4_t vd,
                                           vbfloat16mf4_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_rm_tu(vbfloat16mf2_t vd,
                                           vbfloat16mf2_t vs2,
                                           vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_rm_tu(vbfloat16mf2_t vd,
                                           vbfloat16mf2_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_rm_tu(vbfloat16m1_t vd, vbfloat16m1_t vs2,
                                         vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_rm_tu(vbfloat16m1_t vd, vbfloat16m1_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_rm_tu(vbfloat16m2_t vd, vbfloat16m2_t vs2,
                                         vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_rm_tu(vbfloat16m2_t vd, vbfloat16m2_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_rm_tu(vbfloat16m4_t vd, vbfloat16m4_t vs2,
                                         vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_rm_tu(vbfloat16m4_t vd, vbfloat16m4_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_rm_tu(vbfloat16m8_t vd, vbfloat16m8_t vs2,
                                         vbfloat16m8_t vs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_rm_tu(vbfloat16m8_t vd, vbfloat16m8_t vs2,
                                         __bf16 rs1, size_t vl) {
  return __riscv_vfadd_tu(vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfadd_vv_bf16mf4_rm_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                            vbfloat16mf4_t vs2,
                                            vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_rm_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                            vbfloat16mf4_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_rm_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                            vbfloat16mf2_t vs2,
                                            vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_rm_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                            vbfloat16mf2_t vs2, __bf16 rs1,
                                            size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_rm_tum(vbool16_t vm, vbfloat16m1_t vd,
                                          vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_rm_tum(vbool16_t vm, vbfloat16m1_t vd,
                                          vbfloat16m1_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_rm_tum(vbool8_t vm, vbfloat16m2_t vd,
                                          vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_rm_tum(vbool8_t vm, vbfloat16m2_t vd,
                                          vbfloat16m2_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_rm_tum(vbool4_t vm, vbfloat16m4_t vd,
                                          vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_rm_tum(vbool4_t vm, vbfloat16m4_t vd,
                                          vbfloat16m4_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_rm_tum(vbool2_t vm, vbfloat16m8_t vd,
                                          vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_rm_tum(vbool2_t vm, vbfloat16m8_t vd,
                                          vbfloat16m8_t vs2, __bf16 rs1,
                                          size_t vl) {
  return __riscv_vfadd_tum(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfadd_vv_bf16mf4_rm_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                             vbfloat16mf4_t vs2,
                                             vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_rm_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                             vbfloat16mf4_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_rm_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                             vbfloat16mf2_t vs2,
                                             vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_rm_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                             vbfloat16mf2_t vs2, __bf16 rs1,
                                             size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_rm_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                           vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_rm_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                           vbfloat16m1_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_rm_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                           vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_rm_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                           vbfloat16m2_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_rm_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                           vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_rm_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                           vbfloat16m4_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_rm_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                           vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_rm_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                           vbfloat16m8_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_tumu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfadd_vv_bf16mf4_rm_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                           vbfloat16mf4_t vs2,
                                           vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfadd_vf_bf16mf4_rm_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                           vbfloat16mf4_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vv_bf16mf2_rm_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                           vbfloat16mf2_t vs2,
                                           vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfadd_vf_bf16mf2_rm_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                           vbfloat16mf2_t vs2, __bf16 rs1,
                                           size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vv_bf16m1_rm_mu(vbool16_t vm, vbfloat16m1_t vd,
                                         vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfadd_vf_bf16m1_rm_mu(vbool16_t vm, vbfloat16m1_t vd,
                                         vbfloat16m1_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vv_bf16m2_rm_mu(vbool8_t vm, vbfloat16m2_t vd,
                                         vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfadd_vf_bf16m2_rm_mu(vbool8_t vm, vbfloat16m2_t vd,
                                         vbfloat16m2_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vv_bf16m4_rm_mu(vbool4_t vm, vbfloat16m4_t vd,
                                         vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfadd_vf_bf16m4_rm_mu(vbool4_t vm, vbfloat16m4_t vd,
                                         vbfloat16m4_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vv_bf16m8_rm_mu(vbool2_t vm, vbfloat16m8_t vd,
                                         vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfadd_vf_bf16m8_rm_mu(vbool2_t vm, vbfloat16m8_t vd,
                                         vbfloat16m8_t vs2, __bf16 rs1,
                                         size_t vl) {
  return __riscv_vfadd_mu(vm, vd, vs2, rs1, __RISCV_FRM_RNE, vl);
}
