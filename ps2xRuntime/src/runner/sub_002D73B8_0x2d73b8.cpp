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

// Function: sub_002D73B8
// Address: 0x2d73b8 - 0x2d7878
void sub_002D73B8_0x2d73b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D73B8_0x2d73b8");
#endif

    switch (ctx->pc) {
        case 0x2d73b8u: goto label_2d73b8;
        case 0x2d73bcu: goto label_2d73bc;
        case 0x2d73c0u: goto label_2d73c0;
        case 0x2d73c4u: goto label_2d73c4;
        case 0x2d73c8u: goto label_2d73c8;
        case 0x2d73ccu: goto label_2d73cc;
        case 0x2d73d0u: goto label_2d73d0;
        case 0x2d73d4u: goto label_2d73d4;
        case 0x2d73d8u: goto label_2d73d8;
        case 0x2d73dcu: goto label_2d73dc;
        case 0x2d73e0u: goto label_2d73e0;
        case 0x2d73e4u: goto label_2d73e4;
        case 0x2d73e8u: goto label_2d73e8;
        case 0x2d73ecu: goto label_2d73ec;
        case 0x2d73f0u: goto label_2d73f0;
        case 0x2d73f4u: goto label_2d73f4;
        case 0x2d73f8u: goto label_2d73f8;
        case 0x2d73fcu: goto label_2d73fc;
        case 0x2d7400u: goto label_2d7400;
        case 0x2d7404u: goto label_2d7404;
        case 0x2d7408u: goto label_2d7408;
        case 0x2d740cu: goto label_2d740c;
        case 0x2d7410u: goto label_2d7410;
        case 0x2d7414u: goto label_2d7414;
        case 0x2d7418u: goto label_2d7418;
        case 0x2d741cu: goto label_2d741c;
        case 0x2d7420u: goto label_2d7420;
        case 0x2d7424u: goto label_2d7424;
        case 0x2d7428u: goto label_2d7428;
        case 0x2d742cu: goto label_2d742c;
        case 0x2d7430u: goto label_2d7430;
        case 0x2d7434u: goto label_2d7434;
        case 0x2d7438u: goto label_2d7438;
        case 0x2d743cu: goto label_2d743c;
        case 0x2d7440u: goto label_2d7440;
        case 0x2d7444u: goto label_2d7444;
        case 0x2d7448u: goto label_2d7448;
        case 0x2d744cu: goto label_2d744c;
        case 0x2d7450u: goto label_2d7450;
        case 0x2d7454u: goto label_2d7454;
        case 0x2d7458u: goto label_2d7458;
        case 0x2d745cu: goto label_2d745c;
        case 0x2d7460u: goto label_2d7460;
        case 0x2d7464u: goto label_2d7464;
        case 0x2d7468u: goto label_2d7468;
        case 0x2d746cu: goto label_2d746c;
        case 0x2d7470u: goto label_2d7470;
        case 0x2d7474u: goto label_2d7474;
        case 0x2d7478u: goto label_2d7478;
        case 0x2d747cu: goto label_2d747c;
        case 0x2d7480u: goto label_2d7480;
        case 0x2d7484u: goto label_2d7484;
        case 0x2d7488u: goto label_2d7488;
        case 0x2d748cu: goto label_2d748c;
        case 0x2d7490u: goto label_2d7490;
        case 0x2d7494u: goto label_2d7494;
        case 0x2d7498u: goto label_2d7498;
        case 0x2d749cu: goto label_2d749c;
        case 0x2d74a0u: goto label_2d74a0;
        case 0x2d74a4u: goto label_2d74a4;
        case 0x2d74a8u: goto label_2d74a8;
        case 0x2d74acu: goto label_2d74ac;
        case 0x2d74b0u: goto label_2d74b0;
        case 0x2d74b4u: goto label_2d74b4;
        case 0x2d74b8u: goto label_2d74b8;
        case 0x2d74bcu: goto label_2d74bc;
        case 0x2d74c0u: goto label_2d74c0;
        case 0x2d74c4u: goto label_2d74c4;
        case 0x2d74c8u: goto label_2d74c8;
        case 0x2d74ccu: goto label_2d74cc;
        case 0x2d74d0u: goto label_2d74d0;
        case 0x2d74d4u: goto label_2d74d4;
        case 0x2d74d8u: goto label_2d74d8;
        case 0x2d74dcu: goto label_2d74dc;
        case 0x2d74e0u: goto label_2d74e0;
        case 0x2d74e4u: goto label_2d74e4;
        case 0x2d74e8u: goto label_2d74e8;
        case 0x2d74ecu: goto label_2d74ec;
        case 0x2d74f0u: goto label_2d74f0;
        case 0x2d74f4u: goto label_2d74f4;
        case 0x2d74f8u: goto label_2d74f8;
        case 0x2d74fcu: goto label_2d74fc;
        case 0x2d7500u: goto label_2d7500;
        case 0x2d7504u: goto label_2d7504;
        case 0x2d7508u: goto label_2d7508;
        case 0x2d750cu: goto label_2d750c;
        case 0x2d7510u: goto label_2d7510;
        case 0x2d7514u: goto label_2d7514;
        case 0x2d7518u: goto label_2d7518;
        case 0x2d751cu: goto label_2d751c;
        case 0x2d7520u: goto label_2d7520;
        case 0x2d7524u: goto label_2d7524;
        case 0x2d7528u: goto label_2d7528;
        case 0x2d752cu: goto label_2d752c;
        case 0x2d7530u: goto label_2d7530;
        case 0x2d7534u: goto label_2d7534;
        case 0x2d7538u: goto label_2d7538;
        case 0x2d753cu: goto label_2d753c;
        case 0x2d7540u: goto label_2d7540;
        case 0x2d7544u: goto label_2d7544;
        case 0x2d7548u: goto label_2d7548;
        case 0x2d754cu: goto label_2d754c;
        case 0x2d7550u: goto label_2d7550;
        case 0x2d7554u: goto label_2d7554;
        case 0x2d7558u: goto label_2d7558;
        case 0x2d755cu: goto label_2d755c;
        case 0x2d7560u: goto label_2d7560;
        case 0x2d7564u: goto label_2d7564;
        case 0x2d7568u: goto label_2d7568;
        case 0x2d756cu: goto label_2d756c;
        case 0x2d7570u: goto label_2d7570;
        case 0x2d7574u: goto label_2d7574;
        case 0x2d7578u: goto label_2d7578;
        case 0x2d757cu: goto label_2d757c;
        case 0x2d7580u: goto label_2d7580;
        case 0x2d7584u: goto label_2d7584;
        case 0x2d7588u: goto label_2d7588;
        case 0x2d758cu: goto label_2d758c;
        case 0x2d7590u: goto label_2d7590;
        case 0x2d7594u: goto label_2d7594;
        case 0x2d7598u: goto label_2d7598;
        case 0x2d759cu: goto label_2d759c;
        case 0x2d75a0u: goto label_2d75a0;
        case 0x2d75a4u: goto label_2d75a4;
        case 0x2d75a8u: goto label_2d75a8;
        case 0x2d75acu: goto label_2d75ac;
        case 0x2d75b0u: goto label_2d75b0;
        case 0x2d75b4u: goto label_2d75b4;
        case 0x2d75b8u: goto label_2d75b8;
        case 0x2d75bcu: goto label_2d75bc;
        case 0x2d75c0u: goto label_2d75c0;
        case 0x2d75c4u: goto label_2d75c4;
        case 0x2d75c8u: goto label_2d75c8;
        case 0x2d75ccu: goto label_2d75cc;
        case 0x2d75d0u: goto label_2d75d0;
        case 0x2d75d4u: goto label_2d75d4;
        case 0x2d75d8u: goto label_2d75d8;
        case 0x2d75dcu: goto label_2d75dc;
        case 0x2d75e0u: goto label_2d75e0;
        case 0x2d75e4u: goto label_2d75e4;
        case 0x2d75e8u: goto label_2d75e8;
        case 0x2d75ecu: goto label_2d75ec;
        case 0x2d75f0u: goto label_2d75f0;
        case 0x2d75f4u: goto label_2d75f4;
        case 0x2d75f8u: goto label_2d75f8;
        case 0x2d75fcu: goto label_2d75fc;
        case 0x2d7600u: goto label_2d7600;
        case 0x2d7604u: goto label_2d7604;
        case 0x2d7608u: goto label_2d7608;
        case 0x2d760cu: goto label_2d760c;
        case 0x2d7610u: goto label_2d7610;
        case 0x2d7614u: goto label_2d7614;
        case 0x2d7618u: goto label_2d7618;
        case 0x2d761cu: goto label_2d761c;
        case 0x2d7620u: goto label_2d7620;
        case 0x2d7624u: goto label_2d7624;
        case 0x2d7628u: goto label_2d7628;
        case 0x2d762cu: goto label_2d762c;
        case 0x2d7630u: goto label_2d7630;
        case 0x2d7634u: goto label_2d7634;
        case 0x2d7638u: goto label_2d7638;
        case 0x2d763cu: goto label_2d763c;
        case 0x2d7640u: goto label_2d7640;
        case 0x2d7644u: goto label_2d7644;
        case 0x2d7648u: goto label_2d7648;
        case 0x2d764cu: goto label_2d764c;
        case 0x2d7650u: goto label_2d7650;
        case 0x2d7654u: goto label_2d7654;
        case 0x2d7658u: goto label_2d7658;
        case 0x2d765cu: goto label_2d765c;
        case 0x2d7660u: goto label_2d7660;
        case 0x2d7664u: goto label_2d7664;
        case 0x2d7668u: goto label_2d7668;
        case 0x2d766cu: goto label_2d766c;
        case 0x2d7670u: goto label_2d7670;
        case 0x2d7674u: goto label_2d7674;
        case 0x2d7678u: goto label_2d7678;
        case 0x2d767cu: goto label_2d767c;
        case 0x2d7680u: goto label_2d7680;
        case 0x2d7684u: goto label_2d7684;
        case 0x2d7688u: goto label_2d7688;
        case 0x2d768cu: goto label_2d768c;
        case 0x2d7690u: goto label_2d7690;
        case 0x2d7694u: goto label_2d7694;
        case 0x2d7698u: goto label_2d7698;
        case 0x2d769cu: goto label_2d769c;
        case 0x2d76a0u: goto label_2d76a0;
        case 0x2d76a4u: goto label_2d76a4;
        case 0x2d76a8u: goto label_2d76a8;
        case 0x2d76acu: goto label_2d76ac;
        case 0x2d76b0u: goto label_2d76b0;
        case 0x2d76b4u: goto label_2d76b4;
        case 0x2d76b8u: goto label_2d76b8;
        case 0x2d76bcu: goto label_2d76bc;
        case 0x2d76c0u: goto label_2d76c0;
        case 0x2d76c4u: goto label_2d76c4;
        case 0x2d76c8u: goto label_2d76c8;
        case 0x2d76ccu: goto label_2d76cc;
        case 0x2d76d0u: goto label_2d76d0;
        case 0x2d76d4u: goto label_2d76d4;
        case 0x2d76d8u: goto label_2d76d8;
        case 0x2d76dcu: goto label_2d76dc;
        case 0x2d76e0u: goto label_2d76e0;
        case 0x2d76e4u: goto label_2d76e4;
        case 0x2d76e8u: goto label_2d76e8;
        case 0x2d76ecu: goto label_2d76ec;
        case 0x2d76f0u: goto label_2d76f0;
        case 0x2d76f4u: goto label_2d76f4;
        case 0x2d76f8u: goto label_2d76f8;
        case 0x2d76fcu: goto label_2d76fc;
        case 0x2d7700u: goto label_2d7700;
        case 0x2d7704u: goto label_2d7704;
        case 0x2d7708u: goto label_2d7708;
        case 0x2d770cu: goto label_2d770c;
        case 0x2d7710u: goto label_2d7710;
        case 0x2d7714u: goto label_2d7714;
        case 0x2d7718u: goto label_2d7718;
        case 0x2d771cu: goto label_2d771c;
        case 0x2d7720u: goto label_2d7720;
        case 0x2d7724u: goto label_2d7724;
        case 0x2d7728u: goto label_2d7728;
        case 0x2d772cu: goto label_2d772c;
        case 0x2d7730u: goto label_2d7730;
        case 0x2d7734u: goto label_2d7734;
        case 0x2d7738u: goto label_2d7738;
        case 0x2d773cu: goto label_2d773c;
        case 0x2d7740u: goto label_2d7740;
        case 0x2d7744u: goto label_2d7744;
        case 0x2d7748u: goto label_2d7748;
        case 0x2d774cu: goto label_2d774c;
        case 0x2d7750u: goto label_2d7750;
        case 0x2d7754u: goto label_2d7754;
        case 0x2d7758u: goto label_2d7758;
        case 0x2d775cu: goto label_2d775c;
        case 0x2d7760u: goto label_2d7760;
        case 0x2d7764u: goto label_2d7764;
        case 0x2d7768u: goto label_2d7768;
        case 0x2d776cu: goto label_2d776c;
        case 0x2d7770u: goto label_2d7770;
        case 0x2d7774u: goto label_2d7774;
        case 0x2d7778u: goto label_2d7778;
        case 0x2d777cu: goto label_2d777c;
        case 0x2d7780u: goto label_2d7780;
        case 0x2d7784u: goto label_2d7784;
        case 0x2d7788u: goto label_2d7788;
        case 0x2d778cu: goto label_2d778c;
        case 0x2d7790u: goto label_2d7790;
        case 0x2d7794u: goto label_2d7794;
        case 0x2d7798u: goto label_2d7798;
        case 0x2d779cu: goto label_2d779c;
        case 0x2d77a0u: goto label_2d77a0;
        case 0x2d77a4u: goto label_2d77a4;
        case 0x2d77a8u: goto label_2d77a8;
        case 0x2d77acu: goto label_2d77ac;
        case 0x2d77b0u: goto label_2d77b0;
        case 0x2d77b4u: goto label_2d77b4;
        case 0x2d77b8u: goto label_2d77b8;
        case 0x2d77bcu: goto label_2d77bc;
        case 0x2d77c0u: goto label_2d77c0;
        case 0x2d77c4u: goto label_2d77c4;
        case 0x2d77c8u: goto label_2d77c8;
        case 0x2d77ccu: goto label_2d77cc;
        case 0x2d77d0u: goto label_2d77d0;
        case 0x2d77d4u: goto label_2d77d4;
        case 0x2d77d8u: goto label_2d77d8;
        case 0x2d77dcu: goto label_2d77dc;
        case 0x2d77e0u: goto label_2d77e0;
        case 0x2d77e4u: goto label_2d77e4;
        case 0x2d77e8u: goto label_2d77e8;
        case 0x2d77ecu: goto label_2d77ec;
        case 0x2d77f0u: goto label_2d77f0;
        case 0x2d77f4u: goto label_2d77f4;
        case 0x2d77f8u: goto label_2d77f8;
        case 0x2d77fcu: goto label_2d77fc;
        case 0x2d7800u: goto label_2d7800;
        case 0x2d7804u: goto label_2d7804;
        case 0x2d7808u: goto label_2d7808;
        case 0x2d780cu: goto label_2d780c;
        case 0x2d7810u: goto label_2d7810;
        case 0x2d7814u: goto label_2d7814;
        case 0x2d7818u: goto label_2d7818;
        case 0x2d781cu: goto label_2d781c;
        case 0x2d7820u: goto label_2d7820;
        case 0x2d7824u: goto label_2d7824;
        case 0x2d7828u: goto label_2d7828;
        case 0x2d782cu: goto label_2d782c;
        case 0x2d7830u: goto label_2d7830;
        case 0x2d7834u: goto label_2d7834;
        case 0x2d7838u: goto label_2d7838;
        case 0x2d783cu: goto label_2d783c;
        case 0x2d7840u: goto label_2d7840;
        case 0x2d7844u: goto label_2d7844;
        case 0x2d7848u: goto label_2d7848;
        case 0x2d784cu: goto label_2d784c;
        case 0x2d7850u: goto label_2d7850;
        case 0x2d7854u: goto label_2d7854;
        case 0x2d7858u: goto label_2d7858;
        case 0x2d785cu: goto label_2d785c;
        case 0x2d7860u: goto label_2d7860;
        case 0x2d7864u: goto label_2d7864;
        case 0x2d7868u: goto label_2d7868;
        case 0x2d786cu: goto label_2d786c;
        case 0x2d7870u: goto label_2d7870;
        case 0x2d7874u: goto label_2d7874;
        default: break;
    }

    ctx->pc = 0x2d73b8u;

