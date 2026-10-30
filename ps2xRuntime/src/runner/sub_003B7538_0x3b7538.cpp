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

// Function: sub_003B7538
// Address: 0x3b7538 - 0x3b7a88
void sub_003B7538_0x3b7538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7538_0x3b7538");
#endif

    switch (ctx->pc) {
        case 0x3b7538u: goto label_3b7538;
        case 0x3b753cu: goto label_3b753c;
        case 0x3b7540u: goto label_3b7540;
        case 0x3b7544u: goto label_3b7544;
        case 0x3b7548u: goto label_3b7548;
        case 0x3b754cu: goto label_3b754c;
        case 0x3b7550u: goto label_3b7550;
        case 0x3b7554u: goto label_3b7554;
        case 0x3b7558u: goto label_3b7558;
        case 0x3b755cu: goto label_3b755c;
        case 0x3b7560u: goto label_3b7560;
        case 0x3b7564u: goto label_3b7564;
        case 0x3b7568u: goto label_3b7568;
        case 0x3b756cu: goto label_3b756c;
        case 0x3b7570u: goto label_3b7570;
        case 0x3b7574u: goto label_3b7574;
        case 0x3b7578u: goto label_3b7578;
        case 0x3b757cu: goto label_3b757c;
        case 0x3b7580u: goto label_3b7580;
        case 0x3b7584u: goto label_3b7584;
        case 0x3b7588u: goto label_3b7588;
        case 0x3b758cu: goto label_3b758c;
        case 0x3b7590u: goto label_3b7590;
        case 0x3b7594u: goto label_3b7594;
        case 0x3b7598u: goto label_3b7598;
        case 0x3b759cu: goto label_3b759c;
        case 0x3b75a0u: goto label_3b75a0;
        case 0x3b75a4u: goto label_3b75a4;
        case 0x3b75a8u: goto label_3b75a8;
        case 0x3b75acu: goto label_3b75ac;
        case 0x3b75b0u: goto label_3b75b0;
        case 0x3b75b4u: goto label_3b75b4;
        case 0x3b75b8u: goto label_3b75b8;
        case 0x3b75bcu: goto label_3b75bc;
        case 0x3b75c0u: goto label_3b75c0;
        case 0x3b75c4u: goto label_3b75c4;
        case 0x3b75c8u: goto label_3b75c8;
        case 0x3b75ccu: goto label_3b75cc;
        case 0x3b75d0u: goto label_3b75d0;
        case 0x3b75d4u: goto label_3b75d4;
        case 0x3b75d8u: goto label_3b75d8;
        case 0x3b75dcu: goto label_3b75dc;
        case 0x3b75e0u: goto label_3b75e0;
        case 0x3b75e4u: goto label_3b75e4;
        case 0x3b75e8u: goto label_3b75e8;
        case 0x3b75ecu: goto label_3b75ec;
        case 0x3b75f0u: goto label_3b75f0;
        case 0x3b75f4u: goto label_3b75f4;
        case 0x3b75f8u: goto label_3b75f8;
        case 0x3b75fcu: goto label_3b75fc;
        case 0x3b7600u: goto label_3b7600;
        case 0x3b7604u: goto label_3b7604;
        case 0x3b7608u: goto label_3b7608;
        case 0x3b760cu: goto label_3b760c;
        case 0x3b7610u: goto label_3b7610;
        case 0x3b7614u: goto label_3b7614;
        case 0x3b7618u: goto label_3b7618;
        case 0x3b761cu: goto label_3b761c;
        case 0x3b7620u: goto label_3b7620;
        case 0x3b7624u: goto label_3b7624;
        case 0x3b7628u: goto label_3b7628;
        case 0x3b762cu: goto label_3b762c;
        case 0x3b7630u: goto label_3b7630;
        case 0x3b7634u: goto label_3b7634;
        case 0x3b7638u: goto label_3b7638;
        case 0x3b763cu: goto label_3b763c;
        case 0x3b7640u: goto label_3b7640;
        case 0x3b7644u: goto label_3b7644;
        case 0x3b7648u: goto label_3b7648;
        case 0x3b764cu: goto label_3b764c;
        case 0x3b7650u: goto label_3b7650;
        case 0x3b7654u: goto label_3b7654;
        case 0x3b7658u: goto label_3b7658;
        case 0x3b765cu: goto label_3b765c;
        case 0x3b7660u: goto label_3b7660;
        case 0x3b7664u: goto label_3b7664;
        case 0x3b7668u: goto label_3b7668;
        case 0x3b766cu: goto label_3b766c;
        case 0x3b7670u: goto label_3b7670;
        case 0x3b7674u: goto label_3b7674;
        case 0x3b7678u: goto label_3b7678;
        case 0x3b767cu: goto label_3b767c;
        case 0x3b7680u: goto label_3b7680;
        case 0x3b7684u: goto label_3b7684;
        case 0x3b7688u: goto label_3b7688;
        case 0x3b768cu: goto label_3b768c;
        case 0x3b7690u: goto label_3b7690;
        case 0x3b7694u: goto label_3b7694;
        case 0x3b7698u: goto label_3b7698;
        case 0x3b769cu: goto label_3b769c;
        case 0x3b76a0u: goto label_3b76a0;
        case 0x3b76a4u: goto label_3b76a4;
        case 0x3b76a8u: goto label_3b76a8;
        case 0x3b76acu: goto label_3b76ac;
        case 0x3b76b0u: goto label_3b76b0;
        case 0x3b76b4u: goto label_3b76b4;
        case 0x3b76b8u: goto label_3b76b8;
        case 0x3b76bcu: goto label_3b76bc;
        case 0x3b76c0u: goto label_3b76c0;
        case 0x3b76c4u: goto label_3b76c4;
        case 0x3b76c8u: goto label_3b76c8;
        case 0x3b76ccu: goto label_3b76cc;
        case 0x3b76d0u: goto label_3b76d0;
        case 0x3b76d4u: goto label_3b76d4;
        case 0x3b76d8u: goto label_3b76d8;
        case 0x3b76dcu: goto label_3b76dc;
        case 0x3b76e0u: goto label_3b76e0;
        case 0x3b76e4u: goto label_3b76e4;
        case 0x3b76e8u: goto label_3b76e8;
        case 0x3b76ecu: goto label_3b76ec;
        case 0x3b76f0u: goto label_3b76f0;
        case 0x3b76f4u: goto label_3b76f4;
        case 0x3b76f8u: goto label_3b76f8;
        case 0x3b76fcu: goto label_3b76fc;
        case 0x3b7700u: goto label_3b7700;
        case 0x3b7704u: goto label_3b7704;
        case 0x3b7708u: goto label_3b7708;
        case 0x3b770cu: goto label_3b770c;
        case 0x3b7710u: goto label_3b7710;
        case 0x3b7714u: goto label_3b7714;
        case 0x3b7718u: goto label_3b7718;
        case 0x3b771cu: goto label_3b771c;
        case 0x3b7720u: goto label_3b7720;
        case 0x3b7724u: goto label_3b7724;
        case 0x3b7728u: goto label_3b7728;
        case 0x3b772cu: goto label_3b772c;
        case 0x3b7730u: goto label_3b7730;
        case 0x3b7734u: goto label_3b7734;
        case 0x3b7738u: goto label_3b7738;
        case 0x3b773cu: goto label_3b773c;
        case 0x3b7740u: goto label_3b7740;
        case 0x3b7744u: goto label_3b7744;
        case 0x3b7748u: goto label_3b7748;
        case 0x3b774cu: goto label_3b774c;
        case 0x3b7750u: goto label_3b7750;
        case 0x3b7754u: goto label_3b7754;
        case 0x3b7758u: goto label_3b7758;
        case 0x3b775cu: goto label_3b775c;
        case 0x3b7760u: goto label_3b7760;
        case 0x3b7764u: goto label_3b7764;
        case 0x3b7768u: goto label_3b7768;
        case 0x3b776cu: goto label_3b776c;
        case 0x3b7770u: goto label_3b7770;
        case 0x3b7774u: goto label_3b7774;
        case 0x3b7778u: goto label_3b7778;
        case 0x3b777cu: goto label_3b777c;
        case 0x3b7780u: goto label_3b7780;
        case 0x3b7784u: goto label_3b7784;
        case 0x3b7788u: goto label_3b7788;
        case 0x3b778cu: goto label_3b778c;
        case 0x3b7790u: goto label_3b7790;
        case 0x3b7794u: goto label_3b7794;
        case 0x3b7798u: goto label_3b7798;
        case 0x3b779cu: goto label_3b779c;
        case 0x3b77a0u: goto label_3b77a0;
        case 0x3b77a4u: goto label_3b77a4;
        case 0x3b77a8u: goto label_3b77a8;
        case 0x3b77acu: goto label_3b77ac;
        case 0x3b77b0u: goto label_3b77b0;
        case 0x3b77b4u: goto label_3b77b4;
        case 0x3b77b8u: goto label_3b77b8;
        case 0x3b77bcu: goto label_3b77bc;
        case 0x3b77c0u: goto label_3b77c0;
        case 0x3b77c4u: goto label_3b77c4;
        case 0x3b77c8u: goto label_3b77c8;
        case 0x3b77ccu: goto label_3b77cc;
        case 0x3b77d0u: goto label_3b77d0;
        case 0x3b77d4u: goto label_3b77d4;
        case 0x3b77d8u: goto label_3b77d8;
        case 0x3b77dcu: goto label_3b77dc;
        case 0x3b77e0u: goto label_3b77e0;
        case 0x3b77e4u: goto label_3b77e4;
        case 0x3b77e8u: goto label_3b77e8;
        case 0x3b77ecu: goto label_3b77ec;
        case 0x3b77f0u: goto label_3b77f0;
        case 0x3b77f4u: goto label_3b77f4;
        case 0x3b77f8u: goto label_3b77f8;
        case 0x3b77fcu: goto label_3b77fc;
        case 0x3b7800u: goto label_3b7800;
        case 0x3b7804u: goto label_3b7804;
        case 0x3b7808u: goto label_3b7808;
        case 0x3b780cu: goto label_3b780c;
        case 0x3b7810u: goto label_3b7810;
        case 0x3b7814u: goto label_3b7814;
        case 0x3b7818u: goto label_3b7818;
        case 0x3b781cu: goto label_3b781c;
        case 0x3b7820u: goto label_3b7820;
        case 0x3b7824u: goto label_3b7824;
        case 0x3b7828u: goto label_3b7828;
        case 0x3b782cu: goto label_3b782c;
        case 0x3b7830u: goto label_3b7830;
        case 0x3b7834u: goto label_3b7834;
        case 0x3b7838u: goto label_3b7838;
        case 0x3b783cu: goto label_3b783c;
        case 0x3b7840u: goto label_3b7840;
        case 0x3b7844u: goto label_3b7844;
        case 0x3b7848u: goto label_3b7848;
        case 0x3b784cu: goto label_3b784c;
        case 0x3b7850u: goto label_3b7850;
        case 0x3b7854u: goto label_3b7854;
        case 0x3b7858u: goto label_3b7858;
        case 0x3b785cu: goto label_3b785c;
        case 0x3b7860u: goto label_3b7860;
        case 0x3b7864u: goto label_3b7864;
        case 0x3b7868u: goto label_3b7868;
        case 0x3b786cu: goto label_3b786c;
        case 0x3b7870u: goto label_3b7870;
        case 0x3b7874u: goto label_3b7874;
        case 0x3b7878u: goto label_3b7878;
        case 0x3b787cu: goto label_3b787c;
        case 0x3b7880u: goto label_3b7880;
        case 0x3b7884u: goto label_3b7884;
        case 0x3b7888u: goto label_3b7888;
        case 0x3b788cu: goto label_3b788c;
        case 0x3b7890u: goto label_3b7890;
        case 0x3b7894u: goto label_3b7894;
        case 0x3b7898u: goto label_3b7898;
        case 0x3b789cu: goto label_3b789c;
        case 0x3b78a0u: goto label_3b78a0;
        case 0x3b78a4u: goto label_3b78a4;
        case 0x3b78a8u: goto label_3b78a8;
        case 0x3b78acu: goto label_3b78ac;
        case 0x3b78b0u: goto label_3b78b0;
        case 0x3b78b4u: goto label_3b78b4;
        case 0x3b78b8u: goto label_3b78b8;
        case 0x3b78bcu: goto label_3b78bc;
        case 0x3b78c0u: goto label_3b78c0;
        case 0x3b78c4u: goto label_3b78c4;
        case 0x3b78c8u: goto label_3b78c8;
        case 0x3b78ccu: goto label_3b78cc;
        case 0x3b78d0u: goto label_3b78d0;
        case 0x3b78d4u: goto label_3b78d4;
        case 0x3b78d8u: goto label_3b78d8;
        case 0x3b78dcu: goto label_3b78dc;
        case 0x3b78e0u: goto label_3b78e0;
        case 0x3b78e4u: goto label_3b78e4;
        case 0x3b78e8u: goto label_3b78e8;
        case 0x3b78ecu: goto label_3b78ec;
        case 0x3b78f0u: goto label_3b78f0;
        case 0x3b78f4u: goto label_3b78f4;
        case 0x3b78f8u: goto label_3b78f8;
        case 0x3b78fcu: goto label_3b78fc;
        case 0x3b7900u: goto label_3b7900;
        case 0x3b7904u: goto label_3b7904;
        case 0x3b7908u: goto label_3b7908;
        case 0x3b790cu: goto label_3b790c;
        case 0x3b7910u: goto label_3b7910;
        case 0x3b7914u: goto label_3b7914;
        case 0x3b7918u: goto label_3b7918;
        case 0x3b791cu: goto label_3b791c;
        case 0x3b7920u: goto label_3b7920;
        case 0x3b7924u: goto label_3b7924;
        case 0x3b7928u: goto label_3b7928;
        case 0x3b792cu: goto label_3b792c;
        case 0x3b7930u: goto label_3b7930;
        case 0x3b7934u: goto label_3b7934;
        case 0x3b7938u: goto label_3b7938;
        case 0x3b793cu: goto label_3b793c;
        case 0x3b7940u: goto label_3b7940;
        case 0x3b7944u: goto label_3b7944;
        case 0x3b7948u: goto label_3b7948;
        case 0x3b794cu: goto label_3b794c;
        case 0x3b7950u: goto label_3b7950;
        case 0x3b7954u: goto label_3b7954;
        case 0x3b7958u: goto label_3b7958;
        case 0x3b795cu: goto label_3b795c;
        case 0x3b7960u: goto label_3b7960;
        case 0x3b7964u: goto label_3b7964;
        case 0x3b7968u: goto label_3b7968;
        case 0x3b796cu: goto label_3b796c;
        case 0x3b7970u: goto label_3b7970;
        case 0x3b7974u: goto label_3b7974;
        case 0x3b7978u: goto label_3b7978;
        case 0x3b797cu: goto label_3b797c;
        case 0x3b7980u: goto label_3b7980;
        case 0x3b7984u: goto label_3b7984;
        case 0x3b7988u: goto label_3b7988;
        case 0x3b798cu: goto label_3b798c;
        case 0x3b7990u: goto label_3b7990;
        case 0x3b7994u: goto label_3b7994;
        case 0x3b7998u: goto label_3b7998;
        case 0x3b799cu: goto label_3b799c;
        case 0x3b79a0u: goto label_3b79a0;
        case 0x3b79a4u: goto label_3b79a4;
        case 0x3b79a8u: goto label_3b79a8;
        case 0x3b79acu: goto label_3b79ac;
        case 0x3b79b0u: goto label_3b79b0;
        case 0x3b79b4u: goto label_3b79b4;
        case 0x3b79b8u: goto label_3b79b8;
        case 0x3b79bcu: goto label_3b79bc;
        case 0x3b79c0u: goto label_3b79c0;
        case 0x3b79c4u: goto label_3b79c4;
        case 0x3b79c8u: goto label_3b79c8;
        case 0x3b79ccu: goto label_3b79cc;
        case 0x3b79d0u: goto label_3b79d0;
        case 0x3b79d4u: goto label_3b79d4;
        case 0x3b79d8u: goto label_3b79d8;
        case 0x3b79dcu: goto label_3b79dc;
        case 0x3b79e0u: goto label_3b79e0;
        case 0x3b79e4u: goto label_3b79e4;
        case 0x3b79e8u: goto label_3b79e8;
        case 0x3b79ecu: goto label_3b79ec;
        case 0x3b79f0u: goto label_3b79f0;
        case 0x3b79f4u: goto label_3b79f4;
        case 0x3b79f8u: goto label_3b79f8;
        case 0x3b79fcu: goto label_3b79fc;
        case 0x3b7a00u: goto label_3b7a00;
        case 0x3b7a04u: goto label_3b7a04;
        case 0x3b7a08u: goto label_3b7a08;
        case 0x3b7a0cu: goto label_3b7a0c;
        case 0x3b7a10u: goto label_3b7a10;
        case 0x3b7a14u: goto label_3b7a14;
        case 0x3b7a18u: goto label_3b7a18;
        case 0x3b7a1cu: goto label_3b7a1c;
        case 0x3b7a20u: goto label_3b7a20;
        case 0x3b7a24u: goto label_3b7a24;
        case 0x3b7a28u: goto label_3b7a28;
        case 0x3b7a2cu: goto label_3b7a2c;
        case 0x3b7a30u: goto label_3b7a30;
        case 0x3b7a34u: goto label_3b7a34;
        case 0x3b7a38u: goto label_3b7a38;
        case 0x3b7a3cu: goto label_3b7a3c;
        case 0x3b7a40u: goto label_3b7a40;
        case 0x3b7a44u: goto label_3b7a44;
        case 0x3b7a48u: goto label_3b7a48;
        case 0x3b7a4cu: goto label_3b7a4c;
        case 0x3b7a50u: goto label_3b7a50;
        case 0x3b7a54u: goto label_3b7a54;
        case 0x3b7a58u: goto label_3b7a58;
        case 0x3b7a5cu: goto label_3b7a5c;
        case 0x3b7a60u: goto label_3b7a60;
        case 0x3b7a64u: goto label_3b7a64;
        case 0x3b7a68u: goto label_3b7a68;
        case 0x3b7a6cu: goto label_3b7a6c;
        case 0x3b7a70u: goto label_3b7a70;
        case 0x3b7a74u: goto label_3b7a74;
        case 0x3b7a78u: goto label_3b7a78;
        case 0x3b7a7cu: goto label_3b7a7c;
        case 0x3b7a80u: goto label_3b7a80;
        case 0x3b7a84u: goto label_3b7a84;
        default: break;
    }

    ctx->pc = 0x3b7538u;

