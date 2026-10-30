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

// Function: sub_001BB7C0
// Address: 0x1bb7c0 - 0x1bb878
void sub_001BB7C0_0x1bb7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB7C0_0x1bb7c0");
#endif

    switch (ctx->pc) {
        case 0x1bb7c0u: goto label_1bb7c0;
        case 0x1bb7c4u: goto label_1bb7c4;
        case 0x1bb7c8u: goto label_1bb7c8;
        case 0x1bb7ccu: goto label_1bb7cc;
        case 0x1bb7d0u: goto label_1bb7d0;
        case 0x1bb7d4u: goto label_1bb7d4;
        case 0x1bb7d8u: goto label_1bb7d8;
        case 0x1bb7dcu: goto label_1bb7dc;
        case 0x1bb7e0u: goto label_1bb7e0;
        case 0x1bb7e4u: goto label_1bb7e4;
        case 0x1bb7e8u: goto label_1bb7e8;
        case 0x1bb7ecu: goto label_1bb7ec;
        case 0x1bb7f0u: goto label_1bb7f0;
        case 0x1bb7f4u: goto label_1bb7f4;
        case 0x1bb7f8u: goto label_1bb7f8;
        case 0x1bb7fcu: goto label_1bb7fc;
        case 0x1bb800u: goto label_1bb800;
        case 0x1bb804u: goto label_1bb804;
        case 0x1bb808u: goto label_1bb808;
        case 0x1bb80cu: goto label_1bb80c;
        case 0x1bb810u: goto label_1bb810;
        case 0x1bb814u: goto label_1bb814;
        case 0x1bb818u: goto label_1bb818;
        case 0x1bb81cu: goto label_1bb81c;
        case 0x1bb820u: goto label_1bb820;
        case 0x1bb824u: goto label_1bb824;
        case 0x1bb828u: goto label_1bb828;
        case 0x1bb82cu: goto label_1bb82c;
        case 0x1bb830u: goto label_1bb830;
        case 0x1bb834u: goto label_1bb834;
        case 0x1bb838u: goto label_1bb838;
        case 0x1bb83cu: goto label_1bb83c;
        case 0x1bb840u: goto label_1bb840;
        case 0x1bb844u: goto label_1bb844;
        case 0x1bb848u: goto label_1bb848;
        case 0x1bb84cu: goto label_1bb84c;
        case 0x1bb850u: goto label_1bb850;
        case 0x1bb854u: goto label_1bb854;
        case 0x1bb858u: goto label_1bb858;
        case 0x1bb85cu: goto label_1bb85c;
        case 0x1bb860u: goto label_1bb860;
        case 0x1bb864u: goto label_1bb864;
        case 0x1bb868u: goto label_1bb868;
        case 0x1bb86cu: goto label_1bb86c;
        case 0x1bb870u: goto label_1bb870;
        case 0x1bb874u: goto label_1bb874;
        default: break;
    }

    ctx->pc = 0x1bb7c0u;

label_1bb7c0:
    // 0x1bb7c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bb7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bb7c4:
    // 0x1bb7c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bb7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1bb7c8:
    // 0x1bb7c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bb7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1bb7cc:
    // 0x1bb7cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bb7ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb7d0:
    // 0x1bb7d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bb7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1bb7d4:
    // 0x1bb7d4: 0x26700040  addiu       $s0, $s3, 0x40
    ctx->pc = 0x1bb7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1bb7d8:
    // 0x1bb7d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb7dc:
    // 0x1bb7dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bb7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb7e0:
    // 0x1bb7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bb7e4:
    // 0x1bb7e4: 0x0  nop
    ctx->pc = 0x1bb7e4u;
    // NOP
label_1bb7e8:
    // 0x1bb7e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb7ec:
    // 0x1bb7ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bb7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bb7f0:
    // 0x1bb7f0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1bb7f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1bb7f4:
    // 0x1bb7f4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1bb7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1bb7f8:
    // 0x1bb7f8: 0x60f809  jalr        $v1
