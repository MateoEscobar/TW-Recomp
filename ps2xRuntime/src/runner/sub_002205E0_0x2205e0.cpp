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

// Function: sub_002205E0
// Address: 0x2205e0 - 0x2207d0
void sub_002205E0_0x2205e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002205E0_0x2205e0");
#endif

    switch (ctx->pc) {
        case 0x2205e0u: goto label_2205e0;
        case 0x2205e4u: goto label_2205e4;
        case 0x2205e8u: goto label_2205e8;
        case 0x2205ecu: goto label_2205ec;
        case 0x2205f0u: goto label_2205f0;
        case 0x2205f4u: goto label_2205f4;
        case 0x2205f8u: goto label_2205f8;
        case 0x2205fcu: goto label_2205fc;
        case 0x220600u: goto label_220600;
        case 0x220604u: goto label_220604;
        case 0x220608u: goto label_220608;
        case 0x22060cu: goto label_22060c;
        case 0x220610u: goto label_220610;
        case 0x220614u: goto label_220614;
        case 0x220618u: goto label_220618;
        case 0x22061cu: goto label_22061c;
        case 0x220620u: goto label_220620;
        case 0x220624u: goto label_220624;
        case 0x220628u: goto label_220628;
        case 0x22062cu: goto label_22062c;
        case 0x220630u: goto label_220630;
        case 0x220634u: goto label_220634;
        case 0x220638u: goto label_220638;
        case 0x22063cu: goto label_22063c;
        case 0x220640u: goto label_220640;
        case 0x220644u: goto label_220644;
        case 0x220648u: goto label_220648;
        case 0x22064cu: goto label_22064c;
        case 0x220650u: goto label_220650;
        case 0x220654u: goto label_220654;
        case 0x220658u: goto label_220658;
        case 0x22065cu: goto label_22065c;
        case 0x220660u: goto label_220660;
        case 0x220664u: goto label_220664;
        case 0x220668u: goto label_220668;
        case 0x22066cu: goto label_22066c;
        case 0x220670u: goto label_220670;
        case 0x220674u: goto label_220674;
        case 0x220678u: goto label_220678;
        case 0x22067cu: goto label_22067c;
        case 0x220680u: goto label_220680;
        case 0x220684u: goto label_220684;
        case 0x220688u: goto label_220688;
        case 0x22068cu: goto label_22068c;
        case 0x220690u: goto label_220690;
        case 0x220694u: goto label_220694;
        case 0x220698u: goto label_220698;
        case 0x22069cu: goto label_22069c;
        case 0x2206a0u: goto label_2206a0;
        case 0x2206a4u: goto label_2206a4;
        case 0x2206a8u: goto label_2206a8;
        case 0x2206acu: goto label_2206ac;
        case 0x2206b0u: goto label_2206b0;
        case 0x2206b4u: goto label_2206b4;
        case 0x2206b8u: goto label_2206b8;
        case 0x2206bcu: goto label_2206bc;
        case 0x2206c0u: goto label_2206c0;
        case 0x2206c4u: goto label_2206c4;
        case 0x2206c8u: goto label_2206c8;
        case 0x2206ccu: goto label_2206cc;
        case 0x2206d0u: goto label_2206d0;
        case 0x2206d4u: goto label_2206d4;
        case 0x2206d8u: goto label_2206d8;
        case 0x2206dcu: goto label_2206dc;
        case 0x2206e0u: goto label_2206e0;
        case 0x2206e4u: goto label_2206e4;
        case 0x2206e8u: goto label_2206e8;
        case 0x2206ecu: goto label_2206ec;
        case 0x2206f0u: goto label_2206f0;
        case 0x2206f4u: goto label_2206f4;
        case 0x2206f8u: goto label_2206f8;
        case 0x2206fcu: goto label_2206fc;
        case 0x220700u: goto label_220700;
        case 0x220704u: goto label_220704;
        case 0x220708u: goto label_220708;
        case 0x22070cu: goto label_22070c;
        case 0x220710u: goto label_220710;
        case 0x220714u: goto label_220714;
        case 0x220718u: goto label_220718;
        case 0x22071cu: goto label_22071c;
        case 0x220720u: goto label_220720;
        case 0x220724u: goto label_220724;
        case 0x220728u: goto label_220728;
        case 0x22072cu: goto label_22072c;
        case 0x220730u: goto label_220730;
        case 0x220734u: goto label_220734;
        case 0x220738u: goto label_220738;
        case 0x22073cu: goto label_22073c;
        case 0x220740u: goto label_220740;
        case 0x220744u: goto label_220744;
        case 0x220748u: goto label_220748;
        case 0x22074cu: goto label_22074c;
        case 0x220750u: goto label_220750;
        case 0x220754u: goto label_220754;
        case 0x220758u: goto label_220758;
        case 0x22075cu: goto label_22075c;
        case 0x220760u: goto label_220760;
        case 0x220764u: goto label_220764;
        case 0x220768u: goto label_220768;
        case 0x22076cu: goto label_22076c;
        case 0x220770u: goto label_220770;
        case 0x220774u: goto label_220774;
        case 0x220778u: goto label_220778;
        case 0x22077cu: goto label_22077c;
        case 0x220780u: goto label_220780;
        case 0x220784u: goto label_220784;
        case 0x220788u: goto label_220788;
        case 0x22078cu: goto label_22078c;
        case 0x220790u: goto label_220790;
        case 0x220794u: goto label_220794;
        case 0x220798u: goto label_220798;
        case 0x22079cu: goto label_22079c;
        case 0x2207a0u: goto label_2207a0;
        case 0x2207a4u: goto label_2207a4;
        case 0x2207a8u: goto label_2207a8;
        case 0x2207acu: goto label_2207ac;
        case 0x2207b0u: goto label_2207b0;
        case 0x2207b4u: goto label_2207b4;
        case 0x2207b8u: goto label_2207b8;
        case 0x2207bcu: goto label_2207bc;
        case 0x2207c0u: goto label_2207c0;
        case 0x2207c4u: goto label_2207c4;
        case 0x2207c8u: goto label_2207c8;
        case 0x2207ccu: goto label_2207cc;
        default: break;
    }

    ctx->pc = 0x2205e0u;

