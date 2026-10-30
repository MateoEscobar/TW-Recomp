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

// Function: sub_004225D8
// Address: 0x4225d8 - 0x4225f0
void sub_004225D8_0x4225d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004225D8_0x4225d8");
#endif

    switch (ctx->pc) {
        case 0x4225dcu: goto label_4225dc;
        default: break;
    }

    ctx->pc = 0x4225d8u;

    // 0x4225d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4225d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4225dc:
    // 0x4225dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4225dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4225e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4225e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4225e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4225e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4225e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4225E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225E8u;
        // 0x4225ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4225E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4225F0u;
}
