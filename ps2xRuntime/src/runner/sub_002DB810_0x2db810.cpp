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

// Function: sub_002DB810
// Address: 0x2db810 - 0x2db918
void sub_002DB810_0x2db810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB810_0x2db810");
#endif

    switch (ctx->pc) {
        case 0x2db810u: goto label_2db810;
        case 0x2db814u: goto label_2db814;
        case 0x2db818u: goto label_2db818;
        case 0x2db81cu: goto label_2db81c;
        case 0x2db820u: goto label_2db820;
        case 0x2db824u: goto label_2db824;
        case 0x2db828u: goto label_2db828;
        case 0x2db82cu: goto label_2db82c;
        case 0x2db830u: goto label_2db830;
        case 0x2db834u: goto label_2db834;
        case 0x2db838u: goto label_2db838;
        case 0x2db83cu: goto label_2db83c;
        case 0x2db840u: goto label_2db840;
        case 0x2db844u: goto label_2db844;
        case 0x2db848u: goto label_2db848;
        case 0x2db84cu: goto label_2db84c;
        case 0x2db850u: goto label_2db850;
        case 0x2db854u: goto label_2db854;
        case 0x2db858u: goto label_2db858;
        case 0x2db85cu: goto label_2db85c;
        case 0x2db860u: goto label_2db860;
        case 0x2db864u: goto label_2db864;
        case 0x2db868u: goto label_2db868;
        case 0x2db86cu: goto label_2db86c;
        case 0x2db870u: goto label_2db870;
        case 0x2db874u: goto label_2db874;
        case 0x2db878u: goto label_2db878;
        case 0x2db87cu: goto label_2db87c;
        case 0x2db880u: goto label_2db880;
        case 0x2db884u: goto label_2db884;
        case 0x2db888u: goto label_2db888;
        case 0x2db88cu: goto label_2db88c;
        case 0x2db890u: goto label_2db890;
        case 0x2db894u: goto label_2db894;
        case 0x2db898u: goto label_2db898;
        case 0x2db89cu: goto label_2db89c;
        case 0x2db8a0u: goto label_2db8a0;
        case 0x2db8a4u: goto label_2db8a4;
        case 0x2db8a8u: goto label_2db8a8;
        case 0x2db8acu: goto label_2db8ac;
        case 0x2db8b0u: goto label_2db8b0;
        case 0x2db8b4u: goto label_2db8b4;
        case 0x2db8b8u: goto label_2db8b8;
        case 0x2db8bcu: goto label_2db8bc;
        case 0x2db8c0u: goto label_2db8c0;
        case 0x2db8c4u: goto label_2db8c4;
        case 0x2db8c8u: goto label_2db8c8;
        case 0x2db8ccu: goto label_2db8cc;
        case 0x2db8d0u: goto label_2db8d0;
        case 0x2db8d4u: goto label_2db8d4;
        case 0x2db8d8u: goto label_2db8d8;
        case 0x2db8dcu: goto label_2db8dc;
        case 0x2db8e0u: goto label_2db8e0;
        case 0x2db8e4u: goto label_2db8e4;
        case 0x2db8e8u: goto label_2db8e8;
        case 0x2db8ecu: goto label_2db8ec;
        case 0x2db8f0u: goto label_2db8f0;
        case 0x2db8f4u: goto label_2db8f4;
        case 0x2db8f8u: goto label_2db8f8;
        case 0x2db8fcu: goto label_2db8fc;
        case 0x2db900u: goto label_2db900;
        case 0x2db904u: goto label_2db904;
        case 0x2db908u: goto label_2db908;
        case 0x2db90cu: goto label_2db90c;
        case 0x2db910u: goto label_2db910;
        case 0x2db914u: goto label_2db914;
        default: break;
    }

    ctx->pc = 0x2db810u;

label_2db810:
    // 0x2db810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2db810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2db814:
    // 0x2db814: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2db814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2db818:
    // 0x2db818: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2db818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2db81c:
    // 0x2db81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db820:
    // 0x2db820: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2db820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2db824:
    // 0x2db824: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2db824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2db828:
    // 0x2db828: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2db828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2db82c:
    // 0x2db82c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2db830:
    // 0x2db830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2db830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db834:
    // 0x2db834: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2db834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2db838:
    // 0x2db838: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2db838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db83c:
    // 0x2db83c: 0xc1058b4  jal         func_4162D0