label_2d73b8:
    // 0x2d73b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d73b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2d73bc:
    // 0x2d73bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d73bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2d73c0:
    // 0x2d73c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d73c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2d73c4:
    // 0x2d73c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d73c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d73c8:
    // 0x2d73c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2d73cc:
    // 0x2d73cc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d73ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d73d0:
    // 0x2d73d0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2d73d4:
    // 0x2d73d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d73d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2d73d8:
    // 0x2d73d8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2d73dc:
    // 0x2d73dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d73dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d73e0:
    // 0x2d73e0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2d73e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2d73e4:
    // 0x2d73e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d73e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d73e8:
    // 0x2d73e8: 0x92030043  lbu         $v1, 0x43($s0)
    ctx->pc = 0x2d73e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
label_2d73ec:
    // 0x2d73ec: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
label_2d73f0:
    if (ctx->pc == 0x2D73F0u) {
        ctx->pc = 0x2D73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73ECu;
        // 0x2d73f0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D73F4u;
        goto label_2d73f4;
    }
    ctx->pc = 0x2D73ECu;
    {
        const bool branch_taken_0x2d73ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73ECu;
        // 0x2d73f0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d73ec) {
            ctx->pc = 0x2D73FCu;
            goto label_2d73fc;
        }
    }
    ctx->pc = 0x2D73F4u;
