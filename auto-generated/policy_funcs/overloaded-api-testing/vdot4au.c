#include <riscv_vector.h>
#include <stdint.h>

vuint32mf2_t test_vdot4au_vv_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                       vuint32mf2_t vs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, vs1, vl);
}

vuint32mf2_t test_vdot4au_vx_u32mf2_tu(vuint32mf2_t vd, vuint32mf2_t vs2,
                                       uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, rs1, vl);
}

vuint32m1_t test_vdot4au_vv_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                     vuint32m1_t vs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vdot4au_vx_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2,
                                     uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, rs1, vl);
}

vuint32m2_t test_vdot4au_vv_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                     vuint32m2_t vs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, vs1, vl);
}

vuint32m2_t test_vdot4au_vx_u32m2_tu(vuint32m2_t vd, vuint32m2_t vs2,
                                     uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, rs1, vl);
}

vuint32m4_t test_vdot4au_vv_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                     vuint32m4_t vs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, vs1, vl);
}

vuint32m4_t test_vdot4au_vx_u32m4_tu(vuint32m4_t vd, vuint32m4_t vs2,
                                     uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, rs1, vl);
}

vuint32m8_t test_vdot4au_vv_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs2,
                                     vuint32m8_t vs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, vs1, vl);
}

vuint32m8_t test_vdot4au_vx_u32m8_tu(vuint32m8_t vd, vuint32m8_t vs2,
                                     uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_tu(vd, vs2, rs1, vl);
}

vuint32mf2_t test_vdot4au_vv_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                        vuint32mf2_t vs2, vuint32mf2_t vs1,
                                        size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, vs1, vl);
}

vuint32mf2_t test_vdot4au_vx_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                        vuint32mf2_t vs2, uint32_t rs1,
                                        size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, rs1, vl);
}

vuint32m1_t test_vdot4au_vv_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                      vuint32m1_t vs2, vuint32m1_t vs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vdot4au_vx_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                      vuint32m1_t vs2, uint32_t rs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, rs1, vl);
}

vuint32m2_t test_vdot4au_vv_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                      vuint32m2_t vs2, vuint32m2_t vs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, vs1, vl);
}

vuint32m2_t test_vdot4au_vx_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                      vuint32m2_t vs2, uint32_t rs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, rs1, vl);
}

vuint32m4_t test_vdot4au_vv_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                      vuint32m4_t vs2, vuint32m4_t vs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, vs1, vl);
}

vuint32m4_t test_vdot4au_vx_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                      vuint32m4_t vs2, uint32_t rs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, rs1, vl);
}

vuint32m8_t test_vdot4au_vv_u32m8_tum(vbool4_t vm, vuint32m8_t vd,
                                      vuint32m8_t vs2, vuint32m8_t vs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, vs1, vl);
}

vuint32m8_t test_vdot4au_vx_u32m8_tum(vbool4_t vm, vuint32m8_t vd,
                                      vuint32m8_t vs2, uint32_t rs1,
                                      size_t vl) {
  return __riscv_vdot4au_tum(vm, vd, vs2, rs1, vl);
}

vuint32mf2_t test_vdot4au_vv_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                         vuint32mf2_t vs2, vuint32mf2_t vs1,
                                         size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, vs1, vl);
}

vuint32mf2_t test_vdot4au_vx_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                         vuint32mf2_t vs2, uint32_t rs1,
                                         size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m1_t test_vdot4au_vv_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                       vuint32m1_t vs2, vuint32m1_t vs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vdot4au_vx_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                       vuint32m1_t vs2, uint32_t rs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m2_t test_vdot4au_vv_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                       vuint32m2_t vs2, vuint32m2_t vs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m2_t test_vdot4au_vx_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                       vuint32m2_t vs2, uint32_t rs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m4_t test_vdot4au_vv_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                       vuint32m4_t vs2, vuint32m4_t vs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m4_t test_vdot4au_vx_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                       vuint32m4_t vs2, uint32_t rs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, rs1, vl);
}

vuint32m8_t test_vdot4au_vv_u32m8_tumu(vbool4_t vm, vuint32m8_t vd,
                                       vuint32m8_t vs2, vuint32m8_t vs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, vs1, vl);
}

vuint32m8_t test_vdot4au_vx_u32m8_tumu(vbool4_t vm, vuint32m8_t vd,
                                       vuint32m8_t vs2, uint32_t rs1,
                                       size_t vl) {
  return __riscv_vdot4au_tumu(vm, vd, vs2, rs1, vl);
}

vuint32mf2_t test_vdot4au_vv_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                       vuint32mf2_t vs2, vuint32mf2_t vs1,
                                       size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, vs1, vl);
}

vuint32mf2_t test_vdot4au_vx_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                       vuint32mf2_t vs2, uint32_t rs1,
                                       size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, rs1, vl);
}

vuint32m1_t test_vdot4au_vv_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                     vuint32m1_t vs2, vuint32m1_t vs1,
                                     size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vdot4au_vx_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                     vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, rs1, vl);
}

vuint32m2_t test_vdot4au_vv_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                     vuint32m2_t vs2, vuint32m2_t vs1,
                                     size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, vs1, vl);
}

vuint32m2_t test_vdot4au_vx_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                     vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, rs1, vl);
}

vuint32m4_t test_vdot4au_vv_u32m4_mu(vbool8_t vm, vuint32m4_t vd,
                                     vuint32m4_t vs2, vuint32m4_t vs1,
                                     size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, vs1, vl);
}

vuint32m4_t test_vdot4au_vx_u32m4_mu(vbool8_t vm, vuint32m4_t vd,
                                     vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, rs1, vl);
}

vuint32m8_t test_vdot4au_vv_u32m8_mu(vbool4_t vm, vuint32m8_t vd,
                                     vuint32m8_t vs2, vuint32m8_t vs1,
                                     size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, vs1, vl);
}

vuint32m8_t test_vdot4au_vx_u32m8_mu(vbool4_t vm, vuint32m8_t vd,
                                     vuint32m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au_mu(vm, vd, vs2, rs1, vl);
}
