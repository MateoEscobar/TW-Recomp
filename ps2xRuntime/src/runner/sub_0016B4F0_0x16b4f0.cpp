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

// Function: sub_0016B4F0
// Address: 0x16b4f0 - 0x16b580
void sub_0016B4F0_0x16b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B4F0_0x16b4f0");
#endif

    switch (ctx->pc) {
        case 0x16b524u: goto label_16b524;
        case 0x16b530u: goto label_16b530;
        case 0x16b538u: goto label_16b538;
        case 0x16b540u: goto label_16b540;
        case 0x16b550u: goto label_16b550;
        default: break;
    }

    ctx->pc = 0x16b4f0u;

    // 0x16b4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b4f4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b4f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16b4fc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16b500: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b504: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b504u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b508: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b50c: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x16b50cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x16b510: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b514: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16B514u;
    {
        const bool branch_taken_0x16b514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B514u;
        // 0x16b518: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b514) {
            ctx->pc = 0x16B564u;
            goto label_16b564;
        }
    }
    ctx->pc = 0x16B51Cu;
    // 0x16b51c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B51Cu;
    SET_GPR_U32(ctx, 31, 0x16B524u);
    ctx->pc = 0x16B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B51Cu;
    // 0x16b520: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B51Cu, 0x16B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B524u;
label_16b524:
    // 0x16b524: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16b524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x16b528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b52c: 0x0  nop
    ctx->pc = 0x16b52cu;
    // NOP
label_16b530:
    // 0x16b530: 0xc137866  jal         func_4DE198
    ctx->pc = 0x16B530u;
    SET_GPR_U32(ctx, 31, 0x16B538u);
    ctx->pc = 0x16B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B530u;
    // 0x16b534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16B530u, 0x16B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B538u;
label_16b538:
    // 0x16b538: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B538u;
    SET_GPR_U32(ctx, 31, 0x16B540u);
    ctx->pc = 0x16B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B538u;
    // 0x16b53c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B538u, 0x16B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B540u;
label_16b540:
    // 0x16b540: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B540u;
    {
        const bool branch_taken_0x16b540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b540) {
            ctx->pc = 0x16B544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B540u;
            // 0x16b544: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B558u;
            goto label_16b558;
        }
    }
    ctx->pc = 0x16B548u;
    // 0x16b548: 0xc087502  jal         func_21D408
    ctx->pc = 0x16B548u;
    SET_GPR_U32(ctx, 31, 0x16B550u);
    ctx->pc = 0x16B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B548u;
    // 0x16b54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B548u, 0x16B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B550u;
label_16b550:
    // 0x16b550: 0xac520224  sw          $s2, 0x224($v0)
    ctx->pc = 0x16b550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 548), GPR_U32(ctx, 18));
    // 0x16b554: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16b558:
    // 0x16b558: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16b558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b55c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16B55Cu;
    {
        const bool branch_taken_0x16b55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b55c) {
            ctx->pc = 0x16B560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B55Cu;
            // 0x16b560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b530;
        }
    }
    ctx->pc = 0x16B564u;
label_16b564:
    // 0x16b564: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b568: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b56c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16b56cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b574: 0x3e00008  jr          $ra
    ctx->pc = 0x16B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B574u;
        // 0x16b578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B57Cu;
    // 0x16b57c: 0x0  nop
    ctx->pc = 0x16b57cu;
    // NOP
    ctx->pc = 0x16b580u;
}
