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

// Function: sub_00111CC0
// Address: 0x111cc0 - 0x111d00
void sub_00111CC0_0x111cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111CC0_0x111cc0");
#endif

    ctx->pc = 0x111cc0u;

    // 0x111cc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x111cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111cc4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x111CC4u;
    {
        const bool branch_taken_0x111cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111cc4) {
            ctx->pc = 0x111CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111CC4u;
            // 0x111cc8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111CD8u;
            goto label_111cd8;
        }
    }
    ctx->pc = 0x111CCCu;
    // 0x111ccc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x111cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x111cd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111CD0u;
    {
        const bool branch_taken_0x111cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CD0u;
        // 0x111cd4: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cd0) {
            ctx->pc = 0x111CE4u;
            goto label_111ce4;
        }
    }
    ctx->pc = 0x111CD8u;
label_111cd8:
    // 0x111cd8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x111cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x111cdc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x111cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x111ce0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x111ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_111ce4:
    // 0x111ce4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x111ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x111ce8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x111ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x111cec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x111cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x111cf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x111CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CF4u;
        // 0x111cf8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CFCu;
    // 0x111cfc: 0x0  nop
    ctx->pc = 0x111cfcu;
    // NOP
    ctx->pc = 0x111d00u;
}
