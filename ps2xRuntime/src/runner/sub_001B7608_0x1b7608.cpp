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

// Function: sub_001B7608
// Address: 0x1b7608 - 0x1b7890
void sub_001B7608_0x1b7608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7608_0x1b7608");
#endif

    switch (ctx->pc) {
        case 0x1b7608u: goto label_1b7608;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b7610u: goto label_1b7610;
        case 0x1b7614u: goto label_1b7614;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b761cu: goto label_1b761c;
        case 0x1b7620u: goto label_1b7620;
        case 0x1b7624u: goto label_1b7624;
        case 0x1b7628u: goto label_1b7628;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b7630u: goto label_1b7630;
        case 0x1b7634u: goto label_1b7634;
        case 0x1b7638u: goto label_1b7638;
        case 0x1b763cu: goto label_1b763c;
        case 0x1b7640u: goto label_1b7640;
        case 0x1b7644u: goto label_1b7644;
        case 0x1b7648u: goto label_1b7648;
        case 0x1b764cu: goto label_1b764c;
        case 0x1b7650u: goto label_1b7650;
        case 0x1b7654u: goto label_1b7654;
        case 0x1b7658u: goto label_1b7658;
        case 0x1b765cu: goto label_1b765c;
        case 0x1b7660u: goto label_1b7660;
        case 0x1b7664u: goto label_1b7664;
        case 0x1b7668u: goto label_1b7668;
        case 0x1b766cu: goto label_1b766c;
        case 0x1b7670u: goto label_1b7670;
        case 0x1b7674u: goto label_1b7674;
        case 0x1b7678u: goto label_1b7678;
        case 0x1b767cu: goto label_1b767c;
        case 0x1b7680u: goto label_1b7680;
        case 0x1b7684u: goto label_1b7684;
        case 0x1b7688u: goto label_1b7688;
        case 0x1b768cu: goto label_1b768c;
        case 0x1b7690u: goto label_1b7690;
        case 0x1b7694u: goto label_1b7694;
        case 0x1b7698u: goto label_1b7698;
        case 0x1b769cu: goto label_1b769c;
        case 0x1b76a0u: goto label_1b76a0;
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76a8u: goto label_1b76a8;
        case 0x1b76acu: goto label_1b76ac;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76b4u: goto label_1b76b4;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b76bcu: goto label_1b76bc;
        case 0x1b76c0u: goto label_1b76c0;
        case 0x1b76c4u: goto label_1b76c4;
        case 0x1b76c8u: goto label_1b76c8;
        case 0x1b76ccu: goto label_1b76cc;
        case 0x1b76d0u: goto label_1b76d0;
        case 0x1b76d4u: goto label_1b76d4;
        case 0x1b76d8u: goto label_1b76d8;
        case 0x1b76dcu: goto label_1b76dc;
        case 0x1b76e0u: goto label_1b76e0;
        case 0x1b76e4u: goto label_1b76e4;
        case 0x1b76e8u: goto label_1b76e8;
        case 0x1b76ecu: goto label_1b76ec;
        case 0x1b76f0u: goto label_1b76f0;
        case 0x1b76f4u: goto label_1b76f4;
        case 0x1b76f8u: goto label_1b76f8;
        case 0x1b76fcu: goto label_1b76fc;
        case 0x1b7700u: goto label_1b7700;
        case 0x1b7704u: goto label_1b7704;
        case 0x1b7708u: goto label_1b7708;
        case 0x1b770cu: goto label_1b770c;
        case 0x1b7710u: goto label_1b7710;
        case 0x1b7714u: goto label_1b7714;
        case 0x1b7718u: goto label_1b7718;
        case 0x1b771cu: goto label_1b771c;
        case 0x1b7720u: goto label_1b7720;
        case 0x1b7724u: goto label_1b7724;
        case 0x1b7728u: goto label_1b7728;
        case 0x1b772cu: goto label_1b772c;
        case 0x1b7730u: goto label_1b7730;
        case 0x1b7734u: goto label_1b7734;
        case 0x1b7738u: goto label_1b7738;
        case 0x1b773cu: goto label_1b773c;
        case 0x1b7740u: goto label_1b7740;
        case 0x1b7744u: goto label_1b7744;
        case 0x1b7748u: goto label_1b7748;
        case 0x1b774cu: goto label_1b774c;
        case 0x1b7750u: goto label_1b7750;
        case 0x1b7754u: goto label_1b7754;
        case 0x1b7758u: goto label_1b7758;
        case 0x1b775cu: goto label_1b775c;
        case 0x1b7760u: goto label_1b7760;
        case 0x1b7764u: goto label_1b7764;
        case 0x1b7768u: goto label_1b7768;
        case 0x1b776cu: goto label_1b776c;
        case 0x1b7770u: goto label_1b7770;
        case 0x1b7774u: goto label_1b7774;
        case 0x1b7778u: goto label_1b7778;
        case 0x1b777cu: goto label_1b777c;
        case 0x1b7780u: goto label_1b7780;
        case 0x1b7784u: goto label_1b7784;
        case 0x1b7788u: goto label_1b7788;
        case 0x1b778cu: goto label_1b778c;
        case 0x1b7790u: goto label_1b7790;
        case 0x1b7794u: goto label_1b7794;
        case 0x1b7798u: goto label_1b7798;
        case 0x1b779cu: goto label_1b779c;
        case 0x1b77a0u: goto label_1b77a0;
        case 0x1b77a4u: goto label_1b77a4;
        case 0x1b77a8u: goto label_1b77a8;
        case 0x1b77acu: goto label_1b77ac;
        case 0x1b77b0u: goto label_1b77b0;
        case 0x1b77b4u: goto label_1b77b4;
        case 0x1b77b8u: goto label_1b77b8;
        case 0x1b77bcu: goto label_1b77bc;
        case 0x1b77c0u: goto label_1b77c0;
        case 0x1b77c4u: goto label_1b77c4;
        case 0x1b77c8u: goto label_1b77c8;
        case 0x1b77ccu: goto label_1b77cc;
        case 0x1b77d0u: goto label_1b77d0;
        case 0x1b77d4u: goto label_1b77d4;
        case 0x1b77d8u: goto label_1b77d8;
        case 0x1b77dcu: goto label_1b77dc;
        case 0x1b77e0u: goto label_1b77e0;
        case 0x1b77e4u: goto label_1b77e4;
        case 0x1b77e8u: goto label_1b77e8;
        case 0x1b77ecu: goto label_1b77ec;
        case 0x1b77f0u: goto label_1b77f0;
        case 0x1b77f4u: goto label_1b77f4;
        case 0x1b77f8u: goto label_1b77f8;
        case 0x1b77fcu: goto label_1b77fc;
        case 0x1b7800u: goto label_1b7800;
        case 0x1b7804u: goto label_1b7804;
        case 0x1b7808u: goto label_1b7808;
        case 0x1b780cu: goto label_1b780c;
        case 0x1b7810u: goto label_1b7810;
        case 0x1b7814u: goto label_1b7814;
        case 0x1b7818u: goto label_1b7818;
        case 0x1b781cu: goto label_1b781c;
        case 0x1b7820u: goto label_1b7820;
        case 0x1b7824u: goto label_1b7824;
        case 0x1b7828u: goto label_1b7828;
        case 0x1b782cu: goto label_1b782c;
        case 0x1b7830u: goto label_1b7830;
        case 0x1b7834u: goto label_1b7834;
        case 0x1b7838u: goto label_1b7838;
        case 0x1b783cu: goto label_1b783c;
        case 0x1b7840u: goto label_1b7840;
        case 0x1b7844u: goto label_1b7844;
        case 0x1b7848u: goto label_1b7848;
        case 0x1b784cu: goto label_1b784c;
        case 0x1b7850u: goto label_1b7850;
        case 0x1b7854u: goto label_1b7854;
        case 0x1b7858u: goto label_1b7858;
        case 0x1b785cu: goto label_1b785c;
        case 0x1b7860u: goto label_1b7860;
        case 0x1b7864u: goto label_1b7864;
        case 0x1b7868u: goto label_1b7868;
        case 0x1b786cu: goto label_1b786c;
        case 0x1b7870u: goto label_1b7870;
        case 0x1b7874u: goto label_1b7874;
        case 0x1b7878u: goto label_1b7878;
        case 0x1b787cu: goto label_1b787c;
        case 0x1b7880u: goto label_1b7880;
        case 0x1b7884u: goto label_1b7884;
        case 0x1b7888u: goto label_1b7888;
        case 0x1b788cu: goto label_1b788c;
        default: break;
    }

    ctx->pc = 0x1b7608u;