label_2d73f4:
    // 0x2d73f4: 0xc0b5c38  jal         func_2D70E0
label_2d73f8:
    if (ctx->pc == 0x2D73F8u) {
        ctx->pc = 0x2D73FCu;
        goto label_2d73fc;
    }
    ctx->pc = 0x2D73F4u;
    SET_GPR_U32(ctx, 31, 0x2D73FCu);
    ctx->pc = 0x2D70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D70E0u, 0x2D73F4u, 0x2D73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73FCu;
label_2d73fc:
    // 0x2d73fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7400:
    // 0x2d7400: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2d7400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2d7404:
    // 0x2d7404: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2d7404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2d7408:
    // 0x2d7408: 0x54540022  bnel        $v0, $s4, . + 4 + (0x22 << 2)
label_2d740c:
    if (ctx->pc == 0x2D740Cu) {
        ctx->pc = 0x2D740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7408u;
        // 0x2d740c: 0x92110042  lbu         $s1, 0x42($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7410u;
        goto label_2d7410;
    }
    ctx->pc = 0x2D7408u;
    {
        const bool branch_taken_0x2d7408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d7408) {
            ctx->pc = 0x2D740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7408u;
            // 0x2d740c: 0x92110042  lbu         $s1, 0x42($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7494u;
            goto label_2d7494;
        }
    }
    ctx->pc = 0x2D7410u;
label_2d7410:
    // 0x2d7410: 0xc0a36c2  jal         func_28DB08
label_2d7414:
    if (ctx->pc == 0x2D7414u) {
        ctx->pc = 0x2D7418u;
        goto label_2d7418;
    }
    ctx->pc = 0x2D7410u;
    SET_GPR_U32(ctx, 31, 0x2D7418u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2D7410u, 0x2D7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7418u;
label_2d7418:
    // 0x2d7418: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d7418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d741c:
    // 0x2d741c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2d741cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2d7420:
    // 0x2d7420: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2d7420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d7424:
    // 0x2d7424: 0xa0f809  jalr        $a1
label_2d7428:
    if (ctx->pc == 0x2D7428u) {
        ctx->pc = 0x2D7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7424u;
        // 0x2d7428: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D742Cu;
        goto label_2d742c;
    }
    ctx->pc = 0x2D7424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2D742Cu);
        ctx->pc = 0x2D7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7424u;
        // 0x2d7428: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7424u, 0x2D742Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D742Cu;
label_2d742c:
    // 0x2d742c: 0x14540106  bne         $v0, $s4, . + 4 + (0x106 << 2)
label_2d7430:
    if (ctx->pc == 0x2D7430u) {
        ctx->pc = 0x2D7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D742Cu;
        // 0x2d7430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7434u;
        goto label_2d7434;
    }
    ctx->pc = 0x2D742Cu;
    {
        const bool branch_taken_0x2d742c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D742Cu;
        // 0x2d7430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d742c) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D7434u;
label_2d7434:
    // 0x2d7434: 0x8e4201a8  lw          $v0, 0x1A8($s2)
    ctx->pc = 0x2d7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_2d7438:
    // 0x2d7438: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2d7438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d743c:
    // 0x2d743c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d7440:
    // 0x2d7440: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
label_2d7444:
    if (ctx->pc == 0x2D7444u) {
        ctx->pc = 0x2D7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7440u;
        // 0x2d7444: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7448u;
        goto label_2d7448;
    }
    ctx->pc = 0x2D7440u;
    {
        const bool branch_taken_0x2d7440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7440u;
        // 0x2d7444: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7440) {
            ctx->pc = 0x2D7844u;
            goto label_2d7844;
        }
    }
    ctx->pc = 0x2D7448u;
label_2d7448:
    // 0x2d7448: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2d7448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2d744c:
    // 0x2d744c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2d744cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2d7450:
    // 0x2d7450: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2d7450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2d7454:
    // 0x2d7454: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d7454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d7458:
    // 0x2d7458: 0xc0cdb38  jal         func_336CE0
label_2d745c:
    if (ctx->pc == 0x2D745Cu) {
        ctx->pc = 0x2D745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7458u;
        // 0x2d745c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7460u;
        goto label_2d7460;
    }
    ctx->pc = 0x2D7458u;
    SET_GPR_U32(ctx, 31, 0x2D7460u);
    ctx->pc = 0x2D745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7458u;
    // 0x2d745c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D7458u, 0x2D7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7460u;
label_2d7460:
    // 0x2d7460: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2d7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d7464:
    // 0x2d7464: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d7464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2d7468:
    // 0x2d7468: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d7468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d746c:
    // 0x2d746c: 0x0  nop
    ctx->pc = 0x2d746cu;
    // NOP
label_2d7470:
    // 0x2d7470: 0x450000f5  bc1f        . + 4 + (0xF5 << 2)
