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

// Function: sub_002510F8
// Address: 0x2510f8 - 0x251150
void sub_002510F8_0x2510f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002510F8_0x2510f8");
#endif

    switch (ctx->pc) {
        case 0x251118u: goto label_251118;
        default: break;
    }

    ctx->pc = 0x2510f8u;

    // 0x2510f8: 0x9082001e  lbu         $v0, 0x1E($a0)
    ctx->pc = 0x2510f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x2510fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2510FCu;
    {
        const bool branch_taken_0x2510fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510fc) {
            ctx->pc = 0x251148u;
            goto label_251148;
        }
    }
    ctx->pc = 0x251104u;
    // 0x251104: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x251104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x251108: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x251108u;
    {
        const bool branch_taken_0x251108 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251108u;
        // 0x25110c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251108) {
            ctx->pc = 0x251148u;
            goto label_251148;
        }
    }
    ctx->pc = 0x251110u;
    // 0x251110: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x251110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x251114: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x251114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_251118:
    // 0x251118: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x251118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25111c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25111Cu;
    {
        const bool branch_taken_0x25111c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x251120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25111Cu;
        // 0x251120: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25111c) {
            ctx->pc = 0x25113Cu;
            goto label_25113c;
        }
    }
    ctx->pc = 0x251124u;
    // 0x251124: 0x9083001e  lbu         $v1, 0x1E($a0)
    ctx->pc = 0x251124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x251128: 0x90a2001e  lbu         $v0, 0x1E($a1)
    ctx->pc = 0x251128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x25112c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25112Cu;
    {
        const bool branch_taken_0x25112c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x251130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25112Cu;
        // 0x251130: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25112c) {
            ctx->pc = 0x251140u;
            goto label_251140;
        }
    }
    ctx->pc = 0x251134u;
    // 0x251134: 0x3e00008  jr          $ra
    ctx->pc = 0x251134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251134u;
        // 0x251138: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25113Cu;
label_25113c:
    // 0x25113c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x25113cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_251140:
    // 0x251140: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x251140u;
    {
        const bool branch_taken_0x251140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251140u;
        // 0x251144: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251140) {
            ctx->pc = 0x251118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251118;
        }
    }
    ctx->pc = 0x251148u;
label_251148:
    // 0x251148: 0x3e00008  jr          $ra
    ctx->pc = 0x251148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251148u;
        // 0x25114c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251150u;
}
