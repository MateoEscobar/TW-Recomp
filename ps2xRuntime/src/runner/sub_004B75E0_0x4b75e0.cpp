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

// Function: sub_004B75E0
// Address: 0x4b75e0 - 0x4b7910
void sub_004B75E0_0x4b75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B75E0_0x4b75e0");
#endif

    switch (ctx->pc) {
        case 0x4b75e0u: goto label_4b75e0;
        case 0x4b75e4u: goto label_4b75e4;
        case 0x4b75e8u: goto label_4b75e8;
        case 0x4b75ecu: goto label_4b75ec;
        case 0x4b75f0u: goto label_4b75f0;
        case 0x4b75f4u: goto label_4b75f4;
        case 0x4b75f8u: goto label_4b75f8;
        case 0x4b75fcu: goto label_4b75fc;
        case 0x4b7600u: goto label_4b7600;
        case 0x4b7604u: goto label_4b7604;
        case 0x4b7608u: goto label_4b7608;
        case 0x4b760cu: goto label_4b760c;
        case 0x4b7610u: goto label_4b7610;
        case 0x4b7614u: goto label_4b7614;
        case 0x4b7618u: goto label_4b7618;
        case 0x4b761cu: goto label_4b761c;
        case 0x4b7620u: goto label_4b7620;
        case 0x4b7624u: goto label_4b7624;
        case 0x4b7628u: goto label_4b7628;
        case 0x4b762cu: goto label_4b762c;
        case 0x4b7630u: goto label_4b7630;
        case 0x4b7634u: goto label_4b7634;
        case 0x4b7638u: goto label_4b7638;
        case 0x4b763cu: goto label_4b763c;
        case 0x4b7640u: goto label_4b7640;
        case 0x4b7644u: goto label_4b7644;
        case 0x4b7648u: goto label_4b7648;
        case 0x4b764cu: goto label_4b764c;
        case 0x4b7650u: goto label_4b7650;
        case 0x4b7654u: goto label_4b7654;
        case 0x4b7658u: goto label_4b7658;
        case 0x4b765cu: goto label_4b765c;
        case 0x4b7660u: goto label_4b7660;
        case 0x4b7664u: goto label_4b7664;
        case 0x4b7668u: goto label_4b7668;
        case 0x4b766cu: goto label_4b766c;
        case 0x4b7670u: goto label_4b7670;
        case 0x4b7674u: goto label_4b7674;
        case 0x4b7678u: goto label_4b7678;
        case 0x4b767cu: goto label_4b767c;
        case 0x4b7680u: goto label_4b7680;
        case 0x4b7684u: goto label_4b7684;
        case 0x4b7688u: goto label_4b7688;
        case 0x4b768cu: goto label_4b768c;
        case 0x4b7690u: goto label_4b7690;
        case 0x4b7694u: goto label_4b7694;
        case 0x4b7698u: goto label_4b7698;
        case 0x4b769cu: goto label_4b769c;
        case 0x4b76a0u: goto label_4b76a0;
        case 0x4b76a4u: goto label_4b76a4;
        case 0x4b76a8u: goto label_4b76a8;
        case 0x4b76acu: goto label_4b76ac;
        case 0x4b76b0u: goto label_4b76b0;
        case 0x4b76b4u: goto label_4b76b4;
        case 0x4b76b8u: goto label_4b76b8;
        case 0x4b76bcu: goto label_4b76bc;
        case 0x4b76c0u: goto label_4b76c0;
        case 0x4b76c4u: goto label_4b76c4;
        case 0x4b76c8u: goto label_4b76c8;
        case 0x4b76ccu: goto label_4b76cc;
        case 0x4b76d0u: goto label_4b76d0;
        case 0x4b76d4u: goto label_4b76d4;
        case 0x4b76d8u: goto label_4b76d8;
        case 0x4b76dcu: goto label_4b76dc;
        case 0x4b76e0u: goto label_4b76e0;
        case 0x4b76e4u: goto label_4b76e4;
        case 0x4b76e8u: goto label_4b76e8;
        case 0x4b76ecu: goto label_4b76ec;
        case 0x4b76f0u: goto label_4b76f0;
        case 0x4b76f4u: goto label_4b76f4;
        case 0x4b76f8u: goto label_4b76f8;
        case 0x4b76fcu: goto label_4b76fc;
        case 0x4b7700u: goto label_4b7700;
        case 0x4b7704u: goto label_4b7704;
        case 0x4b7708u: goto label_4b7708;
        case 0x4b770cu: goto label_4b770c;
        case 0x4b7710u: goto label_4b7710;
        case 0x4b7714u: goto label_4b7714;
        case 0x4b7718u: goto label_4b7718;
        case 0x4b771cu: goto label_4b771c;
        case 0x4b7720u: goto label_4b7720;
        case 0x4b7724u: goto label_4b7724;
        case 0x4b7728u: goto label_4b7728;
        case 0x4b772cu: goto label_4b772c;
        case 0x4b7730u: goto label_4b7730;
        case 0x4b7734u: goto label_4b7734;
        case 0x4b7738u: goto label_4b7738;
        case 0x4b773cu: goto label_4b773c;
        case 0x4b7740u: goto label_4b7740;
        case 0x4b7744u: goto label_4b7744;
        case 0x4b7748u: goto label_4b7748;
        case 0x4b774cu: goto label_4b774c;
        case 0x4b7750u: goto label_4b7750;
        case 0x4b7754u: goto label_4b7754;
        case 0x4b7758u: goto label_4b7758;
        case 0x4b775cu: goto label_4b775c;
        case 0x4b7760u: goto label_4b7760;
        case 0x4b7764u: goto label_4b7764;
        case 0x4b7768u: goto label_4b7768;
        case 0x4b776cu: goto label_4b776c;
        case 0x4b7770u: goto label_4b7770;
        case 0x4b7774u: goto label_4b7774;
        case 0x4b7778u: goto label_4b7778;
        case 0x4b777cu: goto label_4b777c;
        case 0x4b7780u: goto label_4b7780;
        case 0x4b7784u: goto label_4b7784;
        case 0x4b7788u: goto label_4b7788;
        case 0x4b778cu: goto label_4b778c;
        case 0x4b7790u: goto label_4b7790;
        case 0x4b7794u: goto label_4b7794;
        case 0x4b7798u: goto label_4b7798;
        case 0x4b779cu: goto label_4b779c;
        case 0x4b77a0u: goto label_4b77a0;
        case 0x4b77a4u: goto label_4b77a4;
        case 0x4b77a8u: goto label_4b77a8;
        case 0x4b77acu: goto label_4b77ac;
        case 0x4b77b0u: goto label_4b77b0;
        case 0x4b77b4u: goto label_4b77b4;
        case 0x4b77b8u: goto label_4b77b8;
        case 0x4b77bcu: goto label_4b77bc;
        case 0x4b77c0u: goto label_4b77c0;
        case 0x4b77c4u: goto label_4b77c4;
        case 0x4b77c8u: goto label_4b77c8;
        case 0x4b77ccu: goto label_4b77cc;
        case 0x4b77d0u: goto label_4b77d0;
        case 0x4b77d4u: goto label_4b77d4;
        case 0x4b77d8u: goto label_4b77d8;
        case 0x4b77dcu: goto label_4b77dc;
        case 0x4b77e0u: goto label_4b77e0;
        case 0x4b77e4u: goto label_4b77e4;
        case 0x4b77e8u: goto label_4b77e8;
        case 0x4b77ecu: goto label_4b77ec;
        case 0x4b77f0u: goto label_4b77f0;
        case 0x4b77f4u: goto label_4b77f4;
        case 0x4b77f8u: goto label_4b77f8;
        case 0x4b77fcu: goto label_4b77fc;
        case 0x4b7800u: goto label_4b7800;
        case 0x4b7804u: goto label_4b7804;
        case 0x4b7808u: goto label_4b7808;
        case 0x4b780cu: goto label_4b780c;
        case 0x4b7810u: goto label_4b7810;
        case 0x4b7814u: goto label_4b7814;
        case 0x4b7818u: goto label_4b7818;
        case 0x4b781cu: goto label_4b781c;
        case 0x4b7820u: goto label_4b7820;
        case 0x4b7824u: goto label_4b7824;
        case 0x4b7828u: goto label_4b7828;
        case 0x4b782cu: goto label_4b782c;
        case 0x4b7830u: goto label_4b7830;
        case 0x4b7834u: goto label_4b7834;
        case 0x4b7838u: goto label_4b7838;
        case 0x4b783cu: goto label_4b783c;
        case 0x4b7840u: goto label_4b7840;
        case 0x4b7844u: goto label_4b7844;
        case 0x4b7848u: goto label_4b7848;
        case 0x4b784cu: goto label_4b784c;
        case 0x4b7850u: goto label_4b7850;
        case 0x4b7854u: goto label_4b7854;
        case 0x4b7858u: goto label_4b7858;
        case 0x4b785cu: goto label_4b785c;
        case 0x4b7860u: goto label_4b7860;
        case 0x4b7864u: goto label_4b7864;
        case 0x4b7868u: goto label_4b7868;
        case 0x4b786cu: goto label_4b786c;
        case 0x4b7870u: goto label_4b7870;
        case 0x4b7874u: goto label_4b7874;
        case 0x4b7878u: goto label_4b7878;
        case 0x4b787cu: goto label_4b787c;
        case 0x4b7880u: goto label_4b7880;
        case 0x4b7884u: goto label_4b7884;
        case 0x4b7888u: goto label_4b7888;
        case 0x4b788cu: goto label_4b788c;
        case 0x4b7890u: goto label_4b7890;
        case 0x4b7894u: goto label_4b7894;
        case 0x4b7898u: goto label_4b7898;
        case 0x4b789cu: goto label_4b789c;
        case 0x4b78a0u: goto label_4b78a0;
        case 0x4b78a4u: goto label_4b78a4;
        case 0x4b78a8u: goto label_4b78a8;
        case 0x4b78acu: goto label_4b78ac;
        case 0x4b78b0u: goto label_4b78b0;
        case 0x4b78b4u: goto label_4b78b4;
        case 0x4b78b8u: goto label_4b78b8;
        case 0x4b78bcu: goto label_4b78bc;
        case 0x4b78c0u: goto label_4b78c0;
        case 0x4b78c4u: goto label_4b78c4;
        case 0x4b78c8u: goto label_4b78c8;
        case 0x4b78ccu: goto label_4b78cc;
        case 0x4b78d0u: goto label_4b78d0;
        case 0x4b78d4u: goto label_4b78d4;
        case 0x4b78d8u: goto label_4b78d8;
        case 0x4b78dcu: goto label_4b78dc;
        case 0x4b78e0u: goto label_4b78e0;
        case 0x4b78e4u: goto label_4b78e4;
        case 0x4b78e8u: goto label_4b78e8;
        case 0x4b78ecu: goto label_4b78ec;
        case 0x4b78f0u: goto label_4b78f0;
        case 0x4b78f4u: goto label_4b78f4;
        case 0x4b78f8u: goto label_4b78f8;
        case 0x4b78fcu: goto label_4b78fc;
        case 0x4b7900u: goto label_4b7900;
        case 0x4b7904u: goto label_4b7904;
        case 0x4b7908u: goto label_4b7908;
        case 0x4b790cu: goto label_4b790c;
        default: break;
    }

    ctx->pc = 0x4b75e0u;

