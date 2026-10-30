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

// Function: sub_001DB7E8
// Address: 0x1db7e8 - 0x1db870
void sub_001DB7E8_0x1db7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB7E8_0x1db7e8");
#endif

    switch (ctx->pc) {
        case 0x1db7e8u: goto label_1db7e8;
        case 0x1db7ecu: goto label_1db7ec;
        case 0x1db7f0u: goto label_1db7f0;
        case 0x1db7f4u: goto label_1db7f4;
        case 0x1db7f8u: goto label_1db7f8;
        case 0x1db7fcu: goto label_1db7fc;
        case 0x1db800u: goto label_1db800;
        case 0x1db804u: goto label_1db804;
        case 0x1db808u: goto label_1db808;
        case 0x1db80cu: goto label_1db80c;
        case 0x1db810u: goto label_1db810;
        case 0x1db814u: goto label_1db814;
        case 0x1db818u: goto label_1db818;
        case 0x1db81cu: goto label_1db81c;
        case 0x1db820u: goto label_1db820;
        case 0x1db824u: goto label_1db824;
        case 0x1db828u: goto label_1db828;
        case 0x1db82cu: goto label_1db82c;
        case 0x1db830u: goto label_1db830;
        case 0x1db834u: goto label_1db834;
        case 0x1db838u: goto label_1db838;
        case 0x1db83cu: goto label_1db83c;
        case 0x1db840u: goto label_1db840;
        case 0x1db844u: goto label_1db844;
        case 0x1db848u: goto label_1db848;
        case 0x1db84cu: goto label_1db84c;
        case 0x1db850u: goto label_1db850;
        case 0x1db854u: goto label_1db854;
        case 0x1db858u: goto label_1db858;
        case 0x1db85cu: goto label_1db85c;
        case 0x1db860u: goto label_1db860;
        case 0x1db864u: goto label_1db864;
        case 0x1db868u: goto label_1db868;
        case 0x1db86cu: goto label_1db86c;
        default: break;
    }

    ctx->pc = 0x1db7e8u;

label_1db7e8:
    // 0x1db7e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1db7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1db7ec:
    // 0x1db7ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1db7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1db7f0:
    // 0x1db7f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1db7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1db7f4:
    // 0x1db7f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1db7f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db7f8:
    // 0x1db7f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1db7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1db7fc:
    // 0x1db7fc: 0x267020d0  addiu       $s0, $s3, 0x20D0
    ctx->pc = 0x1db7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8400));
label_1db800:
    // 0x1db800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db804:
    // 0x1db804: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1db804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db808:
    // 0x1db808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1db80c:
    // 0x1db80c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1db80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db810:
    // 0x1db810: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db814:
    // 0x1db814: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1db818:
    // 0x1db818: 0x26100360  addiu       $s0, $s0, 0x360
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_1db81c:
    // 0x1db81c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1db81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1db820:
    // 0x1db820: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1db820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1db824:
    // 0x1db824: 0x40f809  jalr        $v0
label_1db828:
    if (ctx->pc == 0x1DB828u) {
        ctx->pc = 0x1DB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB824u;
        // 0x1db828: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB82Cu;
        goto label_1db82c;
    }
    ctx->pc = 0x1DB824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB82Cu);
        ctx->pc = 0x1DB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB824u;
        // 0x1db828: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB824u, 0x1DB82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB82Cu;
label_1db82c:
    // 0x1db82c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1db82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1db830:
    // 0x1db830: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1db834:
    if (ctx->pc == 0x1DB834u) {
        ctx->pc = 0x1DB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB830u;
        // 0x1db834: 0x26310360  addiu       $s1, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB838u;
        goto label_1db838;
    }
    ctx->pc = 0x1DB830u;
    {
        const bool branch_taken_0x1db830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB830u;
        // 0x1db834: 0x26310360  addiu       $s1, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db830) {
            ctx->pc = 0x1DB810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db810;
        }
    }
    ctx->pc = 0x1DB838u;
label_1db838:
    // 0x1db838: 0xc0687c4  jal         func_1A1F10
label_1db83c:
    if (ctx->pc == 0x1DB83Cu) {
        ctx->pc = 0x1DB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB838u;
        // 0x1db83c: 0x26643a90  addiu       $a0, $s3, 0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB840u;
        goto label_1db840;
    }
    ctx->pc = 0x1DB838u;
    SET_GPR_U32(ctx, 31, 0x1DB840u);
    ctx->pc = 0x1DB83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB838u;
    // 0x1db83c: 0x26643a90  addiu       $a0, $s3, 0x3A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1DB838u, 0x1DB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB840u;
label_1db840:
    // 0x1db840: 0xc073ac0  jal         func_1CEB00
label_1db844:
    if (ctx->pc == 0x1DB844u) {
        ctx->pc = 0x1DB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB840u;
        // 0x1db844: 0x26642dd0  addiu       $a0, $s3, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB848u;
        goto label_1db848;
    }
    ctx->pc = 0x1DB840u;
    SET_GPR_U32(ctx, 31, 0x1DB848u);
    ctx->pc = 0x1DB844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB840u;
    // 0x1db844: 0x26642dd0  addiu       $a0, $s3, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB00u, 0x1DB840u, 0x1DB848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB848u;
label_1db848:
    // 0x1db848: 0xc075a42  jal         func_1D6908
label_1db84c:
    if (ctx->pc == 0x1DB84Cu) {
        ctx->pc = 0x1DB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB848u;
        // 0x1db84c: 0x26641bd0  addiu       $a0, $s3, 0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB850u;
        goto label_1db850;
    }
    ctx->pc = 0x1DB848u;
    SET_GPR_U32(ctx, 31, 0x1DB850u);
    ctx->pc = 0x1DB84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB848u;
    // 0x1db84c: 0x26641bd0  addiu       $a0, $s3, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6908u, 0x1DB848u, 0x1DB850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB850u;
label_1db850:
    // 0x1db850: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1db850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db854:
    // 0x1db854: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1db854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db858:
    // 0x1db858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db85c:
    // 0x1db85c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1db85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db860:
    // 0x1db860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db864:
    // 0x1db864: 0x3e00008  jr          $ra
label_1db868:
    if (ctx->pc == 0x1DB868u) {
        ctx->pc = 0x1DB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB864u;
        // 0x1db868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB86Cu;
        goto label_1db86c;
    }
    ctx->pc = 0x1DB864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB864u;
        // 0x1db868: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB86Cu;
label_1db86c:
    // 0x1db86c: 0x0  nop
    ctx->pc = 0x1db86cu;
    // NOP
    ctx->pc = 0x1db870u;
}