label_1bb7fc:
    if (ctx->pc == 0x1BB7FCu) {
        ctx->pc = 0x1BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7F8u;
        // 0x1bb7fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB800u;
        goto label_1bb800;
    }
    ctx->pc = 0x1BB7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB800u);
        ctx->pc = 0x1BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7F8u;
        // 0x1bb7fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB7F8u, 0x1BB800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB800u;
label_1bb800:
    // 0x1bb800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb804:
    // 0x1bb804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb808:
    // 0x1bb808: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1bb808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1bb80c:
    // 0x1bb80c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1bb80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1bb810:
    // 0x1bb810: 0x60f809  jalr        $v1
label_1bb814:
    if (ctx->pc == 0x1BB814u) {
        ctx->pc = 0x1BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB810u;
        // 0x1bb814: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB818u;
        goto label_1bb818;
    }
    ctx->pc = 0x1BB810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB818u);
        ctx->pc = 0x1BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB810u;
        // 0x1bb814: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB810u, 0x1BB818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB818u;
label_1bb818:
    // 0x1bb818: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1bb818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1bb81c:
    // 0x1bb81c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1bb820:
    if (ctx->pc == 0x1BB820u) {
        ctx->pc = 0x1BB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB81Cu;
        // 0x1bb820: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB824u;
        goto label_1bb824;
    }
    ctx->pc = 0x1BB81Cu;
    {
        const bool branch_taken_0x1bb81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB81Cu;
        // 0x1bb820: 0x26100430  addiu       $s0, $s0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb81c) {
            ctx->pc = 0x1BB7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb7e8;
        }
    }
    ctx->pc = 0x1BB824u;
label_1bb824:
    // 0x1bb824: 0x26701100  addiu       $s0, $s3, 0x1100
    ctx->pc = 0x1bb824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4352));
label_1bb828:
    // 0x1bb828: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bb828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb82c:
    // 0x1bb82c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1bb82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb830:
    // 0x1bb830: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bb830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb834:
    // 0x1bb834: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bb834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bb838:
    // 0x1bb838: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1bb838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1bb83c:
    // 0x1bb83c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1bb83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1bb840:
    // 0x1bb840: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1bb840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1bb844:
    // 0x1bb844: 0x40f809  jalr        $v0
label_1bb848:
    if (ctx->pc == 0x1BB848u) {
        ctx->pc = 0x1BB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB844u;
        // 0x1bb848: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB84Cu;
        goto label_1bb84c;
    }
    ctx->pc = 0x1BB844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB84Cu);
        ctx->pc = 0x1BB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB844u;
        // 0x1bb848: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB844u, 0x1BB84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB84Cu;
label_1bb84c:
    // 0x1bb84c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1bb84cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bb850:
    // 0x1bb850: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1bb854:
    if (ctx->pc == 0x1BB854u) {
        ctx->pc = 0x1BB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB850u;
        // 0x1bb854: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB858u;
        goto label_1bb858;
    }
    ctx->pc = 0x1BB850u;
    {
        const bool branch_taken_0x1bb850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB850u;
        // 0x1bb854: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb850) {
            ctx->pc = 0x1BB830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb830;
        }
    }
    ctx->pc = 0x1BB858u;
label_1bb858:
    // 0x1bb858: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1bb858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1bb85c:
    // 0x1bb85c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bb85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bb860:
    // 0x1bb860: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bb860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb864:
    // 0x1bb864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb868:
    // 0x1bb868: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bb868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb86c:
    // 0x1bb86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb870:
    // 0x1bb870: 0x3e00008  jr          $ra
label_1bb874:
    if (ctx->pc == 0x1BB874u) {
        ctx->pc = 0x1BB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB870u;
        // 0x1bb874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB878u;
        goto label_fallthrough_0x1bb870;
    }
    ctx->pc = 0x1BB870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB870u;
        // 0x1bb874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bb870:
    ctx->pc = 0x1BB878u;
}
