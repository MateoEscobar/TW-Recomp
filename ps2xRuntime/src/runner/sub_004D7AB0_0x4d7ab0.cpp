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

// Function: sub_004D7AB0
// Address: 0x4d7ab0 - 0x4d7be8
void sub_004D7AB0_0x4d7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7AB0_0x4d7ab0");
#endif

    ctx->pc = 0x4d7ab0u;

    // 0x4d7ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d7ab4: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x4d7ab4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d7ab8: 0xe7b90028  swc1        $f25, 0x28($sp)
    ctx->pc = 0x4d7ab8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4d7abc: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x4d7abcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d7ac0: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x4d7ac0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4d7ac4: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x4d7ac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4d7ac8: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x4d7ac8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4d7acc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d7accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4d7ad0: 0xc4940040  lwc1        $f20, 0x40($a0)
    ctx->pc = 0x4d7ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d7ad4: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x4d7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7ad8: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x4d7ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7adc: 0xc481007c  lwc1        $f1, 0x7C($a0)
    ctx->pc = 0x4d7adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7ae0: 0xc4950008  lwc1        $f21, 0x8($a0)
    ctx->pc = 0x4d7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d7ae4: 0xc496000c  lwc1        $f22, 0xC($a0)
    ctx->pc = 0x4d7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d7ae8: 0xc49a0010  lwc1        $f26, 0x10($a0)
    ctx->pc = 0x4d7ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d7aec: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d7aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d7af0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4d7af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d7af4: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x4d7af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d7af8: 0xc48d003c  lwc1        $f13, 0x3C($a0)
    ctx->pc = 0x4d7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d7afc: 0xc4970014  lwc1        $f23, 0x14($a0)
    ctx->pc = 0x4d7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d7b00: 0xc4980020  lwc1        $f24, 0x20($a0)
    ctx->pc = 0x4d7b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d7b04: 0xc4990024  lwc1        $f25, 0x24($a0)
    ctx->pc = 0x4d7b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d7b08: 0xc4890018  lwc1        $f9, 0x18($a0)
    ctx->pc = 0x4d7b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d7b0c: 0xc48a001c  lwc1        $f10, 0x1C($a0)
    ctx->pc = 0x4d7b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d7b10: 0xc48b0028  lwc1        $f11, 0x28($a0)
    ctx->pc = 0x4d7b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d7b14: 0xc48c002c  lwc1        $f12, 0x2C($a0)
    ctx->pc = 0x4d7b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d7b18: 0xc4920030  lwc1        $f18, 0x30($a0)
    ctx->pc = 0x4d7b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x4d7b1c: 0xc4930034  lwc1        $f19, 0x34($a0)
    ctx->pc = 0x4d7b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x4d7b20: 0xc4840044  lwc1        $f4, 0x44($a0)
    ctx->pc = 0x4d7b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d7b24: 0xc4870048  lwc1        $f7, 0x48($a0)
    ctx->pc = 0x4d7b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d7b28: 0xc488004c  lwc1        $f8, 0x4C($a0)
    ctx->pc = 0x4d7b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d7b2c: 0xc48e0050  lwc1        $f14, 0x50($a0)
    ctx->pc = 0x4d7b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d7b30: 0xc48f0054  lwc1        $f15, 0x54($a0)
    ctx->pc = 0x4d7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x4d7b34: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x4d7b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7b38: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x4d7b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7b3c: 0xc4900060  lwc1        $f16, 0x60($a0)
    ctx->pc = 0x4d7b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x4d7b40: 0xc4910064  lwc1        $f17, 0x64($a0)
    ctx->pc = 0x4d7b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x4d7b44: 0xc4820068  lwc1        $f2, 0x68($a0)
    ctx->pc = 0x4d7b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7b48: 0xc483006c  lwc1        $f3, 0x6C($a0)
    ctx->pc = 0x4d7b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7b4c: 0xc4850070  lwc1        $f5, 0x70($a0)
    ctx->pc = 0x4d7b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d7b50: 0xc4860074  lwc1        $f6, 0x74($a0)
    ctx->pc = 0x4d7b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d7b54: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x4d7b54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d7b58: 0xe4950040  swc1        $f21, 0x40($a0)
    ctx->pc = 0x4d7b58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x4d7b5c: 0xe4960044  swc1        $f22, 0x44($a0)
    ctx->pc = 0x4d7b5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x4d7b60: 0xe49a0060  swc1        $f26, 0x60($a0)
    ctx->pc = 0x4d7b60u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x4d7b64: 0xe4970064  swc1        $f23, 0x64($a0)
    ctx->pc = 0x4d7b64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x4d7b68: 0xe4980070  swc1        $f24, 0x70($a0)
    ctx->pc = 0x4d7b68u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x4d7b6c: 0xe4990074  swc1        $f25, 0x74($a0)
    ctx->pc = 0x4d7b6cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x4d7b70: 0xe4940078  swc1        $f20, 0x78($a0)
    ctx->pc = 0x4d7b70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x4d7b74: 0xc7ba0030  lwc1        $f26, 0x30($sp)
    ctx->pc = 0x4d7b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x4d7b78: 0xc7b90028  lwc1        $f25, 0x28($sp)
    ctx->pc = 0x4d7b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x4d7b7c: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x4d7b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4d7b80: 0xc7b70018  lwc1        $f23, 0x18($sp)
    ctx->pc = 0x4d7b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4d7b84: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x4d7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d7b88: 0xc7b50008  lwc1        $f21, 0x8($sp)
    ctx->pc = 0x4d7b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d7b8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d7b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d7b90: 0xe484007c  swc1        $f4, 0x7C($a0)
    ctx->pc = 0x4d7b90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x4d7b94: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x4d7b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d7b98: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x4d7b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d7b9c: 0xe4890020  swc1        $f9, 0x20($a0)
    ctx->pc = 0x4d7b9cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d7ba0: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x4d7ba0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d7ba4: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x4d7ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4d7ba8: 0xe483002c  swc1        $f3, 0x2C($a0)
    ctx->pc = 0x4d7ba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4d7bac: 0xe48b0030  swc1        $f11, 0x30($a0)
    ctx->pc = 0x4d7bacu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4d7bb0: 0xe48c0034  swc1        $f12, 0x34($a0)
    ctx->pc = 0x4d7bb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4d7bb4: 0xe4870038  swc1        $f7, 0x38($a0)
    ctx->pc = 0x4d7bb4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4d7bb8: 0xe488003c  swc1        $f8, 0x3C($a0)
    ctx->pc = 0x4d7bb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4d7bbc: 0xe4850048  swc1        $f5, 0x48($a0)
    ctx->pc = 0x4d7bbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x4d7bc0: 0xe486004c  swc1        $f6, 0x4C($a0)
    ctx->pc = 0x4d7bc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x4d7bc4: 0xe4920050  swc1        $f18, 0x50($a0)
    ctx->pc = 0x4d7bc4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4d7bc8: 0xe4930054  swc1        $f19, 0x54($a0)
    ctx->pc = 0x4d7bc8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4d7bcc: 0xe48e0058  swc1        $f14, 0x58($a0)
    ctx->pc = 0x4d7bccu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x4d7bd0: 0xe48f005c  swc1        $f15, 0x5C($a0)
    ctx->pc = 0x4d7bd0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x4d7bd4: 0xe4900068  swc1        $f16, 0x68($a0)
    ctx->pc = 0x4d7bd4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x4d7bd8: 0xe491006c  swc1        $f17, 0x6C($a0)
    ctx->pc = 0x4d7bd8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x4d7bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7BDCu;
        // 0x4d7be0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7BE4u;
    // 0x4d7be4: 0x0  nop
    ctx->pc = 0x4d7be4u;
    // NOP
    ctx->pc = 0x4d7be8u;
}
