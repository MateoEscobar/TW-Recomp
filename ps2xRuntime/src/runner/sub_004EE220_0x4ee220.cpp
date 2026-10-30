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

// Function: sub_004EE220
// Address: 0x4ee220 - 0x4ee230
void sub_004EE220_0x4ee220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE220_0x4ee220");
#endif

    ctx->pc = 0x4ee220u;

    // 0x4ee220: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee224: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE224u;
        // 0x4ee228: 0x24423030  addiu       $v0, $v0, 0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE22Cu;
    // 0x4ee22c: 0x0  nop
    ctx->pc = 0x4ee22cu;
    // NOP
    ctx->pc = 0x4ee230u;
}
