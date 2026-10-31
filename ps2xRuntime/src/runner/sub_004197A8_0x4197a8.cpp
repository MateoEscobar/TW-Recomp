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

// Function: sub_004197A8
// Address: 0x4197a8 - 0x419a68
void sub_004197A8_0x4197a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004197A8_0x4197a8");
#endif

    switch (ctx->pc) {
        case 0x419810u: goto label_419810;
        case 0x419818u: goto label_419818;
        case 0x419820u: goto label_419820;
        case 0x419830u: goto label_419830;
        case 0x419838u: goto label_419838;
        case 0x419848u: goto label_419848;
        case 0x419854u: goto label_419854;
        case 0x419878u: goto label_419878;
        case 0x419880u: goto label_419880;
        case 0x4198a0u: goto label_4198a0;
        case 0x4198acu: goto label_4198ac;
        case 0x4198bcu: goto label_4198bc;
        case 0x4198d4u: goto label_4198d4;
        case 0x4198f0u: goto label_4198f0;
        case 0x419908u: goto label_419908;
        case 0x419914u: goto label_419914;
        case 0x419928u: goto label_419928;
        case 0x419948u: goto label_419948;
        case 0x41995cu: goto label_41995c;
        case 0x41998cu: goto label_41998c;
        case 0x4199c8u: goto label_4199c8;
        case 0x4199d4u: goto label_4199d4;
        case 0x419a00u: goto label_419a00;
        case 0x419a30u: goto label_419a30;
        case 0x419a38u: goto label_419a38;
        default: break;
    }

    ctx->pc = 0x4197a8u;

    // 0x4197a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4197a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4197ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4197acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4197b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4197b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4197b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4197b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4197b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4197b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4197bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4197bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4197c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4197c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4197c4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4197c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4197c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4197c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4197cc: 0x92220155  lbu         $v0, 0x155($s1)
    ctx->pc = 0x4197ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 341)));
    // 0x4197d0: 0x5040009c  beql        $v0, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x4197D0u;
    {
        const bool branch_taken_0x4197d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4197d0) {
            ctx->pc = 0x4197D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4197D0u;
            // 0x4197d4: 0x8622014c  lh          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A44u;
            goto label_419a44;
        }
    }
    ctx->pc = 0x4197D8u;
    // 0x4197d8: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x4197d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x4197dc: 0x54400099  bnel        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x4197DCu;
    {
        const bool branch_taken_0x4197dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4197dc) {
            ctx->pc = 0x4197E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4197DCu;
            // 0x4197e0: 0x8622014c  lh          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A44u;
            goto label_419a44;
        }
    }
    ctx->pc = 0x4197E4u;
    // 0x4197e4: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x4197e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x4197e8: 0x54400096  bnel        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x4197E8u;
    {
        const bool branch_taken_0x4197e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4197e8) {
            ctx->pc = 0x4197ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4197E8u;
            // 0x4197ec: 0x8622014c  lh          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A44u;
            goto label_419a44;
        }
    }
    ctx->pc = 0x4197F0u;
    // 0x4197f0: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x4197f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x4197f4: 0x18400092  blez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x4197F4u;
    {
        const bool branch_taken_0x4197f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4197F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4197F4u;
        // 0x4197f8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4197f4) {
            ctx->pc = 0x419A40u;
            goto label_419a40;
        }
    }
    ctx->pc = 0x4197FCu;
    // 0x4197fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4197fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419800: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x419800u;
    {
        const bool branch_taken_0x419800 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x419804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419800u;
        // 0x419804: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419800) {
            ctx->pc = 0x419864u;
            goto label_419864;
        }
    }
    ctx->pc = 0x419808u;
    // 0x419808: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x419808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41980c: 0x26300228  addiu       $s0, $s1, 0x228
    ctx->pc = 0x41980cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
label_419810:
    // 0x419810: 0xc0e409a  jal         func_390268
    ctx->pc = 0x419810u;
    SET_GPR_U32(ctx, 31, 0x419818u);
    ctx->pc = 0x419814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419810u;
    // 0x419814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419810u, 0x419818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419818u;
