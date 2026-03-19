#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfmv_v_f_bf16mf4(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16mf4(rs1, vl);
}

vbfloat16mf2_t test_vfmv_v_f_bf16mf2(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16mf2(rs1, vl);
}

vbfloat16m1_t test_vfmv_v_f_bf16m1(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m1(rs1, vl);
}

vbfloat16m2_t test_vfmv_v_f_bf16m2(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m2(rs1, vl);
}

vbfloat16m4_t test_vfmv_v_f_bf16m4(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m4(rs1, vl);
}

vbfloat16m8_t test_vfmv_v_f_bf16m8(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_v_f_bf16m8(rs1, vl);
}

__bf16 test_vfmv_f_s_bf16mf4_bf16(vbfloat16mf4_t vs1) {
  return __riscv_vfmv_f_s_bf16mf4_bf16(vs1);
}

vbfloat16mf4_t test_vfmv_s_f_bf16mf4(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_bf16mf4(rs1, vl);
}

__bf16 test_vfmv_f_s_bf16mf2_bf16(vbfloat16mf2_t vs1) {
  return __riscv_vfmv_f_s_bf16mf2_bf16(vs1);
}

vbfloat16mf2_t test_vfmv_s_f_bf16mf2(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_bf16mf2(rs1, vl);
}

__bf16 test_vfmv_f_s_bf16m1_bf16(vbfloat16m1_t vs1) {
  return __riscv_vfmv_f_s_bf16m1_bf16(vs1);
}

vbfloat16m1_t test_vfmv_s_f_bf16m1(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_bf16m1(rs1, vl);
}

__bf16 test_vfmv_f_s_bf16m2_bf16(vbfloat16m2_t vs1) {
  return __riscv_vfmv_f_s_bf16m2_bf16(vs1);
}

vbfloat16m2_t test_vfmv_s_f_bf16m2(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_bf16m2(rs1, vl);
}

__bf16 test_vfmv_f_s_bf16m4_bf16(vbfloat16m4_t vs1) {
  return __riscv_vfmv_f_s_bf16m4_bf16(vs1);
}

vbfloat16m4_t test_vfmv_s_f_bf16m4(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_bf16m4(rs1, vl);
}

__bf16 test_vfmv_f_s_bf16m8_bf16(vbfloat16m8_t vs1) {
  return __riscv_vfmv_f_s_bf16m8_bf16(vs1);
}

vbfloat16m8_t test_vfmv_s_f_bf16m8(__bf16 rs1, size_t vl) {
  return __riscv_vfmv_s_f_bf16m8(rs1, vl);
}
