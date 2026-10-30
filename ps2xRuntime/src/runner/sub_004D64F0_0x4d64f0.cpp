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

// Function: sub_004D64F0
// Address: 0x4d64f0 - 0x4d6b90
void sub_004D64F0_0x4d64f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D64F0_0x4d64f0");
#endif

    ctx->pc = 0x4d64f0u;

    // 0x4d64f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4d64f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x4d64f4: 0xe7bf00f8  swc1        $f31, 0xF8($sp)
    ctx->pc = 0x4d64f4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x4d64f8: 0xe7be00f0  swc1        $f30, 0xF0($sp)
    ctx->pc = 0x4d64f8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x4d64fc: 0xe7bd00e8  swc1        $f29, 0xE8($sp)
    ctx->pc = 0x4d64fcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x4d6500: 0xe7bc00e0  swc1        $f28, 0xE0($sp)
    ctx->pc = 0x4d6500u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x4d6504: 0xe7bb00d8  swc1        $f27, 0xD8($sp)
    ctx->pc = 0x4d6504u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x4d6508: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x4d6508u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x4d650c: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x4d650cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x4d6510: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x4d6510u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x4d6514: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x4d6514u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x4d6518: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x4d6518u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x4d651c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x4d651cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x4d6520: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x4d6520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x4d6524: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x4d6524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d6528: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x4d6528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d652c: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x4d652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6530: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x4d6530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6534: 0x46001681  sub.s       $f26, $f2, $f0
    ctx->pc = 0x4d6534u;
    ctx->f[26] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d6538: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x4d6538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d653c: 0x46011f40  add.s       $f29, $f3, $f1
    ctx->pc = 0x4d653cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x4d6540: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x4d6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d6544: 0xc487004c  lwc1        $f7, 0x4C($a0)
    ctx->pc = 0x4d6544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6548: 0xc48a000c  lwc1        $f10, 0xC($a0)
    ctx->pc = 0x4d6548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d654c: 0x461aef80  add.s       $f30, $f29, $f26
    ctx->pc = 0x4d654cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x4d6550: 0xc4880048  lwc1        $f8, 0x48($a0)
    ctx->pc = 0x4d6550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d6554: 0x461dd681  sub.s       $f26, $f26, $f29
    ctx->pc = 0x4d6554u;
    ctx->f[26] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
    // 0x4d6558: 0x46011f41  sub.s       $f29, $f3, $f1
    ctx->pc = 0x4d6558u;
    ctx->f[29] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4d655c: 0xe7ba004c  swc1        $f26, 0x4C($sp)
    ctx->pc = 0x4d655cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x4d6560: 0x46001680  add.s       $f26, $f2, $f0
    ctx->pc = 0x4d6560u;
    ctx->f[26] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d6564: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x4d6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6568: 0xc4920028  lwc1        $f18, 0x28($a0)
    ctx->pc = 0x4d6568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d656c: 0x461ae800  add.s       $f0, $f29, $f26
    ctx->pc = 0x4d656cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x4d6570: 0xc48e006c  lwc1        $f14, 0x6C($a0)
    ctx->pc = 0x4d6570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d6574: 0xc490002c  lwc1        $f16, 0x2C($a0)
    ctx->pc = 0x4d6574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d6578: 0x461dd681  sub.s       $f26, $f26, $f29
    ctx->pc = 0x4d6578u;
    ctx->f[26] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
    // 0x4d657c: 0xc48f0068  lwc1        $f15, 0x68($a0)
    ctx->pc = 0x4d657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d6580: 0x46085740  add.s       $f29, $f10, $f8
    ctx->pc = 0x4d6580u;
    ctx->f[29] = FPU_ADD_S(ctx->f[10], ctx->f[8]);
    // 0x4d6584: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4d6584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x4d6588: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x4d6588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d658c: 0x461d2982  mul.s       $f6, $f5, $f29
    ctx->pc = 0x4d658cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[29]);
    // 0x4d6590: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x4d6590u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d6594: 0x461d2742  mul.s       $f29, $f4, $f29
    ctx->pc = 0x4d6594u;
    ctx->f[29] = FPU_MUL_S(ctx->f[4], ctx->f[29]);
    // 0x4d6598: 0x46075e81  sub.s       $f26, $f11, $f7
    ctx->pc = 0x4d6598u;
    ctx->f[26] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x4d659c: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x4d659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d65a0: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x4d65a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4d65a4: 0x461a2042  mul.s       $f1, $f4, $f26
    ctx->pc = 0x4d65a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[26]);
    // 0x4d65a8: 0x461a2e82  mul.s       $f26, $f5, $f26
    ctx->pc = 0x4d65a8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[5], ctx->f[26]);
    // 0x4d65ac: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4d65acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4d65b0: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x4d65b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d65b4: 0xe7ba0058  swc1        $f26, 0x58($sp)
    ctx->pc = 0x4d65b4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4d65b8: 0x460e9681  sub.s       $f26, $f18, $f14
    ctx->pc = 0x4d65b8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[18], ctx->f[14]);
    // 0x4d65bc: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x4d65bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d65c0: 0xe7bd005c  swc1        $f29, 0x5C($sp)
    ctx->pc = 0x4d65c0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x4d65c4: 0x460f8740  add.s       $f29, $f16, $f15
    ctx->pc = 0x4d65c4u;
    ctx->f[29] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x4d65c8: 0xc7b3004c  lwc1        $f19, 0x4C($sp)
    ctx->pc = 0x4d65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d65cc: 0x461a1a42  mul.s       $f9, $f3, $f26
    ctx->pc = 0x4d65ccu;
    ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[26]);
    // 0x4d65d0: 0xc4910000  lwc1        $f17, 0x0($a0)
    ctx->pc = 0x4d65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d65d4: 0x461a1682  mul.s       $f26, $f2, $f26
    ctx->pc = 0x4d65d4u;
    ctx->f[26] = FPU_MUL_S(ctx->f[2], ctx->f[26]);
    // 0x4d65d8: 0x461d1302  mul.s       $f12, $f2, $f29
    ctx->pc = 0x4d65d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d65dc: 0xe7a90074  swc1        $f9, 0x74($sp)
    ctx->pc = 0x4d65dcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x4d65e0: 0x461d1f42  mul.s       $f29, $f3, $f29
    ctx->pc = 0x4d65e0u;
    ctx->f[29] = FPU_MUL_S(ctx->f[3], ctx->f[29]);
    // 0x4d65e4: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x4d65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d65e8: 0xe7ba0068  swc1        $f26, 0x68($sp)
    ctx->pc = 0x4d65e8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4d65ec: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x4d65ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4d65f0: 0x46075e80  add.s       $f26, $f11, $f7
    ctx->pc = 0x4d65f0u;
    ctx->f[26] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x4d65f4: 0x46133702  mul.s       $f28, $f6, $f19
    ctx->pc = 0x4d65f4u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[19]);
    // 0x4d65f8: 0xc48d0044  lwc1        $f13, 0x44($a0)
    ctx->pc = 0x4d65f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d65fc: 0x461e37c2  mul.s       $f31, $f6, $f30
    ctx->pc = 0x4d65fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[30]);
    // 0x4d6600: 0xe7bd006c  swc1        $f29, 0x6C($sp)
    ctx->pc = 0x4d6600u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x4d6604: 0x461a11c2  mul.s       $f7, $f2, $f26
    ctx->pc = 0x4d6604u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[26]);
    // 0x4d6608: 0x46085741  sub.s       $f29, $f10, $f8
    ctx->pc = 0x4d6608u;
    ctx->f[29] = FPU_SUB_S(ctx->f[10], ctx->f[8]);
    // 0x4d660c: 0x461a1e82  mul.s       $f26, $f3, $f26
    ctx->pc = 0x4d660cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[3], ctx->f[26]);
    // 0x4d6610: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x4d6610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d6614: 0xc4890040  lwc1        $f9, 0x40($a0)
    ctx->pc = 0x4d6614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d6618: 0x460d8ec1  sub.s       $f27, $f17, $f13
    ctx->pc = 0x4d6618u;
    ctx->f[27] = FPU_SUB_S(ctx->f[17], ctx->f[13]);
    // 0x4d661c: 0x461d1a02  mul.s       $f8, $f3, $f29
    ctx->pc = 0x4d661cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[29]);
    // 0x4d6620: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x4d6620u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x4d6624: 0x461d1742  mul.s       $f29, $f2, $f29
    ctx->pc = 0x4d6624u;
    ctx->f[29] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d6628: 0xe7ba0078  swc1        $f26, 0x78($sp)
    ctx->pc = 0x4d6628u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x4d662c: 0x460e9680  add.s       $f26, $f18, $f14
    ctx->pc = 0x4d662cu;
    ctx->f[26] = FPU_ADD_S(ctx->f[18], ctx->f[14]);
    // 0x4d6630: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x4d6630u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x4d6634: 0x46096780  add.s       $f30, $f12, $f9
    ctx->pc = 0x4d6634u;
    ctx->f[30] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x4d6638: 0xe7bd007c  swc1        $f29, 0x7C($sp)
    ctx->pc = 0x4d6638u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x4d663c: 0x460f8741  sub.s       $f29, $f16, $f15
    ctx->pc = 0x4d663cu;
    ctx->f[29] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x4d6640: 0xc48a0010  lwc1        $f10, 0x10($a0)
    ctx->pc = 0x4d6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d6644: 0x461a2402  mul.s       $f16, $f4, $f26
    ctx->pc = 0x4d6644u;
    ctx->f[16] = FPU_MUL_S(ctx->f[4], ctx->f[26]);
    // 0x4d6648: 0xc48e0054  lwc1        $f14, 0x54($a0)
    ctx->pc = 0x4d6648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d664c: 0x461a2ac2  mul.s       $f11, $f5, $f26
    ctx->pc = 0x4d664cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[5], ctx->f[26]);
    // 0x4d6650: 0xc4920014  lwc1        $f18, 0x14($a0)
    ctx->pc = 0x4d6650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6654: 0x461d2bc2  mul.s       $f15, $f5, $f29
    ctx->pc = 0x4d6654u;
    ctx->f[15] = FPU_MUL_S(ctx->f[5], ctx->f[29]);
    // 0x4d6658: 0xc4930050  lwc1        $f19, 0x50($a0)
    ctx->pc = 0x4d6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d665c: 0x461d21c2  mul.s       $f7, $f4, $f29
    ctx->pc = 0x4d665cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[29]);
    // 0x4d6660: 0x460e5681  sub.s       $f26, $f10, $f14
    ctx->pc = 0x4d6660u;
    ctx->f[26] = FPU_SUB_S(ctx->f[10], ctx->f[14]);
    // 0x4d6664: 0x46139740  add.s       $f29, $f18, $f19
    ctx->pc = 0x4d6664u;
    ctx->f[29] = FPU_ADD_S(ctx->f[18], ctx->f[19]);
    // 0x4d6668: 0x461a0a02  mul.s       $f8, $f1, $f26
    ctx->pc = 0x4d6668u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x4d666c: 0x461d0282  mul.s       $f10, $f0, $f29
    ctx->pc = 0x4d666cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x4d6670: 0x461a04c2  mul.s       $f19, $f0, $f26
    ctx->pc = 0x4d6670u;
    ctx->f[19] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x4d6674: 0xe7a8008c  swc1        $f8, 0x8C($sp)
    ctx->pc = 0x4d6674u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x4d6678: 0x461d0d82  mul.s       $f22, $f1, $f29
    ctx->pc = 0x4d6678u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d667c: 0xe7aa0088  swc1        $f10, 0x88($sp)
    ctx->pc = 0x4d667cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x4d6680: 0xc48a0070  lwc1        $f10, 0x70($a0)
    ctx->pc = 0x4d6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d6684: 0xc48e0030  lwc1        $f14, 0x30($a0)
    ctx->pc = 0x4d6684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d6688: 0xc4920074  lwc1        $f18, 0x74($a0)
    ctx->pc = 0x4d6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d668c: 0xc4880034  lwc1        $f8, 0x34($a0)
    ctx->pc = 0x4d668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d6690: 0x46127681  sub.s       $f26, $f14, $f18
    ctx->pc = 0x4d6690u;
    ctx->f[26] = FPU_SUB_S(ctx->f[14], ctx->f[18]);
    // 0x4d6694: 0x460a4740  add.s       $f29, $f8, $f10
    ctx->pc = 0x4d6694u;
    ctx->f[29] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x4d6698: 0xc4920010  lwc1        $f18, 0x10($a0)
    ctx->pc = 0x4d6698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d669c: 0xc48a0054  lwc1        $f10, 0x54($a0)
    ctx->pc = 0x4d669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d66a0: 0x461a05c2  mul.s       $f23, $f0, $f26
    ctx->pc = 0x4d66a0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x4d66a4: 0x461a0b82  mul.s       $f14, $f1, $f26
    ctx->pc = 0x4d66a4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x4d66a8: 0x460a9680  add.s       $f26, $f18, $f10
    ctx->pc = 0x4d66a8u;
    ctx->f[26] = FPU_ADD_S(ctx->f[18], ctx->f[10]);
    // 0x4d66ac: 0xc4920014  lwc1        $f18, 0x14($a0)
    ctx->pc = 0x4d66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d66b0: 0x461d0e02  mul.s       $f24, $f1, $f29
    ctx->pc = 0x4d66b0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d66b4: 0xc48a0050  lwc1        $f10, 0x50($a0)
    ctx->pc = 0x4d66b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d66b8: 0x461d0202  mul.s       $f8, $f0, $f29
    ctx->pc = 0x4d66b8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x4d66bc: 0x460a9741  sub.s       $f29, $f18, $f10
    ctx->pc = 0x4d66bcu;
    ctx->f[29] = FPU_SUB_S(ctx->f[18], ctx->f[10]);
    // 0x4d66c0: 0x461cdc81  sub.s       $f18, $f27, $f28
    ctx->pc = 0x4d66c0u;
    ctx->f[18] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d66c4: 0x461ff281  sub.s       $f10, $f30, $f31
    ctx->pc = 0x4d66c4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d66c8: 0x461cdec0  add.s       $f27, $f27, $f28
    ctx->pc = 0x4d66c8u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d66cc: 0x461ff780  add.s       $f30, $f30, $f31
    ctx->pc = 0x4d66ccu;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d66d0: 0xe7b20010  swc1        $f18, 0x10($sp)
    ctx->pc = 0x4d66d0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d66d4: 0xe7aa0014  swc1        $f10, 0x14($sp)
    ctx->pc = 0x4d66d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4d66d8: 0x461d0c82  mul.s       $f18, $f1, $f29
    ctx->pc = 0x4d66d8u;
    ctx->f[18] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d66dc: 0xe7bb0000  swc1        $f27, 0x0($sp)
    ctx->pc = 0x4d66dcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d66e0: 0xe7be0004  swc1        $f30, 0x4($sp)
    ctx->pc = 0x4d66e0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4d66e4: 0x460d8ec0  add.s       $f27, $f17, $f13
    ctx->pc = 0x4d66e4u;
    ctx->f[27] = FPU_ADD_S(ctx->f[17], ctx->f[13]);
    // 0x4d66e8: 0x46096781  sub.s       $f30, $f12, $f9
    ctx->pc = 0x4d66e8u;
    ctx->f[30] = FPU_SUB_S(ctx->f[12], ctx->f[9]);
    // 0x4d66ec: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x4d66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d66f0: 0x461a0242  mul.s       $f9, $f0, $f26
    ctx->pc = 0x4d66f0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x4d66f4: 0xe7b20094  swc1        $f18, 0x94($sp)
    ctx->pc = 0x4d66f4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x4d66f8: 0x461a0e82  mul.s       $f26, $f1, $f26
    ctx->pc = 0x4d66f8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x4d66fc: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x4d66fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d6700: 0x460d37c2  mul.s       $f31, $f6, $f13
    ctx->pc = 0x4d6700u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x4d6704: 0xe7a90098  swc1        $f9, 0x98($sp)
    ctx->pc = 0x4d6704u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4d6708: 0x460c3702  mul.s       $f28, $f6, $f12
    ctx->pc = 0x4d6708u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x4d670c: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x4d670cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4d6710: 0x461d0302  mul.s       $f12, $f0, $f29
    ctx->pc = 0x4d6710u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x4d6714: 0xc48a0030  lwc1        $f10, 0x30($a0)
    ctx->pc = 0x4d6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d6718: 0xc48d0074  lwc1        $f13, 0x74($a0)
    ctx->pc = 0x4d6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d671c: 0xc4920034  lwc1        $f18, 0x34($a0)
    ctx->pc = 0x4d671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6720: 0x460d5680  add.s       $f26, $f10, $f13
    ctx->pc = 0x4d6720u;
    ctx->f[26] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x4d6724: 0xc4890070  lwc1        $f9, 0x70($a0)
    ctx->pc = 0x4d6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d6728: 0x461fda80  add.s       $f10, $f27, $f31
    ctx->pc = 0x4d6728u;
    ctx->f[10] = FPU_ADD_S(ctx->f[27], ctx->f[31]);
    // 0x4d672c: 0x461fdec1  sub.s       $f27, $f27, $f31
    ctx->pc = 0x4d672cu;
    ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[31]);
    // 0x4d6730: 0x46099741  sub.s       $f29, $f18, $f9
    ctx->pc = 0x4d6730u;
    ctx->f[29] = FPU_SUB_S(ctx->f[18], ctx->f[9]);
    // 0x4d6734: 0xc7b20058  lwc1        $f18, 0x58($sp)
    ctx->pc = 0x4d6734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6738: 0x461cf341  sub.s       $f13, $f30, $f28
    ctx->pc = 0x4d6738u;
    ctx->f[13] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d673c: 0xc7a9005c  lwc1        $f9, 0x5C($sp)
    ctx->pc = 0x4d673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d6740: 0x461cf780  add.s       $f30, $f30, $f28
    ctx->pc = 0x4d6740u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d6744: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x4d6744u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4d6748: 0x460996c1  sub.s       $f27, $f18, $f9
    ctx->pc = 0x4d6748u;
    ctx->f[27] = FPU_SUB_S(ctx->f[18], ctx->f[9]);
    // 0x4d674c: 0xe7aa0034  swc1        $f10, 0x34($sp)
    ctx->pc = 0x4d674cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4d6750: 0xc7b20068  lwc1        $f18, 0x68($sp)
    ctx->pc = 0x4d6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6754: 0xc7a9006c  lwc1        $f9, 0x6C($sp)
    ctx->pc = 0x4d6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d6758: 0xe7ad0038  swc1        $f13, 0x38($sp)
    ctx->pc = 0x4d6758u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d675c: 0x46099701  sub.s       $f28, $f18, $f9
    ctx->pc = 0x4d675cu;
    ctx->f[28] = FPU_SUB_S(ctx->f[18], ctx->f[9]);
    // 0x4d6760: 0xc7aa0060  lwc1        $f10, 0x60($sp)
    ctx->pc = 0x4d6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d6764: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x4d6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d6768: 0x461d0482  mul.s       $f18, $f0, $f29
    ctx->pc = 0x4d6768u;
    ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x4d676c: 0xe7be0020  swc1        $f30, 0x20($sp)
    ctx->pc = 0x4d676cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d6770: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x4d6770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x4d6774: 0x460d5780  add.s       $f30, $f10, $f13
    ctx->pc = 0x4d6774u;
    ctx->f[30] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x4d6778: 0xc7aa0070  lwc1        $f10, 0x70($sp)
    ctx->pc = 0x4d6778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d677c: 0x461cdd41  sub.s       $f21, $f27, $f28
    ctx->pc = 0x4d677cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d6780: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x4d6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d6784: 0x461cdec0  add.s       $f27, $f27, $f28
    ctx->pc = 0x4d6784u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d6788: 0xe7b2009c  swc1        $f18, 0x9C($sp)
    ctx->pc = 0x4d6788u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x4d678c: 0x46075f00  add.s       $f28, $f11, $f7
    ctx->pc = 0x4d678cu;
    ctx->f[28] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x4d6790: 0x460d57c0  add.s       $f31, $f10, $f13
    ctx->pc = 0x4d6790u;
    ctx->f[31] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x4d6794: 0xc492001c  lwc1        $f18, 0x1C($a0)
    ctx->pc = 0x4d6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6798: 0xc4890018  lwc1        $f9, 0x18($a0)
    ctx->pc = 0x4d6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d679c: 0x461a0a82  mul.s       $f10, $f1, $f26
    ctx->pc = 0x4d679cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x4d67a0: 0xc48d005c  lwc1        $f13, 0x5C($a0)
    ctx->pc = 0x4d67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d67a4: 0x461d0842  mul.s       $f1, $f1, $f29
    ctx->pc = 0x4d67a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x4d67a8: 0x461ff501  sub.s       $f20, $f30, $f31
    ctx->pc = 0x4d67a8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d67ac: 0x460d4e81  sub.s       $f26, $f9, $f13
    ctx->pc = 0x4d67acu;
    ctx->f[26] = FPU_SUB_S(ctx->f[9], ctx->f[13]);
    // 0x4d67b0: 0xc4890058  lwc1        $f9, 0x58($a0)
    ctx->pc = 0x4d67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d67b4: 0x461ff780  add.s       $f30, $f30, $f31
    ctx->pc = 0x4d67b4u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d67b8: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x4d67b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d67bc: 0x46107fc1  sub.s       $f31, $f15, $f16
    ctx->pc = 0x4d67bcu;
    ctx->f[31] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x4d67c0: 0x46099740  add.s       $f29, $f18, $f9
    ctx->pc = 0x4d67c0u;
    ctx->f[29] = FPU_ADD_S(ctx->f[18], ctx->f[9]);
    // 0x4d67c4: 0xe7bb0008  swc1        $f27, 0x8($sp)
    ctx->pc = 0x4d67c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4d67c8: 0xc7b2007c  lwc1        $f18, 0x7C($sp)
    ctx->pc = 0x4d67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d67cc: 0x461a1442  mul.s       $f17, $f2, $f26
    ctx->pc = 0x4d67ccu;
    ctx->f[17] = FPU_MUL_S(ctx->f[2], ctx->f[26]);
    // 0x4d67d0: 0xc7a90080  lwc1        $f9, 0x80($sp)
    ctx->pc = 0x4d67d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d67d4: 0x461a1c02  mul.s       $f16, $f3, $f26
    ctx->pc = 0x4d67d4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[3], ctx->f[26]);
    // 0x4d67d8: 0x46126ec1  sub.s       $f27, $f13, $f18
    ctx->pc = 0x4d67d8u;
    ctx->f[27] = FPU_SUB_S(ctx->f[13], ctx->f[18]);
    // 0x4d67dc: 0xe7be000c  swc1        $f30, 0xC($sp)
    ctx->pc = 0x4d67dcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4d67e0: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x4d67e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d67e4: 0x461d1c82  mul.s       $f18, $f3, $f29
    ctx->pc = 0x4d67e4u;
    ctx->f[18] = FPU_MUL_S(ctx->f[3], ctx->f[29]);
    // 0x4d67e8: 0xc4870038  lwc1        $f7, 0x38($a0)
    ctx->pc = 0x4d67e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d67ec: 0x461d13c2  mul.s       $f15, $f2, $f29
    ctx->pc = 0x4d67ecu;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d67f0: 0x460d4f80  add.s       $f30, $f9, $f13
    ctx->pc = 0x4d67f0u;
    ctx->f[30] = FPU_ADD_S(ctx->f[9], ctx->f[13]);
    // 0x4d67f4: 0xc489007c  lwc1        $f9, 0x7C($a0)
    ctx->pc = 0x4d67f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d67f8: 0xc48d003c  lwc1        $f13, 0x3C($a0)
    ctx->pc = 0x4d67f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d67fc: 0x46093e81  sub.s       $f26, $f7, $f9
    ctx->pc = 0x4d67fcu;
    ctx->f[26] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x4d6800: 0xc4870078  lwc1        $f7, 0x78($a0)
    ctx->pc = 0x4d6800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6804: 0x461cda40  add.s       $f9, $f27, $f28
    ctx->pc = 0x4d6804u;
    ctx->f[9] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d6808: 0x461cdec1  sub.s       $f27, $f27, $f28
    ctx->pc = 0x4d6808u;
    ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d680c: 0x46076f40  add.s       $f29, $f13, $f7
    ctx->pc = 0x4d680cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[13], ctx->f[7]);
    // 0x4d6810: 0x461ff340  add.s       $f13, $f30, $f31
    ctx->pc = 0x4d6810u;
    ctx->f[13] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d6814: 0xe7a9003c  swc1        $f9, 0x3C($sp)
    ctx->pc = 0x4d6814u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x4d6818: 0x461ff781  sub.s       $f30, $f30, $f31
    ctx->pc = 0x4d6818u;
    ctx->f[30] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d681c: 0xe7bb0024  swc1        $f27, 0x24($sp)
    ctx->pc = 0x4d681cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d6820: 0x46169ec1  sub.s       $f27, $f19, $f22
    ctx->pc = 0x4d6820u;
    ctx->f[27] = FPU_SUB_S(ctx->f[19], ctx->f[22]);
    // 0x4d6824: 0xc7a7008c  lwc1        $f7, 0x8C($sp)
    ctx->pc = 0x4d6824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6828: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x4d6828u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d682c: 0x46087701  sub.s       $f28, $f14, $f8
    ctx->pc = 0x4d682cu;
    ctx->f[28] = FPU_SUB_S(ctx->f[14], ctx->f[8]);
    // 0x4d6830: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x4d6830u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d6834: 0x461a2a42  mul.s       $f9, $f5, $f26
    ctx->pc = 0x4d6834u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[26]);
    // 0x4d6838: 0xc7b30088  lwc1        $f19, 0x88($sp)
    ctx->pc = 0x4d6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d683c: 0x461a2202  mul.s       $f8, $f4, $f26
    ctx->pc = 0x4d683cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[26]);
    // 0x4d6840: 0xc48d0018  lwc1        $f13, 0x18($a0)
    ctx->pc = 0x4d6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d6844: 0x4617c7c0  add.s       $f31, $f24, $f23
    ctx->pc = 0x4d6844u;
    ctx->f[31] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
    // 0x4d6848: 0xc48e005c  lwc1        $f14, 0x5C($a0)
    ctx->pc = 0x4d6848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d684c: 0x46079f80  add.s       $f30, $f19, $f7
    ctx->pc = 0x4d684cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[19], ctx->f[7]);
    // 0x4d6850: 0xc493001c  lwc1        $f19, 0x1C($a0)
    ctx->pc = 0x4d6850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6854: 0x461d22c2  mul.s       $f11, $f4, $f29
    ctx->pc = 0x4d6854u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[29]);
    // 0x4d6858: 0x460e6e80  add.s       $f26, $f13, $f14
    ctx->pc = 0x4d6858u;
    ctx->f[26] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x4d685c: 0xc48d0058  lwc1        $f13, 0x58($a0)
    ctx->pc = 0x4d685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d6860: 0x461d29c2  mul.s       $f7, $f5, $f29
    ctx->pc = 0x4d6860u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[29]);
    // 0x4d6864: 0x461ff381  sub.s       $f14, $f30, $f31
    ctx->pc = 0x4d6864u;
    ctx->f[14] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d6868: 0x460d9f41  sub.s       $f29, $f19, $f13
    ctx->pc = 0x4d6868u;
    ctx->f[29] = FPU_SUB_S(ctx->f[19], ctx->f[13]);
    // 0x4d686c: 0xc7b30090  lwc1        $f19, 0x90($sp)
    ctx->pc = 0x4d686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6870: 0x461cde41  sub.s       $f25, $f27, $f28
    ctx->pc = 0x4d6870u;
    ctx->f[25] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d6874: 0x461cdb40  add.s       $f13, $f27, $f28
    ctx->pc = 0x4d6874u;
    ctx->f[13] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d6878: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x4d6878u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d687c: 0x460c9ec1  sub.s       $f27, $f19, $f12
    ctx->pc = 0x4d687cu;
    ctx->f[27] = FPU_SUB_S(ctx->f[19], ctx->f[12]);
    // 0x4d6880: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x4d6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d6884: 0x46010701  sub.s       $f28, $f0, $f1
    ctx->pc = 0x4d6884u;
    ctx->f[28] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d6888: 0xc7b30098  lwc1        $f19, 0x98($sp)
    ctx->pc = 0x4d6888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d688c: 0x461ff380  add.s       $f14, $f30, $f31
    ctx->pc = 0x4d688cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d6890: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x4d6890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6894: 0x46136780  add.s       $f30, $f12, $f19
    ctx->pc = 0x4d6894u;
    ctx->f[30] = FPU_ADD_S(ctx->f[12], ctx->f[19]);
    // 0x4d6898: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x4d6898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d689c: 0xc493007c  lwc1        $f19, 0x7C($a0)
    ctx->pc = 0x4d689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d68a0: 0x460a07c0  add.s       $f31, $f0, $f10
    ctx->pc = 0x4d68a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x4d68a4: 0x461d2302  mul.s       $f12, $f4, $f29
    ctx->pc = 0x4d68a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[29]);
    // 0x4d68a8: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x4d68a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d68ac: 0x461a2a82  mul.s       $f10, $f5, $f26
    ctx->pc = 0x4d68acu;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[26]);
    // 0x4d68b0: 0x461a2102  mul.s       $f4, $f4, $f26
    ctx->pc = 0x4d68b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[26]);
    // 0x4d68b4: 0x46130e80  add.s       $f26, $f1, $f19
    ctx->pc = 0x4d68b4u;
    ctx->f[26] = FPU_ADD_S(ctx->f[1], ctx->f[19]);
    // 0x4d68b8: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x4d68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d68bc: 0x461d2942  mul.s       $f5, $f5, $f29
    ctx->pc = 0x4d68bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[29]);
    // 0x4d68c0: 0x461cdcc0  add.s       $f19, $f27, $f28
    ctx->pc = 0x4d68c0u;
    ctx->f[19] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d68c4: 0x46010741  sub.s       $f29, $f0, $f1
    ctx->pc = 0x4d68c4u;
    ctx->f[29] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d68c8: 0x461ff000  add.s       $f0, $f30, $f31
    ctx->pc = 0x4d68c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d68cc: 0x461cdec1  sub.s       $f27, $f27, $f28
    ctx->pc = 0x4d68ccu;
    ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d68d0: 0xe7b30044  swc1        $f19, 0x44($sp)
    ctx->pc = 0x4d68d0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4d68d4: 0x461ff781  sub.s       $f30, $f30, $f31
    ctx->pc = 0x4d68d4u;
    ctx->f[30] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d68d8: 0xc7b3000c  lwc1        $f19, 0xC($sp)
    ctx->pc = 0x4d68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d68dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4d68dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4d68e0: 0x46074701  sub.s       $f28, $f8, $f7
    ctx->pc = 0x4d68e0u;
    ctx->f[28] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x4d68e4: 0xe7bb002c  swc1        $f27, 0x2C($sp)
    ctx->pc = 0x4d68e4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x4d68e8: 0x461d1042  mul.s       $f1, $f2, $f29
    ctx->pc = 0x4d68e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[29]);
    // 0x4d68ec: 0xe7be0030  swc1        $f30, 0x30($sp)
    ctx->pc = 0x4d68ecu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d68f0: 0x460f86c1  sub.s       $f27, $f16, $f15
    ctx->pc = 0x4d68f0u;
    ctx->f[27] = FPU_SUB_S(ctx->f[16], ctx->f[15]);
    // 0x4d68f4: 0x461a1802  mul.s       $f0, $f3, $f26
    ctx->pc = 0x4d68f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[26]);
    // 0x4d68f8: 0x46119780  add.s       $f30, $f18, $f17
    ctx->pc = 0x4d68f8u;
    ctx->f[30] = FPU_ADD_S(ctx->f[18], ctx->f[17]);
    // 0x4d68fc: 0x46095fc0  add.s       $f31, $f11, $f9
    ctx->pc = 0x4d68fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x4d6900: 0xc7b20008  lwc1        $f18, 0x8($sp)
    ctx->pc = 0x4d6900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6904: 0x461a1082  mul.s       $f2, $f2, $f26
    ctx->pc = 0x4d6904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[26]);
    // 0x4d6908: 0x461d18c2  mul.s       $f3, $f3, $f29
    ctx->pc = 0x4d6908u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[29]);
    // 0x4d690c: 0x461cdac1  sub.s       $f11, $f27, $f28
    ctx->pc = 0x4d690cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d6910: 0x461cd9c0  add.s       $f7, $f27, $f28
    ctx->pc = 0x4d6910u;
    ctx->f[7] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d6914: 0x461ff241  sub.s       $f9, $f30, $f31
    ctx->pc = 0x4d6914u;
    ctx->f[9] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d6918: 0x461ff200  add.s       $f8, $f30, $f31
    ctx->pc = 0x4d6918u;
    ctx->f[8] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d691c: 0x460526c0  add.s       $f27, $f4, $f5
    ctx->pc = 0x4d691cu;
    ctx->f[27] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x4d6920: 0x46031701  sub.s       $f28, $f2, $f3
    ctx->pc = 0x4d6920u;
    ctx->f[28] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x4d6924: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x4d6924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6928: 0x46000fc0  add.s       $f31, $f1, $f0
    ctx->pc = 0x4d6928u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d692c: 0x460a6781  sub.s       $f30, $f12, $f10
    ctx->pc = 0x4d692cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[12], ctx->f[10]);
    // 0x4d6930: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x4d6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6934: 0x461cdc01  sub.s       $f16, $f27, $f28
    ctx->pc = 0x4d6934u;
    ctx->f[16] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d6938: 0x461cda80  add.s       $f10, $f27, $f28
    ctx->pc = 0x4d6938u;
    ctx->f[10] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d693c: 0x461ff3c1  sub.s       $f15, $f30, $f31
    ctx->pc = 0x4d693cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d6940: 0x461ff300  add.s       $f12, $f30, $f31
    ctx->pc = 0x4d6940u;
    ctx->f[12] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d6944: 0x460d0ec0  add.s       $f27, $f1, $f13
    ctx->pc = 0x4d6944u;
    ctx->f[27] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x4d6948: 0x46079700  add.s       $f28, $f18, $f7
    ctx->pc = 0x4d6948u;
    ctx->f[28] = FPU_ADD_S(ctx->f[18], ctx->f[7]);
    // 0x4d694c: 0x460e2780  add.s       $f30, $f4, $f14
    ctx->pc = 0x4d694cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[4], ctx->f[14]);
    // 0x4d6950: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4d6950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6954: 0x46089fc0  add.s       $f31, $f19, $f8
    ctx->pc = 0x4d6954u;
    ctx->f[31] = FPU_ADD_S(ctx->f[19], ctx->f[8]);
    // 0x4d6958: 0x461cd881  sub.s       $f2, $f27, $f28
    ctx->pc = 0x4d6958u;
    ctx->f[2] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d695c: 0x461cd800  add.s       $f0, $f27, $f28
    ctx->pc = 0x4d695cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d6960: 0x460d26c1  sub.s       $f27, $f4, $f13
    ctx->pc = 0x4d6960u;
    ctx->f[27] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x4d6964: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x4d6964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d6968: 0x461ff0c1  sub.s       $f3, $f30, $f31
    ctx->pc = 0x4d6968u;
    ctx->f[3] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d696c: 0x461ff040  add.s       $f1, $f30, $f31
    ctx->pc = 0x4d696cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d6970: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4d6970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d6974: 0x46089fc1  sub.s       $f31, $f19, $f8
    ctx->pc = 0x4d6974u;
    ctx->f[31] = FPU_SUB_S(ctx->f[19], ctx->f[8]);
    // 0x4d6978: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x4d6978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d697c: 0x460e6f81  sub.s       $f30, $f13, $f14
    ctx->pc = 0x4d697cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
    // 0x4d6980: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x4d6980u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d6984: 0x46079701  sub.s       $f28, $f18, $f7
    ctx->pc = 0x4d6984u;
    ctx->f[28] = FPU_SUB_S(ctx->f[18], ctx->f[7]);
    // 0x4d6988: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4d6988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d698c: 0x461fd800  add.s       $f0, $f27, $f31
    ctx->pc = 0x4d698cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[31]);
    // 0x4d6990: 0x461fd881  sub.s       $f2, $f27, $f31
    ctx->pc = 0x4d6990u;
    ctx->f[2] = FPU_SUB_S(ctx->f[27], ctx->f[31]);
    // 0x4d6994: 0x461cf041  sub.s       $f1, $f30, $f28
    ctx->pc = 0x4d6994u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6998: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x4d6998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d699c: 0x461cf0c0  add.s       $f3, $f30, $f28
    ctx->pc = 0x4d699cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d69a0: 0x4609ae81  sub.s       $f26, $f21, $f9
    ctx->pc = 0x4d69a0u;
    ctx->f[26] = FPU_SUB_S(ctx->f[21], ctx->f[9]);
    // 0x4d69a4: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x4d69a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d69a8: 0x460ba740  add.s       $f29, $f20, $f11
    ctx->pc = 0x4d69a8u;
    ctx->f[29] = FPU_ADD_S(ctx->f[20], ctx->f[11]);
    // 0x4d69ac: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x4d69acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d69b0: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x4d69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d69b4: 0x461ae940  add.s       $f5, $f29, $f26
    ctx->pc = 0x4d69b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x4d69b8: 0xc7b20018  lwc1        $f18, 0x18($sp)
    ctx->pc = 0x4d69b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d69bc: 0x461dd101  sub.s       $f4, $f26, $f29
    ctx->pc = 0x4d69bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
    // 0x4d69c0: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x4d69c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d69c4: 0x4609ae80  add.s       $f26, $f21, $f9
    ctx->pc = 0x4d69c4u;
    ctx->f[26] = FPU_ADD_S(ctx->f[21], ctx->f[9]);
    // 0x4d69c8: 0x460537c2  mul.s       $f31, $f6, $f5
    ctx->pc = 0x4d69c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4d69cc: 0xc7b30014  lwc1        $f19, 0x14($sp)
    ctx->pc = 0x4d69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d69d0: 0x46043702  mul.s       $f28, $f6, $f4
    ctx->pc = 0x4d69d0u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x4d69d4: 0x461276c1  sub.s       $f27, $f14, $f18
    ctx->pc = 0x4d69d4u;
    ctx->f[27] = FPU_SUB_S(ctx->f[14], ctx->f[18]);
    // 0x4d69d8: 0x46199f80  add.s       $f30, $f19, $f25
    ctx->pc = 0x4d69d8u;
    ctx->f[30] = FPU_ADD_S(ctx->f[19], ctx->f[25]);
    // 0x4d69dc: 0x460ba741  sub.s       $f29, $f20, $f11
    ctx->pc = 0x4d69dcu;
    ctx->f[29] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x4d69e0: 0x461cd880  add.s       $f2, $f27, $f28
    ctx->pc = 0x4d69e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d69e4: 0x461ff041  sub.s       $f1, $f30, $f31
    ctx->pc = 0x4d69e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d69e8: 0x461ff0c0  add.s       $f3, $f30, $f31
    ctx->pc = 0x4d69e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d69ec: 0x461cd801  sub.s       $f0, $f27, $f28
    ctx->pc = 0x4d69ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d69f0: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x4d69f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d69f4: 0x461dd101  sub.s       $f4, $f26, $f29
    ctx->pc = 0x4d69f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
    // 0x4d69f8: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x4d69f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4d69fc: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x4d69fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d6a00: 0x46199f81  sub.s       $f30, $f19, $f25
    ctx->pc = 0x4d6a00u;
    ctx->f[30] = FPU_SUB_S(ctx->f[19], ctx->f[25]);
    // 0x4d6a04: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x4d6a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4d6a08: 0x461ae940  add.s       $f5, $f29, $f26
    ctx->pc = 0x4d6a08u;
    ctx->f[5] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x4d6a0c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x4d6a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6a10: 0x46043702  mul.s       $f28, $f6, $f4
    ctx->pc = 0x4d6a10u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x4d6a14: 0x461276c0  add.s       $f27, $f14, $f18
    ctx->pc = 0x4d6a14u;
    ctx->f[27] = FPU_ADD_S(ctx->f[14], ctx->f[18]);
    // 0x4d6a18: 0x460f0680  add.s       $f26, $f0, $f15
    ctx->pc = 0x4d6a18u;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x4d6a1c: 0x460537c2  mul.s       $f31, $f6, $f5
    ctx->pc = 0x4d6a1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4d6a20: 0x461cf001  sub.s       $f0, $f30, $f28
    ctx->pc = 0x4d6a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6a24: 0x461cf0c0  add.s       $f3, $f30, $f28
    ctx->pc = 0x4d6a24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d6a28: 0x461fd840  add.s       $f1, $f27, $f31
    ctx->pc = 0x4d6a28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[27], ctx->f[31]);
    // 0x4d6a2c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x4d6a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4d6a30: 0x461fd881  sub.s       $f2, $f27, $f31
    ctx->pc = 0x4d6a30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[27], ctx->f[31]);
    // 0x4d6a34: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x4d6a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6a38: 0xc7a7002c  lwc1        $f7, 0x2C($sp)
    ctx->pc = 0x4d6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6a3c: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x4d6a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4d6a40: 0x460726c0  add.s       $f27, $f4, $f7
    ctx->pc = 0x4d6a40u;
    ctx->f[27] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x4d6a44: 0xc7a80020  lwc1        $f8, 0x20($sp)
    ctx->pc = 0x4d6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d6a48: 0xc7a90030  lwc1        $f9, 0x30($sp)
    ctx->pc = 0x4d6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d6a4c: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x4d6a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4d6a50: 0x46094780  add.s       $f30, $f8, $f9
    ctx->pc = 0x4d6a50u;
    ctx->f[30] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x4d6a54: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x4d6a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d6a58: 0xe4830034  swc1        $f3, 0x34($a0)
    ctx->pc = 0x4d6a58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4d6a5c: 0x460a6f01  sub.s       $f28, $f13, $f10
    ctx->pc = 0x4d6a5cu;
    ctx->f[28] = FPU_SUB_S(ctx->f[13], ctx->f[10]);
    // 0x4d6a60: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x4d6a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d6a64: 0xc7b20040  lwc1        $f18, 0x40($sp)
    ctx->pc = 0x4d6a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6a68: 0x460c77c1  sub.s       $f31, $f14, $f12
    ctx->pc = 0x4d6a68u;
    ctx->f[31] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x4d6a6c: 0x461cd801  sub.s       $f0, $f27, $f28
    ctx->pc = 0x4d6a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d6a70: 0x461cd880  add.s       $f2, $f27, $f28
    ctx->pc = 0x4d6a70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d6a74: 0x461ff041  sub.s       $f1, $f30, $f31
    ctx->pc = 0x4d6a74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d6a78: 0x461ff0c0  add.s       $f3, $f30, $f31
    ctx->pc = 0x4d6a78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d6a7c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x4d6a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x4d6a80: 0x460726c1  sub.s       $f27, $f4, $f7
    ctx->pc = 0x4d6a80u;
    ctx->f[27] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x4d6a84: 0xe4820040  swc1        $f2, 0x40($a0)
    ctx->pc = 0x4d6a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x4d6a88: 0x46094781  sub.s       $f30, $f8, $f9
    ctx->pc = 0x4d6a88u;
    ctx->f[30] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x4d6a8c: 0xe481004c  swc1        $f1, 0x4C($a0)
    ctx->pc = 0x4d6a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x4d6a90: 0x460a6f00  add.s       $f28, $f13, $f10
    ctx->pc = 0x4d6a90u;
    ctx->f[28] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x4d6a94: 0xe4830044  swc1        $f3, 0x44($a0)
    ctx->pc = 0x4d6a94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x4d6a98: 0x460c77c0  add.s       $f31, $f14, $f12
    ctx->pc = 0x4d6a98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
    // 0x4d6a9c: 0x46109741  sub.s       $f29, $f18, $f16
    ctx->pc = 0x4d6a9cu;
    ctx->f[29] = FPU_SUB_S(ctx->f[18], ctx->f[16]);
    // 0x4d6aa0: 0xc7b3003c  lwc1        $f19, 0x3C($sp)
    ctx->pc = 0x4d6aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6aa4: 0x461cf041  sub.s       $f1, $f30, $f28
    ctx->pc = 0x4d6aa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6aa8: 0x461fd800  add.s       $f0, $f27, $f31
    ctx->pc = 0x4d6aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[31]);
    // 0x4d6aac: 0x461fd881  sub.s       $f2, $f27, $f31
    ctx->pc = 0x4d6aacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[27], ctx->f[31]);
    // 0x4d6ab0: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x4d6ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x4d6ab4: 0x461cf0c0  add.s       $f3, $f30, $f28
    ctx->pc = 0x4d6ab4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d6ab8: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x4d6ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x4d6abc: 0x461dd101  sub.s       $f4, $f26, $f29
    ctx->pc = 0x4d6abcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
    // 0x4d6ac0: 0xe4820050  swc1        $f2, 0x50($a0)
    ctx->pc = 0x4d6ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4d6ac4: 0x461ae940  add.s       $f5, $f29, $f26
    ctx->pc = 0x4d6ac4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x4d6ac8: 0x460f9e81  sub.s       $f26, $f19, $f15
    ctx->pc = 0x4d6ac8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[19], ctx->f[15]);
    // 0x4d6acc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x4d6accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6ad0: 0x46043702  mul.s       $f28, $f6, $f4
    ctx->pc = 0x4d6ad0u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x4d6ad4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x4d6ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6ad8: 0x460537c2  mul.s       $f31, $f6, $f5
    ctx->pc = 0x4d6ad8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4d6adc: 0xe4830054  swc1        $f3, 0x54($a0)
    ctx->pc = 0x4d6adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4d6ae0: 0x46109740  add.s       $f29, $f18, $f16
    ctx->pc = 0x4d6ae0u;
    ctx->f[29] = FPU_ADD_S(ctx->f[18], ctx->f[16]);
    // 0x4d6ae4: 0x460106c1  sub.s       $f27, $f0, $f1
    ctx->pc = 0x4d6ae4u;
    ctx->f[27] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d6ae8: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x4d6ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6aec: 0xc7a70044  lwc1        $f7, 0x44($sp)
    ctx->pc = 0x4d6aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6af0: 0x461dd141  sub.s       $f5, $f26, $f29
    ctx->pc = 0x4d6af0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
    // 0x4d6af4: 0x461cd801  sub.s       $f0, $f27, $f28
    ctx->pc = 0x4d6af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x4d6af8: 0x46072780  add.s       $f30, $f4, $f7
    ctx->pc = 0x4d6af8u;
    ctx->f[30] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x4d6afc: 0x461ae900  add.s       $f4, $f29, $f26
    ctx->pc = 0x4d6afcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[29], ctx->f[26]);
    // 0x4d6b00: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x4d6b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x4d6b04: 0x461cd880  add.s       $f2, $f27, $f28
    ctx->pc = 0x4d6b04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[27], ctx->f[28]);
    // 0x4d6b08: 0x461ff041  sub.s       $f1, $f30, $f31
    ctx->pc = 0x4d6b08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d6b0c: 0xc7a80034  lwc1        $f8, 0x34($sp)
    ctx->pc = 0x4d6b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d6b10: 0xc7a90048  lwc1        $f9, 0x48($sp)
    ctx->pc = 0x4d6b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d6b14: 0x461ff0c0  add.s       $f3, $f30, $f31
    ctx->pc = 0x4d6b14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d6b18: 0x460437c2  mul.s       $f31, $f6, $f4
    ctx->pc = 0x4d6b18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x4d6b1c: 0xc7bd00e8  lwc1        $f29, 0xE8($sp)
    ctx->pc = 0x4d6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x4d6b20: 0xe481006c  swc1        $f1, 0x6C($a0)
    ctx->pc = 0x4d6b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x4d6b24: 0x460946c0  add.s       $f27, $f8, $f9
    ctx->pc = 0x4d6b24u;
    ctx->f[27] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x4d6b28: 0x46053702  mul.s       $f28, $f6, $f5
    ctx->pc = 0x4d6b28u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4d6b2c: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x4d6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d6b30: 0xc7aa0038  lwc1        $f10, 0x38($sp)
    ctx->pc = 0x4d6b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d6b34: 0xe4820060  swc1        $f2, 0x60($a0)
    ctx->pc = 0x4d6b34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x4d6b38: 0x461fd800  add.s       $f0, $f27, $f31
    ctx->pc = 0x4d6b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[31]);
    // 0x4d6b3c: 0x46075781  sub.s       $f30, $f10, $f7
    ctx->pc = 0x4d6b3cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
    // 0x4d6b40: 0xe4830064  swc1        $f3, 0x64($a0)
    ctx->pc = 0x4d6b40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x4d6b44: 0x461fd881  sub.s       $f2, $f27, $f31
    ctx->pc = 0x4d6b44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[27], ctx->f[31]);
    // 0x4d6b48: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x4d6b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d6b4c: 0xc7bf00f8  lwc1        $f31, 0xF8($sp)
    ctx->pc = 0x4d6b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x4d6b50: 0x461cf041  sub.s       $f1, $f30, $f28
    ctx->pc = 0x4d6b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6b54: 0xc7bb00d8  lwc1        $f27, 0xD8($sp)
    ctx->pc = 0x4d6b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d6b58: 0x461cf0c0  add.s       $f3, $f30, $f28
    ctx->pc = 0x4d6b58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d6b5c: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x4d6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d6b60: 0xc7be00f0  lwc1        $f30, 0xF0($sp)
    ctx->pc = 0x4d6b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x4d6b64: 0xc7bc00e0  lwc1        $f28, 0xE0($sp)
    ctx->pc = 0x4d6b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x4d6b68: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x4d6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d6b6c: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x4d6b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d6b70: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x4d6b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d6b74: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x4d6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d6b78: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x4d6b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x4d6b7c: 0xe481007c  swc1        $f1, 0x7C($a0)
    ctx->pc = 0x4d6b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x4d6b80: 0xe4820070  swc1        $f2, 0x70($a0)
    ctx->pc = 0x4d6b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x4d6b84: 0xe4830074  swc1        $f3, 0x74($a0)
    ctx->pc = 0x4d6b84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x4d6b88: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6B88u;
        // 0x4d6b8c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D6B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D6B90u;
}
