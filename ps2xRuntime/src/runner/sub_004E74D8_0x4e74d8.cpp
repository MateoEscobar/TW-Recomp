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

// Function: sub_004E74D8
// Address: 0x4e74d8 - 0x4e78a8
void sub_004E74D8_0x4e74d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E74D8_0x4e74d8");
#endif

    switch (ctx->pc) {
        case 0x4e74d8u: goto label_4e74d8;
        case 0x4e74dcu: goto label_4e74dc;
        case 0x4e74e0u: goto label_4e74e0;
        case 0x4e74e4u: goto label_4e74e4;
        case 0x4e74e8u: goto label_4e74e8;
        case 0x4e74ecu: goto label_4e74ec;
        case 0x4e74f0u: goto label_4e74f0;
        case 0x4e74f4u: goto label_4e74f4;
        case 0x4e74f8u: goto label_4e74f8;
        case 0x4e74fcu: goto label_4e74fc;
        case 0x4e7500u: goto label_4e7500;
        case 0x4e7504u: goto label_4e7504;
        case 0x4e7508u: goto label_4e7508;
        case 0x4e750cu: goto label_4e750c;
        case 0x4e7510u: goto label_4e7510;
        case 0x4e7514u: goto label_4e7514;
        case 0x4e7518u: goto label_4e7518;
        case 0x4e751cu: goto label_4e751c;
        case 0x4e7520u: goto label_4e7520;
        case 0x4e7524u: goto label_4e7524;
        case 0x4e7528u: goto label_4e7528;
        case 0x4e752cu: goto label_4e752c;
        case 0x4e7530u: goto label_4e7530;
        case 0x4e7534u: goto label_4e7534;
        case 0x4e7538u: goto label_4e7538;
        case 0x4e753cu: goto label_4e753c;
        case 0x4e7540u: goto label_4e7540;
        case 0x4e7544u: goto label_4e7544;
        case 0x4e7548u: goto label_4e7548;
        case 0x4e754cu: goto label_4e754c;
        case 0x4e7550u: goto label_4e7550;
        case 0x4e7554u: goto label_4e7554;
        case 0x4e7558u: goto label_4e7558;
        case 0x4e755cu: goto label_4e755c;
        case 0x4e7560u: goto label_4e7560;
        case 0x4e7564u: goto label_4e7564;
        case 0x4e7568u: goto label_4e7568;
        case 0x4e756cu: goto label_4e756c;
        case 0x4e7570u: goto label_4e7570;
        case 0x4e7574u: goto label_4e7574;
        case 0x4e7578u: goto label_4e7578;
        case 0x4e757cu: goto label_4e757c;
        case 0x4e7580u: goto label_4e7580;
        case 0x4e7584u: goto label_4e7584;
        case 0x4e7588u: goto label_4e7588;
        case 0x4e758cu: goto label_4e758c;
        case 0x4e7590u: goto label_4e7590;
        case 0x4e7594u: goto label_4e7594;
        case 0x4e7598u: goto label_4e7598;
        case 0x4e759cu: goto label_4e759c;
        case 0x4e75a0u: goto label_4e75a0;
        case 0x4e75a4u: goto label_4e75a4;
        case 0x4e75a8u: goto label_4e75a8;
        case 0x4e75acu: goto label_4e75ac;
        case 0x4e75b0u: goto label_4e75b0;
        case 0x4e75b4u: goto label_4e75b4;
        case 0x4e75b8u: goto label_4e75b8;
        case 0x4e75bcu: goto label_4e75bc;
        case 0x4e75c0u: goto label_4e75c0;
        case 0x4e75c4u: goto label_4e75c4;
        case 0x4e75c8u: goto label_4e75c8;
        case 0x4e75ccu: goto label_4e75cc;
        case 0x4e75d0u: goto label_4e75d0;
        case 0x4e75d4u: goto label_4e75d4;
        case 0x4e75d8u: goto label_4e75d8;
        case 0x4e75dcu: goto label_4e75dc;
        case 0x4e75e0u: goto label_4e75e0;
        case 0x4e75e4u: goto label_4e75e4;
        case 0x4e75e8u: goto label_4e75e8;
        case 0x4e75ecu: goto label_4e75ec;
        case 0x4e75f0u: goto label_4e75f0;
        case 0x4e75f4u: goto label_4e75f4;
        case 0x4e75f8u: goto label_4e75f8;
        case 0x4e75fcu: goto label_4e75fc;
        case 0x4e7600u: goto label_4e7600;
        case 0x4e7604u: goto label_4e7604;
        case 0x4e7608u: goto label_4e7608;
        case 0x4e760cu: goto label_4e760c;
        case 0x4e7610u: goto label_4e7610;
        case 0x4e7614u: goto label_4e7614;
        case 0x4e7618u: goto label_4e7618;
        case 0x4e761cu: goto label_4e761c;
        case 0x4e7620u: goto label_4e7620;
        case 0x4e7624u: goto label_4e7624;
        case 0x4e7628u: goto label_4e7628;
        case 0x4e762cu: goto label_4e762c;
        case 0x4e7630u: goto label_4e7630;
        case 0x4e7634u: goto label_4e7634;
        case 0x4e7638u: goto label_4e7638;
        case 0x4e763cu: goto label_4e763c;
        case 0x4e7640u: goto label_4e7640;
        case 0x4e7644u: goto label_4e7644;
        case 0x4e7648u: goto label_4e7648;
        case 0x4e764cu: goto label_4e764c;
        case 0x4e7650u: goto label_4e7650;
        case 0x4e7654u: goto label_4e7654;
        case 0x4e7658u: goto label_4e7658;
        case 0x4e765cu: goto label_4e765c;
        case 0x4e7660u: goto label_4e7660;
        case 0x4e7664u: goto label_4e7664;
        case 0x4e7668u: goto label_4e7668;
        case 0x4e766cu: goto label_4e766c;
        case 0x4e7670u: goto label_4e7670;
        case 0x4e7674u: goto label_4e7674;
        case 0x4e7678u: goto label_4e7678;
        case 0x4e767cu: goto label_4e767c;
        case 0x4e7680u: goto label_4e7680;
        case 0x4e7684u: goto label_4e7684;
        case 0x4e7688u: goto label_4e7688;
        case 0x4e768cu: goto label_4e768c;
        case 0x4e7690u: goto label_4e7690;
        case 0x4e7694u: goto label_4e7694;
        case 0x4e7698u: goto label_4e7698;
        case 0x4e769cu: goto label_4e769c;
        case 0x4e76a0u: goto label_4e76a0;
        case 0x4e76a4u: goto label_4e76a4;
        case 0x4e76a8u: goto label_4e76a8;
        case 0x4e76acu: goto label_4e76ac;
        case 0x4e76b0u: goto label_4e76b0;
        case 0x4e76b4u: goto label_4e76b4;
        case 0x4e76b8u: goto label_4e76b8;
        case 0x4e76bcu: goto label_4e76bc;
        case 0x4e76c0u: goto label_4e76c0;
        case 0x4e76c4u: goto label_4e76c4;
        case 0x4e76c8u: goto label_4e76c8;
        case 0x4e76ccu: goto label_4e76cc;
        case 0x4e76d0u: goto label_4e76d0;
        case 0x4e76d4u: goto label_4e76d4;
        case 0x4e76d8u: goto label_4e76d8;
        case 0x4e76dcu: goto label_4e76dc;
        case 0x4e76e0u: goto label_4e76e0;
        case 0x4e76e4u: goto label_4e76e4;
        case 0x4e76e8u: goto label_4e76e8;
        case 0x4e76ecu: goto label_4e76ec;
        case 0x4e76f0u: goto label_4e76f0;
        case 0x4e76f4u: goto label_4e76f4;
        case 0x4e76f8u: goto label_4e76f8;
        case 0x4e76fcu: goto label_4e76fc;
        case 0x4e7700u: goto label_4e7700;
        case 0x4e7704u: goto label_4e7704;
        case 0x4e7708u: goto label_4e7708;
        case 0x4e770cu: goto label_4e770c;
        case 0x4e7710u: goto label_4e7710;
        case 0x4e7714u: goto label_4e7714;
        case 0x4e7718u: goto label_4e7718;
        case 0x4e771cu: goto label_4e771c;
        case 0x4e7720u: goto label_4e7720;
        case 0x4e7724u: goto label_4e7724;
        case 0x4e7728u: goto label_4e7728;
        case 0x4e772cu: goto label_4e772c;
        case 0x4e7730u: goto label_4e7730;
        case 0x4e7734u: goto label_4e7734;
        case 0x4e7738u: goto label_4e7738;
        case 0x4e773cu: goto label_4e773c;
        case 0x4e7740u: goto label_4e7740;
        case 0x4e7744u: goto label_4e7744;
        case 0x4e7748u: goto label_4e7748;
        case 0x4e774cu: goto label_4e774c;
        case 0x4e7750u: goto label_4e7750;
        case 0x4e7754u: goto label_4e7754;
        case 0x4e7758u: goto label_4e7758;
        case 0x4e775cu: goto label_4e775c;
        case 0x4e7760u: goto label_4e7760;
        case 0x4e7764u: goto label_4e7764;
        case 0x4e7768u: goto label_4e7768;
        case 0x4e776cu: goto label_4e776c;
        case 0x4e7770u: goto label_4e7770;
        case 0x4e7774u: goto label_4e7774;
        case 0x4e7778u: goto label_4e7778;
        case 0x4e777cu: goto label_4e777c;
        case 0x4e7780u: goto label_4e7780;
        case 0x4e7784u: goto label_4e7784;
        case 0x4e7788u: goto label_4e7788;
        case 0x4e778cu: goto label_4e778c;
        case 0x4e7790u: goto label_4e7790;
        case 0x4e7794u: goto label_4e7794;
        case 0x4e7798u: goto label_4e7798;
        case 0x4e779cu: goto label_4e779c;
        case 0x4e77a0u: goto label_4e77a0;
        case 0x4e77a4u: goto label_4e77a4;
        case 0x4e77a8u: goto label_4e77a8;
        case 0x4e77acu: goto label_4e77ac;
        case 0x4e77b0u: goto label_4e77b0;
        case 0x4e77b4u: goto label_4e77b4;
        case 0x4e77b8u: goto label_4e77b8;
        case 0x4e77bcu: goto label_4e77bc;
        case 0x4e77c0u: goto label_4e77c0;
        case 0x4e77c4u: goto label_4e77c4;
        case 0x4e77c8u: goto label_4e77c8;
        case 0x4e77ccu: goto label_4e77cc;
        case 0x4e77d0u: goto label_4e77d0;
        case 0x4e77d4u: goto label_4e77d4;
        case 0x4e77d8u: goto label_4e77d8;
        case 0x4e77dcu: goto label_4e77dc;
        case 0x4e77e0u: goto label_4e77e0;
        case 0x4e77e4u: goto label_4e77e4;
        case 0x4e77e8u: goto label_4e77e8;
        case 0x4e77ecu: goto label_4e77ec;
        case 0x4e77f0u: goto label_4e77f0;
        case 0x4e77f4u: goto label_4e77f4;
        case 0x4e77f8u: goto label_4e77f8;
        case 0x4e77fcu: goto label_4e77fc;
        case 0x4e7800u: goto label_4e7800;
        case 0x4e7804u: goto label_4e7804;
        case 0x4e7808u: goto label_4e7808;
        case 0x4e780cu: goto label_4e780c;
        case 0x4e7810u: goto label_4e7810;
        case 0x4e7814u: goto label_4e7814;
        case 0x4e7818u: goto label_4e7818;
        case 0x4e781cu: goto label_4e781c;
        case 0x4e7820u: goto label_4e7820;
        case 0x4e7824u: goto label_4e7824;
        case 0x4e7828u: goto label_4e7828;
        case 0x4e782cu: goto label_4e782c;
        case 0x4e7830u: goto label_4e7830;
        case 0x4e7834u: goto label_4e7834;
        case 0x4e7838u: goto label_4e7838;
        case 0x4e783cu: goto label_4e783c;
        case 0x4e7840u: goto label_4e7840;
        case 0x4e7844u: goto label_4e7844;
        case 0x4e7848u: goto label_4e7848;
        case 0x4e784cu: goto label_4e784c;
        case 0x4e7850u: goto label_4e7850;
        case 0x4e7854u: goto label_4e7854;
        case 0x4e7858u: goto label_4e7858;
        case 0x4e785cu: goto label_4e785c;
        case 0x4e7860u: goto label_4e7860;
        case 0x4e7864u: goto label_4e7864;
        case 0x4e7868u: goto label_4e7868;
        case 0x4e786cu: goto label_4e786c;
        case 0x4e7870u: goto label_4e7870;
        case 0x4e7874u: goto label_4e7874;
        case 0x4e7878u: goto label_4e7878;
        case 0x4e787cu: goto label_4e787c;
        case 0x4e7880u: goto label_4e7880;
        case 0x4e7884u: goto label_4e7884;
        case 0x4e7888u: goto label_4e7888;
        case 0x4e788cu: goto label_4e788c;
        case 0x4e7890u: goto label_4e7890;
        case 0x4e7894u: goto label_4e7894;
        case 0x4e7898u: goto label_4e7898;
        case 0x4e789cu: goto label_4e789c;
        case 0x4e78a0u: goto label_4e78a0;
        case 0x4e78a4u: goto label_4e78a4;
        default: break;
    }

    ctx->pc = 0x4e74d8u;

