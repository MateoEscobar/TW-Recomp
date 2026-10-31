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

// Function: sub_001C18C0
// Address: 0x1c18c0 - 0x1c1900
void sub_001C18C0_0x1c18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C18C0_0x1c18c0");
#endif

    ctx->pc = 0x1c18c0u;

    // 0x1c18c0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1c18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1c18c4: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C18C4u;
    {
        const bool branch_taken_0x1c18c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18C4u;
        // 0x1c18c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18c4) {
            ctx->pc = 0x1C18E8u;
            goto label_1c18e8;
        }
    }
    ctx->pc = 0x1C18CCu;
    // 0x1c18cc: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x1c18ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c18d0: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1c18d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c18d4: 0x0  nop
    ctx->pc = 0x1c18d4u;
    // NOP
    // 0x1c18d8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C18D8u;
    {
        const bool branch_taken_0x1c18d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c18d8) {
            ctx->pc = 0x1C18DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C18D8u;
            // 0x1c18dc: 0xac850040  sw          $a1, 0x40($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C18ECu;
            goto label_1c18ec;
        }
    }
    ctx->pc = 0x1C18E0u;
    // 0x1c18e0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C18E0u;
    {
        const bool branch_taken_0x1c18e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c18e0) {
            ctx->pc = 0x1C18F8u;
            goto label_1c18f8;
        }
    }
    ctx->pc = 0x1C18E8u;
label_1c18e8:
    // 0x1c18e8: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x1c18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
label_1c18ec:
    // 0x1c18ec: 0xac8200c4  sw          $v0, 0xC4($a0)
    ctx->pc = 0x1c18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
    // 0x1c18f0: 0xe48c009c  swc1        $f12, 0x9C($a0)
    ctx->pc = 0x1c18f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x1c18f4: 0xa0800098  sb          $zero, 0x98($a0)
    ctx->pc = 0x1c18f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 0));
label_1c18f8:
    // 0x1c18f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C18F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C18F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1900u;
}
