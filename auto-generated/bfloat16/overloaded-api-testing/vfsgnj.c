#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfsgnj_vv_bf16mf4(vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vfsgnj(vs2, vs1, vl);
}

vbfloat16mf4_t test_vfsgnj_vf_bf16mf4(vbfloat16mf4_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfsgnj(vs2, rs1, vl);
}

vbfloat16mf2_t test_vfsgnj_vv_bf16mf2(vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vfsgnj(vs2, vs1, vl);
}

vbfloat16mf2_t test_vfsgnj_vf_bf16mf2(vbfloat16mf2_t vs2, __bf16 rs1,
                                      size_t vl) {
  return __riscv_vfsgnj(vs2, rs1, vl);
}

vbfloat16m1_t test_vfsgnj_vv_bf16m1(vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                    size_t vl) {
  return __riscv_vfsgnj(vs2, vs1, vl);
}

vbfloat16m1_t test_vfsgnj_vf_bf16m1(vbfloat16m1_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vs2, rs1, vl);
}

vbfloat16m2_t test_vfsgnj_vv_bf16m2(vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                    size_t vl) {
  return __riscv_vfsgnj(vs2, vs1, vl);
}

vbfloat16m2_t test_vfsgnj_vf_bf16m2(vbfloat16m2_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vs2, rs1, vl);
}

vbfloat16m4_t test_vfsgnj_vv_bf16m4(vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                    size_t vl) {
  return __riscv_vfsgnj(vs2, vs1, vl);
}

vbfloat16m4_t test_vfsgnj_vf_bf16m4(vbfloat16m4_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vs2, rs1, vl);
}

vbfloat16m8_t test_vfsgnj_vv_bf16m8(vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                    size_t vl) {
  return __riscv_vfsgnj(vs2, vs1, vl);
}

vbfloat16m8_t test_vfsgnj_vf_bf16m8(vbfloat16m8_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vs2, rs1, vl);
}

vbfloat16mf4_t test_vfsgnj_vv_bf16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                        vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, vs1, vl);
}

vbfloat16mf4_t test_vfsgnj_vf_bf16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, rs1, vl);
}

vbfloat16mf2_t test_vfsgnj_vv_bf16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                        vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, vs1, vl);
}

vbfloat16mf2_t test_vfsgnj_vf_bf16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                        __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, rs1, vl);
}

vbfloat16m1_t test_vfsgnj_vv_bf16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                      vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, vs1, vl);
}

vbfloat16m1_t test_vfsgnj_vf_bf16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, rs1, vl);
}

vbfloat16m2_t test_vfsgnj_vv_bf16m2_m(vbool8_t vm, vbfloat16m2_t vs2,
                                      vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, vs1, vl);
}

vbfloat16m2_t test_vfsgnj_vf_bf16m2_m(vbool8_t vm, vbfloat16m2_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, rs1, vl);
}

vbfloat16m4_t test_vfsgnj_vv_bf16m4_m(vbool4_t vm, vbfloat16m4_t vs2,
                                      vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, vs1, vl);
}

vbfloat16m4_t test_vfsgnj_vf_bf16m4_m(vbool4_t vm, vbfloat16m4_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, rs1, vl);
}

vbfloat16m8_t test_vfsgnj_vv_bf16m8_m(vbool2_t vm, vbfloat16m8_t vs2,
                                      vbfloat16m8_t vs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, vs1, vl);
}

vbfloat16m8_t test_vfsgnj_vf_bf16m8_m(vbool2_t vm, vbfloat16m8_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vfsgnj(vm, vs2, rs1, vl);
}