label_4e74d8:
    // 0x4e74d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e74d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e74dc:
    // 0x4e74dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e74dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e74e0:
    // 0x4e74e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e74e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e74e4:
    // 0x4e74e4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e74e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e74e8:
    // 0x4e74e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e74ec:
    // 0x4e74ec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e74ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e74f0:
    // 0x4e74f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e74f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e74f4:
    // 0x4e74f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e74f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e74f8:
    // 0x4e74f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e74f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e74fc:
    // 0x4e74fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e7500:
    // 0x4e7500: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e7504:
    if (ctx->pc == 0x4E7504u) {
        ctx->pc = 0x4E7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7500u;
        // 0x4e7504: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7508u;
        goto label_4e7508;
    }
    ctx->pc = 0x4E7500u;
    {
        const bool branch_taken_0x4e7500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7500u;
        // 0x4e7504: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7500) {
            ctx->pc = 0x4E7524u;
            goto label_4e7524;
        }
    }
    ctx->pc = 0x4E7508u;
label_4e7508:
    // 0x4e7508: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e750c:
    if (ctx->pc == 0x4E750Cu) {
        ctx->pc = 0x4E750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7508u;
        // 0x4e750c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7510u;
        goto label_4e7510;
    }
    ctx->pc = 0x4E7508u;
    {
        const bool branch_taken_0x4e7508 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7508u;
        // 0x4e750c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7508) {
            ctx->pc = 0x4E7528u;
            goto label_4e7528;
        }
    }
    ctx->pc = 0x4E7510u;
