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

// Function: sub_004F0680
// Address: 0x4f0680 - 0x4f0690
void sub_004F0680_0x4f0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0680_0x4f0680");
#endif

    ctx->pc = 0x4f0680u;

    // 0x4f0680: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4f0680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4f0684: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0684u;
        // 0x4f0688: 0x24426cb0  addiu       $v0, $v0, 0x6CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F068Cu;
    // 0x4f068c: 0x0  nop
    ctx->pc = 0x4f068cu;
    // NOP
    ctx->pc = 0x4f0690u;
}
