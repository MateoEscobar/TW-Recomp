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

// Function: sub_00203800
// Address: 0x203800 - 0x203910
void sub_00203800_0x203800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203800_0x203800");
#endif

    switch (ctx->pc) {
        case 0x203800u: goto label_203800;
        case 0x203804u: goto label_203804;
        case 0x203808u: goto label_203808;
        case 0x20380cu: goto label_20380c;
        case 0x203810u: goto label_203810;
        case 0x203814u: goto label_203814;
        case 0x203818u: goto label_203818;
        case 0x20381cu: goto label_20381c;
        case 0x203820u: goto label_203820;
        case 0x203824u: goto label_203824;
        case 0x203828u: goto label_203828;
        case 0x20382cu: goto label_20382c;
        case 0x203830u: goto label_203830;
        case 0x203834u: goto label_203834;
        case 0x203838u: goto label_203838;
        case 0x20383cu: goto label_20383c;
        case 0x203840u: goto label_203840;
        case 0x203844u: goto label_203844;
        case 0x203848u: goto label_203848;
        case 0x20384cu: goto label_20384c;
        case 0x203850u: goto label_203850;
        case 0x203854u: goto label_203854;
        case 0x203858u: goto label_203858;
        case 0x20385cu: goto label_20385c;
        case 0x203860u: goto label_203860;
        case 0x203864u: goto label_203864;
        case 0x203868u: goto label_203868;
        case 0x20386cu: goto label_20386c;
        case 0x203870u: goto label_203870;
        case 0x203874u: goto label_203874;
        case 0x203878u: goto label_203878;
        case 0x20387cu: goto label_20387c;
        case 0x203880u: goto label_203880;
        case 0x203884u: goto label_203884;
        case 0x203888u: goto label_203888;
        case 0x20388cu: goto label_20388c;
        case 0x203890u: goto label_203890;
        case 0x203894u: goto label_203894;
        case 0x203898u: goto label_203898;
        case 0x20389cu: goto label_20389c;
        case 0x2038a0u: goto label_2038a0;
        case 0x2038a4u: goto label_2038a4;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038acu: goto label_2038ac;
        case 0x2038b0u: goto label_2038b0;
        case 0x2038b4u: goto label_2038b4;
        case 0x2038b8u: goto label_2038b8;
        case 0x2038bcu: goto label_2038bc;
        case 0x2038c0u: goto label_2038c0;
        case 0x2038c4u: goto label_2038c4;
        case 0x2038c8u: goto label_2038c8;
        case 0x2038ccu: goto label_2038cc;
        case 0x2038d0u: goto label_2038d0;
        case 0x2038d4u: goto label_2038d4;
        case 0x2038d8u: goto label_2038d8;
        case 0x2038dcu: goto label_2038dc;
        case 0x2038e0u: goto label_2038e0;
        case 0x2038e4u: goto label_2038e4;
        case 0x2038e8u: goto label_2038e8;
        case 0x2038ecu: goto label_2038ec;
        case 0x2038f0u: goto label_2038f0;
        case 0x2038f4u: goto label_2038f4;
        case 0x2038f8u: goto label_2038f8;
        case 0x2038fcu: goto label_2038fc;
        case 0x203900u: goto label_203900;
        case 0x203904u: goto label_203904;
        case 0x203908u: goto label_203908;
        case 0x20390cu: goto label_20390c;
        default: break;
    }

    ctx->pc = 0x203800u;

label_203800:
    // 0x203800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x203800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_203804:
    // 0x203804: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x203804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_203808:
    // 0x203808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x203808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20380c:
    // 0x20380c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x20380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_203810:
    // 0x203810: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x203810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203814:
    // 0x203814: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x203814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_203818:
    // 0x203818: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x203818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_20381c:
    // 0x20381c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_203820:
    if (ctx->pc == 0x203820u) {
        ctx->pc = 0x203820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20381Cu;
        // 0x203820: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203824u;
        goto label_203824;
    }
    ctx->pc = 0x20381Cu;
    {
        const bool branch_taken_0x20381c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x203820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20381Cu;
        // 0x203820: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20381c) {
            ctx->pc = 0x203848u;
            goto label_203848;
        }
    }
    ctx->pc = 0x203824u;
label_203824:
    // 0x203824: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_203828:
    // 0x203828: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x203828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20382c:
    // 0x20382c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_203830:
    // 0x203830: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x203830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_203834:
    // 0x203834: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x203834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