label_4e7510:
    // 0x4e7510: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e7510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e7514:
    // 0x4e7514: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e7518:
    // 0x4e7518: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e7518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e751c:
    // 0x4e751c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e7520:
    if (ctx->pc == 0x4E7520u) {
        ctx->pc = 0x4E7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E751Cu;
        // 0x4e7520: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7524u;
        goto label_4e7524;
    }
    ctx->pc = 0x4E751Cu;
    {
        const bool branch_taken_0x4e751c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E751Cu;
        // 0x4e7520: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e751c) {
            ctx->pc = 0x4E75B8u;
            goto label_4e75b8;
        }
    }
    ctx->pc = 0x4E7524u;
label_4e7524:
    // 0x4e7524: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e7524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e7528:
    // 0x4e7528: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e7528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e752c:
    // 0x4e752c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e752cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e7530:
    // 0x4e7530: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e7530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e7534:
    // 0x4e7534: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e7534u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e7538:
    // 0x4e7538: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x4e7538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_4e753c:
    // 0x4e753c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e7540:
    // 0x4e7540: 0x250853e8  addiu       $t0, $t0, 0x53E8
    ctx->pc = 0x4e7540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21480));
label_4e7544:
    // 0x4e7544: 0x254a5410  addiu       $t2, $t2, 0x5410
    ctx->pc = 0x4e7544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21520));
