#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfmv_v_f_bf16mf4_tu(vbfloat16mf4_t vd, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vbfloat16mf2_t test_vfmv_v_f_bf16mf2_tu(vbfloat16mf2_t vd, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vbfloat16m1_t test_vfmv_v_f_bf16m1_tu(vbfloat16m1_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vbfloat16m2_t test_vfmv_v_f_bf16m2_tu(vbfloat16m2_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vbfloat16m4_t test_vfmv_v_f_bf16m4_tu(vbfloat16m4_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vbfloat16m8_t test_vfmv_v_f_bf16m8_tu(vbfloat16m8_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_tu(vd, rs1, vl);
}

vbfloat16mf4_t test_vfmv_s_f_bf16mf4_tu(vbfloat16mf4_t vd, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vbfloat16mf2_t test_vfmv_s_f_bf16mf2_tu(vbfloat16mf2_t vd, __bf16 rs1,
                                        size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vbfloat16m1_t test_vfmv_s_f_bf16m1_tu(vbfloat16m1_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vbfloat16m2_t test_vfmv_s_f_bf16m2_tu(vbfloat16m2_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vbfloat16m4_t test_vfmv_s_f_bf16m4_tu(vbfloat16m4_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}

vbfloat16m8_t test_vfmv_s_f_bf16m8_tu(vbfloat16m8_t vd, __bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_tu(vd, rs1, vl);
}
