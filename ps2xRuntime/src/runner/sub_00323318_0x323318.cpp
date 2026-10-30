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

// Function: sub_00323318
// Address: 0x323318 - 0x323330
void sub_00323318_0x323318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323318_0x323318");
#endif

    ctx->pc = 0x323318u;

    // 0x323318: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x323318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32331c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323320: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x323320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323324: 0x3e00008  jr          $ra
    ctx->pc = 0x323324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323324u;
        // 0x323328: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32332Cu;
    // 0x32332c: 0x0  nop
    ctx->pc = 0x32332cu;
    // NOP
    ctx->pc = 0x323330u;
}
