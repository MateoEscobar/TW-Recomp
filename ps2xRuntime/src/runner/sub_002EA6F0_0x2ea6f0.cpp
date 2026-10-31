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

// Function: sub_002EA6F0
// Address: 0x2ea6f0 - 0x2ea840
void sub_002EA6F0_0x2ea6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA6F0_0x2ea6f0");
#endif

    switch (ctx->pc) {
        case 0x2ea6f0u: goto label_2ea6f0;
        case 0x2ea6f4u: goto label_2ea6f4;
        case 0x2ea6f8u: goto label_2ea6f8;
        case 0x2ea6fcu: goto label_2ea6fc;
        case 0x2ea700u: goto label_2ea700;
        case 0x2ea704u: goto label_2ea704;
        case 0x2ea708u: goto label_2ea708;
        case 0x2ea70cu: goto label_2ea70c;
        case 0x2ea710u: goto label_2ea710;
        case 0x2ea714u: goto label_2ea714;
        case 0x2ea718u: goto label_2ea718;
        case 0x2ea71cu: goto label_2ea71c;
        case 0x2ea720u: goto label_2ea720;
        case 0x2ea724u: goto label_2ea724;
        case 0x2ea728u: goto label_2ea728;
        case 0x2ea72cu: goto label_2ea72c;
        case 0x2ea730u: goto label_2ea730;
        case 0x2ea734u: goto label_2ea734;
        case 0x2ea738u: goto label_2ea738;
        case 0x2ea73cu: goto label_2ea73c;
        case 0x2ea740u: goto label_2ea740;
        case 0x2ea744u: goto label_2ea744;
        case 0x2ea748u: goto label_2ea748;
        case 0x2ea74cu: goto label_2ea74c;
        case 0x2ea750u: goto label_2ea750;
        case 0x2ea754u: goto label_2ea754;
        case 0x2ea758u: goto label_2ea758;
        case 0x2ea75cu: goto label_2ea75c;
        case 0x2ea760u: goto label_2ea760;
        case 0x2ea764u: goto label_2ea764;
        case 0x2ea768u: goto label_2ea768;
        case 0x2ea76cu: goto label_2ea76c;
        case 0x2ea770u: goto label_2ea770;
        case 0x2ea774u: goto label_2ea774;
        case 0x2ea778u: goto label_2ea778;
        case 0x2ea77cu: goto label_2ea77c;
        case 0x2ea780u: goto label_2ea780;
        case 0x2ea784u: goto label_2ea784;
        case 0x2ea788u: goto label_2ea788;
        case 0x2ea78cu: goto label_2ea78c;
        case 0x2ea790u: goto label_2ea790;
        case 0x2ea794u: goto label_2ea794;
        case 0x2ea798u: goto label_2ea798;
        case 0x2ea79cu: goto label_2ea79c;
        case 0x2ea7a0u: goto label_2ea7a0;
        case 0x2ea7a4u: goto label_2ea7a4;
        case 0x2ea7a8u: goto label_2ea7a8;
        case 0x2ea7acu: goto label_2ea7ac;
        case 0x2ea7b0u: goto label_2ea7b0;
        case 0x2ea7b4u: goto label_2ea7b4;
        case 0x2ea7b8u: goto label_2ea7b8;
        case 0x2ea7bcu: goto label_2ea7bc;
        case 0x2ea7c0u: goto label_2ea7c0;
        case 0x2ea7c4u: goto label_2ea7c4;
        case 0x2ea7c8u: goto label_2ea7c8;
        case 0x2ea7ccu: goto label_2ea7cc;
        case 0x2ea7d0u: goto label_2ea7d0;
        case 0x2ea7d4u: goto label_2ea7d4;
        case 0x2ea7d8u: goto label_2ea7d8;
        case 0x2ea7dcu: goto label_2ea7dc;
        case 0x2ea7e0u: goto label_2ea7e0;
        case 0x2ea7e4u: goto label_2ea7e4;
        case 0x2ea7e8u: goto label_2ea7e8;
        case 0x2ea7ecu: goto label_2ea7ec;
        case 0x2ea7f0u: goto label_2ea7f0;
        case 0x2ea7f4u: goto label_2ea7f4;
        case 0x2ea7f8u: goto label_2ea7f8;
        case 0x2ea7fcu: goto label_2ea7fc;
        case 0x2ea800u: goto label_2ea800;
        case 0x2ea804u: goto label_2ea804;
        case 0x2ea808u: goto label_2ea808;
        case 0x2ea80cu: goto label_2ea80c;
        case 0x2ea810u: goto label_2ea810;
        case 0x2ea814u: goto label_2ea814;
        case 0x2ea818u: goto label_2ea818;
        case 0x2ea81cu: goto label_2ea81c;
        case 0x2ea820u: goto label_2ea820;
        case 0x2ea824u: goto label_2ea824;
        case 0x2ea828u: goto label_2ea828;
        case 0x2ea82cu: goto label_2ea82c;
        case 0x2ea830u: goto label_2ea830;
        case 0x2ea834u: goto label_2ea834;
        case 0x2ea838u: goto label_2ea838;
        case 0x2ea83cu: goto label_2ea83c;
        default: break;
    }

    ctx->pc = 0x2ea6f0u;