label_203838:
    // 0x203838: 0xc043f0c  jal         func_10FC30
label_20383c:
    if (ctx->pc == 0x20383Cu) {
        ctx->pc = 0x20383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203838u;
        // 0x20383c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203840u;
        goto label_203840;
    }
    ctx->pc = 0x203838u;
    SET_GPR_U32(ctx, 31, 0x203840u);
    ctx->pc = 0x20383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203838u;
    // 0x20383c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x203838u, 0x203840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203840u;
label_203840:
    // 0x203840: 0x1000002c  b           . + 4 + (0x2C << 2)
label_203844:
    if (ctx->pc == 0x203844u) {
        ctx->pc = 0x203844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203840u;
        // 0x203844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203848u;
        goto label_203848;
    }
    ctx->pc = 0x203840u;
    {
        const bool branch_taken_0x203840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203840u;
        // 0x203844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203840) {
            ctx->pc = 0x2038F4u;
            goto label_2038f4;
        }
    }
    ctx->pc = 0x203848u;
label_203848:
    // 0x203848: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x203848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20384c:
    // 0x20384c: 0x14a20029  bne         $a1, $v0, . + 4 + (0x29 << 2)
label_203850:
    if (ctx->pc == 0x203850u) {
        ctx->pc = 0x203850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20384Cu;
        // 0x203850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203854u;
        goto label_203854;
    }
    ctx->pc = 0x20384Cu;
    {
        const bool branch_taken_0x20384c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x203850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20384Cu;
        // 0x203850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20384c) {
            ctx->pc = 0x2038F4u;
            goto label_2038f4;
        }
    }
    ctx->pc = 0x203854u;
label_203854:
    // 0x203854: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_203858:
    // 0x203858: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x203858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20385c:
    // 0x20385c: 0xc043f0c  jal         func_10FC30
label_203860:
    if (ctx->pc == 0x203860u) {
        ctx->pc = 0x203860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20385Cu;
        // 0x203860: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203864u;
        goto label_203864;
    }
    ctx->pc = 0x20385Cu;
    SET_GPR_U32(ctx, 31, 0x203864u);
    ctx->pc = 0x203860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20385Cu;
    // 0x203860: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20385Cu, 0x203864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203864u;
label_203864:
    // 0x203864: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x203864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_203868:
    // 0x203868: 0xc0750fa  jal         func_1D43E8
label_20386c:
    if (ctx->pc == 0x20386Cu) {
        ctx->pc = 0x20386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203868u;
        // 0x20386c: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203870u;
        goto label_203870;
    }
    ctx->pc = 0x203868u;
    SET_GPR_U32(ctx, 31, 0x203870u);
    ctx->pc = 0x20386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203868u;
    // 0x20386c: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x203868u, 0x203870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203870u;
label_203870:
    // 0x203870: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_203874:
    if (ctx->pc == 0x203874u) {
        ctx->pc = 0x203874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203870u;
        // 0x203874: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203878u;
        goto label_203878;
    }
    ctx->pc = 0x203870u;
    {
        const bool branch_taken_0x203870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203870u;
        // 0x203874: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203870) {
            ctx->pc = 0x203840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203840;
        }
    }
    ctx->pc = 0x203878u;
label_203878:
    // 0x203878: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x203878u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_20387c:
    // 0x20387c: 0x8e715024  lw          $s1, 0x5024($s3)
    ctx->pc = 0x20387cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20516)));
label_203880:
    // 0x203880: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_203884:
    // 0x203884: 0x86020078  lh          $v0, 0x78($s0)
    ctx->pc = 0x203884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_203888:
    // 0x203888: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x203888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20388c:
    // 0x20388c: 0xc081022  jal         func_204088
label_203890:
    if (ctx->pc == 0x203890u) {
        ctx->pc = 0x203890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20388Cu;
        // 0x203890: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203894u;
        goto label_203894;
    }
    ctx->pc = 0x20388Cu;
    SET_GPR_U32(ctx, 31, 0x203894u);
    ctx->pc = 0x203890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20388Cu;
    // 0x203890: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x20388Cu, 0x203894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203894u;
label_203894:
    // 0x203894: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x203894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_203898:
    // 0x203898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20389c:
    // 0x20389c: 0x60f809  jalr        $v1
