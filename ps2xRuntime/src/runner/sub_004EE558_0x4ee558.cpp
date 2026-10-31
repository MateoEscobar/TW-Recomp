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

// Function: sub_004EE558
// Address: 0x4ee558 - 0x4ee568
void sub_004EE558_0x4ee558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE558_0x4ee558");
#endif

    ctx->pc = 0x4ee558u;

    // 0x4ee558: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee55c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE55Cu;
        // 0x4ee560: 0x244242b8  addiu       $v0, $v0, 0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE564u;
    // 0x4ee564: 0x0  nop
    ctx->pc = 0x4ee564u;
    // NOP
    ctx->pc = 0x4ee568u;
}
