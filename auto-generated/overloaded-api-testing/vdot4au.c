#include <riscv_vector.h>
#include <stdint.h>

vuint32mf2_t test_vdot4au_vv_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2,
                                    vuint32mf2_t vs1, size_t vl) {
  return __riscv_vdot4au(vd, vs2, vs1, vl);
}

vuint32mf2_t test_vdot4au_vx_u32mf2(vuint32mf2_t vd, vuint32mf2_t vs2,
                                    uint32_t rs1, size_t vl) {
  return __riscv_vdot4au(vd, vs2, rs1, vl);
}

vuint32m1_t test_vdot4au_vv_u32m1(vuint32m1_t vd, vuint32m1_t vs2,
                                  vuint32m1_t vs1, size_t vl) {
  return __riscv_vdot4au(vd, vs2, vs1, vl);
}

vuint32m1_t test_vdot4au_vx_u32m1(vuint32m1_t vd, vuint32m1_t vs2, uint32_t rs1,
                                  size_t vl) {
  return __riscv_vdot4au(vd, vs2, rs1, vl);
}

vuint32m2_t test_vdot4au_vv_u32m2(vuint32m2_t vd, vuint32m2_t vs2,
                                  vuint32m2_t vs1, size_t vl) {
  return __riscv_vdot4au(vd, vs2, vs1, vl);
}

vuint32m2_t test_vdot4au_vx_u32m2(vuint32m2_t vd, vuint32m2_t vs2, uint32_t rs1,
                                  size_t vl) {
  return __riscv_vdot4au(vd, vs2, rs1, vl);
}

vuint32m4_t test_vdot4au_vv_u32m4(vuint32m4_t vd, vuint32m4_t vs2,
                                  vuint32m4_t vs1, size_t vl) {
  return __riscv_vdot4au(vd, vs2, vs1, vl);
}

vuint32m4_t test_vdot4au_vx_u32m4(vuint32m4_t vd, vuint32m4_t vs2, uint32_t rs1,
                                  size_t vl) {
  return __riscv_vdot4au(vd, vs2, rs1, vl);
}

vuint32m8_t test_vdot4au_vv_u32m8(vuint32m8_t vd, vuint32m8_t vs2,
                                  vuint32m8_t vs1, size_t vl) {
  return __riscv_vdot4au(vd, vs2, vs1, vl);
}

vuint32m8_t test_vdot4au_vx_u32m8(vuint32m8_t vd, vuint32m8_t vs2, uint32_t rs1,
                                  size_t vl) {
  return __riscv_vdot4au(vd, vs2, rs1, vl);
}

vuint32mf2_t test_vdot4au_vv_u32mf2_m(vbool64_t vm, vuint32mf2_t vd,
                                      vuint32mf2_t vs2, vuint32mf2_t vs1,
                                      size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, vs1, vl);
}

vuint32mf2_t test_vdot4au_vx_u32mf2_m(vbool64_t vm, vuint32mf2_t vd,
                                      vuint32mf2_t vs2, uint32_t rs1,
                                      size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, rs1, vl);
}

vuint32m1_t test_vdot4au_vv_u32m1_m(vbool32_t vm, vuint32m1_t vd,
                                    vuint32m1_t vs2, vuint32m1_t vs1,
                                    size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vdot4au_vx_u32m1_m(vbool32_t vm, vuint32m1_t vd,
                                    vuint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, rs1, vl);
}

vuint32m2_t test_vdot4au_vv_u32m2_m(vbool16_t vm, vuint32m2_t vd,
                                    vuint32m2_t vs2, vuint32m2_t vs1,
                                    size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, vs1, vl);
}

vuint32m2_t test_vdot4au_vx_u32m2_m(vbool16_t vm, vuint32m2_t vd,
                                    vuint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, rs1, vl);
}

vuint32m4_t test_vdot4au_vv_u32m4_m(vbool8_t vm, vuint32m4_t vd,
                                    vuint32m4_t vs2, vuint32m4_t vs1,
                                    size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, vs1, vl);
}

vuint32m4_t test_vdot4au_vx_u32m4_m(vbool8_t vm, vuint32m4_t vd,
                                    vuint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, rs1, vl);
}

vuint32m8_t test_vdot4au_vv_u32m8_m(vbool4_t vm, vuint32m8_t vd,
                                    vuint32m8_t vs2, vuint32m8_t vs1,
                                    size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, vs1, vl);
}

vuint32m8_t test_vdot4au_vx_u32m8_m(vbool4_t vm, vuint32m8_t vd,
                                    vuint32m8_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vdot4au(vm, vd, vs2, rs1, vl);
}