label_1b7608:
    // 0x1b7608: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1b7608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_1b760c:
    // 0x1b760c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b7610:
    // 0x1b7610: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x1b7610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_1b7614:
    // 0x1b7614: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x1b7614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
label_1b7618:
    // 0x1b7618: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x1b7618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_1b761c:
    // 0x1b761c: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x1b761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_1b7620:
    // 0x1b7620: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b7620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7624:
    // 0x1b7624: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x1b7624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_1b7628:
    // 0x1b7628: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1b762c:
    // 0x1b762c: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x1b762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_1b7630:
    // 0x1b7630: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b7630u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7634:
    // 0x1b7634: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x1b7634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_1b7638:
    // 0x1b7638: 0x27b60130  addiu       $s6, $sp, 0x130
    ctx->pc = 0x1b7638u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1b763c:
    // 0x1b763c: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x1b763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_1b7640:
    // 0x1b7640: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1b7640u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7644:
    // 0x1b7644: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x1b7644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_1b7648:
    // 0x1b7648: 0x249e47d8  addiu       $fp, $a0, 0x47D8
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 18392));
label_1b764c:
    // 0x1b764c: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x1b764cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_1b7650:
    // 0x1b7650: 0x26720040  addiu       $s2, $s3, 0x40
    ctx->pc = 0x1b7650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1b7654:
    // 0x1b7654: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1b7654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_1b7658:
    // 0x1b7658: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b7658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b765c:
    // 0x1b765c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b765cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b7660:
    // 0x1b7660: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b7660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b7664:
    // 0x1b7664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7668:
    // 0x1b7668: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1b7668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1b766c:
    // 0x1b766c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1b766cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_1b7670:
    // 0x1b7670: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x1b7670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1b7674:
    // 0x1b7674: 0x12000061  beqz        $s0, . + 4 + (0x61 << 2)
