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

// Function: sub_0016D810
// Address: 0x16d810 - 0x16d860
void sub_0016D810_0x16d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D810_0x16d810");
#endif

    ctx->pc = 0x16d810u;

    // 0x16d810: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16d810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d814: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d818: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x16d81c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16d820: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D820u;
    {
        const bool branch_taken_0x16d820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D820u;
        // 0x16d824: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d820) {
            ctx->pc = 0x16D840u;
            goto label_16d840;
        }
    }
    ctx->pc = 0x16D828u;
    // 0x16d828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d82c: 0x24a40024  addiu       $a0, $a1, 0x24
    ctx->pc = 0x16d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x16d830: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d834: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d838: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D838u;
    {
        const bool branch_taken_0x16d838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d838) {
            ctx->pc = 0x16D83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D838u;
            // 0x16d83c: 0x8ca3004c  lw          $v1, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D84Cu;
            goto label_16d84c;
        }
    }
    ctx->pc = 0x16D840u;
label_16d840:
    // 0x16d840: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x16d840u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x16d844: 0x24a40024  addiu       $a0, $a1, 0x24
    ctx->pc = 0x16d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x16d848: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_16d84c:
    // 0x16d84c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d850: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d854: 0x3e00008  jr          $ra
    ctx->pc = 0x16D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D854u;
        // 0x16d858: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D85Cu;
    // 0x16d85c: 0x0  nop
    ctx->pc = 0x16d85cu;
    // NOP
    ctx->pc = 0x16d860u;
}
