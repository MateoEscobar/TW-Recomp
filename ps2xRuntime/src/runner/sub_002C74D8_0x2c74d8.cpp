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

// Function: sub_002C74D8
// Address: 0x2c74d8 - 0x2c7c20
void sub_002C74D8_0x2c74d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C74D8_0x2c74d8");
#endif

    switch (ctx->pc) {
        case 0x2c74d8u: goto label_2c74d8;
        case 0x2c74dcu: goto label_2c74dc;
        case 0x2c74e0u: goto label_2c74e0;
        case 0x2c74e4u: goto label_2c74e4;
        case 0x2c74e8u: goto label_2c74e8;
        case 0x2c74ecu: goto label_2c74ec;
        case 0x2c74f0u: goto label_2c74f0;
        case 0x2c74f4u: goto label_2c74f4;
        case 0x2c74f8u: goto label_2c74f8;
        case 0x2c74fcu: goto label_2c74fc;
        case 0x2c7500u: goto label_2c7500;
        case 0x2c7504u: goto label_2c7504;
        case 0x2c7508u: goto label_2c7508;
        case 0x2c750cu: goto label_2c750c;
        case 0x2c7510u: goto label_2c7510;
        case 0x2c7514u: goto label_2c7514;
        case 0x2c7518u: goto label_2c7518;
        case 0x2c751cu: goto label_2c751c;
        case 0x2c7520u: goto label_2c7520;
        case 0x2c7524u: goto label_2c7524;
        case 0x2c7528u: goto label_2c7528;
        case 0x2c752cu: goto label_2c752c;
        case 0x2c7530u: goto label_2c7530;
        case 0x2c7534u: goto label_2c7534;
        case 0x2c7538u: goto label_2c7538;
        case 0x2c753cu: goto label_2c753c;
        case 0x2c7540u: goto label_2c7540;
        case 0x2c7544u: goto label_2c7544;
        case 0x2c7548u: goto label_2c7548;
        case 0x2c754cu: goto label_2c754c;
        case 0x2c7550u: goto label_2c7550;
        case 0x2c7554u: goto label_2c7554;
        case 0x2c7558u: goto label_2c7558;
        case 0x2c755cu: goto label_2c755c;
        case 0x2c7560u: goto label_2c7560;
        case 0x2c7564u: goto label_2c7564;
        case 0x2c7568u: goto label_2c7568;
        case 0x2c756cu: goto label_2c756c;
        case 0x2c7570u: goto label_2c7570;
        case 0x2c7574u: goto label_2c7574;
        case 0x2c7578u: goto label_2c7578;
        case 0x2c757cu: goto label_2c757c;
        case 0x2c7580u: goto label_2c7580;
        case 0x2c7584u: goto label_2c7584;
        case 0x2c7588u: goto label_2c7588;
        case 0x2c758cu: goto label_2c758c;
        case 0x2c7590u: goto label_2c7590;
        case 0x2c7594u: goto label_2c7594;
        case 0x2c7598u: goto label_2c7598;
        case 0x2c759cu: goto label_2c759c;
        case 0x2c75a0u: goto label_2c75a0;
        case 0x2c75a4u: goto label_2c75a4;
        case 0x2c75a8u: goto label_2c75a8;
        case 0x2c75acu: goto label_2c75ac;
        case 0x2c75b0u: goto label_2c75b0;
        case 0x2c75b4u: goto label_2c75b4;
        case 0x2c75b8u: goto label_2c75b8;
        case 0x2c75bcu: goto label_2c75bc;
        case 0x2c75c0u: goto label_2c75c0;
        case 0x2c75c4u: goto label_2c75c4;
        case 0x2c75c8u: goto label_2c75c8;
        case 0x2c75ccu: goto label_2c75cc;
        case 0x2c75d0u: goto label_2c75d0;
        case 0x2c75d4u: goto label_2c75d4;
        case 0x2c75d8u: goto label_2c75d8;
        case 0x2c75dcu: goto label_2c75dc;
        case 0x2c75e0u: goto label_2c75e0;
        case 0x2c75e4u: goto label_2c75e4;
        case 0x2c75e8u: goto label_2c75e8;
        case 0x2c75ecu: goto label_2c75ec;
        case 0x2c75f0u: goto label_2c75f0;
        case 0x2c75f4u: goto label_2c75f4;
        case 0x2c75f8u: goto label_2c75f8;
        case 0x2c75fcu: goto label_2c75fc;
        case 0x2c7600u: goto label_2c7600;
        case 0x2c7604u: goto label_2c7604;
        case 0x2c7608u: goto label_2c7608;
        case 0x2c760cu: goto label_2c760c;
        case 0x2c7610u: goto label_2c7610;
        case 0x2c7614u: goto label_2c7614;
        case 0x2c7618u: goto label_2c7618;
        case 0x2c761cu: goto label_2c761c;
        case 0x2c7620u: goto label_2c7620;
        case 0x2c7624u: goto label_2c7624;
        case 0x2c7628u: goto label_2c7628;
        case 0x2c762cu: goto label_2c762c;
        case 0x2c7630u: goto label_2c7630;
        case 0x2c7634u: goto label_2c7634;
        case 0x2c7638u: goto label_2c7638;
        case 0x2c763cu: goto label_2c763c;
        case 0x2c7640u: goto label_2c7640;
        case 0x2c7644u: goto label_2c7644;
        case 0x2c7648u: goto label_2c7648;
        case 0x2c764cu: goto label_2c764c;
        case 0x2c7650u: goto label_2c7650;
        case 0x2c7654u: goto label_2c7654;
        case 0x2c7658u: goto label_2c7658;
        case 0x2c765cu: goto label_2c765c;
        case 0x2c7660u: goto label_2c7660;
        case 0x2c7664u: goto label_2c7664;
        case 0x2c7668u: goto label_2c7668;
        case 0x2c766cu: goto label_2c766c;
        case 0x2c7670u: goto label_2c7670;
        case 0x2c7674u: goto label_2c7674;
        case 0x2c7678u: goto label_2c7678;
        case 0x2c767cu: goto label_2c767c;
        case 0x2c7680u: goto label_2c7680;
        case 0x2c7684u: goto label_2c7684;
        case 0x2c7688u: goto label_2c7688;
        case 0x2c768cu: goto label_2c768c;
        case 0x2c7690u: goto label_2c7690;
        case 0x2c7694u: goto label_2c7694;
        case 0x2c7698u: goto label_2c7698;
        case 0x2c769cu: goto label_2c769c;
        case 0x2c76a0u: goto label_2c76a0;
        case 0x2c76a4u: goto label_2c76a4;
        case 0x2c76a8u: goto label_2c76a8;
        case 0x2c76acu: goto label_2c76ac;
        case 0x2c76b0u: goto label_2c76b0;
        case 0x2c76b4u: goto label_2c76b4;
        case 0x2c76b8u: goto label_2c76b8;
        case 0x2c76bcu: goto label_2c76bc;
        case 0x2c76c0u: goto label_2c76c0;
        case 0x2c76c4u: goto label_2c76c4;
        case 0x2c76c8u: goto label_2c76c8;
        case 0x2c76ccu: goto label_2c76cc;
        case 0x2c76d0u: goto label_2c76d0;
        case 0x2c76d4u: goto label_2c76d4;
        case 0x2c76d8u: goto label_2c76d8;
        case 0x2c76dcu: goto label_2c76dc;
        case 0x2c76e0u: goto label_2c76e0;
        case 0x2c76e4u: goto label_2c76e4;
        case 0x2c76e8u: goto label_2c76e8;
        case 0x2c76ecu: goto label_2c76ec;
        case 0x2c76f0u: goto label_2c76f0;
        case 0x2c76f4u: goto label_2c76f4;
        case 0x2c76f8u: goto label_2c76f8;
        case 0x2c76fcu: goto label_2c76fc;
        case 0x2c7700u: goto label_2c7700;
        case 0x2c7704u: goto label_2c7704;
        case 0x2c7708u: goto label_2c7708;
        case 0x2c770cu: goto label_2c770c;
        case 0x2c7710u: goto label_2c7710;
        case 0x2c7714u: goto label_2c7714;
        case 0x2c7718u: goto label_2c7718;
        case 0x2c771cu: goto label_2c771c;
        case 0x2c7720u: goto label_2c7720;
        case 0x2c7724u: goto label_2c7724;
        case 0x2c7728u: goto label_2c7728;
        case 0x2c772cu: goto label_2c772c;
        case 0x2c7730u: goto label_2c7730;
        case 0x2c7734u: goto label_2c7734;
        case 0x2c7738u: goto label_2c7738;
        case 0x2c773cu: goto label_2c773c;
        case 0x2c7740u: goto label_2c7740;
        case 0x2c7744u: goto label_2c7744;
        case 0x2c7748u: goto label_2c7748;
        case 0x2c774cu: goto label_2c774c;
        case 0x2c7750u: goto label_2c7750;
        case 0x2c7754u: goto label_2c7754;
        case 0x2c7758u: goto label_2c7758;
        case 0x2c775cu: goto label_2c775c;
        case 0x2c7760u: goto label_2c7760;
        case 0x2c7764u: goto label_2c7764;
        case 0x2c7768u: goto label_2c7768;
        case 0x2c776cu: goto label_2c776c;
        case 0x2c7770u: goto label_2c7770;
        case 0x2c7774u: goto label_2c7774;
        case 0x2c7778u: goto label_2c7778;
        case 0x2c777cu: goto label_2c777c;
        case 0x2c7780u: goto label_2c7780;
        case 0x2c7784u: goto label_2c7784;
        case 0x2c7788u: goto label_2c7788;
        case 0x2c778cu: goto label_2c778c;
        case 0x2c7790u: goto label_2c7790;
        case 0x2c7794u: goto label_2c7794;
        case 0x2c7798u: goto label_2c7798;
        case 0x2c779cu: goto label_2c779c;
        case 0x2c77a0u: goto label_2c77a0;
        case 0x2c77a4u: goto label_2c77a4;
        case 0x2c77a8u: goto label_2c77a8;
        case 0x2c77acu: goto label_2c77ac;
        case 0x2c77b0u: goto label_2c77b0;
        case 0x2c77b4u: goto label_2c77b4;
        case 0x2c77b8u: goto label_2c77b8;
        case 0x2c77bcu: goto label_2c77bc;
        case 0x2c77c0u: goto label_2c77c0;
        case 0x2c77c4u: goto label_2c77c4;
        case 0x2c77c8u: goto label_2c77c8;
        case 0x2c77ccu: goto label_2c77cc;
        case 0x2c77d0u: goto label_2c77d0;
        case 0x2c77d4u: goto label_2c77d4;
        case 0x2c77d8u: goto label_2c77d8;
        case 0x2c77dcu: goto label_2c77dc;
        case 0x2c77e0u: goto label_2c77e0;
        case 0x2c77e4u: goto label_2c77e4;
        case 0x2c77e8u: goto label_2c77e8;
        case 0x2c77ecu: goto label_2c77ec;
        case 0x2c77f0u: goto label_2c77f0;
        case 0x2c77f4u: goto label_2c77f4;
        case 0x2c77f8u: goto label_2c77f8;
        case 0x2c77fcu: goto label_2c77fc;
        case 0x2c7800u: goto label_2c7800;
        case 0x2c7804u: goto label_2c7804;
        case 0x2c7808u: goto label_2c7808;
        case 0x2c780cu: goto label_2c780c;
        case 0x2c7810u: goto label_2c7810;
        case 0x2c7814u: goto label_2c7814;
        case 0x2c7818u: goto label_2c7818;
        case 0x2c781cu: goto label_2c781c;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c7824u: goto label_2c7824;
        case 0x2c7828u: goto label_2c7828;
        case 0x2c782cu: goto label_2c782c;
        case 0x2c7830u: goto label_2c7830;
        case 0x2c7834u: goto label_2c7834;
        case 0x2c7838u: goto label_2c7838;
        case 0x2c783cu: goto label_2c783c;
        case 0x2c7840u: goto label_2c7840;
        case 0x2c7844u: goto label_2c7844;
        case 0x2c7848u: goto label_2c7848;
        case 0x2c784cu: goto label_2c784c;
        case 0x2c7850u: goto label_2c7850;
        case 0x2c7854u: goto label_2c7854;
        case 0x2c7858u: goto label_2c7858;
        case 0x2c785cu: goto label_2c785c;
        case 0x2c7860u: goto label_2c7860;
        case 0x2c7864u: goto label_2c7864;
        case 0x2c7868u: goto label_2c7868;
        case 0x2c786cu: goto label_2c786c;
        case 0x2c7870u: goto label_2c7870;
        case 0x2c7874u: goto label_2c7874;
        case 0x2c7878u: goto label_2c7878;
        case 0x2c787cu: goto label_2c787c;
        case 0x2c7880u: goto label_2c7880;
        case 0x2c7884u: goto label_2c7884;
        case 0x2c7888u: goto label_2c7888;
        case 0x2c788cu: goto label_2c788c;
        case 0x2c7890u: goto label_2c7890;
        case 0x2c7894u: goto label_2c7894;
        case 0x2c7898u: goto label_2c7898;
        case 0x2c789cu: goto label_2c789c;
        case 0x2c78a0u: goto label_2c78a0;
        case 0x2c78a4u: goto label_2c78a4;
        case 0x2c78a8u: goto label_2c78a8;
        case 0x2c78acu: goto label_2c78ac;
        case 0x2c78b0u: goto label_2c78b0;
        case 0x2c78b4u: goto label_2c78b4;
        case 0x2c78b8u: goto label_2c78b8;
        case 0x2c78bcu: goto label_2c78bc;
        case 0x2c78c0u: goto label_2c78c0;
        case 0x2c78c4u: goto label_2c78c4;
        case 0x2c78c8u: goto label_2c78c8;
        case 0x2c78ccu: goto label_2c78cc;
        case 0x2c78d0u: goto label_2c78d0;
        case 0x2c78d4u: goto label_2c78d4;
        case 0x2c78d8u: goto label_2c78d8;
        case 0x2c78dcu: goto label_2c78dc;
        case 0x2c78e0u: goto label_2c78e0;
        case 0x2c78e4u: goto label_2c78e4;
        case 0x2c78e8u: goto label_2c78e8;
        case 0x2c78ecu: goto label_2c78ec;
        case 0x2c78f0u: goto label_2c78f0;
        case 0x2c78f4u: goto label_2c78f4;
        case 0x2c78f8u: goto label_2c78f8;
        case 0x2c78fcu: goto label_2c78fc;
        case 0x2c7900u: goto label_2c7900;
        case 0x2c7904u: goto label_2c7904;
        case 0x2c7908u: goto label_2c7908;
        case 0x2c790cu: goto label_2c790c;
        case 0x2c7910u: goto label_2c7910;
        case 0x2c7914u: goto label_2c7914;
        case 0x2c7918u: goto label_2c7918;
        case 0x2c791cu: goto label_2c791c;
        case 0x2c7920u: goto label_2c7920;
        case 0x2c7924u: goto label_2c7924;
        case 0x2c7928u: goto label_2c7928;
        case 0x2c792cu: goto label_2c792c;
        case 0x2c7930u: goto label_2c7930;
        case 0x2c7934u: goto label_2c7934;
        case 0x2c7938u: goto label_2c7938;
        case 0x2c793cu: goto label_2c793c;
        case 0x2c7940u: goto label_2c7940;
        case 0x2c7944u: goto label_2c7944;
        case 0x2c7948u: goto label_2c7948;
        case 0x2c794cu: goto label_2c794c;
        case 0x2c7950u: goto label_2c7950;
        case 0x2c7954u: goto label_2c7954;
        case 0x2c7958u: goto label_2c7958;
        case 0x2c795cu: goto label_2c795c;
        case 0x2c7960u: goto label_2c7960;
        case 0x2c7964u: goto label_2c7964;
        case 0x2c7968u: goto label_2c7968;
        case 0x2c796cu: goto label_2c796c;
        case 0x2c7970u: goto label_2c7970;
        case 0x2c7974u: goto label_2c7974;
        case 0x2c7978u: goto label_2c7978;
        case 0x2c797cu: goto label_2c797c;
        case 0x2c7980u: goto label_2c7980;
        case 0x2c7984u: goto label_2c7984;
        case 0x2c7988u: goto label_2c7988;
        case 0x2c798cu: goto label_2c798c;
        case 0x2c7990u: goto label_2c7990;
        case 0x2c7994u: goto label_2c7994;
        case 0x2c7998u: goto label_2c7998;
        case 0x2c799cu: goto label_2c799c;
        case 0x2c79a0u: goto label_2c79a0;
        case 0x2c79a4u: goto label_2c79a4;
        case 0x2c79a8u: goto label_2c79a8;
        case 0x2c79acu: goto label_2c79ac;
        case 0x2c79b0u: goto label_2c79b0;
        case 0x2c79b4u: goto label_2c79b4;
        case 0x2c79b8u: goto label_2c79b8;
        case 0x2c79bcu: goto label_2c79bc;
        case 0x2c79c0u: goto label_2c79c0;
        case 0x2c79c4u: goto label_2c79c4;
        case 0x2c79c8u: goto label_2c79c8;
        case 0x2c79ccu: goto label_2c79cc;
        case 0x2c79d0u: goto label_2c79d0;
        case 0x2c79d4u: goto label_2c79d4;
        case 0x2c79d8u: goto label_2c79d8;
        case 0x2c79dcu: goto label_2c79dc;
        case 0x2c79e0u: goto label_2c79e0;
        case 0x2c79e4u: goto label_2c79e4;
        case 0x2c79e8u: goto label_2c79e8;
        case 0x2c79ecu: goto label_2c79ec;
        case 0x2c79f0u: goto label_2c79f0;
        case 0x2c79f4u: goto label_2c79f4;
        case 0x2c79f8u: goto label_2c79f8;
        case 0x2c79fcu: goto label_2c79fc;
        case 0x2c7a00u: goto label_2c7a00;
        case 0x2c7a04u: goto label_2c7a04;
        case 0x2c7a08u: goto label_2c7a08;
        case 0x2c7a0cu: goto label_2c7a0c;
        case 0x2c7a10u: goto label_2c7a10;
        case 0x2c7a14u: goto label_2c7a14;
        case 0x2c7a18u: goto label_2c7a18;
        case 0x2c7a1cu: goto label_2c7a1c;
        case 0x2c7a20u: goto label_2c7a20;
        case 0x2c7a24u: goto label_2c7a24;
        case 0x2c7a28u: goto label_2c7a28;
        case 0x2c7a2cu: goto label_2c7a2c;
        case 0x2c7a30u: goto label_2c7a30;
        case 0x2c7a34u: goto label_2c7a34;
        case 0x2c7a38u: goto label_2c7a38;
        case 0x2c7a3cu: goto label_2c7a3c;
        case 0x2c7a40u: goto label_2c7a40;
        case 0x2c7a44u: goto label_2c7a44;
        case 0x2c7a48u: goto label_2c7a48;
        case 0x2c7a4cu: goto label_2c7a4c;
        case 0x2c7a50u: goto label_2c7a50;
        case 0x2c7a54u: goto label_2c7a54;
        case 0x2c7a58u: goto label_2c7a58;
        case 0x2c7a5cu: goto label_2c7a5c;
        case 0x2c7a60u: goto label_2c7a60;
        case 0x2c7a64u: goto label_2c7a64;
        case 0x2c7a68u: goto label_2c7a68;
        case 0x2c7a6cu: goto label_2c7a6c;
        case 0x2c7a70u: goto label_2c7a70;
        case 0x2c7a74u: goto label_2c7a74;
        case 0x2c7a78u: goto label_2c7a78;
        case 0x2c7a7cu: goto label_2c7a7c;
        case 0x2c7a80u: goto label_2c7a80;
        case 0x2c7a84u: goto label_2c7a84;
        case 0x2c7a88u: goto label_2c7a88;
        case 0x2c7a8cu: goto label_2c7a8c;
        case 0x2c7a90u: goto label_2c7a90;
        case 0x2c7a94u: goto label_2c7a94;
        case 0x2c7a98u: goto label_2c7a98;
        case 0x2c7a9cu: goto label_2c7a9c;
        case 0x2c7aa0u: goto label_2c7aa0;
        case 0x2c7aa4u: goto label_2c7aa4;
        case 0x2c7aa8u: goto label_2c7aa8;
        case 0x2c7aacu: goto label_2c7aac;
        case 0x2c7ab0u: goto label_2c7ab0;
        case 0x2c7ab4u: goto label_2c7ab4;
        case 0x2c7ab8u: goto label_2c7ab8;
        case 0x2c7abcu: goto label_2c7abc;
        case 0x2c7ac0u: goto label_2c7ac0;
        case 0x2c7ac4u: goto label_2c7ac4;
        case 0x2c7ac8u: goto label_2c7ac8;
        case 0x2c7accu: goto label_2c7acc;
        case 0x2c7ad0u: goto label_2c7ad0;
        case 0x2c7ad4u: goto label_2c7ad4;
        case 0x2c7ad8u: goto label_2c7ad8;
        case 0x2c7adcu: goto label_2c7adc;
        case 0x2c7ae0u: goto label_2c7ae0;
        case 0x2c7ae4u: goto label_2c7ae4;
        case 0x2c7ae8u: goto label_2c7ae8;
        case 0x2c7aecu: goto label_2c7aec;
        case 0x2c7af0u: goto label_2c7af0;
        case 0x2c7af4u: goto label_2c7af4;
        case 0x2c7af8u: goto label_2c7af8;
        case 0x2c7afcu: goto label_2c7afc;
        case 0x2c7b00u: goto label_2c7b00;
        case 0x2c7b04u: goto label_2c7b04;
        case 0x2c7b08u: goto label_2c7b08;
        case 0x2c7b0cu: goto label_2c7b0c;
        case 0x2c7b10u: goto label_2c7b10;
        case 0x2c7b14u: goto label_2c7b14;
        case 0x2c7b18u: goto label_2c7b18;
        case 0x2c7b1cu: goto label_2c7b1c;
        case 0x2c7b20u: goto label_2c7b20;
        case 0x2c7b24u: goto label_2c7b24;
        case 0x2c7b28u: goto label_2c7b28;
        case 0x2c7b2cu: goto label_2c7b2c;
        case 0x2c7b30u: goto label_2c7b30;
        case 0x2c7b34u: goto label_2c7b34;
        case 0x2c7b38u: goto label_2c7b38;
        case 0x2c7b3cu: goto label_2c7b3c;
        case 0x2c7b40u: goto label_2c7b40;
        case 0x2c7b44u: goto label_2c7b44;
        case 0x2c7b48u: goto label_2c7b48;
        case 0x2c7b4cu: goto label_2c7b4c;
        case 0x2c7b50u: goto label_2c7b50;
        case 0x2c7b54u: goto label_2c7b54;
        case 0x2c7b58u: goto label_2c7b58;
        case 0x2c7b5cu: goto label_2c7b5c;
        case 0x2c7b60u: goto label_2c7b60;
        case 0x2c7b64u: goto label_2c7b64;
        case 0x2c7b68u: goto label_2c7b68;
        case 0x2c7b6cu: goto label_2c7b6c;
        case 0x2c7b70u: goto label_2c7b70;
        case 0x2c7b74u: goto label_2c7b74;
        case 0x2c7b78u: goto label_2c7b78;
        case 0x2c7b7cu: goto label_2c7b7c;
        case 0x2c7b80u: goto label_2c7b80;
        case 0x2c7b84u: goto label_2c7b84;
        case 0x2c7b88u: goto label_2c7b88;
        case 0x2c7b8cu: goto label_2c7b8c;
        case 0x2c7b90u: goto label_2c7b90;
        case 0x2c7b94u: goto label_2c7b94;
        case 0x2c7b98u: goto label_2c7b98;
        case 0x2c7b9cu: goto label_2c7b9c;
        case 0x2c7ba0u: goto label_2c7ba0;
        case 0x2c7ba4u: goto label_2c7ba4;
        case 0x2c7ba8u: goto label_2c7ba8;
        case 0x2c7bacu: goto label_2c7bac;
        case 0x2c7bb0u: goto label_2c7bb0;
        case 0x2c7bb4u: goto label_2c7bb4;
        case 0x2c7bb8u: goto label_2c7bb8;
        case 0x2c7bbcu: goto label_2c7bbc;
        case 0x2c7bc0u: goto label_2c7bc0;
        case 0x2c7bc4u: goto label_2c7bc4;
        case 0x2c7bc8u: goto label_2c7bc8;
        case 0x2c7bccu: goto label_2c7bcc;
        case 0x2c7bd0u: goto label_2c7bd0;
        case 0x2c7bd4u: goto label_2c7bd4;
        case 0x2c7bd8u: goto label_2c7bd8;
        case 0x2c7bdcu: goto label_2c7bdc;
        case 0x2c7be0u: goto label_2c7be0;
        case 0x2c7be4u: goto label_2c7be4;
        case 0x2c7be8u: goto label_2c7be8;
        case 0x2c7becu: goto label_2c7bec;
        case 0x2c7bf0u: goto label_2c7bf0;
        case 0x2c7bf4u: goto label_2c7bf4;
        case 0x2c7bf8u: goto label_2c7bf8;
        case 0x2c7bfcu: goto label_2c7bfc;
        case 0x2c7c00u: goto label_2c7c00;
        case 0x2c7c04u: goto label_2c7c04;
        case 0x2c7c08u: goto label_2c7c08;
        case 0x2c7c0cu: goto label_2c7c0c;
        case 0x2c7c10u: goto label_2c7c10;
        case 0x2c7c14u: goto label_2c7c14;
        case 0x2c7c18u: goto label_2c7c18;
        case 0x2c7c1cu: goto label_2c7c1c;
        default: break;
    }

    ctx->pc = 0x2c74d8u;

