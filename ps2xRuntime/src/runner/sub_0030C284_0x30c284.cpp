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

// Function: sub_0030C284
// Address: 0x30c284 - 0x30c2a8
void sub_0030C284_0x30c284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C284_0x30c284");
#endif

    switch (ctx->pc) {
        case 0x30c288u: goto label_30c288;
        case 0x30c28cu: goto label_30c28c;
        default: break;
    }

    ctx->pc = 0x30c284u;

    // 0x30c284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c288:
    // 0x30c288: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30c288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30c28c:
    // 0x30c28c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30c28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c294: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30c294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c29c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C29Cu;
        // 0x30c2a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C2A4u;
    // 0x30c2a4: 0x0  nop
    ctx->pc = 0x30c2a4u;
    // NOP
    ctx->pc = 0x30c2a8u;
}
