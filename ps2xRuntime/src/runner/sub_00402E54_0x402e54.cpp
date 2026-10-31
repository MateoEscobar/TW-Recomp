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

// Function: sub_00402E54
// Address: 0x402e54 - 0x402e70
void sub_00402E54_0x402e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402E54_0x402e54");
#endif

    switch (ctx->pc) {
        case 0x402e58u: goto label_402e58;
        default: break;
    }

    ctx->pc = 0x402e54u;

    // 0x402e54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x402e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_402e58:
    // 0x402e58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x402e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x402e5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x402e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402e60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x402e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x402e64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x402e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402e68: 0x3e00008  jr          $ra
    ctx->pc = 0x402E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E68u;
        // 0x402e6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x402E70u;
}
