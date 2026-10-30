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

// Function: sub_00183C40
// Address: 0x183c40 - 0x183c58
void sub_00183C40_0x183c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183C40_0x183c40");
#endif

    switch (ctx->pc) {
        case 0x183c48u: goto label_183c48;
        default: break;
    }

    ctx->pc = 0x183c40u;

    // 0x183c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183c44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x183c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_183c48:
    // 0x183c48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x183c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c50: 0x3e00008  jr          $ra
    ctx->pc = 0x183C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C50u;
        // 0x183c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C58u;
}