label_3b7538:
    // 0x3b7538: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x3b7538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_3b753c:
    // 0x3b753c: 0x7fb004e0  sq          $s0, 0x4E0($sp)
    ctx->pc = 0x3b753cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 16));
label_3b7540:
    // 0x3b7540: 0x7fb304b0  sq          $s3, 0x4B0($sp)
    ctx->pc = 0x3b7540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 19));
label_3b7544:
    // 0x3b7544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b7544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b7548:
    // 0x3b7548: 0x7fb404a0  sq          $s4, 0x4A0($sp)
    ctx->pc = 0x3b7548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 20));
label_3b754c:
    // 0x3b754c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b754cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b7550:
    // 0x3b7550: 0x7fb104d0  sq          $s1, 0x4D0($sp)
    ctx->pc = 0x3b7550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 17));
label_3b7554:
    // 0x3b7554: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x3b7554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_3b7558:
    // 0x3b7558: 0x7fb50490  sq          $s5, 0x490($sp)
    ctx->pc = 0x3b7558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 21));
label_3b755c:
    // 0x3b755c: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3b755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3b7560:
    // 0x3b7560: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3b7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3b7564:
    // 0x3b7564: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b7564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b7568:
    // 0x3b7568: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b756c:
    // 0x3b756c: 0x40f809  jalr        $v0