label_2d7474:
    if (ctx->pc == 0x2D7474u) {
        ctx->pc = 0x2D7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7470u;
        // 0x2d7474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7478u;
        goto label_2d7478;
    }
    ctx->pc = 0x2D7470u;
    {
        const bool branch_taken_0x2d7470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7470u;
        // 0x2d7474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7470) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D7478u;
label_2d7478:
    // 0x2d7478: 0xc0a36c2  jal         func_28DB08
label_2d747c:
    if (ctx->pc == 0x2D747Cu) {
        ctx->pc = 0x2D747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7478u;
        // 0x2d747c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7480u;
        goto label_2d7480;
    }
    ctx->pc = 0x2D7478u;
    SET_GPR_U32(ctx, 31, 0x2D7480u);
    ctx->pc = 0x2D747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7478u;
    // 0x2d747c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2D7478u, 0x2D7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7480u;
label_2d7480:
    // 0x2d7480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7484:
    // 0x2d7484: 0xc0bf0fa  jal         func_2FC3E8
label_2d7488:
    if (ctx->pc == 0x2D7488u) {
        ctx->pc = 0x2D7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7484u;
        // 0x2d7488: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D748Cu;
        goto label_2d748c;
    }
    ctx->pc = 0x2D7484u;
    SET_GPR_U32(ctx, 31, 0x2D748Cu);
    ctx->pc = 0x2D7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7484u;
    // 0x2d7488: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2D7484u, 0x2D748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D748Cu;
label_2d748c:
    // 0x2d748c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_2d7490:
    if (ctx->pc == 0x2D7490u) {
        ctx->pc = 0x2D7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D748Cu;
        // 0x2d7490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7494u;
        goto label_2d7494;
    }
    ctx->pc = 0x2D748Cu;
    {
        const bool branch_taken_0x2d748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D748Cu;
        // 0x2d7490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d748c) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D7494u;
label_2d7494:
    // 0x2d7494: 0x162000c3  bnez        $s1, . + 4 + (0xC3 << 2)
label_2d7498:
    if (ctx->pc == 0x2D7498u) {
        ctx->pc = 0x2D7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7494u;
        // 0x2d7498: 0x2405fff6  addiu       $a1, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D749Cu;
        goto label_2d749c;
    }
    ctx->pc = 0x2D7494u;
    {
        const bool branch_taken_0x2d7494 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7494u;
        // 0x2d7498: 0x2405fff6  addiu       $a1, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7494) {
            ctx->pc = 0x2D77A4u;
            goto label_2d77a4;
        }
    }
    ctx->pc = 0x2D749Cu;
label_2d749c:
    // 0x2d749c: 0xc0a337e  jal         func_28CDF8
label_2d74a0:
    if (ctx->pc == 0x2D74A0u) {
        ctx->pc = 0x2D74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D749Cu;
        // 0x2d74a0: 0x26510090  addiu       $s1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D74A4u;
        goto label_2d74a4;
    }
    ctx->pc = 0x2D749Cu;
    SET_GPR_U32(ctx, 31, 0x2D74A4u);
    ctx->pc = 0x2D74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D749Cu;
    // 0x2d74a0: 0x26510090  addiu       $s1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D749Cu, 0x2D74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74A4u;
label_2d74a4:
    // 0x2d74a4: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2d74a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2d74a8:
    // 0x2d74a8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2d74ac:
    // 0x2d74ac: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x2d74acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d74b0:
    // 0x2d74b0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2d74b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2d74b4:
    // 0x2d74b4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d74b8:
    // 0x2d74b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d74b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d74bc:
    // 0x2d74bc: 0xc0cdb38  jal         func_336CE0
label_2d74c0:
    if (ctx->pc == 0x2D74C0u) {
        ctx->pc = 0x2D74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74BCu;
        // 0x2d74c0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D74C4u;
        goto label_2d74c4;
    }
    ctx->pc = 0x2D74BCu;
    SET_GPR_U32(ctx, 31, 0x2D74C4u);
    ctx->pc = 0x2D74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D74BCu;
    // 0x2d74c0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D74BCu, 0x2D74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74C4u;
label_2d74c4:
    // 0x2d74c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2d74c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2d74c8:
    // 0x2d74c8: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2d74c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_2d74cc:
    // 0x2d74cc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2d74ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2d74d0:
    // 0x2d74d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d74d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d74d4:
    // 0x2d74d4: 0x0  nop
    ctx->pc = 0x2d74d4u;
    // NOP
label_2d74d8:
    // 0x2d74d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d74d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d74dc:
    // 0x2d74dc: 0x0  nop
    ctx->pc = 0x2d74dcu;
    // NOP
label_2d74e0:
    // 0x2d74e0: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
label_2d74e4:
    if (ctx->pc == 0x2D74E4u) {
        ctx->pc = 0x2D74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74E0u;
        // 0x2d74e4: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D74E8u;
        goto label_2d74e8;
    }
    ctx->pc = 0x2D74E0u;
    {
        const bool branch_taken_0x2d74e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d74e0) {
            ctx->pc = 0x2D74E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D74E0u;
            // 0x2d74e4: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D75BCu;
            goto label_2d75bc;
        }
    }
    ctx->pc = 0x2D74E8u;
label_2d74e8:
    // 0x2d74e8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2d74e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d74ec:
    // 0x2d74ec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d74ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2d74f0:
    // 0x2d74f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d74f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d74f4:
    // 0x2d74f4: 0x0  nop
    ctx->pc = 0x2d74f4u;
    // NOP
label_2d74f8:
    // 0x2d74f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2d74fc:
    if (ctx->pc == 0x2D74FCu) {
        ctx->pc = 0x2D74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74F8u;
        // 0x2d74fc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7500u;
        goto label_2d7500;
    }
    ctx->pc = 0x2D74F8u;
    {
        const bool branch_taken_0x2d74f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74F8u;
        // 0x2d74fc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74f8) {
            ctx->pc = 0x2D7504u;
            goto label_2d7504;
        }
    }
    ctx->pc = 0x2D7500u;
label_2d7500:
    // 0x2d7500: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2d7500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d7504:
    // 0x2d7504: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d7504u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2d7508:
    // 0x2d7508: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d7508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2d750c:
    // 0x2d750c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2d750cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2d7510:
    // 0x2d7510: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2d7510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2d7514:
    // 0x2d7514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d7518:
    // 0x2d7518: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d751c:
    // 0x2d751c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d751cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d7520:
    // 0x2d7520: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2d7520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2d7524:
    // 0x2d7524: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2d7524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2d7528:
    // 0x2d7528: 0xc1067b8  jal         func_419EE0
label_2d752c:
    if (ctx->pc == 0x2D752Cu) {
        ctx->pc = 0x2D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7528u;
        // 0x2d752c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7530u;
        goto label_2d7530;
    }
    ctx->pc = 0x2D7528u;
    SET_GPR_U32(ctx, 31, 0x2D7530u);
    ctx->pc = 0x2D752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7528u;
    // 0x2d752c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2D7528u, 0x2D7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7530u;
label_2d7530:
    // 0x2d7530: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2d7534:
    if (ctx->pc == 0x2D7534u) {
        ctx->pc = 0x2D7538u;
        goto label_2d7538;
    }
    ctx->pc = 0x2D7530u;
    {
        const bool branch_taken_0x2d7530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7530) {
            ctx->pc = 0x2D756Cu;
            goto label_2d756c;
        }
    }
    ctx->pc = 0x2D7538u;
label_2d7538:
    // 0x2d7538: 0xc087502  jal         func_21D408
label_2d753c:
    if (ctx->pc == 0x2D753Cu) {
        ctx->pc = 0x2D753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7538u;
        // 0x2d753c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7540u;
        goto label_2d7540;
    }
    ctx->pc = 0x2D7538u;
    SET_GPR_U32(ctx, 31, 0x2D7540u);
    ctx->pc = 0x2D753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7538u;
    // 0x2d753c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D7538u, 0x2D7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7540u;
label_2d7540:
    // 0x2d7540: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2d7540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2d7544:
    // 0x2d7544: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2d7544u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d7548:
    // 0x2d7548: 0x14740008  bne         $v1, $s4, . + 4 + (0x8 << 2)
label_2d754c:
    if (ctx->pc == 0x2D754Cu) {
        ctx->pc = 0x2D754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7548u;
        // 0x2d754c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7550u;
        goto label_2d7550;
    }
    ctx->pc = 0x2D7548u;
    {
        const bool branch_taken_0x2d7548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7548u;
        // 0x2d754c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7548) {
            ctx->pc = 0x2D756Cu;
            goto label_2d756c;
        }
    }
    ctx->pc = 0x2D7550u;
label_2d7550:
    // 0x2d7550: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d7550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2d7554:
    // 0x2d7554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d7558:
    // 0x2d7558: 0x0  nop
    ctx->pc = 0x2d7558u;
    // NOP
label_2d755c:
    // 0x2d755c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d755cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d7560:
    // 0x2d7560: 0x0  nop
    ctx->pc = 0x2d7560u;
    // NOP
label_2d7564:
    // 0x2d7564: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2d7568:
    if (ctx->pc == 0x2D7568u) {
        ctx->pc = 0x2D7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7564u;
        // 0x2d7568: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D756Cu;
        goto label_2d756c;
    }
    ctx->pc = 0x2D7564u;
    {
        const bool branch_taken_0x2d7564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7564) {
            ctx->pc = 0x2D7568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7564u;
            // 0x2d7568: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D756Cu;
            goto label_2d756c;
        }
    }
    ctx->pc = 0x2D756Cu;
