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

// Function: sub_003E6C24
// Address: 0x3e6c24 - 0x3e6c40
void sub_003E6C24_0x3e6c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6C24_0x3e6c24");
#endif

    switch (ctx->pc) {
        case 0x3e6c28u: goto label_3e6c28;
        default: break;
    }

    ctx->pc = 0x3e6c24u;

    // 0x3e6c24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e6c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e6c28:
    // 0x3e6c28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e6c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6c2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e6c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e6c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6c34: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C34u;
        // 0x3e6c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6C3Cu;
    // 0x3e6c3c: 0x0  nop
    ctx->pc = 0x3e6c3cu;
    // NOP
    ctx->pc = 0x3e6c40u;
}