label_2c74d8:
    // 0x2c74d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c74d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2c74dc:
    // 0x2c74dc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2c74dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2c74e0:
    // 0x2c74e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2c74e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2c74e4:
    // 0x2c74e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c74e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c74e8:
    // 0x2c74e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2c74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2c74ec:
    // 0x2c74ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c74ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c74f0:
    // 0x2c74f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2c74f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2c74f4:
    // 0x2c74f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2c74f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2c74f8:
    // 0x2c74f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c74fc:
    // 0x2c74fc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2c74fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2c7500:
    // 0x2c7500: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2c7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2c7504:
    // 0x2c7504: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2c7504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2c7508:
    // 0x2c7508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c750c:
    // 0x2c750c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2c750cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2c7510:
    // 0x2c7510: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c7510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c7514:
    // 0x2c7514: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c7518:
    // 0x2c7518: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2c7518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c751c:
    // 0x2c751c: 0x147201b4  bne         $v1, $s2, . + 4 + (0x1B4 << 2)
label_2c7520:
    if (ctx->pc == 0x2C7520u) {
        ctx->pc = 0x2C7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C751Cu;
        // 0x2c7520: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7524u;
        goto label_2c7524;
    }
    ctx->pc = 0x2C751Cu;
    {
        const bool branch_taken_0x2c751c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2C7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C751Cu;
        // 0x2c7520: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c751c) {
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7524u;
label_2c7524:
    // 0x2c7524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7528:
    // 0x2c7528: 0xc089f98  jal         func_227E60
label_2c752c:
    if (ctx->pc == 0x2C752Cu) {
        ctx->pc = 0x2C752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7528u;
        // 0x2c752c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7530u;
        goto label_2c7530;
    }
    ctx->pc = 0x2C7528u;
    SET_GPR_U32(ctx, 31, 0x2C7530u);
    ctx->pc = 0x2C752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7528u;
    // 0x2c752c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2C7528u, 0x2C7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7530u;
label_2c7530:
    // 0x2c7530: 0x505001af  beql        $v0, $s0, . + 4 + (0x1AF << 2)
label_2c7534:
    if (ctx->pc == 0x2C7534u) {
        ctx->pc = 0x2C7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7530u;
        // 0x2c7534: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7538u;
        goto label_2c7538;
    }
    ctx->pc = 0x2C7530u;
    {
        const bool branch_taken_0x2c7530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2c7530) {
            ctx->pc = 0x2C7534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7530u;
            // 0x2c7534: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7538u;
label_2c7538:
    // 0x2c7538: 0xc08a096  jal         func_228258
label_2c753c:
    if (ctx->pc == 0x2C753Cu) {
        ctx->pc = 0x2C753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7538u;
        // 0x2c753c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7540u;
        goto label_2c7540;
    }
    ctx->pc = 0x2C7538u;
    SET_GPR_U32(ctx, 31, 0x2C7540u);
    ctx->pc = 0x2C753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7538u;
    // 0x2c753c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2C7538u, 0x2C7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7540u;
label_2c7540:
    // 0x2c7540: 0x105001aa  beq         $v0, $s0, . + 4 + (0x1AA << 2)
label_2c7544:
    if (ctx->pc == 0x2C7544u) {
        ctx->pc = 0x2C7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7540u;
        // 0x2c7544: 0x26450070  addiu       $a1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7548u;
        goto label_2c7548;
    }
    ctx->pc = 0x2C7540u;
    {
        const bool branch_taken_0x2c7540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7540u;
        // 0x2c7544: 0x26450070  addiu       $a1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7540) {
            ctx->pc = 0x2C7BECu;
            goto label_2c7bec;
        }
    }
    ctx->pc = 0x2C7548u;
label_2c7548:
    // 0x2c7548: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2c754c:
    // 0x2c754c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2c754cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2c7550:
    // 0x2c7550: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2c7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2c7554:
    // 0x2c7554: 0x40f809  jalr        $v0
label_2c7558:
    if (ctx->pc == 0x2C7558u) {
        ctx->pc = 0x2C7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7554u;
        // 0x2c7558: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C755Cu;
        goto label_2c755c;
    }
    ctx->pc = 0x2C7554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C755Cu);
        ctx->pc = 0x2C7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7554u;
        // 0x2c7558: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7554u, 0x2C755Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C755Cu;
