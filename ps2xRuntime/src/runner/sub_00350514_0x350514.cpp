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

// Function: sub_00350514
// Address: 0x350514 - 0x350538
void sub_00350514_0x350514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350514_0x350514");
#endif

    switch (ctx->pc) {
        case 0x350520u: goto label_350520;
        default: break;
    }

    ctx->pc = 0x350514u;

    // 0x350514: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x350514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x350518: 0x3e00008  jr          $ra
    ctx->pc = 0x350518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350518u;
        // 0x35051c: 0x244285b8  addiu       $v0, $v0, -0x7A48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350520u;
label_350520:
    // 0x350520: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x350520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x350524: 0x3e00008  jr          $ra
    ctx->pc = 0x350524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350524u;
        // 0x350528: 0x244285c8  addiu       $v0, $v0, -0x7A38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35052Cu;
    // 0x35052c: 0x0  nop
    ctx->pc = 0x35052cu;
    // NOP
    // 0x350530: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x350530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x350534: 0x0  nop
    ctx->pc = 0x350534u;
    // NOP
    ctx->pc = 0x350538u;
}
