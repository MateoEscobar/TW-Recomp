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

// Function: sub_004D6B90
// Address: 0x4d6b90 - 0x4d6d48
void sub_004D6B90_0x4d6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6B90_0x4d6b90");
#endif

    ctx->pc = 0x4d6b90u;

    // 0x4d6b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d6b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d6b94: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4d6b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6b98: 0xe7bc0040  swc1        $f28, 0x40($sp)
    ctx->pc = 0x4d6b98u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d6b9c: 0xe7bb0038  swc1        $f27, 0x38($sp)
    ctx->pc = 0x4d6b9cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d6ba0: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x4d6ba0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d6ba4: 0xe7b90028  swc1        $f25, 0x28($sp)
    ctx->pc = 0x4d6ba4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d6ba8: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x4d6ba8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d6bac: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x4d6bacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d6bb0: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x4d6bb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d6bb4: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x4d6bb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4d6bb8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d6bb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d6bbc: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x4d6bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6bc0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x4d6bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6bc4: 0x46000e00  add.s       $f24, $f1, $f0
    ctx->pc = 0x4d6bc4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d6bc8: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x4d6bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6bcc: 0x46000f01  sub.s       $f28, $f1, $f0
    ctx->pc = 0x4d6bccu;
    ctx->f[28] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d6bd0: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x4d6bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d6bd4: 0xc4820030  lwc1        $f2, 0x30($a0)
    ctx->pc = 0x4d6bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d6bd8: 0x460325c0  add.s       $f23, $f4, $f3
    ctx->pc = 0x4d6bd8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x4d6bdc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4d6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6be0: 0x460326c1  sub.s       $f27, $f4, $f3
    ctx->pc = 0x4d6be0u;
    ctx->f[27] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x4d6be4: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x4d6be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6be8: 0x46022d80  add.s       $f22, $f5, $f2
    ctx->pc = 0x4d6be8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x4d6bec: 0x46022e81  sub.s       $f26, $f5, $f2
    ctx->pc = 0x4d6becu;
    ctx->f[26] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x4d6bf0: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x4d6bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d6bf4: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x4d6bf4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d6bf8: 0xc4870028  lwc1        $f7, 0x28($a0)
    ctx->pc = 0x4d6bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d6bfc: 0x46000e41  sub.s       $f25, $f1, $f0
    ctx->pc = 0x4d6bfcu;
    ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d6c00: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x4d6c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d6c04: 0xc484002c  lwc1        $f4, 0x2C($a0)
    ctx->pc = 0x4d6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d6c08: 0x4616c401  sub.s       $f16, $f24, $f22
    ctx->pc = 0x4d6c08u;
    ctx->f[16] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x4d6c0c: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x4d6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d6c10: 0x4615bbc1  sub.s       $f15, $f23, $f21
    ctx->pc = 0x4d6c10u;
    ctx->f[15] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x4d6c14: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x4d6c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d6c18: 0x4616c380  add.s       $f14, $f24, $f22
    ctx->pc = 0x4d6c18u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x4d6c1c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x4d6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6c20: 0x4615bb40  add.s       $f13, $f23, $f21
    ctx->pc = 0x4d6c20u;
    ctx->f[13] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x4d6c24: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x4d6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6c28: 0x46074600  add.s       $f24, $f8, $f7
    ctx->pc = 0x4d6c28u;
    ctx->f[24] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x4d6c2c: 0x46042dc0  add.s       $f23, $f5, $f4
    ctx->pc = 0x4d6c2cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x4d6c30: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x4d6c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d6c34: 0x46021d80  add.s       $f22, $f3, $f2
    ctx->pc = 0x4d6c34u;
    ctx->f[22] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x4d6c38: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x4d6c38u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4d6c3c: 0x4619e2c0  add.s       $f11, $f28, $f25
    ctx->pc = 0x4d6c3cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[28], ctx->f[25]);
    // 0x4d6c40: 0x461adb01  sub.s       $f12, $f27, $f26
    ctx->pc = 0x4d6c40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[27], ctx->f[26]);
    // 0x4d6c44: 0x4619e241  sub.s       $f9, $f28, $f25
    ctx->pc = 0x4d6c44u;
    ctx->f[9] = FPU_SUB_S(ctx->f[28], ctx->f[25]);
    // 0x4d6c48: 0x461ada80  add.s       $f10, $f27, $f26
    ctx->pc = 0x4d6c48u;
    ctx->f[10] = FPU_ADD_S(ctx->f[27], ctx->f[26]);
    // 0x4d6c4c: 0x46074701  sub.s       $f28, $f8, $f7
    ctx->pc = 0x4d6c4cu;
    ctx->f[28] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x4d6c50: 0x46042ec1  sub.s       $f27, $f5, $f4
    ctx->pc = 0x4d6c50u;
    ctx->f[27] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x4d6c54: 0x46021e81  sub.s       $f26, $f3, $f2
    ctx->pc = 0x4d6c54u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x4d6c58: 0x46000e41  sub.s       $f25, $f1, $f0
    ctx->pc = 0x4d6c58u;
    ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d6c5c: 0x4616c501  sub.s       $f20, $f24, $f22
    ctx->pc = 0x4d6c5cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x4d6c60: 0x4615bcc1  sub.s       $f19, $f23, $f21
    ctx->pc = 0x4d6c60u;
    ctx->f[19] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x4d6c64: 0x4616c440  add.s       $f17, $f24, $f22
    ctx->pc = 0x4d6c64u;
    ctx->f[17] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x4d6c68: 0x4615bc80  add.s       $f18, $f23, $f21
    ctx->pc = 0x4d6c68u;
    ctx->f[18] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x4d6c6c: 0x4619e601  sub.s       $f24, $f28, $f25
    ctx->pc = 0x4d6c6cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[28], ctx->f[25]);
    // 0x4d6c70: 0x461addc0  add.s       $f23, $f27, $f26
    ctx->pc = 0x4d6c70u;
    ctx->f[23] = FPU_ADD_S(ctx->f[27], ctx->f[26]);
    // 0x4d6c74: 0x4619e580  add.s       $f22, $f28, $f25
    ctx->pc = 0x4d6c74u;
    ctx->f[22] = FPU_ADD_S(ctx->f[28], ctx->f[25]);
    // 0x4d6c78: 0x461add41  sub.s       $f21, $f27, $f26
    ctx->pc = 0x4d6c78u;
    ctx->f[21] = FPU_SUB_S(ctx->f[27], ctx->f[26]);
    // 0x4d6c7c: 0x4617c080  add.s       $f2, $f24, $f23
    ctx->pc = 0x4d6c7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
    // 0x4d6c80: 0x4617c001  sub.s       $f0, $f24, $f23
    ctx->pc = 0x4d6c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
    // 0x4d6c84: 0x4615b0c0  add.s       $f3, $f22, $f21
    ctx->pc = 0x4d6c84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x4d6c88: 0x4615b101  sub.s       $f4, $f22, $f21
    ctx->pc = 0x4d6c88u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x4d6c8c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x4d6c8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x4d6c90: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4d6c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4d6c94: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x4d6c94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4d6c98: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x4d6c98u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x4d6c9c: 0x46025041  sub.s       $f1, $f10, $f2
    ctx->pc = 0x4d6c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x4d6ca0: 0x46004901  sub.s       $f4, $f9, $f0
    ctx->pc = 0x4d6ca0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x4d6ca4: 0x46035940  add.s       $f5, $f11, $f3
    ctx->pc = 0x4d6ca4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x4d6ca8: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x4d6ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4d6cac: 0x460661c1  sub.s       $f7, $f12, $f6
    ctx->pc = 0x4d6cacu;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x4d6cb0: 0xe4840028  swc1        $f4, 0x28($a0)
    ctx->pc = 0x4d6cb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4d6cb4: 0x46117201  sub.s       $f8, $f14, $f17
    ctx->pc = 0x4d6cb4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[14], ctx->f[17]);
    // 0x4d6cb8: 0x46126841  sub.s       $f1, $f13, $f18
    ctx->pc = 0x4d6cb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[18]);
    // 0x4d6cbc: 0xe4850038  swc1        $f5, 0x38($a0)
    ctx->pc = 0x4d6cbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4d6cc0: 0x46138100  add.s       $f4, $f16, $f19
    ctx->pc = 0x4d6cc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[16], ctx->f[19]);
    // 0x4d6cc4: 0xe487003c  swc1        $f7, 0x3C($a0)
    ctx->pc = 0x4d6cc4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4d6cc8: 0x46147941  sub.s       $f5, $f15, $f20
    ctx->pc = 0x4d6cc8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
    // 0x4d6ccc: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x4d6cccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d6cd0: 0x46147bc0  add.s       $f15, $f15, $f20
    ctx->pc = 0x4d6cd0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[20]);
    // 0x4d6cd4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4d6cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d6cd8: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x4d6cd8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x4d6cdc: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x4d6cdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d6ce0: 0x46025280  add.s       $f10, $f10, $f2
    ctx->pc = 0x4d6ce0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[2]);
    // 0x4d6ce4: 0xe485001c  swc1        $f5, 0x1C($a0)
    ctx->pc = 0x4d6ce4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d6ce8: 0x46035ac1  sub.s       $f11, $f11, $f3
    ctx->pc = 0x4d6ce8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x4d6cec: 0xc7bc0040  lwc1        $f28, 0x40($sp)
    ctx->pc = 0x4d6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x4d6cf0: 0x46066300  add.s       $f12, $f12, $f6
    ctx->pc = 0x4d6cf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x4d6cf4: 0xc7bb0038  lwc1        $f27, 0x38($sp)
    ctx->pc = 0x4d6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x4d6cf8: 0x46117380  add.s       $f14, $f14, $f17
    ctx->pc = 0x4d6cf8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[17]);
    // 0x4d6cfc: 0xc7ba0030  lwc1        $f26, 0x30($sp)
    ctx->pc = 0x4d6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d6d00: 0x46126b40  add.s       $f13, $f13, $f18
    ctx->pc = 0x4d6d00u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[18]);
    // 0x4d6d04: 0xc7b90028  lwc1        $f25, 0x28($sp)
    ctx->pc = 0x4d6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d6d08: 0x46138401  sub.s       $f16, $f16, $f19
    ctx->pc = 0x4d6d08u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[19]);
    // 0x4d6d0c: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x4d6d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d6d10: 0xc7b70018  lwc1        $f23, 0x18($sp)
    ctx->pc = 0x4d6d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d6d14: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x4d6d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d6d18: 0xc7b50008  lwc1        $f21, 0x8($sp)
    ctx->pc = 0x4d6d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d6d1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d6d20: 0xe4890020  swc1        $f9, 0x20($a0)
    ctx->pc = 0x4d6d20u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d6d24: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x4d6d24u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d6d28: 0xe48b0030  swc1        $f11, 0x30($a0)
    ctx->pc = 0x4d6d28u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4d6d2c: 0xe48c0034  swc1        $f12, 0x34($a0)
    ctx->pc = 0x4d6d2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4d6d30: 0xe48e0000  swc1        $f14, 0x0($a0)
    ctx->pc = 0x4d6d30u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d6d34: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x4d6d34u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d6d38: 0xe4900010  swc1        $f16, 0x10($a0)
    ctx->pc = 0x4d6d38u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d6d3c: 0xe48f0014  swc1        $f15, 0x14($a0)
    ctx->pc = 0x4d6d3cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d6d40: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6D40u;
        // 0x4d6d44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D6D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D6D48u;
}
