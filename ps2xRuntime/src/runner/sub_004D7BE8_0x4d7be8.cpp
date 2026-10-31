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

// Function: sub_004D7BE8
// Address: 0x4d7be8 - 0x4d7c60
void sub_004D7BE8_0x4d7be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7BE8_0x4d7be8");
#endif

    ctx->pc = 0x4d7be8u;

    // 0x4d7be8: 0xc4890008  lwc1        $f9, 0x8($a0)
    ctx->pc = 0x4d7be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x4d7bec: 0xc48a000c  lwc1        $f10, 0xC($a0)
    ctx->pc = 0x4d7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4d7bf0: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x4d7bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d7bf4: 0xc48d0014  lwc1        $f13, 0x14($a0)
    ctx->pc = 0x4d7bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4d7bf8: 0xc4850018  lwc1        $f5, 0x18($a0)
    ctx->pc = 0x4d7bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d7bfc: 0xc486001c  lwc1        $f6, 0x1C($a0)
    ctx->pc = 0x4d7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4d7c00: 0xc48b0020  lwc1        $f11, 0x20($a0)
    ctx->pc = 0x4d7c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x4d7c04: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x4d7c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7c08: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x4d7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7c0c: 0xc484002c  lwc1        $f4, 0x2C($a0)
    ctx->pc = 0x4d7c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d7c10: 0xc4870030  lwc1        $f7, 0x30($a0)
    ctx->pc = 0x4d7c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d7c14: 0xc4880034  lwc1        $f8, 0x34($a0)
    ctx->pc = 0x4d7c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4d7c18: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x4d7c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7c1c: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x4d7c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7c20: 0xe482003c  swc1        $f2, 0x3C($a0)
    ctx->pc = 0x4d7c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4d7c24: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4d7c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d7c28: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x4d7c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x4d7c2c: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x4d7c2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d7c30: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x4d7c30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d7c34: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x4d7c34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d7c38: 0xe484001c  swc1        $f4, 0x1C($a0)
    ctx->pc = 0x4d7c38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d7c3c: 0xe4890020  swc1        $f9, 0x20($a0)
    ctx->pc = 0x4d7c3cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x4d7c40: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x4d7c40u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4d7c44: 0xe4870028  swc1        $f7, 0x28($a0)
    ctx->pc = 0x4d7c44u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4d7c48: 0xe488002c  swc1        $f8, 0x2C($a0)
    ctx->pc = 0x4d7c48u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4d7c4c: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x4d7c4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4d7c50: 0xe48d0034  swc1        $f13, 0x34($a0)
    ctx->pc = 0x4d7c50u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4d7c54: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7C54u;
        // 0x4d7c58: 0xe48b0038  swc1        $f11, 0x38($a0) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7C5Cu;
    // 0x4d7c5c: 0x0  nop
    ctx->pc = 0x4d7c5cu;
    // NOP
    ctx->pc = 0x4d7c60u;
}
