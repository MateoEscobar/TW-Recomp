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

// Function: sub_00226688
// Address: 0x226688 - 0x2266a8
void sub_00226688_0x226688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226688_0x226688");
#endif

    ctx->pc = 0x226688u;

    // 0x226688: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x226688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x22668c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22668Cu;
    {
        const bool branch_taken_0x22668c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22668Cu;
        // 0x226690: 0x51827  nor         $v1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22668c) {
            ctx->pc = 0x2266A0u;
            goto label_2266a0;
        }
    }
    ctx->pc = 0x226694u;
    // 0x226694: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x226694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x226698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x226698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22669c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x22669cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2266a0:
    // 0x2266a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2266A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266A8u;
}