label_1b7678:
    if (ctx->pc == 0x1B7678u) {
        ctx->pc = 0x1B7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7674u;
        // 0x1b7678: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B767Cu;
        goto label_1b767c;
    }
    ctx->pc = 0x1B7674u;
    {
        const bool branch_taken_0x1b7674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7674u;
        // 0x1b7678: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7674) {
            ctx->pc = 0x1B77FCu;
            goto label_1b77fc;
        }
    }
    ctx->pc = 0x1B767Cu;
label_1b767c:
    // 0x1b767c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b767cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b7680:
    // 0x1b7680: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1b7680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b7684:
    // 0x1b7684: 0xc1078dc  jal         func_41E370
label_1b7688:
    if (ctx->pc == 0x1B7688u) {
        ctx->pc = 0x1B7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7684u;
        // 0x1b7688: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B768Cu;
        goto label_1b768c;
    }
    ctx->pc = 0x1B7684u;
    SET_GPR_U32(ctx, 31, 0x1B768Cu);
    ctx->pc = 0x1B7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7684u;
    // 0x1b7688: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E370u, 0x1B7684u, 0x1B768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B768Cu;
label_1b768c:
    // 0x1b768c: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
label_1b7690:
    if (ctx->pc == 0x1B7690u) {
        ctx->pc = 0x1B7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B768Cu;
        // 0x1b7690: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7694u;
        goto label_1b7694;
    }
    ctx->pc = 0x1B768Cu;
    {
        const bool branch_taken_0x1b768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b768c) {
            ctx->pc = 0x1B7690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B768Cu;
            // 0x1b7690: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7800u;
            goto label_1b7800;
        }
    }
    ctx->pc = 0x1B7694u;
label_1b7694:
    // 0x1b7694: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_1b7698:
    // 0x1b7698: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x1b7698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1b769c:
    // 0x1b769c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1b76a0:
    if (ctx->pc == 0x1B76A0u) {
        ctx->pc = 0x1B76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B769Cu;
        // 0x1b76a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76A4u;
        goto label_1b76a4;
    }
    ctx->pc = 0x1B769Cu;
    {
        const bool branch_taken_0x1b769c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B769Cu;
        // 0x1b76a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b769c) {
            ctx->pc = 0x1B76B0u;
            goto label_1b76b0;
        }
    }
    ctx->pc = 0x1B76A4u;
label_1b76a4:
    // 0x1b76a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1b76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1b76a8:
    // 0x1b76a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b76ac:
    // 0x1b76ac: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1b76acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1b76b0:
    // 0x1b76b0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1b76b4:
    if (ctx->pc == 0x1B76B4u) {
        ctx->pc = 0x1B76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76B0u;
        // 0x1b76b4: 0x2931821  addu        $v1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76B8u;
        goto label_1b76b8;
    }
    ctx->pc = 0x1B76B0u;
    {
        const bool branch_taken_0x1b76b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76B0u;
        // 0x1b76b4: 0x2931821  addu        $v1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76b0) {
            ctx->pc = 0x1B7750u;
            goto label_1b7750;
        }
    }
    ctx->pc = 0x1B76B8u;
