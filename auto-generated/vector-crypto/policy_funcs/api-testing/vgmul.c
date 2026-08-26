#include <riscv_vector.h>
#include <stdint.h>

vuint32mf2_t test_vgmul_vv_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                     size_t vl) {
  return __riscv_vgmul_vv_u32mf2_tu(vd, vs2, vl);
}

vuint32m1_t test_vgmul_vv_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2, size_t vl) {
  return __riscv_vgmul_vv_u32m1_tu(vd, vs2, vl);
}

vuint32m2_t test_vgmul_vv_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2, size_t vl) {
  return __riscv_vgmul_vv_u32m2_tu(vd, vs2, vl);
}

vuint32m4_t test_vgmul_vv_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2, size_t vl) {
  return __riscv_vgmul_vv_u32m4_tu(vd, vs2, vl);
}

vuint32m8_t test_vgmul_vv_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs2, size_t vl) {
  return __riscv_vgmul_vv_u32m8_tu(vd, vs2, vl);
}

vuint32mf2_t test_vgmul_vs_u32mf2_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                            size_t vl) {
  return __riscv_vgmul_vs_u32mf2_u32mf2_tu(vd, vs2, vl);
}

vuint32m1_t test_vgmul_vs_u32mf2_u32m1_tu(vuint32m1_t vd, vuint32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vgmul_vs_u32mf2_u32m1_tu(vd, vs2, vl);
}

vuint32m2_t test_vgmul_vs_u32mf2_u32m2_tu(vuint32m2_t vd, vuint32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vgmul_vs_u32mf2_u32m2_tu(vd, vs2, vl);
}

vuint32m4_t test_vgmul_vs_u32mf2_u32m4_tu(vuint32m4_t vd, vuint32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vgmul_vs_u32mf2_u32m4_tu(vd, vs2, vl);
}

vuint32m8_t test_vgmul_vs_u32mf2_u32m8_tu(vuint32m8_t vd, vuint32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vgmul_vs_u32mf2_u32m8_tu(vd, vs2, vl);
}

vuint32m1_t test_vgmul_vs_u32m1_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m1_u32m1_tu(vd, vs2, vl);
}

vuint32m2_t test_vgmul_vs_u32m1_u32m2_tu(vuint32m2_t vd, vuint32m1_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m1_u32m2_tu(vd, vs2, vl);
}

vuint32m4_t test_vgmul_vs_u32m1_u32m4_tu(vuint32m4_t vd, vuint32m1_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m1_u32m4_tu(vd, vs2, vl);
}

vuint32m8_t test_vgmul_vs_u32m1_u32m8_tu(vuint32m8_t vd, vuint32m1_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m1_u32m8_tu(vd, vs2, vl);
}

vuint32m2_t test_vgmul_vs_u32m2_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m2_u32m2_tu(vd, vs2, vl);
}

vuint32m4_t test_vgmul_vs_u32m2_u32m4_tu(vuint32m4_t vd, vuint32m2_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m2_u32m4_tu(vd, vs2, vl);
}

vuint32m8_t test_vgmul_vs_u32m2_u32m8_tu(vuint32m8_t vd, vuint32m2_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m2_u32m8_tu(vd, vs2, vl);
}

vuint32m4_t test_vgmul_vs_u32m4_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m4_u32m4_tu(vd, vs2, vl);
}

vuint32m8_t test_vgmul_vs_u32m4_u32m8_tu(vuint32m8_t vd, vuint32m4_t vs2,
                                         size_t vl) {
  return __riscv_vgmul_vs_u32m4_u32m8_tu(vd, vs2, vl);
}
