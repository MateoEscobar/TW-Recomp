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

// Function: sub_0010E44C
// Address: 0x10e44c - 0x10e468
void sub_0010E44C_0x10e44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E44C_0x10e44c");
#endif

    switch (ctx->pc) {
        case 0x10e450u: goto label_10e450;
        default: break;
    }

    ctx->pc = 0x10e44cu;

    // 0x10e44c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10e44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10e450:
    // 0x10e450: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10e450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e454: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10e454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10e458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e45c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e460: 0x3e00008  jr          $ra
    ctx->pc = 0x10E460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E460u;
        // 0x10e464: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E468u;
}
