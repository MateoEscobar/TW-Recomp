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

// Function: sub_004F4C40
// Address: 0x4f4c40 - 0x4f4c50
void sub_004F4C40_0x4f4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4C40_0x4f4c40");
#endif

    ctx->pc = 0x4f4c40u;

    // 0x4f4c40: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4f4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4f4c44: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C44u;
        // 0x4f4c48: 0x244287e0  addiu       $v0, $v0, -0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4C4Cu;
    // 0x4f4c4c: 0x0  nop
    ctx->pc = 0x4f4c4cu;
    // NOP
    ctx->pc = 0x4f4c50u;
}