label_3b7570:
    if (ctx->pc == 0x3B7570u) {
        ctx->pc = 0x3B7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B756Cu;
        // 0x3b7570: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7574u;
        goto label_3b7574;
    }
    ctx->pc = 0x3B756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B7574u);
        ctx->pc = 0x3B7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B756Cu;
        // 0x3b7570: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B756Cu, 0x3B7574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7574u;
label_3b7574:
    // 0x3b7574: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b7574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7578:
    // 0x3b7578: 0xc0ea14c  jal         func_3A8530
label_3b757c:
    if (ctx->pc == 0x3B757Cu) {
        ctx->pc = 0x3B757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7578u;
        // 0x3b757c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7580u;
        goto label_3b7580;
    }
    ctx->pc = 0x3B7578u;
    SET_GPR_U32(ctx, 31, 0x3B7580u);
    ctx->pc = 0x3B757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7578u;
    // 0x3b757c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B7578u, 0x3B7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7580u;
label_3b7580:
    // 0x3b7580: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7584:
    // 0x3b7584: 0xc0ea12a  jal         func_3A84A8
label_3b7588:
    if (ctx->pc == 0x3B7588u) {
        ctx->pc = 0x3B7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7584u;
        // 0x3b7588: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B758Cu;
        goto label_3b758c;
    }
    ctx->pc = 0x3B7584u;
    SET_GPR_U32(ctx, 31, 0x3B758Cu);
    ctx->pc = 0x3B7588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7584u;
    // 0x3b7588: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B7584u, 0x3B758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B758Cu;
label_3b758c:
    // 0x3b758c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b758cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b7590:
    // 0x3b7590: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b7590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7594:
    // 0x3b7594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b7594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7598:
    // 0x3b7598: 0xc0ea12a  jal         func_3A84A8
label_3b759c:
    if (ctx->pc == 0x3B759Cu) {
        ctx->pc = 0x3B759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7598u;
        // 0x3b759c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B75A0u;
        goto label_3b75a0;
    }
    ctx->pc = 0x3B7598u;
    SET_GPR_U32(ctx, 31, 0x3B75A0u);
    ctx->pc = 0x3B759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7598u;
    // 0x3b759c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B7598u, 0x3B75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B75A0u;
label_3b75a0:
    // 0x3b75a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b75a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b75a4:
    // 0x3b75a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b75a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b75a8:
    // 0x3b75a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b75a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b75ac:
    // 0x3b75ac: 0xc0e9132  jal         func_3A44C8
label_3b75b0:
    if (ctx->pc == 0x3B75B0u) {
        ctx->pc = 0x3B75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75ACu;
        // 0x3b75b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B75B4u;
        goto label_3b75b4;
    }
    ctx->pc = 0x3B75ACu;
    SET_GPR_U32(ctx, 31, 0x3B75B4u);
    ctx->pc = 0x3B75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B75ACu;
    // 0x3b75b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B75ACu, 0x3B75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B75B4u;
label_3b75b4:
    // 0x3b75b4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3b75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3b75b8:
    // 0x3b75b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b75b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b75bc:
    // 0x3b75bc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b75bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3b75c0:
    // 0x3b75c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b75c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b75c4:
    // 0x3b75c4: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3b75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3b75c8:
    // 0x3b75c8: 0xc0e858c  jal         func_3A1630