label_4b75e0:
    // 0x4b75e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4b75e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4b75e4:
    // 0x4b75e4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x4b75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_4b75e8:
    // 0x4b75e8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x4b75e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_4b75ec:
    // 0x4b75ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4b75ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b75f0:
    // 0x4b75f0: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x4b75f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_4b75f4:
    // 0x4b75f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b75f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b75f8:
    // 0x4b75f8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x4b75f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_4b75fc:
    // 0x4b75fc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x4b75fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_4b7600:
    // 0x4b7600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b7600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b7604:
    // 0x4b7604: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x4b7604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_4b7608:
    // 0x4b7608: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4b7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4b760c:
    // 0x4b760c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b7610:
    // 0x4b7610: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_4b7614:
    if (ctx->pc == 0x4B7614u) {
        ctx->pc = 0x4B7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7610u;
        // 0x4b7614: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7618u;
        goto label_4b7618;
    }
    ctx->pc = 0x4B7610u;
    {
        const bool branch_taken_0x4b7610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7610u;
        // 0x4b7614: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7610) {
            ctx->pc = 0x4B762Cu;
            goto label_4b762c;
        }
    }
    ctx->pc = 0x4B7618u;
label_4b7618:
    // 0x4b7618: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4b7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b761c:
    // 0x4b761c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4b761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b7620:
    // 0x4b7620: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x4b7620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_4b7624:
    // 0x4b7624: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b7628:
    if (ctx->pc == 0x4B7628u) {
        ctx->pc = 0x4B7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7624u;
        // 0x4b7628: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B762Cu;
        goto label_4b762c;
    }
    ctx->pc = 0x4B7624u;
    {
        const bool branch_taken_0x4b7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7624u;
        // 0x4b7628: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7624) {
            ctx->pc = 0x4B7634u;
            goto label_4b7634;
        }
    }
    ctx->pc = 0x4B762Cu;
