#include <riscv_vector.h>
#include <stdint.h>

__bf16 test_vfmv_f_s_bf16mf4_bf16(vbfloat16mf4_t vs1) {
  return __riscv_vfmv_f(vs1);
}

__bf16 test_vfmv_f_s_bf16mf2_bf16(vbfloat16mf2_t vs1) {
  return __riscv_vfmv_f(vs1);
}

__bf16 test_vfmv_f_s_bf16m1_bf16(vbfloat16m1_t vs1) {
  return __riscv_vfmv_f(vs1);
}

__bf16 test_vfmv_f_s_bf16m2_bf16(vbfloat16m2_t vs1) {
  return __riscv_vfmv_f(vs1);
}

__bf16 test_vfmv_f_s_bf16m4_bf16(vbfloat16m4_t vs1) {
  return __riscv_vfmv_f(vs1);
}

__bf16 test_vfmv_f_s_bf16m8_bf16(vbfloat16m8_t vs1) {
  return __riscv_vfmv_f(vs1);
}
