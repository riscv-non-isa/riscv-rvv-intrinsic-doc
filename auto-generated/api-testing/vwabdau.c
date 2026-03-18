#include <riscv_vector.h>
#include <stdint.h>

vuint16mf4_t test_vwabdau_vv_u16mf4(vuint16mf4_t vd, vuint8mf8_t vs1,
                                    vuint8mf8_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf4(vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabdau_vv_u16mf2(vuint16mf2_t vd, vuint8mf4_t vs1,
                                    vuint8mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16mf2(vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabdau_vv_u16m1(vuint16m1_t vd, vuint8mf2_t vs1,
                                  vuint8mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m1(vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabdau_vv_u16m2(vuint16m2_t vd, vuint8m1_t vs1,
                                  vuint8m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m2(vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabdau_vv_u16m4(vuint16m4_t vd, vuint8m2_t vs1,
                                  vuint8m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m4(vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabdau_vv_u16m8(vuint16m8_t vd, vuint8m4_t vs1,
                                  vuint8m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m8(vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabdau_vv_u32mf2(vuint32mf2_t vd, vuint16mf4_t vs1,
                                    vuint16mf4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32mf2(vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabdau_vv_u32m1(vuint32m1_t vd, vuint16mf2_t vs1,
                                  vuint16mf2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m1(vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabdau_vv_u32m2(vuint32m2_t vd, vuint16m1_t vs1,
                                  vuint16m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m2(vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabdau_vv_u32m4(vuint32m4_t vd, vuint16m2_t vs1,
                                  vuint16m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m4(vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabdau_vv_u32m8(vuint32m8_t vd, vuint16m4_t vs1,
                                  vuint16m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u32m8(vd, vs1, vs2, vl);
}

vuint16mf4_t test_vwabdau_vv_u16mf4_m(vbool64_t vm, vuint16mf4_t vd,
                                      vuint8mf8_t vs1, vuint8mf8_t vs2,
                                      size_t vl) {
  return __riscv_vwabdau_vv_u16mf4_m(vm, vd, vs1, vs2, vl);
}

vuint16mf2_t test_vwabdau_vv_u16mf2_m(vbool32_t vm, vuint16mf2_t vd,
                                      vuint8mf4_t vs1, vuint8mf4_t vs2,
                                      size_t vl) {
  return __riscv_vwabdau_vv_u16mf2_m(vm, vd, vs1, vs2, vl);
}

vuint16m1_t test_vwabdau_vv_u16m1_m(vbool16_t vm, vuint16m1_t vd,
                                    vuint8mf2_t vs1, vuint8mf2_t vs2,
                                    size_t vl) {
  return __riscv_vwabdau_vv_u16m1_m(vm, vd, vs1, vs2, vl);
}

vuint16m2_t test_vwabdau_vv_u16m2_m(vbool8_t vm, vuint16m2_t vd, vuint8m1_t vs1,
                                    vuint8m1_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m2_m(vm, vd, vs1, vs2, vl);
}

vuint16m4_t test_vwabdau_vv_u16m4_m(vbool4_t vm, vuint16m4_t vd, vuint8m2_t vs1,
                                    vuint8m2_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m4_m(vm, vd, vs1, vs2, vl);
}

vuint16m8_t test_vwabdau_vv_u16m8_m(vbool2_t vm, vuint16m8_t vd, vuint8m4_t vs1,
                                    vuint8m4_t vs2, size_t vl) {
  return __riscv_vwabdau_vv_u16m8_m(vm, vd, vs1, vs2, vl);
}

vuint32mf2_t test_vwabdau_vv_u32mf2_m(vbool64_t vm, vuint32mf2_t vd,
                                      vuint16mf4_t vs1, vuint16mf4_t vs2,
                                      size_t vl) {
  return __riscv_vwabdau_vv_u32mf2_m(vm, vd, vs1, vs2, vl);
}

vuint32m1_t test_vwabdau_vv_u32m1_m(vbool32_t vm, vuint32m1_t vd,
                                    vuint16mf2_t vs1, vuint16mf2_t vs2,
                                    size_t vl) {
  return __riscv_vwabdau_vv_u32m1_m(vm, vd, vs1, vs2, vl);
}

vuint32m2_t test_vwabdau_vv_u32m2_m(vbool16_t vm, vuint32m2_t vd,
                                    vuint16m1_t vs1, vuint16m1_t vs2,
                                    size_t vl) {
  return __riscv_vwabdau_vv_u32m2_m(vm, vd, vs1, vs2, vl);
}

vuint32m4_t test_vwabdau_vv_u32m4_m(vbool8_t vm, vuint32m4_t vd,
                                    vuint16m2_t vs1, vuint16m2_t vs2,
                                    size_t vl) {
  return __riscv_vwabdau_vv_u32m4_m(vm, vd, vs1, vs2, vl);
}

vuint32m8_t test_vwabdau_vv_u32m8_m(vbool4_t vm, vuint32m8_t vd,
                                    vuint16m4_t vs1, vuint16m4_t vs2,
                                    size_t vl) {
  return __riscv_vwabdau_vv_u32m8_m(vm, vd, vs1, vs2, vl);
}