label_2205e0:
    // 0x2205e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2205e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2205e4:
    // 0x2205e4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2205e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2205e8:
    // 0x2205e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2205e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2205ec:
    // 0x2205ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2205ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2205f0:
    // 0x2205f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2205f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2205f4:
    // 0x2205f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2205f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2205f8:
    // 0x2205f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2205f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2205fc:
    // 0x2205fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2205fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_220600:
    // 0x220600: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x220600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_220604:
    // 0x220604: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x220604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_220608:
    // 0x220608: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x220608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_22060c:
    // 0x22060c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x22060cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_220610:
    // 0x220610: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x220610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_220614:
    // 0x220614: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x220614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_220618:
    // 0x220618: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x220618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_22061c:
    // 0x22061c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22061cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_220620:
    // 0x220620: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x220620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_220624:
    // 0x220624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x220624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_220628:
    // 0x220628: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_22062c:
    if (ctx->pc == 0x22062Cu) {
        ctx->pc = 0x22062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220628u;
        // 0x22062c: 0xafa90018  sw          $t1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220630u;
        goto label_220630;
    }
    ctx->pc = 0x220628u;
    {
        const bool branch_taken_0x220628 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220628u;
        // 0x22062c: 0xafa90018  sw          $t1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220628) {
            ctx->pc = 0x220698u;
            goto label_220698;
        }
    }
    ctx->pc = 0x220630u;
label_220630:
    // 0x220630: 0x92020199  lbu         $v0, 0x199($s0)
    ctx->pc = 0x220630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_220634:
    // 0x220634: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_220638:
    if (ctx->pc == 0x220638u) {
        ctx->pc = 0x220638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220634u;
        // 0x220638: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22063Cu;
        goto label_22063c;
    }
    ctx->pc = 0x220634u;
    {
        const bool branch_taken_0x220634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220634u;
        // 0x220638: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220634) {
            ctx->pc = 0x22069Cu;
            goto label_22069c;
        }
    }
    ctx->pc = 0x22063Cu;
label_22063c:
    // 0x22063c: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
label_220640:
    if (ctx->pc == 0x220640u) {
        ctx->pc = 0x220640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22063Cu;
        // 0x220640: 0x86030092  lh          $v1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220644u;
        goto label_220644;
    }
    ctx->pc = 0x22063Cu;
    {
        const bool branch_taken_0x22063c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22063c) {
            ctx->pc = 0x220640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22063Cu;
            // 0x220640: 0x86030092  lh          $v1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220660u;
            goto label_220660;
        }
    }
    ctx->pc = 0x220644u;
label_220644:
    // 0x220644: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_220648:
    // 0x220648: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x220648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22064c:
    // 0x22064c: 0xc043d5e  jal         func_10F578
label_220650:
    if (ctx->pc == 0x220650u) {
        ctx->pc = 0x220650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22064Cu;
        // 0x220650: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220654u;
        goto label_220654;
    }
    ctx->pc = 0x22064Cu;
    SET_GPR_U32(ctx, 31, 0x220654u);
    ctx->pc = 0x220650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22064Cu;
    // 0x220650: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x22064Cu, 0x220654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220654u;
