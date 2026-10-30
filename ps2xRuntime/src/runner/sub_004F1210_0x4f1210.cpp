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

// Function: sub_004F1210
// Address: 0x4f1210 - 0x4f1220
void sub_004F1210_0x4f1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1210_0x4f1210");
#endif

    ctx->pc = 0x4f1210u;

    // 0x4f1210: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1210u;
        // 0x4f1214: 0x24820050  addiu       $v0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1218u;
    // 0x4f1218: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4f1218u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x4f121c: 0x0  nop
    ctx->pc = 0x4f121cu;
    // NOP
    ctx->pc = 0x4f1220u;
}
