// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64x \
// RUN:   -target-feature +zvkg \
// RUN:   -target-feature +zvl256b \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint32mf2_t test_vghsh_vv_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2,
                                  vuint32mf2_t vs1, size_t vl) {
  return __riscv_vghsh_vv(vd, vs2, vs1, vl);
}

vuint32m1_t test_vghsh_vv_u32m1(vuint32m1_t vd, vuint32m1_t vs2,
                                vuint32m1_t vs1, size_t vl) {
  return __riscv_vghsh_vv(vd, vs2, vs1, vl);
}

vuint32m2_t test_vghsh_vv_u32m2(vuint32m2_t vd, vuint32m2_t vs2,
                                vuint32m2_t vs1, size_t vl) {
  return __riscv_vghsh_vv(vd, vs2, vs1, vl);
}

vuint32m4_t test_vghsh_vv_u32m4(vuint32m4_t vd, vuint32m4_t vs2,
                                vuint32m4_t vs1, size_t vl) {
  return __riscv_vghsh_vv(vd, vs2, vs1, vl);
}

vuint32m8_t test_vghsh_vv_u32m8(vuint32m8_t vd, vuint32m8_t vs2,
                                vuint32m8_t vs1, size_t vl) {
  return __riscv_vghsh_vv(vd, vs2, vs1, vl);
}

vuint32mf2_t test_vghsh_vs_u32mf2_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m1_t test_vghsh_vs_u32mf2_u32m1(vuint32m1_t vd, vuint32mf2_t vs2,
                                       size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m2_t test_vghsh_vs_u32mf2_u32m2(vuint32m2_t vd, vuint32mf2_t vs2,
                                       size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m4_t test_vghsh_vs_u32mf2_u32m4(vuint32m4_t vd, vuint32mf2_t vs2,
                                       size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m8_t test_vghsh_vs_u32mf2_u32m8(vuint32m8_t vd, vuint32mf2_t vs2,
                                       size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m1_t test_vghsh_vs_u32m1_u32m1(vuint32m1_t vd, vuint32m1_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m2_t test_vghsh_vs_u32m1_u32m2(vuint32m2_t vd, vuint32m1_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m4_t test_vghsh_vs_u32m1_u32m4(vuint32m4_t vd, vuint32m1_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m8_t test_vghsh_vs_u32m1_u32m8(vuint32m8_t vd, vuint32m1_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m2_t test_vghsh_vs_u32m2_u32m2(vuint32m2_t vd, vuint32m2_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m4_t test_vghsh_vs_u32m2_u32m4(vuint32m4_t vd, vuint32m2_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m8_t test_vghsh_vs_u32m2_u32m8(vuint32m8_t vd, vuint32m2_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m4_t test_vghsh_vs_u32m4_u32m4(vuint32m4_t vd, vuint32m4_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}

vuint32m8_t test_vghsh_vs_u32m4_u32m8(vuint32m8_t vd, vuint32m4_t vs2,
                                      size_t vl) {
  return __riscv_vghsh_vs(vd, vs2, vl);
}