label_2c755c:
    // 0x2c755c: 0x504001a4  beql        $v0, $zero, . + 4 + (0x1A4 << 2)
label_2c7560:
    if (ctx->pc == 0x2C7560u) {
        ctx->pc = 0x2C7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C755Cu;
        // 0x2c7560: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7564u;
        goto label_2c7564;
    }
    ctx->pc = 0x2C755Cu;
    {
        const bool branch_taken_0x2c755c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c755c) {
            ctx->pc = 0x2C7560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C755Cu;
            // 0x2c7560: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7564u;
label_2c7564:
    // 0x2c7564: 0xc08a61a  jal         func_229868
label_2c7568:
    if (ctx->pc == 0x2C7568u) {
        ctx->pc = 0x2C7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7564u;
        // 0x2c7568: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C756Cu;
        goto label_2c756c;
    }
    ctx->pc = 0x2C7564u;
    SET_GPR_U32(ctx, 31, 0x2C756Cu);
    ctx->pc = 0x2C7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7564u;
    // 0x2c7568: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C7564u, 0x2C756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C756Cu;
label_2c756c:
    // 0x2c756c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c756cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7570:
    // 0x2c7570: 0x1280019f  beqz        $s4, . + 4 + (0x19F << 2)
label_2c7574:
    if (ctx->pc == 0x2C7574u) {
        ctx->pc = 0x2C7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7570u;
        // 0x2c7574: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7578u;
        goto label_2c7578;
    }
    ctx->pc = 0x2C7570u;
    {
        const bool branch_taken_0x2c7570 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7570u;
        // 0x2c7574: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7570) {
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7578u;
label_2c7578:
    // 0x2c7578: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x2c7578u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_2c757c:
    // 0x2c757c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c757cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2c7580:
    // 0x2c7580: 0x5040019c  beql        $v0, $zero, . + 4 + (0x19C << 2)
label_2c7584:
    if (ctx->pc == 0x2C7584u) {
        ctx->pc = 0x2C7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7580u;
        // 0x2c7584: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7588u;
        goto label_2c7588;
    }
    ctx->pc = 0x2C7580u;
    {
        const bool branch_taken_0x2c7580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7580) {
            ctx->pc = 0x2C7584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7580u;
            // 0x2c7584: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7BF4u;
            goto label_2c7bf4;
        }
    }
    ctx->pc = 0x2C7588u;
label_2c7588:
    // 0x2c7588: 0xc087502  jal         func_21D408
label_2c758c:
    if (ctx->pc == 0x2C758Cu) {
        ctx->pc = 0x2C758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7588u;
        // 0x2c758c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7590u;
        goto label_2c7590;
    }
    ctx->pc = 0x2C7588u;
    SET_GPR_U32(ctx, 31, 0x2C7590u);
    ctx->pc = 0x2C758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7588u;
    // 0x2c758c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C7588u, 0x2C7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7590u;
label_2c7590:
    // 0x2c7590: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c7590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2c7594:
    // 0x2c7594: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x2c7594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2c7598:
    // 0x2c7598: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c7598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c759c:
    // 0x2c759c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c75a0:
    // 0x2c75a0: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c75a4:
    // 0x2c75a4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2c75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_2c75a8:
    // 0x2c75a8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2c75a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2c75ac:
    // 0x2c75ac: 0x80a4002e  lb          $a0, 0x2E($a1)
    ctx->pc = 0x2c75acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2c75b0:
    // 0x2c75b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c75b4:
    // 0x2c75b4: 0x1c80000e  bgtz        $a0, . + 4 + (0xE << 2)
label_2c75b8:
    if (ctx->pc == 0x2C75B8u) {
        ctx->pc = 0x2C75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75B4u;
        // 0x2c75b8: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75BCu;
        goto label_2c75bc;
    }
    ctx->pc = 0x2C75B4u;
    {
        const bool branch_taken_0x2c75b4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2C75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75B4u;
        // 0x2c75b8: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75b4) {
            ctx->pc = 0x2C75F0u;
            goto label_2c75f0;
        }
    }
    ctx->pc = 0x2C75BCu;
label_2c75bc:
    // 0x2c75bc: 0xc0a367c  jal         func_28D9F0
label_2c75c0:
    if (ctx->pc == 0x2C75C0u) {
        ctx->pc = 0x2C75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75BCu;
        // 0x2c75c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75C4u;
        goto label_2c75c4;
    }
    ctx->pc = 0x2C75BCu;
    SET_GPR_U32(ctx, 31, 0x2C75C4u);
    ctx->pc = 0x2C75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75BCu;
    // 0x2c75c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C75BCu, 0x2C75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75C4u;
label_2c75c4:
    // 0x2c75c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c75c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c75c8:
    // 0x2c75c8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2c75cc:
    if (ctx->pc == 0x2C75CCu) {
        ctx->pc = 0x2C75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75C8u;
        // 0x2c75cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75D0u;
        goto label_2c75d0;
    }
    ctx->pc = 0x2C75C8u;
    {
        const bool branch_taken_0x2c75c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75C8u;
        // 0x2c75cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75c8) {
            ctx->pc = 0x2C75F4u;
            goto label_2c75f4;
        }
    }
    ctx->pc = 0x2C75D0u;
label_2c75d0:
    // 0x2c75d0: 0xc0884f6  jal         func_2213D8
label_2c75d4:
    if (ctx->pc == 0x2C75D4u) {
        ctx->pc = 0x2C75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75D0u;
        // 0x2c75d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75D8u;
        goto label_2c75d8;
    }
    ctx->pc = 0x2C75D0u;
    SET_GPR_U32(ctx, 31, 0x2C75D8u);
    ctx->pc = 0x2C75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75D0u;
    // 0x2c75d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C75D0u, 0x2C75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75D8u;
