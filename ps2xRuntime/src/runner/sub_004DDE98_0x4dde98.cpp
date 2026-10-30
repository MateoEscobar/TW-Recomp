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

// Function: sub_004DDE98
// Address: 0x4dde98 - 0x4ddea8
void sub_004DDE98_0x4dde98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDE98_0x4dde98");
#endif

    ctx->pc = 0x4dde98u;

    // 0x4dde98: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDE98u;
        // 0x4dde9c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDEA0u;
    // 0x4ddea0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ddea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ddea4: 0x0  nop
    ctx->pc = 0x4ddea4u;
    // NOP
    ctx->pc = 0x4ddea8u;
}
