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

// Function: sub_001E5114
// Address: 0x1e5114 - 0x1e5130
void sub_001E5114_0x1e5114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5114_0x1e5114");
#endif

    switch (ctx->pc) {
        case 0x1e5118u: goto label_1e5118;
        default: break;
    }

    ctx->pc = 0x1e5114u;

    // 0x1e5114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5118:
    // 0x1e5118: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e5118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e511c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e511cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5124: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5124u;
        // 0x1e5128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E512Cu;
    // 0x1e512c: 0x0  nop
    ctx->pc = 0x1e512cu;
    // NOP
    ctx->pc = 0x1e5130u;
}