label_2c75d8:
    // 0x2c75d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c75d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c75dc:
    // 0x2c75dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c75dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c75e0:
    // 0x2c75e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c75e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c75e4:
    // 0x2c75e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c75e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c75e8:
    // 0x2c75e8: 0xc0bf800  jal         func_2FE000
label_2c75ec:
    if (ctx->pc == 0x2C75ECu) {
        ctx->pc = 0x2C75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75E8u;
        // 0x2c75ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75F0u;
        goto label_2c75f0;
    }
    ctx->pc = 0x2C75E8u;
    SET_GPR_U32(ctx, 31, 0x2C75F0u);
    ctx->pc = 0x2C75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75E8u;
    // 0x2c75ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C75E8u, 0x2C75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75F0u;
label_2c75f0:
    // 0x2c75f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c75f4:
    // 0x2c75f4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2c75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c75f8:
    // 0x2c75f8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c75fc:
    // 0x2c75fc: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2c75fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_2c7600:
    // 0x2c7600: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c7604:
    if (ctx->pc == 0x2C7604u) {
        ctx->pc = 0x2C7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7600u;
        // 0x2c7604: 0x8c970048  lw          $s7, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7608u;
        goto label_2c7608;
    }
    ctx->pc = 0x2C7600u;
    {
        const bool branch_taken_0x2c7600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7600u;
        // 0x2c7604: 0x8c970048  lw          $s7, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7600) {
            ctx->pc = 0x2C7614u;
            goto label_2c7614;
        }
    }
    ctx->pc = 0x2C7608u;
label_2c7608:
    // 0x2c7608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c760c:
    // 0x2c760c: 0xc087b0e  jal         func_21EC38
label_2c7610:
    if (ctx->pc == 0x2C7610u) {
        ctx->pc = 0x2C7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C760Cu;
        // 0x2c7610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7614u;
        goto label_2c7614;
    }
    ctx->pc = 0x2C760Cu;
    SET_GPR_U32(ctx, 31, 0x2C7614u);
    ctx->pc = 0x2C7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C760Cu;
    // 0x2c7610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2C760Cu, 0x2C7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7614u;
label_2c7614:
    // 0x2c7614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7618:
    // 0x2c7618: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x2c7618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_2c761c:
    // 0x2c761c: 0xa2220042  sb          $v0, 0x42($s1)
    ctx->pc = 0x2c761cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 2));
label_2c7620:
    // 0x2c7620: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2c7620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2c7624:
    // 0x2c7624: 0xa2200045  sb          $zero, 0x45($s1)
    ctx->pc = 0x2c7624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
label_2c7628:
    // 0x2c7628: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c762c:
    // 0x2c762c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2c762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7630:
    // 0x2c7630: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c7630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c7634:
    // 0x2c7634: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c7634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c7638:
    // 0x2c7638: 0x247010f8  addiu       $s0, $v1, 0x10F8
    ctx->pc = 0x2c7638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
label_2c763c:
    // 0x2c763c: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x2c763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_2c7640:
    // 0x2c7640: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2c7640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2c7644:
    // 0x2c7644: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2c7644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2c7648:
    // 0x2c7648: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2c7648u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c764c:
    // 0x2c764c: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x2c764cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_2c7650:
    // 0x2c7650: 0x24560480  addiu       $s6, $v0, 0x480
    ctx->pc = 0x2c7650u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_2c7654:
    // 0x2c7654: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2c7654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
label_2c7658:
    // 0x2c7658: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c7658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c765c:
    // 0x2c765c: 0xc107908  jal         func_41E420
label_2c7660:
    if (ctx->pc == 0x2C7660u) {
        ctx->pc = 0x2C7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C765Cu;
        // 0x2c7660: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7664u;
        goto label_2c7664;
    }
    ctx->pc = 0x2C765Cu;
    SET_GPR_U32(ctx, 31, 0x2C7664u);
    ctx->pc = 0x2C7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C765Cu;
    // 0x2c7660: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2C765Cu, 0x2C7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7664u;
label_2c7664:
    // 0x2c7664: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2c7664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7668:
    // 0x2c7668: 0x14750002  bne         $v1, $s5, . + 4 + (0x2 << 2)
label_2c766c:
    if (ctx->pc == 0x2C766Cu) {
        ctx->pc = 0x2C766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7668u;
        // 0x2c766c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7670u;
        goto label_2c7670;
    }
    ctx->pc = 0x2C7668u;
    {
        const bool branch_taken_0x2c7668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7668u;
        // 0x2c766c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7668) {
            ctx->pc = 0x2C7674u;
            goto label_2c7674;
        }
    }
    ctx->pc = 0x2C7670u;
label_2c7670:
    // 0x2c7670: 0x96330038  lhu         $s3, 0x38($s1)
    ctx->pc = 0x2c7670u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_2c7674:
    // 0x2c7674: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2c7674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
label_2c7678:
    // 0x2c7678: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c7678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c767c:
    // 0x2c767c: 0xc107908  jal         func_41E420
label_2c7680:
    if (ctx->pc == 0x2C7680u) {
        ctx->pc = 0x2C7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C767Cu;
        // 0x2c7680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7684u;
        goto label_2c7684;
    }
    ctx->pc = 0x2C767Cu;
    SET_GPR_U32(ctx, 31, 0x2C7684u);
    ctx->pc = 0x2C7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C767Cu;
    // 0x2c7680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2C767Cu, 0x2C7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7684u;
label_2c7684:
    // 0x2c7684: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2c7684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7688:
    // 0x2c7688: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2c7688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2c768c:
    // 0x2c768c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2c768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2c7690:
    // 0x2c7690: 0x90640005  lbu         $a0, 0x5($v1)
    ctx->pc = 0x2c7690u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_2c7694:
    // 0x2c7694: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2c7694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2c7698:
    // 0x2c7698: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2c769c:
    if (ctx->pc == 0x2C769Cu) {
        ctx->pc = 0x2C76A0u;
        goto label_2c76a0;
    }
    ctx->pc = 0x2C7698u;
    {
        const bool branch_taken_0x2c7698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7698) {
            ctx->pc = 0x2C7700u;
            goto label_2c7700;
        }
    }
    ctx->pc = 0x2C76A0u;
label_2c76a0:
    // 0x2c76a0: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x2c76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c76a4:
    // 0x2c76a4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2c76a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2c76a8:
    // 0x2c76a8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2c76a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2c76ac:
    // 0x2c76ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2c76b0:
    if (ctx->pc == 0x2C76B0u) {
        ctx->pc = 0x2C76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76ACu;
        // 0x2c76b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76B4u;
        goto label_2c76b4;
    }
    ctx->pc = 0x2C76ACu;
    {
        const bool branch_taken_0x2c76ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76ACu;
        // 0x2c76b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76ac) {
            ctx->pc = 0x2C76D0u;
            goto label_2c76d0;
        }
    }
    ctx->pc = 0x2C76B4u;
label_2c76b4:
    // 0x2c76b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c76b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c76b8:
    // 0x2c76b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c76b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c76bc:
    // 0x2c76bc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c76bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c76c0:
    // 0x2c76c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c76c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c76c4:
    // 0x2c76c4: 0xc0b1cee  jal         func_2C73B8
label_2c76c8:
    if (ctx->pc == 0x2C76C8u) {
        ctx->pc = 0x2C76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76C4u;
        // 0x2c76c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76CCu;
        goto label_2c76cc;
    }
    ctx->pc = 0x2C76C4u;
    SET_GPR_U32(ctx, 31, 0x2C76CCu);
    ctx->pc = 0x2C76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C76C4u;
    // 0x2c76c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C73B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C73B8u, 0x2C76C4u, 0x2C76CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76CCu;
label_2c76cc:
    // 0x2c76cc: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2c76ccu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c76d0:
    // 0x2c76d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c76d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c76d4:
    // 0x2c76d4: 0xc0b1c56  jal         func_2C7158
label_2c76d8:
    if (ctx->pc == 0x2C76D8u) {
        ctx->pc = 0x2C76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76D4u;
        // 0x2c76d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76DCu;
        goto label_2c76dc;
    }
    ctx->pc = 0x2C76D4u;
    SET_GPR_U32(ctx, 31, 0x2C76DCu);
    ctx->pc = 0x2C76D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C76D4u;
    // 0x2c76d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7158u, 0x2C76D4u, 0x2C76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76DCu;
label_2c76dc:
    // 0x2c76dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c76dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c76e0:
    // 0x2c76e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c76e4:
    // 0x2c76e4: 0xc0b1c92  jal         func_2C7248
label_2c76e8:
    if (ctx->pc == 0x2C76E8u) {
        ctx->pc = 0x2C76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76E4u;
        // 0x2c76e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76ECu;
        goto label_2c76ec;
    }
    ctx->pc = 0x2C76E4u;
    SET_GPR_U32(ctx, 31, 0x2C76ECu);
    ctx->pc = 0x2C76E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C76E4u;
    // 0x2c76e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C76E4u, 0x2C76ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76ECu;
label_2c76ec:
    // 0x2c76ec: 0x26e21388  addiu       $v0, $s7, 0x1388
    ctx->pc = 0x2c76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 5000));
label_2c76f0:
    // 0x2c76f0: 0x1615013e  bne         $s0, $s5, . + 4 + (0x13E << 2)
label_2c76f4:
    if (ctx->pc == 0x2C76F4u) {
        ctx->pc = 0x2C76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76F0u;
        // 0x2c76f4: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76F8u;
        goto label_2c76f8;
    }
    ctx->pc = 0x2C76F0u;
    {
        const bool branch_taken_0x2c76f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76F0u;
        // 0x2c76f4: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76f0) {
            ctx->pc = 0x2C7BECu;
            goto label_2c7bec;
        }
    }
    ctx->pc = 0x2C76F8u;
label_2c76f8:
    // 0x2c76f8: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_2c76fc:
    if (ctx->pc == 0x2C76FCu) {
        ctx->pc = 0x2C76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76F8u;
        // 0x2c76fc: 0xa24001b2  sb          $zero, 0x1B2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7700u;
        goto label_2c7700;
    }
    ctx->pc = 0x2C76F8u;
    {
        const bool branch_taken_0x2c76f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76F8u;
        // 0x2c76fc: 0xa24001b2  sb          $zero, 0x1B2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76f8) {
            ctx->pc = 0x2C7994u;
            goto label_2c7994;
        }
    }
    ctx->pc = 0x2C7700u;
label_2c7700:
    // 0x2c7700: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_2c7704:
    if (ctx->pc == 0x2C7704u) {
        ctx->pc = 0x2C7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7700u;
        // 0x2c7704: 0x90700006  lbu         $s0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7708u;
        goto label_2c7708;
    }
    ctx->pc = 0x2C7700u;
    {
        const bool branch_taken_0x2c7700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7700u;
        // 0x2c7704: 0x90700006  lbu         $s0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7700) {
            ctx->pc = 0x2C7724u;
            goto label_2c7724;
        }
    }
    ctx->pc = 0x2C7708u;
label_2c7708:
    // 0x2c7708: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2c7708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_2c770c:
    // 0x2c770c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c7710:
    // 0x2c7710: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x2c7710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_2c7714:
    // 0x2c7714: 0xc10904c  jal         func_424130
label_2c7718:
    if (ctx->pc == 0x2C7718u) {
        ctx->pc = 0x2C7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7714u;
        // 0x2c7718: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C771Cu;
        goto label_2c771c;
    }
    ctx->pc = 0x2C7714u;
    SET_GPR_U32(ctx, 31, 0x2C771Cu);
    ctx->pc = 0x2C7718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7714u;
    // 0x2c7718: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x2C7714u, 0x2C771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C771Cu;