label_3b75cc:
    if (ctx->pc == 0x3B75CCu) {
        ctx->pc = 0x3B75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75C8u;
        // 0x3b75cc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B75D0u;
        goto label_3b75d0;
    }
    ctx->pc = 0x3B75C8u;
    SET_GPR_U32(ctx, 31, 0x3B75D0u);
    ctx->pc = 0x3B75CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B75C8u;
    // 0x3b75cc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B75C8u, 0x3B75D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B75D0u;
label_3b75d0:
    // 0x3b75d0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3b75d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b75d4:
    // 0x3b75d4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3b75d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3b75d8:
    // 0x3b75d8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b75d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b75dc:
    // 0x3b75dc: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x3b75dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b75e0:
    // 0x3b75e0: 0xae7000c4  sw          $s0, 0xC4($s3)
    ctx->pc = 0x3b75e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 16));
label_3b75e4:
    // 0x3b75e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b75e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b75e8:
    // 0x3b75e8: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3b75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_3b75ec:
    // 0x3b75ec: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x3b75ecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
label_3b75f0:
    // 0x3b75f0: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x3b75f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_3b75f4:
    // 0x3b75f4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3b75f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3b75f8:
    // 0x3b75f8: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3b75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_3b75fc:
    // 0x3b75fc: 0xc1073cc  jal         func_41CF30
label_3b7600:
    if (ctx->pc == 0x3B7600u) {
        ctx->pc = 0x3B7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B75FCu;
        // 0x3b7600: 0xae870008  sw          $a3, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7604u;
        goto label_3b7604;
    }
    ctx->pc = 0x3B75FCu;
    SET_GPR_U32(ctx, 31, 0x3B7604u);
    ctx->pc = 0x3B7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B75FCu;
    // 0x3b7600: 0xae870008  sw          $a3, 0x8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B75FCu, 0x3B7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7604u;
label_3b7604:
    // 0x3b7604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7608:
    // 0x3b7608: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x3b7608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_3b760c:
    // 0x3b760c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b7610:
    if (ctx->pc == 0x3B7610u) {
        ctx->pc = 0x3B7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B760Cu;
        // 0x3b7610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7614u;
        goto label_3b7614;
    }
    ctx->pc = 0x3B760Cu;
    {
        const bool branch_taken_0x3b760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B760Cu;
        // 0x3b7610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b760c) {
            ctx->pc = 0x3B7630u;
            goto label_3b7630;
        }
    }
    ctx->pc = 0x3B7614u;
label_3b7614:
    // 0x3b7614: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x3b7614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_3b7618:
    // 0x3b7618: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b761c:
    if (ctx->pc == 0x3B761Cu) {
        ctx->pc = 0x3B761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7618u;
        // 0x3b761c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7620u;
        goto label_3b7620;
    }
    ctx->pc = 0x3B7618u;
    {
        const bool branch_taken_0x3b7618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7618u;
        // 0x3b761c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7618) {
            ctx->pc = 0x3B762Cu;
            goto label_3b762c;
        }
    }
    ctx->pc = 0x3B7620u;
label_3b7620:
    // 0x3b7620: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x3b7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3b7624:
    // 0x3b7624: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b7624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3b7628:
    // 0x3b7628: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3b7628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_3b762c:
    // 0x3b762c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b7630:
    // 0x3b7630: 0xc0e8e26  jal         func_3A3898
label_3b7634:
    if (ctx->pc == 0x3B7634u) {
        ctx->pc = 0x3B7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7630u;
        // 0x3b7634: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7638u;
        goto label_3b7638;
    }
    ctx->pc = 0x3B7630u;
    SET_GPR_U32(ctx, 31, 0x3B7638u);
    ctx->pc = 0x3B7634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7630u;
    // 0x3b7634: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3B7630u, 0x3B7638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7638u;
label_3b7638:
    // 0x3b7638: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b7638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b763c:
    // 0x3b763c: 0x0  nop
    ctx->pc = 0x3b763cu;
    // NOP
label_3b7640:
    // 0x3b7640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b7640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b7644:
    // 0x3b7644: 0x0  nop
    ctx->pc = 0x3b7644u;
    // NOP
label_3b7648:
    // 0x3b7648: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3b764c:
    if (ctx->pc == 0x3B764Cu) {
        ctx->pc = 0x3B764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7648u;
        // 0x3b764c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7650u;
        goto label_3b7650;
    }
    ctx->pc = 0x3B7648u;
    {
        const bool branch_taken_0x3b7648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7648u;
        // 0x3b764c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7648) {
            ctx->pc = 0x3B7658u;
            goto label_3b7658;
        }
    }
    ctx->pc = 0x3B7650u;
label_3b7650:
    // 0x3b7650: 0x1000000e  b           . + 4 + (0xE << 2)
label_3b7654:
    if (ctx->pc == 0x3B7654u) {
        ctx->pc = 0x3B7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7650u;
        // 0x3b7654: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7658u;
        goto label_3b7658;
    }
    ctx->pc = 0x3B7650u;
    {
        const bool branch_taken_0x3b7650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7650u;
        // 0x3b7654: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7650) {
            ctx->pc = 0x3B768Cu;
            goto label_3b768c;
        }
    }
    ctx->pc = 0x3B7658u;
label_3b7658:
    // 0x3b7658: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3b7658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_3b765c:
    // 0x3b765c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3b7660:
    if (ctx->pc == 0x3B7660u) {
        ctx->pc = 0x3B7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B765Cu;
        // 0x3b7660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7664u;
        goto label_3b7664;
    }
    ctx->pc = 0x3B765Cu;
    {
        const bool branch_taken_0x3b765c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B765Cu;
        // 0x3b7660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b765c) {
            ctx->pc = 0x3B767Cu;
            goto label_3b767c;
        }
    }
    ctx->pc = 0x3B7664u;
label_3b7664:
    // 0x3b7664: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b7664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b7668:
    // 0x3b7668: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3b7668u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3b766c:
    // 0x3b766c: 0xc0e91f0  jal         func_3A47C0
label_3b7670:
    if (ctx->pc == 0x3B7670u) {
        ctx->pc = 0x3B7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B766Cu;
        // 0x3b7670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7674u;
        goto label_3b7674;
    }
    ctx->pc = 0x3B766Cu;
    SET_GPR_U32(ctx, 31, 0x3B7674u);
    ctx->pc = 0x3B7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B766Cu;
    // 0x3b7670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3B766Cu, 0x3B7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7674u;
label_3b7674:
    // 0x3b7674: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b7678:
    if (ctx->pc == 0x3B7678u) {
        ctx->pc = 0x3B7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7674u;
        // 0x3b7678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B767Cu;
        goto label_3b767c;
    }
    ctx->pc = 0x3B7674u;
    {
        const bool branch_taken_0x3b7674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7674u;
        // 0x3b7678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7674) {
            ctx->pc = 0x3B7690u;
            goto label_3b7690;
        }
    }
    ctx->pc = 0x3B767Cu;
label_3b767c:
    // 0x3b767c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3b767cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3b7680:
    // 0x3b7680: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b7680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b7684:
    // 0x3b7684: 0xc0e91f0  jal         func_3A47C0
label_3b7688:
    if (ctx->pc == 0x3B7688u) {
        ctx->pc = 0x3B7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7684u;
        // 0x3b7688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B768Cu;
        goto label_3b768c;
    }
    ctx->pc = 0x3B7684u;
    SET_GPR_U32(ctx, 31, 0x3B768Cu);
    ctx->pc = 0x3B7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7684u;
    // 0x3b7688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3B7684u, 0x3B768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B768Cu;
