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

// Function: sub_004E8850
// Address: 0x4e8850 - 0x4e8890
void sub_004E8850_0x4e8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8850_0x4e8850");
#endif

    switch (ctx->pc) {
        case 0x4e8868u: goto label_4e8868;
        default: break;
    }

    ctx->pc = 0x4e8850u;

    // 0x4e8850: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e8850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e8854: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e8854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e8858: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E8858u;
    {
        const bool branch_taken_0x4e8858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8858) {
            ctx->pc = 0x4E885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8858u;
            // 0x4e885c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8888u;
            goto label_4e8888;
        }
    }
    ctx->pc = 0x4E8860u;
    // 0x4e8860: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e8860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e8864: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e8864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e8868:
    // 0x4e8868: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e8868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e886c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E886Cu;
    {
        const bool branch_taken_0x4e886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e886c) {
            ctx->pc = 0x4E8870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E886Cu;
            // 0x4e8870: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E887Cu;
            goto label_4e887c;
        }
    }
    ctx->pc = 0x4E8874u;
    // 0x4e8874: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e8874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8878: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e8878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e887c:
    // 0x4e887c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E887Cu;
    {
        const bool branch_taken_0x4e887c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e887c) {
            ctx->pc = 0x4E8880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E887Cu;
            // 0x4e8880: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8868;
        }
    }
    ctx->pc = 0x4E8884u;
    // 0x4e8884: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e8884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e8888:
    // 0x4e8888: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8888u;
        // 0x4e888c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8890u;
}