label_2c771c:
    // 0x2c771c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2c771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c7720:
    // 0x2c7720: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2c7720u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2c7724:
    // 0x2c7724: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x2c7724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c7728:
    // 0x2c7728: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_2c772c:
    if (ctx->pc == 0x2C772Cu) {
        ctx->pc = 0x2C772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7728u;
        // 0x2c772c: 0x92220041  lbu         $v0, 0x41($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7730u;
        goto label_2c7730;
    }
    ctx->pc = 0x2C7728u;
    {
        const bool branch_taken_0x2c7728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7728) {
            ctx->pc = 0x2C772Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7728u;
            // 0x2c772c: 0x92220041  lbu         $v0, 0x41($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7794u;
            goto label_2c7794;
        }
    }
    ctx->pc = 0x2C7730u;
label_2c7730:
    // 0x2c7730: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x2c7730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c7734:
    // 0x2c7734: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2c7734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2c7738:
    // 0x2c7738: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2c7738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2c773c:
    // 0x2c773c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2c7740:
    if (ctx->pc == 0x2C7740u) {
        ctx->pc = 0x2C7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C773Cu;
        // 0x2c7740: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7744u;
        goto label_2c7744;
    }
    ctx->pc = 0x2C773Cu;
    {
        const bool branch_taken_0x2c773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C773Cu;
        // 0x2c7740: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c773c) {
            ctx->pc = 0x2C7760u;
            goto label_2c7760;
        }
    }
    ctx->pc = 0x2C7744u;
label_2c7744:
    // 0x2c7744: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c7744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7748:
    // 0x2c7748: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c7748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c774c:
    // 0x2c774c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c774cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7750:
    // 0x2c7750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7754:
    // 0x2c7754: 0xc0b1cee  jal         func_2C73B8
label_2c7758:
    if (ctx->pc == 0x2C7758u) {
        ctx->pc = 0x2C7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7754u;
        // 0x2c7758: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C775Cu;
        goto label_2c775c;
    }
    ctx->pc = 0x2C7754u;
    SET_GPR_U32(ctx, 31, 0x2C775Cu);
    ctx->pc = 0x2C7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7754u;
    // 0x2c7758: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C73B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C73B8u, 0x2C7754u, 0x2C775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C775Cu;
label_2c775c:
    // 0x2c775c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2c775cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c7760:
    // 0x2c7760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7764:
    // 0x2c7764: 0xc0b1c56  jal         func_2C7158
label_2c7768:
    if (ctx->pc == 0x2C7768u) {
        ctx->pc = 0x2C7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7764u;
        // 0x2c7768: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C776Cu;
        goto label_2c776c;
    }
    ctx->pc = 0x2C7764u;
    SET_GPR_U32(ctx, 31, 0x2C776Cu);
    ctx->pc = 0x2C7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7764u;
    // 0x2c7768: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7158u, 0x2C7764u, 0x2C776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C776Cu;
label_2c776c:
    // 0x2c776c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7770:
    // 0x2c7770: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c7770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c7774:
    // 0x2c7774: 0xc0b1c92  jal         func_2C7248
label_2c7778:
    if (ctx->pc == 0x2C7778u) {
        ctx->pc = 0x2C7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7774u;
        // 0x2c7778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C777Cu;
        goto label_2c777c;
    }
    ctx->pc = 0x2C7774u;
    SET_GPR_U32(ctx, 31, 0x2C777Cu);
    ctx->pc = 0x2C7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7774u;
    // 0x2c7778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C7774u, 0x2C777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C777Cu;
label_2c777c:
    // 0x2c777c: 0x26e21388  addiu       $v0, $s7, 0x1388
    ctx->pc = 0x2c777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 5000));
label_2c7780:
    // 0x2c7780: 0xa2350040  sb          $s5, 0x40($s1)
    ctx->pc = 0x2c7780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 21));
label_2c7784:
    // 0x2c7784: 0x16150119  bne         $s0, $s5, . + 4 + (0x119 << 2)
label_2c7788:
    if (ctx->pc == 0x2C7788u) {
        ctx->pc = 0x2C7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7784u;
        // 0x2c7788: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C778Cu;
        goto label_2c778c;
    }
    ctx->pc = 0x2C7784u;
    {
        const bool branch_taken_0x2c7784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7784u;
        // 0x2c7788: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7784) {
            ctx->pc = 0x2C7BECu;
            goto label_2c7bec;
        }
    }
    ctx->pc = 0x2C778Cu;
label_2c778c:
    // 0x2c778c: 0x10000081  b           . + 4 + (0x81 << 2)
label_2c7790:
    if (ctx->pc == 0x2C7790u) {
        ctx->pc = 0x2C7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C778Cu;
        // 0x2c7790: 0xa24001b2  sb          $zero, 0x1B2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7794u;
        goto label_2c7794;
    }
    ctx->pc = 0x2C778Cu;
    {
        const bool branch_taken_0x2c778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C778Cu;
        // 0x2c7790: 0xa24001b2  sb          $zero, 0x1B2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c778c) {
            ctx->pc = 0x2C7994u;
            goto label_2c7994;
        }
    }
    ctx->pc = 0x2C7794u;
label_2c7794:
    // 0x2c7794: 0x54550063  bnel        $v0, $s5, . + 4 + (0x63 << 2)
label_2c7798:
    if (ctx->pc == 0x2C7798u) {
        ctx->pc = 0x2C7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7794u;
        // 0x2c7798: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C779Cu;
        goto label_2c779c;
    }
    ctx->pc = 0x2C7794u;
    {
        const bool branch_taken_0x2c7794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c7794) {
            ctx->pc = 0x2C7798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7794u;
            // 0x2c7798: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7924u;
            goto label_2c7924;
        }
    }
    ctx->pc = 0x2C779Cu;
label_2c779c:
    // 0x2c779c: 0xc08a0b6  jal         func_2282D8
label_2c77a0:
    if (ctx->pc == 0x2C77A0u) {
        ctx->pc = 0x2C77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C779Cu;
        // 0x2c77a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77A4u;
        goto label_2c77a4;
    }
    ctx->pc = 0x2C779Cu;
    SET_GPR_U32(ctx, 31, 0x2C77A4u);
    ctx->pc = 0x2C77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C779Cu;
    // 0x2c77a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2282D8u, 0x2C779Cu, 0x2C77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77A4u;
label_2c77a4:
    // 0x2c77a4: 0x14550029  bne         $v0, $s5, . + 4 + (0x29 << 2)
label_2c77a8:
    if (ctx->pc == 0x2C77A8u) {
        ctx->pc = 0x2C77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77A4u;
        // 0x2c77a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77ACu;
        goto label_2c77ac;
    }
    ctx->pc = 0x2C77A4u;
    {
        const bool branch_taken_0x2c77a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77A4u;
        // 0x2c77a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77a4) {
            ctx->pc = 0x2C784Cu;
            goto label_2c784c;
        }
    }
    ctx->pc = 0x2C77ACu;
label_2c77ac:
    // 0x2c77ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c77b0:
    // 0x2c77b0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c77b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c77b4:
    // 0x2c77b4: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2c77b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c77b8:
    // 0x2c77b8: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x2c77b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2c77bc:
    // 0x2c77bc: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2c77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c77c0:
    // 0x2c77c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c77c4:
    // 0x2c77c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c77c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c77c8:
    // 0x2c77c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c77c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c77cc:
    // 0x2c77cc: 0xc0cdb38  jal         func_336CE0
label_2c77d0:
    if (ctx->pc == 0x2C77D0u) {
        ctx->pc = 0x2C77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77CCu;
        // 0x2c77d0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77D4u;
        goto label_2c77d4;
    }
    ctx->pc = 0x2C77CCu;
    SET_GPR_U32(ctx, 31, 0x2C77D4u);
    ctx->pc = 0x2C77D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77CCu;
    // 0x2c77d0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C77CCu, 0x2C77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77D4u;
label_2c77d4:
    // 0x2c77d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c77d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c77d8:
    // 0x2c77d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c77d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c77dc:
    // 0x2c77dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2c77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c77e0:
    // 0x2c77e0: 0xc08c340  jal         func_230D00
label_2c77e4:
    if (ctx->pc == 0x2C77E4u) {
        ctx->pc = 0x2C77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77E0u;
        // 0x2c77e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77E8u;
        goto label_2c77e8;
    }
    ctx->pc = 0x2C77E0u;
    SET_GPR_U32(ctx, 31, 0x2C77E8u);
    ctx->pc = 0x2C77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77E0u;
    // 0x2c77e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2C77E0u, 0x2C77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77E8u;
label_2c77e8:
    // 0x2c77e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c77e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c77ec:
    // 0x2c77ec: 0x0  nop
    ctx->pc = 0x2c77ecu;
    // NOP
label_2c77f0:
    // 0x2c77f0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2c77f4:
    if (ctx->pc == 0x2C77F4u) {
        ctx->pc = 0x2C77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77F0u;
        // 0x2c77f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77F8u;
        goto label_2c77f8;
    }
    ctx->pc = 0x2C77F0u;
    {
        const bool branch_taken_0x2c77f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77F0u;
        // 0x2c77f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c77f0) {
            ctx->pc = 0x2C784Cu;
            goto label_2c784c;
        }
    }
    ctx->pc = 0x2C77F8u;
label_2c77f8:
    // 0x2c77f8: 0xc0a36c8  jal         func_28DB20
label_2c77fc:
    if (ctx->pc == 0x2C77FCu) {
        ctx->pc = 0x2C77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77F8u;
        // 0x2c77fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7800u;
        goto label_2c7800;
    }
    ctx->pc = 0x2C77F8u;
    SET_GPR_U32(ctx, 31, 0x2C7800u);
    ctx->pc = 0x2C77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77F8u;
    // 0x2c77fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C77F8u, 0x2C7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7800u;
label_2c7800:
    // 0x2c7800: 0x14550012  bne         $v0, $s5, . + 4 + (0x12 << 2)
label_2c7804:
    if (ctx->pc == 0x2C7804u) {
        ctx->pc = 0x2C7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7800u;
        // 0x2c7804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7808u;
        goto label_2c7808;
    }
    ctx->pc = 0x2C7800u;
    {
        const bool branch_taken_0x2c7800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7800u;
        // 0x2c7804: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7800) {
            ctx->pc = 0x2C784Cu;
            goto label_2c784c;
        }
    }
    ctx->pc = 0x2C7808u;
label_2c7808:
    // 0x2c7808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c7808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c780c:
    // 0x2c780c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c780cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7810:
    // 0x2c7810: 0xc088776  jal         func_221DD8
label_2c7814:
    if (ctx->pc == 0x2C7814u) {
        ctx->pc = 0x2C7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7810u;
        // 0x2c7814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7818u;
        goto label_2c7818;
    }
    ctx->pc = 0x2C7810u;
    SET_GPR_U32(ctx, 31, 0x2C7818u);
    ctx->pc = 0x2C7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7810u;
    // 0x2c7814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221DD8u, 0x2C7810u, 0x2C7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7818u;
label_2c7818:
    // 0x2c7818: 0xc0a367c  jal         func_28D9F0
label_2c781c:
    if (ctx->pc == 0x2C781Cu) {
        ctx->pc = 0x2C781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7818u;
        // 0x2c781c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7820u;
        goto label_2c7820;
    }
    ctx->pc = 0x2C7818u;
    SET_GPR_U32(ctx, 31, 0x2C7820u);
    ctx->pc = 0x2C781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7818u;
    // 0x2c781c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C7818u, 0x2C7820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7820u;
label_2c7820:
    // 0x2c7820: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c7824:
    if (ctx->pc == 0x2C7824u) {
        ctx->pc = 0x2C7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7820u;
        // 0x2c7824: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7828u;
        goto label_2c7828;
    }
    ctx->pc = 0x2C7820u;
    {
        const bool branch_taken_0x2c7820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7820u;
        // 0x2c7824: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7820) {
            ctx->pc = 0x2C7848u;
            goto label_2c7848;
        }
    }
    ctx->pc = 0x2C7828u;
