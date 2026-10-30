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

// Function: sub_00418B30
// Address: 0x418b30 - 0x418b48
void sub_00418B30_0x418b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418B30_0x418b30");
#endif

    switch (ctx->pc) {
        case 0x418b3cu: goto label_418b3c;
        default: break;
    }

    ctx->pc = 0x418b30u;

    // 0x418b30: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x418b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x418b34: 0x3e00008  jr          $ra
    ctx->pc = 0x418B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B34u;
        // 0x418b38: 0x2442adb0  addiu       $v0, $v0, -0x5250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418B3Cu;
label_418b3c:
    // 0x418b3c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x418b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x418b40: 0x3e00008  jr          $ra
    ctx->pc = 0x418B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B40u;
        // 0x418b44: 0x2442ad90  addiu       $v0, $v0, -0x5270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418B48u;
}