label_2db840:
    if (ctx->pc == 0x2DB840u) {
        ctx->pc = 0x2DB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB83Cu;
        // 0x2db840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB844u;
        goto label_2db844;
    }
    ctx->pc = 0x2DB83Cu;
    SET_GPR_U32(ctx, 31, 0x2DB844u);
    ctx->pc = 0x2DB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB83Cu;
    // 0x2db840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x2DB83Cu, 0x2DB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB844u;
label_2db844:
    // 0x2db844: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2db848:
    if (ctx->pc == 0x2DB848u) {
        ctx->pc = 0x2DB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB844u;
        // 0x2db848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB84Cu;
        goto label_2db84c;
    }
    ctx->pc = 0x2DB844u;
    {
        const bool branch_taken_0x2db844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB844u;
        // 0x2db848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db844) {
            ctx->pc = 0x2DB8B4u;
            goto label_2db8b4;
        }
    }
    ctx->pc = 0x2DB84Cu;
label_2db84c:
    // 0x2db84c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2db84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2db850:
    // 0x2db850: 0x2414029f  addiu       $s4, $zero, 0x29F
    ctx->pc = 0x2db850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2db854:
    // 0x2db854: 0xc1058b4  jal         func_4162D0
label_2db858:
    if (ctx->pc == 0x2DB858u) {
        ctx->pc = 0x2DB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB854u;
        // 0x2db858: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB85Cu;
        goto label_2db85c;
    }
    ctx->pc = 0x2DB854u;
    SET_GPR_U32(ctx, 31, 0x2DB85Cu);
    ctx->pc = 0x2DB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB854u;
    // 0x2db858: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x2DB854u, 0x2DB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB85Cu;
label_2db85c:
    // 0x2db85c: 0x26330468  addiu       $s3, $s1, 0x468
    ctx->pc = 0x2db85cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1128));
label_2db860:
    // 0x2db860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db864:
    // 0x2db864: 0x2404029c  addiu       $a0, $zero, 0x29C
    ctx->pc = 0x2db864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2db868:
    // 0x2db868: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2db868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2db86c:
    // 0x2db86c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2db870:
    if (ctx->pc == 0x2DB870u) {
        ctx->pc = 0x2DB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB86Cu;
        // 0x2db870: 0x83a00a  movz        $s4, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB874u;
        goto label_2db874;
    }
    ctx->pc = 0x2DB86Cu;
    {
        const bool branch_taken_0x2db86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB86Cu;
        // 0x2db870: 0x83a00a  movz        $s4, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db86c) {
            ctx->pc = 0x2DB89Cu;
            goto label_2db89c;
        }
    }
    ctx->pc = 0x2DB874u;
label_2db874:
    // 0x2db874: 0x0  nop
    ctx->pc = 0x2db874u;
    // NOP
label_2db878:
    // 0x2db878: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2db878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db87c:
    // 0x2db87c: 0xc1058be  jal         func_4162F8
label_2db880:
    if (ctx->pc == 0x2DB880u) {
        ctx->pc = 0x2DB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB87Cu;
        // 0x2db880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB884u;
        goto label_2db884;
    }
    ctx->pc = 0x2DB87Cu;
    SET_GPR_U32(ctx, 31, 0x2DB884u);
    ctx->pc = 0x2DB880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB87Cu;
    // 0x2db880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162F8u, 0x2DB87Cu, 0x2DB884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB884u;
label_2db884:
    // 0x2db884: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db888:
    // 0x2db888: 0x2923021  addu        $a2, $s4, $s2
    ctx->pc = 0x2db888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2db88c:
    // 0x2db88c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db890:
    // 0x2db890: 0xc042f0e  jal         func_10BC38
label_2db894:
    if (ctx->pc == 0x2DB894u) {
        ctx->pc = 0x2DB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB890u;
        // 0x2db894: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB898u;
        goto label_2db898;
    }
    ctx->pc = 0x2DB890u;
    SET_GPR_U32(ctx, 31, 0x2DB898u);
    ctx->pc = 0x2DB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB890u;
    // 0x2db894: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2DB890u, 0x2DB898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB898u;
label_2db898:
    // 0x2db898: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2db898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2db89c:
    // 0x2db89c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2db89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2db8a0:
    // 0x2db8a0: 0xc1058b4  jal         func_4162D0
