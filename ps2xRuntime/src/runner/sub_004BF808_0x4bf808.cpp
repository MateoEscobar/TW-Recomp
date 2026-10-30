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

// Function: sub_004BF808
// Address: 0x4bf808 - 0x4bf868
void sub_004BF808_0x4bf808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF808_0x4bf808");
#endif

    switch (ctx->pc) {
        case 0x4bf828u: goto label_4bf828;
        case 0x4bf834u: goto label_4bf834;
        case 0x4bf850u: goto label_4bf850;
        default: break;
    }

    ctx->pc = 0x4bf808u;

    // 0x4bf808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bf80c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BF80Cu;
    {
        const bool branch_taken_0x4bf80c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF80Cu;
        // 0x4bf810: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf80c) {
            ctx->pc = 0x4BF83Cu;
            goto label_4bf83c;
        }
    }
    ctx->pc = 0x4BF814u;
    // 0x4bf814: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x4bf814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x4bf818: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4bf818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4bf81c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4bf81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4bf820: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4BF820u;
    SET_GPR_U32(ctx, 31, 0x4BF828u);
    ctx->pc = 0x4BF824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF820u;
    // 0x4bf824: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4BF820u, 0x4BF828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF828u;
label_4bf828:
    // 0x4bf828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4bf828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf82c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4BF82Cu;
    SET_GPR_U32(ctx, 31, 0x4BF834u);
    ctx->pc = 0x4BF830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF82Cu;
    // 0x4bf830: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4BF82Cu, 0x4BF834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF834u;
label_4bf834:
    // 0x4bf834: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BF834u;
    {
        const bool branch_taken_0x4bf834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF834u;
        // 0x4bf838: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf834) {
            ctx->pc = 0x4BF858u;
            goto label_4bf858;
        }
    }
    ctx->pc = 0x4BF83Cu;
label_4bf83c:
    // 0x4bf83c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bf83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bf840: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4bf840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4bf844: 0x24a5f868  addiu       $a1, $a1, -0x798
    ctx->pc = 0x4bf844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965352));
    // 0x4bf848: 0xc11c72c  jal         func_471CB0
    ctx->pc = 0x4BF848u;
    SET_GPR_U32(ctx, 31, 0x4BF850u);
    ctx->pc = 0x4BF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF848u;
    // 0x4bf84c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x4BF848u, 0x4BF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF850u;
label_4bf850:
    // 0x4bf850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4bf850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf854: 0x0  nop
    ctx->pc = 0x4bf854u;
    // NOP
label_4bf858:
    // 0x4bf858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bf858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf85c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF85Cu;
        // 0x4bf860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF864u;
    // 0x4bf864: 0x0  nop
    ctx->pc = 0x4bf864u;
    // NOP
    ctx->pc = 0x4bf868u;
}
