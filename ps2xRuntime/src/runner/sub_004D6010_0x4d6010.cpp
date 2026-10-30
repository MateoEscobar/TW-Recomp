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

// Function: sub_004D6010
// Address: 0x4d6010 - 0x4d64f0
void sub_004D6010_0x4d6010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6010_0x4d6010");
#endif

    ctx->pc = 0x4d6010u;

    // 0x4d6010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4d6010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4d6014: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4d6014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6018: 0xe7bf00a8  swc1        $f31, 0xA8($sp)
    ctx->pc = 0x4d6018u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x4d601c: 0xe7be00a0  swc1        $f30, 0xA0($sp)
    ctx->pc = 0x4d601cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x4d6020: 0xe7bd0098  swc1        $f29, 0x98($sp)
    ctx->pc = 0x4d6020u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4d6024: 0xe7bc0090  swc1        $f28, 0x90($sp)
    ctx->pc = 0x4d6024u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4d6028: 0xe7bb0088  swc1        $f27, 0x88($sp)
    ctx->pc = 0x4d6028u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x4d602c: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x4d602cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x4d6030: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x4d6030u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x4d6034: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x4d6034u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4d6038: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x4d6038u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4d603c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x4d603cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4d6040: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x4d6040u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4d6044: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x4d6044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d6048: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x4d6048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d604c: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x4d604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d6050: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x4d6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d6054: 0x46000f80  add.s       $f30, $f1, $f0
    ctx->pc = 0x4d6054u;
    ctx->f[30] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d6058: 0x46000e01  sub.s       $f24, $f1, $f0
    ctx->pc = 0x4d6058u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d605c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x4d605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6060: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x4d6060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6064: 0x46022f00  add.s       $f28, $f5, $f2
    ctx->pc = 0x4d6064u;
    ctx->f[28] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x4d6068: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x4d6068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d606c: 0x46022e81  sub.s       $f26, $f5, $f2
    ctx->pc = 0x4d606cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x4d6070: 0xc4830044  lwc1        $f3, 0x44($a0)
    ctx->pc = 0x4d6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6074: 0x46000ec1  sub.s       $f27, $f1, $f0
    ctx->pc = 0x4d6074u;
    ctx->f[27] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d6078: 0xc4890008  lwc1        $f9, 0x8($a0)
    ctx->pc = 0x4d6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d607c: 0x46000f40  add.s       $f29, $f1, $f0
    ctx->pc = 0x4d607cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d6080: 0xc4870048  lwc1        $f7, 0x48($a0)
    ctx->pc = 0x4d6080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6084: 0x461cf001  sub.s       $f0, $f30, $f28
    ctx->pc = 0x4d6084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6088: 0xc488000c  lwc1        $f8, 0xC($a0)
    ctx->pc = 0x4d6088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d608c: 0x460327c0  add.s       $f31, $f4, $f3
    ctx->pc = 0x4d608cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x4d6090: 0x46032641  sub.s       $f25, $f4, $f3
    ctx->pc = 0x4d6090u;
    ctx->f[25] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x4d6094: 0xc484004c  lwc1        $f4, 0x4C($a0)
    ctx->pc = 0x4d6094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6098: 0x461cf780  add.s       $f30, $f30, $f28
    ctx->pc = 0x4d6098u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d609c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d609cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d60a0: 0x461df841  sub.s       $f1, $f31, $f29
    ctx->pc = 0x4d60a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d60a4: 0x461dffc0  add.s       $f31, $f31, $f29
    ctx->pc = 0x4d60a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d60a8: 0xc4850028  lwc1        $f5, 0x28($a0)
    ctx->pc = 0x4d60a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d60ac: 0x461bc180  add.s       $f6, $f24, $f27
    ctx->pc = 0x4d60acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d60b0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d60b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d60b4: 0x461accc1  sub.s       $f19, $f25, $f26
    ctx->pc = 0x4d60b4u;
    ctx->f[19] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d60b8: 0x461bc601  sub.s       $f24, $f24, $f27
    ctx->pc = 0x4d60b8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d60bc: 0xc4820068  lwc1        $f2, 0x68($a0)
    ctx->pc = 0x4d60bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d60c0: 0x461ace40  add.s       $f25, $f25, $f26
    ctx->pc = 0x4d60c0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d60c4: 0xe7be0000  swc1        $f30, 0x0($sp)
    ctx->pc = 0x4d60c4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d60c8: 0x46074f80  add.s       $f30, $f9, $f7
    ctx->pc = 0x4d60c8u;
    ctx->f[30] = FPU_ADD_S(ctx->f[9], ctx->f[7]);
    // 0x4d60cc: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x4d60ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d60d0: 0x46022f00  add.s       $f28, $f5, $f2
    ctx->pc = 0x4d60d0u;
    ctx->f[28] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x4d60d4: 0xe7bf0004  swc1        $f31, 0x4($sp)
    ctx->pc = 0x4d60d4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4d60d8: 0x46022e81  sub.s       $f26, $f5, $f2
    ctx->pc = 0x4d60d8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x4d60dc: 0x460447c0  add.s       $f31, $f8, $f4
    ctx->pc = 0x4d60dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x4d60e0: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x4d60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d60e4: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x4d60e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d60e8: 0x46011ec1  sub.s       $f27, $f3, $f1
    ctx->pc = 0x4d60e8u;
    ctx->f[27] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x4d60ec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4d60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d60f0: 0x46011f40  add.s       $f29, $f3, $f1
    ctx->pc = 0x4d60f0u;
    ctx->f[29] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x4d60f4: 0xe7b30044  swc1        $f19, 0x44($sp)
    ctx->pc = 0x4d60f4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4d60f8: 0x461cf041  sub.s       $f1, $f30, $f28
    ctx->pc = 0x4d60f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d60fc: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x4d60fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d6100: 0x461cf780  add.s       $f30, $f30, $f28
    ctx->pc = 0x4d6100u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d6104: 0xe7b80038  swc1        $f24, 0x38($sp)
    ctx->pc = 0x4d6104u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d6108: 0x461df8c1  sub.s       $f3, $f31, $f29
    ctx->pc = 0x4d6108u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d610c: 0xe7b9003c  swc1        $f25, 0x3C($sp)
    ctx->pc = 0x4d610cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x4d6110: 0x46074e01  sub.s       $f24, $f9, $f7
    ctx->pc = 0x4d6110u;
    ctx->f[24] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x4d6114: 0x46044641  sub.s       $f25, $f8, $f4
    ctx->pc = 0x4d6114u;
    ctx->f[25] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x4d6118: 0xc4940010  lwc1        $f20, 0x10($a0)
    ctx->pc = 0x4d6118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d611c: 0x461dffc0  add.s       $f31, $f31, $f29
    ctx->pc = 0x4d611cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d6120: 0xc4920050  lwc1        $f18, 0x50($a0)
    ctx->pc = 0x4d6120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d6124: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x4d6124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4d6128: 0xc4910014  lwc1        $f17, 0x14($a0)
    ctx->pc = 0x4d6128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d612c: 0xc48c0054  lwc1        $f12, 0x54($a0)
    ctx->pc = 0x4d612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d6130: 0xc48b0030  lwc1        $f11, 0x30($a0)
    ctx->pc = 0x4d6130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d6134: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x4d6134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4d6138: 0xc48a0070  lwc1        $f10, 0x70($a0)
    ctx->pc = 0x4d6138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d613c: 0xc4870034  lwc1        $f7, 0x34($a0)
    ctx->pc = 0x4d613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6140: 0xc4840074  lwc1        $f4, 0x74($a0)
    ctx->pc = 0x4d6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6144: 0x460a5f00  add.s       $f28, $f11, $f10
    ctx->pc = 0x4d6144u;
    ctx->f[28] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x4d6148: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x4d6148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d614c: 0x46043f40  add.s       $f29, $f7, $f4
    ctx->pc = 0x4d614cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x4d6150: 0xc493001c  lwc1        $f19, 0x1C($a0)
    ctx->pc = 0x4d6150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6154: 0xe7be0008  swc1        $f30, 0x8($sp)
    ctx->pc = 0x4d6154u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4d6158: 0xe7bf000c  swc1        $f31, 0xC($sp)
    ctx->pc = 0x4d6158u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4d615c: 0x461bc781  sub.s       $f30, $f24, $f27
    ctx->pc = 0x4d615cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d6160: 0x461acfc0  add.s       $f31, $f25, $f26
    ctx->pc = 0x4d6160u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d6164: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x4d6164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x4d6168: 0x461e10c2  mul.s       $f3, $f2, $f30
    ctx->pc = 0x4d6168u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d616c: 0xc4890078  lwc1        $f9, 0x78($a0)
    ctx->pc = 0x4d616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d6170: 0x461f1542  mul.s       $f21, $f2, $f31
    ctx->pc = 0x4d6170u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[31]);
    // 0x4d6174: 0xc485003c  lwc1        $f5, 0x3C($a0)
    ctx->pc = 0x4d6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d6178: 0x461f0402  mul.s       $f16, $f0, $f31
    ctx->pc = 0x4d6178u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x4d617c: 0xc481007c  lwc1        $f1, 0x7C($a0)
    ctx->pc = 0x4d617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6180: 0x461e03c2  mul.s       $f15, $f0, $f30
    ctx->pc = 0x4d6180u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
    // 0x4d6184: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x4d6184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4d6188: 0x461bc780  add.s       $f30, $f24, $f27
    ctx->pc = 0x4d6188u;
    ctx->f[30] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d618c: 0x461acfc1  sub.s       $f31, $f25, $f26
    ctx->pc = 0x4d618cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d6190: 0x46043ec1  sub.s       $f27, $f7, $f4
    ctx->pc = 0x4d6190u;
    ctx->f[27] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x4d6194: 0x461e0582  mul.s       $f22, $f0, $f30
    ctx->pc = 0x4d6194u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
    // 0x4d6198: 0x461f05c2  mul.s       $f23, $f0, $f31
    ctx->pc = 0x4d6198u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x4d619c: 0x461f1382  mul.s       $f14, $f2, $f31
    ctx->pc = 0x4d619cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[31]);
    // 0x4d61a0: 0x461e1342  mul.s       $f13, $f2, $f30
    ctx->pc = 0x4d61a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d61a4: 0x4612a780  add.s       $f30, $f20, $f18
    ctx->pc = 0x4d61a4u;
    ctx->f[30] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x4d61a8: 0x460c8fc0  add.s       $f31, $f17, $f12
    ctx->pc = 0x4d61a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[17], ctx->f[12]);
    // 0x4d61ac: 0x4612a601  sub.s       $f24, $f20, $f18
    ctx->pc = 0x4d61acu;
    ctx->f[24] = FPU_SUB_S(ctx->f[20], ctx->f[18]);
    // 0x4d61b0: 0x461cf101  sub.s       $f4, $f30, $f28
    ctx->pc = 0x4d61b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d61b4: 0x461df9c1  sub.s       $f7, $f31, $f29
    ctx->pc = 0x4d61b4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d61b8: 0x461cf780  add.s       $f30, $f30, $f28
    ctx->pc = 0x4d61b8u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d61bc: 0x461dffc0  add.s       $f31, $f31, $f29
    ctx->pc = 0x4d61bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d61c0: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x4d61c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d61c4: 0x460c8e41  sub.s       $f25, $f17, $f12
    ctx->pc = 0x4d61c4u;
    ctx->f[25] = FPU_SUB_S(ctx->f[17], ctx->f[12]);
    // 0x4d61c8: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x4d61c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4d61cc: 0x460a5e81  sub.s       $f26, $f11, $f10
    ctx->pc = 0x4d61ccu;
    ctx->f[26] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x4d61d0: 0xe7be0010  swc1        $f30, 0x10($sp)
    ctx->pc = 0x4d61d0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d61d4: 0xe7bf0014  swc1        $f31, 0x14($sp)
    ctx->pc = 0x4d61d4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4d61d8: 0x461bc781  sub.s       $f30, $f24, $f27
    ctx->pc = 0x4d61d8u;
    ctx->f[30] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d61dc: 0x46012f40  add.s       $f29, $f5, $f1
    ctx->pc = 0x4d61dcu;
    ctx->f[29] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x4d61e0: 0x461acfc0  add.s       $f31, $f25, $f26
    ctx->pc = 0x4d61e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d61e4: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x4d61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d61e8: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x4d61e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d61ec: 0x46176b41  sub.s       $f13, $f13, $f23
    ctx->pc = 0x4d61ecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x4d61f0: 0x46091f00  add.s       $f28, $f3, $f9
    ctx->pc = 0x4d61f0u;
    ctx->f[28] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x4d61f4: 0xc4870058  lwc1        $f7, 0x58($a0)
    ctx->pc = 0x4d61f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d61f8: 0x461efb00  add.s       $f12, $f31, $f30
    ctx->pc = 0x4d61f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], ctx->f[30]);
    // 0x4d61fc: 0xc483005c  lwc1        $f3, 0x5C($a0)
    ctx->pc = 0x4d61fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6200: 0x461ff2c1  sub.s       $f11, $f30, $f31
    ctx->pc = 0x4d6200u;
    ctx->f[11] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d6204: 0x461bc780  add.s       $f30, $f24, $f27
    ctx->pc = 0x4d6204u;
    ctx->f[30] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d6208: 0x461acfc1  sub.s       $f31, $f25, $f26
    ctx->pc = 0x4d6208u;
    ctx->f[31] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d620c: 0x46039e41  sub.s       $f25, $f19, $f3
    ctx->pc = 0x4d620cu;
    ctx->f[25] = FPU_SUB_S(ctx->f[19], ctx->f[3]);
    // 0x4d6210: 0x46072601  sub.s       $f24, $f4, $f7
    ctx->pc = 0x4d6210u;
    ctx->f[24] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x4d6214: 0x461efa01  sub.s       $f8, $f31, $f30
    ctx->pc = 0x4d6214u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], ctx->f[30]);
    // 0x4d6218: 0x461ff0c0  add.s       $f3, $f30, $f31
    ctx->pc = 0x4d6218u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[31]);
    // 0x4d621c: 0x46072780  add.s       $f30, $f4, $f7
    ctx->pc = 0x4d621cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x4d6220: 0xc484005c  lwc1        $f4, 0x5C($a0)
    ctx->pc = 0x4d6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6224: 0x46012ec1  sub.s       $f27, $f5, $f1
    ctx->pc = 0x4d6224u;
    ctx->f[27] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x4d6228: 0xc4870038  lwc1        $f7, 0x38($a0)
    ctx->pc = 0x4d6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d622c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x4d622cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4d6230: 0x46049fc0  add.s       $f31, $f19, $f4
    ctx->pc = 0x4d6230u;
    ctx->f[31] = FPU_ADD_S(ctx->f[19], ctx->f[4]);
    // 0x4d6234: 0x461cf481  sub.s       $f18, $f30, $f28
    ctx->pc = 0x4d6234u;
    ctx->f[18] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6238: 0xc7b30040  lwc1        $f19, 0x40($sp)
    ctx->pc = 0x4d6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d623c: 0x461cf780  add.s       $f30, $f30, $f28
    ctx->pc = 0x4d623cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d6240: 0x461dfc41  sub.s       $f17, $f31, $f29
    ctx->pc = 0x4d6240u;
    ctx->f[17] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d6244: 0x461dffc0  add.s       $f31, $f31, $f29
    ctx->pc = 0x4d6244u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d6248: 0x46093e81  sub.s       $f26, $f7, $f9
    ctx->pc = 0x4d6248u;
    ctx->f[26] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x4d624c: 0xe7be0018  swc1        $f30, 0x18($sp)
    ctx->pc = 0x4d624cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d6250: 0x461bc781  sub.s       $f30, $f24, $f27
    ctx->pc = 0x4d6250u;
    ctx->f[30] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d6254: 0xe7bf001c  swc1        $f31, 0x1C($sp)
    ctx->pc = 0x4d6254u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4d6258: 0x46167380  add.s       $f14, $f14, $f22
    ctx->pc = 0x4d6258u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[22]);
    // 0x4d625c: 0x461acfc0  add.s       $f31, $f25, $f26
    ctx->pc = 0x4d625cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d6260: 0x461e01c2  mul.s       $f7, $f0, $f30
    ctx->pc = 0x4d6260u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
    // 0x4d6264: 0x461e1242  mul.s       $f9, $f2, $f30
    ctx->pc = 0x4d6264u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d6268: 0x461f0102  mul.s       $f4, $f0, $f31
    ctx->pc = 0x4d6268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x4d626c: 0x461f1282  mul.s       $f10, $f2, $f31
    ctx->pc = 0x4d626cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[31]);
    // 0x4d6270: 0x461bc780  add.s       $f30, $f24, $f27
    ctx->pc = 0x4d6270u;
    ctx->f[30] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d6274: 0x461acfc1  sub.s       $f31, $f25, $f26
    ctx->pc = 0x4d6274u;
    ctx->f[31] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d6278: 0x46083202  mul.s       $f8, $f6, $f8
    ctx->pc = 0x4d6278u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x4d627c: 0x461e1042  mul.s       $f1, $f2, $f30
    ctx->pc = 0x4d627cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x4d6280: 0x461f0142  mul.s       $f5, $f0, $f31
    ctx->pc = 0x4d6280u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[31]);
    // 0x4d6284: 0x461f1082  mul.s       $f2, $f2, $f31
    ctx->pc = 0x4d6284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[31]);
    // 0x4d6288: 0x461e0002  mul.s       $f0, $f0, $f30
    ctx->pc = 0x4d6288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
    // 0x4d628c: 0x46039f81  sub.s       $f30, $f19, $f3
    ctx->pc = 0x4d628cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[19], ctx->f[3]);
    // 0x4d6290: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x4d6290u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x4d6294: 0xc7b30048  lwc1        $f19, 0x48($sp)
    ctx->pc = 0x4d6294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6298: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4d6298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4d629c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x4d629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d62a0: 0x46138400  add.s       $f16, $f16, $f19
    ctx->pc = 0x4d62a0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[19]);
    // 0x4d62a4: 0x46080fc1  sub.s       $f31, $f1, $f8
    ctx->pc = 0x4d62a4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x4d62a8: 0xc7b30038  lwc1        $f19, 0x38($sp)
    ctx->pc = 0x4d62a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d62ac: 0x46006f01  sub.s       $f28, $f13, $f0
    ctx->pc = 0x4d62acu;
    ctx->f[28] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x4d62b0: 0x46057741  sub.s       $f29, $f14, $f5
    ctx->pc = 0x4d62b0u;
    ctx->f[29] = FPU_SUB_S(ctx->f[14], ctx->f[5]);
    // 0x4d62b4: 0x460b32c2  mul.s       $f11, $f6, $f11
    ctx->pc = 0x4d62b4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x4d62b8: 0x46044a41  sub.s       $f9, $f9, $f4
    ctx->pc = 0x4d62b8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[4]);
    // 0x4d62bc: 0x461cf101  sub.s       $f4, $f30, $f28
    ctx->pc = 0x4d62bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d62c0: 0x461cf040  add.s       $f1, $f30, $f28
    ctx->pc = 0x4d62c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d62c4: 0x460b9f80  add.s       $f30, $f19, $f11
    ctx->pc = 0x4d62c4u;
    ctx->f[30] = FPU_ADD_S(ctx->f[19], ctx->f[11]);
    // 0x4d62c8: 0x461df880  add.s       $f2, $f31, $f29
    ctx->pc = 0x4d62c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d62cc: 0xc7b3003c  lwc1        $f19, 0x3C($sp)
    ctx->pc = 0x4d62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d62d0: 0xe4810060  swc1        $f1, 0x60($a0)
    ctx->pc = 0x4d62d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x4d62d4: 0x46157bc1  sub.s       $f15, $f15, $f21
    ctx->pc = 0x4d62d4u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[21]);
    // 0x4d62d8: 0xe4840068  swc1        $f4, 0x68($a0)
    ctx->pc = 0x4d62d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x4d62dc: 0x46075280  add.s       $f10, $f10, $f7
    ctx->pc = 0x4d62dcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
    // 0x4d62e0: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x4d62e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x4d62e4: 0x460c3302  mul.s       $f12, $f6, $f12
    ctx->pc = 0x4d62e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x4d62e8: 0x46097f00  add.s       $f28, $f15, $f9
    ctx->pc = 0x4d62e8u;
    ctx->f[28] = FPU_ADD_S(ctx->f[15], ctx->f[9]);
    // 0x4d62ec: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x4d62ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d62f0: 0x461df9c1  sub.s       $f7, $f31, $f29
    ctx->pc = 0x4d62f0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d62f4: 0x460c9fc0  add.s       $f31, $f19, $f12
    ctx->pc = 0x4d62f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[19], ctx->f[12]);
    // 0x4d62f8: 0x46030e00  add.s       $f24, $f1, $f3
    ctx->pc = 0x4d62f8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4d62fc: 0x460a8740  add.s       $f29, $f16, $f10
    ctx->pc = 0x4d62fcu;
    ctx->f[29] = FPU_ADD_S(ctx->f[16], ctx->f[10]);
    // 0x4d6300: 0xe487006c  swc1        $f7, 0x6C($a0)
    ctx->pc = 0x4d6300u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x4d6304: 0x461cf041  sub.s       $f1, $f30, $f28
    ctx->pc = 0x4d6304u;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6308: 0x461cf0c0  add.s       $f3, $f30, $f28
    ctx->pc = 0x4d6308u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d630c: 0x461df881  sub.s       $f2, $f31, $f29
    ctx->pc = 0x4d630cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d6310: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x4d6310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x4d6314: 0x460576c0  add.s       $f27, $f14, $f5
    ctx->pc = 0x4d6314u;
    ctx->f[27] = FPU_ADD_S(ctx->f[14], ctx->f[5]);
    // 0x4d6318: 0x461df900  add.s       $f4, $f31, $f29
    ctx->pc = 0x4d6318u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d631c: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x4d631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6320: 0x46006e80  add.s       $f26, $f13, $f0
    ctx->pc = 0x4d6320u;
    ctx->f[26] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x4d6324: 0xe482004c  swc1        $f2, 0x4C($a0)
    ctx->pc = 0x4d6324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x4d6328: 0x461bc000  add.s       $f0, $f24, $f27
    ctx->pc = 0x4d6328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d632c: 0x46113f81  sub.s       $f30, $f7, $f17
    ctx->pc = 0x4d632cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[7], ctx->f[17]);
    // 0x4d6330: 0xc7b3002c  lwc1        $f19, 0x2C($sp)
    ctx->pc = 0x4d6330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6334: 0x461bc081  sub.s       $f2, $f24, $f27
    ctx->pc = 0x4d6334u;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d6338: 0xe4830040  swc1        $f3, 0x40($a0)
    ctx->pc = 0x4d6338u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x4d633c: 0x460a86c1  sub.s       $f27, $f16, $f10
    ctx->pc = 0x4d633cu;
    ctx->f[27] = FPU_SUB_S(ctx->f[16], ctx->f[10]);
    // 0x4d6340: 0x46129fc0  add.s       $f31, $f19, $f18
    ctx->pc = 0x4d6340u;
    ctx->f[31] = FPU_ADD_S(ctx->f[19], ctx->f[18]);
    // 0x4d6344: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x4d6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6348: 0xe4840044  swc1        $f4, 0x44($a0)
    ctx->pc = 0x4d6348u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x4d634c: 0x46080e40  add.s       $f25, $f1, $f8
    ctx->pc = 0x4d634cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x4d6350: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x4d6350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6354: 0x461efa00  add.s       $f8, $f31, $f30
    ctx->pc = 0x4d6354u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], ctx->f[30]);
    // 0x4d6358: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x4d6358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x4d635c: 0x461ff1c1  sub.s       $f7, $f30, $f31
    ctx->pc = 0x4d635cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d6360: 0x461ac841  sub.s       $f1, $f25, $f26
    ctx->pc = 0x4d6360u;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d6364: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x4d6364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6368: 0x46129fc1  sub.s       $f31, $f19, $f18
    ctx->pc = 0x4d6368u;
    ctx->f[31] = FPU_SUB_S(ctx->f[19], ctx->f[18]);
    // 0x4d636c: 0x46111f80  add.s       $f30, $f3, $f17
    ctx->pc = 0x4d636cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[3], ctx->f[17]);
    // 0x4d6370: 0xe481007c  swc1        $f1, 0x7C($a0)
    ctx->pc = 0x4d6370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x4d6374: 0x461ac8c0  add.s       $f3, $f25, $f26
    ctx->pc = 0x4d6374u;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d6378: 0x460b2601  sub.s       $f24, $f4, $f11
    ctx->pc = 0x4d6378u;
    ctx->f[24] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x4d637c: 0xc7b3003c  lwc1        $f19, 0x3C($sp)
    ctx->pc = 0x4d637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6380: 0x46097e81  sub.s       $f26, $f15, $f9
    ctx->pc = 0x4d6380u;
    ctx->f[26] = FPU_SUB_S(ctx->f[15], ctx->f[9]);
    // 0x4d6384: 0xe4820070  swc1        $f2, 0x70($a0)
    ctx->pc = 0x4d6384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x4d6388: 0x461ff141  sub.s       $f5, $f30, $f31
    ctx->pc = 0x4d6388u;
    ctx->f[5] = FPU_SUB_S(ctx->f[30], ctx->f[31]);
    // 0x4d638c: 0x460c9e41  sub.s       $f25, $f19, $f12
    ctx->pc = 0x4d638cu;
    ctx->f[25] = FPU_SUB_S(ctx->f[19], ctx->f[12]);
    // 0x4d6390: 0xe4830074  swc1        $f3, 0x74($a0)
    ctx->pc = 0x4d6390u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x4d6394: 0x461bc000  add.s       $f0, $f24, $f27
    ctx->pc = 0x4d6394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d6398: 0x461bc081  sub.s       $f2, $f24, $f27
    ctx->pc = 0x4d6398u;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d639c: 0x461ac841  sub.s       $f1, $f25, $f26
    ctx->pc = 0x4d639cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d63a0: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x4d63a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x4d63a4: 0x461ef8c0  add.s       $f3, $f31, $f30
    ctx->pc = 0x4d63a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], ctx->f[30]);
    // 0x4d63a8: 0x461ac900  add.s       $f4, $f25, $f26
    ctx->pc = 0x4d63a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d63ac: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x4d63acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x4d63b0: 0x46073702  mul.s       $f28, $f6, $f7
    ctx->pc = 0x4d63b0u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x4d63b4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x4d63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d63b8: 0x460336c2  mul.s       $f27, $f6, $f3
    ctx->pc = 0x4d63b8u;
    ctx->f[27] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4d63bc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x4d63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d63c0: 0x46083742  mul.s       $f29, $f6, $f8
    ctx->pc = 0x4d63c0u;
    ctx->f[29] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x4d63c4: 0xe4820050  swc1        $f2, 0x50($a0)
    ctx->pc = 0x4d63c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4d63c8: 0x46053682  mul.s       $f26, $f6, $f5
    ctx->pc = 0x4d63c8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x4d63cc: 0x46010600  add.s       $f24, $f0, $f1
    ctx->pc = 0x4d63ccu;
    ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4d63d0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x4d63d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d63d4: 0x46010781  sub.s       $f30, $f0, $f1
    ctx->pc = 0x4d63d4u;
    ctx->f[30] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d63d8: 0xc7b30030  lwc1        $f19, 0x30($sp)
    ctx->pc = 0x4d63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d63dc: 0xe4840054  swc1        $f4, 0x54($a0)
    ctx->pc = 0x4d63dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4d63e0: 0x461bc000  add.s       $f0, $f24, $f27
    ctx->pc = 0x4d63e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d63e4: 0x46131fc0  add.s       $f31, $f3, $f19
    ctx->pc = 0x4d63e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[19]);
    // 0x4d63e8: 0x46131e41  sub.s       $f25, $f3, $f19
    ctx->pc = 0x4d63e8u;
    ctx->f[25] = FPU_SUB_S(ctx->f[3], ctx->f[19]);
    // 0x4d63ec: 0x461cf041  sub.s       $f1, $f30, $f28
    ctx->pc = 0x4d63ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d63f0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x4d63f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4d63f4: 0x461df881  sub.s       $f2, $f31, $f29
    ctx->pc = 0x4d63f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d63f8: 0x461ac8c1  sub.s       $f3, $f25, $f26
    ctx->pc = 0x4d63f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d63fc: 0x461cf100  add.s       $f4, $f30, $f28
    ctx->pc = 0x4d63fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d6400: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x4d6400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4d6404: 0xe482002c  swc1        $f2, 0x2C($a0)
    ctx->pc = 0x4d6404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4d6408: 0x461df800  add.s       $f0, $f31, $f29
    ctx->pc = 0x4d6408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d640c: 0xe483003c  swc1        $f3, 0x3C($a0)
    ctx->pc = 0x4d640cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4d6410: 0x461bc041  sub.s       $f1, $f24, $f27
    ctx->pc = 0x4d6410u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d6414: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x4d6414u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d6418: 0x461ac880  add.s       $f2, $f25, $f26
    ctx->pc = 0x4d6418u;
    ctx->f[2] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d641c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x4d641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6420: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x4d6420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6424: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x4d6424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d6428: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x4d6428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d642c: 0x46041e01  sub.s       $f24, $f3, $f4
    ctx->pc = 0x4d642cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x4d6430: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x4d6430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6434: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x4d6434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4d6438: 0x46073641  sub.s       $f25, $f6, $f7
    ctx->pc = 0x4d6438u;
    ctx->f[25] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x4d643c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x4d643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d6440: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x4d6440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6444: 0xc7b30008  lwc1        $f19, 0x8($sp)
    ctx->pc = 0x4d6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6448: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x4d6448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4d644c: 0x46009e81  sub.s       $f26, $f19, $f0
    ctx->pc = 0x4d644cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[19], ctx->f[0]);
    // 0x4d6450: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x4d6450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d6454: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x4d6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6458: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x4d6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d645c: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x4d645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d6460: 0x46030ec1  sub.s       $f27, $f1, $f3
    ctx->pc = 0x4d6460u;
    ctx->f[27] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4d6464: 0xc7b30004  lwc1        $f19, 0x4($sp)
    ctx->pc = 0x4d6464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d6468: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4d6468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d646c: 0x46043780  add.s       $f30, $f6, $f4
    ctx->pc = 0x4d646cu;
    ctx->f[30] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x4d6470: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x4d6470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6474: 0x46079fc0  add.s       $f31, $f19, $f7
    ctx->pc = 0x4d6474u;
    ctx->f[31] = FPU_ADD_S(ctx->f[19], ctx->f[7]);
    // 0x4d6478: 0x46000f00  add.s       $f28, $f1, $f0
    ctx->pc = 0x4d6478u;
    ctx->f[28] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d647c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x4d647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d6480: 0x461bc000  add.s       $f0, $f24, $f27
    ctx->pc = 0x4d6480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x4d6484: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x4d6484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d6488: 0x46032740  add.s       $f29, $f4, $f3
    ctx->pc = 0x4d6488u;
    ctx->f[29] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x4d648c: 0x461cf041  sub.s       $f1, $f30, $f28
    ctx->pc = 0x4d648cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[30], ctx->f[28]);
    // 0x4d6490: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x4d6490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d6494: 0x461ac901  sub.s       $f4, $f25, $f26
    ctx->pc = 0x4d6494u;
    ctx->f[4] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x4d6498: 0x461df881  sub.s       $f2, $f31, $f29
    ctx->pc = 0x4d6498u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], ctx->f[29]);
    // 0x4d649c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4d649cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d64a0: 0x461cf140  add.s       $f5, $f30, $f28
    ctx->pc = 0x4d64a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x4d64a4: 0x461df8c0  add.s       $f3, $f31, $f29
    ctx->pc = 0x4d64a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], ctx->f[29]);
    // 0x4d64a8: 0xc7be00a0  lwc1        $f30, 0xA0($sp)
    ctx->pc = 0x4d64a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x4d64ac: 0x461bc041  sub.s       $f1, $f24, $f27
    ctx->pc = 0x4d64acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[27]);
    // 0x4d64b0: 0xc7bf00a8  lwc1        $f31, 0xA8($sp)
    ctx->pc = 0x4d64b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x4d64b4: 0x461ac800  add.s       $f0, $f25, $f26
    ctx->pc = 0x4d64b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x4d64b8: 0xc7bd0098  lwc1        $f29, 0x98($sp)
    ctx->pc = 0x4d64b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x4d64bc: 0xc7bc0090  lwc1        $f28, 0x90($sp)
    ctx->pc = 0x4d64bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x4d64c0: 0xc7bb0088  lwc1        $f27, 0x88($sp)
    ctx->pc = 0x4d64c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d64c4: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x4d64c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d64c8: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x4d64c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d64cc: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x4d64ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d64d0: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x4d64d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d64d4: 0xe484001c  swc1        $f4, 0x1C($a0)
    ctx->pc = 0x4d64d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d64d8: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x4d64d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d64dc: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x4d64dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d64e0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x4d64e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d64e4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x4d64e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d64e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D64E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D64E8u;
        // 0x4d64ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D64E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D64F0u;
}
