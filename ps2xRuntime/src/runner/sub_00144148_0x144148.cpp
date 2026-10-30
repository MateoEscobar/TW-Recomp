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

// Function: sub_00144148
// Address: 0x144148 - 0x144180
void sub_00144148_0x144148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144148_0x144148");
#endif

    ctx->pc = 0x144148u;

    // 0x144148: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x144148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x14414c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x14414cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x144150: 0x8d03b6d4  lw          $v1, -0x492C($t0)
    ctx->pc = 0x144150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B6D4u));
    // 0x144154: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x144154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x144158: 0x24c6c5f0  addiu       $a2, $a2, -0x3A10
    ctx->pc = 0x144158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952432));
    // 0x14415c: 0x24e7a5f0  addiu       $a3, $a3, -0x5A10
    ctx->pc = 0x14415cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944240));
    // 0x144160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144164: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x144164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144168: 0xad03b6d4  sw          $v1, -0x492C($t0)
    ctx->pc = 0x144168u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294948564), GPR_U32(ctx, 3));
    // 0x14416c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x14416cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x144170: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x144170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x144174: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x144174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x144178: 0x3e00008  jr          $ra
    ctx->pc = 0x144178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144178u;
        // 0x14417c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144180u;
}
