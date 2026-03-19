// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zve64d \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat64m1x6_t test_vlsseg6e64_v_f64m1x6_m(vbool64_t vm, const double *rs1,
                                           ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e64(vm, rs1, rs2, vl);
}

vint64m1x6_t test_vlsseg6e64_v_i64m1x6_m(vbool64_t vm, const int64_t *rs1,
                                         ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e64(vm, rs1, rs2, vl);
}

vuint64m1x6_t test_vlsseg6e64_v_u64m1x6_m(vbool64_t vm, const uint64_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg6e64(vm, rs1, rs2, vl);
}
