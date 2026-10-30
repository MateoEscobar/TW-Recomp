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

// Function: sub_004E9230
// Address: 0x4e9230 - 0x4e9248
void sub_004E9230_0x4e9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9230_0x4e9230");
#endif

    ctx->pc = 0x4e9230u;

    // 0x4e9230: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x4e9230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x4e9234: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4e9234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e9238: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e923c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4e923cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e9240: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9240u;
        // 0x4e9244: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9248u;
}
