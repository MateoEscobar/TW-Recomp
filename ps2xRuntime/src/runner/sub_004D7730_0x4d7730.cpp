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

// Function: sub_004D7730
// Address: 0x4d7730 - 0x4d77f8
void sub_004D7730_0x4d7730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7730_0x4d7730");
#endif

    ctx->pc = 0x4d7730u;

    // 0x4d7730: 0xc4870010  lwc1        $f7, 0x10($a0)
    ctx->pc = 0x4d7730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d7734: 0xc4890014  lwc1        $f9, 0x14($a0)
    ctx->pc = 0x4d7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d7738: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x4d7738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d773c: 0xc4850024  lwc1        $f5, 0x24($a0)
    ctx->pc = 0x4d773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d7740: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x4d7740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7744: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x4d7744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7748: 0xc4860050  lwc1        $f6, 0x50($a0)
    ctx->pc = 0x4d7748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d774c: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x4d774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7750: 0xc4830064  lwc1        $f3, 0x64($a0)
    ctx->pc = 0x4d7750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7754: 0xc48b0008  lwc1        $f11, 0x8($a0)
    ctx->pc = 0x4d7754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d7758: 0xc48c000c  lwc1        $f12, 0xC($a0)
    ctx->pc = 0x4d7758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d775c: 0xc48d0018  lwc1        $f13, 0x18($a0)
    ctx->pc = 0x4d775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d7760: 0xc48e001c  lwc1        $f14, 0x1C($a0)
    ctx->pc = 0x4d7760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4d7764: 0xc48a0028  lwc1        $f10, 0x28($a0)
    ctx->pc = 0x4d7764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d7768: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d7768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d776c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4d776cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d7770: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x4d7770u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d7774: 0xe4850014  swc1        $f5, 0x14($a0)
    ctx->pc = 0x4d7774u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d7778: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x4d7778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d777c: 0xe483001c  swc1        $f3, 0x1C($a0)
    ctx->pc = 0x4d777cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d7780: 0xe4870020  swc1        $f7, 0x20($a0)
    ctx->pc = 0x4d7780u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d7784: 0xe4890024  swc1        $f9, 0x24($a0)
    ctx->pc = 0x4d7784u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d7788: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x4d7788u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4d778c: 0xc4880054  lwc1        $f8, 0x54($a0)
    ctx->pc = 0x4d778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d7790: 0xc485002c  lwc1        $f5, 0x2C($a0)
    ctx->pc = 0x4d7790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d7794: 0xc4890038  lwc1        $f9, 0x38($a0)
    ctx->pc = 0x4d7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d7798: 0xc482003c  lwc1        $f2, 0x3C($a0)
    ctx->pc = 0x4d7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d779c: 0xc4860058  lwc1        $f6, 0x58($a0)
    ctx->pc = 0x4d779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d77a0: 0xc487005c  lwc1        $f7, 0x5C($a0)
    ctx->pc = 0x4d77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d77a4: 0xc4830068  lwc1        $f3, 0x68($a0)
    ctx->pc = 0x4d77a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d77a8: 0xc484006c  lwc1        $f4, 0x6C($a0)
    ctx->pc = 0x4d77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d77ac: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x4d77acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d77b0: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x4d77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d77b4: 0xe488002c  swc1        $f8, 0x2C($a0)
    ctx->pc = 0x4d77b4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4d77b8: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x4d77b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x4d77bc: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x4d77bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4d77c0: 0xe481003c  swc1        $f1, 0x3C($a0)
    ctx->pc = 0x4d77c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4d77c4: 0xe48b0040  swc1        $f11, 0x40($a0)
    ctx->pc = 0x4d77c4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x4d77c8: 0xe48c0044  swc1        $f12, 0x44($a0)
    ctx->pc = 0x4d77c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x4d77cc: 0xe48a0050  swc1        $f10, 0x50($a0)
    ctx->pc = 0x4d77ccu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4d77d0: 0xe4850054  swc1        $f5, 0x54($a0)
    ctx->pc = 0x4d77d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4d77d4: 0xe4830058  swc1        $f3, 0x58($a0)
    ctx->pc = 0x4d77d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x4d77d8: 0xe484005c  swc1        $f4, 0x5C($a0)
    ctx->pc = 0x4d77d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x4d77dc: 0xe48d0060  swc1        $f13, 0x60($a0)
    ctx->pc = 0x4d77dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x4d77e0: 0xe48e0064  swc1        $f14, 0x64($a0)
    ctx->pc = 0x4d77e0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x4d77e4: 0xe4860068  swc1        $f6, 0x68($a0)
    ctx->pc = 0x4d77e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x4d77e8: 0xe487006c  swc1        $f7, 0x6C($a0)
    ctx->pc = 0x4d77e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x4d77ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4D77ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D77ECu;
        // 0x4d77f0: 0xe4890070  swc1        $f9, 0x70($a0) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D77ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D77F4u;
    // 0x4d77f4: 0x0  nop
    ctx->pc = 0x4d77f4u;
    // NOP
    ctx->pc = 0x4d77f8u;
}
