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

// Function: sub_00108A60
// Address: 0x108a60 - 0x108a78
void sub_00108A60_0x108a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108A60_0x108a60");
#endif

    ctx->pc = 0x108a60u;

    // 0x108a60: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x108a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x108a64: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x108a64u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x108a68: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x108a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x108a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x108A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A6Cu;
        // 0x108a70: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A74u;
    // 0x108a74: 0x0  nop
    ctx->pc = 0x108a74u;
    // NOP
    ctx->pc = 0x108a78u;
}