label_2ea6f0:
    // 0x2ea6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ea6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ea6f4:
    // 0x2ea6f4: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ea6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2ea6f8:
    // 0x2ea6f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ea6fc:
    // 0x2ea6fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ea6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2ea700:
    // 0x2ea700: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ea700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2ea704:
    // 0x2ea704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ea708:
    // 0x2ea708: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ea708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2ea70c:
    // 0x2ea70c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ea70cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea710:
    // 0x2ea710: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ea710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2ea714:
    // 0x2ea714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ea718:
    // 0x2ea718: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ea718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ea71c:
    // 0x2ea71c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ea71cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea720:
    // 0x2ea720: 0xc089998  jal         func_226660
label_2ea724:
    if (ctx->pc == 0x2EA724u) {
        ctx->pc = 0x2EA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA720u;
        // 0x2ea724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA728u;
        goto label_2ea728;
    }
    ctx->pc = 0x2EA720u;
    SET_GPR_U32(ctx, 31, 0x2EA728u);
    ctx->pc = 0x2EA724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA720u;
    // 0x2ea724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EA720u, 0x2EA728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA728u;
label_2ea728:
    // 0x2ea728: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_2ea72c:
    if (ctx->pc == 0x2EA72Cu) {
        ctx->pc = 0x2EA730u;
        goto label_2ea730;
    }
    ctx->pc = 0x2EA728u;
    {
        const bool branch_taken_0x2ea728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ea728) {
            ctx->pc = 0x2EA75Cu;
            goto label_2ea75c;
        }
    }
    ctx->pc = 0x2EA730u;
label_2ea730:
    // 0x2ea730: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x2ea730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2ea734:
    // 0x2ea734: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ea734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ea738:
    // 0x2ea738: 0xc05dc0e  jal         func_177038
label_2ea73c:
    if (ctx->pc == 0x2EA73Cu) {
        ctx->pc = 0x2EA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA738u;
        // 0x2ea73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA740u;
        goto label_2ea740;
    }
    ctx->pc = 0x2EA738u;
    SET_GPR_U32(ctx, 31, 0x2EA740u);
    ctx->pc = 0x2EA73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA738u;
    // 0x2ea73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x2EA738u, 0x2EA740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA740u;
label_2ea740:
    // 0x2ea740: 0xc05d484  jal         func_175210
label_2ea744:
    if (ctx->pc == 0x2EA744u) {
        ctx->pc = 0x2EA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA740u;
        // 0x2ea744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA748u;
        goto label_2ea748;
    }
    ctx->pc = 0x2EA740u;
    SET_GPR_U32(ctx, 31, 0x2EA748u);
    ctx->pc = 0x2EA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA740u;
    // 0x2ea744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2EA740u, 0x2EA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA748u;
label_2ea748:
    // 0x2ea748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ea748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ea74c:
    // 0x2ea74c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2ea74cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2ea750:
    // 0x2ea750: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2ea750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2ea754:
    // 0x2ea754: 0xa0f809  jalr        $a1
