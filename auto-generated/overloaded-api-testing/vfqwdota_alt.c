#include <riscv_vector.h>
#include <stdint.h>

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1(vfloat32m1_t vd,
                                                  vuint8mf8_t vs2,
                                                  vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1(vfloat32m1_t vd,
                                                  vuint8mf4_t vs2,
                                                  vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1(vfloat32m1_t vd,
                                                  vuint8mf2_t vs2,
                                                  vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1(vfloat32m1_t vd,
                                                 vuint8m1_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1(vfloat32m1_t vd,
                                                 vuint8m2_t vs2, vuint8m2_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1(vfloat32m1_t vd,
                                                 vuint8m4_t vs2, vuint8m4_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1(vfloat32m1_t vd,
                                                 vuint8m8_t vs2, vuint8m8_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1(vfloat32m1_t vd,
                                                  vuint8mf8_t vs2,
                                                  vuint8mf8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1(vfloat32m1_t vd,
                                                  vuint8mf4_t vs2,
                                                  vuint8mf4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1(vfloat32m1_t vd,
                                                  vuint8mf2_t vs2,
                                                  vuint8mf2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1(vfloat32m1_t vd,
                                                 vuint8m1_t vs2, vuint8m1_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1(vfloat32m1_t vd,
                                                 vuint8m2_t vs2, vuint8m2_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1(vfloat32m1_t vd,
                                                 vuint8m4_t vs2, vuint8m4_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1(vfloat32m1_t vd,
                                                 vuint8m8_t vs2, vuint8m8_t vs1,
                                                 size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_m(vbool64_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8mf8_t vs2,
                                                    vuint8mf8_t vs1,
                                                    size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_m(vbool32_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8mf4_t vs2,
                                                    vuint8mf4_t vs1,
                                                    size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_m(vbool16_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8mf2_t vs2,
                                                    vuint8mf2_t vs1,
                                                    size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_m(vbool8_t vm, vfloat32m1_t vd,
                                                   vuint8m1_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_m(vbool4_t vm, vfloat32m1_t vd,
                                                   vuint8m2_t vs2,
                                                   vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_m(vbool2_t vm, vfloat32m1_t vd,
                                                   vuint8m4_t vs2,
                                                   vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_m(vbool1_t vm, vfloat32m1_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_m(vbool64_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8mf8_t vs2,
                                                    vuint8mf8_t vs1,
                                                    size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_m(vbool32_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8mf4_t vs2,
                                                    vuint8mf4_t vs1,
                                                    size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_m(vbool16_t vm,
                                                    vfloat32m1_t vd,
                                                    vuint8mf2_t vs2,
                                                    vuint8mf2_t vs1,
                                                    size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_m(vbool8_t vm, vfloat32m1_t vd,
                                                   vuint8m1_t vs2,
                                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_m(vbool4_t vm, vfloat32m1_t vd,
                                                   vuint8m2_t vs2,
                                                   vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_m(vbool2_t vm, vfloat32m1_t vd,
                                                   vuint8m4_t vs2,
                                                   vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_m(vbool1_t vm, vfloat32m1_t vd,
                                                   vuint8m8_t vs2,
                                                   vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8mf8_t vs2,
                                                     vuint8mf8_t vs1,
                                                     size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8mf4_t vs2,
                                                     vuint8mf4_t vs1,
                                                     size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8mf2_t vs2,
                                                     vuint8mf2_t vs1,
                                                     size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m1_t vs2,
                                                    vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m2_t vs2,
                                                    vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m4_t vs2,
                                                    vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8mf8_t vs2,
                                                     vuint8mf8_t vs1,
                                                     size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8mf4_t vs2,
                                                     vuint8mf4_t vs1,
                                                     size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_rm(vfloat32m1_t vd,
                                                     vuint8mf2_t vs2,
                                                     vuint8mf2_t vs1,
                                                     size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m1_t vs2,
                                                    vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m2_t vs2,
                                                    vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m4_t vs2,
                                                    vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_rm(vfloat32m1_t vd,
                                                    vuint8m8_t vs2,
                                                    vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf8_f32m1_rm_m(vbool64_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8mf8_t vs2,
                                                       vuint8mf8_t vs1,
                                                       size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf4_f32m1_rm_m(vbool32_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8mf4_t vs2,
                                                       vuint8mf4_t vs1,
                                                       size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3mf2_f32m1_rm_m(vbool16_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8mf2_t vs2,
                                                       vuint8mf2_t vs1,
                                                       size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m1_f32m1_rm_m(
    vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m2_f32m1_rm_m(
    vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m4_f32m1_rm_m(
    vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e4m3m8_f32m1_rm_m(
    vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e4m3_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf8_f32m1_rm_m(vbool64_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8mf8_t vs2,
                                                       vuint8mf8_t vs1,
                                                       size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf4_f32m1_rm_m(vbool32_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8mf4_t vs2,
                                                       vuint8mf4_t vs1,
                                                       size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2mf2_f32m1_rm_m(vbool16_t vm,
                                                       vfloat32m1_t vd,
                                                       vuint8mf2_t vs2,
                                                       vuint8mf2_t vs1,
                                                       size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m1_f32m1_rm_m(
    vbool8_t vm, vfloat32m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m2_f32m1_rm_m(
    vbool4_t vm, vfloat32m1_t vd, vuint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m4_f32m1_rm_m(
    vbool2_t vm, vfloat32m1_t vd, vuint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfqwdota_alt_vv_f8e5m2m8_f32m1_rm_m(
    vbool1_t vm, vfloat32m1_t vd, vuint8m8_t vs2, vuint8m8_t vs1, size_t vl) {
  return __riscv_vfqwdota_alt_f8e5m2_f32(vm, vd, vs2, vs1, __RISCV_FRM_RNE, vl);
}