label_3b768c:
    // 0x3b768c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b7690:
    // 0x3b7690: 0xc0e8dee  jal         func_3A37B8
label_3b7694:
    if (ctx->pc == 0x3B7694u) {
        ctx->pc = 0x3B7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7690u;
        // 0x3b7694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7698u;
        goto label_3b7698;
    }
    ctx->pc = 0x3B7690u;
    SET_GPR_U32(ctx, 31, 0x3B7698u);
    ctx->pc = 0x3B7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7690u;
    // 0x3b7694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B7690u, 0x3B7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7698u;
label_3b7698:
    // 0x3b7698: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3b769c:
    if (ctx->pc == 0x3B769Cu) {
        ctx->pc = 0x3B769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7698u;
        // 0x3b769c: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B76A0u;
        goto label_3b76a0;
    }
    ctx->pc = 0x3B7698u;
    {
        const bool branch_taken_0x3b7698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7698) {
            ctx->pc = 0x3B769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7698u;
            // 0x3b769c: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B76ACu;
            goto label_3b76ac;
        }
    }
    ctx->pc = 0x3B76A0u;
label_3b76a0:
    // 0x3b76a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b76a4:
    // 0x3b76a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b76a8:
    if (ctx->pc == 0x3B76A8u) {
        ctx->pc = 0x3B76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76A4u;
        // 0x3b76a8: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B76ACu;
        goto label_3b76ac;
    }
    ctx->pc = 0x3B76A4u;
    {
        const bool branch_taken_0x3b76a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76A4u;
        // 0x3b76a8: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b76a4) {
            ctx->pc = 0x3B76B4u;
            goto label_3b76b4;
        }
    }
    ctx->pc = 0x3B76ACu;
label_3b76ac:
    // 0x3b76ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b76acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b76b0:
    // 0x3b76b0: 0xae620128  sw          $v0, 0x128($s3)
    ctx->pc = 0x3b76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 2));
label_3b76b4:
    // 0x3b76b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b76b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b76b8:
    // 0x3b76b8: 0xc0e8dee  jal         func_3A37B8
label_3b76bc:
    if (ctx->pc == 0x3B76BCu) {
        ctx->pc = 0x3B76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76B8u;
        // 0x3b76bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B76C0u;
        goto label_3b76c0;
    }
    ctx->pc = 0x3B76B8u;
    SET_GPR_U32(ctx, 31, 0x3B76C0u);
    ctx->pc = 0x3B76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B76B8u;
    // 0x3b76bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B76B8u, 0x3B76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B76C0u;
label_3b76c0:
    // 0x3b76c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3b76c4:
    if (ctx->pc == 0x3B76C4u) {
        ctx->pc = 0x3B76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76C0u;
        // 0x3b76c4: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B76C8u;
        goto label_3b76c8;
    }
    ctx->pc = 0x3B76C0u;
    {
        const bool branch_taken_0x3b76c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b76c0) {
            ctx->pc = 0x3B76C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B76C0u;
            // 0x3b76c4: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B76D4u;
            goto label_3b76d4;
        }
    }
    ctx->pc = 0x3B76C8u;
label_3b76c8:
    // 0x3b76c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b76cc:
    // 0x3b76cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b76d0:
    if (ctx->pc == 0x3B76D0u) {
        ctx->pc = 0x3B76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76CCu;
        // 0x3b76d0: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B76D4u;
        goto label_3b76d4;
    }
    ctx->pc = 0x3B76CCu;
    {
        const bool branch_taken_0x3b76cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76CCu;
        // 0x3b76d0: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b76cc) {
            ctx->pc = 0x3B76DCu;
            goto label_3b76dc;
        }
    }
    ctx->pc = 0x3B76D4u;
label_3b76d4:
    // 0x3b76d4: 0xa262010d  sb          $v0, 0x10D($s3)
    ctx->pc = 0x3b76d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 269), (uint8_t)GPR_U32(ctx, 2));
label_3b76d8:
    // 0x3b76d8: 0xae600128  sw          $zero, 0x128($s3)
    ctx->pc = 0x3b76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 0));
label_3b76dc:
    // 0x3b76dc: 0x3c029b67  lui         $v0, 0x9B67
    ctx->pc = 0x3b76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39783 << 16));
label_3b76e0:
    // 0x3b76e0: 0x8e7500c4  lw          $s5, 0xC4($s3)
    ctx->pc = 0x3b76e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3b76e4:
    // 0x3b76e4: 0x34423248  ori         $v0, $v0, 0x3248
    ctx->pc = 0x3b76e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12872);
label_3b76e8:
    // 0x3b76e8: 0x16a20025  bne         $s5, $v0, . + 4 + (0x25 << 2)
label_3b76ec:
    if (ctx->pc == 0x3B76ECu) {
        ctx->pc = 0x3B76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76E8u;
        // 0x3b76ec: 0x27b00460  addiu       $s0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B76F0u;
        goto label_3b76f0;
    }
    ctx->pc = 0x3B76E8u;
    {
        const bool branch_taken_0x3b76e8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B76E8u;
        // 0x3b76ec: 0x27b00460  addiu       $s0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b76e8) {
            ctx->pc = 0x3B7780u;
            goto label_3b7780;
        }
    }
    ctx->pc = 0x3B76F0u;
label_3b76f0:
    // 0x3b76f0: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x3b76f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_3b76f4:
    // 0x3b76f4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3b76f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_3b76f8:
    // 0x3b76f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b76f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b76fc:
    // 0x3b76fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b76fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b7700:
    // 0x3b7700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b7700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b7704:
    // 0x3b7704: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3b7704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3b7708:
    // 0x3b7708: 0xafa00460  sw          $zero, 0x460($sp)
    ctx->pc = 0x3b7708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
label_3b770c:
    // 0x3b770c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b770cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b7710:
    // 0x3b7710: 0xafa00464  sw          $zero, 0x464($sp)
    ctx->pc = 0x3b7710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 0));
label_3b7714:
    // 0x3b7714: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b7714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b7718:
    // 0x3b7718: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3b7718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3b771c:
    // 0x3b771c: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3b771cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b7720:
    // 0x3b7720: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3b7720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b7724:
    // 0x3b7724: 0x26312540  addiu       $s1, $s1, 0x2540
    ctx->pc = 0x3b7724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9536));
label_3b7728:
    // 0x3b7728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b772c:
    // 0x3b772c: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3b772cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b7730:
    // 0x3b7730: 0xc136b18  jal         func_4DAC60
label_3b7734:
    if (ctx->pc == 0x3B7734u) {
        ctx->pc = 0x3B7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7730u;
        // 0x3b7734: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7738u;
        goto label_3b7738;
    }
    ctx->pc = 0x3B7730u;
    SET_GPR_U32(ctx, 31, 0x3B7738u);
    ctx->pc = 0x3B7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7730u;
    // 0x3b7734: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B7730u, 0x3B7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7738u;
label_3b7738:
    // 0x3b7738: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3b7738u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b773c:
    // 0x3b773c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7740:
    // 0x3b7740: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b7740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7744:
    // 0x3b7744: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b7744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7748:
    // 0x3b7748: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3b7748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3b774c:
    // 0x3b774c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b7750:
    // 0x3b7750: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3b7750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3b7754:
    // 0x3b7754: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3b7754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b7758:
    // 0x3b7758: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3b7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3b775c:
    // 0x3b775c: 0xc0e9fa6  jal         func_3A7E98
label_3b7760:
    if (ctx->pc == 0x3B7760u) {
        ctx->pc = 0x3B7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B775Cu;
        // 0x3b7760: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7764u;
        goto label_3b7764;
    }
    ctx->pc = 0x3B775Cu;
    SET_GPR_U32(ctx, 31, 0x3B7764u);
    ctx->pc = 0x3B7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B775Cu;
    // 0x3b7760: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B775Cu, 0x3B7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7764u;
