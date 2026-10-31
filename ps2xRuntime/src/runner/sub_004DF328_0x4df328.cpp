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

// Function: sub_004DF328
// Address: 0x4df328 - 0x4df390
void sub_004DF328_0x4df328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF328_0x4df328");
#endif

    switch (ctx->pc) {
        case 0x4df340u: goto label_4df340;
        default: break;
    }

    ctx->pc = 0x4df328u;

    // 0x4df328: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4df328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df32c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4df32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4df330: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DF330u;
    {
        const bool branch_taken_0x4df330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF330u;
        // 0x4df334: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df330) {
            ctx->pc = 0x4DF35Cu;
            goto label_4df35c;
        }
    }
    ctx->pc = 0x4DF338u;
    // 0x4df338: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4df338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df33c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4df33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4df340:
    // 0x4df340: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4df340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4df344: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DF344u;
    {
        const bool branch_taken_0x4df344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df344) {
            ctx->pc = 0x4DF348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF344u;
            // 0x4df348: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF354u;
            goto label_4df354;
        }
    }
    ctx->pc = 0x4DF34Cu;
    // 0x4df34c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4df34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df350: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4df350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4df354:
    // 0x4df354: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DF354u;
    {
        const bool branch_taken_0x4df354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df354) {
            ctx->pc = 0x4DF358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF354u;
            // 0x4df358: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4df340;
        }
    }
    ctx->pc = 0x4DF35Cu;
label_4df35c:
    // 0x4df35c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4df35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df360: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4df360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4df364: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DF364u;
    {
        const bool branch_taken_0x4df364 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF364u;
        // 0x4df368: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df364) {
            ctx->pc = 0x4DF380u;
            goto label_4df380;
        }
    }
    ctx->pc = 0x4DF36Cu;
    // 0x4df36c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4df36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df370: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4df370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4df374: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4df374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4df378: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DF378u;
    {
        const bool branch_taken_0x4df378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df378) {
            ctx->pc = 0x4DF37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF378u;
            // 0x4df37c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF384u;
            goto label_4df384;
        }
    }
    ctx->pc = 0x4DF380u;
label_4df380:
    // 0x4df380: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4df380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4df384:
    // 0x4df384: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4df384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df388: 0x3e00008  jr          $ra
    ctx->pc = 0x4DF388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF388u;
        // 0x4df38c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF390u;
}