label_419818:
    // 0x419818: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x419818u;
    SET_GPR_U32(ctx, 31, 0x419820u);
    ctx->pc = 0x41981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419818u;
    // 0x41981c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x419818u, 0x419820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419820u;
label_419820:
    // 0x419820: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x419820u;
    {
        const bool branch_taken_0x419820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419820) {
            ctx->pc = 0x419824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419820u;
            // 0x419824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419840u;
            goto label_419840;
        }
    }
    ctx->pc = 0x419828u;
    // 0x419828: 0xc0e409a  jal         func_390268
    ctx->pc = 0x419828u;
    SET_GPR_U32(ctx, 31, 0x419830u);
    ctx->pc = 0x41982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419828u;
    // 0x41982c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419828u, 0x419830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419830u;
label_419830:
    // 0x419830: 0xc088edc  jal         func_223B70
    ctx->pc = 0x419830u;
    SET_GPR_U32(ctx, 31, 0x419838u);
    ctx->pc = 0x419834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419830u;
    // 0x419834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x419830u, 0x419838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419838u;
label_419838:
    // 0x419838: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x419838u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x41983c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419840:
    // 0x419840: 0xc0e409a  jal         func_390268
    ctx->pc = 0x419840u;
    SET_GPR_U32(ctx, 31, 0x419848u);
    ctx->pc = 0x419844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419840u;
    // 0x419844: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419840u, 0x419848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419848u;
label_419848:
    // 0x419848: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x419848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x41984c: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x41984Cu;
    SET_GPR_U32(ctx, 31, 0x419854u);
    ctx->pc = 0x419850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41984Cu;
    // 0x419850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x41984Cu, 0x419854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419854u;
label_419854:
    // 0x419854: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x419854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x419858: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x419858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x41985c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x41985Cu;
    {
        const bool branch_taken_0x41985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x419860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41985Cu;
        // 0x419860: 0x2a2900b  movn        $s2, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41985c) {
            ctx->pc = 0x419810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419810;
        }
    }
    ctx->pc = 0x419864u;
label_419864:
    // 0x419864: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x419864u;
    {
        const bool branch_taken_0x419864 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x419868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419864u;
        // 0x419868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419864) {
            ctx->pc = 0x419890u;
            goto label_419890;
        }
    }
    ctx->pc = 0x41986Cu;
    // 0x41986c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x41986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x419870: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x419870u;
    SET_GPR_U32(ctx, 31, 0x419878u);
    ctx->pc = 0x419874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419870u;
    // 0x419874: 0xae22014c  sw          $v0, 0x14C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x419870u, 0x419878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419878u;
label_419878:
    // 0x419878: 0xc0747ee  jal         func_1D1FB8
    ctx->pc = 0x419878u;
    SET_GPR_U32(ctx, 31, 0x419880u);
    ctx->pc = 0x41987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419878u;
    // 0x41987c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB8u, 0x419878u, 0x419880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419880u;
label_419880:
    // 0x419880: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x419880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x419884: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x419884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x419888: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x419888u;
    {
        const bool branch_taken_0x419888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419888u;
        // 0x41988c: 0xa0600118  sb          $zero, 0x118($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 280), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419888) {
            ctx->pc = 0x419A40u;
            goto label_419a40;
        }
    }
    ctx->pc = 0x419890u;
label_419890:
    // 0x419890: 0x1280006b  beqz        $s4, . + 4 + (0x6B << 2)
    ctx->pc = 0x419890u;
    {
        const bool branch_taken_0x419890 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x419894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419890u;
        // 0x419894: 0x26240228  addiu       $a0, $s1, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419890) {
            ctx->pc = 0x419A40u;
            goto label_419a40;
        }
    }
    ctx->pc = 0x419898u;
    // 0x419898: 0xc0e409a  jal         func_390268
    ctx->pc = 0x419898u;
    SET_GPR_U32(ctx, 31, 0x4198A0u);
    ctx->pc = 0x41989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419898u;
    // 0x41989c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x419898u, 0x4198A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4198A0u;