label_2c7828:
    // 0x2c7828: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c7828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c782c:
    // 0x2c782c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7830:
    // 0x2c7830: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c7830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c7834:
    // 0x2c7834: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2c7834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2c7838:
    // 0x2c7838: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c783c:
    // 0x2c783c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c783cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c7840:
    // 0x2c7840: 0xc0be968  jal         func_2FA5A0
label_2c7844:
    if (ctx->pc == 0x2C7844u) {
        ctx->pc = 0x2C7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7840u;
        // 0x2c7844: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7848u;
        goto label_2c7848;
    }
    ctx->pc = 0x2C7840u;
    SET_GPR_U32(ctx, 31, 0x2C7848u);
    ctx->pc = 0x2C7844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7840u;
    // 0x2c7844: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2C7840u, 0x2C7848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7848u;
label_2c7848:
    // 0x2c7848: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c7848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c784c:
    // 0x2c784c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7850:
    // 0x2c7850: 0x245010f8  addiu       $s0, $v0, 0x10F8
    ctx->pc = 0x2c7850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4344));
label_2c7854:
    // 0x2c7854: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2c7854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c7858:
    // 0x2c7858: 0xc0b1c92  jal         func_2C7248
label_2c785c:
    if (ctx->pc == 0x2C785Cu) {
        ctx->pc = 0x2C785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7858u;
        // 0x2c785c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7860u;
        goto label_2c7860;
    }
    ctx->pc = 0x2C7858u;
    SET_GPR_U32(ctx, 31, 0x2C7860u);
    ctx->pc = 0x2C785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7858u;
    // 0x2c785c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C7858u, 0x2C7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7860u;
label_2c7860:
    // 0x2c7860: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2c7860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7864:
    // 0x2c7864: 0x26e21388  addiu       $v0, $s7, 0x1388
    ctx->pc = 0x2c7864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 5000));
label_2c7868:
    // 0x2c7868: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2c7868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2c786c:
    // 0x2c786c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c786cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c7870:
    // 0x2c7870: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c7870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2c7874:
    // 0x2c7874: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c7874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7878:
    // 0x2c7878: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2c7878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2c787c:
    // 0x2c787c: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2c787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
label_2c7880:
    // 0x2c7880: 0x90670005  lbu         $a3, 0x5($v1)
    ctx->pc = 0x2c7880u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_2c7884:
    // 0x2c7884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c7884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7888:
    // 0x2c7888: 0xc10796c  jal         func_41E5B0
label_2c788c:
    if (ctx->pc == 0x2C788Cu) {
        ctx->pc = 0x2C788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7888u;
        // 0x2c788c: 0x73823  negu        $a3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7890u;
        goto label_2c7890;
    }
    ctx->pc = 0x2C7888u;
    SET_GPR_U32(ctx, 31, 0x2C7890u);
    ctx->pc = 0x2C788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7888u;
    // 0x2c788c: 0x73823  negu        $a3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2C7888u, 0x2C7890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7890u;
label_2c7890:
    // 0x2c7890: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2c7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7894:
    // 0x2c7894: 0x240403e7  addiu       $a0, $zero, 0x3E7
    ctx->pc = 0x2c7894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2c7898:
    // 0x2c7898: 0x8e430370  lw          $v1, 0x370($s2)
    ctx->pc = 0x2c7898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_2c789c:
    // 0x2c789c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c78a0:
    // 0x2c78a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2c78a4:
    // 0x2c78a4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2c78a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c78a8:
    // 0x2c78a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c78ac:
    // 0x2c78ac: 0x90450005  lbu         $a1, 0x5($v0)
    ctx->pc = 0x2c78acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_2c78b0:
    // 0x2c78b0: 0xa24001b2  sb          $zero, 0x1B2($s2)
    ctx->pc = 0x2c78b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
label_2c78b4:
    // 0x2c78b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c78b8:
    // 0x2c78b8: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x2c78b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2c78bc:
    // 0x2c78bc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2c78bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2c78c0:
    // 0x2c78c0: 0xc4302a  slt         $a2, $a2, $a0
    ctx->pc = 0x2c78c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2c78c4:
    // 0x2c78c4: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x2c78c4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2c78c8:
    // 0x2c78c8: 0xae440370  sw          $a0, 0x370($s2)
    ctx->pc = 0x2c78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 4));
label_2c78cc:
    // 0x2c78cc: 0x84e40128  lh          $a0, 0x128($a3)
    ctx->pc = 0x2c78ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 296)));
label_2c78d0:
    // 0x2c78d0: 0x8ce2012c  lw          $v0, 0x12C($a3)
    ctx->pc = 0x2c78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
label_2c78d4:
    // 0x2c78d4: 0x40f809  jalr        $v0
label_2c78d8:
    if (ctx->pc == 0x2C78D8u) {
        ctx->pc = 0x2C78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78D4u;
        // 0x2c78d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78DCu;
        goto label_2c78dc;
    }
    ctx->pc = 0x2C78D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C78DCu);
        ctx->pc = 0x2C78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78D4u;
        // 0x2c78d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C78D4u, 0x2C78DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C78DCu;
label_2c78dc:
    // 0x2c78dc: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x2c78dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c78e0:
    // 0x2c78e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c78e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c78e4:
    // 0x2c78e4: 0xc107422  jal         func_41D088
label_2c78e8:
    if (ctx->pc == 0x2C78E8u) {
        ctx->pc = 0x2C78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78E4u;
        // 0x2c78e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78ECu;
        goto label_2c78ec;
    }
    ctx->pc = 0x2C78E4u;
    SET_GPR_U32(ctx, 31, 0x2C78ECu);
    ctx->pc = 0x2C78E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C78E4u;
    // 0x2c78e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D088u, 0x2C78E4u, 0x2C78ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78ECu;
label_2c78ec:
    // 0x2c78ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c78f0:
    // 0x2c78f0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_2c78f4:
    if (ctx->pc == 0x2C78F4u) {
        ctx->pc = 0x2C78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78F0u;
        // 0x2c78f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C78F8u;
        goto label_2c78f8;
    }
    ctx->pc = 0x2C78F0u;
    {
        const bool branch_taken_0x2c78f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78F0u;
        // 0x2c78f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78f0) {
            ctx->pc = 0x2C791Cu;
            goto label_2c791c;
        }
    }
    ctx->pc = 0x2C78F8u;
label_2c78f8:
    // 0x2c78f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c78fc:
    // 0x2c78fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c78fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c7900:
    // 0x2c7900: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7904:
    // 0x2c7904: 0x40f809  jalr        $v0
label_2c7908:
    if (ctx->pc == 0x2C7908u) {
        ctx->pc = 0x2C7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7904u;
        // 0x2c7908: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C790Cu;
        goto label_2c790c;
    }
    ctx->pc = 0x2C7904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C790Cu);
        ctx->pc = 0x2C7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7904u;
        // 0x2c7908: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7904u, 0x2C790Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C790Cu;
label_2c790c:
    // 0x2c790c: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x2c790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2c7910:
    // 0x2c7910: 0xc107420  jal         func_41D080
label_2c7914:
    if (ctx->pc == 0x2C7914u) {
        ctx->pc = 0x2C7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7910u;
        // 0x2c7914: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7918u;
        goto label_2c7918;
    }
    ctx->pc = 0x2C7910u;
    SET_GPR_U32(ctx, 31, 0x2C7918u);
    ctx->pc = 0x2C7914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7910u;
    // 0x2c7914: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D080u, 0x2C7910u, 0x2C7918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7918u;
label_2c7918:
    // 0x2c7918: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c7918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c791c:
    // 0x2c791c: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2c7920:
    if (ctx->pc == 0x2C7920u) {
        ctx->pc = 0x2C7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C791Cu;
        // 0x2c7920: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7924u;
        goto label_2c7924;
    }
    ctx->pc = 0x2C791Cu;
    {
        const bool branch_taken_0x2c791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C791Cu;
        // 0x2c7920: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c791c) {
            ctx->pc = 0x2C7BECu;
            goto label_2c7bec;
        }
    }
    ctx->pc = 0x2C7924u;
label_2c7924:
    // 0x2c7924: 0x14550022  bne         $v0, $s5, . + 4 + (0x22 << 2)
label_2c7928:
    if (ctx->pc == 0x2C7928u) {
        ctx->pc = 0x2C7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7924u;
        // 0x2c7928: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C792Cu;
        goto label_2c792c;
    }
    ctx->pc = 0x2C7924u;
    {
        const bool branch_taken_0x2c7924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7924u;
        // 0x2c7928: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7924) {
            ctx->pc = 0x2C79B0u;
            goto label_2c79b0;
        }
    }
    ctx->pc = 0x2C792Cu;
label_2c792c:
    // 0x2c792c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7930:
    // 0x2c7930: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c7930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2c7934:
    // 0x2c7934: 0x24824b00  addiu       $v0, $a0, 0x4B00
    ctx->pc = 0x2c7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2c7938:
    // 0x2c7938: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2c7938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2c793c:
    // 0x2c793c: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x2c793cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2c7940:
    // 0x2c7940: 0x24c656b0  addiu       $a2, $a2, 0x56B0
    ctx->pc = 0x2c7940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22192));
label_2c7944:
    // 0x2c7944: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c7944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7948:
    // 0x2c7948: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c7948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c794c:
    // 0x2c794c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2c794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2c7950:
    // 0x2c7950: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7954:
    // 0x2c7954: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2c7954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2c7958:
    // 0x2c7958: 0xc0597e0  jal         func_165F80
label_2c795c:
    if (ctx->pc == 0x2C795Cu) {
        ctx->pc = 0x2C795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7958u;
        // 0x2c795c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7960u;
        goto label_2c7960;
    }
    ctx->pc = 0x2C7958u;
    SET_GPR_U32(ctx, 31, 0x2C7960u);
    ctx->pc = 0x2C795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7958u;
    // 0x2c795c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F80u, 0x2C7958u, 0x2C7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7960u;
label_2c7960:
    // 0x2c7960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c7960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7964:
    // 0x2c7964: 0x56600013  bnel        $s3, $zero, . + 4 + (0x13 << 2)
label_2c7968:
    if (ctx->pc == 0x2C7968u) {
        ctx->pc = 0x2C7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7964u;
        // 0x2c7968: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C796Cu;
        goto label_2c796c;
    }
    ctx->pc = 0x2C7964u;
    {
        const bool branch_taken_0x2c7964 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7964) {
            ctx->pc = 0x2C7968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7964u;
            // 0x2c7968: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C79B4u;
            goto label_2c79b4;
        }
    }
    ctx->pc = 0x2C796Cu;
label_2c796c:
    // 0x2c796c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7970:
    // 0x2c7970: 0xc0b1c56  jal         func_2C7158
label_2c7974:
    if (ctx->pc == 0x2C7974u) {
        ctx->pc = 0x2C7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7970u;
        // 0x2c7974: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7978u;
        goto label_2c7978;
    }
    ctx->pc = 0x2C7970u;
    SET_GPR_U32(ctx, 31, 0x2C7978u);
    ctx->pc = 0x2C7974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7970u;
    // 0x2c7974: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7158u, 0x2C7970u, 0x2C7978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7978u;
label_2c7978:
    // 0x2c7978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c797c:
    // 0x2c797c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c7980:
    // 0x2c7980: 0xc0b1c92  jal         func_2C7248
label_2c7984:
    if (ctx->pc == 0x2C7984u) {
        ctx->pc = 0x2C7984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7980u;
        // 0x2c7984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7988u;
        goto label_2c7988;
    }
    ctx->pc = 0x2C7980u;
    SET_GPR_U32(ctx, 31, 0x2C7988u);
    ctx->pc = 0x2C7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7980u;
    // 0x2c7984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C7980u, 0x2C7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7988u;
label_2c7988:
    // 0x2c7988: 0x26e21388  addiu       $v0, $s7, 0x1388
    ctx->pc = 0x2c7988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 5000));
label_2c798c:
    // 0x2c798c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2c798cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2c7990:
    // 0x2c7990: 0xa24001b2  sb          $zero, 0x1B2($s2)
    ctx->pc = 0x2c7990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 0));