label_220654:
    // 0x220654: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_220658:
    if (ctx->pc == 0x220658u) {
        ctx->pc = 0x220658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220654u;
        // 0x220658: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22065Cu;
        goto label_22065c;
    }
    ctx->pc = 0x220654u;
    {
        const bool branch_taken_0x220654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220654u;
        // 0x220658: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220654) {
            ctx->pc = 0x22069Cu;
            goto label_22069c;
        }
    }
    ctx->pc = 0x22065Cu;
label_22065c:
    // 0x22065c: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x22065cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_220660:
    // 0x220660: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x220660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_220664:
    // 0x220664: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x220664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_220668:
    // 0x220668: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x220668u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_22066c:
    // 0x22066c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x22066cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_220670:
    // 0x220670: 0x8e0503b0  lw          $a1, 0x3B0($s0)
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_220674:
    // 0x220674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x220674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_220678:
    // 0x220678: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x220678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_22067c:
    // 0x22067c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x22067cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_220680:
    // 0x220680: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x220680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220684:
    // 0x220684: 0xc0441ac  jal         func_1106B0
label_220688:
    if (ctx->pc == 0x220688u) {
        ctx->pc = 0x220688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220684u;
        // 0x220688: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22068Cu;
        goto label_22068c;
    }
    ctx->pc = 0x220684u;
    SET_GPR_U32(ctx, 31, 0x22068Cu);
    ctx->pc = 0x220688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220684u;
    // 0x220688: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1106B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1106B0u, 0x220684u, 0x22068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22068Cu;
label_22068c:
    // 0x22068c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22068cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220690:
    // 0x220690: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_220694:
    if (ctx->pc == 0x220694u) {
        ctx->pc = 0x220698u;
        goto label_220698;
    }
    ctx->pc = 0x220690u;
    {
        const bool branch_taken_0x220690 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x220690) {
            ctx->pc = 0x2206A4u;
            goto label_2206a4;
        }
    }
    ctx->pc = 0x220698u;
label_220698:
    // 0x220698: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x220698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_22069c:
    // 0x22069c: 0x10000040  b           . + 4 + (0x40 << 2)
label_2206a0:
    if (ctx->pc == 0x2206A0u) {
        ctx->pc = 0x2206A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22069Cu;
        // 0x2206a0: 0x8c628690  lw          $v0, -0x7970($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206A4u;
        goto label_2206a4;
    }
    ctx->pc = 0x22069Cu;
    {
        const bool branch_taken_0x22069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22069Cu;
        // 0x2206a0: 0x8c628690  lw          $v0, -0x7970($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22069c) {
            ctx->pc = 0x2207A0u;
            goto label_2207a0;
        }
    }
    ctx->pc = 0x2206A4u;
label_2206a4:
    // 0x2206a4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2206a8:
    if (ctx->pc == 0x2206A8u) {
        ctx->pc = 0x2206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206A4u;
        // 0x2206a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206ACu;
        goto label_2206ac;
    }
    ctx->pc = 0x2206A4u;
    {
        const bool branch_taken_0x2206a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206A4u;
        // 0x2206a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206a4) {
            ctx->pc = 0x2206B4u;
            goto label_2206b4;
        }
    }
    ctx->pc = 0x2206ACu;
label_2206ac:
    // 0x2206ac: 0xc087b0e  jal         func_21EC38
label_2206b0:
    if (ctx->pc == 0x2206B0u) {
        ctx->pc = 0x2206B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206ACu;
        // 0x2206b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206B4u;
        goto label_2206b4;
    }
    ctx->pc = 0x2206ACu;
    SET_GPR_U32(ctx, 31, 0x2206B4u);
    ctx->pc = 0x2206B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206ACu;
    // 0x2206b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2206ACu, 0x2206B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206B4u;
label_2206b4:
    // 0x2206b4: 0xa200016c  sb          $zero, 0x16C($s0)
    ctx->pc = 0x2206b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 0));
label_2206b8:
    // 0x2206b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2206b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2206bc:
    // 0x2206bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2206bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2206c0:
    // 0x2206c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2206c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2206c4:
    // 0x2206c4: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x2206c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_2206c8:
    // 0x2206c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2206c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2206cc:
    // 0x2206cc: 0xc0441b4  jal         func_1106D0
