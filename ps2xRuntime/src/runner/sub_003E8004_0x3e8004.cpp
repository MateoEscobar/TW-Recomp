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

// Function: sub_003E8004
// Address: 0x3e8004 - 0x3e8020
void sub_003E8004_0x3e8004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8004_0x3e8004");
#endif

    switch (ctx->pc) {
        case 0x3e8008u: goto label_3e8008;
        default: break;
    }

    ctx->pc = 0x3e8004u;

    // 0x3e8004: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e8004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e8008:
    // 0x3e8008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e8008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e800c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e800cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8014: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8014u;
        // 0x3e8018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E801Cu;
    // 0x3e801c: 0x0  nop
    ctx->pc = 0x3e801cu;
    // NOP
    ctx->pc = 0x3e8020u;
}
