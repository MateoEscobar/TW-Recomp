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

// Function: sub_003F98F8
// Address: 0x3f98f8 - 0x3f9910
void sub_003F98F8_0x3f98f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F98F8_0x3f98f8");
#endif

    switch (ctx->pc) {
        case 0x3f98fcu: goto label_3f98fc;
        default: break;
    }

    ctx->pc = 0x3f98f8u;

    // 0x3f98f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f98f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f98fc:
    // 0x3f98fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f98fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f9900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f9900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f9904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f9904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f9908: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9908u;
        // 0x3f990c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9910u;
}
