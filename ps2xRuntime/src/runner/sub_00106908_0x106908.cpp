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

// Function: sub_00106908
// Address: 0x106908 - 0x106918
void sub_00106908_0x106908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106908_0x106908");
#endif

    ctx->pc = 0x106908u;

    // 0x106908: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x106908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10690c: 0x3e00008  jr          $ra
    ctx->pc = 0x10690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10690Cu;
        // 0x106910: 0x244269c8  addiu       $v0, $v0, 0x69C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10690Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106914u;
    // 0x106914: 0x0  nop
    ctx->pc = 0x106914u;
    // NOP
    ctx->pc = 0x106918u;
}
