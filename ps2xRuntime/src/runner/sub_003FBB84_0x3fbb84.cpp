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

// Function: sub_003FBB84
// Address: 0x3fbb84 - 0x3fbba0
void sub_003FBB84_0x3fbb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBB84_0x3fbb84");
#endif

    switch (ctx->pc) {
        case 0x3fbb88u: goto label_3fbb88;
        default: break;
    }

    ctx->pc = 0x3fbb84u;

    // 0x3fbb84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3fbb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fbb88:
    // 0x3fbb88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3fbb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fbb8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fbb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fbb90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3fbb90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fbb94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fbb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fbb98: 0x3e00008  jr          $ra
    ctx->pc = 0x3FBB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB98u;
        // 0x3fbb9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBBA0u;
}
