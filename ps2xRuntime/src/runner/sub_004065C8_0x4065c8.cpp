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

// Function: sub_004065C8
// Address: 0x4065c8 - 0x406838
void sub_004065C8_0x4065c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004065C8_0x4065c8");
#endif

    switch (ctx->pc) {
        case 0x4065c8u: goto label_4065c8;
        case 0x4065ccu: goto label_4065cc;
        case 0x4065d0u: goto label_4065d0;
        case 0x4065d4u: goto label_4065d4;
        case 0x4065d8u: goto label_4065d8;
        case 0x4065dcu: goto label_4065dc;
        case 0x4065e0u: goto label_4065e0;
        case 0x4065e4u: goto label_4065e4;
        case 0x4065e8u: goto label_4065e8;
        case 0x4065ecu: goto label_4065ec;
        case 0x4065f0u: goto label_4065f0;
        case 0x4065f4u: goto label_4065f4;
        case 0x4065f8u: goto label_4065f8;
        case 0x4065fcu: goto label_4065fc;
        case 0x406600u: goto label_406600;
        case 0x406604u: goto label_406604;
        case 0x406608u: goto label_406608;
        case 0x40660cu: goto label_40660c;
        case 0x406610u: goto label_406610;
        case 0x406614u: goto label_406614;
        case 0x406618u: goto label_406618;
        case 0x40661cu: goto label_40661c;
        case 0x406620u: goto label_406620;
        case 0x406624u: goto label_406624;
        case 0x406628u: goto label_406628;
        case 0x40662cu: goto label_40662c;
        case 0x406630u: goto label_406630;
        case 0x406634u: goto label_406634;
        case 0x406638u: goto label_406638;
        case 0x40663cu: goto label_40663c;
        case 0x406640u: goto label_406640;
        case 0x406644u: goto label_406644;
        case 0x406648u: goto label_406648;
        case 0x40664cu: goto label_40664c;
        case 0x406650u: goto label_406650;
        case 0x406654u: goto label_406654;
        case 0x406658u: goto label_406658;
        case 0x40665cu: goto label_40665c;
        case 0x406660u: goto label_406660;
        case 0x406664u: goto label_406664;
        case 0x406668u: goto label_406668;
        case 0x40666cu: goto label_40666c;
        case 0x406670u: goto label_406670;
        case 0x406674u: goto label_406674;
        case 0x406678u: goto label_406678;
        case 0x40667cu: goto label_40667c;
        case 0x406680u: goto label_406680;
        case 0x406684u: goto label_406684;
        case 0x406688u: goto label_406688;
        case 0x40668cu: goto label_40668c;
        case 0x406690u: goto label_406690;
        case 0x406694u: goto label_406694;
        case 0x406698u: goto label_406698;
        case 0x40669cu: goto label_40669c;
        case 0x4066a0u: goto label_4066a0;
        case 0x4066a4u: goto label_4066a4;
        case 0x4066a8u: goto label_4066a8;
        case 0x4066acu: goto label_4066ac;
        case 0x4066b0u: goto label_4066b0;
        case 0x4066b4u: goto label_4066b4;
        case 0x4066b8u: goto label_4066b8;
        case 0x4066bcu: goto label_4066bc;
        case 0x4066c0u: goto label_4066c0;
        case 0x4066c4u: goto label_4066c4;
        case 0x4066c8u: goto label_4066c8;
        case 0x4066ccu: goto label_4066cc;
        case 0x4066d0u: goto label_4066d0;
        case 0x4066d4u: goto label_4066d4;
        case 0x4066d8u: goto label_4066d8;
        case 0x4066dcu: goto label_4066dc;
        case 0x4066e0u: goto label_4066e0;
        case 0x4066e4u: goto label_4066e4;
        case 0x4066e8u: goto label_4066e8;
        case 0x4066ecu: goto label_4066ec;
        case 0x4066f0u: goto label_4066f0;
        case 0x4066f4u: goto label_4066f4;
        case 0x4066f8u: goto label_4066f8;
        case 0x4066fcu: goto label_4066fc;
        case 0x406700u: goto label_406700;
        case 0x406704u: goto label_406704;
        case 0x406708u: goto label_406708;
        case 0x40670cu: goto label_40670c;
        case 0x406710u: goto label_406710;
        case 0x406714u: goto label_406714;
        case 0x406718u: goto label_406718;
        case 0x40671cu: goto label_40671c;
        case 0x406720u: goto label_406720;
        case 0x406724u: goto label_406724;
        case 0x406728u: goto label_406728;
        case 0x40672cu: goto label_40672c;
        case 0x406730u: goto label_406730;
        case 0x406734u: goto label_406734;
        case 0x406738u: goto label_406738;
        case 0x40673cu: goto label_40673c;
        case 0x406740u: goto label_406740;
        case 0x406744u: goto label_406744;
        case 0x406748u: goto label_406748;
        case 0x40674cu: goto label_40674c;
        case 0x406750u: goto label_406750;
        case 0x406754u: goto label_406754;
        case 0x406758u: goto label_406758;
        case 0x40675cu: goto label_40675c;
        case 0x406760u: goto label_406760;
        case 0x406764u: goto label_406764;
        case 0x406768u: goto label_406768;
        case 0x40676cu: goto label_40676c;
        case 0x406770u: goto label_406770;
        case 0x406774u: goto label_406774;
        case 0x406778u: goto label_406778;
        case 0x40677cu: goto label_40677c;
        case 0x406780u: goto label_406780;
        case 0x406784u: goto label_406784;
        case 0x406788u: goto label_406788;
        case 0x40678cu: goto label_40678c;
        case 0x406790u: goto label_406790;
        case 0x406794u: goto label_406794;
        case 0x406798u: goto label_406798;
        case 0x40679cu: goto label_40679c;
        case 0x4067a0u: goto label_4067a0;
        case 0x4067a4u: goto label_4067a4;
        case 0x4067a8u: goto label_4067a8;
        case 0x4067acu: goto label_4067ac;
        case 0x4067b0u: goto label_4067b0;
        case 0x4067b4u: goto label_4067b4;
        case 0x4067b8u: goto label_4067b8;
        case 0x4067bcu: goto label_4067bc;
        case 0x4067c0u: goto label_4067c0;
        case 0x4067c4u: goto label_4067c4;
        case 0x4067c8u: goto label_4067c8;
        case 0x4067ccu: goto label_4067cc;
        case 0x4067d0u: goto label_4067d0;
        case 0x4067d4u: goto label_4067d4;
        case 0x4067d8u: goto label_4067d8;
        case 0x4067dcu: goto label_4067dc;
        case 0x4067e0u: goto label_4067e0;
        case 0x4067e4u: goto label_4067e4;
        case 0x4067e8u: goto label_4067e8;
        case 0x4067ecu: goto label_4067ec;
        case 0x4067f0u: goto label_4067f0;
        case 0x4067f4u: goto label_4067f4;
        case 0x4067f8u: goto label_4067f8;
        case 0x4067fcu: goto label_4067fc;
        case 0x406800u: goto label_406800;
        case 0x406804u: goto label_406804;
        case 0x406808u: goto label_406808;
        case 0x40680cu: goto label_40680c;
        case 0x406810u: goto label_406810;
        case 0x406814u: goto label_406814;
        case 0x406818u: goto label_406818;
        case 0x40681cu: goto label_40681c;
        case 0x406820u: goto label_406820;
        case 0x406824u: goto label_406824;
        case 0x406828u: goto label_406828;
        case 0x40682cu: goto label_40682c;
        case 0x406830u: goto label_406830;
        case 0x406834u: goto label_406834;
        default: break;
    }

    ctx->pc = 0x4065c8u;