label_1b76b8:
    // 0x1b76b8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1b76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_1b76bc:
    // 0x1b76bc: 0x14500024  bne         $v0, $s0, . + 4 + (0x24 << 2)
label_1b76c0:
    if (ctx->pc == 0x1B76C0u) {
        ctx->pc = 0x1B76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76BCu;
        // 0x1b76c0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76C4u;
        goto label_1b76c4;
    }
    ctx->pc = 0x1B76BCu;
    {
        const bool branch_taken_0x1b76bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76BCu;
        // 0x1b76c0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76bc) {
            ctx->pc = 0x1B7750u;
            goto label_1b7750;
        }
    }
    ctx->pc = 0x1B76C4u;
label_1b76c4:
    // 0x1b76c4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1b76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1b76c8:
    // 0x1b76c8: 0x26900040  addiu       $s0, $s4, 0x40
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_1b76cc:
    // 0x1b76cc: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1b76ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1b76d0:
    // 0x1b76d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b76d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b76d4:
    // 0x1b76d4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b76d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b76d8:
    // 0x1b76d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b76dc:
    // 0x1b76dc: 0x40f809  jalr        $v0
label_1b76e0:
    if (ctx->pc == 0x1B76E0u) {
        ctx->pc = 0x1B76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76DCu;
        // 0x1b76e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76E4u;
        goto label_1b76e4;
    }
    ctx->pc = 0x1B76DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B76E4u);
        ctx->pc = 0x1B76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76DCu;
        // 0x1b76e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B76DCu, 0x1B76E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B76E4u;
label_1b76e4:
    // 0x1b76e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b76e8:
    // 0x1b76e8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b76e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b76ec:
    // 0x1b76ec: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x1b76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
label_1b76f0:
    // 0x1b76f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b76f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b76f4:
    // 0x1b76f4: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1b76f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b76f8:
    // 0x1b76f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b76f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b76fc:
    // 0x1b76fc: 0xc068848  jal         func_1A2120
label_1b7700:
    if (ctx->pc == 0x1B7700u) {
        ctx->pc = 0x1B7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76FCu;
        // 0x1b7700: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7704u;
        goto label_1b7704;
    }
    ctx->pc = 0x1B76FCu;
    SET_GPR_U32(ctx, 31, 0x1B7704u);
    ctx->pc = 0x1B7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76FCu;
    // 0x1b7700: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B76FCu, 0x1B7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7704u;
label_1b7704:
    // 0x1b7704: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1b7704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1b7708:
    // 0x1b7708: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b7708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b770c:
    // 0x1b770c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b770cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7710:
    // 0x1b7710: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b7710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1b7714:
    // 0x1b7714: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b7714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b7718:
    // 0x1b7718: 0x60f809  jalr        $v1
label_1b771c:
    if (ctx->pc == 0x1B771Cu) {
        ctx->pc = 0x1B771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7718u;
        // 0x1b771c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7720u;
        goto label_1b7720;
    }
    ctx->pc = 0x1B7718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7720u);
        ctx->pc = 0x1B771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7718u;
        // 0x1b771c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7718u, 0x1B7720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7720u;
label_1b7720:
    // 0x1b7720: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1b7724:
    // 0x1b7724: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b7724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b7728:
    // 0x1b7728: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b7728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b772c:
    // 0x1b772c: 0x60f809  jalr        $v1
label_1b7730:
    if (ctx->pc == 0x1B7730u) {
        ctx->pc = 0x1B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B772Cu;
        // 0x1b7730: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7734u;
        goto label_1b7734;
    }
    ctx->pc = 0x1B772Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7734u);
        ctx->pc = 0x1B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B772Cu;
        // 0x1b7730: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B772Cu, 0x1B7734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7734u;
label_1b7734:
    // 0x1b7734: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b7734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b7738:
    // 0x1b7738: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1b7738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b773c:
    // 0x1b773c: 0x2484d640  addiu       $a0, $a0, -0x29C0
    ctx->pc = 0x1b773cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956608));
label_1b7740:
    // 0x1b7740: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1b7740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7744:
    // 0x1b7744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b7748:
    // 0x1b7748: 0x10000029  b           . + 4 + (0x29 << 2)