label_4b762c:
    // 0x4b762c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4b762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4b7630:
    // 0x4b7630: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4b7630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b7634:
    // 0x4b7634: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_4b7638:
    if (ctx->pc == 0x4B7638u) {
        ctx->pc = 0x4B7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7634u;
        // 0x4b7638: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B763Cu;
        goto label_4b763c;
    }
    ctx->pc = 0x4B7634u;
    {
        const bool branch_taken_0x4b7634 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7634u;
        // 0x4b7638: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7634) {
            ctx->pc = 0x4B7644u;
            goto label_4b7644;
        }
    }
    ctx->pc = 0x4B763Cu;
label_4b763c:
    // 0x4b763c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4b763cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7640:
    // 0x4b7640: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b7640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7644:
    // 0x4b7644: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4b7648:
    if (ctx->pc == 0x4B7648u) {
        ctx->pc = 0x4B764Cu;
        goto label_4b764c;
    }
    ctx->pc = 0x4B7644u;
    {
        const bool branch_taken_0x4b7644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b7644) {
            ctx->pc = 0x4B765Cu;
            goto label_4b765c;
        }
    }
    ctx->pc = 0x4B764Cu;
label_4b764c:
    // 0x4b764c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4b764cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b7650:
    // 0x4b7650: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x4b7650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_4b7654:
    // 0x4b7654: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4b7658:
    if (ctx->pc == 0x4B7658u) {
        ctx->pc = 0x4B7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7654u;
        // 0x4b7658: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B765Cu;
        goto label_4b765c;
    }
    ctx->pc = 0x4B7654u;
    {
        const bool branch_taken_0x4b7654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7654) {
            ctx->pc = 0x4B7658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7654u;
            // 0x4b7658: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7670u;
            goto label_4b7670;
        }
    }
    ctx->pc = 0x4B765Cu;