label_2db8a4:
    if (ctx->pc == 0x2DB8A4u) {
        ctx->pc = 0x2DB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8A0u;
        // 0x2db8a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB8A8u;
        goto label_2db8a8;
    }
    ctx->pc = 0x2DB8A0u;
    SET_GPR_U32(ctx, 31, 0x2DB8A8u);
    ctx->pc = 0x2DB8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8A0u;
    // 0x2db8a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x2DB8A0u, 0x2DB8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8A8u;
label_2db8a8:
    // 0x2db8a8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2db8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2db8ac:
    // 0x2db8ac: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_2db8b0:
    if (ctx->pc == 0x2DB8B0u) {
        ctx->pc = 0x2DB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8ACu;
        // 0x2db8b0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB8B4u;
        goto label_2db8b4;
    }
    ctx->pc = 0x2DB8ACu;
    {
        const bool branch_taken_0x2db8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db8ac) {
            ctx->pc = 0x2DB8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8ACu;
            // 0x2db8b0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db878;
        }
    }
    ctx->pc = 0x2DB8B4u;
label_2db8b4:
    // 0x2db8b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2db8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2db8b8:
    // 0x2db8b8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2db8bc:
    // 0x2db8bc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2db8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2db8c0:
    // 0x2db8c0: 0x60f809  jalr        $v1
label_2db8c4:
    if (ctx->pc == 0x2DB8C4u) {
        ctx->pc = 0x2DB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8C0u;
        // 0x2db8c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB8C8u;
        goto label_2db8c8;
    }
    ctx->pc = 0x2DB8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DB8C8u);
        ctx->pc = 0x2DB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8C0u;
        // 0x2db8c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB8C0u, 0x2DB8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DB8C8u;
label_2db8c8:
    // 0x2db8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db8cc:
    // 0x2db8cc: 0xc087612  jal         func_21D848
label_2db8d0:
    if (ctx->pc == 0x2DB8D0u) {
        ctx->pc = 0x2DB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8CCu;
        // 0x2db8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB8D4u;
        goto label_2db8d4;
    }
    ctx->pc = 0x2DB8CCu;
    SET_GPR_U32(ctx, 31, 0x2DB8D4u);
    ctx->pc = 0x2DB8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8CCu;
    // 0x2db8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2DB8CCu, 0x2DB8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8D4u;
label_2db8d4:
    // 0x2db8d4: 0xc0b6eea  jal         func_2DBBA8
label_2db8d8:
    if (ctx->pc == 0x2DB8D8u) {
        ctx->pc = 0x2DB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8D4u;
        // 0x2db8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB8DCu;
        goto label_2db8dc;
    }
    ctx->pc = 0x2DB8D4u;
    SET_GPR_U32(ctx, 31, 0x2DB8DCu);
    ctx->pc = 0x2DB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8D4u;
    // 0x2db8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBBA8u, 0x2DB8D4u, 0x2DB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8DCu;
label_2db8dc:
    // 0x2db8dc: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x2db8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
label_2db8e0:
    // 0x2db8e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2db8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db8e4:
    // 0x2db8e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2db8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2db8e8:
    // 0x2db8e8: 0x90620265  lbu         $v0, 0x265($v1)
    ctx->pc = 0x2db8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 613)));
label_2db8ec:
    // 0x2db8ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2db8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2db8f0:
    // 0x2db8f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2db8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2db8f4:
    // 0x2db8f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2db8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2db8f8:
    // 0x2db8f8: 0xa202002e  sb          $v0, 0x2E($s0)
    ctx->pc = 0x2db8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
label_2db8fc:
    // 0x2db8fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2db8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2db900:
    // 0x2db900: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2db900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2db904:
    // 0x2db904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2db908:
    // 0x2db908: 0xa0600265  sb          $zero, 0x265($v1)
    ctx->pc = 0x2db908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 0));
label_2db90c:
    // 0x2db90c: 0x3e00008  jr          $ra
label_2db910:
    if (ctx->pc == 0x2DB910u) {
        ctx->pc = 0x2DB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB90Cu;
        // 0x2db910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB914u;
        goto label_2db914;
    }
    ctx->pc = 0x2DB90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB90Cu;
        // 0x2db910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB914u;
label_2db914:
    // 0x2db914: 0x0  nop
    ctx->pc = 0x2db914u;
    // NOP
    ctx->pc = 0x2db918u;
}