label_4e7548:
    // 0x4e7548: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e7548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e754c:
    // 0x4e754c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e754cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e7550:
    // 0x4e7550: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e7550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e7554:
    // 0x4e7554: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e7554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e7558:
    // 0x4e7558: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e7558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e755c:
    // 0x4e755c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e7560:
    // 0x4e7560: 0x40f809  jalr        $v0
label_4e7564:
    if (ctx->pc == 0x4E7564u) {
        ctx->pc = 0x4E7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7560u;
        // 0x4e7564: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7568u;
        goto label_4e7568;
    }
    ctx->pc = 0x4E7560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E7568u);
        ctx->pc = 0x4E7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7560u;
        // 0x4e7564: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7560u, 0x4E7568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7568u;
label_4e7568:
    // 0x4e7568: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e7568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e756c:
    // 0x4e756c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e7570:
    // 0x4e7570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e7574:
    if (ctx->pc == 0x4E7574u) {
        ctx->pc = 0x4E7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7570u;
        // 0x4e7574: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7578u;
        goto label_4e7578;
    }
    ctx->pc = 0x4E7570u;
    {
        const bool branch_taken_0x4e7570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7570u;
        // 0x4e7574: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7570) {
            ctx->pc = 0x4E7588u;
            goto label_4e7588;
        }
    }
    ctx->pc = 0x4E7578u;
label_4e7578:
    // 0x4e7578: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e7578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e757c:
    // 0x4e757c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e757cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e7580:
    // 0x4e7580: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e7580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e7584:
    // 0x4e7584: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e7584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e7588:
    // 0x4e7588: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e7588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e758c:
    // 0x4e758c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e7590:
    // 0x4e7590: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e7594:
    if (ctx->pc == 0x4E7594u) {
        ctx->pc = 0x4E7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7590u;
        // 0x4e7594: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7598u;
        goto label_4e7598;
    }
    ctx->pc = 0x4E7590u;
    {
        const bool branch_taken_0x4e7590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e7590) {
            ctx->pc = 0x4E7594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7590u;
            // 0x4e7594: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E75A8u;
            goto label_4e75a8;
        }
    }
    ctx->pc = 0x4E7598u;
label_4e7598:
    // 0x4e7598: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e7598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e759c:
    // 0x4e759c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e75a0:
    // 0x4e75a0: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e75a4:
    if (ctx->pc == 0x4E75A4u) {
        ctx->pc = 0x4E75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E75A0u;
        // 0x4e75a4: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E75A8u;
        goto label_4e75a8;
    }
    ctx->pc = 0x4E75A0u;
    {
        const bool branch_taken_0x4e75a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E75A0u;
        // 0x4e75a4: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e75a0) {
            ctx->pc = 0x4E762Cu;
            goto label_4e762c;
        }
    }
    ctx->pc = 0x4E75A8u;
label_4e75a8:
    // 0x4e75a8: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e75ac:
    if (ctx->pc == 0x4E75ACu) {
        ctx->pc = 0x4E75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E75A8u;
        // 0x4e75ac: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E75B0u;
        goto label_4e75b0;
    }
    ctx->pc = 0x4E75A8u;
    {
        const bool branch_taken_0x4e75a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e75a8) {
            ctx->pc = 0x4E75ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E75A8u;
            // 0x4e75ac: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E762Cu;
            goto label_4e762c;
        }
    }
    ctx->pc = 0x4E75B0u;
label_4e75b0:
    // 0x4e75b0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e75b4:
    if (ctx->pc == 0x4E75B4u) {
        ctx->pc = 0x4E75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E75B0u;
        // 0x4e75b4: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E75B8u;
        goto label_4e75b8;
    }
    ctx->pc = 0x4E75B0u;
    {
        const bool branch_taken_0x4e75b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E75B0u;
        // 0x4e75b4: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e75b0) {
            ctx->pc = 0x4E7630u;
            goto label_4e7630;
        }
    }
    ctx->pc = 0x4E75B8u;
label_4e75b8:
    // 0x4e75b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e75b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e75bc:
    // 0x4e75bc: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e75bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e75c0:
    // 0x4e75c0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e75c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e75c4:
    // 0x4e75c4: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e75c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e75c8:
    // 0x4e75c8: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x4e75c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_4e75cc:
    // 0x4e75cc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e75d0:
    // 0x4e75d0: 0x250853e8  addiu       $t0, $t0, 0x53E8
    ctx->pc = 0x4e75d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21480));
label_4e75d4:
    // 0x4e75d4: 0x254a5410  addiu       $t2, $t2, 0x5410
    ctx->pc = 0x4e75d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21520));
label_4e75d8:
    // 0x4e75d8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e75d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e75dc:
    // 0x4e75dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e75dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e75e0:
    // 0x4e75e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e75e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e75e4:
    // 0x4e75e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e75e8:
    // 0x4e75e8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e75e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e75ec:
    // 0x4e75ec: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e75f0:
    // 0x4e75f0: 0x40f809  jalr        $v0
label_4e75f4:
    if (ctx->pc == 0x4E75F4u) {
        ctx->pc = 0x4E75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E75F0u;
        // 0x4e75f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E75F8u;
        goto label_4e75f8;
    }
    ctx->pc = 0x4E75F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E75F8u);
        ctx->pc = 0x4E75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E75F0u;
        // 0x4e75f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E75F0u, 0x4E75F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E75F8u;
label_4e75f8:
    // 0x4e75f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e75f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e75fc:
    // 0x4e75fc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e7600:
    // 0x4e7600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e7604:
    if (ctx->pc == 0x4E7604u) {
        ctx->pc = 0x4E7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7600u;
        // 0x4e7604: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7608u;
        goto label_4e7608;
    }
    ctx->pc = 0x4E7600u;
    {
        const bool branch_taken_0x4e7600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7600u;
        // 0x4e7604: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7600) {
            ctx->pc = 0x4E7618u;
            goto label_4e7618;
        }
    }
    ctx->pc = 0x4E7608u;
