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

// Function: sub_004DE868
// Address: 0x4de868 - 0x4de8d0
void sub_004DE868_0x4de868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE868_0x4de868");
#endif

    switch (ctx->pc) {
        case 0x4de880u: goto label_4de880;
        default: break;
    }

    ctx->pc = 0x4de868u;

    // 0x4de868: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4de868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de86c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4de86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4de870: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DE870u;
    {
        const bool branch_taken_0x4de870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE870u;
        // 0x4de874: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de870) {
            ctx->pc = 0x4DE89Cu;
            goto label_4de89c;
        }
    }
    ctx->pc = 0x4DE878u;
    // 0x4de878: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4de878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de87c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4de87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4de880:
    // 0x4de880: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4de880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4de884: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE884u;
    {
        const bool branch_taken_0x4de884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de884) {
            ctx->pc = 0x4DE888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE884u;
            // 0x4de888: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE894u;
            goto label_4de894;
        }
    }
    ctx->pc = 0x4DE88Cu;
    // 0x4de88c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4de88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de890: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4de890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4de894:
    // 0x4de894: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DE894u;
    {
        const bool branch_taken_0x4de894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de894) {
            ctx->pc = 0x4DE898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE894u;
            // 0x4de898: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de880;
        }
    }
    ctx->pc = 0x4DE89Cu;
label_4de89c:
    // 0x4de89c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4de89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de8a0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4de8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4de8a4: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DE8A4u;
    {
        const bool branch_taken_0x4de8a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE8A4u;
        // 0x4de8a8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de8a4) {
            ctx->pc = 0x4DE8C0u;
            goto label_4de8c0;
        }
    }
    ctx->pc = 0x4DE8ACu;
    // 0x4de8ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4de8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de8b0: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4de8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4de8b4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4de8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4de8b8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DE8B8u;
    {
        const bool branch_taken_0x4de8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de8b8) {
            ctx->pc = 0x4DE8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE8B8u;
            // 0x4de8bc: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE8C4u;
            goto label_4de8c4;
        }
    }
    ctx->pc = 0x4DE8C0u;
label_4de8c0:
    // 0x4de8c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4de8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4de8c4:
    // 0x4de8c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4de8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE8C8u;
        // 0x4de8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE8D0u;
}