label_3b7764:
    // 0x3b7764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b7764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b7768:
    // 0x3b7768: 0xc0f15bc  jal         func_3C56F0
label_3b776c:
    if (ctx->pc == 0x3B776Cu) {
        ctx->pc = 0x3B776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7768u;
        // 0x3b776c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7770u;
        goto label_3b7770;
    }
    ctx->pc = 0x3B7768u;
    SET_GPR_U32(ctx, 31, 0x3B7770u);
    ctx->pc = 0x3B776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7768u;
    // 0x3b776c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B7768u, 0x3B7770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7770u;
label_3b7770:
    // 0x3b7770: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3b7770u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3b7774:
    // 0x3b7774: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3b7774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3b7778:
    // 0x3b7778: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3b7778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3b777c:
    // 0x3b777c: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3b777cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3b7780:
    // 0x3b7780: 0x3c029a72  lui         $v0, 0x9A72
    ctx->pc = 0x3b7780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39538 << 16));
label_3b7784:
    // 0x3b7784: 0x3442b9bc  ori         $v0, $v0, 0xB9BC
    ctx->pc = 0x3b7784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47548);
label_3b7788:
    // 0x3b7788: 0x16a20027  bne         $s5, $v0, . + 4 + (0x27 << 2)
label_3b778c:
    if (ctx->pc == 0x3B778Cu) {
        ctx->pc = 0x3B778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7788u;
        // 0x3b778c: 0x3c027422  lui         $v0, 0x7422 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29730 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7790u;
        goto label_3b7790;
    }
    ctx->pc = 0x3B7788u;
    {
        const bool branch_taken_0x3b7788 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7788u;
        // 0x3b778c: 0x3c027422  lui         $v0, 0x7422 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29730 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7788) {
            ctx->pc = 0x3B7828u;
            goto label_3b7828;
        }
    }
    ctx->pc = 0x3B7790u;
label_3b7790:
    // 0x3b7790: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x3b7790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
label_3b7794:
    // 0x3b7794: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x3b7794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_3b7798:
    // 0x3b7798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b7798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b779c:
    // 0x3b779c: 0x27b00460  addiu       $s0, $sp, 0x460
    ctx->pc = 0x3b779cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b77a0:
    // 0x3b77a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b77a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b77a4:
    // 0x3b77a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b77a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b77a8:
    // 0x3b77a8: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3b77a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3b77ac:
    // 0x3b77ac: 0xafa00460  sw          $zero, 0x460($sp)
    ctx->pc = 0x3b77acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
label_3b77b0:
    // 0x3b77b0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3b77b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b77b4:
    // 0x3b77b4: 0xafa00464  sw          $zero, 0x464($sp)
    ctx->pc = 0x3b77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 0));
label_3b77b8:
    // 0x3b77b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b77b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b77bc:
    // 0x3b77bc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3b77bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3b77c0:
    // 0x3b77c0: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3b77c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b77c4:
    // 0x3b77c4: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3b77c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b77c8:
    // 0x3b77c8: 0x26312558  addiu       $s1, $s1, 0x2558
    ctx->pc = 0x3b77c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9560));
label_3b77cc:
    // 0x3b77cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b77ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b77d0:
    // 0x3b77d0: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3b77d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b77d4:
    // 0x3b77d4: 0xc136b18  jal         func_4DAC60
label_3b77d8:
    if (ctx->pc == 0x3B77D8u) {
        ctx->pc = 0x3B77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B77D4u;
        // 0x3b77d8: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B77DCu;
        goto label_3b77dc;
    }
    ctx->pc = 0x3B77D4u;
    SET_GPR_U32(ctx, 31, 0x3B77DCu);
    ctx->pc = 0x3B77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B77D4u;
    // 0x3b77d8: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B77D4u, 0x3B77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77DCu;
label_3b77dc:
    // 0x3b77dc: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3b77dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b77e0:
    // 0x3b77e0: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3b77e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3b77e4:
    // 0x3b77e4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b77e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b77e8:
    // 0x3b77e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b77e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b77ec:
    // 0x3b77ec: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3b77ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3b77f0:
    // 0x3b77f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b77f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b77f4:
    // 0x3b77f4: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3b77f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3b77f8:
    // 0x3b77f8: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3b77f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b77fc:
    // 0x3b77fc: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3b77fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3b7800:
    // 0x3b7800: 0xc0e9fa6  jal         func_3A7E98
label_3b7804:
    if (ctx->pc == 0x3B7804u) {
        ctx->pc = 0x3B7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7800u;
        // 0x3b7804: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7808u;
        goto label_3b7808;
    }
    ctx->pc = 0x3B7800u;
    SET_GPR_U32(ctx, 31, 0x3B7808u);
    ctx->pc = 0x3B7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7800u;
    // 0x3b7804: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B7800u, 0x3B7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7808u;
label_3b7808:
    // 0x3b7808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b7808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b780c:
    // 0x3b780c: 0xc0f15bc  jal         func_3C56F0
label_3b7810:
    if (ctx->pc == 0x3B7810u) {
        ctx->pc = 0x3B7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B780Cu;
        // 0x3b7810: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7814u;
        goto label_3b7814;
    }
    ctx->pc = 0x3B780Cu;
    SET_GPR_U32(ctx, 31, 0x3B7814u);
    ctx->pc = 0x3B7810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B780Cu;
    // 0x3b7810: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B780Cu, 0x3B7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7814u;
label_3b7814:
    // 0x3b7814: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3b7814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3b7818:
    // 0x3b7818: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3b7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3b781c:
    // 0x3b781c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3b781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3b7820:
    // 0x3b7820: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3b7820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3b7824:
    // 0x3b7824: 0x3c027422  lui         $v0, 0x7422
    ctx->pc = 0x3b7824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29730 << 16));
label_3b7828:
    // 0x3b7828: 0x34428f70  ori         $v0, $v0, 0x8F70
    ctx->pc = 0x3b7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36720);
label_3b782c:
    // 0x3b782c: 0x16a2000c  bne         $s5, $v0, . + 4 + (0xC << 2)
label_3b7830:
    if (ctx->pc == 0x3B7830u) {
        ctx->pc = 0x3B7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B782Cu;
        // 0x3b7830: 0x3c021c21  lui         $v0, 0x1C21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7834u;
        goto label_3b7834;
    }
    ctx->pc = 0x3B782Cu;
    {
        const bool branch_taken_0x3b782c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B782Cu;
        // 0x3b7830: 0x3c021c21  lui         $v0, 0x1C21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b782c) {
            ctx->pc = 0x3B7860u;
            goto label_3b7860;
        }
    }
    ctx->pc = 0x3B7834u;
label_3b7834:
    // 0x3b7834: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3b7834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3b7838:
    // 0x3b7838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b7838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b783c:
    // 0x3b783c: 0x24842568  addiu       $a0, $a0, 0x2568
    ctx->pc = 0x3b783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9576));
label_3b7840:
    // 0x3b7840: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3b7840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b7844:
    // 0x3b7844: 0xc0e94fc  jal         func_3A53F0
label_3b7848:
    if (ctx->pc == 0x3B7848u) {
        ctx->pc = 0x3B7848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7844u;
        // 0x3b7848: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B784Cu;
        goto label_3b784c;
    }
    ctx->pc = 0x3B7844u;
    SET_GPR_U32(ctx, 31, 0x3B784Cu);
    ctx->pc = 0x3B7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7844u;
    // 0x3b7848: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B7844u, 0x3B784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B784Cu;
label_3b784c:
    // 0x3b784c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3b784cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3b7850:
    // 0x3b7850: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3b7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3b7854:
    // 0x3b7854: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3b7854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3b7858:
    // 0x3b7858: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3b7858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3b785c:
    // 0x3b785c: 0x3c021c21  lui         $v0, 0x1C21
    ctx->pc = 0x3b785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7201 << 16));