label_2206d0:
    if (ctx->pc == 0x2206D0u) {
        ctx->pc = 0x2206D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206CCu;
        // 0x2206d0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206D4u;
        goto label_2206d4;
    }
    ctx->pc = 0x2206CCu;
    SET_GPR_U32(ctx, 31, 0x2206D4u);
    ctx->pc = 0x2206D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206CCu;
    // 0x2206d0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1106D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1106D0u, 0x2206CCu, 0x2206D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206D4u;
label_2206d4:
    // 0x2206d4: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
label_2206d8:
    if (ctx->pc == 0x2206D8u) {
        ctx->pc = 0x2206D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206D4u;
        // 0x2206d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206DCu;
        goto label_2206dc;
    }
    ctx->pc = 0x2206D4u;
    {
        const bool branch_taken_0x2206d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206D4u;
        // 0x2206d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206d4) {
            ctx->pc = 0x220710u;
            goto label_220710;
        }
    }
    ctx->pc = 0x2206DCu;
label_2206dc:
    // 0x2206dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2206dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2206e0:
    // 0x2206e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2206e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2206e4:
    // 0x2206e4: 0x40f809  jalr        $v0
label_2206e8:
    if (ctx->pc == 0x2206E8u) {
        ctx->pc = 0x2206E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206E4u;
        // 0x2206e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206ECu;
        goto label_2206ec;
    }
    ctx->pc = 0x2206E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2206ECu);
        ctx->pc = 0x2206E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206E4u;
        // 0x2206e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206E4u, 0x2206ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2206ECu;
label_2206ec:
    // 0x2206ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2206ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2206f0:
    // 0x2206f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2206f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2206f4:
    // 0x2206f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2206f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2206f8:
    // 0x2206f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2206f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2206fc:
    // 0x2206fc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2206fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_220700:
    // 0x220700: 0xc087900  jal         func_21E400
label_220704:
    if (ctx->pc == 0x220704u) {
        ctx->pc = 0x220704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220700u;
        // 0x220704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220708u;
        goto label_220708;
    }
    ctx->pc = 0x220700u;
    SET_GPR_U32(ctx, 31, 0x220708u);
    ctx->pc = 0x220704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220700u;
    // 0x220704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x220700u, 0x220708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220708u;
label_220708:
    // 0x220708: 0x1000000d  b           . + 4 + (0xD << 2)
label_22070c:
    if (ctx->pc == 0x22070Cu) {
        ctx->pc = 0x22070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220708u;
        // 0x22070c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220710u;
        goto label_220710;
    }
    ctx->pc = 0x220708u;
    {
        const bool branch_taken_0x220708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220708u;
        // 0x22070c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220708) {
            ctx->pc = 0x220740u;
            goto label_220740;
        }
    }
    ctx->pc = 0x220710u;
label_220710:
    // 0x220710: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x220710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_220714:
    // 0x220714: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x220714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_220718:
    // 0x220718: 0x40f809  jalr        $v0
label_22071c:
    if (ctx->pc == 0x22071Cu) {
        ctx->pc = 0x22071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220718u;
        // 0x22071c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220720u;
        goto label_220720;
    }
    ctx->pc = 0x220718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220720u);
        ctx->pc = 0x22071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220718u;
        // 0x22071c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220718u, 0x220720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220720u;
label_220720:
    // 0x220720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x220720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220724:
    // 0x220724: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x220724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_220728:
    // 0x220728: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x220728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22072c:
    // 0x22072c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22072cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220730:
    // 0x220730: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x220730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_220734:
    // 0x220734: 0xc0879a6  jal         func_21E698
label_220738:
    if (ctx->pc == 0x220738u) {
        ctx->pc = 0x220738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220734u;
        // 0x220738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22073Cu;
        goto label_22073c;
    }
    ctx->pc = 0x220734u;
    SET_GPR_U32(ctx, 31, 0x22073Cu);
    ctx->pc = 0x220738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220734u;
    // 0x220738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x220734u, 0x22073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22073Cu;
label_22073c:
    // 0x22073c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22073cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_220740:
    // 0x220740: 0x27b20014  addiu       $s2, $sp, 0x14
    ctx->pc = 0x220740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_220744:
    // 0x220744: 0xc043d5e  jal         func_10F578
label_220748:
    if (ctx->pc == 0x220748u) {
        ctx->pc = 0x220748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220744u;
        // 0x220748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22074Cu;
        goto label_22074c;
    }
    ctx->pc = 0x220744u;
    SET_GPR_U32(ctx, 31, 0x22074Cu);
    ctx->pc = 0x220748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220744u;
    // 0x220748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x220744u, 0x22074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22074Cu;