label_1b774c:
    if (ctx->pc == 0x1B774Cu) {
        ctx->pc = 0x1B774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7748u;
        // 0x1b774c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7750u;
        goto label_1b7750;
    }
    ctx->pc = 0x1B7748u;
    {
        const bool branch_taken_0x1b7748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7748u;
        // 0x1b774c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7748) {
            ctx->pc = 0x1B77F0u;
            goto label_1b77f0;
        }
    }
    ctx->pc = 0x1B7750u;
label_1b7750:
    // 0x1b7750: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b7750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b7754:
    // 0x1b7754: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1b7754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1b7758:
    // 0x1b7758: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1b775c:
    // 0x1b775c: 0x60f809  jalr        $v1
label_1b7760:
    if (ctx->pc == 0x1B7760u) {
        ctx->pc = 0x1B7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B775Cu;
        // 0x1b7760: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7764u;
        goto label_1b7764;
    }
    ctx->pc = 0x1B775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7764u);
        ctx->pc = 0x1B7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B775Cu;
        // 0x1b7760: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B775Cu, 0x1B7764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7764u;
label_1b7764:
    // 0x1b7764: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x1b7764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1b7768:
    // 0x1b7768: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b7768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b776c:
    // 0x1b776c: 0xa3a20130  sb          $v0, 0x130($sp)
    ctx->pc = 0x1b776cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 2));
label_1b7770:
    // 0x1b7770: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7774:
    // 0x1b7774: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x1b7774u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b7778:
    // 0x1b7778: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1b777c:
    // 0x1b777c: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x1b777cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b7780:
    // 0x1b7780: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7784:
    // 0x1b7784: 0xa2c40003  sb          $a0, 0x3($s6)
    ctx->pc = 0x1b7784u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b7788:
    // 0x1b7788: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b778c:
    // 0x1b778c: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x1b778cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1b7790:
    // 0x1b7790: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7794:
    // 0x1b7794: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b7794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b7798:
    // 0x1b7798: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b7798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b779c:
    // 0x1b779c: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x1b779cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1b77a0:
    // 0x1b77a0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1b77a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1b77a4:
    // 0x1b77a4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1b77a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b77a8:
    // 0x1b77a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1b77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1b77ac:
    // 0x1b77ac: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x1b77acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
label_1b77b0:
    // 0x1b77b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b77b4:
    // 0x1b77b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b77b8:
    // 0x1b77b8: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x1b77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
label_1b77bc:
    // 0x1b77bc: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1b77bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1b77c0:
    // 0x1b77c0: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1b77c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1b77c4:
    // 0x1b77c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b77c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b77c8:
    // 0x1b77c8: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1b77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b77cc:
    // 0x1b77cc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1b77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b77d0:
    // 0x1b77d0: 0x40f809  jalr        $v0
label_1b77d4:
    if (ctx->pc == 0x1B77D4u) {
        ctx->pc = 0x1B77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77D0u;
        // 0x1b77d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B77D8u;
        goto label_1b77d8;
    }
    ctx->pc = 0x1B77D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B77D8u);
        ctx->pc = 0x1B77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77D0u;
        // 0x1b77d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B77D0u, 0x1B77D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B77D8u;
label_1b77d8:
    // 0x1b77d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b77dc:
    // 0x1b77dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b77e0:
    // 0x1b77e0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b77e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b77e4:
    // 0x1b77e4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b77e8:
    // 0x1b77e8: 0x40f809  jalr        $v0
label_1b77ec:
    if (ctx->pc == 0x1B77ECu) {
        ctx->pc = 0x1B77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77E8u;
        // 0x1b77ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B77F0u;
        goto label_1b77f0;
    }
    ctx->pc = 0x1B77E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B77F0u);
        ctx->pc = 0x1B77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77E8u;
        // 0x1b77ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B77E8u, 0x1B77F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B77F0u;
label_1b77f0:
    // 0x1b77f0: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1b77f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1b77f4:
    // 0x1b77f4: 0x26940100  addiu       $s4, $s4, 0x100
    ctx->pc = 0x1b77f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_1b77f8:
    // 0x1b77f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b77f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b77fc:
    // 0x1b77fc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1b77fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1b7800:
    // 0x1b7800: 0x2ee20017  sltiu       $v0, $s7, 0x17
    ctx->pc = 0x1b7800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_1b7804:
    // 0x1b7804: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
