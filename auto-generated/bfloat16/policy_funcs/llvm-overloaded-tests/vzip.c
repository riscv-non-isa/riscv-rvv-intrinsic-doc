// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvzip \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf2_t test_vzip_vv_bf16mf2_tu(vbfloat16mf2_t vd, vbfloat16mf4_t vs2,
                                       vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vzip_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vzip_vv_bf16m1_tu(vbfloat16m1_t vd, vbfloat16mf2_t vs2,
                                     vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vzip_tu(vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vzip_vv_bf16m2_tu(vbfloat16m2_t vd, vbfloat16m1_t vs2,
                                     vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vzip_tu(vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vzip_vv_bf16m4_tu(vbfloat16m4_t vd, vbfloat16m2_t vs2,
                                     vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vzip_tu(vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vzip_vv_bf16m8_tu(vbfloat16m8_t vd, vbfloat16m4_t vs2,
                                     vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vzip_tu(vd, vs2, vs1, vl);
}

vbfloat16mf2_t test_vzip_vv_bf16mf2_tum(vbool64_t vm, vbfloat16mf2_t vd,
                                        vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                        size_t vl) {
  return __riscv_vzip_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vzip_vv_bf16m1_tum(vbool32_t vm, vbfloat16m1_t vd,
                                      vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vzip_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vzip_vv_bf16m2_tum(vbool16_t vm, vbfloat16m2_t vd,
                                      vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                      size_t vl) {
  return __riscv_vzip_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vzip_vv_bf16m4_tum(vbool8_t vm, vbfloat16m4_t vd,
                                      vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                      size_t vl) {
  return __riscv_vzip_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vzip_vv_bf16m8_tum(vbool4_t vm, vbfloat16m8_t vd,
                                      vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                      size_t vl) {
  return __riscv_vzip_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16mf2_t test_vzip_vv_bf16mf2_tumu(vbool64_t vm, vbfloat16mf2_t vd,
                                         vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                         size_t vl) {
  return __riscv_vzip_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vzip_vv_bf16m1_tumu(vbool32_t vm, vbfloat16m1_t vd,
                                       vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vzip_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vzip_vv_bf16m2_tumu(vbool16_t vm, vbfloat16m2_t vd,
                                       vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                       size_t vl) {
  return __riscv_vzip_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vzip_vv_bf16m4_tumu(vbool8_t vm, vbfloat16m4_t vd,
                                       vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                       size_t vl) {
  return __riscv_vzip_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vzip_vv_bf16m8_tumu(vbool4_t vm, vbfloat16m8_t vd,
                                       vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                       size_t vl) {
  return __riscv_vzip_tumu(vm, vd, vs2, vs1, vl);
}

vbfloat16mf2_t test_vzip_vv_bf16mf2_mu(vbool64_t vm, vbfloat16mf2_t vd,
                                       vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vzip_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vzip_vv_bf16m1_mu(vbool32_t vm, vbfloat16m1_t vd,
                                     vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vzip_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m2_t test_vzip_vv_bf16m2_mu(vbool16_t vm, vbfloat16m2_t vd,
                                     vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                     size_t vl) {
  return __riscv_vzip_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m4_t test_vzip_vv_bf16m4_mu(vbool8_t vm, vbfloat16m4_t vd,
                                     vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                     size_t vl) {
  return __riscv_vzip_mu(vm, vd, vs2, vs1, vl);
}

vbfloat16m8_t test_vzip_vv_bf16m8_mu(vbool4_t vm, vbfloat16m8_t vd,
                                     vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                     size_t vl) {
  return __riscv_vzip_mu(vm, vd, vs2, vs1, vl);
}
