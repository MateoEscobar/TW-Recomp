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

// Function: sub_004EE348
// Address: 0x4ee348 - 0x4ee358
void sub_004EE348_0x4ee348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE348_0x4ee348");
#endif

    ctx->pc = 0x4ee348u;

    // 0x4ee348: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee34c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE34Cu;
        // 0x4ee350: 0x24423860  addiu       $v0, $v0, 0x3860 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE354u;
    // 0x4ee354: 0x0  nop
    ctx->pc = 0x4ee354u;
    // NOP
    ctx->pc = 0x4ee358u;
}