label_2d756c:
    // 0x2d756c: 0xc0a367c  jal         func_28D9F0
label_2d7570:
    if (ctx->pc == 0x2D7570u) {
        ctx->pc = 0x2D7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D756Cu;
        // 0x2d7570: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7574u;
        goto label_2d7574;
    }
    ctx->pc = 0x2D756Cu;
    SET_GPR_U32(ctx, 31, 0x2D7574u);
    ctx->pc = 0x2D7570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D756Cu;
    // 0x2d7570: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D756Cu, 0x2D7574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7574u;
label_2d7574:
    // 0x2d7574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7578:
    // 0x2d7578: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2d757c:
    if (ctx->pc == 0x2D757Cu) {
        ctx->pc = 0x2D757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7578u;
        // 0x2d757c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7580u;
        goto label_2d7580;
    }
    ctx->pc = 0x2D7578u;
    {
        const bool branch_taken_0x2d7578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7578u;
        // 0x2d757c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7578) {
            ctx->pc = 0x2D75ACu;
            goto label_2d75ac;
        }
    }
    ctx->pc = 0x2D7580u;
label_2d7580:
    // 0x2d7580: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d7580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7584:
    // 0x2d7584: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d7584u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d7588:
    // 0x2d7588: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d7588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d758c:
    // 0x2d758c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d758cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d7590:
    // 0x2d7590: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d7590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d7594:
    // 0x2d7594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d7598:
    // 0x2d7598: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d7598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d759c:
    // 0x2d759c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d759cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d75a0:
    // 0x2d75a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d75a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d75a4:
    // 0x2d75a4: 0xc0bee7a  jal         func_2FB9E8
label_2d75a8:
    if (ctx->pc == 0x2D75A8u) {
        ctx->pc = 0x2D75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75A4u;
        // 0x2d75a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D75ACu;
        goto label_2d75ac;
    }
    ctx->pc = 0x2D75A4u;
    SET_GPR_U32(ctx, 31, 0x2D75ACu);
    ctx->pc = 0x2D75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D75A4u;
    // 0x2d75a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D75A4u, 0x2D75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75ACu;
label_2d75ac:
    // 0x2d75ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d75acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d75b0:
    // 0x2d75b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d75b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d75b4:
    // 0x2d75b4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2d75b8:
    if (ctx->pc == 0x2D75B8u) {
        ctx->pc = 0x2D75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75B4u;
        // 0x2d75b8: 0xa2030043  sb          $v1, 0x43($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D75BCu;
        goto label_2d75bc;
    }
    ctx->pc = 0x2D75B4u;
    {
        const bool branch_taken_0x2d75b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75B4u;
        // 0x2d75b8: 0xa2030043  sb          $v1, 0x43($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75b4) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D75BCu;
label_2d75bc:
    // 0x2d75bc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d75bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d75c0:
    // 0x2d75c0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2d75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2d75c4:
    // 0x2d75c4: 0xc0cd7d2  jal         func_335F48
label_2d75c8:
    if (ctx->pc == 0x2D75C8u) {
        ctx->pc = 0x2D75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75C4u;
        // 0x2d75c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D75CCu;
        goto label_2d75cc;
    }
    ctx->pc = 0x2D75C4u;
    SET_GPR_U32(ctx, 31, 0x2D75CCu);
    ctx->pc = 0x2D75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D75C4u;
    // 0x2d75c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D75C4u, 0x2D75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75CCu;
label_2d75cc:
    // 0x2d75cc: 0xc0cd742  jal         func_335D08
label_2d75d0:
    if (ctx->pc == 0x2D75D0u) {
        ctx->pc = 0x2D75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75CCu;
        // 0x2d75d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D75D4u;
        goto label_2d75d4;
    }
    ctx->pc = 0x2D75CCu;
    SET_GPR_U32(ctx, 31, 0x2D75D4u);
    ctx->pc = 0x2D75D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D75CCu;
    // 0x2d75d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D75CCu, 0x2D75D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75D4u;
label_2d75d4:
    // 0x2d75d4: 0xc60d0030  lwc1        $f13, 0x30($s0)
    ctx->pc = 0x2d75d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2d75d8:
    // 0x2d75d8: 0xc0cdd2e  jal         func_3374B8
label_2d75dc:
    if (ctx->pc == 0x2D75DCu) {
        ctx->pc = 0x2D75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75D8u;
        // 0x2d75dc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D75E0u;
        goto label_2d75e0;
    }
    ctx->pc = 0x2D75D8u;
    SET_GPR_U32(ctx, 31, 0x2D75E0u);
    ctx->pc = 0x2D75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D75D8u;
    // 0x2d75dc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D75D8u, 0x2D75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75E0u;
label_2d75e0:
    // 0x2d75e0: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2d75e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2d75e4:
    // 0x2d75e4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d75e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2d75e8:
    // 0x2d75e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d75e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d75ec:
    // 0x2d75ec: 0x0  nop
    ctx->pc = 0x2d75ecu;
    // NOP
label_2d75f0:
    // 0x2d75f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d75f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d75f4:
    // 0x2d75f4: 0x0  nop
    ctx->pc = 0x2d75f4u;
    // NOP
label_2d75f8:
    // 0x2d75f8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2d75fc:
    if (ctx->pc == 0x2D75FCu) {
        ctx->pc = 0x2D7600u;
        goto label_2d7600;
    }
    ctx->pc = 0x2D75F8u;
    {
        const bool branch_taken_0x2d75f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d75f8) {
            ctx->pc = 0x2D764Cu;
            goto label_2d764c;
        }
    }
    ctx->pc = 0x2D7600u;
label_2d7600:
    // 0x2d7600: 0xc0a367c  jal         func_28D9F0
label_2d7604:
    if (ctx->pc == 0x2D7604u) {
        ctx->pc = 0x2D7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7600u;
        // 0x2d7604: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7608u;
        goto label_2d7608;
    }
    ctx->pc = 0x2D7600u;
    SET_GPR_U32(ctx, 31, 0x2D7608u);
    ctx->pc = 0x2D7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7600u;
    // 0x2d7604: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D7600u, 0x2D7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7608u;
label_2d7608:
    // 0x2d7608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d760c:
    // 0x2d760c: 0x1220008d  beqz        $s1, . + 4 + (0x8D << 2)
label_2d7610:
    if (ctx->pc == 0x2D7610u) {
        ctx->pc = 0x2D7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D760Cu;
        // 0x2d7610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7614u;
        goto label_2d7614;
    }
    ctx->pc = 0x2D760Cu;
    {
        const bool branch_taken_0x2d760c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D760Cu;
        // 0x2d7610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d760c) {
            ctx->pc = 0x2D7844u;
            goto label_2d7844;
        }
    }
    ctx->pc = 0x2D7614u;
label_2d7614:
    // 0x2d7614: 0xc6140030  lwc1        $f20, 0x30($s0)
    ctx->pc = 0x2d7614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d7618:
    // 0x2d7618: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2d7618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2d761c:
    // 0x2d761c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2d761cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2d7620:
    // 0x2d7620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d7624:
    // 0x2d7624: 0xc0884f6  jal         func_2213D8
label_2d7628:
    if (ctx->pc == 0x2D7628u) {
        ctx->pc = 0x2D7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7624u;
        // 0x2d7628: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D762Cu;
        goto label_2d762c;
    }
    ctx->pc = 0x2D7624u;
    SET_GPR_U32(ctx, 31, 0x2D762Cu);
    ctx->pc = 0x2D7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7624u;
    // 0x2d7628: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D7624u, 0x2D762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D762Cu;
label_2d762c:
    // 0x2d762c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d762cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7630:
    // 0x2d7630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7634:
    // 0x2d7634: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d7634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d7638:
    // 0x2d7638: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2d7638u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2d763c:
    // 0x2d763c: 0xc0bf70a  jal         func_2FDC28
label_2d7640:
    if (ctx->pc == 0x2D7640u) {
        ctx->pc = 0x2D7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D763Cu;
        // 0x2d7640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7644u;
        goto label_2d7644;
    }
    ctx->pc = 0x2D763Cu;
    SET_GPR_U32(ctx, 31, 0x2D7644u);
    ctx->pc = 0x2D7640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D763Cu;
    // 0x2d7640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2D763Cu, 0x2D7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7644u;