label_22074c:
    // 0x22074c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_220750:
    if (ctx->pc == 0x220750u) {
        ctx->pc = 0x220750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22074Cu;
        // 0x220750: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220754u;
        goto label_220754;
    }
    ctx->pc = 0x22074Cu;
    {
        const bool branch_taken_0x22074c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22074Cu;
        // 0x220750: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22074c) {
            ctx->pc = 0x2207A0u;
            goto label_2207a0;
        }
    }
    ctx->pc = 0x220754u;
label_220754:
    // 0x220754: 0xc0e4060  jal         func_390180
label_220758:
    if (ctx->pc == 0x220758u) {
        ctx->pc = 0x220758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220754u;
        // 0x220758: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22075Cu;
        goto label_22075c;
    }
    ctx->pc = 0x220754u;
    SET_GPR_U32(ctx, 31, 0x22075Cu);
    ctx->pc = 0x220758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220754u;
    // 0x220758: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x220754u, 0x22075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22075Cu;
label_22075c:
    // 0x22075c: 0xc0e896e  jal         func_3A25B8
label_220760:
    if (ctx->pc == 0x220760u) {
        ctx->pc = 0x220760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22075Cu;
        // 0x220760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220764u;
        goto label_220764;
    }
    ctx->pc = 0x22075Cu;
    SET_GPR_U32(ctx, 31, 0x220764u);
    ctx->pc = 0x220760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22075Cu;
    // 0x220760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x22075Cu, 0x220764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220764u;
label_220764:
    // 0x220764: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x220764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_220768:
    // 0x220768: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_22076c:
    if (ctx->pc == 0x22076Cu) {
        ctx->pc = 0x22076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220768u;
        // 0x22076c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220770u;
        goto label_220770;
    }
    ctx->pc = 0x220768u;
    {
        const bool branch_taken_0x220768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220768u;
        // 0x22076c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220768) {
            ctx->pc = 0x2207A0u;
            goto label_2207a0;
        }
    }
    ctx->pc = 0x220770u;
label_220770:
    // 0x220770: 0xc043d5e  jal         func_10F578
label_220774:
    if (ctx->pc == 0x220774u) {
        ctx->pc = 0x220774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220770u;
        // 0x220774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220778u;
        goto label_220778;
    }
    ctx->pc = 0x220770u;
    SET_GPR_U32(ctx, 31, 0x220778u);
    ctx->pc = 0x220774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220770u;
    // 0x220774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x220770u, 0x220778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220778u;
label_220778:
    // 0x220778: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22077c:
    if (ctx->pc == 0x22077Cu) {
        ctx->pc = 0x22077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220778u;
        // 0x22077c: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220780u;
        goto label_220780;
    }
    ctx->pc = 0x220778u;
    {
        const bool branch_taken_0x220778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220778u;
        // 0x22077c: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220778) {
            ctx->pc = 0x22079Cu;
            goto label_22079c;
        }
    }
    ctx->pc = 0x220780u;
label_220780:
    // 0x220780: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x220780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_220784:
    // 0x220784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_220788:
    // 0x220788: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22078c:
    // 0x22078c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22078cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220790:
    // 0x220790: 0x24c601f4  addiu       $a2, $a2, 0x1F4
    ctx->pc = 0x220790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 500));
label_220794:
    // 0x220794: 0xc0a6800  jal         func_29A000
label_220798:
    if (ctx->pc == 0x220798u) {
        ctx->pc = 0x220798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220794u;
        // 0x220798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22079Cu;
        goto label_22079c;
    }
    ctx->pc = 0x220794u;
    SET_GPR_U32(ctx, 31, 0x22079Cu);
    ctx->pc = 0x220798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220794u;
    // 0x220798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x220794u, 0x22079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22079Cu;
label_22079c:
    // 0x22079c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x22079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2207a0:
    // 0x2207a0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2207a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2207a4:
    // 0x2207a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2207a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2207a8:
    // 0x2207a8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2207a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2207ac:
    // 0x2207ac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2207acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2207b0:
    // 0x2207b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2207b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2207b4:
    // 0x2207b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2207b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2207b8:
    // 0x2207b8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2207b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2207bc:
    // 0x2207bc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2207bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2207c0:
    // 0x2207c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2207c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2207c4:
    // 0x2207c4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2207c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2207c8:
    // 0x2207c8: 0x3e00008  jr          $ra
label_2207cc:
    if (ctx->pc == 0x2207CCu) {
        ctx->pc = 0x2207CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C8u;
        // 0x2207cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207D0u;
        goto label_fallthrough_0x2207c8;
    }
    ctx->pc = 0x2207C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2207CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C8u;
        // 0x2207cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2207C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2207c8:
    ctx->pc = 0x2207D0u;
}