label_4198a0:
    // 0x4198a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4198a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4198a4: 0xc088edc  jal         func_223B70
    ctx->pc = 0x4198A4u;
    SET_GPR_U32(ctx, 31, 0x4198ACu);
    ctx->pc = 0x4198A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4198A4u;
    // 0x4198a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x4198A4u, 0x4198ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4198ACu;
label_4198ac:
    // 0x4198ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4198ACu;
    {
        const bool branch_taken_0x4198ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4198ac) {
            ctx->pc = 0x4198F4u;
            goto label_4198f4;
        }
    }
    ctx->pc = 0x4198B4u;
    // 0x4198b4: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x4198B4u;
    SET_GPR_U32(ctx, 31, 0x4198BCu);
    ctx->pc = 0x4198B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4198B4u;
    // 0x4198b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x4198B4u, 0x4198BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4198BCu;
label_4198bc:
    // 0x4198bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4198BCu;
    {
        const bool branch_taken_0x4198bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4198C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4198BCu;
        // 0x4198c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4198bc) {
            ctx->pc = 0x4198F4u;
            goto label_4198f4;
        }
    }
    ctx->pc = 0x4198C4u;
    // 0x4198c4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4198c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4198c8: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x4198c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x4198cc: 0xc10904c  jal         func_424130
    ctx->pc = 0x4198CCu;
    SET_GPR_U32(ctx, 31, 0x4198D4u);
    ctx->pc = 0x4198D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4198CCu;
    // 0x4198d0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x4198CCu, 0x4198D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4198D4u;
label_4198d4:
    // 0x4198d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4198D4u;
    {
        const bool branch_taken_0x4198d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4198D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4198D4u;
        // 0x4198d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4198d4) {
            ctx->pc = 0x4198F4u;
            goto label_4198f4;
        }
    }
    ctx->pc = 0x4198DCu;
    // 0x4198dc: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x4198dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x4198e0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x4198e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x4198e4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4198e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4198e8: 0xc107908  jal         func_41E420
    ctx->pc = 0x4198E8u;
    SET_GPR_U32(ctx, 31, 0x4198F0u);
    ctx->pc = 0x4198ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4198E8u;
    // 0x4198ec: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x4198E8u, 0x4198F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4198F0u;
label_4198f0:
    // 0x4198f0: 0x2902a  slt         $s2, $zero, $v0
    ctx->pc = 0x4198f0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4198f4:
    // 0x4198f4: 0x56400053  bnel        $s2, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x4198F4u;
    {
        const bool branch_taken_0x4198f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4198f4) {
            ctx->pc = 0x4198F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4198F4u;
            // 0x4198f8: 0x8622014c  lh          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A44u;
            goto label_419a44;
        }
    }
    ctx->pc = 0x4198FCu;
    // 0x4198fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4198fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419900: 0xc087502  jal         func_21D408
    ctx->pc = 0x419900u;
    SET_GPR_U32(ctx, 31, 0x419908u);
    ctx->pc = 0x419904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419900u;
    // 0x419904: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x419900u, 0x419908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419908u;
label_419908:
    // 0x419908: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x419908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x41990c: 0xc05a776  jal         func_169DD8
    ctx->pc = 0x41990Cu;
    SET_GPR_U32(ctx, 31, 0x419914u);
    ctx->pc = 0x419910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41990Cu;
    // 0x419910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DD8u, 0x41990Cu, 0x419914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419914u;
label_419914:
    // 0x419914: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x419914u;
    {
        const bool branch_taken_0x419914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x419914) {
            ctx->pc = 0x419940u;
            goto label_419940;
        }
    }
    ctx->pc = 0x41991Cu;
    // 0x41991c: 0xae32014c  sw          $s2, 0x14C($s1)
    ctx->pc = 0x41991cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 18));
    // 0x419920: 0xc088edc  jal         func_223B70
    ctx->pc = 0x419920u;
    SET_GPR_U32(ctx, 31, 0x419928u);
    ctx->pc = 0x419924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419920u;
    // 0x419924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x419920u, 0x419928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419928u;
