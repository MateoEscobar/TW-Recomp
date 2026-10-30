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

// Function: sub_004DE458
// Address: 0x4de458 - 0x4de4c0
void sub_004DE458_0x4de458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE458_0x4de458");
#endif

    switch (ctx->pc) {
        case 0x4de470u: goto label_4de470;
        default: break;
    }

    ctx->pc = 0x4de458u;

    // 0x4de458: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4de458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de45c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4de45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4de460: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DE460u;
    {
        const bool branch_taken_0x4de460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE460u;
        // 0x4de464: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de460) {
            ctx->pc = 0x4DE48Cu;
            goto label_4de48c;
        }
    }
    ctx->pc = 0x4DE468u;
    // 0x4de468: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4de468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de46c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4de46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4de470:
    // 0x4de470: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4de470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4de474: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE474u;
    {
        const bool branch_taken_0x4de474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de474) {
            ctx->pc = 0x4DE478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE474u;
            // 0x4de478: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE484u;
            goto label_4de484;
        }
    }
    ctx->pc = 0x4DE47Cu;
    // 0x4de47c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4de47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de480: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4de480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4de484:
    // 0x4de484: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DE484u;
    {
        const bool branch_taken_0x4de484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de484) {
            ctx->pc = 0x4DE488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE484u;
            // 0x4de488: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de470;
        }
    }
    ctx->pc = 0x4DE48Cu;
label_4de48c:
    // 0x4de48c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4de48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de490: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4de490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4de494: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DE494u;
    {
        const bool branch_taken_0x4de494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE494u;
        // 0x4de498: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de494) {
            ctx->pc = 0x4DE4B0u;
            goto label_4de4b0;
        }
    }
    ctx->pc = 0x4DE49Cu;
    // 0x4de49c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4de49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de4a0: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4de4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4de4a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4de4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4de4a8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DE4A8u;
    {
        const bool branch_taken_0x4de4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de4a8) {
            ctx->pc = 0x4DE4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE4A8u;
            // 0x4de4ac: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE4B4u;
            goto label_4de4b4;
        }
    }
    ctx->pc = 0x4DE4B0u;
label_4de4b0:
    // 0x4de4b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4de4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4de4b4:
    // 0x4de4b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4de4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE4B8u;
        // 0x4de4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE4C0u;
}
