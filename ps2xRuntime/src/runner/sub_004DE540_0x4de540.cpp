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

// Function: sub_004DE540
// Address: 0x4de540 - 0x4de5a8
void sub_004DE540_0x4de540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE540_0x4de540");
#endif

    switch (ctx->pc) {
        case 0x4de558u: goto label_4de558;
        default: break;
    }

    ctx->pc = 0x4de540u;

    // 0x4de540: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4de540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de544: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4de544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4de548: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DE548u;
    {
        const bool branch_taken_0x4de548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE548u;
        // 0x4de54c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de548) {
            ctx->pc = 0x4DE574u;
            goto label_4de574;
        }
    }
    ctx->pc = 0x4DE550u;
    // 0x4de550: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4de550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de554: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4de554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4de558:
    // 0x4de558: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4de558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4de55c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE55Cu;
    {
        const bool branch_taken_0x4de55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de55c) {
            ctx->pc = 0x4DE560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE55Cu;
            // 0x4de560: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE56Cu;
            goto label_4de56c;
        }
    }
    ctx->pc = 0x4DE564u;
    // 0x4de564: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4de564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de568: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4de568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4de56c:
    // 0x4de56c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DE56Cu;
    {
        const bool branch_taken_0x4de56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de56c) {
            ctx->pc = 0x4DE570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE56Cu;
            // 0x4de570: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de558;
        }
    }
    ctx->pc = 0x4DE574u;
label_4de574:
    // 0x4de574: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4de574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de578: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4de578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4de57c: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DE57Cu;
    {
        const bool branch_taken_0x4de57c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE57Cu;
        // 0x4de580: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de57c) {
            ctx->pc = 0x4DE598u;
            goto label_4de598;
        }
    }
    ctx->pc = 0x4DE584u;
    // 0x4de584: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4de584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de588: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4de588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4de58c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4de58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4de590: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DE590u;
    {
        const bool branch_taken_0x4de590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de590) {
            ctx->pc = 0x4DE594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE590u;
            // 0x4de594: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE59Cu;
            goto label_4de59c;
        }
    }
    ctx->pc = 0x4DE598u;
label_4de598:
    // 0x4de598: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4de598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4de59c:
    // 0x4de59c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4de59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE5A0u;
        // 0x4de5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE5A8u;
}