label_4e7608:
    // 0x4e7608: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e7608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e760c:
    // 0x4e760c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e760cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e7610:
    // 0x4e7610: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e7610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e7614:
    // 0x4e7614: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e7614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e7618:
    // 0x4e7618: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e7618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e761c:
    // 0x4e761c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e7620:
    // 0x4e7620: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e7624:
    // 0x4e7624: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e7628:
    if (ctx->pc == 0x4E7628u) {
        ctx->pc = 0x4E7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7624u;
        // 0x4e7628: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E762Cu;
        goto label_4e762c;
    }
    ctx->pc = 0x4E7624u;
    {
        const bool branch_taken_0x4e7624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e7624) {
            ctx->pc = 0x4E7628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7624u;
            // 0x4e7628: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E762Cu;
            goto label_4e762c;
        }
    }
    ctx->pc = 0x4E762Cu;
label_4e762c:
    // 0x4e762c: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e762cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e7630:
    // 0x4e7630: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e7630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e7634:
    // 0x4e7634: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e7634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e7638:
    // 0x4e7638: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e7638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e763c:
    // 0x4e763c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e7640:
    // 0x4e7640: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e7640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e7644:
    // 0x4e7644: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e7644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e7648:
    // 0x4e7648: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e764c:
    if (ctx->pc == 0x4E764Cu) {
        ctx->pc = 0x4E764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7648u;
        // 0x4e764c: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7650u;
        goto label_4e7650;
    }
    ctx->pc = 0x4E7648u;
    {
        const bool branch_taken_0x4e7648 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7648u;
        // 0x4e764c: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7648) {
            ctx->pc = 0x4E786Cu;
            goto label_4e786c;
        }
    }
    ctx->pc = 0x4E7650u;
label_4e7650:
    // 0x4e7650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e7650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e7654:
    // 0x4e7654: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e7658:
    if (ctx->pc == 0x4E7658u) {
        ctx->pc = 0x4E7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7654u;
        // 0x4e7658: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E765Cu;
        goto label_4e765c;
    }
    ctx->pc = 0x4E7654u;
    {
        const bool branch_taken_0x4e7654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7654) {
            ctx->pc = 0x4E7658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7654u;
            // 0x4e7658: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7870u;
            goto label_4e7870;
        }
    }
    ctx->pc = 0x4E765Cu;
label_4e765c:
    // 0x4e765c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e765cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e7660:
    // 0x4e7660: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e7660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e7664:
    // 0x4e7664: 0x0  nop
    ctx->pc = 0x4e7664u;
    // NOP
label_4e7668:
    // 0x4e7668: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e766c:
    // 0x4e766c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e7670:
    // 0x4e7670: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e7674:
    if (ctx->pc == 0x4E7674u) {
        ctx->pc = 0x4E7678u;
        goto label_4e7678;
    }
    ctx->pc = 0x4E7670u;
    {
        const bool branch_taken_0x4e7670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e7670) {
            ctx->pc = 0x4E775Cu;
            goto label_4e775c;
        }
    }
    ctx->pc = 0x4E7678u;
label_4e7678:
    // 0x4e7678: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e7678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e767c:
    // 0x4e767c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e7680:
    if (ctx->pc == 0x4E7680u) {
        ctx->pc = 0x4E7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E767Cu;
        // 0x4e7680: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7684u;
        goto label_4e7684;
    }
    ctx->pc = 0x4E767Cu;
    {
        const bool branch_taken_0x4e767c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e767c) {
            ctx->pc = 0x4E7680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E767Cu;
            // 0x4e7680: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E769Cu;
            goto label_4e769c;
        }
    }
    ctx->pc = 0x4E7684u;
label_4e7684:
    // 0x4e7684: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e7684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e7688:
    // 0x4e7688: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e768c:
    if (ctx->pc == 0x4E768Cu) {
        ctx->pc = 0x4E768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7688u;
        // 0x4e768c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7690u;
        goto label_4e7690;
    }
    ctx->pc = 0x4E7688u;
    {
        const bool branch_taken_0x4e7688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7688) {
            ctx->pc = 0x4E768Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7688u;
            // 0x4e768c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E769Cu;
            goto label_4e769c;
        }
    }
    ctx->pc = 0x4E7690u;
label_4e7690:
    // 0x4e7690: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e7690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e7694:
    // 0x4e7694: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e7698:
    if (ctx->pc == 0x4E7698u) {
        ctx->pc = 0x4E7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7694u;
        // 0x4e7698: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E769Cu;
        goto label_4e769c;
    }
    ctx->pc = 0x4E7694u;
    {
        const bool branch_taken_0x4e7694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7694u;
        // 0x4e7698: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7694) {
            ctx->pc = 0x4E7778u;
            goto label_4e7778;
        }
    }
    ctx->pc = 0x4E769Cu;
label_4e769c:
    // 0x4e769c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e769cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e76a0:
    // 0x4e76a0: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e76a4:
    if (ctx->pc == 0x4E76A4u) {
        ctx->pc = 0x4E76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76A0u;
        // 0x4e76a4: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E76A8u;
        goto label_4e76a8;
    }
    ctx->pc = 0x4E76A0u;
    {
        const bool branch_taken_0x4e76a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e76a0) {
            ctx->pc = 0x4E76A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E76A0u;
            // 0x4e76a4: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E76F8u;
            goto label_4e76f8;
        }
    }
    ctx->pc = 0x4E76A8u;