label_2c7994:
    // 0x2c7994: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c7994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c7998:
    // 0x2c7998: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2c7998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2c799c:
    // 0x2c799c: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2c799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2c79a0:
    // 0x2c79a0: 0x60f809  jalr        $v1
label_2c79a4:
    if (ctx->pc == 0x2C79A4u) {
        ctx->pc = 0x2C79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79A0u;
        // 0x2c79a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79A8u;
        goto label_2c79a8;
    }
    ctx->pc = 0x2C79A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C79A8u);
        ctx->pc = 0x2C79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79A0u;
        // 0x2c79a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C79A0u, 0x2C79A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C79A8u;
label_2c79a8:
    // 0x2c79a8: 0x10000091  b           . + 4 + (0x91 << 2)
label_2c79ac:
    if (ctx->pc == 0x2C79ACu) {
        ctx->pc = 0x2C79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79A8u;
        // 0x2c79ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79B0u;
        goto label_2c79b0;
    }
    ctx->pc = 0x2C79A8u;
    {
        const bool branch_taken_0x2c79a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79A8u;
        // 0x2c79ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79a8) {
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C79B0u;
label_2c79b0:
    // 0x2c79b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c79b4:
    // 0x2c79b4: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2c79b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2c79b8:
    // 0x2c79b8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_2c79bc:
    if (ctx->pc == 0x2C79BCu) {
        ctx->pc = 0x2C79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79B8u;
        // 0x2c79bc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79C0u;
        goto label_2c79c0;
    }
    ctx->pc = 0x2C79B8u;
    {
        const bool branch_taken_0x2c79b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79B8u;
        // 0x2c79bc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79b8) {
            ctx->pc = 0x2C79E8u;
            goto label_2c79e8;
        }
    }
    ctx->pc = 0x2C79C0u;
label_2c79c0:
    // 0x2c79c0: 0xc0a36c2  jal         func_28DB08
label_2c79c4:
    if (ctx->pc == 0x2C79C4u) {
        ctx->pc = 0x2C79C8u;
        goto label_2c79c8;
    }
    ctx->pc = 0x2C79C0u;
    SET_GPR_U32(ctx, 31, 0x2C79C8u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2C79C0u, 0x2C79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79C8u;
label_2c79c8:
    // 0x2c79c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c79cc:
    // 0x2c79cc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c79ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c79d0:
    // 0x2c79d0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2c79d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c79d4:
    // 0x2c79d4: 0xa0f809  jalr        $a1
label_2c79d8:
    if (ctx->pc == 0x2C79D8u) {
        ctx->pc = 0x2C79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79D4u;
        // 0x2c79d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79DCu;
        goto label_2c79dc;
    }
    ctx->pc = 0x2C79D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C79DCu);
        ctx->pc = 0x2C79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79D4u;
        // 0x2c79d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C79D4u, 0x2C79DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C79DCu;
label_2c79dc:
    // 0x2c79dc: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x2c79dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_2c79e0:
    // 0x2c79e0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2c79e4:
    if (ctx->pc == 0x2C79E4u) {
        ctx->pc = 0x2C79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79E0u;
        // 0x2c79e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C79E8u;
        goto label_2c79e8;
    }
    ctx->pc = 0x2C79E0u;
    {
        const bool branch_taken_0x2c79e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79E0u;
        // 0x2c79e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c79e0) {
            ctx->pc = 0x2C7A98u;
            goto label_2c7a98;
        }
    }
    ctx->pc = 0x2C79E8u;
label_2c79e8:
    // 0x2c79e8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2c79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2c79ec:
    // 0x2c79ec: 0x245e56c8  addiu       $fp, $v0, 0x56C8
    ctx->pc = 0x2c79ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 22216));
label_2c79f0:
    // 0x2c79f0: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x2c79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_2c79f4:
    // 0x2c79f4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c79f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c79f8:
    // 0x2c79f8: 0xc05be60  jal         func_16F980
label_2c79fc:
    if (ctx->pc == 0x2C79FCu) {
        ctx->pc = 0x2C79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C79F8u;
        // 0x2c79fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A00u;
        goto label_2c7a00;
    }
    ctx->pc = 0x2C79F8u;
    SET_GPR_U32(ctx, 31, 0x2C7A00u);
    ctx->pc = 0x2C79FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C79F8u;
    // 0x2c79fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x2C79F8u, 0x2C7A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A00u;
label_2c7a00:
    // 0x2c7a00: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2c7a04:
    if (ctx->pc == 0x2C7A04u) {
        ctx->pc = 0x2C7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A00u;
        // 0x2c7a04: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A08u;
        goto label_2c7a08;
    }
    ctx->pc = 0x2C7A00u;
    {
        const bool branch_taken_0x2c7a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A00u;
        // 0x2c7a04: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a00) {
            ctx->pc = 0x2C7A98u;
            goto label_2c7a98;
        }
    }
    ctx->pc = 0x2C7A08u;
label_2c7a08:
    // 0x2c7a08: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x2c7a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_2c7a0c:
    // 0x2c7a0c: 0x245556d8  addiu       $s5, $v0, 0x56D8
    ctx->pc = 0x2c7a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 22232));
label_2c7a10:
    // 0x2c7a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a14:
    // 0x2c7a14: 0xc05be60  jal         func_16F980
label_2c7a18:
    if (ctx->pc == 0x2C7A18u) {
        ctx->pc = 0x2C7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A14u;
        // 0x2c7a18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A1Cu;
        goto label_2c7a1c;
    }
    ctx->pc = 0x2C7A14u;
    SET_GPR_U32(ctx, 31, 0x2C7A1Cu);
    ctx->pc = 0x2C7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A14u;
    // 0x2c7a18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x2C7A14u, 0x2C7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A1Cu;
label_2c7a1c:
    // 0x2c7a1c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2c7a20:
    if (ctx->pc == 0x2C7A20u) {
        ctx->pc = 0x2C7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A1Cu;
        // 0x2c7a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A24u;
        goto label_2c7a24;
    }
    ctx->pc = 0x2C7A1Cu;
    {
        const bool branch_taken_0x2c7a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A1Cu;
        // 0x2c7a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a1c) {
            ctx->pc = 0x2C7A98u;
            goto label_2c7a98;
        }
    }
    ctx->pc = 0x2C7A24u;
label_2c7a24:
    // 0x2c7a24: 0xc0899ae  jal         func_2266B8
label_2c7a28:
    if (ctx->pc == 0x2C7A28u) {
        ctx->pc = 0x2C7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A24u;
        // 0x2c7a28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A2Cu;
        goto label_2c7a2c;
    }
    ctx->pc = 0x2C7A24u;
    SET_GPR_U32(ctx, 31, 0x2C7A2Cu);
    ctx->pc = 0x2C7A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A24u;
    // 0x2c7a28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2C7A24u, 0x2C7A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A2Cu;
label_2c7a2c:
    // 0x2c7a2c: 0x3842029c  xori        $v0, $v0, 0x29C
    ctx->pc = 0x2c7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)668);
label_2c7a30:
    // 0x2c7a30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c7a34:
    if (ctx->pc == 0x2C7A34u) {
        ctx->pc = 0x2C7A38u;
        goto label_2c7a38;
    }
    ctx->pc = 0x2C7A30u;
    {
        const bool branch_taken_0x2c7a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a30) {
            ctx->pc = 0x2C7A48u;
            goto label_2c7a48;
        }
    }
    ctx->pc = 0x2C7A38u;
label_2c7a38:
    // 0x2c7a38: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2c7a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2c7a3c:
    // 0x2c7a3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c7a40:
    // 0x2c7a40: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x2c7a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
label_2c7a44:
    // 0x2c7a44: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2c7a44u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c7a48:
    // 0x2c7a48: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_2c7a4c:
    if (ctx->pc == 0x2C7A4Cu) {
        ctx->pc = 0x2C7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A48u;
        // 0x2c7a4c: 0x92220045  lbu         $v0, 0x45($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A50u;
        goto label_2c7a50;
    }
    ctx->pc = 0x2C7A48u;
    {
        const bool branch_taken_0x2c7a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a48) {
            ctx->pc = 0x2C7A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7A48u;
            // 0x2c7a4c: 0x92220045  lbu         $v0, 0x45($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7A9Cu;
            goto label_2c7a9c;
        }
    }
    ctx->pc = 0x2C7A50u;
label_2c7a50:
    // 0x2c7a50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c7a54:
    // 0x2c7a54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c7a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c7a58:
    // 0x2c7a58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7a5c:
    // 0x2c7a5c: 0x40f809  jalr        $v0
label_2c7a60:
    if (ctx->pc == 0x2C7A60u) {
        ctx->pc = 0x2C7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A5Cu;
        // 0x2c7a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A64u;
        goto label_2c7a64;
    }
    ctx->pc = 0x2C7A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7A64u);
        ctx->pc = 0x2C7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A5Cu;
        // 0x2c7a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7A5Cu, 0x2C7A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7A64u;
label_2c7a64:
    // 0x2c7a64: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c7a68:
    // 0x2c7a68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a6c:
    // 0x2c7a6c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c7a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c7a70:
    // 0x2c7a70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7a74:
    // 0x2c7a74: 0x40f809  jalr        $v0
label_2c7a78:
    if (ctx->pc == 0x2C7A78u) {
        ctx->pc = 0x2C7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A74u;
        // 0x2c7a78: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A7Cu;
        goto label_2c7a7c;
    }
    ctx->pc = 0x2C7A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7A7Cu);
        ctx->pc = 0x2C7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A74u;
        // 0x2c7a78: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7A74u, 0x2C7A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7A7Cu;
label_2c7a7c:
    // 0x2c7a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c7a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a80:
    // 0x2c7a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a84:
    // 0x2c7a84: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2c7a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a88:
    // 0x2c7a88: 0xc08e20a  jal         func_238828
label_2c7a8c:
    if (ctx->pc == 0x2C7A8Cu) {
        ctx->pc = 0x2C7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A88u;
        // 0x2c7a8c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7A90u;
        goto label_2c7a90;
    }
    ctx->pc = 0x2C7A88u;
    SET_GPR_U32(ctx, 31, 0x2C7A90u);
    ctx->pc = 0x2C7A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7A88u;
    // 0x2c7a8c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238828u, 0x2C7A88u, 0x2C7A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A90u;
label_2c7a90:
    // 0x2c7a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7a94:
    // 0x2c7a94: 0xa2220045  sb          $v0, 0x45($s1)
    ctx->pc = 0x2c7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
label_2c7a98:
    // 0x2c7a98: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x2c7a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_2c7a9c:
    // 0x2c7a9c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_2c7aa0:
    if (ctx->pc == 0x2C7AA0u) {
        ctx->pc = 0x2C7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A9Cu;
        // 0x2c7aa0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AA4u;
        goto label_2c7aa4;
    }
    ctx->pc = 0x2C7A9Cu;
    {
        const bool branch_taken_0x2c7a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A9Cu;
        // 0x2c7aa0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a9c) {
            ctx->pc = 0x2C7BF0u;
            goto label_2c7bf0;
        }
    }
    ctx->pc = 0x2C7AA4u;
label_2c7aa4:
    // 0x2c7aa4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2c7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c7aa8:
    // 0x2c7aa8: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x2c7aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_2c7aac:
    // 0x2c7aac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c7ab0:
    if (ctx->pc == 0x2C7AB0u) {
        ctx->pc = 0x2C7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AACu;
        // 0x2c7ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AB4u;
        goto label_2c7ab4;
    }
    ctx->pc = 0x2C7AACu;
    {
        const bool branch_taken_0x2c7aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AACu;
        // 0x2c7ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7aac) {
            ctx->pc = 0x2C7AC8u;
            goto label_2c7ac8;
        }
    }
    ctx->pc = 0x2C7AB4u;
label_2c7ab4:
    // 0x2c7ab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c7ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7ab8:
    // 0x2c7ab8: 0xc0b1c92  jal         func_2C7248
