// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64x \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint64m1_t test_vzext_vf8_u64m1_tu(vuint64m1_t vd, vuint8mf8_t vs2,
                                    size_t vl) {
  return __riscv_vzext_vf8_u64m1_tu(vd, vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tu(vuint64m2_t vd, vuint8mf4_t vs2,
                                    size_t vl) {
  return __riscv_vzext_vf8_u64m2_tu(vd, vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tu(vuint64m4_t vd, vuint8mf2_t vs2,
                                    size_t vl) {
  return __riscv_vzext_vf8_u64m4_tu(vd, vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tu(vuint64m8_t vd, vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m8_tu(vd, vs2, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                     vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m1_tum(vm, vd, vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tum(vbool32_t vm, vuint64m2_t vd,
                                     vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m2_tum(vm, vd, vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tum(vbool16_t vm, vuint64m4_t vd,
                                     vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m4_tum(vm, vd, vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tum(vbool8_t vm, vuint64m8_t vd,
                                     vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m8_tum(vm, vd, vs2, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tumu(vbool64_t vm, vuint64m1_t vd,
                                      vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m1_tumu(vm, vd, vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tumu(vbool32_t vm, vuint64m2_t vd,
                                      vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m2_tumu(vm, vd, vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tumu(vbool16_t vm, vuint64m4_t vd,
                                      vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m4_tumu(vm, vd, vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tumu(vbool8_t vm, vuint64m8_t vd,
                                      vuint8m1_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m8_tumu(vm, vd, vs2, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_mu(vbool64_t vm, vuint64m1_t vd,
                                    vuint8mf8_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m1_mu(vm, vd, vs2, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_mu(vbool32_t vm, vuint64m2_t vd,
                                    vuint8mf4_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m2_mu(vm, vd, vs2, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_mu(vbool16_t vm, vuint64m4_t vd,
                                    vuint8mf2_t vs2, size_t vl) {
  return __riscv_vzext_vf8_u64m4_mu(vm, vd, vs2, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_mu(vbool8_t vm, vuint64m8_t vd, vuint8m1_t vs2,
                                    size_t vl) {
  return __riscv_vzext_vf8_u64m8_mu(vm, vd, vs2, vl);
}
