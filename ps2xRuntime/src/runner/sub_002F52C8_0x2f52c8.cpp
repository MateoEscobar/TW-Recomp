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

// Function: sub_002F52C8
// Address: 0x2f52c8 - 0x2f52e8
void sub_002F52C8_0x2f52c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52C8_0x2f52c8");
#endif

    ctx->pc = 0x2f52c8u;

    // 0x2f52c8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2f52c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2f52cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f52d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F52D0u;
    {
        const bool branch_taken_0x2f52d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52D0u;
        // 0x2f52d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52d0) {
            ctx->pc = 0x2F52E0u;
            goto label_2f52e0;
        }
    }
    ctx->pc = 0x2F52D8u;
    // 0x2f52d8: 0x90820042  lbu         $v0, 0x42($a0)
    ctx->pc = 0x2f52d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x2f52dc: 0x2c450002  sltiu       $a1, $v0, 0x2
    ctx->pc = 0x2f52dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f52e0:
    // 0x2f52e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F52E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52E0u;
        // 0x2f52e4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F52E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F52E8u;
}