label_2ea758:
    if (ctx->pc == 0x2EA758u) {
        ctx->pc = 0x2EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA754u;
        // 0x2ea758: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA75Cu;
        goto label_2ea75c;
    }
    ctx->pc = 0x2EA754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2EA75Cu);
        ctx->pc = 0x2EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA754u;
        // 0x2ea758: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA754u, 0x2EA75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EA75Cu;
label_2ea75c:
    // 0x2ea75c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ea75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2ea760:
    // 0x2ea760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea764:
    // 0x2ea764: 0xc089998  jal         func_226660
label_2ea768:
    if (ctx->pc == 0x2EA768u) {
        ctx->pc = 0x2EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA764u;
        // 0x2ea768: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA76Cu;
        goto label_2ea76c;
    }
    ctx->pc = 0x2EA764u;
    SET_GPR_U32(ctx, 31, 0x2EA76Cu);
    ctx->pc = 0x2EA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA764u;
    // 0x2ea768: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EA764u, 0x2EA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA76Cu;
label_2ea76c:
    // 0x2ea76c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_2ea770:
    if (ctx->pc == 0x2EA770u) {
        ctx->pc = 0x2EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA76Cu;
        // 0x2ea770: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA774u;
        goto label_2ea774;
    }
    ctx->pc = 0x2EA76Cu;
    {
        const bool branch_taken_0x2ea76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea76c) {
            ctx->pc = 0x2EA770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA76Cu;
            // 0x2ea770: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA828u;
            goto label_2ea828;
        }
    }
    ctx->pc = 0x2EA774u;
label_2ea774:
    // 0x2ea774: 0xc088ef0  jal         func_223BC0
label_2ea778:
    if (ctx->pc == 0x2EA778u) {
        ctx->pc = 0x2EA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA774u;
        // 0x2ea778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA77Cu;
        goto label_2ea77c;
    }
    ctx->pc = 0x2EA774u;
    SET_GPR_U32(ctx, 31, 0x2EA77Cu);
    ctx->pc = 0x2EA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA774u;
    // 0x2ea778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EA774u, 0x2EA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA77Cu;
label_2ea77c:
    // 0x2ea77c: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
label_2ea780:
    if (ctx->pc == 0x2EA780u) {
        ctx->pc = 0x2EA784u;
        goto label_2ea784;
    }
    ctx->pc = 0x2EA77Cu;
    {
        const bool branch_taken_0x2ea77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ea77c) {
            ctx->pc = 0x2EA78Cu;
            goto label_2ea78c;
        }
    }
    ctx->pc = 0x2EA784u;
label_2ea784:
    // 0x2ea784: 0xc08be36  jal         func_22F8D8
label_2ea788:
    if (ctx->pc == 0x2EA788u) {
        ctx->pc = 0x2EA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA784u;
        // 0x2ea788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA78Cu;
        goto label_2ea78c;
    }
    ctx->pc = 0x2EA784u;
    SET_GPR_U32(ctx, 31, 0x2EA78Cu);
    ctx->pc = 0x2EA788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA784u;
    // 0x2ea788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2EA784u, 0x2EA78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA78Cu;
label_2ea78c:
    // 0x2ea78c: 0xc08bfbc  jal         func_22FEF0
label_2ea790:
    if (ctx->pc == 0x2EA790u) {
        ctx->pc = 0x2EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA78Cu;
        // 0x2ea790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA794u;
        goto label_2ea794;
    }
    ctx->pc = 0x2EA78Cu;
    SET_GPR_U32(ctx, 31, 0x2EA794u);
    ctx->pc = 0x2EA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA78Cu;
    // 0x2ea790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2EA78Cu, 0x2EA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA794u;