label_4e76a8:
    // 0x4e76a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e76ac:
    // 0x4e76ac: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e76acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e76b0:
    // 0x4e76b0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e76b4:
    // 0x4e76b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e76b8:
    // 0x4e76b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e76bc:
    if (ctx->pc == 0x4E76BCu) {
        ctx->pc = 0x4E76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76B8u;
        // 0x4e76bc: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E76C0u;
        goto label_4e76c0;
    }
    ctx->pc = 0x4E76B8u;
    {
        const bool branch_taken_0x4e76b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e76b8) {
            ctx->pc = 0x4E76BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E76B8u;
            // 0x4e76bc: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E76C0u;
            goto label_4e76c0;
        }
    }
    ctx->pc = 0x4E76C0u;
label_4e76c0:
    // 0x4e76c0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e76c4:
    // 0x4e76c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e76c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e76c8:
    // 0x4e76c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e76cc:
    // 0x4e76cc: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e76d0:
    if (ctx->pc == 0x4E76D0u) {
        ctx->pc = 0x4E76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76CCu;
        // 0x4e76d0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E76D4u;
        goto label_4e76d4;
    }
    ctx->pc = 0x4E76CCu;
    {
        const bool branch_taken_0x4e76cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e76cc) {
            ctx->pc = 0x4E76D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E76CCu;
            // 0x4e76d0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E76DCu;
            goto label_4e76dc;
        }
    }
    ctx->pc = 0x4E76D4u;
label_4e76d4:
    // 0x4e76d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e76d8:
    if (ctx->pc == 0x4E76D8u) {
        ctx->pc = 0x4E76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76D4u;
        // 0x4e76d8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E76DCu;
        goto label_4e76dc;
    }
    ctx->pc = 0x4E76D4u;
    {
        const bool branch_taken_0x4e76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76D4u;
        // 0x4e76d8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e76d4) {
            ctx->pc = 0x4E76ECu;
            goto label_4e76ec;
        }
    }
    ctx->pc = 0x4E76DCu;
label_4e76dc:
    // 0x4e76dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e76e0:
    // 0x4e76e0: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e76e4:
    if (ctx->pc == 0x4E76E4u) {
        ctx->pc = 0x4E76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E76E0u;
        // 0x4e76e4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E76E8u;
        goto label_4e76e8;
    }
    ctx->pc = 0x4E76E0u;
    {
        const bool branch_taken_0x4e76e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e76e0) {
            ctx->pc = 0x4E76E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E76E0u;
            // 0x4e76e4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E76ECu;
            goto label_4e76ec;
        }
    }
    ctx->pc = 0x4E76E8u;
label_4e76e8:
    // 0x4e76e8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e76ec:
    // 0x4e76ec: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e76f0:
    // 0x4e76f0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e76f4:
    // 0x4e76f4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e76f8:
    // 0x4e76f8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e76f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e76fc:
    // 0x4e76fc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e7700:
    // 0x4e7700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e7704:
    // 0x4e7704: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e7704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e7708:
    // 0x4e7708: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e7708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e770c:
    // 0x4e770c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e7710:
    // 0x4e7710: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e7710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e7714:
    // 0x4e7714: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e7714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e7718:
    // 0x4e7718: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e7718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e771c:
    // 0x4e771c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e7720:
    // 0x4e7720: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e7724:
    if (ctx->pc == 0x4E7724u) {
        ctx->pc = 0x4E7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7720u;
        // 0x4e7724: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7728u;
        goto label_4e7728;
    }
    ctx->pc = 0x4E7720u;
    {
        const bool branch_taken_0x4e7720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7720) {
            ctx->pc = 0x4E7724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7720u;
            // 0x4e7724: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7728u;
            goto label_4e7728;
        }
    }
    ctx->pc = 0x4E7728u;
label_4e7728:
    // 0x4e7728: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e7728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e772c:
    // 0x4e772c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e772cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e7730:
    // 0x4e7730: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e7730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e7734:
    // 0x4e7734: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e7738:
    if (ctx->pc == 0x4E7738u) {
        ctx->pc = 0x4E7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7734u;
        // 0x4e7738: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E773Cu;
        goto label_4e773c;
    }
    ctx->pc = 0x4E7734u;
    {
        const bool branch_taken_0x4e7734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e7734) {
            ctx->pc = 0x4E7738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7734u;
            // 0x4e7738: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7744u;
            goto label_4e7744;
        }
    }
    ctx->pc = 0x4E773Cu;
label_4e773c:
    // 0x4e773c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e7740:
    if (ctx->pc == 0x4E7740u) {
        ctx->pc = 0x4E7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E773Cu;
        // 0x4e7740: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7744u;
        goto label_4e7744;
    }
    ctx->pc = 0x4E773Cu;
    {
        const bool branch_taken_0x4e773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E773Cu;
        // 0x4e7740: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e773c) {
            ctx->pc = 0x4E7754u;
            goto label_4e7754;
        }
    }
    ctx->pc = 0x4E7744u;
label_4e7744:
    // 0x4e7744: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e7748:
    // 0x4e7748: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e774c:
    if (ctx->pc == 0x4E774Cu) {
        ctx->pc = 0x4E774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7748u;
        // 0x4e774c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7750u;
        goto label_4e7750;
    }
    ctx->pc = 0x4E7748u;
    {
        const bool branch_taken_0x4e7748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e7748) {
            ctx->pc = 0x4E774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7748u;
            // 0x4e774c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7754u;
            goto label_4e7754;
        }
    }
    ctx->pc = 0x4E7750u;
