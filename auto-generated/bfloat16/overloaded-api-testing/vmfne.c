#include <riscv_vector.h>
#include <stdint.h>

vbool64_t test_vmfne_vv_bf16mf4_b64(vbfloat16mf4_t vs2, vbfloat16mf4_t vs1,
                                    size_t vl) {
  return __riscv_vmfne(vs2, vs1, vl);
}

vbool64_t test_vmfne_vf_bf16mf4_b64(vbfloat16mf4_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vs2, rs1, vl);
}

vbool32_t test_vmfne_vv_bf16mf2_b32(vbfloat16mf2_t vs2, vbfloat16mf2_t vs1,
                                    size_t vl) {
  return __riscv_vmfne(vs2, vs1, vl);
}

vbool32_t test_vmfne_vf_bf16mf2_b32(vbfloat16mf2_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vs2, rs1, vl);
}

vbool16_t test_vmfne_vv_bf16m1_b16(vbfloat16m1_t vs2, vbfloat16m1_t vs1,
                                   size_t vl) {
  return __riscv_vmfne(vs2, vs1, vl);
}

vbool16_t test_vmfne_vf_bf16m1_b16(vbfloat16m1_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vs2, rs1, vl);
}

vbool8_t test_vmfne_vv_bf16m2_b8(vbfloat16m2_t vs2, vbfloat16m2_t vs1,
                                 size_t vl) {
  return __riscv_vmfne(vs2, vs1, vl);
}

vbool8_t test_vmfne_vf_bf16m2_b8(vbfloat16m2_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vs2, rs1, vl);
}

vbool4_t test_vmfne_vv_bf16m4_b4(vbfloat16m4_t vs2, vbfloat16m4_t vs1,
                                 size_t vl) {
  return __riscv_vmfne(vs2, vs1, vl);
}

vbool4_t test_vmfne_vf_bf16m4_b4(vbfloat16m4_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vs2, rs1, vl);
}

vbool2_t test_vmfne_vv_bf16m8_b2(vbfloat16m8_t vs2, vbfloat16m8_t vs1,
                                 size_t vl) {
  return __riscv_vmfne(vs2, vs1, vl);
}

vbool2_t test_vmfne_vf_bf16m8_b2(vbfloat16m8_t vs2, __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vs2, rs1, vl);
}

vbool64_t test_vmfne_vv_bf16mf4_b64_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                      vbfloat16mf4_t vs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, vs1, vl);
}

vbool64_t test_vmfne_vf_bf16mf4_b64_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, rs1, vl);
}

vbool32_t test_vmfne_vv_bf16mf2_b32_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                      vbfloat16mf2_t vs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, vs1, vl);
}

vbool32_t test_vmfne_vf_bf16mf2_b32_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                      __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, rs1, vl);
}

vbool16_t test_vmfne_vv_bf16m1_b16_m(vbool16_t vm, vbfloat16m1_t vs2,
                                     vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, vs1, vl);
}

vbool16_t test_vmfne_vf_bf16m1_b16_m(vbool16_t vm, vbfloat16m1_t vs2,
                                     __bf16 rs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, rs1, vl);
}

vbool8_t test_vmfne_vv_bf16m2_b8_m(vbool8_t vm, vbfloat16m2_t vs2,
                                   vbfloat16m2_t vs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, vs1, vl);
}

vbool8_t test_vmfne_vf_bf16m2_b8_m(vbool8_t vm, vbfloat16m2_t vs2, __bf16 rs1,
                                   size_t vl) {
  return __riscv_vmfne(vm, vs2, rs1, vl);
}

vbool4_t test_vmfne_vv_bf16m4_b4_m(vbool4_t vm, vbfloat16m4_t vs2,
                                   vbfloat16m4_t vs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, vs1, vl);
}

vbool4_t test_vmfne_vf_bf16m4_b4_m(vbool4_t vm, vbfloat16m4_t vs2, __bf16 rs1,
                                   size_t vl) {
  return __riscv_vmfne(vm, vs2, rs1, vl);
}

vbool2_t test_vmfne_vv_bf16m8_b2_m(vbool2_t vm, vbfloat16m8_t vs2,
                                   vbfloat16m8_t vs1, size_t vl) {
  return __riscv_vmfne(vm, vs2, vs1, vl);
}

vbool2_t test_vmfne_vf_bf16m8_b2_m(vbool2_t vm, vbfloat16m8_t vs2, __bf16 rs1,
                                   size_t vl) {
  return __riscv_vmfne(vm, vs2, rs1, vl);
}
