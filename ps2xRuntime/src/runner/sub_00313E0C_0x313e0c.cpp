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

// Function: sub_00313E0C
// Address: 0x313e0c - 0x313e30
void sub_00313E0C_0x313e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313E0C_0x313e0c");
#endif

    switch (ctx->pc) {
        case 0x313e10u: goto label_313e10;
        default: break;
    }

    ctx->pc = 0x313e0cu;

    // 0x313e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313e10:
    // 0x313e10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x313e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313e14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x313e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313e18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x313e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313e1c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x313e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313e24: 0x3e00008  jr          $ra
    ctx->pc = 0x313E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E24u;
        // 0x313e28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313E2Cu;
    // 0x313e2c: 0x0  nop
    ctx->pc = 0x313e2cu;
    // NOP
    ctx->pc = 0x313e30u;
}