label_4e7750:
    // 0x4e7750: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e7750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e7754:
    // 0x4e7754: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e7758:
    if (ctx->pc == 0x4E7758u) {
        ctx->pc = 0x4E7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7754u;
        // 0x4e7758: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E775Cu;
        goto label_4e775c;
    }
    ctx->pc = 0x4E7754u;
    {
        const bool branch_taken_0x4e7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7754u;
        // 0x4e7758: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7754) {
            ctx->pc = 0x4E784Cu;
            goto label_4e784c;
        }
    }
    ctx->pc = 0x4E775Cu;
label_4e775c:
    // 0x4e775c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e7760:
    if (ctx->pc == 0x4E7760u) {
        ctx->pc = 0x4E7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E775Cu;
        // 0x4e7760: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7764u;
        goto label_4e7764;
    }
    ctx->pc = 0x4E775Cu;
    {
        const bool branch_taken_0x4e775c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e775c) {
            ctx->pc = 0x4E7760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E775Cu;
            // 0x4e7760: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7790u;
            goto label_4e7790;
        }
    }
    ctx->pc = 0x4E7764u;
label_4e7764:
    // 0x4e7764: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e7768:
    // 0x4e7768: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e776c:
    if (ctx->pc == 0x4E776Cu) {
        ctx->pc = 0x4E776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7768u;
        // 0x4e776c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7770u;
        goto label_4e7770;
    }
    ctx->pc = 0x4E7768u;
    {
        const bool branch_taken_0x4e7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7768) {
            ctx->pc = 0x4E776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7768u;
            // 0x4e776c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7790u;
            goto label_4e7790;
        }
    }
    ctx->pc = 0x4E7770u;
label_4e7770:
    // 0x4e7770: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e7770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e7774:
    // 0x4e7774: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e7774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e7778:
    // 0x4e7778: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e777c:
    // 0x4e777c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e7780:
    // 0x4e7780: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e7780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e7784:
    // 0x4e7784: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e7788:
    // 0x4e7788: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e778c:
    if (ctx->pc == 0x4E778Cu) {
        ctx->pc = 0x4E778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7788u;
        // 0x4e778c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7790u;
        goto label_4e7790;
    }
    ctx->pc = 0x4E7788u;
    {
        const bool branch_taken_0x4e7788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7788u;
        // 0x4e778c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7788) {
            ctx->pc = 0x4E7850u;
            goto label_4e7850;
        }
    }
    ctx->pc = 0x4E7790u;
label_4e7790:
    // 0x4e7790: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e7790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e7794:
    // 0x4e7794: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e7798:
    if (ctx->pc == 0x4E7798u) {
        ctx->pc = 0x4E7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7794u;
        // 0x4e7798: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E779Cu;
        goto label_4e779c;
    }
    ctx->pc = 0x4E7794u;
    {
        const bool branch_taken_0x4e7794 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e7794) {
            ctx->pc = 0x4E7798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7794u;
            // 0x4e7798: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E77ECu;
            goto label_4e77ec;
        }
    }
    ctx->pc = 0x4E779Cu;
label_4e779c:
    // 0x4e779c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e77a0:
    // 0x4e77a0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e77a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e77a4:
    // 0x4e77a4: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e77a8:
    // 0x4e77a8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e77ac:
    // 0x4e77ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e77b0:
    if (ctx->pc == 0x4E77B0u) {
        ctx->pc = 0x4E77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E77ACu;
        // 0x4e77b0: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E77B4u;
        goto label_4e77b4;
    }
    ctx->pc = 0x4E77ACu;
    {
        const bool branch_taken_0x4e77ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e77ac) {
            ctx->pc = 0x4E77B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E77ACu;
            // 0x4e77b0: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E77B4u;
            goto label_4e77b4;
        }
    }
    ctx->pc = 0x4E77B4u;
label_4e77b4:
    // 0x4e77b4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e77b8:
    // 0x4e77b8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e77bc:
    // 0x4e77bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e77c0:
    // 0x4e77c0: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e77c4:
    if (ctx->pc == 0x4E77C4u) {
        ctx->pc = 0x4E77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E77C0u;
        // 0x4e77c4: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E77C8u;
        goto label_4e77c8;
    }
    ctx->pc = 0x4E77C0u;
    {
        const bool branch_taken_0x4e77c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e77c0) {
            ctx->pc = 0x4E77C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E77C0u;
            // 0x4e77c4: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E77D0u;
            goto label_4e77d0;
        }
    }
    ctx->pc = 0x4E77C8u;
label_4e77c8:
    // 0x4e77c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e77cc:
    if (ctx->pc == 0x4E77CCu) {
        ctx->pc = 0x4E77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E77C8u;
        // 0x4e77cc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E77D0u;
        goto label_4e77d0;
    }
    ctx->pc = 0x4E77C8u;
    {
        const bool branch_taken_0x4e77c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E77C8u;
        // 0x4e77cc: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e77c8) {
            ctx->pc = 0x4E77E0u;
            goto label_4e77e0;
        }
    }
    ctx->pc = 0x4E77D0u;
label_4e77d0:
    // 0x4e77d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e77d4:
    // 0x4e77d4: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e77d8:
    if (ctx->pc == 0x4E77D8u) {
        ctx->pc = 0x4E77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E77D4u;
        // 0x4e77d8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E77DCu;
        goto label_4e77dc;
    }
    ctx->pc = 0x4E77D4u;
    {
        const bool branch_taken_0x4e77d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e77d4) {
            ctx->pc = 0x4E77D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E77D4u;
            // 0x4e77d8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E77E0u;
            goto label_4e77e0;
        }
    }
    ctx->pc = 0x4E77DCu;
