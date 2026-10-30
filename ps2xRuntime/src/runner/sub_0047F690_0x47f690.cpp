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

// Function: sub_0047F690
// Address: 0x47f690 - 0x47f6c8
void sub_0047F690_0x47f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F690_0x47f690");
#endif

    switch (ctx->pc) {
        case 0x47f698u: goto label_47f698;
        default: break;
    }

    ctx->pc = 0x47f690u;

    // 0x47f690: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x47f690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x47f694: 0x0  nop
    ctx->pc = 0x47f694u;
    // NOP
label_47f698:
    // 0x47f698: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x47F698u;
    {
        const bool branch_taken_0x47f698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f698) {
            ctx->pc = 0x47F6B4u;
            goto label_47f6b4;
        }
    }
    ctx->pc = 0x47F6A0u;
    // 0x47f6a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47f6a4: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x47F6A4u;
    {
        const bool branch_taken_0x47f6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x47f6a4) {
            ctx->pc = 0x47F6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F6A4u;
            // 0x47f6a8: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f698;
        }
    }
    ctx->pc = 0x47F6ACu;
    // 0x47f6ac: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x47F6ACu;
    {
        const bool branch_taken_0x47f6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f6ac) {
            ctx->pc = 0x47F6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F6ACu;
            // 0x47f6b0: 0xac66001c  sw          $a2, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F6BCu;
            goto label_47f6bc;
        }
    }
    ctx->pc = 0x47F6B4u;
label_47f6b4:
    // 0x47f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x47F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F6B4u;
        // 0x47f6b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F6BCu;
label_47f6bc:
    // 0x47f6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x47F6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F6BCu;
        // 0x47f6c0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F6C4u;
    // 0x47f6c4: 0x0  nop
    ctx->pc = 0x47f6c4u;
    // NOP
    ctx->pc = 0x47f6c8u;
}
