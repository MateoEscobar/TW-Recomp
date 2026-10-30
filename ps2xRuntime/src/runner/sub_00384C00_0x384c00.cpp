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

// Function: sub_00384C00
// Address: 0x384c00 - 0x384c18
void sub_00384C00_0x384c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384C00_0x384c00");
#endif

    ctx->pc = 0x384c00u;

    // 0x384c00: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384C00u;
    {
        const bool branch_taken_0x384c00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x384C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C00u;
        // 0x384c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c00) {
            ctx->pc = 0x384C10u;
            goto label_384c10;
        }
    }
    ctx->pc = 0x384C08u;
    // 0x384c08: 0x3e00008  jr          $ra
    ctx->pc = 0x384C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C08u;
        // 0x384c0c: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384C10u;
label_384c10:
    // 0x384c10: 0x3e00008  jr          $ra
    ctx->pc = 0x384C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384C18u;
}