label_3b7860:
    // 0x3b7860: 0x3442bdc3  ori         $v0, $v0, 0xBDC3
    ctx->pc = 0x3b7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48579);
label_3b7864:
    // 0x3b7864: 0x16a20025  bne         $s5, $v0, . + 4 + (0x25 << 2)
label_3b7868:
    if (ctx->pc == 0x3B7868u) {
        ctx->pc = 0x3B7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7864u;
        // 0x3b7868: 0x27b00460  addiu       $s0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B786Cu;
        goto label_3b786c;
    }
    ctx->pc = 0x3B7864u;
    {
        const bool branch_taken_0x3b7864 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7864u;
        // 0x3b7868: 0x27b00460  addiu       $s0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7864) {
            ctx->pc = 0x3B78FCu;
            goto label_3b78fc;
        }
    }
    ctx->pc = 0x3B786Cu;
label_3b786c:
    // 0x3b786c: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x3b786cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_3b7870:
    // 0x3b7870: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x3b7870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_3b7874:
    // 0x3b7874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b7874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7878:
    // 0x3b7878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b7878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b787c:
    // 0x3b787c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b787cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b7880:
    // 0x3b7880: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3b7880u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3b7884:
    // 0x3b7884: 0xafa00460  sw          $zero, 0x460($sp)
    ctx->pc = 0x3b7884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
label_3b7888:
    // 0x3b7888: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3b7888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b788c:
    // 0x3b788c: 0xafa00464  sw          $zero, 0x464($sp)
    ctx->pc = 0x3b788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 0));
label_3b7890:
    // 0x3b7890: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b7890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b7894:
    // 0x3b7894: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3b7894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3b7898:
    // 0x3b7898: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3b7898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b789c:
    // 0x3b789c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3b789cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3b78a0:
    // 0x3b78a0: 0x26312558  addiu       $s1, $s1, 0x2558
    ctx->pc = 0x3b78a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9560));
label_3b78a4:
    // 0x3b78a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b78a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b78a8:
    // 0x3b78a8: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3b78a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b78ac:
    // 0x3b78ac: 0xc136b18  jal         func_4DAC60
label_3b78b0:
    if (ctx->pc == 0x3B78B0u) {
        ctx->pc = 0x3B78B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78ACu;
        // 0x3b78b0: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B78B4u;
        goto label_3b78b4;
    }
    ctx->pc = 0x3B78ACu;
    SET_GPR_U32(ctx, 31, 0x3B78B4u);
    ctx->pc = 0x3B78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B78ACu;
    // 0x3b78b0: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B78ACu, 0x3B78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78B4u;
label_3b78b4:
    // 0x3b78b4: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3b78b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b78b8:
    // 0x3b78b8: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3b78b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3b78bc:
    // 0x3b78bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b78bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b78c0:
    // 0x3b78c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b78c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b78c4:
    // 0x3b78c4: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3b78c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3b78c8:
    // 0x3b78c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b78c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b78cc:
    // 0x3b78cc: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3b78ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3b78d0:
    // 0x3b78d0: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3b78d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3b78d4:
    // 0x3b78d4: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3b78d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3b78d8:
    // 0x3b78d8: 0xc0e9fa6  jal         func_3A7E98
label_3b78dc:
    if (ctx->pc == 0x3B78DCu) {
        ctx->pc = 0x3B78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78D8u;
        // 0x3b78dc: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B78E0u;
        goto label_3b78e0;
    }
    ctx->pc = 0x3B78D8u;
    SET_GPR_U32(ctx, 31, 0x3B78E0u);
    ctx->pc = 0x3B78DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B78D8u;
    // 0x3b78dc: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B78D8u, 0x3B78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78E0u;
label_3b78e0:
    // 0x3b78e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b78e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b78e4:
    // 0x3b78e4: 0xc0f15bc  jal         func_3C56F0
label_3b78e8:
    if (ctx->pc == 0x3B78E8u) {
        ctx->pc = 0x3B78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78E4u;
        // 0x3b78e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B78ECu;
        goto label_3b78ec;
    }
    ctx->pc = 0x3B78E4u;
    SET_GPR_U32(ctx, 31, 0x3B78ECu);
    ctx->pc = 0x3B78E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B78E4u;
    // 0x3b78e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B78E4u, 0x3B78ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78ECu;
label_3b78ec:
    // 0x3b78ec: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3b78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3b78f0:
    // 0x3b78f0: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3b78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3b78f4:
    // 0x3b78f4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3b78f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3b78f8:
    // 0x3b78f8: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3b78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3b78fc:
    // 0x3b78fc: 0x3c02c31a  lui         $v0, 0xC31A
    ctx->pc = 0x3b78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49946 << 16));
label_3b7900:
    // 0x3b7900: 0x34428e7a  ori         $v0, $v0, 0x8E7A
    ctx->pc = 0x3b7900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36474);
label_3b7904:
    // 0x3b7904: 0x16a2003c  bne         $s5, $v0, . + 4 + (0x3C << 2)
label_3b7908:
    if (ctx->pc == 0x3B7908u) {
        ctx->pc = 0x3B7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7904u;
        // 0x3b7908: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B790Cu;
        goto label_3b790c;
    }
    ctx->pc = 0x3B7904u;
    {
        const bool branch_taken_0x3b7904 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7904u;
        // 0x3b7908: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7904) {
            ctx->pc = 0x3B79F8u;
            goto label_3b79f8;
        }
    }
    ctx->pc = 0x3B790Cu;
label_3b790c:
    // 0x3b790c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3b790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b7910:
    // 0x3b7910: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x3b7910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
label_3b7914:
    // 0x3b7914: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3b7914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3b7918:
    // 0x3b7918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b7918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b791c:
    // 0x3b791c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b791cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b7920:
    // 0x3b7920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b7920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7924:
    // 0x3b7924: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b7924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b7928:
    // 0x3b7928: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3b7928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3b792c:
    // 0x3b792c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3b792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3b7930:
    // 0x3b7930: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3b7930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3b7934:
    // 0x3b7934: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3b7934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3b7938:
    // 0x3b7938: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3b7938u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b793c:
    // 0x3b793c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3b793cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7940:
    // 0x3b7940: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3b7940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3b7944:
    // 0x3b7944: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b7944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b7948:
    // 0x3b7948: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b7948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b794c:
    // 0x3b794c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b794cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b7950:
    // 0x3b7950: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b7950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7954:
    // 0x3b7954: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b7954u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b7958:
    // 0x3b7958: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b7958u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b795c:
    // 0x3b795c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b795cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7960:
    // 0x3b7960: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b7960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7964:
    // 0x3b7964: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b7964u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b7968:
    // 0x3b7968: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b7968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b796c:
    // 0x3b796c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b796cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b7970:
    // 0x3b7970: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b7970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b7974:
    // 0x3b7974: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b7974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7978:
    // 0x3b7978: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b7978u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b797c:
    // 0x3b797c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b797cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7980:
    // 0x3b7980: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b7980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7984:
    // 0x3b7984: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b7984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7988:
    // 0x3b7988: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b7988u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b798c:
    // 0x3b798c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b7990:
    // 0x3b7990: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b7990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b7994:
    // 0x3b7994: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3b7994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b7998:
    // 0x3b7998: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b7998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b799c:
    // 0x3b799c: 0xc136b18  jal         func_4DAC60
label_3b79a0:
    if (ctx->pc == 0x3B79A0u) {
        ctx->pc = 0x3B79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B799Cu;
        // 0x3b79a0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B79A4u;
        goto label_3b79a4;
    }
    ctx->pc = 0x3B799Cu;
    SET_GPR_U32(ctx, 31, 0x3B79A4u);
    ctx->pc = 0x3B79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B799Cu;
    // 0x3b79a0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B799Cu, 0x3B79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79A4u;