label_2ea794:
    // 0x2ea794: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ea794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2ea798:
    // 0x2ea798: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2ea798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2ea79c:
    // 0x2ea79c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ea79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2ea7a0:
    // 0x2ea7a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ea7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ea7a4:
    // 0x2ea7a4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ea7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2ea7a8:
    // 0x2ea7a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ea7a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2ea7ac:
    // 0x2ea7ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ea7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ea7b0:
    // 0x2ea7b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ea7b4:
    // 0x2ea7b4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x2ea7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2ea7b8:
    // 0x2ea7b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ea7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2ea7bc:
    // 0x2ea7bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea7c0:
    // 0x2ea7c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ea7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ea7c4:
    // 0x2ea7c4: 0x2405029f  addiu       $a1, $zero, 0x29F
    ctx->pc = 0x2ea7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2ea7c8:
    // 0x2ea7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea7cc:
    // 0x2ea7cc: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2ea7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2ea7d0:
    // 0x2ea7d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea7d4:
    // 0x2ea7d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ea7d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ea7d8:
    // 0x2ea7d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ea7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea7dc:
    // 0x2ea7dc: 0xc0968f8  jal         func_25A3E0
label_2ea7e0:
    if (ctx->pc == 0x2EA7E0u) {
        ctx->pc = 0x2EA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7DCu;
        // 0x2ea7e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7E4u;
        goto label_2ea7e4;
    }
    ctx->pc = 0x2EA7DCu;
    SET_GPR_U32(ctx, 31, 0x2EA7E4u);
    ctx->pc = 0x2EA7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7DCu;
    // 0x2ea7e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2EA7DCu, 0x2EA7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7E4u;
label_2ea7e4:
    // 0x2ea7e4: 0x9243002e  lbu         $v1, 0x2E($s2)
    ctx->pc = 0x2ea7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
label_2ea7e8:
    // 0x2ea7e8: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_2ea7ec:
    if (ctx->pc == 0x2EA7ECu) {
        ctx->pc = 0x2EA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7E8u;
        // 0x2ea7ec: 0xa253002e  sb          $s3, 0x2E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 46), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA7F0u;
        goto label_2ea7f0;
    }
    ctx->pc = 0x2EA7E8u;
    {
        const bool branch_taken_0x2ea7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea7e8) {
            ctx->pc = 0x2EA7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA7E8u;
            // 0x2ea7ec: 0xa253002e  sb          $s3, 0x2E($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 46), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA824u;
            goto label_2ea824;
        }
    }
    ctx->pc = 0x2EA7F0u;
label_2ea7f0:
    // 0x2ea7f0: 0xa2330194  sb          $s3, 0x194($s1)
    ctx->pc = 0x2ea7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 19));
label_2ea7f4:
    // 0x2ea7f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ea7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ea7f8:
    // 0x2ea7f8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ea7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2ea7fc:
    // 0x2ea7fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ea7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ea800:
    // 0x2ea800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ea804:
    // 0x2ea804: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ea804u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ea808:
    // 0x2ea808: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2ea808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2ea80c:
    // 0x2ea80c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea810:
    // 0x2ea810: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ea810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea814:
    // 0x2ea814: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea818:
    // 0x2ea818: 0xc088178  jal         func_2205E0
label_2ea81c:
    if (ctx->pc == 0x2EA81Cu) {
        ctx->pc = 0x2EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA818u;
        // 0x2ea81c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA820u;
        goto label_2ea820;
    }
    ctx->pc = 0x2EA818u;
    SET_GPR_U32(ctx, 31, 0x2EA820u);
    ctx->pc = 0x2EA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA818u;
    // 0x2ea81c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EA818u, 0x2EA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA820u;
label_2ea820:
    // 0x2ea820: 0xa253002e  sb          $s3, 0x2E($s2)
    ctx->pc = 0x2ea820u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 46), (uint8_t)GPR_U32(ctx, 19));
label_2ea824:
    // 0x2ea824: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ea824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ea828:
    // 0x2ea828: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ea828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ea82c:
    // 0x2ea82c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ea82cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ea830:
    // 0x2ea830: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ea830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ea834:
    // 0x2ea834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea838:
    // 0x2ea838: 0x3e00008  jr          $ra
label_2ea83c:
    if (ctx->pc == 0x2EA83Cu) {
        ctx->pc = 0x2EA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA838u;
        // 0x2ea83c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EA840u;
        goto label_fallthrough_0x2ea838;
    }
    ctx->pc = 0x2EA838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA838u;
        // 0x2ea83c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ea838:
    ctx->pc = 0x2EA840u;
}