label_4b765c:
    // 0x4b765c: 0xc12c274  jal         func_4B09D0
label_4b7660:
    if (ctx->pc == 0x4B7660u) {
        ctx->pc = 0x4B7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B765Cu;
        // 0x4b7660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7664u;
        goto label_4b7664;
    }
    ctx->pc = 0x4B765Cu;
    SET_GPR_U32(ctx, 31, 0x4B7664u);
    ctx->pc = 0x4B7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B765Cu;
    // 0x4b7660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B09D0u, 0x4B765Cu, 0x4B7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7664u;
label_4b7664:
    // 0x4b7664: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_4b7668:
    if (ctx->pc == 0x4B7668u) {
        ctx->pc = 0x4B7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7664u;
        // 0x4b7668: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B766Cu;
        goto label_4b766c;
    }
    ctx->pc = 0x4B7664u;
    {
        const bool branch_taken_0x4b7664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7664u;
        // 0x4b7668: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7664) {
            ctx->pc = 0x4B78F0u;
            goto label_4b78f0;
        }
    }
    ctx->pc = 0x4B766Cu;
label_4b766c:
    // 0x4b766c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4b766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b7670:
    // 0x4b7670: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_4b7674:
    if (ctx->pc == 0x4B7674u) {
        ctx->pc = 0x4B7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7670u;
        // 0x4b7674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7678u;
        goto label_4b7678;
    }
    ctx->pc = 0x4B7670u;
    {
        const bool branch_taken_0x4b7670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7670u;
        // 0x4b7674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7670) {
            ctx->pc = 0x4B76A0u;
            goto label_4b76a0;
        }
    }
    ctx->pc = 0x4B7678u;
label_4b7678:
    // 0x4b7678: 0xc12c3b4  jal         func_4B0ED0
label_4b767c:
    if (ctx->pc == 0x4B767Cu) {
        ctx->pc = 0x4B767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7678u;
        // 0x4b767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7680u;
        goto label_4b7680;
    }
    ctx->pc = 0x4B7678u;
    SET_GPR_U32(ctx, 31, 0x4B7680u);
    ctx->pc = 0x4B767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7678u;
    // 0x4b767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0ED0u, 0x4B7678u, 0x4B7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7680u;
label_4b7680:
    // 0x4b7680: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4b7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b7684:
    // 0x4b7684: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4b7684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4b7688:
    // 0x4b7688: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4b7688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4b768c:
    // 0x4b768c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4b768cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4b7690:
    // 0x4b7690: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4b7690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_4b7694:
    // 0x4b7694: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4b7694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4b7698:
    // 0x4b7698: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b7698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4b769c:
    // 0x4b769c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b76a0:
    // 0x4b76a0: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_4b76a4:
    if (ctx->pc == 0x4B76A4u) {
        ctx->pc = 0x4B76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76A0u;
        // 0x4b76a4: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B76A8u;
        goto label_4b76a8;
    }
    ctx->pc = 0x4B76A0u;
    {
        const bool branch_taken_0x4b76a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76A0u;
        // 0x4b76a4: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b76a0) {
            ctx->pc = 0x4B76C4u;
            goto label_4b76c4;
        }
    }
    ctx->pc = 0x4B76A8u;
label_4b76a8:
    // 0x4b76a8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_4b76ac:
    if (ctx->pc == 0x4B76ACu) {
        ctx->pc = 0x4B76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76A8u;
        // 0x4b76ac: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B76B0u;
        goto label_4b76b0;
    }
    ctx->pc = 0x4B76A8u;
    {
        const bool branch_taken_0x4b76a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b76a8) {
            ctx->pc = 0x4B76ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B76A8u;
            // 0x4b76ac: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7720u;
            goto label_4b7720;
        }
    }
    ctx->pc = 0x4B76B0u;
label_4b76b0:
    // 0x4b76b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b76b4:
    // 0x4b76b4: 0x5222000d  beql        $s1, $v0, . + 4 + (0xD << 2)
label_4b76b8:
    if (ctx->pc == 0x4B76B8u) {
        ctx->pc = 0x4B76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76B4u;
        // 0x4b76b8: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B76BCu;
        goto label_4b76bc;
    }
    ctx->pc = 0x4B76B4u;
    {
        const bool branch_taken_0x4b76b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b76b4) {
            ctx->pc = 0x4B76B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B76B4u;
            // 0x4b76b8: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B76ECu;
            goto label_4b76ec;
        }
    }
    ctx->pc = 0x4B76BCu;
label_4b76bc:
    // 0x4b76bc: 0x10000018  b           . + 4 + (0x18 << 2)
label_4b76c0:
    if (ctx->pc == 0x4B76C0u) {
        ctx->pc = 0x4B76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76BCu;
        // 0x4b76c0: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B76C4u;
        goto label_4b76c4;
    }
    ctx->pc = 0x4B76BCu;
    {
        const bool branch_taken_0x4b76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76BCu;
        // 0x4b76c0: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b76bc) {
            ctx->pc = 0x4B7720u;
            goto label_4b7720;
        }
    }
    ctx->pc = 0x4B76C4u;
