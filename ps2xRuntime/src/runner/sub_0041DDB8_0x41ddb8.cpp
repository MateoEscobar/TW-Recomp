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

// Function: sub_0041DDB8
// Address: 0x41ddb8 - 0x41ddd8
void sub_0041DDB8_0x41ddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DDB8_0x41ddb8");
#endif

    ctx->pc = 0x41ddb8u;

    // 0x41ddb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ddbc: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x41ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ddc0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x41DDC0u;
    {
        const bool branch_taken_0x41ddc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ddc0) {
            ctx->pc = 0x41DDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41DDC0u;
            // 0x41ddc4: 0x8c42014c  lw          $v0, 0x14C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41DDD0u;
            goto label_41ddd0;
        }
    }
    ctx->pc = 0x41DDC8u;
    // 0x41ddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x41DDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DDC8u;
        // 0x41ddcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DDD0u;
label_41ddd0:
    // 0x41ddd0: 0x3e00008  jr          $ra
    ctx->pc = 0x41DDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DDD0u;
        // 0x41ddd4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DDD8u;
}
