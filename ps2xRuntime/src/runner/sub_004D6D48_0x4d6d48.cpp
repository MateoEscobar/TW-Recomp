#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D6D48
// Address: 0x4d6d48 - 0x4d6f78
void sub_004D6D48_0x4d6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6D48_0x4d6d48");
#endif

    ctx->pc = 0x4d6d48u;

    // 0x4d6d48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d6d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d6d4c: 0xc4910000  lwc1        $f17, 0x0($a0)
    ctx->pc = 0x4d6d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d6d50: 0xe7be0050  swc1        $f30, 0x50($sp)
    ctx->pc = 0x4d6d50u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d6d54: 0xe7bd0048  swc1        $f29, 0x48($sp)
    ctx->pc = 0x4d6d54u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4d6d58: 0xe7bc0040  swc1        $f28, 0x40($sp)
    ctx->pc = 0x4d6d58u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d6d5c: 0xe7bb0038  swc1        $f27, 0x38($sp)
    ctx->pc = 0x4d6d5cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d6d60: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x4d6d60u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d6d64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d6d64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d6d68: 0xe7b90028  swc1        $f25, 0x28($sp)
    ctx->pc = 0x4d6d68u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d6d6c: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x4d6d6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d6d70: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x4d6d70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d6d74: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x4d6d74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d6d78: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x4d6d78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4d6d7c: 0xc4950038  lwc1        $f21, 0x38($a0)
    ctx->pc = 0x4d6d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d6d80: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x4d6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6d84: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x4d6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6d88: 0xc4850014  lwc1        $f5, 0x14($a0)
    ctx->pc = 0x4d6d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d6d8c: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x4d6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6d90: 0x46002781  sub.s       $f30, $f4, $f0
    ctx->pc = 0x4d6d90u;
    ctx->f[30] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4d6d94: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x4d6d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d6d98: 0x46032f40  add.s       $f29, $f5, $f3
    ctx->pc = 0x4d6d98u;
    ctx->f[29] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4d6d9c: 0xc488002c  lwc1        $f8, 0x2C($a0)
    ctx->pc = 0x4d6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d6da0: 0xc48b000c  lwc1        $f11, 0xC($a0)
    ctx->pc = 0x4d6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d6da4: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x4d6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d6da8: 0x461eebc0  add.s       $f15, $f29, $f30
    ctx->pc = 0x4d6da8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[29], ctx->f[30]);
    // 0x4d6dac: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x4d6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6db0: 0x461df381  sub.s       $f14, $f30, $f29
    ctx->pc = 0x4d6db0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[30], ctx->f[29]);
    // 0x4d6db4: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x4d6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d6db8: 0x46002780  add.s       $f30, $f4, $f0
    ctx->pc = 0x4d6db8u;
    ctx->f[30] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4d6dbc: 0xc4970018  lwc1        $f23, 0x18($a0)
    ctx->pc = 0x4d6dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d6dc0: 0x46032f41  sub.s       $f29, $f5, $f3
    ctx->pc = 0x4d6dc0u;
    ctx->f[29] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x4d6dc4: 0xc496001c  lwc1        $f22, 0x1C($a0)
    ctx->pc = 0x4d6dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d6dc8: 0xc48d003c  lwc1        $f13, 0x3C($a0)
    ctx->pc = 0x4d6dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d6dcc: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x4d6dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6dd0: 0x461df701  sub.s       $f28, $f30, $f29
    ctx->pc = 0x4d6dd0u;
    ctx->f[28] = FPU_SUB_S(ctx->f[30], ctx->f[29]);
    // 0x4d6dd4: 0xc4980024  lwc1        $f24, 0x24($a0)
    ctx->pc = 0x4d6dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d6dd8: 0x461eed00  add.s       $f20, $f29, $f30
    ctx->pc = 0x4d6dd8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[29], ctx->f[30]);
    // 0x4d6ddc: 0xc4990020  lwc1        $f25, 0x20($a0)
    ctx->pc = 0x4d6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d6de0: 0x46086781  sub.s       $f30, $f12, $f8
    ctx->pc = 0x4d6de0u;
    ctx->f[30] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x4d6de4: 0xc4900004  lwc1        $f16, 0x4($a0)
    ctx->pc = 0x4d6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d6de8: 0x46065f40  add.s       $f29, $f11, $f6
    ctx->pc = 0x4d6de8u;
    ctx->f[29] = FPU_ADD_S(ctx->f[11], ctx->f[6]);
    // 0x4d6dec: 0x460e3b82  mul.s       $f14, $f7, $f14
    ctx->pc = 0x4d6decu;
    ctx->f[14] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
    // 0x4d6df0: 0x461e0902  mul.s       $f4, $f1, $f30
    ctx->pc = 0x4d6df0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
    // 0x4d6df4: 0x461d0802  mul.s       $f0, $f1, $f29
    ctx->pc = 0x4d6df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d6df8: 0x461d1282  mul.s       $f10, $f2, $f29
    ctx->pc = 0x4d6df8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d6dfc: 0x461e1242  mul.s       $f9, $f2, $f30
    ctx->pc = 0x4d6dfcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d6e00: 0x46086780  add.s       $f30, $f12, $f8
    ctx->pc = 0x4d6e00u;
    ctx->f[30] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x4d6e04: 0x46065f41  sub.s       $f29, $f11, $f6
    ctx->pc = 0x4d6e04u;
    ctx->f[29] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
    // 0x4d6e08: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x4d6e08u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x4d6e0c: 0x461e16c2  mul.s       $f27, $f2, $f30
    ctx->pc = 0x4d6e0cu;
    ctx->f[27] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d6e10: 0x461d1682  mul.s       $f26, $f2, $f29
    ctx->pc = 0x4d6e10u;
    ctx->f[26] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d6e14: 0x461d0cc2  mul.s       $f19, $f1, $f29
    ctx->pc = 0x4d6e14u;
    ctx->f[19] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d6e18: 0x461e0c82  mul.s       $f18, $f1, $f30
    ctx->pc = 0x4d6e18u;
    ctx->f[18] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
    // 0x4d6e1c: 0x460dbf81  sub.s       $f30, $f23, $f13
    ctx->pc = 0x4d6e1cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[23], ctx->f[13]);
    // 0x4d6e20: 0x4615b740  add.s       $f29, $f22, $f21
    ctx->pc = 0x4d6e20u;
    ctx->f[29] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x4d6e24: 0x46045280  add.s       $f10, $f10, $f4
    ctx->pc = 0x4d6e24u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x4d6e28: 0x461e10c2  mul.s       $f3, $f2, $f30
    ctx->pc = 0x4d6e28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d6e2c: 0x461d1002  mul.s       $f0, $f2, $f29
    ctx->pc = 0x4d6e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d6e30: 0x461d0942  mul.s       $f5, $f1, $f29
    ctx->pc = 0x4d6e30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d6e34: 0x461e0902  mul.s       $f4, $f1, $f30
    ctx->pc = 0x4d6e34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
    // 0x4d6e38: 0x460dbf80  add.s       $f30, $f23, $f13
    ctx->pc = 0x4d6e38u;
    ctx->f[30] = FPU_ADD_S(ctx->f[23], ctx->f[13]);
    // 0x4d6e3c: 0x4615b741  sub.s       $f29, $f22, $f21
    ctx->pc = 0x4d6e3cu;
    ctx->f[29] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x4d6e40: 0x46188b01  sub.s       $f12, $f17, $f24
    ctx->pc = 0x4d6e40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[17], ctx->f[24]);
    // 0x4d6e44: 0x46198340  add.s       $f13, $f16, $f25
    ctx->pc = 0x4d6e44u;
    ctx->f[13] = FPU_ADD_S(ctx->f[16], ctx->f[25]);
    // 0x4d6e48: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x4d6e48u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4d6e4c: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x4d6e4cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x4d6e50: 0x460f3bc2  mul.s       $f15, $f7, $f15
    ctx->pc = 0x4d6e50u;
    ctx->f[15] = FPU_MUL_S(ctx->f[7], ctx->f[15]);
    // 0x4d6e54: 0x461e0d42  mul.s       $f21, $f1, $f30
    ctx->pc = 0x4d6e54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
    // 0x4d6e58: 0x461d12c2  mul.s       $f11, $f2, $f29
    ctx->pc = 0x4d6e58u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d6e5c: 0x461d0842  mul.s       $f1, $f1, $f29
    ctx->pc = 0x4d6e5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d6e60: 0x461e1082  mul.s       $f2, $f2, $f30
    ctx->pc = 0x4d6e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d6e64: 0x46044d80  add.s       $f22, $f9, $f4
    ctx->pc = 0x4d6e64u;
    ctx->f[22] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x4d6e68: 0x460e6780  add.s       $f30, $f12, $f14
    ctx->pc = 0x4d6e68u;
    ctx->f[30] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x4d6e6c: 0x460f6f40  add.s       $f29, $f13, $f15
    ctx->pc = 0x4d6e6cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x4d6e70: 0x460555c0  add.s       $f23, $f10, $f5
    ctx->pc = 0x4d6e70u;
    ctx->f[23] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x4d6e74: 0x4616f001  sub.s       $f0, $f30, $f22
    ctx->pc = 0x4d6e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[30], ctx->f[22]);
    // 0x4d6e78: 0x4616f180  add.s       $f6, $f30, $f22
    ctx->pc = 0x4d6e78u;
    ctx->f[6] = FPU_ADD_S(ctx->f[30], ctx->f[22]);
    // 0x4d6e7c: 0x4617e8c1  sub.s       $f3, $f29, $f23
    ctx->pc = 0x4d6e7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[29], ctx->f[23]);
    // 0x4d6e80: 0x4617ea00  add.s       $f8, $f29, $f23
    ctx->pc = 0x4d6e80u;
    ctx->f[8] = FPU_ADD_S(ctx->f[29], ctx->f[23]);
    // 0x4d6e84: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d6e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d6e88: 0x460e6781  sub.s       $f30, $f12, $f14
    ctx->pc = 0x4d6e88u;
    ctx->f[30] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x4d6e8c: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x4d6e8cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d6e90: 0x460f6f41  sub.s       $f29, $f13, $f15
    ctx->pc = 0x4d6e90u;
    ctx->f[29] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x4d6e94: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x4d6e94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d6e98: 0x46044d81  sub.s       $f22, $f9, $f4
    ctx->pc = 0x4d6e98u;
    ctx->f[22] = FPU_SUB_S(ctx->f[9], ctx->f[4]);
    // 0x4d6e9c: 0xe4880004  swc1        $f8, 0x4($a0)
    ctx->pc = 0x4d6e9cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d6ea0: 0x460555c1  sub.s       $f23, $f10, $f5
    ctx->pc = 0x4d6ea0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x4d6ea4: 0x46143d02  mul.s       $f20, $f7, $f20
    ctx->pc = 0x4d6ea4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x4d6ea8: 0x46188c40  add.s       $f17, $f17, $f24
    ctx->pc = 0x4d6ea8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[24]);
    // 0x4d6eac: 0x46198401  sub.s       $f16, $f16, $f25
    ctx->pc = 0x4d6eacu;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[25]);
    // 0x4d6eb0: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x4d6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d6eb4: 0x461a9481  sub.s       $f18, $f18, $f26
    ctx->pc = 0x4d6eb4u;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[26]);
    // 0x4d6eb8: 0xc7b90028  lwc1        $f25, 0x28($sp)
    ctx->pc = 0x4d6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d6ebc: 0x461b9cc0  add.s       $f19, $f19, $f27
    ctx->pc = 0x4d6ebcu;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[27]);
    // 0x4d6ec0: 0xc7ba0030  lwc1        $f26, 0x30($sp)
    ctx->pc = 0x4d6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d6ec4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x4d6ec4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4d6ec8: 0xc7bb0038  lwc1        $f27, 0x38($sp)
    ctx->pc = 0x4d6ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d6ecc: 0x46155ac0  add.s       $f11, $f11, $f21
    ctx->pc = 0x4d6eccu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[21]);
    // 0x4d6ed0: 0x461c39c2  mul.s       $f7, $f7, $f28
    ctx->pc = 0x4d6ed0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[28]);
    // 0x4d6ed4: 0xc7b50008  lwc1        $f21, 0x8($sp)
    ctx->pc = 0x4d6ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d6ed8: 0x4617f000  add.s       $f0, $f30, $f23
    ctx->pc = 0x4d6ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[30], ctx->f[23]);
    // 0x4d6edc: 0xc7bc0040  lwc1        $f28, 0x40($sp)
    ctx->pc = 0x4d6edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x4d6ee0: 0x4616e841  sub.s       $f1, $f29, $f22
    ctx->pc = 0x4d6ee0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[29], ctx->f[22]);
    // 0x4d6ee4: 0x4617f0c1  sub.s       $f3, $f30, $f23
    ctx->pc = 0x4d6ee4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[30], ctx->f[23]);
    // 0x4d6ee8: 0x4616e900  add.s       $f4, $f29, $f22
    ctx->pc = 0x4d6ee8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[29], ctx->f[22]);
    // 0x4d6eec: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x4d6eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d6ef0: 0x46148f81  sub.s       $f30, $f17, $f20
    ctx->pc = 0x4d6ef0u;
    ctx->f[30] = FPU_SUB_S(ctx->f[17], ctx->f[20]);
    // 0x4d6ef4: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x4d6ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d6ef8: 0x46029581  sub.s       $f22, $f18, $f2
    ctx->pc = 0x4d6ef8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[18], ctx->f[2]);
    // 0x4d6efc: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x4d6efcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d6f00: 0x46078740  add.s       $f29, $f16, $f7
    ctx->pc = 0x4d6f00u;
    ctx->f[29] = FPU_ADD_S(ctx->f[16], ctx->f[7]);
    // 0x4d6f04: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x4d6f04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d6f08: 0x460b9dc1  sub.s       $f23, $f19, $f11
    ctx->pc = 0x4d6f08u;
    ctx->f[23] = FPU_SUB_S(ctx->f[19], ctx->f[11]);
    // 0x4d6f0c: 0x4616f001  sub.s       $f0, $f30, $f22
    ctx->pc = 0x4d6f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[30], ctx->f[22]);
    // 0x4d6f10: 0x4616f0c0  add.s       $f3, $f30, $f22
    ctx->pc = 0x4d6f10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[22]);
    // 0x4d6f14: 0x4617e841  sub.s       $f1, $f29, $f23
    ctx->pc = 0x4d6f14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[29], ctx->f[23]);
    // 0x4d6f18: 0x4617e900  add.s       $f4, $f29, $f23
    ctx->pc = 0x4d6f18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[29], ctx->f[23]);
    // 0x4d6f1c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x4d6f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4d6f20: 0x46148f80  add.s       $f30, $f17, $f20
    ctx->pc = 0x4d6f20u;
    ctx->f[30] = FPU_ADD_S(ctx->f[17], ctx->f[20]);
    // 0x4d6f24: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x4d6f24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d6f28: 0x46029580  add.s       $f22, $f18, $f2
    ctx->pc = 0x4d6f28u;
    ctx->f[22] = FPU_ADD_S(ctx->f[18], ctx->f[2]);
    // 0x4d6f2c: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x4d6f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4d6f30: 0x46078741  sub.s       $f29, $f16, $f7
    ctx->pc = 0x4d6f30u;
    ctx->f[29] = FPU_SUB_S(ctx->f[16], ctx->f[7]);
    // 0x4d6f34: 0xe4840024  swc1        $f4, 0x24($a0)
    ctx->pc = 0x4d6f34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d6f38: 0x460b9dc0  add.s       $f23, $f19, $f11
    ctx->pc = 0x4d6f38u;
    ctx->f[23] = FPU_ADD_S(ctx->f[19], ctx->f[11]);
    // 0x4d6f3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d6f40: 0x4616e800  add.s       $f0, $f29, $f22
    ctx->pc = 0x4d6f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[22]);
    // 0x4d6f44: 0x4617f041  sub.s       $f1, $f30, $f23
    ctx->pc = 0x4d6f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[23]);
    // 0x4d6f48: 0x4617f080  add.s       $f2, $f30, $f23
    ctx->pc = 0x4d6f48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[30], ctx->f[23]);
    // 0x4d6f4c: 0x4616e8c1  sub.s       $f3, $f29, $f22
    ctx->pc = 0x4d6f4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[29], ctx->f[22]);
    // 0x4d6f50: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x4d6f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4d6f54: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x4d6f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4d6f58: 0xe4820038  swc1        $f2, 0x38($a0)
    ctx->pc = 0x4d6f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4d6f5c: 0xc7be0050  lwc1        $f30, 0x50($sp)
    ctx->pc = 0x4d6f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x4d6f60: 0xc7bd0048  lwc1        $f29, 0x48($sp)
    ctx->pc = 0x4d6f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x4d6f64: 0xc7b70018  lwc1        $f23, 0x18($sp)
    ctx->pc = 0x4d6f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d6f68: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x4d6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d6f6c: 0xe483003c  swc1        $f3, 0x3C($a0)
    ctx->pc = 0x4d6f6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4d6f70: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6F70u;
        // 0x4d6f74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D6F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D6F78u;
}
