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

// Function: sub_00226660
// Address: 0x226660 - 0x226688
void sub_00226660_0x226660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226660_0x226660");
#endif

    ctx->pc = 0x226660u;

    // 0x226660: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x226660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x226664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226664u;
    {
        const bool branch_taken_0x226664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226664) {
            ctx->pc = 0x22667Cu;
            goto label_22667c;
        }
    }
    ctx->pc = 0x22666Cu;
    // 0x22666c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x226670: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x226670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x226674: 0x3e00008  jr          $ra
    ctx->pc = 0x226674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226674u;
        // 0x226678: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22667Cu;
label_22667c:
    // 0x22667c: 0x3e00008  jr          $ra
    ctx->pc = 0x22667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22667Cu;
        // 0x226680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226684u;
    // 0x226684: 0x0  nop
    ctx->pc = 0x226684u;
    // NOP
    ctx->pc = 0x226688u;
}