label_4065c8:
    // 0x4065c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4065c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4065cc:
    // 0x4065cc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4065ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_4065d0:
    // 0x4065d0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4065d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_4065d4:
    // 0x4065d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4065d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4065d8:
    // 0x4065d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4065d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4065dc:
    // 0x4065dc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4065dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_4065e0:
    // 0x4065e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4065e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4065e4:
    // 0x4065e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4065e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4065e8:
    // 0x4065e8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4065e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_4065ec:
    // 0x4065ec: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4065ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_4065f0:
    // 0x4065f0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4065f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_4065f4:
    // 0x4065f4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4065f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_4065f8:
    // 0x4065f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4065f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_4065fc:
    // 0x4065fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4065fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_406600:
    // 0x406600: 0xc0ea146  jal         func_3A8518
label_406604:
    if (ctx->pc == 0x406604u) {
        ctx->pc = 0x406604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406600u;
        // 0x406604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406608u;
        goto label_406608;
    }
    ctx->pc = 0x406600u;
    SET_GPR_U32(ctx, 31, 0x406608u);
    ctx->pc = 0x406604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406600u;
    // 0x406604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x406600u, 0x406608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406608u;
label_406608:
    // 0x406608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x406608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40660c:
    // 0x40660c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x40660cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406610:
    // 0x406610: 0xc0ea12a  jal         func_3A84A8