label_2d7644:
    // 0x2d7644: 0x10000080  b           . + 4 + (0x80 << 2)
label_2d7648:
    if (ctx->pc == 0x2D7648u) {
        ctx->pc = 0x2D7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7644u;
        // 0x2d7648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D764Cu;
        goto label_2d764c;
    }
    ctx->pc = 0x2D7644u;
    {
        const bool branch_taken_0x2d7644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7644u;
        // 0x2d7648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7644) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D764Cu;
label_2d764c:
    // 0x2d764c: 0xc0b5c28  jal         func_2D70A0
label_2d7650:
    if (ctx->pc == 0x2D7650u) {
        ctx->pc = 0x2D7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D764Cu;
        // 0x2d7650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7654u;
        goto label_2d7654;
    }
    ctx->pc = 0x2D764Cu;
    SET_GPR_U32(ctx, 31, 0x2D7654u);
    ctx->pc = 0x2D7650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D764Cu;
    // 0x2d7650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D70A0u, 0x2D764Cu, 0x2D7654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7654u;
label_2d7654:
    // 0x2d7654: 0x5454004d  bnel        $v0, $s4, . + 4 + (0x4D << 2)
label_2d7658:
    if (ctx->pc == 0x2D7658u) {
        ctx->pc = 0x2D7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7654u;
        // 0x2d7658: 0x92030048  lbu         $v1, 0x48($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D765Cu;
        goto label_2d765c;
    }
    ctx->pc = 0x2D7654u;
    {
        const bool branch_taken_0x2d7654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d7654) {
            ctx->pc = 0x2D7658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7654u;
            // 0x2d7658: 0x92030048  lbu         $v1, 0x48($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D778Cu;
            goto label_2d778c;
        }
    }
    ctx->pc = 0x2D765Cu;
label_2d765c:
    // 0x2d765c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2d765cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2d7660:
    // 0x2d7660: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2d7660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2d7664:
    // 0x2d7664: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2d7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2d7668:
    // 0x2d7668: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
label_2d766c:
    if (ctx->pc == 0x2D766Cu) {
        ctx->pc = 0x2D766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7668u;
        // 0x2d766c: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7670u;
        goto label_2d7670;
    }
    ctx->pc = 0x2D7668u;
    {
        const bool branch_taken_0x2d7668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7668u;
        // 0x2d766c: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7668) {
            ctx->pc = 0x2D7704u;
            goto label_2d7704;
        }
    }
    ctx->pc = 0x2D7670u;
label_2d7670:
    // 0x2d7670: 0x26220fa0  addiu       $v0, $s1, 0xFA0
    ctx->pc = 0x2d7670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4000));
label_2d7674:
    // 0x2d7674: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x2d7674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
label_2d7678:
    // 0x2d7678: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d7678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2d767c:
    // 0x2d767c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2d767cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_2d7680:
    // 0x2d7680: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d7680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2d7684:
    // 0x2d7684: 0xc0cd4ee  jal         func_3353B8
label_2d7688:
    if (ctx->pc == 0x2D7688u) {
        ctx->pc = 0x2D7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7684u;
        // 0x2d7688: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D768Cu;
        goto label_2d768c;
    }
    ctx->pc = 0x2D7684u;
    SET_GPR_U32(ctx, 31, 0x2D768Cu);
    ctx->pc = 0x2D7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7684u;
    // 0x2d7688: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D7684u, 0x2D768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D768Cu;
label_2d768c:
    // 0x2d768c: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2d768cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2d7690:
    // 0x2d7690: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2d7694:
    if (ctx->pc == 0x2D7694u) {
        ctx->pc = 0x2D7698u;
        goto label_2d7698;
    }
    ctx->pc = 0x2D7690u;
    {
        const bool branch_taken_0x2d7690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7690) {
            ctx->pc = 0x2D76D4u;
            goto label_2d76d4;
        }
    }
    ctx->pc = 0x2D7698u;
label_2d7698:
    // 0x2d7698: 0xc0a367c  jal         func_28D9F0
label_2d769c:
    if (ctx->pc == 0x2D769Cu) {
        ctx->pc = 0x2D769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7698u;
        // 0x2d769c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D76A0u;
        goto label_2d76a0;
    }
    ctx->pc = 0x2D7698u;
    SET_GPR_U32(ctx, 31, 0x2D76A0u);
    ctx->pc = 0x2D769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7698u;
    // 0x2d769c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D7698u, 0x2D76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76A0u;
label_2d76a0:
    // 0x2d76a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d76a4:
    if (ctx->pc == 0x2D76A4u) {
        ctx->pc = 0x2D76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76A0u;
        // 0x2d76a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D76A8u;
        goto label_2d76a8;
    }
    ctx->pc = 0x2D76A0u;
    {
        const bool branch_taken_0x2d76a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76A0u;
        // 0x2d76a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76a0) {
            ctx->pc = 0x2D76C8u;
            goto label_2d76c8;
        }
    }
    ctx->pc = 0x2D76A8u;
label_2d76a8:
    // 0x2d76a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d76a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d76ac:
    // 0x2d76ac: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d76acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d76b0:
    // 0x2d76b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d76b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d76b4:
    // 0x2d76b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d76b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d76b8:
    // 0x2d76b8: 0x2406029f  addiu       $a2, $zero, 0x29F
    ctx->pc = 0x2d76b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2d76bc:
    // 0x2d76bc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d76bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d76c0:
    // 0x2d76c0: 0xc0be91a  jal         func_2FA468
label_2d76c4:
    if (ctx->pc == 0x2D76C4u) {
        ctx->pc = 0x2D76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76C0u;
        // 0x2d76c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D76C8u;
        goto label_2d76c8;
    }
    ctx->pc = 0x2D76C0u;
    SET_GPR_U32(ctx, 31, 0x2D76C8u);
    ctx->pc = 0x2D76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D76C0u;
    // 0x2d76c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA468u, 0x2D76C0u, 0x2D76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76C8u;
label_2d76c8:
    // 0x2d76c8: 0xa2140047  sb          $s4, 0x47($s0)
    ctx->pc = 0x2d76c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 20));
label_2d76cc:
    // 0x2d76cc: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2d76d0:
    if (ctx->pc == 0x2D76D0u) {
        ctx->pc = 0x2D76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76CCu;
        // 0x2d76d0: 0xa2000043  sb          $zero, 0x43($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D76D4u;
        goto label_2d76d4;
    }
    ctx->pc = 0x2D76CCu;
    {
        const bool branch_taken_0x2d76cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76CCu;
        // 0x2d76d0: 0xa2000043  sb          $zero, 0x43($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76cc) {
            ctx->pc = 0x2D7844u;
            goto label_2d7844;
        }
    }
    ctx->pc = 0x2D76D4u;
label_2d76d4:
    // 0x2d76d4: 0xc0a367c  jal         func_28D9F0
label_2d76d8:
    if (ctx->pc == 0x2D76D8u) {
        ctx->pc = 0x2D76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76D4u;
        // 0x2d76d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D76DCu;
        goto label_2d76dc;
    }
    ctx->pc = 0x2D76D4u;
    SET_GPR_U32(ctx, 31, 0x2D76DCu);
    ctx->pc = 0x2D76D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D76D4u;
    // 0x2d76d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D76D4u, 0x2D76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76DCu;
label_2d76dc:
    // 0x2d76dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2d76e0:
    if (ctx->pc == 0x2D76E0u) {
        ctx->pc = 0x2D76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76DCu;
        // 0x2d76e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D76E4u;
        goto label_2d76e4;
    }
    ctx->pc = 0x2D76DCu;
    {
        const bool branch_taken_0x2d76dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76DCu;
        // 0x2d76e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76dc) {
            ctx->pc = 0x2D76FCu;
            goto label_2d76fc;
        }
    }
    ctx->pc = 0x2D76E4u;
label_2d76e4:
    // 0x2d76e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d76e8:
    // 0x2d76e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d76e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d76ec:
    // 0x2d76ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d76ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d76f0:
    // 0x2d76f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d76f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d76f4:
    // 0x2d76f4: 0xc0be7d2  jal         func_2F9F48
