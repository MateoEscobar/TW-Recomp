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

// Function: sub_004B3C28
// Address: 0x4b3c28 - 0x4b3c50
void sub_004B3C28_0x4b3c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3C28_0x4b3c28");
#endif

    ctx->pc = 0x4b3c28u;

    // 0x4b3c28: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B3C28u;
    {
        const bool branch_taken_0x4b3c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3c28) {
            ctx->pc = 0x4B3C44u;
            goto label_4b3c44;
        }
    }
    ctx->pc = 0x4B3C30u;
    // 0x4b3c30: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x4b3c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4b3c34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3C34u;
    {
        const bool branch_taken_0x4b3c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3c34) {
            ctx->pc = 0x4B3C44u;
            goto label_4b3c44;
        }
    }
    ctx->pc = 0x4B3C3Cu;
    // 0x4b3c3c: 0x810ceec  j           func_433BB0
    ctx->pc = 0x4B3C3Cu;
    ctx->pc = 0x433BB0u;
    sub_00433BB0_0x433bb0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B3C44u;
label_4b3c44:
    // 0x4b3c44: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3C4Cu;
    // 0x4b3c4c: 0x0  nop
    ctx->pc = 0x4b3c4cu;
    // NOP
    ctx->pc = 0x4b3c50u;
}