label_4e77dc:
    // 0x4e77dc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e77e0:
    // 0x4e77e0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e77e4:
    // 0x4e77e4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e77e8:
    // 0x4e77e8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e77ec:
    // 0x4e77ec: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e77f0:
    // 0x4e77f0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e77f4:
    // 0x4e77f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e77f8:
    // 0x4e77f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e77fc:
    // 0x4e77fc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e7800:
    // 0x4e7800: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e7800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e7804:
    // 0x4e7804: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e7804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e7808:
    // 0x4e7808: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e780c:
    // 0x4e780c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e7810:
    // 0x4e7810: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e7814:
    // 0x4e7814: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e7818:
    if (ctx->pc == 0x4E7818u) {
        ctx->pc = 0x4E7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7814u;
        // 0x4e7818: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E781Cu;
        goto label_4e781c;
    }
    ctx->pc = 0x4E7814u;
    {
        const bool branch_taken_0x4e7814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7814) {
            ctx->pc = 0x4E7818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7814u;
            // 0x4e7818: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E781Cu;
            goto label_4e781c;
        }
    }
    ctx->pc = 0x4E781Cu;
label_4e781c:
    // 0x4e781c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e7820:
    // 0x4e7820: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e7820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e7824:
    // 0x4e7824: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e7824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e7828:
    // 0x4e7828: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e782c:
    if (ctx->pc == 0x4E782Cu) {
        ctx->pc = 0x4E782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7828u;
        // 0x4e782c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7830u;
        goto label_4e7830;
    }
    ctx->pc = 0x4E7828u;
    {
        const bool branch_taken_0x4e7828 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e7828) {
            ctx->pc = 0x4E782Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7828u;
            // 0x4e782c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7838u;
            goto label_4e7838;
        }
    }
    ctx->pc = 0x4E7830u;
label_4e7830:
    // 0x4e7830: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e7834:
    if (ctx->pc == 0x4E7834u) {
        ctx->pc = 0x4E7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7830u;
        // 0x4e7834: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7838u;
        goto label_4e7838;
    }
    ctx->pc = 0x4E7830u;
    {
        const bool branch_taken_0x4e7830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7830u;
        // 0x4e7834: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7830) {
            ctx->pc = 0x4E7848u;
            goto label_4e7848;
        }
    }
    ctx->pc = 0x4E7838u;
label_4e7838:
    // 0x4e7838: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e783c:
    // 0x4e783c: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e7840:
    if (ctx->pc == 0x4E7840u) {
        ctx->pc = 0x4E7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E783Cu;
        // 0x4e7840: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7844u;
        goto label_4e7844;
    }
    ctx->pc = 0x4E783Cu;
    {
        const bool branch_taken_0x4e783c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e783c) {
            ctx->pc = 0x4E7840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E783Cu;
            // 0x4e7840: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7848u;
            goto label_4e7848;
        }
    }
    ctx->pc = 0x4E7844u;
label_4e7844:
    // 0x4e7844: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e7844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e7848:
    // 0x4e7848: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e7848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e784c:
    // 0x4e784c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e784cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e7850:
    // 0x4e7850: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e7854:
    // 0x4e7854: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e7858:
    if (ctx->pc == 0x4E7858u) {
        ctx->pc = 0x4E7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7854u;
        // 0x4e7858: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E785Cu;
        goto label_4e785c;
    }
    ctx->pc = 0x4E7854u;
    {
        const bool branch_taken_0x4e7854 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e7854) {
            ctx->pc = 0x4E7858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7854u;
            // 0x4e7858: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7870u;
            goto label_4e7870;
        }
    }
    ctx->pc = 0x4E785Cu;
label_4e785c:
    // 0x4e785c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e7860:
    // 0x4e7860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e7860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7864:
    // 0x4e7864: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e7868:
    if (ctx->pc == 0x4E7868u) {
        ctx->pc = 0x4E7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7864u;
        // 0x4e7868: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E786Cu;
        goto label_4e786c;
    }
    ctx->pc = 0x4E7864u;
    {
        const bool branch_taken_0x4e7864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7864) {
            ctx->pc = 0x4E7868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7864u;
            // 0x4e7868: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7668;
        }
    }
    ctx->pc = 0x4E786Cu;
label_4e786c:
    // 0x4e786c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e786cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e7870:
    // 0x4e7870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e7870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e7874:
    // 0x4e7874: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e7874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e7878:
    // 0x4e7878: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e7878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e787c:
    // 0x4e787c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e787cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e7880:
    // 0x4e7880: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e7880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7884:
    // 0x4e7884: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e7888:
    // 0x4e7888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e7888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e788c:
    // 0x4e788c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e788cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e7890:
    // 0x4e7890: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e7890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e7894:
    // 0x4e7894: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e7894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e7898:
    // 0x4e7898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e7898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e789c:
    // 0x4e789c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e789cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e78a0:
    // 0x4e78a0: 0x3e00008  jr          $ra
label_4e78a4:
    if (ctx->pc == 0x4E78A4u) {
        ctx->pc = 0x4E78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E78A0u;
        // 0x4e78a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E78A8u;
        goto label_fallthrough_0x4e78a0;
    }
    ctx->pc = 0x4E78A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E78A0u;
        // 0x4e78a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E78A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e78a0:
    ctx->pc = 0x4E78A8u;
}
