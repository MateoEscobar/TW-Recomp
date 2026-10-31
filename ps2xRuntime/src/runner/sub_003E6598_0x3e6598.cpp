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

// Function: sub_003E6598
// Address: 0x3e6598 - 0x3e65b0
void sub_003E6598_0x3e6598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6598_0x3e6598");
#endif

    switch (ctx->pc) {
        case 0x3e659cu: goto label_3e659c;
        default: break;
    }

    ctx->pc = 0x3e6598u;

    // 0x3e6598: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e6598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e659c:
    // 0x3e659c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e659cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e65a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e65a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e65a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e65a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e65a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E65A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E65A8u;
        // 0x3e65ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E65A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E65B0u;
}
