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

// Function: sub_00254D4C
// Address: 0x254d4c - 0x254d60
void sub_00254D4C_0x254d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D4C_0x254d4c");
#endif

    switch (ctx->pc) {
        case 0x254d50u: goto label_254d50;
        default: break;
    }

    ctx->pc = 0x254d4cu;

    // 0x254d4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x254d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_254d50:
    // 0x254d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254d58: 0x3e00008  jr          $ra
    ctx->pc = 0x254D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D58u;
        // 0x254d5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D60u;
}