label_3b79a4:
    // 0x3b79a4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3b79a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b79a8:
    // 0x3b79a8: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3b79a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b79ac:
    // 0x3b79ac: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b79acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b79b0:
    // 0x3b79b0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b79b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b79b4:
    // 0x3b79b4: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3b79b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3b79b8:
    // 0x3b79b8: 0x26102578  addiu       $s0, $s0, 0x2578
    ctx->pc = 0x3b79b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9592));
label_3b79bc:
    // 0x3b79bc: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3b79bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3b79c0:
    // 0x3b79c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b79c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b79c4:
    // 0x3b79c4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3b79c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3b79c8:
    // 0x3b79c8: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3b79c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b79cc:
    // 0x3b79cc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3b79ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3b79d0:
    // 0x3b79d0: 0x27a70460  addiu       $a3, $sp, 0x460
    ctx->pc = 0x3b79d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b79d4:
    // 0x3b79d4: 0xc0e9fa6  jal         func_3A7E98
label_3b79d8:
    if (ctx->pc == 0x3B79D8u) {
        ctx->pc = 0x3B79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79D4u;
        // 0x3b79d8: 0xafa00460  sw          $zero, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B79DCu;
        goto label_3b79dc;
    }
    ctx->pc = 0x3B79D4u;
    SET_GPR_U32(ctx, 31, 0x3B79DCu);
    ctx->pc = 0x3B79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79D4u;
    // 0x3b79d8: 0xafa00460  sw          $zero, 0x460($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B79D4u, 0x3B79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79DCu;
label_3b79dc:
    // 0x3b79dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b79e0:
    // 0x3b79e0: 0xc0f15bc  jal         func_3C56F0
label_3b79e4:
    if (ctx->pc == 0x3B79E4u) {
        ctx->pc = 0x3B79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79E0u;
        // 0x3b79e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B79E8u;
        goto label_3b79e8;
    }
    ctx->pc = 0x3B79E0u;
    SET_GPR_U32(ctx, 31, 0x3B79E8u);
    ctx->pc = 0x3B79E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79E0u;
    // 0x3b79e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B79E0u, 0x3B79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79E8u;
label_3b79e8:
    // 0x3b79e8: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3b79e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3b79ec:
    // 0x3b79ec: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3b79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3b79f0:
    // 0x3b79f0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3b79f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3b79f4:
    // 0x3b79f4: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3b79f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3b79f8:
    // 0x3b79f8: 0x3c02dbf6  lui         $v0, 0xDBF6
    ctx->pc = 0x3b79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56310 << 16));
label_3b79fc:
    // 0x3b79fc: 0x3442d9f8  ori         $v0, $v0, 0xD9F8
    ctx->pc = 0x3b79fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55800);
label_3b7a00:
    // 0x3b7a00: 0x16a20011  bne         $s5, $v0, . + 4 + (0x11 << 2)
label_3b7a04:
    if (ctx->pc == 0x3B7A04u) {
        ctx->pc = 0x3B7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A00u;
        // 0x3b7a04: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A08u;
        goto label_3b7a08;
    }
    ctx->pc = 0x3B7A00u;
    {
        const bool branch_taken_0x3b7a00 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A00u;
        // 0x3b7a04: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a00) {
            ctx->pc = 0x3B7A48u;
            goto label_3b7a48;
        }
    }
    ctx->pc = 0x3B7A08u;
label_3b7a08:
    // 0x3b7a08: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3b7a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a0c:
    // 0x3b7a0c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b7a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b7a10:
    // 0x3b7a10: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3b7a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b7a14:
    // 0x3b7a14: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3b7a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3b7a18:
    // 0x3b7a18: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3b7a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3b7a1c:
    // 0x3b7a1c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3b7a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3b7a20:
    // 0x3b7a20: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x3b7a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b7a24:
    // 0x3b7a24: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x3b7a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b7a28:
    // 0x3b7a28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3b7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3b7a2c:
    // 0x3b7a2c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3b7a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b7a30:
    // 0x3b7a30: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3b7a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b7a34:
    // 0x3b7a34: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3b7a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_3b7a38:
    // 0x3b7a38: 0xc09436c  jal         func_250DB0
label_3b7a3c:
    if (ctx->pc == 0x3B7A3Cu) {
        ctx->pc = 0x3B7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A38u;
        // 0x3b7a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A40u;
        goto label_3b7a40;
    }
    ctx->pc = 0x3B7A38u;
    SET_GPR_U32(ctx, 31, 0x3B7A40u);
    ctx->pc = 0x3B7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7A38u;
    // 0x3b7a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250DB0u, 0x3B7A38u, 0x3B7A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7A40u;
label_3b7a40:
    // 0x3b7a40: 0xc094380  jal         func_250E00
label_3b7a44:
    if (ctx->pc == 0x3B7A44u) {
        ctx->pc = 0x3B7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A40u;
        // 0x3b7a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A48u;
        goto label_3b7a48;
    }
    ctx->pc = 0x3B7A40u;
    SET_GPR_U32(ctx, 31, 0x3B7A48u);
    ctx->pc = 0x3B7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7A40u;
    // 0x3b7a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250E00u, 0x3B7A40u, 0x3B7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7A48u;
label_3b7a48:
    // 0x3b7a48: 0x3c02a6b3  lui         $v0, 0xA6B3
    ctx->pc = 0x3b7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42675 << 16));
label_3b7a4c:
    // 0x3b7a4c: 0x344211bb  ori         $v0, $v0, 0x11BB
    ctx->pc = 0x3b7a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4539);
label_3b7a50:
    // 0x3b7a50: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
label_3b7a54:
    if (ctx->pc == 0x3B7A54u) {
        ctx->pc = 0x3B7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A50u;
        // 0x3b7a54: 0x7bb004e0  lq          $s0, 0x4E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A58u;
        goto label_3b7a58;
    }
    ctx->pc = 0x3B7A50u;
    {
        const bool branch_taken_0x3b7a50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A50u;
        // 0x3b7a54: 0x7bb004e0  lq          $s0, 0x4E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a50) {
            ctx->pc = 0x3B7A64u;
            goto label_3b7a64;
        }
    }
    ctx->pc = 0x3B7A58u;
label_3b7a58:
    // 0x3b7a58: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3b7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3b7a5c:
    // 0x3b7a5c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3b7a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3b7a60:
    // 0x3b7a60: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3b7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3b7a64:
    // 0x3b7a64: 0x7bb104d0  lq          $s1, 0x4D0($sp)
    ctx->pc = 0x3b7a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3b7a68:
    // 0x3b7a68: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x3b7a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3b7a6c:
    // 0x3b7a6c: 0x7bb304b0  lq          $s3, 0x4B0($sp)
    ctx->pc = 0x3b7a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3b7a70:
    // 0x3b7a70: 0x7bb404a0  lq          $s4, 0x4A0($sp)
    ctx->pc = 0x3b7a70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3b7a74:
    // 0x3b7a74: 0x7bb50490  lq          $s5, 0x490($sp)
    ctx->pc = 0x3b7a74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3b7a78:
    // 0x3b7a78: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3b7a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3b7a7c:
    // 0x3b7a7c: 0x3e00008  jr          $ra
label_3b7a80:
    if (ctx->pc == 0x3B7A80u) {
        ctx->pc = 0x3B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A7Cu;
        // 0x3b7a80: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A84u;
        goto label_3b7a84;
    }
    ctx->pc = 0x3B7A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A7Cu;
        // 0x3b7a80: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7A84u;
label_3b7a84:
    // 0x3b7a84: 0x0  nop
    ctx->pc = 0x3b7a84u;
    // NOP
    ctx->pc = 0x3b7a88u;
}