label_406614:
    if (ctx->pc == 0x406614u) {
        ctx->pc = 0x406614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406610u;
        // 0x406614: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406618u;
        goto label_406618;
    }
    ctx->pc = 0x406610u;
    SET_GPR_U32(ctx, 31, 0x406618u);
    ctx->pc = 0x406614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406610u;
    // 0x406614: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x406610u, 0x406618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406618u;
label_406618:
    // 0x406618: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x406618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40661c:
    // 0x40661c: 0xc0ea12a  jal         func_3A84A8
label_406620:
    if (ctx->pc == 0x406620u) {
        ctx->pc = 0x406620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40661Cu;
        // 0x406620: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406624u;
        goto label_406624;
    }
    ctx->pc = 0x40661Cu;
    SET_GPR_U32(ctx, 31, 0x406624u);
    ctx->pc = 0x406620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40661Cu;
    // 0x406620: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x40661Cu, 0x406624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406624u;
label_406624:
    // 0x406624: 0xc0ea146  jal         func_3A8518
label_406628:
    if (ctx->pc == 0x406628u) {
        ctx->pc = 0x406628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406624u;
        // 0x406628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40662Cu;
        goto label_40662c;
    }
    ctx->pc = 0x406624u;
    SET_GPR_U32(ctx, 31, 0x40662Cu);
    ctx->pc = 0x406628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406624u;
    // 0x406628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x406624u, 0x40662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40662Cu;
label_40662c:
    // 0x40662c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_406630:
    // 0x406630: 0xc0ea14c  jal         func_3A8530
label_406634:
    if (ctx->pc == 0x406634u) {
        ctx->pc = 0x406634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406630u;
        // 0x406634: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406638u;
        goto label_406638;
    }
    ctx->pc = 0x406630u;
    SET_GPR_U32(ctx, 31, 0x406638u);
    ctx->pc = 0x406634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406630u;
    // 0x406634: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x406630u, 0x406638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406638u;
label_406638:
    // 0x406638: 0xc08a61a  jal         func_229868
label_40663c:
    if (ctx->pc == 0x40663Cu) {
        ctx->pc = 0x40663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406638u;
        // 0x40663c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406640u;
        goto label_406640;
    }
    ctx->pc = 0x406638u;
    SET_GPR_U32(ctx, 31, 0x406640u);
    ctx->pc = 0x40663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406638u;
    // 0x40663c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x406638u, 0x406640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406640u;
label_406640:
    // 0x406640: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x406640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406644:
    // 0x406644: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x406644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_406648:
    // 0x406648: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_40664c:
    if (ctx->pc == 0x40664Cu) {
        ctx->pc = 0x406650u;
        goto label_406650;
    }
    ctx->pc = 0x406648u;
    {
        const bool branch_taken_0x406648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406648) {
            ctx->pc = 0x406664u;
            goto label_406664;
        }
    }
    ctx->pc = 0x406650u;
label_406650:
    // 0x406650: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x406650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_406654:
    // 0x406654: 0xc0e91f0  jal         func_3A47C0
label_406658:
    if (ctx->pc == 0x406658u) {
        ctx->pc = 0x406658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406654u;
        // 0x406658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40665Cu;
        goto label_40665c;
    }
    ctx->pc = 0x406654u;
    SET_GPR_U32(ctx, 31, 0x40665Cu);
    ctx->pc = 0x406658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406654u;
    // 0x406658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x406654u, 0x40665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40665Cu;
label_40665c:
    // 0x40665c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_406660:
    // 0x406660: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x406660u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_406664:
    // 0x406664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x406664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_406668:
    // 0x406668: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40666c:
    // 0x40666c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x40666cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_406670:
    // 0x406670: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x406670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_406674:
    // 0x406674: 0x26550010  addiu       $s5, $s2, 0x10
    ctx->pc = 0x406674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_406678:
    // 0x406678: 0x3c0544c1  lui         $a1, 0x44C1
    ctx->pc = 0x406678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17601 << 16));
label_40667c:
    // 0x40667c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x40667cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_406680:
    // 0x406680: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x406680u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_406684:
    // 0x406684: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x406684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_406688:
    // 0x406688: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x406688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40668c:
    // 0x40668c: 0xc043f74  jal         func_10FDD0