label_4b76c4:
    // 0x4b76c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b76c8:
    // 0x4b76c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4b76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b76cc:
    // 0x4b76cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b76d0:
    // 0x4b76d0: 0xde050040  ld          $a1, 0x40($s0)
    ctx->pc = 0x4b76d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_4b76d4:
    // 0x4b76d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b76d8:
    // 0x4b76d8: 0x10a4006d  beq         $a1, $a0, . + 4 + (0x6D << 2)
label_4b76dc:
    if (ctx->pc == 0x4B76DCu) {
        ctx->pc = 0x4B76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76D8u;
        // 0x4b76dc: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B76E0u;
        goto label_4b76e0;
    }
    ctx->pc = 0x4B76D8u;
    {
        const bool branch_taken_0x4b76d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x4B76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76D8u;
        // 0x4b76dc: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b76d8) {
            ctx->pc = 0x4B7890u;
            goto label_4b7890;
        }
    }
    ctx->pc = 0x4B76E0u;
label_4b76e0:
    // 0x4b76e0: 0x245902d  daddu       $s2, $s2, $a1
    ctx->pc = 0x4b76e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 5));
label_4b76e4:
    // 0x4b76e4: 0x1000000e  b           . + 4 + (0xE << 2)
label_4b76e8:
    if (ctx->pc == 0x4B76E8u) {
        ctx->pc = 0x4B76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76E4u;
        // 0x4b76e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B76ECu;
        goto label_4b76ec;
    }
    ctx->pc = 0x4B76E4u;
    {
        const bool branch_taken_0x4b76e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76E4u;
        // 0x4b76e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b76e4) {
            ctx->pc = 0x4B7720u;
            goto label_4b7720;
        }
    }
    ctx->pc = 0x4B76ECu;
label_4b76ec:
    // 0x4b76ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b76ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b76f0:
    // 0x4b76f0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x4b76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4b76f4:
    // 0x4b76f4: 0x40f809  jalr        $v0
label_4b76f8:
    if (ctx->pc == 0x4B76F8u) {
        ctx->pc = 0x4B76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76F4u;
        // 0x4b76f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B76FCu;
        goto label_4b76fc;
    }
    ctx->pc = 0x4B76F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B76FCu);
        ctx->pc = 0x4B76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76F4u;
        // 0x4b76f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B76F4u, 0x4B76FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B76FCu;
label_4b76fc:
    // 0x4b76fc: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_4b7700:
    if (ctx->pc == 0x4B7700u) {
        ctx->pc = 0x4B7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76FCu;
        // 0x4b7700: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7704u;
        goto label_4b7704;
    }
    ctx->pc = 0x4B76FCu;
    {
        const bool branch_taken_0x4b76fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B76FCu;
        // 0x4b7700: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b76fc) {
            ctx->pc = 0x4B7890u;
            goto label_4b7890;
        }
    }
    ctx->pc = 0x4B7704u;
label_4b7704:
    // 0x4b7704: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x4b7704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_4b7708:
    // 0x4b7708: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x4b7708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_4b770c:
    // 0x4b770c: 0x14430060  bne         $v0, $v1, . + 4 + (0x60 << 2)
label_4b7710:
    if (ctx->pc == 0x4B7710u) {
        ctx->pc = 0x4B7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B770Cu;
        // 0x4b7710: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7714u;
        goto label_4b7714;
    }
    ctx->pc = 0x4B770Cu;
    {
        const bool branch_taken_0x4b770c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B770Cu;
        // 0x4b7710: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b770c) {
            ctx->pc = 0x4B7890u;
            goto label_4b7890;
        }
    }
    ctx->pc = 0x4B7714u;
label_4b7714:
    // 0x4b7714: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b7714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7718:
    // 0x4b7718: 0xde050040  ld          $a1, 0x40($s0)
    ctx->pc = 0x4b7718u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_4b771c:
    // 0x4b771c: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x4b771cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_4b7720:
    // 0x4b7720: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b7720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b7724:
    // 0x4b7724: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
label_4b7728:
    if (ctx->pc == 0x4B7728u) {
        ctx->pc = 0x4B7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7724u;
        // 0x4b7728: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B772Cu;
        goto label_4b772c;
    }
    ctx->pc = 0x4B7724u;
    {
        const bool branch_taken_0x4b7724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7724u;
        // 0x4b7728: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7724) {
            ctx->pc = 0x4B7790u;
            goto label_4b7790;
        }
    }
    ctx->pc = 0x4B772Cu;
label_4b772c:
    // 0x4b772c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4b772cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4b7730:
    // 0x4b7730: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_4b7734:
    if (ctx->pc == 0x4B7734u) {
        ctx->pc = 0x4B7738u;
        goto label_4b7738;
    }
    ctx->pc = 0x4B7730u;
    {
        const bool branch_taken_0x4b7730 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7730) {
            ctx->pc = 0x4B7790u;
            goto label_4b7790;
        }
    }
    ctx->pc = 0x4B7738u;
