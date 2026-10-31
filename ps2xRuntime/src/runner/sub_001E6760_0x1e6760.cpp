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

// Function: sub_001E6760
// Address: 0x1e6760 - 0x1e6778
void sub_001E6760_0x1e6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6760_0x1e6760");
#endif

    switch (ctx->pc) {
        case 0x1e6764u: goto label_1e6764;
        default: break;
    }

    ctx->pc = 0x1e6760u;

    // 0x1e6760: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6764:
    // 0x1e6764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e676c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6770: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6770u;
        // 0x1e6774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6778u;
}