label_406690:
    if (ctx->pc == 0x406690u) {
        ctx->pc = 0x406690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40668Cu;
        // 0x406690: 0x34a5e078  ori         $a1, $a1, 0xE078 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57464);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406694u;
        goto label_406694;
    }
    ctx->pc = 0x40668Cu;
    SET_GPR_U32(ctx, 31, 0x406694u);
    ctx->pc = 0x406690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40668Cu;
    // 0x406690: 0x34a5e078  ori         $a1, $a1, 0xE078 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57464);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x40668Cu, 0x406694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406694u;
label_406694:
    // 0x406694: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x406694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_406698:
    // 0x406698: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x406698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_40669c:
    // 0x40669c: 0x3c05d9ea  lui         $a1, 0xD9EA
    ctx->pc = 0x40669cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55786 << 16));
label_4066a0:
    // 0x4066a0: 0x34a58763  ori         $a1, $a1, 0x8763
    ctx->pc = 0x4066a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34659);
label_4066a4:
    // 0x4066a4: 0xc04403a  jal         func_1100E8
label_4066a8:
    if (ctx->pc == 0x4066A8u) {
        ctx->pc = 0x4066A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066A4u;
        // 0x4066a8: 0x261016c0  addiu       $s0, $s0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4066ACu;
        goto label_4066ac;
    }
    ctx->pc = 0x4066A4u;
    SET_GPR_U32(ctx, 31, 0x4066ACu);
    ctx->pc = 0x4066A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4066A4u;
    // 0x4066a8: 0x261016c0  addiu       $s0, $s0, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100E8u, 0x4066A4u, 0x4066ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4066ACu;
label_4066ac:
    // 0x4066ac: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x4066acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_4066b0:
    // 0x4066b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4066b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4066b4:
    // 0x4066b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4066b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4066b8:
    // 0x4066b8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x4066b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_4066bc:
    // 0x4066bc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x4066bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4066c0:
    // 0x4066c0: 0x60f809  jalr        $v1
label_4066c4:
    if (ctx->pc == 0x4066C4u) {
        ctx->pc = 0x4066C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066C0u;
        // 0x4066c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4066C8u;
        goto label_4066c8;
    }
    ctx->pc = 0x4066C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4066C8u);
        ctx->pc = 0x4066C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066C0u;
        // 0x4066c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4066C0u, 0x4066C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4066C8u;
label_4066c8:
    // 0x4066c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4066c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4066cc:
    // 0x4066cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4066ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4066d0:
    // 0x4066d0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x4066d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_4066d4:
    // 0x4066d4: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x4066d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_4066d8:
    // 0x4066d8: 0x60f809  jalr        $v1
label_4066dc:
    if (ctx->pc == 0x4066DCu) {
        ctx->pc = 0x4066DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066D8u;
        // 0x4066dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4066E0u;
        goto label_4066e0;
    }
    ctx->pc = 0x4066D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4066E0u);
        ctx->pc = 0x4066DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066D8u;
        // 0x4066dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4066D8u, 0x4066E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4066E0u;
label_4066e0:
    // 0x4066e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4066e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4066e4:
    // 0x4066e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4066e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4066e8:
    // 0x4066e8: 0xc0e8604  jal         func_3A1810
label_4066ec:
    if (ctx->pc == 0x4066ECu) {
        ctx->pc = 0x4066ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066E8u;
        // 0x4066ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4066F0u;
        goto label_4066f0;
    }
    ctx->pc = 0x4066E8u;
    SET_GPR_U32(ctx, 31, 0x4066F0u);
    ctx->pc = 0x4066ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4066E8u;
    // 0x4066ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x4066E8u, 0x4066F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4066F0u;
label_4066f0:
    // 0x4066f0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4066f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4066f4:
    // 0x4066f4: 0x3c03f9ff  lui         $v1, 0xF9FF
    ctx->pc = 0x4066f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63999 << 16));
label_4066f8:
    // 0x4066f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4066f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4066fc:
    // 0x4066fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4066fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_406700:
    // 0x406700: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x406700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_406704:
    // 0x406704: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x406704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_406708:
    // 0x406708: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x406708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_40670c:
    // 0x40670c: 0x17c0000f  bnez        $fp, . + 4 + (0xF << 2)