label_4b7738:
    // 0x4b7738: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x4b7738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_4b773c:
    // 0x4b773c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_4b7740:
    if (ctx->pc == 0x4B7740u) {
        ctx->pc = 0x4B7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B773Cu;
        // 0x4b7740: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7744u;
        goto label_4b7744;
    }
    ctx->pc = 0x4B773Cu;
    {
        const bool branch_taken_0x4b773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B773Cu;
        // 0x4b7740: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b773c) {
            ctx->pc = 0x4B7794u;
            goto label_4b7794;
        }
    }
    ctx->pc = 0x4B7744u;
label_4b7744:
    // 0x4b7744: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b7744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b7748:
    // 0x4b7748: 0x245182f  dsubu       $v1, $s2, $a1
    ctx->pc = 0x4b7748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 5));
label_4b774c:
    // 0x4b774c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b774cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4b7750:
    // 0x4b7750: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x4b7750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_4b7754:
    // 0x4b7754: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
label_4b7758:
    if (ctx->pc == 0x4B7758u) {
        ctx->pc = 0x4B7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7754u;
        // 0x4b7758: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B775Cu;
        goto label_4b775c;
    }
    ctx->pc = 0x4B7754u;
    {
        const bool branch_taken_0x4b7754 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7754u;
        // 0x4b7758: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7754) {
            ctx->pc = 0x4B7790u;
            goto label_4b7790;
        }
    }
    ctx->pc = 0x4B775Cu;
label_4b775c:
    // 0x4b775c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_4b7760:
    if (ctx->pc == 0x4B7760u) {
        ctx->pc = 0x4B7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B775Cu;
        // 0x4b7760: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7764u;
        goto label_4b7764;
    }
    ctx->pc = 0x4B775Cu;
    {
        const bool branch_taken_0x4b775c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B775Cu;
        // 0x4b7760: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b775c) {
            ctx->pc = 0x4B7794u;
            goto label_4b7794;
        }
    }
    ctx->pc = 0x4B7764u;
label_4b7764:
    // 0x4b7764: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4b7764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b7768:
    // 0x4b7768: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b7768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4b776c:
    // 0x4b776c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b776cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4b7770:
    // 0x4b7770: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b7770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b7774:
    // 0x4b7774: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4b7774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4b7778:
    // 0x4b7778: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4b7778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_4b777c:
    // 0x4b777c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4b777cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4b7780:
    // 0x4b7780: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x4b7780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_4b7784:
    // 0x4b7784: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x4b7784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_4b7788:
    // 0x4b7788: 0x10000059  b           . + 4 + (0x59 << 2)
label_4b778c:
    if (ctx->pc == 0x4B778Cu) {
        ctx->pc = 0x4B778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7788u;
        // 0x4b778c: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7790u;
        goto label_4b7790;
    }
    ctx->pc = 0x4B7788u;
    {
        const bool branch_taken_0x4b7788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7788u;
        // 0x4b778c: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7788) {
            ctx->pc = 0x4B78F0u;
            goto label_4b78f0;
        }
    }
    ctx->pc = 0x4B7790u;
label_4b7790:
    // 0x4b7790: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x4b7790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_4b7794:
    // 0x4b7794: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_4b7798:
    if (ctx->pc == 0x4B7798u) {
        ctx->pc = 0x4B779Cu;
        goto label_4b779c;
    }
    ctx->pc = 0x4B7794u;
    {
        const bool branch_taken_0x4b7794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b7794) {
            ctx->pc = 0x4B7890u;
            goto label_4b7890;
        }
    }
    ctx->pc = 0x4B779Cu;
label_4b779c:
    // 0x4b779c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4b77a0:
    // 0x4b77a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4b77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b77a4:
    // 0x4b77a4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x4b77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b77a8:
    // 0x4b77a8: 0x2442824  and         $a1, $s2, $a0
    ctx->pc = 0x4b77a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_4b77ac:
    // 0x4b77ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b77acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b77b0:
    // 0x4b77b0: 0x245882f  dsubu       $s1, $s2, $a1
    ctx->pc = 0x4b77b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) - GPR_U64(ctx, 5));
label_4b77b4:
    // 0x4b77b4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4b77b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4b77b8:
    // 0x4b77b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4b77bc:
    if (ctx->pc == 0x4B77BCu) {
        ctx->pc = 0x4B77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77B8u;
        // 0x4b77bc: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B77C0u;
        goto label_4b77c0;
    }
    ctx->pc = 0x4B77B8u;
    {
        const bool branch_taken_0x4b77b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77B8u;
        // 0x4b77bc: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b77b8) {
            ctx->pc = 0x4B77C8u;
            goto label_4b77c8;
        }
    }
    ctx->pc = 0x4B77C0u;
label_4b77c0:
    // 0x4b77c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b77c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b77c4:
    // 0x4b77c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b77c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b77c8:
    // 0x4b77c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b77c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b77cc:
    // 0x4b77cc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x4b77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_4b77d0:
    // 0x4b77d0: 0x40f809  jalr        $v0
