// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_vfsub_vv_bf16mf4(vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                     size_t vl) {
  return __riscv_vfsub(vs2, vs1, vl);
}

vbfloat16mf4_t test_vfsub_vf_bf16mf4(vbfloat16mf4_t vs2, __bf16 rs1,
                                     size_t vl) {
  return __riscv_vfsub(vs2, rs1, vl);
}

vbfloat16mf2_t test_vfsub_vv_bf16mf2(vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vfsub(vs2, vs1, vl);
}

vbfloat16mf2_t test_vfsub_vf_bf16mf2(vbfloat16mf2_t vs2, __bf16 rs1,
                                     size_t vl) {
  return __riscv_vfsub(vs2, rs1, vl);
}

vbfloat16m1_t test_vfsub_vv_bf16m1(vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                   size_t vl) {
  return __riscv_vfsub(vs2, vs1, vl);
}

vbfloat16m1_t test_vfsub_vf_bf16m1(vbfloat16m1_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vs2, rs1, vl);
}

vbfloat16m2_t test_vfsub_vv_bf16m2(vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                   size_t vl) {
  return __riscv_vfsub(vs2, vs1, vl);
}

vbfloat16m2_t test_vfsub_vf_bf16m2(vbfloat16m2_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vs2, rs1, vl);
}

vbfloat16m4_t test_vfsub_vv_bf16m4(vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                   size_t vl) {
  return __riscv_vfsub(vs2, vs1, vl);
}

vbfloat16m4_t test_vfsub_vf_bf16m4(vbfloat16m4_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vs2, rs1, vl);
}

vbfloat16m8_t test_vfsub_vv_bf16m8(vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                   size_t vl) {
  return __riscv_vfsub(vs2, vs1, vl);
}

vbfloat16m8_t test_vfsub_vf_bf16m8(vbfloat16m8_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vs2, rs1, vl);
}

vbfloat16mf4_t test_vfsub_vv_bf16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                       vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, vl);
}

vbfloat16mf4_t test_vfsub_vf_bf16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                       __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfsub_vv_bf16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                       vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, vl);
}

vbfloat16mf2_t test_vfsub_vf_bf16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                       __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, vl);
}

vbfloat16m1_t test_vfsub_vv_bf16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                     vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, vl);
}

vbfloat16m1_t test_vfsub_vf_bf16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                     __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, vl);
}

vbfloat16m2_t test_vfsub_vv_bf16m2_m(vbool8_t vm, vbfloat16m2_t vs2,
                                     vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, vl);
}

vbfloat16m2_t test_vfsub_vf_bf16m2_m(vbool8_t vm, vbfloat16m2_t vs2, __bf16 rs1,
                                     size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, vl);
}

vbfloat16m4_t test_vfsub_vv_bf16m4_m(vbool4_t vm, vbfloat16m4_t vs2,
                                     vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, vl);
}

vbfloat16m4_t test_vfsub_vf_bf16m4_m(vbool4_t vm, vbfloat16m4_t vs2, __bf16 rs1,
                                     size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, vl);
}

vbfloat16m8_t test_vfsub_vv_bf16m8_m(vbool2_t vm, vbfloat16m8_t vs2,
                                     vbfloat16m8_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, vl);
}

vbfloat16m8_t test_vfsub_vf_bf16m8_m(vbool2_t vm, vbfloat16m8_t vs2, __bf16 rs1,
                                     size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, vl);
}

vbfloat16mf4_t test_vfsub_vv_bf16mf4_rm(vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vfsub(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfsub_vf_bf16mf4_rm(vbfloat16mf4_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfsub(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfsub_vv_bf16mf2_rm(vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                        size_t vl) {
  return __riscv_vfsub(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfsub_vf_bf16mf2_rm(vbfloat16mf2_t vs2, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfsub(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfsub_vv_bf16m1_rm(vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfsub_vf_bf16m1_rm(vbfloat16m1_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfsub_vv_bf16m2_rm(vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfsub_vf_bf16m2_rm(vbfloat16m2_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfsub_vv_bf16m4_rm(vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfsub_vf_bf16m4_rm(vbfloat16m4_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfsub_vv_bf16m8_rm(vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfsub_vf_bf16m8_rm(vbfloat16m8_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfsub(vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfsub_vv_bf16mf4_rm_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                          vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfsub_vf_bf16mf4_rm_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                          __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfsub_vv_bf16mf2_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                          vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfsub_vf_bf16mf2_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                          __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfsub_vv_bf16m1_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                        vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfsub_vf_bf16m1_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfsub_vv_bf16m2_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                        vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfsub_vf_bf16m2_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfsub_vv_bf16m4_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                        vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfsub_vf_bf16m4_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfsub_vv_bf16m8_rm_m(vbool2_t vm, vbfloat16m8_t vs2,
                                        vbfloat16m8_t vs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfsub_vf_bf16m8_rm_m(vbool2_t vm, vbfloat16m8_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfsub(vm, vs2, rs1, __RISCV_FRM_RNE, vl);
}
