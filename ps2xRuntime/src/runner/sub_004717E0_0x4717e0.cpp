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

// Function: sub_004717E0
// Address: 0x4717e0 - 0x471860
void sub_004717E0_0x4717e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004717E0_0x4717e0");
#endif

    switch (ctx->pc) {
        case 0x4717e0u: goto label_4717e0;
        case 0x4717e4u: goto label_4717e4;
        case 0x4717e8u: goto label_4717e8;
        case 0x4717ecu: goto label_4717ec;
        case 0x4717f0u: goto label_4717f0;
        case 0x4717f4u: goto label_4717f4;
        case 0x4717f8u: goto label_4717f8;
        case 0x4717fcu: goto label_4717fc;
        case 0x471800u: goto label_471800;
        case 0x471804u: goto label_471804;
        case 0x471808u: goto label_471808;
        case 0x47180cu: goto label_47180c;
        case 0x471810u: goto label_471810;
        case 0x471814u: goto label_471814;
        case 0x471818u: goto label_471818;
        case 0x47181cu: goto label_47181c;
        case 0x471820u: goto label_471820;
        case 0x471824u: goto label_471824;
        case 0x471828u: goto label_471828;
        case 0x47182cu: goto label_47182c;
        case 0x471830u: goto label_471830;
        case 0x471834u: goto label_471834;
        case 0x471838u: goto label_471838;
        case 0x47183cu: goto label_47183c;
        case 0x471840u: goto label_471840;
        case 0x471844u: goto label_471844;
        case 0x471848u: goto label_471848;
        case 0x47184cu: goto label_47184c;
        case 0x471850u: goto label_471850;
        case 0x471854u: goto label_471854;
        case 0x471858u: goto label_471858;
        case 0x47185cu: goto label_47185c;
        default: break;
    }

    ctx->pc = 0x4717e0u;

label_4717e0:
    // 0x4717e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4717e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4717e4:
    // 0x4717e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4717e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4717e8:
    // 0x4717e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4717e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4717ec:
    // 0x4717ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4717ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4717f0:
    // 0x4717f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4717f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4717f4:
    // 0x4717f4: 0x8c43ad1c  lw          $v1, -0x52E4($v0)
    ctx->pc = 0x4717f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946076)));
label_4717f8:
    // 0x4717f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4717f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4717fc:
    // 0x4717fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4717fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_471800:
    // 0x471800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_471804:
    // 0x471804: 0x2471003c  addiu       $s1, $v1, 0x3C
    ctx->pc = 0x471804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_471808:
    // 0x471808: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x471808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_47180c:
    // 0x47180c: 0x1091000c  beq         $a0, $s1, . + 4 + (0xC << 2)
label_471810:
    if (ctx->pc == 0x471810u) {
        ctx->pc = 0x471810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47180Cu;
        // 0x471810: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471814u;
        goto label_471814;
    }
    ctx->pc = 0x47180Cu;
    {
        const bool branch_taken_0x47180c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x471810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47180Cu;
        // 0x471810: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47180c) {
            ctx->pc = 0x471840u;
            goto label_471840;
        }
    }
    ctx->pc = 0x471814u;
label_471814:
    // 0x471814: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x471814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_471818:
    // 0x471818: 0x2484ffcc  addiu       $a0, $a0, -0x34
    ctx->pc = 0x471818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967244));
label_47181c:
    // 0x47181c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_471820:
    if (ctx->pc == 0x471820u) {
        ctx->pc = 0x471820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47181Cu;
        // 0x471820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471824u;
        goto label_471824;
    }
    ctx->pc = 0x47181Cu;
    {
        const bool branch_taken_0x47181c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47181c) {
            ctx->pc = 0x471820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47181Cu;
            // 0x471820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471838u;
            goto label_471838;
        }
    }
    ctx->pc = 0x471824u;
label_471824:
    // 0x471824: 0x260f809  jalr        $s3
label_471828:
    if (ctx->pc == 0x471828u) {
        ctx->pc = 0x471828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471824u;
        // 0x471828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47182Cu;
        goto label_47182c;
    }
    ctx->pc = 0x471824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x47182Cu);
        ctx->pc = 0x471828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471824u;
        // 0x471828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471824u, 0x47182Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47182Cu;
label_47182c:
    // 0x47182c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_471830:
    if (ctx->pc == 0x471830u) {
        ctx->pc = 0x471830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47182Cu;
        // 0x471830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471834u;
        goto label_471834;
    }
    ctx->pc = 0x47182Cu;
    {
        const bool branch_taken_0x47182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47182Cu;
        // 0x471830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47182c) {
            ctx->pc = 0x471844u;
            goto label_471844;
        }
    }
    ctx->pc = 0x471834u;
label_471834:
    // 0x471834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x471834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_471838:
    // 0x471838: 0x5491fff7  bnel        $a0, $s1, . + 4 + (-0x9 << 2)
label_47183c:
    if (ctx->pc == 0x47183Cu) {
        ctx->pc = 0x47183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471838u;
        // 0x47183c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471840u;
        goto label_471840;
    }
    ctx->pc = 0x471838u;
    {
        const bool branch_taken_0x471838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x471838) {
            ctx->pc = 0x47183Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471838u;
            // 0x47183c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471818;
        }
    }
    ctx->pc = 0x471840u;
label_471840:
    // 0x471840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x471840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471844:
    // 0x471844: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x471844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_471848:
    // 0x471848: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x471848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47184c:
    // 0x47184c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47184cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471850:
    // 0x471850: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x471850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471854:
    // 0x471854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_471858:
    // 0x471858: 0x3e00008  jr          $ra
label_47185c:
    if (ctx->pc == 0x47185Cu) {
        ctx->pc = 0x47185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471858u;
        // 0x47185c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471860u;
        goto label_fallthrough_0x471858;
    }
    ctx->pc = 0x471858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471858u;
        // 0x47185c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471858:
    ctx->pc = 0x471860u;
}
