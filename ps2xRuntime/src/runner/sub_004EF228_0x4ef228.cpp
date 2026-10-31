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

// Function: sub_004EF228
// Address: 0x4ef228 - 0x4ef238
void sub_004EF228_0x4ef228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF228_0x4ef228");
#endif

    ctx->pc = 0x4ef228u;

    // 0x4ef228: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef22c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF22Cu;
        // 0x4ef230: 0x244287e0  addiu       $v0, $v0, -0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF234u;
    // 0x4ef234: 0x0  nop
    ctx->pc = 0x4ef234u;
    // NOP
    ctx->pc = 0x4ef238u;
}