label_2c7abc:
    if (ctx->pc == 0x2C7ABCu) {
        ctx->pc = 0x2C7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AB8u;
        // 0x2c7abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AC0u;
        goto label_2c7ac0;
    }
    ctx->pc = 0x2C7AB8u;
    SET_GPR_U32(ctx, 31, 0x2C7AC0u);
    ctx->pc = 0x2C7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7AB8u;
    // 0x2c7abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C7AB8u, 0x2C7AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7AC0u;
label_2c7ac0:
    // 0x2c7ac0: 0x26e21388  addiu       $v0, $s7, 0x1388
    ctx->pc = 0x2c7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 5000));
label_2c7ac4:
    // 0x2c7ac4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2c7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2c7ac8:
    // 0x2c7ac8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2c7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7acc:
    // 0x2c7acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7ad0:
    // 0x2c7ad0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_2c7ad4:
    if (ctx->pc == 0x2C7AD4u) {
        ctx->pc = 0x2C7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AD0u;
        // 0x2c7ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AD8u;
        goto label_2c7ad8;
    }
    ctx->pc = 0x2C7AD0u;
    {
        const bool branch_taken_0x2c7ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AD0u;
        // 0x2c7ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ad0) {
            ctx->pc = 0x2C7B14u;
            goto label_2c7b14;
        }
    }
    ctx->pc = 0x2C7AD8u;
label_2c7ad8:
    // 0x2c7ad8: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_2c7adc:
    if (ctx->pc == 0x2C7ADCu) {
        ctx->pc = 0x2C7AE0u;
        goto label_2c7ae0;
    }
    ctx->pc = 0x2C7AD8u;
    {
        const bool branch_taken_0x2c7ad8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ad8) {
            ctx->pc = 0x2C7B40u;
            goto label_2c7b40;
        }
    }
    ctx->pc = 0x2C7AE0u;
label_2c7ae0:
    // 0x2c7ae0: 0xc095fce  jal         func_257F38
label_2c7ae4:
    if (ctx->pc == 0x2C7AE4u) {
        ctx->pc = 0x2C7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AE0u;
        // 0x2c7ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AE8u;
        goto label_2c7ae8;
    }
    ctx->pc = 0x2C7AE0u;
    SET_GPR_U32(ctx, 31, 0x2C7AE8u);
    ctx->pc = 0x2C7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7AE0u;
    // 0x2c7ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2C7AE0u, 0x2C7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7AE8u;
label_2c7ae8:
    // 0x2c7ae8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c7ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c7aec:
    // 0x2c7aec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c7aecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c7af0:
    // 0x2c7af0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7af4:
    // 0x2c7af4: 0x40f809  jalr        $v0
label_2c7af8:
    if (ctx->pc == 0x2C7AF8u) {
        ctx->pc = 0x2C7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AF4u;
        // 0x2c7af8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7AFCu;
        goto label_2c7afc;
    }
    ctx->pc = 0x2C7AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7AFCu);
        ctx->pc = 0x2C7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AF4u;
        // 0x2c7af8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7AF4u, 0x2C7AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7AFCu;
label_2c7afc:
    // 0x2c7afc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2c7afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2c7b00:
    // 0x2c7b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b04:
    // 0x2c7b04: 0xc08e150  jal         func_238540
label_2c7b08:
    if (ctx->pc == 0x2C7B08u) {
        ctx->pc = 0x2C7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B04u;
        // 0x2c7b08: 0x24a556b0  addiu       $a1, $a1, 0x56B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B0Cu;
        goto label_2c7b0c;
    }
    ctx->pc = 0x2C7B04u;
    SET_GPR_U32(ctx, 31, 0x2C7B0Cu);
    ctx->pc = 0x2C7B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B04u;
    // 0x2c7b08: 0x24a556b0  addiu       $a1, $a1, 0x56B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2C7B04u, 0x2C7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B0Cu;
label_2c7b0c:
    // 0x2c7b0c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2c7b10:
    if (ctx->pc == 0x2C7B10u) {
        ctx->pc = 0x2C7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B0Cu;
        // 0x2c7b10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B14u;
        goto label_2c7b14;
    }
    ctx->pc = 0x2C7B0Cu;
    {
        const bool branch_taken_0x2c7b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B0Cu;
        // 0x2c7b10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b0c) {
            ctx->pc = 0x2C7B40u;
            goto label_2c7b40;
        }
    }
    ctx->pc = 0x2C7B14u;
label_2c7b14:
    // 0x2c7b14: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2c7b18:
    // 0x2c7b18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c7b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2c7b1c:
    // 0x2c7b1c: 0x248210f8  addiu       $v0, $a0, 0x10F8
    ctx->pc = 0x2c7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4344));
label_2c7b20:
    // 0x2c7b20: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2c7b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
label_2c7b24:
    // 0x2c7b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c7b28:
    // 0x2c7b28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c7b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b2c:
    // 0x2c7b2c: 0x90670007  lbu         $a3, 0x7($v1)
    ctx->pc = 0x2c7b2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
label_2c7b30:
    // 0x2c7b30: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c7b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7b34:
    // 0x2c7b34: 0xc10796c  jal         func_41E5B0
label_2c7b38:
    if (ctx->pc == 0x2C7B38u) {
        ctx->pc = 0x2C7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B34u;
        // 0x2c7b38: 0x90660004  lbu         $a2, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B3Cu;
        goto label_2c7b3c;
    }
    ctx->pc = 0x2C7B34u;
    SET_GPR_U32(ctx, 31, 0x2C7B3Cu);
    ctx->pc = 0x2C7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B34u;
    // 0x2c7b38: 0x90660004  lbu         $a2, 0x4($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2C7B34u, 0x2C7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B3Cu;
label_2c7b3c:
    // 0x2c7b3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7b40:
    // 0x2c7b40: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2c7b44:
    if (ctx->pc == 0x2C7B44u) {
        ctx->pc = 0x2C7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B40u;
        // 0x2c7b44: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B48u;
        goto label_2c7b48;
    }
    ctx->pc = 0x2C7B40u;
    {
        const bool branch_taken_0x2c7b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B40u;
        // 0x2c7b44: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b40) {
            ctx->pc = 0x2C7B74u;
            goto label_2c7b74;
        }
    }
    ctx->pc = 0x2C7B48u;
label_2c7b48:
    // 0x2c7b48: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2c7b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2c7b4c:
    // 0x2c7b4c: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x2c7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_2c7b50:
    // 0x2c7b50: 0xc050fda  jal         func_143F68
label_2c7b54:
    if (ctx->pc == 0x2C7B54u) {
        ctx->pc = 0x2C7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B50u;
        // 0x2c7b54: 0x24a556e8  addiu       $a1, $a1, 0x56E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B58u;
        goto label_2c7b58;
    }
    ctx->pc = 0x2C7B50u;
    SET_GPR_U32(ctx, 31, 0x2C7B58u);
    ctx->pc = 0x2C7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B50u;
    // 0x2c7b54: 0x24a556e8  addiu       $a1, $a1, 0x56E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2C7B50u, 0x2C7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B58u;
label_2c7b58:
    // 0x2c7b58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c7b5c:
    // 0x2c7b5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c7b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b60:
    // 0x2c7b60: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x2c7b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_2c7b64:
    // 0x2c7b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b68:
    // 0x2c7b68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b6c:
    // 0x2c7b6c: 0xc043f36  jal         func_10FCD8
label_2c7b70:
    if (ctx->pc == 0x2C7B70u) {
        ctx->pc = 0x2C7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B6Cu;
        // 0x2c7b70: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B74u;
        goto label_2c7b74;
    }
    ctx->pc = 0x2C7B6Cu;
    SET_GPR_U32(ctx, 31, 0x2C7B74u);
    ctx->pc = 0x2C7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B6Cu;
    // 0x2c7b70: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x2C7B6Cu, 0x2C7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B74u;
label_2c7b74:
    // 0x2c7b74: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2c7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7b78:
    // 0x2c7b78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c7b7c:
    // 0x2c7b7c: 0x247010f8  addiu       $s0, $v1, 0x10F8
    ctx->pc = 0x2c7b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
label_2c7b80:
    // 0x2c7b80: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2c7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
label_2c7b84:
    // 0x2c7b84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2c7b88:
    // 0x2c7b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c7b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b8c:
    // 0x2c7b8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c7b90:
    // 0x2c7b90: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c7b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c7b94:
    // 0x2c7b94: 0x90470005  lbu         $a3, 0x5($v0)
    ctx->pc = 0x2c7b94u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_2c7b98:
    // 0x2c7b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c7b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b9c:
    // 0x2c7b9c: 0xc10796c  jal         func_41E5B0
label_2c7ba0:
    if (ctx->pc == 0x2C7BA0u) {
        ctx->pc = 0x2C7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B9Cu;
        // 0x2c7ba0: 0x73823  negu        $a3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7BA4u;
        goto label_2c7ba4;
    }
    ctx->pc = 0x2C7B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C7BA4u);
    ctx->pc = 0x2C7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7B9Cu;
    // 0x2c7ba0: 0x73823  negu        $a3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2C7B9Cu, 0x2C7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7BA4u;
label_2c7ba4:
    // 0x2c7ba4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2c7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7ba8:
    // 0x2c7ba8: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x2c7ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2c7bac:
    // 0x2c7bac: 0x8e440370  lw          $a0, 0x370($s2)
    ctx->pc = 0x2c7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_2c7bb0:
    // 0x2c7bb0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c7bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c7bb4:
    // 0x2c7bb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2c7bb8:
    // 0x2c7bb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7bbc:
    // 0x2c7bbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2c7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2c7bc0:
    // 0x2c7bc0: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x2c7bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_2c7bc4:
    // 0x2c7bc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c7bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c7bc8:
    // 0x2c7bc8: 0x288303e8  slti        $v1, $a0, 0x3E8
    ctx->pc = 0x2c7bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2c7bcc:
    // 0x2c7bcc: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x2c7bccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2c7bd0:
    // 0x2c7bd0: 0xc5302a  slt         $a2, $a2, $a1
    ctx->pc = 0x2c7bd0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2c7bd4:
    // 0x2c7bd4: 0x6280a  movz        $a1, $zero, $a2
    ctx->pc = 0x2c7bd4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2c7bd8:
    // 0x2c7bd8: 0xae450370  sw          $a1, 0x370($s2)
    ctx->pc = 0x2c7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 5));
label_2c7bdc:
    // 0x2c7bdc: 0xa227003f  sb          $a3, 0x3F($s1)
    ctx->pc = 0x2c7bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 63), (uint8_t)GPR_U32(ctx, 7));
label_2c7be0:
    // 0x2c7be0: 0x96220038  lhu         $v0, 0x38($s1)
    ctx->pc = 0x2c7be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_2c7be4:
    // 0x2c7be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c7be8:
    // 0x2c7be8: 0xa6220038  sh          $v0, 0x38($s1)
    ctx->pc = 0x2c7be8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
label_2c7bec:
    // 0x2c7bec: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2c7becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c7bf0:
    // 0x2c7bf0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2c7bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c7bf4:
    // 0x2c7bf4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2c7bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c7bf8:
    // 0x2c7bf8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2c7bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c7bfc:
    // 0x2c7bfc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2c7bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c7c00:
    // 0x2c7c00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c7c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c7c04:
    // 0x2c7c04: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2c7c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c7c08:
    // 0x2c7c08: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2c7c08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7c0c:
    // 0x2c7c0c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2c7c0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7c10:
    // 0x2c7c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7c14:
    // 0x2c7c14: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2c7c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c7c18:
    // 0x2c7c18: 0x3e00008  jr          $ra
label_2c7c1c:
    if (ctx->pc == 0x2C7C1Cu) {
        ctx->pc = 0x2C7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C18u;
        // 0x2c7c1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C20u;
        goto label_fallthrough_0x2c7c18;
    }
    ctx->pc = 0x2C7C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C18u;
        // 0x2c7c1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c7c18:
    ctx->pc = 0x2C7C20u;
}