label_406710:
    if (ctx->pc == 0x406710u) {
        ctx->pc = 0x406710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40670Cu;
        // 0x406710: 0xae840004  sw          $a0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406714u;
        goto label_406714;
    }
    ctx->pc = 0x40670Cu;
    {
        const bool branch_taken_0x40670c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x406710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40670Cu;
        // 0x406710: 0xae840004  sw          $a0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40670c) {
            ctx->pc = 0x40674Cu;
            goto label_40674c;
        }
    }
    ctx->pc = 0x406714u;
label_406714:
    // 0x406714: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x406714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_406718:
    // 0x406718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x406718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40671c:
    // 0x40671c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406720:
    // 0x406720: 0xc0e8e5e  jal         func_3A3978
label_406724:
    if (ctx->pc == 0x406724u) {
        ctx->pc = 0x406724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406720u;
        // 0x406724: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406728u;
        goto label_406728;
    }
    ctx->pc = 0x406720u;
    SET_GPR_U32(ctx, 31, 0x406728u);
    ctx->pc = 0x406724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406720u;
    // 0x406724: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x406720u, 0x406728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406728u;
label_406728:
    // 0x406728: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x406728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40672c:
    // 0x40672c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x40672cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_406730:
    // 0x406730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406734:
    // 0x406734: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x406734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406738:
    // 0x406738: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x406738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_40673c:
    // 0x40673c: 0xc0e8e5e  jal         func_3A3978
label_406740:
    if (ctx->pc == 0x406740u) {
        ctx->pc = 0x406740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40673Cu;
        // 0x406740: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406744u;
        goto label_406744;
    }
    ctx->pc = 0x40673Cu;
    SET_GPR_U32(ctx, 31, 0x406744u);
    ctx->pc = 0x406740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40673Cu;
    // 0x406740: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x40673Cu, 0x406744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406744u;
label_406744:
    // 0x406744: 0x10000005  b           . + 4 + (0x5 << 2)
label_406748:
    if (ctx->pc == 0x406748u) {
        ctx->pc = 0x406748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406744u;
        // 0x406748: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40674Cu;
        goto label_40674c;
    }
    ctx->pc = 0x406744u;
    {
        const bool branch_taken_0x406744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406744u;
        // 0x406748: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406744) {
            ctx->pc = 0x40675Cu;
            goto label_40675c;
        }
    }
    ctx->pc = 0x40674Cu;
label_40674c:
    // 0x40674c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x40674cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_406750:
    // 0x406750: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x406750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_406754:
    // 0x406754: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x406754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_406758:
    // 0x406758: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x406758u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_40675c:
    // 0x40675c: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x40675cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
label_406760:
    // 0x406760: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x406760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_406764:
    // 0x406764: 0xc0ea176  jal         func_3A85D8
label_406768:
    if (ctx->pc == 0x406768u) {
        ctx->pc = 0x406768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406764u;
        // 0x406768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40676Cu;
        goto label_40676c;
    }
    ctx->pc = 0x406764u;
    SET_GPR_U32(ctx, 31, 0x40676Cu);
    ctx->pc = 0x406768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406764u;
    // 0x406768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x406764u, 0x40676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40676Cu;
label_40676c:
    // 0x40676c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x40676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_406770:
    // 0x406770: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x406770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_406774:
    // 0x406774: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x406774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_406778:
    // 0x406778: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x406778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_40677c:
    // 0x40677c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x40677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_406780:
    // 0x406780: 0x40f809  jalr        $v0
label_406784:
    if (ctx->pc == 0x406784u) {
        ctx->pc = 0x406784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406780u;
        // 0x406784: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406788u;
        goto label_406788;
    }
    ctx->pc = 0x406780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x406788u);
        ctx->pc = 0x406784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406780u;
        // 0x406784: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406780u, 0x406788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406788u;
label_406788:
    // 0x406788: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x406788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40678c:
    // 0x40678c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x40678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_406790:
    // 0x406790: 0x244316c0  addiu       $v1, $v0, 0x16C0
    ctx->pc = 0x406790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_406794:
    // 0x406794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406798:
    // 0x406798: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x406798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_40679c:
    // 0x40679c: 0xc0e8e26  jal         func_3A3898
label_4067a0:
    if (ctx->pc == 0x4067A0u) {
        ctx->pc = 0x4067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40679Cu;
        // 0x4067a0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4067A4u;
        goto label_4067a4;
    }
    ctx->pc = 0x40679Cu;
    SET_GPR_U32(ctx, 31, 0x4067A4u);
    ctx->pc = 0x4067A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40679Cu;
    // 0x4067a0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x40679Cu, 0x4067A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4067A4u;
