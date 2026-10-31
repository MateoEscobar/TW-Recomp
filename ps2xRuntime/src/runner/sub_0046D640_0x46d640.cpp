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

// Function: sub_0046D640
// Address: 0x46d640 - 0x46d658
void sub_0046D640_0x46d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D640_0x46d640");
#endif

    ctx->pc = 0x46d640u;

    // 0x46d640: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46d640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d644: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x46d644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x46d648: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x46d648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x46d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x46D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D64Cu;
        // 0x46d650: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D654u;
    // 0x46d654: 0x0  nop
    ctx->pc = 0x46d654u;
    // NOP
    ctx->pc = 0x46d658u;
}
