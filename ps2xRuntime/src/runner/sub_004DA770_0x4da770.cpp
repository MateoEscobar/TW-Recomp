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

// Function: sub_004DA770
// Address: 0x4da770 - 0x4da798
void sub_004DA770_0x4da770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA770_0x4da770");
#endif

    ctx->pc = 0x4da770u;

    // 0x4da770: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x4da770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4da774: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA774u;
        // 0x4da778: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA77Cu;
    // 0x4da77c: 0x0  nop
    ctx->pc = 0x4da77cu;
    // NOP
    // 0x4da780: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4da780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4da784: 0x0  nop
    ctx->pc = 0x4da784u;
    // NOP
    // 0x4da788: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4da788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4da78c: 0x0  nop
    ctx->pc = 0x4da78cu;
    // NOP
    // 0x4da790: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4da790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4da794: 0x0  nop
    ctx->pc = 0x4da794u;
    // NOP
    ctx->pc = 0x4da798u;
}