label_4b77d4:
    if (ctx->pc == 0x4B77D4u) {
        ctx->pc = 0x4B77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77D0u;
        // 0x4b77d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B77D8u;
        goto label_4b77d8;
    }
    ctx->pc = 0x4B77D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B77D8u);
        ctx->pc = 0x4B77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77D0u;
        // 0x4b77d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B77D0u, 0x4B77D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B77D8u;
label_4b77d8:
    // 0x4b77d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4b77d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b77dc:
    // 0x4b77dc: 0x6600044  bltz        $s3, . + 4 + (0x44 << 2)
label_4b77e0:
    if (ctx->pc == 0x4B77E0u) {
        ctx->pc = 0x4B77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77DCu;
        // 0x4b77e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B77E4u;
        goto label_4b77e4;
    }
    ctx->pc = 0x4B77DCu;
    {
        const bool branch_taken_0x4b77dc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x4B77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77DCu;
        // 0x4b77e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b77dc) {
            ctx->pc = 0x4B78F0u;
            goto label_4b78f0;
        }
    }
    ctx->pc = 0x4B77E4u;
label_4b77e4:
    // 0x4b77e4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_4b77e8:
    if (ctx->pc == 0x4B77E8u) {
        ctx->pc = 0x4B77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77E4u;
        // 0x4b77e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B77ECu;
        goto label_4b77ec;
    }
    ctx->pc = 0x4B77E4u;
    {
        const bool branch_taken_0x4b77e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77E4u;
        // 0x4b77e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b77e4) {
            ctx->pc = 0x4B783Cu;
            goto label_4b783c;
        }
    }
    ctx->pc = 0x4B77ECu;
label_4b77ec:
    // 0x4b77ec: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_4b77f0:
    if (ctx->pc == 0x4B77F0u) {
        ctx->pc = 0x4B77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77ECu;
        // 0x4b77f0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B77F4u;
        goto label_4b77f4;
    }
    ctx->pc = 0x4B77ECu;
    {
        const bool branch_taken_0x4b77ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77ECu;
        // 0x4b77f0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b77ec) {
            ctx->pc = 0x4B7804u;
            goto label_4b7804;
        }
    }
    ctx->pc = 0x4B77F4u;
label_4b77f4:
    // 0x4b77f4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4b77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4b77f8:
    // 0x4b77f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4b77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b77fc:
    // 0x4b77fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_4b7800:
    if (ctx->pc == 0x4B7800u) {
        ctx->pc = 0x4B7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77FCu;
        // 0x4b7800: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7804u;
        goto label_4b7804;
    }
    ctx->pc = 0x4B77FCu;
    {
        const bool branch_taken_0x4b77fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77FCu;
        // 0x4b7800: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b77fc) {
            ctx->pc = 0x4B7808u;
            goto label_4b7808;
        }
    }
    ctx->pc = 0x4B7804u;
label_4b7804:
    // 0x4b7804: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b7804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b7808:
    // 0x4b7808: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x4b7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_4b780c:
    // 0x4b780c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x4b780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b7810:
    // 0x4b7810: 0x40f809  jalr        $v0
label_4b7814:
    if (ctx->pc == 0x4B7814u) {
        ctx->pc = 0x4B7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7810u;
        // 0x4b7814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7818u;
        goto label_4b7818;
    }
    ctx->pc = 0x4B7810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B7818u);
        ctx->pc = 0x4B7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7810u;
        // 0x4b7814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7810u, 0x4B7818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B7818u;
label_4b7818:
    // 0x4b7818: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4b7818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b781c:
    // 0x4b781c: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x4b781cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4b7820:
    // 0x4b7820: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b7824:
    if (ctx->pc == 0x4B7824u) {
        ctx->pc = 0x4B7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7820u;
        // 0x4b7824: 0x71827  nor         $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7828u;
        goto label_4b7828;
    }
    ctx->pc = 0x4B7820u;
    {
        const bool branch_taken_0x4b7820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7820u;
        // 0x4b7824: 0x71827  nor         $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7820) {
            ctx->pc = 0x4B783Cu;
            goto label_4b783c;
        }
    }
    ctx->pc = 0x4B7828u;
label_4b7828:
    // 0x4b7828: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4b7828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b782c:
    // 0x4b782c: 0x247102f  dsubu       $v0, $s2, $a3
    ctx->pc = 0x4b782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) - GPR_U64(ctx, 7));
label_4b7830:
    // 0x4b7830: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4b7830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b7834:
    // 0x4b7834: 0x10000016  b           . + 4 + (0x16 << 2)
label_4b7838:
    if (ctx->pc == 0x4B7838u) {
        ctx->pc = 0x4B7838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7834u;
        // 0x4b7838: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B783Cu;
        goto label_4b783c;
    }
    ctx->pc = 0x4B7834u;
    {
        const bool branch_taken_0x4b7834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7834u;
        // 0x4b7838: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7834) {
            ctx->pc = 0x4B7890u;
            goto label_4b7890;
        }
    }
    ctx->pc = 0x4B783Cu;
label_4b783c:
    // 0x4b783c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b7840:
    // 0x4b7840: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x4b7840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_4b7844:
    // 0x4b7844: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x4b7844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b7848:
    // 0x4b7848: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x4b7848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