label_2038a0:
    if (ctx->pc == 0x2038A0u) {
        ctx->pc = 0x2038A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20389Cu;
        // 0x2038a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038A4u;
        goto label_2038a4;
    }
    ctx->pc = 0x20389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2038A4u);
        ctx->pc = 0x2038A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20389Cu;
        // 0x2038a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20389Cu, 0x2038A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2038A4u;
label_2038a4:
    // 0x2038a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2038a8:
    if (ctx->pc == 0x2038A8u) {
        ctx->pc = 0x2038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A4u;
        // 0x2038a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038ACu;
        goto label_2038ac;
    }
    ctx->pc = 0x2038A4u;
    {
        const bool branch_taken_0x2038a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A4u;
        // 0x2038a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038a4) {
            ctx->pc = 0x2038B4u;
            goto label_2038b4;
        }
    }
    ctx->pc = 0x2038ACu;
label_2038ac:
    // 0x2038ac: 0x10000011  b           . + 4 + (0x11 << 2)
label_2038b0:
    if (ctx->pc == 0x2038B0u) {
        ctx->pc = 0x2038B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038ACu;
        // 0x2038b0: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038B4u;
        goto label_2038b4;
    }
    ctx->pc = 0x2038ACu;
    {
        const bool branch_taken_0x2038ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038ACu;
        // 0x2038b0: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038ac) {
            ctx->pc = 0x2038F4u;
            goto label_2038f4;
        }
    }
    ctx->pc = 0x2038B4u;
label_2038b4:
    // 0x2038b4: 0x8e715024  lw          $s1, 0x5024($s3)
    ctx->pc = 0x2038b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20516)));
label_2038b8:
    // 0x2038b8: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x2038b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2038bc:
    // 0x2038bc: 0x860200c8  lh          $v0, 0xC8($s0)
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
label_2038c0:
    // 0x2038c0: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x2038c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_2038c4:
    // 0x2038c4: 0xc081022  jal         func_204088
label_2038c8:
    if (ctx->pc == 0x2038C8u) {
        ctx->pc = 0x2038C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C4u;
        // 0x2038c8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038CCu;
        goto label_2038cc;
    }
    ctx->pc = 0x2038C4u;
    SET_GPR_U32(ctx, 31, 0x2038CCu);
    ctx->pc = 0x2038C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038C4u;
    // 0x2038c8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x2038C4u, 0x2038CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038CCu;
label_2038cc:
    // 0x2038cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2038ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2038d0:
    // 0x2038d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2038d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2038d4:
    // 0x2038d4: 0x60f809  jalr        $v1
label_2038d8:
    if (ctx->pc == 0x2038D8u) {
        ctx->pc = 0x2038D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038D4u;
        // 0x2038d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038DCu;
        goto label_2038dc;
    }
    ctx->pc = 0x2038D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2038DCu);
        ctx->pc = 0x2038D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038D4u;
        // 0x2038d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2038D4u, 0x2038DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2038DCu;
label_2038dc:
    // 0x2038dc: 0x8e655024  lw          $a1, 0x5024($s3)
    ctx->pc = 0x2038dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20516)));
label_2038e0:
    // 0x2038e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2038e4:
    // 0x2038e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2038e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2038e8:
    // 0x2038e8: 0xc080fee  jal         func_203FB8
label_2038ec:
    if (ctx->pc == 0x2038ECu) {
        ctx->pc = 0x2038ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038E8u;
        // 0x2038ec: 0xaca20124  sw          $v0, 0x124($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038F0u;
        goto label_2038f0;
    }
    ctx->pc = 0x2038E8u;
    SET_GPR_U32(ctx, 31, 0x2038F0u);
    ctx->pc = 0x2038ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038E8u;
    // 0x2038ec: 0xaca20124  sw          $v0, 0x124($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FB8u, 0x2038E8u, 0x2038F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038F0u;
label_2038f0:
    // 0x2038f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2038f4:
    // 0x2038f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2038f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2038f8:
    // 0x2038f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2038f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2038fc:
    // 0x2038fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2038fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203900:
    // 0x203900: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x203900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203904:
    // 0x203904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203908:
    // 0x203908: 0x3e00008  jr          $ra
label_20390c:
    if (ctx->pc == 0x20390Cu) {
        ctx->pc = 0x20390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203908u;
        // 0x20390c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203910u;
        goto label_fallthrough_0x203908;
    }
    ctx->pc = 0x203908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203908u;
        // 0x20390c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203908:
    ctx->pc = 0x203910u;
}
