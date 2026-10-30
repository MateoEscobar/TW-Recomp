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

// Function: sub_00106E38
// Address: 0x106e38 - 0x106e50
void sub_00106E38_0x106e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106E38_0x106e38");
#endif

    ctx->pc = 0x106e38u;

    // 0x106e38: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x106e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x106e3c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x106e3cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x106e40: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x106e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x106e44: 0x3e00008  jr          $ra
    ctx->pc = 0x106E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E44u;
        // 0x106e48: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106E4Cu;
    // 0x106e4c: 0x0  nop
    ctx->pc = 0x106e4cu;
    // NOP
    ctx->pc = 0x106e50u;
}
