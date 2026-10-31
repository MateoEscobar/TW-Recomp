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

// Function: sub_004EF118
// Address: 0x4ef118 - 0x4ef128
void sub_004EF118_0x4ef118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF118_0x4ef118");
#endif

    ctx->pc = 0x4ef118u;

    // 0x4ef118: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4ef11c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF11Cu;
        // 0x4ef120: 0x24428760  addiu       $v0, $v0, -0x78A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF124u;
    // 0x4ef124: 0x0  nop
    ctx->pc = 0x4ef124u;
    // NOP
    ctx->pc = 0x4ef128u;
}
