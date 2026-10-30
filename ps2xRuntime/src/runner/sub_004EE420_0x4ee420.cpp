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

// Function: sub_004EE420
// Address: 0x4ee420 - 0x4ee430
void sub_004EE420_0x4ee420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE420_0x4ee420");
#endif

    ctx->pc = 0x4ee420u;

    // 0x4ee420: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee424: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE424u;
        // 0x4ee428: 0x244238c8  addiu       $v0, $v0, 0x38C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE42Cu;
    // 0x4ee42c: 0x0  nop
    ctx->pc = 0x4ee42cu;
    // NOP
    ctx->pc = 0x4ee430u;
}