label_4b784c:
    // 0x4b784c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4b784cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_4b7850:
    // 0x4b7850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b7850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4b7854:
    // 0x4b7854: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x4b7854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_4b7858:
    // 0x4b7858: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4b7858u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_4b785c:
    // 0x4b785c: 0x267382d  daddu       $a3, $s3, $a3
    ctx->pc = 0x4b785cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 7));
label_4b7860:
    // 0x4b7860: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x4b7860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4b7864:
    // 0x4b7864: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4b7864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4b7868:
    // 0x4b7868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b7868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b786c:
    // 0x4b786c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x4b786cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_4b7870:
    // 0x4b7870: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b7870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b7874:
    // 0x4b7874: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x4b7874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_4b7878:
    // 0x4b7878: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x4b7878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_4b787c:
    // 0x4b787c: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x4b787cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
label_4b7880:
    // 0x4b7880: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x4b7880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_4b7884:
    // 0x4b7884: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x4b7884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_4b7888:
    // 0x4b7888: 0x10000019  b           . + 4 + (0x19 << 2)
label_4b788c:
    if (ctx->pc == 0x4B788Cu) {
        ctx->pc = 0x4B788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7888u;
        // 0x4b788c: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7890u;
        goto label_4b7890;
    }
    ctx->pc = 0x4B7888u;
    {
        const bool branch_taken_0x4b7888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7888u;
        // 0x4b788c: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7888) {
            ctx->pc = 0x4B78F0u;
            goto label_4b78f0;
        }
    }
    ctx->pc = 0x4B7890u;
label_4b7890:
    // 0x4b7890: 0xc12c608  jal         func_4B1820
label_4b7894:
    if (ctx->pc == 0x4B7894u) {
        ctx->pc = 0x4B7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7890u;
        // 0x4b7894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7898u;
        goto label_4b7898;
    }
    ctx->pc = 0x4B7890u;
    SET_GPR_U32(ctx, 31, 0x4B7898u);
    ctx->pc = 0x4B7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7890u;
    // 0x4b7894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1820u, 0x4B7890u, 0x4B7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7898u;
label_4b7898:
    // 0x4b7898: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b7898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b789c:
    // 0x4b789c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b789cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b78a0:
    // 0x4b78a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b78a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b78a4:
    // 0x4b78a4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x4b78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_4b78a8:
    // 0x4b78a8: 0x40f809  jalr        $v0
label_4b78ac:
    if (ctx->pc == 0x4B78ACu) {
        ctx->pc = 0x4B78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B78A8u;
        // 0x4b78ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B78B0u;
        goto label_4b78b0;
    }
    ctx->pc = 0x4B78A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B78B0u);
        ctx->pc = 0x4B78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B78A8u;
        // 0x4b78ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B78A8u, 0x4B78B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B78B0u;
label_4b78b0:
    // 0x4b78b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4b78b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b78b4:
    // 0x4b78b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b78b8:
    // 0x4b78b8: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_4b78bc:
    if (ctx->pc == 0x4B78BCu) {
        ctx->pc = 0x4B78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B78B8u;
        // 0x4b78bc: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B78C0u;
        goto label_4b78c0;
    }
    ctx->pc = 0x4B78B8u;
    {
        const bool branch_taken_0x4b78b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B78B8u;
        // 0x4b78bc: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b78b8) {
            ctx->pc = 0x4B78CCu;
            goto label_4b78cc;
        }
    }
    ctx->pc = 0x4B78C0u;
label_4b78c0:
    // 0x4b78c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b78c4:
    // 0x4b78c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b78c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4b78c8:
    // 0x4b78c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b78cc:
    // 0x4b78cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4b78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b78d0:
    // 0x4b78d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b78d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b78d4:
    // 0x4b78d4: 0xfe130040  sd          $s3, 0x40($s0)
    ctx->pc = 0x4b78d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 19));
label_4b78d8:
    // 0x4b78d8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4b78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_4b78dc:
    // 0x4b78dc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4b78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4b78e0:
    // 0x4b78e0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4b78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4b78e4:
    // 0x4b78e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4b78e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_4b78e8:
    // 0x4b78e8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4b78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_4b78ec:
    // 0x4b78ec: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4b78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_4b78f0:
    // 0x4b78f0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x4b78f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_4b78f4:
    // 0x4b78f4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x4b78f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_4b78f8:
    // 0x4b78f8: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x4b78f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4b78fc:
    // 0x4b78fc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x4b78fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b7900:
    // 0x4b7900: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x4b7900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4b7904:
    // 0x4b7904: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x4b7904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4b7908:
    // 0x4b7908: 0x3e00008  jr          $ra
label_4b790c:
    if (ctx->pc == 0x4B790Cu) {
        ctx->pc = 0x4B790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7908u;
        // 0x4b790c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7910u;
        goto label_fallthrough_0x4b7908;
    }
    ctx->pc = 0x4B7908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7908u;
        // 0x4b790c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b7908:
    ctx->pc = 0x4B7910u;
}
