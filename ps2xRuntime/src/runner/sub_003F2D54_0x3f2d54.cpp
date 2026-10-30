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

// Function: sub_003F2D54
// Address: 0x3f2d54 - 0x3f2d70
void sub_003F2D54_0x3f2d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2D54_0x3f2d54");
#endif

    switch (ctx->pc) {
        case 0x3f2d58u: goto label_3f2d58;
        default: break;
    }

    ctx->pc = 0x3f2d54u;

    // 0x3f2d54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f2d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f2d58:
    // 0x3f2d58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f2d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f2d5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f2d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f2d60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f2d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f2d64: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D64u;
        // 0x3f2d68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2D6Cu;
    // 0x3f2d6c: 0x0  nop
    ctx->pc = 0x3f2d6cu;
    // NOP
    ctx->pc = 0x3f2d70u;
}
