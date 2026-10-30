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

// Function: sub_0010F080
// Address: 0x10f080 - 0x10f098
void sub_0010F080_0x10f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F080_0x10f080");
#endif

    ctx->pc = 0x10f080u;

    // 0x10f080: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f084: 0x3e00008  jr          $ra
    ctx->pc = 0x10F084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F084u;
        // 0x10f088: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F08Cu;
    // 0x10f08c: 0x0  nop
    ctx->pc = 0x10f08cu;
    // NOP
    // 0x10f090: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x10f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x10f094: 0x0  nop
    ctx->pc = 0x10f094u;
    // NOP
    ctx->pc = 0x10f098u;
}