label_2d76f8:
    if (ctx->pc == 0x2D76F8u) {
        ctx->pc = 0x2D76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76F4u;
        // 0x2d76f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D76FCu;
        goto label_2d76fc;
    }
    ctx->pc = 0x2D76F4u;
    SET_GPR_U32(ctx, 31, 0x2D76FCu);
    ctx->pc = 0x2D76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D76F4u;
    // 0x2d76f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2D76F4u, 0x2D76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76FCu;
label_2d76fc:
    // 0x2d76fc: 0x10000051  b           . + 4 + (0x51 << 2)
label_2d7700:
    if (ctx->pc == 0x2D7700u) {
        ctx->pc = 0x2D7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76FCu;
        // 0x2d7700: 0xa2140043  sb          $s4, 0x43($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7704u;
        goto label_2d7704;
    }
    ctx->pc = 0x2D76FCu;
    {
        const bool branch_taken_0x2d76fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76FCu;
        // 0x2d7700: 0xa2140043  sb          $s4, 0x43($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76fc) {
            ctx->pc = 0x2D7844u;
            goto label_2d7844;
        }
    }
    ctx->pc = 0x2D7704u;
label_2d7704:
    // 0x2d7704: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x2d7704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d7708:
    // 0x2d7708: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
label_2d770c:
    if (ctx->pc == 0x2D770Cu) {
        ctx->pc = 0x2D770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7708u;
        // 0x2d770c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7710u;
        goto label_2d7710;
    }
    ctx->pc = 0x2D7708u;
    {
        const bool branch_taken_0x2d7708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7708u;
        // 0x2d770c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7708) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D7710u;
label_2d7710:
    // 0x2d7710: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x2d7710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
label_2d7714:
    // 0x2d7714: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2d7718:
    if (ctx->pc == 0x2D7718u) {
        ctx->pc = 0x2D7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7714u;
        // 0x2d7718: 0x92030047  lbu         $v1, 0x47($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D771Cu;
        goto label_2d771c;
    }
    ctx->pc = 0x2D7714u;
    {
        const bool branch_taken_0x2d7714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7714) {
            ctx->pc = 0x2D7718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7714u;
            // 0x2d7718: 0x92030047  lbu         $v1, 0x47($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D774Cu;
            goto label_2d774c;
        }
    }
    ctx->pc = 0x2D771Cu;
label_2d771c:
    // 0x2d771c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7720:
    // 0x2d7720: 0xc0b5c4c  jal         func_2D7130
label_2d7724:
    if (ctx->pc == 0x2D7724u) {
        ctx->pc = 0x2D7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7720u;
        // 0x2d7724: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7728u;
        goto label_2d7728;
    }
    ctx->pc = 0x2D7720u;
    SET_GPR_U32(ctx, 31, 0x2D7728u);
    ctx->pc = 0x2D7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7720u;
    // 0x2d7724: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7130u, 0x2D7720u, 0x2D7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7728u;
label_2d7728:
    // 0x2d7728: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2d772c:
    if (ctx->pc == 0x2D772Cu) {
        ctx->pc = 0x2D772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7728u;
        // 0x2d772c: 0xa2140048  sb          $s4, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7730u;
        goto label_2d7730;
    }
    ctx->pc = 0x2D7728u;
    {
        const bool branch_taken_0x2d7728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7728) {
            ctx->pc = 0x2D772Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7728u;
            // 0x2d772c: 0xa2140048  sb          $s4, 0x48($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7748u;
            goto label_2d7748;
        }
    }
    ctx->pc = 0x2D7730u;
label_2d7730:
    // 0x2d7730: 0x92020047  lbu         $v0, 0x47($s0)
    ctx->pc = 0x2d7730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
label_2d7734:
    // 0x2d7734: 0x54540043  bnel        $v0, $s4, . + 4 + (0x43 << 2)
label_2d7738:
    if (ctx->pc == 0x2D7738u) {
        ctx->pc = 0x2D7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7734u;
        // 0x2d7738: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D773Cu;
        goto label_2d773c;
    }
    ctx->pc = 0x2D7734u;
    {
        const bool branch_taken_0x2d7734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d7734) {
            ctx->pc = 0x2D7738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7734u;
            // 0x2d7738: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7844u;
            goto label_2d7844;
        }
    }
    ctx->pc = 0x2D773Cu;
label_2d773c:
    // 0x2d773c: 0x26220fa0  addiu       $v0, $s1, 0xFA0
    ctx->pc = 0x2d773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4000));
label_2d7740:
    // 0x2d7740: 0x10000040  b           . + 4 + (0x40 << 2)
label_2d7744:
    if (ctx->pc == 0x2D7744u) {
        ctx->pc = 0x2D7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7740u;
        // 0x2d7744: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7748u;
        goto label_2d7748;
    }
    ctx->pc = 0x2D7740u;
    {
        const bool branch_taken_0x2d7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7740u;
        // 0x2d7744: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7740) {
            ctx->pc = 0x2D7844u;
            goto label_2d7844;
        }
    }
    ctx->pc = 0x2D7748u;
label_2d7748:
    // 0x2d7748: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x2d7748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
label_2d774c:
    // 0x2d774c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7750:
    // 0x2d7750: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_2d7754:
    if (ctx->pc == 0x2D7754u) {
        ctx->pc = 0x2D7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7750u;
        // 0x2d7754: 0x92030048  lbu         $v1, 0x48($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7758u;
        goto label_2d7758;
    }
    ctx->pc = 0x2D7750u;
    {
        const bool branch_taken_0x2d7750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d7750) {
            ctx->pc = 0x2D7754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7750u;
            // 0x2d7754: 0x92030048  lbu         $v1, 0x48($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7790u;
            goto label_2d7790;
        }
    }
    ctx->pc = 0x2D7758u;
label_2d7758:
    // 0x2d7758: 0xc0a367c  jal         func_28D9F0
label_2d775c:
    if (ctx->pc == 0x2D775Cu) {
        ctx->pc = 0x2D775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7758u;
        // 0x2d775c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7760u;
        goto label_2d7760;
    }
    ctx->pc = 0x2D7758u;
    SET_GPR_U32(ctx, 31, 0x2D7760u);
    ctx->pc = 0x2D775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7758u;
    // 0x2d775c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D7758u, 0x2D7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7760u;
label_2d7760:
    // 0x2d7760: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d7764:
    if (ctx->pc == 0x2D7764u) {
        ctx->pc = 0x2D7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7760u;
        // 0x2d7764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7768u;
        goto label_2d7768;
    }
    ctx->pc = 0x2D7760u;
    {
        const bool branch_taken_0x2d7760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7760u;
        // 0x2d7764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7760) {
            ctx->pc = 0x2D7788u;
            goto label_2d7788;
        }
    }
    ctx->pc = 0x2D7768u;
label_2d7768:
    // 0x2d7768: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d7768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d776c:
    // 0x2d776c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d7770:
    // 0x2d7770: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d7770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d7774:
    // 0x2d7774: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d7778:
    // 0x2d7778: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2d7778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2d777c:
    // 0x2d777c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2d777cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2d7780:
    // 0x2d7780: 0xc0be8c0  jal         func_2FA300
label_2d7784:
    if (ctx->pc == 0x2D7784u) {
        ctx->pc = 0x2D7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7780u;
        // 0x2d7784: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7788u;
        goto label_2d7788;
    }
    ctx->pc = 0x2D7780u;
    SET_GPR_U32(ctx, 31, 0x2D7788u);
    ctx->pc = 0x2D7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7780u;
    // 0x2d7784: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D7780u, 0x2D7788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7788u;
label_2d7788:
    // 0x2d7788: 0x92030048  lbu         $v1, 0x48($s0)
    ctx->pc = 0x2d7788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
label_2d778c:
    // 0x2d778c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7790:
    // 0x2d7790: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_2d7794:
    if (ctx->pc == 0x2D7794u) {
        ctx->pc = 0x2D7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7790u;
        // 0x2d7794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7798u;
        goto label_2d7798;
    }
    ctx->pc = 0x2D7790u;
    {
        const bool branch_taken_0x2d7790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7790u;
        // 0x2d7794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7790) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D7798u;
label_2d7798:
    // 0x2d7798: 0xa2030042  sb          $v1, 0x42($s0)
    ctx->pc = 0x2d7798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 3));