label_4067a4:
    // 0x4067a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4067a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4067a8:
    // 0x4067a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4067a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4067ac:
    // 0x4067ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4067acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4067b0:
    // 0x4067b0: 0xc0ea164  jal         func_3A8590
label_4067b4:
    if (ctx->pc == 0x4067B4u) {
        ctx->pc = 0x4067B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067B0u;
        // 0x4067b4: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4067B8u;
        goto label_4067b8;
    }
    ctx->pc = 0x4067B0u;
    SET_GPR_U32(ctx, 31, 0x4067B8u);
    ctx->pc = 0x4067B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4067B0u;
    // 0x4067b4: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x4067B0u, 0x4067B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4067B8u;
label_4067b8:
    // 0x4067b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4067b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4067bc:
    // 0x4067bc: 0xc0ea158  jal         func_3A8560
label_4067c0:
    if (ctx->pc == 0x4067C0u) {
        ctx->pc = 0x4067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067BCu;
        // 0x4067c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4067C4u;
        goto label_4067c4;
    }
    ctx->pc = 0x4067BCu;
    SET_GPR_U32(ctx, 31, 0x4067C4u);
    ctx->pc = 0x4067C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4067BCu;
    // 0x4067c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x4067BCu, 0x4067C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4067C4u;
label_4067c4:
    // 0x4067c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4067c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4067c8:
    // 0x4067c8: 0xc0e8dee  jal         func_3A37B8
label_4067cc:
    if (ctx->pc == 0x4067CCu) {
        ctx->pc = 0x4067CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067C8u;
        // 0x4067cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4067D0u;
        goto label_4067d0;
    }
    ctx->pc = 0x4067C8u;
    SET_GPR_U32(ctx, 31, 0x4067D0u);
    ctx->pc = 0x4067CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4067C8u;
    // 0x4067cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x4067C8u, 0x4067D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4067D0u;
label_4067d0:
    // 0x4067d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4067d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4067d4:
    // 0x4067d4: 0xc0ea16a  jal         func_3A85A8
label_4067d8:
    if (ctx->pc == 0x4067D8u) {
        ctx->pc = 0x4067D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067D4u;
        // 0x4067d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4067DCu;
        goto label_4067dc;
    }
    ctx->pc = 0x4067D4u;
    SET_GPR_U32(ctx, 31, 0x4067DCu);
    ctx->pc = 0x4067D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4067D4u;
    // 0x4067d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x4067D4u, 0x4067DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4067DCu;
label_4067dc:
    // 0x4067dc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4067dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4067e0:
    // 0x4067e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4067e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4067e4:
    // 0x4067e4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x4067e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4067e8:
    // 0x4067e8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4067e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4067ec:
    // 0x4067ec: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4067ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4067f0:
    // 0x4067f0: 0x60f809  jalr        $v1
label_4067f4:
    if (ctx->pc == 0x4067F4u) {
        ctx->pc = 0x4067F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067F0u;
        // 0x4067f4: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4067F8u;
        goto label_4067f8;
    }
    ctx->pc = 0x4067F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4067F8u);
        ctx->pc = 0x4067F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067F0u;
        // 0x4067f4: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4067F0u, 0x4067F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4067F8u;
label_4067f8:
    // 0x4067f8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4067f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4067fc:
    // 0x4067fc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x4067fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_406800:
    // 0x406800: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x406800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_406804:
    // 0x406804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x406804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_406808:
    // 0x406808: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x406808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_40680c:
    // 0x40680c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x40680cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_406810:
    // 0x406810: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x406810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_406814:
    // 0x406814: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x406814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_406818:
    // 0x406818: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x406818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40681c:
    // 0x40681c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x40681cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_406820:
    // 0x406820: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x406820u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_406824:
    // 0x406824: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x406824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_406828:
    // 0x406828: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x406828u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40682c:
    // 0x40682c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40682cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_406830:
    // 0x406830: 0x3e00008  jr          $ra
label_406834:
    if (ctx->pc == 0x406834u) {
        ctx->pc = 0x406834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406830u;
        // 0x406834: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406838u;
        goto label_fallthrough_0x406830;
    }
    ctx->pc = 0x406830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406830u;
        // 0x406834: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x406830:
    ctx->pc = 0x406838u;
}
