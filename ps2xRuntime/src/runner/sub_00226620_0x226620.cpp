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

// Function: sub_00226620
// Address: 0x226620 - 0x226640
void sub_00226620_0x226620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226620_0x226620");
#endif

    ctx->pc = 0x226620u;

    // 0x226620: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x226620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x226624: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226624u;
    {
        const bool branch_taken_0x226624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226624u;
        // 0x226628: 0x51827  nor         $v1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226624) {
            ctx->pc = 0x226638u;
            goto label_226638;
        }
    }
    ctx->pc = 0x22662Cu;
    // 0x22662c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x22662cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226630: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x226630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x226634: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x226634u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_226638:
    // 0x226638: 0x3e00008  jr          $ra
    ctx->pc = 0x226638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226640u;
}