label_1b7808:
    if (ctx->pc == 0x1B7808u) {
        ctx->pc = 0x1B7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7804u;
        // 0x1b7808: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B780Cu;
        goto label_1b780c;
    }
    ctx->pc = 0x1B7804u;
    {
        const bool branch_taken_0x1b7804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7804u;
        // 0x1b7808: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7804) {
            ctx->pc = 0x1B7670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7670;
        }
    }
    ctx->pc = 0x1B780Cu;
label_1b780c:
    // 0x1b780c: 0x2ea20017  sltiu       $v0, $s5, 0x17
    ctx->pc = 0x1b780cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_1b7810:
    // 0x1b7810: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1b7814:
    if (ctx->pc == 0x1B7814u) {
        ctx->pc = 0x1B7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7810u;
        // 0x1b7814: 0x151200  sll         $v0, $s5, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7818u;
        goto label_1b7818;
    }
    ctx->pc = 0x1B7810u;
    {
        const bool branch_taken_0x1b7810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7810u;
        // 0x1b7814: 0x151200  sll         $v0, $s5, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7810) {
            ctx->pc = 0x1B785Cu;
            goto label_1b785c;
        }
    }
    ctx->pc = 0x1B7818u;
label_1b7818:
    // 0x1b7818: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1b7818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1b781c:
    // 0x1b781c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1b781cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1b7820:
    // 0x1b7820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7824:
    // 0x1b7824: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b7824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b7828:
    // 0x1b7828: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1b7828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1b782c:
    // 0x1b782c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1b782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1b7830:
    // 0x1b7830: 0x60f809  jalr        $v1
label_1b7834:
    if (ctx->pc == 0x1B7834u) {
        ctx->pc = 0x1B7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7830u;
        // 0x1b7834: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7838u;
        goto label_1b7838;
    }
    ctx->pc = 0x1B7830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7838u);
        ctx->pc = 0x1B7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7830u;
        // 0x1b7834: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7830u, 0x1B7838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7838u;
label_1b7838:
    // 0x1b7838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b783c:
    // 0x1b783c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b783cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7840:
    // 0x1b7840: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1b7840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1b7844:
    // 0x1b7844: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1b7844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1b7848:
    // 0x1b7848: 0x60f809  jalr        $v1
label_1b784c:
    if (ctx->pc == 0x1B784Cu) {
        ctx->pc = 0x1B784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7848u;
        // 0x1b784c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7850u;
        goto label_1b7850;
    }
    ctx->pc = 0x1B7848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7850u);
        ctx->pc = 0x1B784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7848u;
        // 0x1b784c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7848u, 0x1B7850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7850u;
label_1b7850:
    // 0x1b7850: 0x2ea20017  sltiu       $v0, $s5, 0x17
    ctx->pc = 0x1b7850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_1b7854:
    // 0x1b7854: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1b7858:
    if (ctx->pc == 0x1B7858u) {
        ctx->pc = 0x1B7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7854u;
        // 0x1b7858: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B785Cu;
        goto label_1b785c;
    }
    ctx->pc = 0x1B7854u;
    {
        const bool branch_taken_0x1b7854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7854u;
        // 0x1b7858: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7854) {
            ctx->pc = 0x1B7820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7820;
        }
    }
    ctx->pc = 0x1B785Cu;
label_1b785c:
    // 0x1b785c: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x1b785cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1b7860:
    // 0x1b7860: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x1b7860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1b7864:
    // 0x1b7864: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x1b7864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1b7868:
    // 0x1b7868: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x1b7868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1b786c:
    // 0x1b786c: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x1b786cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1b7870:
    // 0x1b7870: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x1b7870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1b7874:
    // 0x1b7874: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x1b7874u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1b7878:
    // 0x1b7878: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x1b7878u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1b787c:
    // 0x1b787c: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x1b787cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1b7880:
    // 0x1b7880: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1b7880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1b7884:
    // 0x1b7884: 0x3e00008  jr          $ra
label_1b7888:
    if (ctx->pc == 0x1B7888u) {
        ctx->pc = 0x1B7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7884u;
        // 0x1b7888: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B788Cu;
        goto label_1b788c;
    }
    ctx->pc = 0x1B7884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7884u;
        // 0x1b7888: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B788Cu;
label_1b788c:
    // 0x1b788c: 0x0  nop
    ctx->pc = 0x1b788cu;
    // NOP
    ctx->pc = 0x1b7890u;
}