label_2d779c:
    // 0x2d779c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2d77a0:
    if (ctx->pc == 0x2D77A0u) {
        ctx->pc = 0x2D77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D779Cu;
        // 0x2d77a0: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D77A4u;
        goto label_2d77a4;
    }
    ctx->pc = 0x2D779Cu;
    {
        const bool branch_taken_0x2d779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D779Cu;
        // 0x2d77a0: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d779c) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D77A4u;
label_2d77a4:
    // 0x2d77a4: 0x16340028  bne         $s1, $s4, . + 4 + (0x28 << 2)
label_2d77a8:
    if (ctx->pc == 0x2D77A8u) {
        ctx->pc = 0x2D77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77A4u;
        // 0x2d77a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D77ACu;
        goto label_2d77ac;
    }
    ctx->pc = 0x2D77A4u;
    {
        const bool branch_taken_0x2d77a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x2D77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77A4u;
        // 0x2d77a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77a4) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D77ACu;
label_2d77ac:
    // 0x2d77ac: 0xc0a337e  jal         func_28CDF8
label_2d77b0:
    if (ctx->pc == 0x2D77B0u) {
        ctx->pc = 0x2D77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77ACu;
        // 0x2d77b0: 0x2405fff6  addiu       $a1, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D77B4u;
        goto label_2d77b4;
    }
    ctx->pc = 0x2D77ACu;
    SET_GPR_U32(ctx, 31, 0x2D77B4u);
    ctx->pc = 0x2D77B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77ACu;
    // 0x2d77b0: 0x2405fff6  addiu       $a1, $zero, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D77ACu, 0x2D77B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77B4u;
label_2d77b4:
    // 0x2d77b4: 0xc0a367c  jal         func_28D9F0
label_2d77b8:
    if (ctx->pc == 0x2D77B8u) {
        ctx->pc = 0x2D77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77B4u;
        // 0x2d77b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D77BCu;
        goto label_2d77bc;
    }
    ctx->pc = 0x2D77B4u;
    SET_GPR_U32(ctx, 31, 0x2D77BCu);
    ctx->pc = 0x2D77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77B4u;
    // 0x2d77b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D77B4u, 0x2D77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77BCu;
label_2d77bc:
    // 0x2d77bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d77bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d77c0:
    // 0x2d77c0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2d77c4:
    if (ctx->pc == 0x2D77C4u) {
        ctx->pc = 0x2D77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77C0u;
        // 0x2d77c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D77C8u;
        goto label_2d77c8;
    }
    ctx->pc = 0x2D77C0u;
    {
        const bool branch_taken_0x2d77c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77C0u;
        // 0x2d77c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77c0) {
            ctx->pc = 0x2D77F0u;
            goto label_2d77f0;
        }
    }
    ctx->pc = 0x2D77C8u;
label_2d77c8:
    // 0x2d77c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d77cc:
    // 0x2d77cc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d77ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d77d0:
    // 0x2d77d0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2d77d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2d77d4:
    // 0x2d77d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d77d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2d77d8:
    // 0x2d77d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d77d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d77dc:
    // 0x2d77dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d77dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d77e0:
    // 0x2d77e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d77e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d77e4:
    // 0x2d77e4: 0x240903e8  addiu       $t1, $zero, 0x3E8
    ctx->pc = 0x2d77e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2d77e8:
    // 0x2d77e8: 0xc0bee7a  jal         func_2FB9E8
label_2d77ec:
    if (ctx->pc == 0x2D77ECu) {
        ctx->pc = 0x2D77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77E8u;
        // 0x2d77ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D77F0u;
        goto label_2d77f0;
    }
    ctx->pc = 0x2D77E8u;
    SET_GPR_U32(ctx, 31, 0x2D77F0u);
    ctx->pc = 0x2D77ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77E8u;
    // 0x2d77ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D77E8u, 0x2D77F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77F0u;
label_2d77f0:
    // 0x2d77f0: 0xc0a367c  jal         func_28D9F0
label_2d77f4:
    if (ctx->pc == 0x2D77F4u) {
        ctx->pc = 0x2D77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77F0u;
        // 0x2d77f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D77F8u;
        goto label_2d77f8;
    }
    ctx->pc = 0x2D77F0u;
    SET_GPR_U32(ctx, 31, 0x2D77F8u);
    ctx->pc = 0x2D77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77F0u;
    // 0x2d77f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D77F0u, 0x2D77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77F8u;
label_2d77f8:
    // 0x2d77f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d77f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d77fc:
    // 0x2d77fc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2d7800:
    if (ctx->pc == 0x2D7800u) {
        ctx->pc = 0x2D7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77FCu;
        // 0x2d7800: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7804u;
        goto label_2d7804;
    }
    ctx->pc = 0x2D77FCu;
    {
        const bool branch_taken_0x2d77fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77FCu;
        // 0x2d7800: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77fc) {
            ctx->pc = 0x2D7830u;
            goto label_2d7830;
        }
    }
    ctx->pc = 0x2D7804u;
label_2d7804:
    // 0x2d7804: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d7804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7808:
    // 0x2d7808: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d7808u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d780c:
    // 0x2d780c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2d780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2d7810:
    // 0x2d7810: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d7810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d7814:
    // 0x2d7814: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d7814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d7818:
    // 0x2d7818: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d781c:
    // 0x2d781c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d781cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d7820:
    // 0x2d7820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7824:
    // 0x2d7824: 0x24091770  addiu       $t1, $zero, 0x1770
    ctx->pc = 0x2d7824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2d7828:
    // 0x2d7828: 0xc0bee7a  jal         func_2FB9E8
label_2d782c:
    if (ctx->pc == 0x2D782Cu) {
        ctx->pc = 0x2D782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7828u;
        // 0x2d782c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7830u;
        goto label_2d7830;
    }
    ctx->pc = 0x2D7828u;
    SET_GPR_U32(ctx, 31, 0x2D7830u);
    ctx->pc = 0x2D782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7828u;
    // 0x2d782c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D7828u, 0x2D7830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7830u;
label_2d7830:
    // 0x2d7830: 0xa2110043  sb          $s1, 0x43($s0)
    ctx->pc = 0x2d7830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 17));
label_2d7834:
    // 0x2d7834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7838:
    // 0x2d7838: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x2d7838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
label_2d783c:
    // 0x2d783c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d7840:
    if (ctx->pc == 0x2D7840u) {
        ctx->pc = 0x2D7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D783Cu;
        // 0x2d7840: 0xa2000048  sb          $zero, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7844u;
        goto label_2d7844;
    }
    ctx->pc = 0x2D783Cu;
    {
        const bool branch_taken_0x2d783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D783Cu;
        // 0x2d7840: 0xa2000048  sb          $zero, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d783c) {
            ctx->pc = 0x2D7848u;
            goto label_2d7848;
        }
    }
    ctx->pc = 0x2D7844u;
label_2d7844:
    // 0x2d7844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7848:
    // 0x2d7848: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d7848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d784c:
    // 0x2d784c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d784cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d7850:
    // 0x2d7850: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d7850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d7854:
    // 0x2d7854: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d7854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d7858:
    // 0x2d7858: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d7858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d785c:
    // 0x2d785c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d785cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7860:
    // 0x2d7860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7864:
    // 0x2d7864: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2d7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d7868:
    // 0x2d7868: 0x3e00008  jr          $ra
label_2d786c:
    if (ctx->pc == 0x2D786Cu) {
        ctx->pc = 0x2D786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7868u;
        // 0x2d786c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7870u;
        goto label_2d7870;
    }
    ctx->pc = 0x2D7868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7868u;
        // 0x2d786c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7870u;
label_2d7870:
    // 0x2d7870: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2d7870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2d7874:
    // 0x2d7874: 0x0  nop
    ctx->pc = 0x2d7874u;
    // NOP
    ctx->pc = 0x2d7878u;
}