label_419928:
    // 0x419928: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x419928u;
    {
        const bool branch_taken_0x419928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419928u;
        // 0x41992c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419928) {
            ctx->pc = 0x419A18u;
            goto label_419a18;
        }
    }
    ctx->pc = 0x419930u;
    // 0x419930: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x419930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x419934: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x419934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x419938: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x419938u;
    {
        const bool branch_taken_0x419938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419938u;
        // 0x41993c: 0xa0520118  sb          $s2, 0x118($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 280), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419938) {
            ctx->pc = 0x419A28u;
            goto label_419a28;
        }
    }
    ctx->pc = 0x419940u;
label_419940:
    // 0x419940: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x419940u;
    SET_GPR_U32(ctx, 31, 0x419948u);
    ctx->pc = 0x419944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419940u;
    // 0x419944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x419940u, 0x419948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419948u;
label_419948:
    // 0x419948: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x419948u;
    {
        const bool branch_taken_0x419948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419948u;
        // 0x41994c: 0x26240480  addiu       $a0, $s1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419948) {
            ctx->pc = 0x419964u;
            goto label_419964;
        }
    }
    ctx->pc = 0x419950u;
    // 0x419950: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x419950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x419954: 0xc107908  jal         func_41E420
    ctx->pc = 0x419954u;
    SET_GPR_U32(ctx, 31, 0x41995Cu);
    ctx->pc = 0x419958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419954u;
    // 0x419958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x419954u, 0x41995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41995Cu;
label_41995c:
    // 0x41995c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x41995Cu;
    {
        const bool branch_taken_0x41995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41995c) {
            ctx->pc = 0x419960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41995Cu;
            // 0x419960: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419980u;
            goto label_419980;
        }
    }
    ctx->pc = 0x419964u;
label_419964:
    // 0x419964: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x419964u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x419968: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x419968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x41996c: 0x90430414  lbu         $v1, 0x414($v0)
    ctx->pc = 0x41996cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1044)));
    // 0x419970: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x419970u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x419974: 0x5472000b  bnel        $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x419974u;
    {
        const bool branch_taken_0x419974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x419974) {
            ctx->pc = 0x419978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419974u;
            // 0x419978: 0x8e240230  lw          $a0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4199A4u;
            goto label_4199a4;
        }
    }
    ctx->pc = 0x41997Cu;
    // 0x41997c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x41997cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419980:
    // 0x419980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419984: 0xc088edc  jal         func_223B70
    ctx->pc = 0x419984u;
    SET_GPR_U32(ctx, 31, 0x41998Cu);
    ctx->pc = 0x419988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419984u;
    // 0x419988: 0xae32014c  sw          $s2, 0x14C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x419984u, 0x41998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41998Cu;
label_41998c:
    // 0x41998c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x41998Cu;
    {
        const bool branch_taken_0x41998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41998Cu;
        // 0x419990: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41998c) {
            ctx->pc = 0x419A18u;
            goto label_419a18;
        }
    }
    ctx->pc = 0x419994u;
    // 0x419994: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x419994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x419998: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x419998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x41999c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x41999Cu;
    {
        const bool branch_taken_0x41999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4199A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41999Cu;
        // 0x4199a0: 0xa0520118  sb          $s2, 0x118($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 280), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41999c) {
            ctx->pc = 0x419A28u;
            goto label_419a28;
        }
    }
    ctx->pc = 0x4199A4u;
label_4199a4:
    // 0x4199a4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x4199a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4199a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4199A8u;
    {
        const bool branch_taken_0x4199a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4199a8) {
            ctx->pc = 0x4199ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4199A8u;
            // 0x4199ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4199B0u;
            goto label_4199b0;
        }
    }
    ctx->pc = 0x4199B0u;
label_4199b0:
    // 0x4199b0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x4199b0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x4199b4: 0x1810  mfhi        $v1
    ctx->pc = 0x4199b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4199b8: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4199B8u;
    {
        const bool branch_taken_0x4199b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4199b8) {
            ctx->pc = 0x4199BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4199B8u;
            // 0x4199bc: 0x8622014c  lh          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A44u;
            goto label_419a44;
        }
    }
    ctx->pc = 0x4199C0u;
    // 0x4199c0: 0xc087502  jal         func_21D408
    ctx->pc = 0x4199C0u;
    SET_GPR_U32(ctx, 31, 0x4199C8u);
    ctx->pc = 0x4199C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4199C0u;
    // 0x4199c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x4199C0u, 0x4199C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4199C8u;
