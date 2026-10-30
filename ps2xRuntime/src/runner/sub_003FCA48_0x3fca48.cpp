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

// Function: sub_003FCA48
// Address: 0x3fca48 - 0x3fca68
void sub_003FCA48_0x3fca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCA48_0x3fca48");
#endif

    switch (ctx->pc) {
        case 0x3fca4cu: goto label_3fca4c;
        default: break;
    }

    ctx->pc = 0x3fca48u;

    // 0x3fca48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3fca48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fca4c:
    // 0x3fca4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3fca4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fca50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fca50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fca54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3fca54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fca58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA5Cu;
        // 0x3fca60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCA64u;
    // 0x3fca64: 0x0  nop
    ctx->pc = 0x3fca64u;
    // NOP
    ctx->pc = 0x3fca68u;
}
