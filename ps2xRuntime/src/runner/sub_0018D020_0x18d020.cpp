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

// Function: sub_0018D020
// Address: 0x18d020 - 0x18d058
void sub_0018D020_0x18d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D020_0x18d020");
#endif

    ctx->pc = 0x18d020u;

    // 0x18d020: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x18d024: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D024u;
    {
        const bool branch_taken_0x18d024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D024u;
        // 0x18d028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d024) {
            ctx->pc = 0x18D04Cu;
            goto label_18d04c;
        }
    }
    ctx->pc = 0x18D02Cu;
    // 0x18d02c: 0xc48101d8  lwc1        $f1, 0x1D8($a0)
    ctx->pc = 0x18d02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d034: 0x0  nop
    ctx->pc = 0x18d034u;
    // NOP
    // 0x18d038: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18d038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d03c: 0x0  nop
    ctx->pc = 0x18d03cu;
    // NOP
    // 0x18d040: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D040u;
    {
        const bool branch_taken_0x18d040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D040u;
        // 0x18d044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d040) {
            ctx->pc = 0x18D04Cu;
            goto label_18d04c;
        }
    }
    ctx->pc = 0x18D048u;
    // 0x18d048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d04c:
    // 0x18d04c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D054u;
    // 0x18d054: 0x0  nop
    ctx->pc = 0x18d054u;
    // NOP
    ctx->pc = 0x18d058u;
}