label_4199c8:
    // 0x4199c8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x4199c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x4199cc: 0xc05a7a8  jal         func_169EA0
    ctx->pc = 0x4199CCu;
    SET_GPR_U32(ctx, 31, 0x4199D4u);
    ctx->pc = 0x4199D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4199CCu;
    // 0x4199d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169EA0u, 0x4199CCu, 0x4199D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4199D4u;
label_4199d4:
    // 0x4199d4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x4199D4u;
    {
        const bool branch_taken_0x4199d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4199d4) {
            ctx->pc = 0x4199D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4199D4u;
            // 0x4199d8: 0xa22056e6  sb          $zero, 0x56E6($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 22246), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A40u;
            goto label_419a40;
        }
    }
    ctx->pc = 0x4199DCu;
    // 0x4199dc: 0x922256e6  lbu         $v0, 0x56E6($s1)
    ctx->pc = 0x4199dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22246)));
    // 0x4199e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4199e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4199e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4199e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4199e8: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x4199e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4199ec: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4199ECu;
    {
        const bool branch_taken_0x4199ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4199F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4199ECu;
        // 0x4199f0: 0xa22256e6  sb          $v0, 0x56E6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 22246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4199ec) {
            ctx->pc = 0x419A40u;
            goto label_419a40;
        }
    }
    ctx->pc = 0x4199F4u;
    // 0x4199f4: 0xae32014c  sw          $s2, 0x14C($s1)
    ctx->pc = 0x4199f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 18));
    // 0x4199f8: 0xc088edc  jal         func_223B70
    ctx->pc = 0x4199F8u;
    SET_GPR_U32(ctx, 31, 0x419A00u);
    ctx->pc = 0x4199FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4199F8u;
    // 0x4199fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x4199F8u, 0x419A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419A00u;
label_419a00:
    // 0x419a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x419A00u;
    {
        const bool branch_taken_0x419a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A00u;
        // 0x419a04: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a00) {
            ctx->pc = 0x419A18u;
            goto label_419a18;
        }
    }
    ctx->pc = 0x419A08u;
    // 0x419a08: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x419a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x419a0c: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x419a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x419a10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x419A10u;
    {
        const bool branch_taken_0x419a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A10u;
        // 0x419a14: 0xa0520118  sb          $s2, 0x118($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 280), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a10) {
            ctx->pc = 0x419A28u;
            goto label_419a28;
        }
    }
    ctx->pc = 0x419A18u;
label_419a18:
    // 0x419a18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x419a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x419a1c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x419a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x419a20: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x419a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x419a24: 0xa0400118  sb          $zero, 0x118($v0)
    ctx->pc = 0x419a24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 280), (uint8_t)GPR_U32(ctx, 0));
label_419a28:
    // 0x419a28: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x419A28u;
    SET_GPR_U32(ctx, 31, 0x419A30u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x419A28u, 0x419A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419A30u;
label_419a30:
    // 0x419a30: 0xc0747ee  jal         func_1D1FB8
    ctx->pc = 0x419A30u;
    SET_GPR_U32(ctx, 31, 0x419A38u);
    ctx->pc = 0x419A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419A30u;
    // 0x419a34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB8u, 0x419A30u, 0x419A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419A38u;
label_419a38:
    // 0x419a38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x419A38u;
    {
        const bool branch_taken_0x419a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A38u;
        // 0x419a3c: 0x8622014c  lh          $v0, 0x14C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a38) {
            ctx->pc = 0x419A44u;
            goto label_419a44;
        }
    }
    ctx->pc = 0x419A40u;
label_419a40:
    // 0x419a40: 0x8622014c  lh          $v0, 0x14C($s1)
    ctx->pc = 0x419a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 332)));
label_419a44:
    // 0x419a44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x419a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x419a48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x419a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x419a4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x419a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419a50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x419a50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419a54: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x419a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419a58: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x419a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419a60: 0x3e00008  jr          $ra
    ctx->pc = 0x419A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A60u;
        // 0x419a64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419A68u;
}
