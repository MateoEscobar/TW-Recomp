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

// Function: sub_0010EB28
// Address: 0x10eb28 - 0x10eb40
void sub_0010EB28_0x10eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EB28_0x10eb28");
#endif

    switch (ctx->pc) {
        case 0x10eb34u: goto label_10eb34;
        default: break;
    }

    ctx->pc = 0x10eb28u;

    // 0x10eb28: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10eb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB2Cu;
        // 0x10eb30: 0x24426e10  addiu       $v0, $v0, 0x6E10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EB34u;
label_10eb34:
    // 0x10eb34: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10eb38: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB38u;
        // 0x10eb3c: 0x24426e20  addiu       $v0, $v0, 0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EB40u;
}
