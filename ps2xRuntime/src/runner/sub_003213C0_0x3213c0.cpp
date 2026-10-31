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

// Function: sub_003213C0
// Address: 0x3213c0 - 0x3213d8
void sub_003213C0_0x3213c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003213C0_0x3213c0");
#endif

    switch (ctx->pc) {
        case 0x3213c4u: goto label_3213c4;
        default: break;
    }

    ctx->pc = 0x3213c0u;

    // 0x3213c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3213c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3213c4:
    // 0x3213c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3213c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3213c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3213c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3213cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3213ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3213d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3213D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3213D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213D0u;
        // 0x3213d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3213D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3213D8u;
}
