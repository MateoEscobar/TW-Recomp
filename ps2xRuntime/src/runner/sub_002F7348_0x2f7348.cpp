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

// Function: sub_002F7348
// Address: 0x2f7348 - 0x2f7bd0
void sub_002F7348_0x2f7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7348_0x2f7348");
#endif

    switch (ctx->pc) {
        case 0x2f7348u: goto label_2f7348;
        case 0x2f734cu: goto label_2f734c;
        case 0x2f7350u: goto label_2f7350;
        case 0x2f7354u: goto label_2f7354;
        case 0x2f7358u: goto label_2f7358;
        case 0x2f735cu: goto label_2f735c;
        case 0x2f7360u: goto label_2f7360;
        case 0x2f7364u: goto label_2f7364;
        case 0x2f7368u: goto label_2f7368;
        case 0x2f736cu: goto label_2f736c;
        case 0x2f7370u: goto label_2f7370;
        case 0x2f7374u: goto label_2f7374;
        case 0x2f7378u: goto label_2f7378;
        case 0x2f737cu: goto label_2f737c;
        case 0x2f7380u: goto label_2f7380;
        case 0x2f7384u: goto label_2f7384;
        case 0x2f7388u: goto label_2f7388;
        case 0x2f738cu: goto label_2f738c;
        case 0x2f7390u: goto label_2f7390;
        case 0x2f7394u: goto label_2f7394;
        case 0x2f7398u: goto label_2f7398;
        case 0x2f739cu: goto label_2f739c;
        case 0x2f73a0u: goto label_2f73a0;
        case 0x2f73a4u: goto label_2f73a4;
        case 0x2f73a8u: goto label_2f73a8;
        case 0x2f73acu: goto label_2f73ac;
        case 0x2f73b0u: goto label_2f73b0;
        case 0x2f73b4u: goto label_2f73b4;
        case 0x2f73b8u: goto label_2f73b8;
        case 0x2f73bcu: goto label_2f73bc;
        case 0x2f73c0u: goto label_2f73c0;
        case 0x2f73c4u: goto label_2f73c4;
        case 0x2f73c8u: goto label_2f73c8;
        case 0x2f73ccu: goto label_2f73cc;
        case 0x2f73d0u: goto label_2f73d0;
        case 0x2f73d4u: goto label_2f73d4;
        case 0x2f73d8u: goto label_2f73d8;
        case 0x2f73dcu: goto label_2f73dc;
        case 0x2f73e0u: goto label_2f73e0;
        case 0x2f73e4u: goto label_2f73e4;
        case 0x2f73e8u: goto label_2f73e8;
        case 0x2f73ecu: goto label_2f73ec;
        case 0x2f73f0u: goto label_2f73f0;
        case 0x2f73f4u: goto label_2f73f4;
        case 0x2f73f8u: goto label_2f73f8;
        case 0x2f73fcu: goto label_2f73fc;
        case 0x2f7400u: goto label_2f7400;
        case 0x2f7404u: goto label_2f7404;
        case 0x2f7408u: goto label_2f7408;
        case 0x2f740cu: goto label_2f740c;
        case 0x2f7410u: goto label_2f7410;
        case 0x2f7414u: goto label_2f7414;
        case 0x2f7418u: goto label_2f7418;
        case 0x2f741cu: goto label_2f741c;
        case 0x2f7420u: goto label_2f7420;
        case 0x2f7424u: goto label_2f7424;
        case 0x2f7428u: goto label_2f7428;
        case 0x2f742cu: goto label_2f742c;
        case 0x2f7430u: goto label_2f7430;
        case 0x2f7434u: goto label_2f7434;
        case 0x2f7438u: goto label_2f7438;
        case 0x2f743cu: goto label_2f743c;
        case 0x2f7440u: goto label_2f7440;
        case 0x2f7444u: goto label_2f7444;
        case 0x2f7448u: goto label_2f7448;
        case 0x2f744cu: goto label_2f744c;
        case 0x2f7450u: goto label_2f7450;
        case 0x2f7454u: goto label_2f7454;
        case 0x2f7458u: goto label_2f7458;
        case 0x2f745cu: goto label_2f745c;
        case 0x2f7460u: goto label_2f7460;
        case 0x2f7464u: goto label_2f7464;
        case 0x2f7468u: goto label_2f7468;
        case 0x2f746cu: goto label_2f746c;
        case 0x2f7470u: goto label_2f7470;
        case 0x2f7474u: goto label_2f7474;
        case 0x2f7478u: goto label_2f7478;
        case 0x2f747cu: goto label_2f747c;
        case 0x2f7480u: goto label_2f7480;
        case 0x2f7484u: goto label_2f7484;
        case 0x2f7488u: goto label_2f7488;
        case 0x2f748cu: goto label_2f748c;
        case 0x2f7490u: goto label_2f7490;
        case 0x2f7494u: goto label_2f7494;
        case 0x2f7498u: goto label_2f7498;
        case 0x2f749cu: goto label_2f749c;
        case 0x2f74a0u: goto label_2f74a0;
        case 0x2f74a4u: goto label_2f74a4;
        case 0x2f74a8u: goto label_2f74a8;
        case 0x2f74acu: goto label_2f74ac;
        case 0x2f74b0u: goto label_2f74b0;
        case 0x2f74b4u: goto label_2f74b4;
        case 0x2f74b8u: goto label_2f74b8;
        case 0x2f74bcu: goto label_2f74bc;
        case 0x2f74c0u: goto label_2f74c0;
        case 0x2f74c4u: goto label_2f74c4;
        case 0x2f74c8u: goto label_2f74c8;
        case 0x2f74ccu: goto label_2f74cc;
        case 0x2f74d0u: goto label_2f74d0;
        case 0x2f74d4u: goto label_2f74d4;
        case 0x2f74d8u: goto label_2f74d8;
        case 0x2f74dcu: goto label_2f74dc;
        case 0x2f74e0u: goto label_2f74e0;
        case 0x2f74e4u: goto label_2f74e4;
        case 0x2f74e8u: goto label_2f74e8;
        case 0x2f74ecu: goto label_2f74ec;
        case 0x2f74f0u: goto label_2f74f0;
        case 0x2f74f4u: goto label_2f74f4;
        case 0x2f74f8u: goto label_2f74f8;
        case 0x2f74fcu: goto label_2f74fc;
        case 0x2f7500u: goto label_2f7500;
        case 0x2f7504u: goto label_2f7504;
        case 0x2f7508u: goto label_2f7508;
        case 0x2f750cu: goto label_2f750c;
        case 0x2f7510u: goto label_2f7510;
        case 0x2f7514u: goto label_2f7514;
        case 0x2f7518u: goto label_2f7518;
        case 0x2f751cu: goto label_2f751c;
        case 0x2f7520u: goto label_2f7520;
        case 0x2f7524u: goto label_2f7524;
        case 0x2f7528u: goto label_2f7528;
        case 0x2f752cu: goto label_2f752c;
        case 0x2f7530u: goto label_2f7530;
        case 0x2f7534u: goto label_2f7534;
        case 0x2f7538u: goto label_2f7538;
        case 0x2f753cu: goto label_2f753c;
        case 0x2f7540u: goto label_2f7540;
        case 0x2f7544u: goto label_2f7544;
        case 0x2f7548u: goto label_2f7548;
        case 0x2f754cu: goto label_2f754c;
        case 0x2f7550u: goto label_2f7550;
        case 0x2f7554u: goto label_2f7554;
        case 0x2f7558u: goto label_2f7558;
        case 0x2f755cu: goto label_2f755c;
        case 0x2f7560u: goto label_2f7560;
        case 0x2f7564u: goto label_2f7564;
        case 0x2f7568u: goto label_2f7568;
        case 0x2f756cu: goto label_2f756c;
        case 0x2f7570u: goto label_2f7570;
        case 0x2f7574u: goto label_2f7574;
        case 0x2f7578u: goto label_2f7578;
        case 0x2f757cu: goto label_2f757c;
        case 0x2f7580u: goto label_2f7580;
        case 0x2f7584u: goto label_2f7584;
        case 0x2f7588u: goto label_2f7588;
        case 0x2f758cu: goto label_2f758c;
        case 0x2f7590u: goto label_2f7590;
        case 0x2f7594u: goto label_2f7594;
        case 0x2f7598u: goto label_2f7598;
        case 0x2f759cu: goto label_2f759c;
        case 0x2f75a0u: goto label_2f75a0;
        case 0x2f75a4u: goto label_2f75a4;
        case 0x2f75a8u: goto label_2f75a8;
        case 0x2f75acu: goto label_2f75ac;
        case 0x2f75b0u: goto label_2f75b0;
        case 0x2f75b4u: goto label_2f75b4;
        case 0x2f75b8u: goto label_2f75b8;
        case 0x2f75bcu: goto label_2f75bc;
        case 0x2f75c0u: goto label_2f75c0;
        case 0x2f75c4u: goto label_2f75c4;
        case 0x2f75c8u: goto label_2f75c8;
        case 0x2f75ccu: goto label_2f75cc;
        case 0x2f75d0u: goto label_2f75d0;
        case 0x2f75d4u: goto label_2f75d4;
        case 0x2f75d8u: goto label_2f75d8;
        case 0x2f75dcu: goto label_2f75dc;
        case 0x2f75e0u: goto label_2f75e0;
        case 0x2f75e4u: goto label_2f75e4;
        case 0x2f75e8u: goto label_2f75e8;
        case 0x2f75ecu: goto label_2f75ec;
        case 0x2f75f0u: goto label_2f75f0;
        case 0x2f75f4u: goto label_2f75f4;
        case 0x2f75f8u: goto label_2f75f8;
        case 0x2f75fcu: goto label_2f75fc;
        case 0x2f7600u: goto label_2f7600;
        case 0x2f7604u: goto label_2f7604;
        case 0x2f7608u: goto label_2f7608;
        case 0x2f760cu: goto label_2f760c;
        case 0x2f7610u: goto label_2f7610;
        case 0x2f7614u: goto label_2f7614;
        case 0x2f7618u: goto label_2f7618;
        case 0x2f761cu: goto label_2f761c;
        case 0x2f7620u: goto label_2f7620;
        case 0x2f7624u: goto label_2f7624;
        case 0x2f7628u: goto label_2f7628;
        case 0x2f762cu: goto label_2f762c;
        case 0x2f7630u: goto label_2f7630;
        case 0x2f7634u: goto label_2f7634;
        case 0x2f7638u: goto label_2f7638;
        case 0x2f763cu: goto label_2f763c;
        case 0x2f7640u: goto label_2f7640;
        case 0x2f7644u: goto label_2f7644;
        case 0x2f7648u: goto label_2f7648;
        case 0x2f764cu: goto label_2f764c;
        case 0x2f7650u: goto label_2f7650;
        case 0x2f7654u: goto label_2f7654;
        case 0x2f7658u: goto label_2f7658;
        case 0x2f765cu: goto label_2f765c;
        case 0x2f7660u: goto label_2f7660;
        case 0x2f7664u: goto label_2f7664;
        case 0x2f7668u: goto label_2f7668;
        case 0x2f766cu: goto label_2f766c;
        case 0x2f7670u: goto label_2f7670;
        case 0x2f7674u: goto label_2f7674;
        case 0x2f7678u: goto label_2f7678;
        case 0x2f767cu: goto label_2f767c;
        case 0x2f7680u: goto label_2f7680;
        case 0x2f7684u: goto label_2f7684;
        case 0x2f7688u: goto label_2f7688;
        case 0x2f768cu: goto label_2f768c;
        case 0x2f7690u: goto label_2f7690;
        case 0x2f7694u: goto label_2f7694;
        case 0x2f7698u: goto label_2f7698;
        case 0x2f769cu: goto label_2f769c;
        case 0x2f76a0u: goto label_2f76a0;
        case 0x2f76a4u: goto label_2f76a4;
        case 0x2f76a8u: goto label_2f76a8;
        case 0x2f76acu: goto label_2f76ac;
        case 0x2f76b0u: goto label_2f76b0;
        case 0x2f76b4u: goto label_2f76b4;
        case 0x2f76b8u: goto label_2f76b8;
        case 0x2f76bcu: goto label_2f76bc;
        case 0x2f76c0u: goto label_2f76c0;
        case 0x2f76c4u: goto label_2f76c4;
        case 0x2f76c8u: goto label_2f76c8;
        case 0x2f76ccu: goto label_2f76cc;
        case 0x2f76d0u: goto label_2f76d0;
        case 0x2f76d4u: goto label_2f76d4;
        case 0x2f76d8u: goto label_2f76d8;
        case 0x2f76dcu: goto label_2f76dc;
        case 0x2f76e0u: goto label_2f76e0;
        case 0x2f76e4u: goto label_2f76e4;
        case 0x2f76e8u: goto label_2f76e8;
        case 0x2f76ecu: goto label_2f76ec;
        case 0x2f76f0u: goto label_2f76f0;
        case 0x2f76f4u: goto label_2f76f4;
        case 0x2f76f8u: goto label_2f76f8;
        case 0x2f76fcu: goto label_2f76fc;
        case 0x2f7700u: goto label_2f7700;
        case 0x2f7704u: goto label_2f7704;
        case 0x2f7708u: goto label_2f7708;
        case 0x2f770cu: goto label_2f770c;
        case 0x2f7710u: goto label_2f7710;
        case 0x2f7714u: goto label_2f7714;
        case 0x2f7718u: goto label_2f7718;
        case 0x2f771cu: goto label_2f771c;
        case 0x2f7720u: goto label_2f7720;
        case 0x2f7724u: goto label_2f7724;
        case 0x2f7728u: goto label_2f7728;
        case 0x2f772cu: goto label_2f772c;
        case 0x2f7730u: goto label_2f7730;
        case 0x2f7734u: goto label_2f7734;
        case 0x2f7738u: goto label_2f7738;
        case 0x2f773cu: goto label_2f773c;
        case 0x2f7740u: goto label_2f7740;
        case 0x2f7744u: goto label_2f7744;
        case 0x2f7748u: goto label_2f7748;
        case 0x2f774cu: goto label_2f774c;
        case 0x2f7750u: goto label_2f7750;
        case 0x2f7754u: goto label_2f7754;
        case 0x2f7758u: goto label_2f7758;
        case 0x2f775cu: goto label_2f775c;
        case 0x2f7760u: goto label_2f7760;
        case 0x2f7764u: goto label_2f7764;
        case 0x2f7768u: goto label_2f7768;
        case 0x2f776cu: goto label_2f776c;
        case 0x2f7770u: goto label_2f7770;
        case 0x2f7774u: goto label_2f7774;
        case 0x2f7778u: goto label_2f7778;
        case 0x2f777cu: goto label_2f777c;
        case 0x2f7780u: goto label_2f7780;
        case 0x2f7784u: goto label_2f7784;
        case 0x2f7788u: goto label_2f7788;
        case 0x2f778cu: goto label_2f778c;
        case 0x2f7790u: goto label_2f7790;
        case 0x2f7794u: goto label_2f7794;
        case 0x2f7798u: goto label_2f7798;
        case 0x2f779cu: goto label_2f779c;
        case 0x2f77a0u: goto label_2f77a0;
        case 0x2f77a4u: goto label_2f77a4;
        case 0x2f77a8u: goto label_2f77a8;
        case 0x2f77acu: goto label_2f77ac;
        case 0x2f77b0u: goto label_2f77b0;
        case 0x2f77b4u: goto label_2f77b4;
        case 0x2f77b8u: goto label_2f77b8;
        case 0x2f77bcu: goto label_2f77bc;
        case 0x2f77c0u: goto label_2f77c0;
        case 0x2f77c4u: goto label_2f77c4;
        case 0x2f77c8u: goto label_2f77c8;
        case 0x2f77ccu: goto label_2f77cc;
        case 0x2f77d0u: goto label_2f77d0;
        case 0x2f77d4u: goto label_2f77d4;
        case 0x2f77d8u: goto label_2f77d8;
        case 0x2f77dcu: goto label_2f77dc;
        case 0x2f77e0u: goto label_2f77e0;
        case 0x2f77e4u: goto label_2f77e4;
        case 0x2f77e8u: goto label_2f77e8;
        case 0x2f77ecu: goto label_2f77ec;
        case 0x2f77f0u: goto label_2f77f0;
        case 0x2f77f4u: goto label_2f77f4;
        case 0x2f77f8u: goto label_2f77f8;
        case 0x2f77fcu: goto label_2f77fc;
        case 0x2f7800u: goto label_2f7800;
        case 0x2f7804u: goto label_2f7804;
        case 0x2f7808u: goto label_2f7808;
        case 0x2f780cu: goto label_2f780c;
        case 0x2f7810u: goto label_2f7810;
        case 0x2f7814u: goto label_2f7814;
        case 0x2f7818u: goto label_2f7818;
        case 0x2f781cu: goto label_2f781c;
        case 0x2f7820u: goto label_2f7820;
        case 0x2f7824u: goto label_2f7824;
        case 0x2f7828u: goto label_2f7828;
        case 0x2f782cu: goto label_2f782c;
        case 0x2f7830u: goto label_2f7830;
        case 0x2f7834u: goto label_2f7834;
        case 0x2f7838u: goto label_2f7838;
        case 0x2f783cu: goto label_2f783c;
        case 0x2f7840u: goto label_2f7840;
        case 0x2f7844u: goto label_2f7844;
        case 0x2f7848u: goto label_2f7848;
        case 0x2f784cu: goto label_2f784c;
        case 0x2f7850u: goto label_2f7850;
        case 0x2f7854u: goto label_2f7854;
        case 0x2f7858u: goto label_2f7858;
        case 0x2f785cu: goto label_2f785c;
        case 0x2f7860u: goto label_2f7860;
        case 0x2f7864u: goto label_2f7864;
        case 0x2f7868u: goto label_2f7868;
        case 0x2f786cu: goto label_2f786c;
        case 0x2f7870u: goto label_2f7870;
        case 0x2f7874u: goto label_2f7874;
        case 0x2f7878u: goto label_2f7878;
        case 0x2f787cu: goto label_2f787c;
        case 0x2f7880u: goto label_2f7880;
        case 0x2f7884u: goto label_2f7884;
        case 0x2f7888u: goto label_2f7888;
        case 0x2f788cu: goto label_2f788c;
        case 0x2f7890u: goto label_2f7890;
        case 0x2f7894u: goto label_2f7894;
        case 0x2f7898u: goto label_2f7898;
        case 0x2f789cu: goto label_2f789c;
        case 0x2f78a0u: goto label_2f78a0;
        case 0x2f78a4u: goto label_2f78a4;
        case 0x2f78a8u: goto label_2f78a8;
        case 0x2f78acu: goto label_2f78ac;
        case 0x2f78b0u: goto label_2f78b0;
        case 0x2f78b4u: goto label_2f78b4;
        case 0x2f78b8u: goto label_2f78b8;
        case 0x2f78bcu: goto label_2f78bc;
        case 0x2f78c0u: goto label_2f78c0;
        case 0x2f78c4u: goto label_2f78c4;
        case 0x2f78c8u: goto label_2f78c8;
        case 0x2f78ccu: goto label_2f78cc;
        case 0x2f78d0u: goto label_2f78d0;
        case 0x2f78d4u: goto label_2f78d4;
        case 0x2f78d8u: goto label_2f78d8;
        case 0x2f78dcu: goto label_2f78dc;
        case 0x2f78e0u: goto label_2f78e0;
        case 0x2f78e4u: goto label_2f78e4;
        case 0x2f78e8u: goto label_2f78e8;
        case 0x2f78ecu: goto label_2f78ec;
        case 0x2f78f0u: goto label_2f78f0;
        case 0x2f78f4u: goto label_2f78f4;
        case 0x2f78f8u: goto label_2f78f8;
        case 0x2f78fcu: goto label_2f78fc;
        case 0x2f7900u: goto label_2f7900;
        case 0x2f7904u: goto label_2f7904;
        case 0x2f7908u: goto label_2f7908;
        case 0x2f790cu: goto label_2f790c;
        case 0x2f7910u: goto label_2f7910;
        case 0x2f7914u: goto label_2f7914;
        case 0x2f7918u: goto label_2f7918;
        case 0x2f791cu: goto label_2f791c;
        case 0x2f7920u: goto label_2f7920;
        case 0x2f7924u: goto label_2f7924;
        case 0x2f7928u: goto label_2f7928;
        case 0x2f792cu: goto label_2f792c;
        case 0x2f7930u: goto label_2f7930;
        case 0x2f7934u: goto label_2f7934;
        case 0x2f7938u: goto label_2f7938;
        case 0x2f793cu: goto label_2f793c;
        case 0x2f7940u: goto label_2f7940;
        case 0x2f7944u: goto label_2f7944;
        case 0x2f7948u: goto label_2f7948;
        case 0x2f794cu: goto label_2f794c;
        case 0x2f7950u: goto label_2f7950;
        case 0x2f7954u: goto label_2f7954;
        case 0x2f7958u: goto label_2f7958;
        case 0x2f795cu: goto label_2f795c;
        case 0x2f7960u: goto label_2f7960;
        case 0x2f7964u: goto label_2f7964;
        case 0x2f7968u: goto label_2f7968;
        case 0x2f796cu: goto label_2f796c;
        case 0x2f7970u: goto label_2f7970;
        case 0x2f7974u: goto label_2f7974;
        case 0x2f7978u: goto label_2f7978;
        case 0x2f797cu: goto label_2f797c;
        case 0x2f7980u: goto label_2f7980;
        case 0x2f7984u: goto label_2f7984;
        case 0x2f7988u: goto label_2f7988;
        case 0x2f798cu: goto label_2f798c;
        case 0x2f7990u: goto label_2f7990;
        case 0x2f7994u: goto label_2f7994;
        case 0x2f7998u: goto label_2f7998;
        case 0x2f799cu: goto label_2f799c;
        case 0x2f79a0u: goto label_2f79a0;
        case 0x2f79a4u: goto label_2f79a4;
        case 0x2f79a8u: goto label_2f79a8;
        case 0x2f79acu: goto label_2f79ac;
        case 0x2f79b0u: goto label_2f79b0;
        case 0x2f79b4u: goto label_2f79b4;
        case 0x2f79b8u: goto label_2f79b8;
        case 0x2f79bcu: goto label_2f79bc;
        case 0x2f79c0u: goto label_2f79c0;
        case 0x2f79c4u: goto label_2f79c4;
        case 0x2f79c8u: goto label_2f79c8;
        case 0x2f79ccu: goto label_2f79cc;
        case 0x2f79d0u: goto label_2f79d0;
        case 0x2f79d4u: goto label_2f79d4;
        case 0x2f79d8u: goto label_2f79d8;
        case 0x2f79dcu: goto label_2f79dc;
        case 0x2f79e0u: goto label_2f79e0;
        case 0x2f79e4u: goto label_2f79e4;
        case 0x2f79e8u: goto label_2f79e8;
        case 0x2f79ecu: goto label_2f79ec;
        case 0x2f79f0u: goto label_2f79f0;
        case 0x2f79f4u: goto label_2f79f4;
        case 0x2f79f8u: goto label_2f79f8;
        case 0x2f79fcu: goto label_2f79fc;
        case 0x2f7a00u: goto label_2f7a00;
        case 0x2f7a04u: goto label_2f7a04;
        case 0x2f7a08u: goto label_2f7a08;
        case 0x2f7a0cu: goto label_2f7a0c;
        case 0x2f7a10u: goto label_2f7a10;
        case 0x2f7a14u: goto label_2f7a14;
        case 0x2f7a18u: goto label_2f7a18;
        case 0x2f7a1cu: goto label_2f7a1c;
        case 0x2f7a20u: goto label_2f7a20;
        case 0x2f7a24u: goto label_2f7a24;
        case 0x2f7a28u: goto label_2f7a28;
        case 0x2f7a2cu: goto label_2f7a2c;
        case 0x2f7a30u: goto label_2f7a30;
        case 0x2f7a34u: goto label_2f7a34;
        case 0x2f7a38u: goto label_2f7a38;
        case 0x2f7a3cu: goto label_2f7a3c;
        case 0x2f7a40u: goto label_2f7a40;
        case 0x2f7a44u: goto label_2f7a44;
        case 0x2f7a48u: goto label_2f7a48;
        case 0x2f7a4cu: goto label_2f7a4c;
        case 0x2f7a50u: goto label_2f7a50;
        case 0x2f7a54u: goto label_2f7a54;
        case 0x2f7a58u: goto label_2f7a58;
        case 0x2f7a5cu: goto label_2f7a5c;
        case 0x2f7a60u: goto label_2f7a60;
        case 0x2f7a64u: goto label_2f7a64;
        case 0x2f7a68u: goto label_2f7a68;
        case 0x2f7a6cu: goto label_2f7a6c;
        case 0x2f7a70u: goto label_2f7a70;
        case 0x2f7a74u: goto label_2f7a74;
        case 0x2f7a78u: goto label_2f7a78;
        case 0x2f7a7cu: goto label_2f7a7c;
        case 0x2f7a80u: goto label_2f7a80;
        case 0x2f7a84u: goto label_2f7a84;
        case 0x2f7a88u: goto label_2f7a88;
        case 0x2f7a8cu: goto label_2f7a8c;
        case 0x2f7a90u: goto label_2f7a90;
        case 0x2f7a94u: goto label_2f7a94;
        case 0x2f7a98u: goto label_2f7a98;
        case 0x2f7a9cu: goto label_2f7a9c;
        case 0x2f7aa0u: goto label_2f7aa0;
        case 0x2f7aa4u: goto label_2f7aa4;
        case 0x2f7aa8u: goto label_2f7aa8;
        case 0x2f7aacu: goto label_2f7aac;
        case 0x2f7ab0u: goto label_2f7ab0;
        case 0x2f7ab4u: goto label_2f7ab4;
        case 0x2f7ab8u: goto label_2f7ab8;
        case 0x2f7abcu: goto label_2f7abc;
        case 0x2f7ac0u: goto label_2f7ac0;
        case 0x2f7ac4u: goto label_2f7ac4;
        case 0x2f7ac8u: goto label_2f7ac8;
        case 0x2f7accu: goto label_2f7acc;
        case 0x2f7ad0u: goto label_2f7ad0;
        case 0x2f7ad4u: goto label_2f7ad4;
        case 0x2f7ad8u: goto label_2f7ad8;
        case 0x2f7adcu: goto label_2f7adc;
        case 0x2f7ae0u: goto label_2f7ae0;
        case 0x2f7ae4u: goto label_2f7ae4;
        case 0x2f7ae8u: goto label_2f7ae8;
        case 0x2f7aecu: goto label_2f7aec;
        case 0x2f7af0u: goto label_2f7af0;
        case 0x2f7af4u: goto label_2f7af4;
        case 0x2f7af8u: goto label_2f7af8;
        case 0x2f7afcu: goto label_2f7afc;
        case 0x2f7b00u: goto label_2f7b00;
        case 0x2f7b04u: goto label_2f7b04;
        case 0x2f7b08u: goto label_2f7b08;
        case 0x2f7b0cu: goto label_2f7b0c;
        case 0x2f7b10u: goto label_2f7b10;
        case 0x2f7b14u: goto label_2f7b14;
        case 0x2f7b18u: goto label_2f7b18;
        case 0x2f7b1cu: goto label_2f7b1c;
        case 0x2f7b20u: goto label_2f7b20;
        case 0x2f7b24u: goto label_2f7b24;
        case 0x2f7b28u: goto label_2f7b28;
        case 0x2f7b2cu: goto label_2f7b2c;
        case 0x2f7b30u: goto label_2f7b30;
        case 0x2f7b34u: goto label_2f7b34;
        case 0x2f7b38u: goto label_2f7b38;
        case 0x2f7b3cu: goto label_2f7b3c;
        case 0x2f7b40u: goto label_2f7b40;
        case 0x2f7b44u: goto label_2f7b44;
        case 0x2f7b48u: goto label_2f7b48;
        case 0x2f7b4cu: goto label_2f7b4c;
        case 0x2f7b50u: goto label_2f7b50;
        case 0x2f7b54u: goto label_2f7b54;
        case 0x2f7b58u: goto label_2f7b58;
        case 0x2f7b5cu: goto label_2f7b5c;
        case 0x2f7b60u: goto label_2f7b60;
        case 0x2f7b64u: goto label_2f7b64;
        case 0x2f7b68u: goto label_2f7b68;
        case 0x2f7b6cu: goto label_2f7b6c;
        case 0x2f7b70u: goto label_2f7b70;
        case 0x2f7b74u: goto label_2f7b74;
        case 0x2f7b78u: goto label_2f7b78;
        case 0x2f7b7cu: goto label_2f7b7c;
        case 0x2f7b80u: goto label_2f7b80;
        case 0x2f7b84u: goto label_2f7b84;
        case 0x2f7b88u: goto label_2f7b88;
        case 0x2f7b8cu: goto label_2f7b8c;
        case 0x2f7b90u: goto label_2f7b90;
        case 0x2f7b94u: goto label_2f7b94;
        case 0x2f7b98u: goto label_2f7b98;
        case 0x2f7b9cu: goto label_2f7b9c;
        case 0x2f7ba0u: goto label_2f7ba0;
        case 0x2f7ba4u: goto label_2f7ba4;
        case 0x2f7ba8u: goto label_2f7ba8;
        case 0x2f7bacu: goto label_2f7bac;
        case 0x2f7bb0u: goto label_2f7bb0;
        case 0x2f7bb4u: goto label_2f7bb4;
        case 0x2f7bb8u: goto label_2f7bb8;
        case 0x2f7bbcu: goto label_2f7bbc;
        case 0x2f7bc0u: goto label_2f7bc0;
        case 0x2f7bc4u: goto label_2f7bc4;
        case 0x2f7bc8u: goto label_2f7bc8;
        case 0x2f7bccu: goto label_2f7bcc;
        default: break;
    }

    ctx->pc = 0x2f7348u;

label_2f7348:
    // 0x2f7348: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2f7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_2f734c:
    // 0x2f734c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2f734cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2f7350:
    // 0x2f7350: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2f7350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_2f7354:
    // 0x2f7354: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2f7354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_2f7358:
    // 0x2f7358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f735c:
    // 0x2f735c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2f735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_2f7360:
    // 0x2f7360: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f7360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f7364:
    // 0x2f7364: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2f7364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_2f7368:
    // 0x2f7368: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2f7368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2f736c:
    // 0x2f736c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2f736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_2f7370:
    // 0x2f7370: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2f7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_2f7374:
    // 0x2f7374: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2f7374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_2f7378:
    // 0x2f7378: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2f7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_2f737c:
    // 0x2f737c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f737cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2f7380:
    // 0x2f7380: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x2f7380u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2f7384:
    // 0x2f7384: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2f7384u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2f7388:
    // 0x2f7388: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2f7388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2f738c:
    // 0x2f738c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7390:
    // 0x2f7390: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2f7390u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7394:
    // 0x2f7394: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2f7394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f7398:
    // 0x2f7398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f739c:
    // 0x2f739c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f739cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f73a0:
    // 0x2f73a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2f73a4:
    // 0x2f73a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f73a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f73a8:
    // 0x2f73a8: 0xc08a158  jal         func_228560
label_2f73ac:
    if (ctx->pc == 0x2F73ACu) {
        ctx->pc = 0x2F73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73A8u;
        // 0x2f73ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F73B0u;
        goto label_2f73b0;
    }
    ctx->pc = 0x2F73A8u;
    SET_GPR_U32(ctx, 31, 0x2F73B0u);
    ctx->pc = 0x2F73ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F73A8u;
    // 0x2f73ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2F73A8u, 0x2F73B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F73B0u;
label_2f73b0:
    // 0x2f73b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f73b4:
    // 0x2f73b4: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_2f73b8:
    if (ctx->pc == 0x2F73B8u) {
        ctx->pc = 0x2F73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73B4u;
        // 0x2f73b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F73BCu;
        goto label_2f73bc;
    }
    ctx->pc = 0x2F73B4u;
    {
        const bool branch_taken_0x2f73b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f73b4) {
            ctx->pc = 0x2F73B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F73B4u;
            // 0x2f73b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F73ECu;
            goto label_2f73ec;
        }
    }
    ctx->pc = 0x2F73BCu;
label_2f73bc:
    // 0x2f73bc: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x2f73bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
label_2f73c0:
    // 0x2f73c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f73c4:
    // 0x2f73c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f73c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f73c8:
    // 0x2f73c8: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x2f73c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2f73cc:
    // 0x2f73cc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2f73d0:
    if (ctx->pc == 0x2F73D0u) {
        ctx->pc = 0x2F73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73CCu;
        // 0x2f73d0: 0xa222001d  sb          $v0, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F73D4u;
        goto label_2f73d4;
    }
    ctx->pc = 0x2F73CCu;
    {
        const bool branch_taken_0x2f73cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73CCu;
        // 0x2f73d0: 0xa222001d  sb          $v0, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f73cc) {
            ctx->pc = 0x2F73E8u;
            goto label_2f73e8;
        }
    }
    ctx->pc = 0x2F73D4u;
label_2f73d4:
    // 0x2f73d4: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f73d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f73d8:
    // 0x2f73d8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2f73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2f73dc:
    // 0x2f73dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f73e0:
    // 0x2f73e0: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2f73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2f73e4:
    // 0x2f73e4: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x2f73e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
label_2f73e8:
    // 0x2f73e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f73ec:
    // 0x2f73ec: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f73ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f73f0:
    // 0x2f73f0: 0x1c4001e7  bgtz        $v0, . + 4 + (0x1E7 << 2)
label_2f73f4:
    if (ctx->pc == 0x2F73F4u) {
        ctx->pc = 0x2F73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73F0u;
        // 0x2f73f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F73F8u;
        goto label_2f73f8;
    }
    ctx->pc = 0x2F73F0u;
    {
        const bool branch_taken_0x2f73f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73F0u;
        // 0x2f73f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f73f0) {
            ctx->pc = 0x2F7B90u;
            goto label_2f7b90;
        }
    }
    ctx->pc = 0x2F73F8u;
label_2f73f8:
    // 0x2f73f8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2f73f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2f73fc:
    // 0x2f73fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f73fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7400:
    // 0x2f7400: 0xc089998  jal         func_226660
label_2f7404:
    if (ctx->pc == 0x2F7404u) {
        ctx->pc = 0x2F7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7400u;
        // 0x2f7404: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7408u;
        goto label_2f7408;
    }
    ctx->pc = 0x2F7400u;
    SET_GPR_U32(ctx, 31, 0x2F7408u);
    ctx->pc = 0x2F7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7400u;
    // 0x2f7404: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F7400u, 0x2F7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7408u;
label_2f7408:
    // 0x2f7408: 0x105301e2  beq         $v0, $s3, . + 4 + (0x1E2 << 2)
label_2f740c:
    if (ctx->pc == 0x2F740Cu) {
        ctx->pc = 0x2F740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7408u;
        // 0x2f740c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7410u;
        goto label_2f7410;
    }
    ctx->pc = 0x2F7408u;
    {
        const bool branch_taken_0x2f7408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7408u;
        // 0x2f740c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7408) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7410u;
label_2f7410:
    // 0x2f7410: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f7410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7414:
    // 0x2f7414: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2f7414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2f7418:
    // 0x2f7418: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f741c:
    if (ctx->pc == 0x2F741Cu) {
        ctx->pc = 0x2F741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7418u;
        // 0x2f741c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7420u;
        goto label_2f7420;
    }
    ctx->pc = 0x2F7418u;
    {
        const bool branch_taken_0x2f7418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7418) {
            ctx->pc = 0x2F741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7418u;
            // 0x2f741c: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7420u;
            goto label_2f7420;
        }
    }
    ctx->pc = 0x2F7420u;
label_2f7420:
    // 0x2f7420: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x2f7420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2f7424:
    // 0x2f7424: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
label_2f7428:
    if (ctx->pc == 0x2F7428u) {
        ctx->pc = 0x2F7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7424u;
        // 0x2f7428: 0x9230001c  lbu         $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F742Cu;
        goto label_2f742c;
    }
    ctx->pc = 0x2F7424u;
    {
        const bool branch_taken_0x2f7424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f7424) {
            ctx->pc = 0x2F7428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7424u;
            // 0x2f7428: 0x9230001c  lbu         $s0, 0x1C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7444u;
            goto label_2f7444;
        }
    }
    ctx->pc = 0x2F742Cu;
label_2f742c:
    // 0x2f742c: 0xa220001e  sb          $zero, 0x1E($s1)
    ctx->pc = 0x2f742cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 0));
label_2f7430:
    // 0x2f7430: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2f7430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2f7434:
    // 0x2f7434: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f7434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f7438:
    // 0x2f7438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f7438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f743c:
    // 0x2f743c: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2f743cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2f7440:
    // 0x2f7440: 0x9230001c  lbu         $s0, 0x1C($s1)
    ctx->pc = 0x2f7440u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_2f7444:
    // 0x2f7444: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f7448:
    // 0x2f7448: 0x1602003e  bne         $s0, $v0, . + 4 + (0x3E << 2)
label_2f744c:
    if (ctx->pc == 0x2F744Cu) {
        ctx->pc = 0x2F7450u;
        goto label_2f7450;
    }
    ctx->pc = 0x2F7448u;
    {
        const bool branch_taken_0x2f7448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7448) {
            ctx->pc = 0x2F7544u;
            goto label_2f7544;
        }
    }
    ctx->pc = 0x2F7450u;
label_2f7450:
    // 0x2f7450: 0xc047e6c  jal         func_11F9B0
label_2f7454:
    if (ctx->pc == 0x2F7454u) {
        ctx->pc = 0x2F7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7450u;
        // 0x2f7454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7458u;
        goto label_2f7458;
    }
    ctx->pc = 0x2F7450u;
    SET_GPR_U32(ctx, 31, 0x2F7458u);
    ctx->pc = 0x2F7454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7450u;
    // 0x2f7454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2F7450u, 0x2F7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7458u;
label_2f7458:
    // 0x2f7458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f745c:
    // 0x2f745c: 0x50a001cc  beql        $a1, $zero, . + 4 + (0x1CC << 2)
label_2f7460:
    if (ctx->pc == 0x2F7460u) {
        ctx->pc = 0x2F7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F745Cu;
        // 0x2f7460: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7464u;
        goto label_2f7464;
    }
    ctx->pc = 0x2F745Cu;
    {
        const bool branch_taken_0x2f745c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f745c) {
            ctx->pc = 0x2F7460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F745Cu;
            // 0x2f7460: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B90u;
            goto label_2f7b90;
        }
    }
    ctx->pc = 0x2F7464u;
label_2f7464:
    // 0x2f7464: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f7464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f7468:
    // 0x2f7468: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x2f7468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_2f746c:
    // 0x2f746c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2f746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_2f7470:
    // 0x2f7470: 0x40f809  jalr        $v0
label_2f7474:
    if (ctx->pc == 0x2F7474u) {
        ctx->pc = 0x2F7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7470u;
        // 0x2f7474: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7478u;
        goto label_2f7478;
    }
    ctx->pc = 0x2F7470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F7478u);
        ctx->pc = 0x2F7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7470u;
        // 0x2f7474: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7470u, 0x2F7478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F7478u;
label_2f7478:
    // 0x2f7478: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f7478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f747c:
    // 0x2f747c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7480:
    // 0x2f7480: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f7480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2f7484:
    // 0x2f7484: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f7484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7488:
    // 0x2f7488: 0xc0a367c  jal         func_28D9F0
label_2f748c:
    if (ctx->pc == 0x2F748Cu) {
        ctx->pc = 0x2F748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7488u;
        // 0x2f748c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7490u;
        goto label_2f7490;
    }
    ctx->pc = 0x2F7488u;
    SET_GPR_U32(ctx, 31, 0x2F7490u);
    ctx->pc = 0x2F748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7488u;
    // 0x2f748c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F7488u, 0x2F7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7490u;
label_2f7490:
    // 0x2f7490: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f7490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7494:
    // 0x2f7494: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_2f7498:
    if (ctx->pc == 0x2F7498u) {
        ctx->pc = 0x2F7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7494u;
        // 0x2f7498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F749Cu;
        goto label_2f749c;
    }
    ctx->pc = 0x2F7494u;
    {
        const bool branch_taken_0x2f7494 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7494u;
        // 0x2f7498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7494) {
            ctx->pc = 0x2F74BCu;
            goto label_2f74bc;
        }
    }
    ctx->pc = 0x2F749Cu;
label_2f749c:
    // 0x2f749c: 0xc0884f6  jal         func_2213D8
label_2f74a0:
    if (ctx->pc == 0x2F74A0u) {
        ctx->pc = 0x2F74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F749Cu;
        // 0x2f74a0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F74A4u;
        goto label_2f74a4;
    }
    ctx->pc = 0x2F749Cu;
    SET_GPR_U32(ctx, 31, 0x2F74A4u);
    ctx->pc = 0x2F74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F749Cu;
    // 0x2f74a0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F749Cu, 0x2F74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74A4u;
label_2f74a4:
    // 0x2f74a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f74a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f74a8:
    // 0x2f74a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f74ac:
    // 0x2f74ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f74acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f74b0:
    // 0x2f74b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f74b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2f74b4:
    // 0x2f74b4: 0xc0bf800  jal         func_2FE000
label_2f74b8:
    if (ctx->pc == 0x2F74B8u) {
        ctx->pc = 0x2F74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74B4u;
        // 0x2f74b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F74BCu;
        goto label_2f74bc;
    }
    ctx->pc = 0x2F74B4u;
    SET_GPR_U32(ctx, 31, 0x2F74BCu);
    ctx->pc = 0x2F74B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74B4u;
    // 0x2f74b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2F74B4u, 0x2F74BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74BCu;
label_2f74bc:
    // 0x2f74bc: 0xc0a367c  jal         func_28D9F0
label_2f74c0:
    if (ctx->pc == 0x2F74C0u) {
        ctx->pc = 0x2F74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74BCu;
        // 0x2f74c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F74C4u;
        goto label_2f74c4;
    }
    ctx->pc = 0x2F74BCu;
    SET_GPR_U32(ctx, 31, 0x2F74C4u);
    ctx->pc = 0x2F74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74BCu;
    // 0x2f74c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F74BCu, 0x2F74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74C4u;
label_2f74c4:
    // 0x2f74c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f74c8:
    if (ctx->pc == 0x2F74C8u) {
        ctx->pc = 0x2F74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74C4u;
        // 0x2f74c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F74CCu;
        goto label_2f74cc;
    }
    ctx->pc = 0x2F74C4u;
    {
        const bool branch_taken_0x2f74c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74C4u;
        // 0x2f74c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74c4) {
            ctx->pc = 0x2F74E8u;
            goto label_2f74e8;
        }
    }
    ctx->pc = 0x2F74CCu;
label_2f74cc:
    // 0x2f74cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f74ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f74d0:
    // 0x2f74d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f74d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f74d4:
    // 0x2f74d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f74d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f74d8:
    // 0x2f74d8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x2f74d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2f74dc:
    // 0x2f74dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f74dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f74e0:
    // 0x2f74e0: 0xc0bee1a  jal         func_2FB868
label_2f74e4:
    if (ctx->pc == 0x2F74E4u) {
        ctx->pc = 0x2F74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74E0u;
        // 0x2f74e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F74E8u;
        goto label_2f74e8;
    }
    ctx->pc = 0x2F74E0u;
    SET_GPR_U32(ctx, 31, 0x2F74E8u);
    ctx->pc = 0x2F74E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74E0u;
    // 0x2f74e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB868u, 0x2F74E0u, 0x2F74E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74E8u;
label_2f74e8:
    // 0x2f74e8: 0xc0a367c  jal         func_28D9F0
label_2f74ec:
    if (ctx->pc == 0x2F74ECu) {
        ctx->pc = 0x2F74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74E8u;
        // 0x2f74ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F74F0u;
        goto label_2f74f0;
    }
    ctx->pc = 0x2F74E8u;
    SET_GPR_U32(ctx, 31, 0x2F74F0u);
    ctx->pc = 0x2F74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F74E8u;
    // 0x2f74ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F74E8u, 0x2F74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74F0u;
label_2f74f0:
    // 0x2f74f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f74f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f74f4:
    // 0x2f74f4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2f74f8:
    if (ctx->pc == 0x2F74F8u) {
        ctx->pc = 0x2F74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74F4u;
        // 0x2f74f8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F74FCu;
        goto label_2f74fc;
    }
    ctx->pc = 0x2F74F4u;
    {
        const bool branch_taken_0x2f74f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74F4u;
        // 0x2f74f8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74f4) {
            ctx->pc = 0x2F753Cu;
            goto label_2f753c;
        }
    }
    ctx->pc = 0x2F74FCu;
label_2f74fc:
    // 0x2f74fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f74fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7500:
    // 0x2f7500: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f7500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2f7504:
    // 0x2f7504: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f7504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f7508:
    // 0x2f7508: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f7508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f750c:
    // 0x2f750c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f750cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f7510:
    // 0x2f7510: 0xc0cd4fc  jal         func_3353F0
label_2f7514:
    if (ctx->pc == 0x2F7514u) {
        ctx->pc = 0x2F7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7510u;
        // 0x2f7514: 0x240600fa  addiu       $a2, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7518u;
        goto label_2f7518;
    }
    ctx->pc = 0x2F7510u;
    SET_GPR_U32(ctx, 31, 0x2F7518u);
    ctx->pc = 0x2F7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7510u;
    // 0x2f7514: 0x240600fa  addiu       $a2, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2F7510u, 0x2F7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7518u;
label_2f7518:
    // 0x2f7518: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f7518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f751c:
    // 0x2f751c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7520:
    // 0x2f7520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f7524:
    // 0x2f7524: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f7524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7528:
    // 0x2f7528: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2f7528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2f752c:
    // 0x2f752c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f752cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f7530:
    // 0x2f7530: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f7530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7534:
    // 0x2f7534: 0xc0be968  jal         func_2FA5A0
label_2f7538:
    if (ctx->pc == 0x2F7538u) {
        ctx->pc = 0x2F7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7534u;
        // 0x2f7538: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F753Cu;
        goto label_2f753c;
    }
    ctx->pc = 0x2F7534u;
    SET_GPR_U32(ctx, 31, 0x2F753Cu);
    ctx->pc = 0x2F7538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7534u;
    // 0x2f7538: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F7534u, 0x2F753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F753Cu;
label_2f753c:
    // 0x2f753c: 0x10000194  b           . + 4 + (0x194 << 2)
label_2f7540:
    if (ctx->pc == 0x2F7540u) {
        ctx->pc = 0x2F7540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F753Cu;
        // 0x2f7540: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7544u;
        goto label_2f7544;
    }
    ctx->pc = 0x2F753Cu;
    {
        const bool branch_taken_0x2f753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F753Cu;
        // 0x2f7540: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f753c) {
            ctx->pc = 0x2F7B90u;
            goto label_2f7b90;
        }
    }
    ctx->pc = 0x2F7544u;
label_2f7544:
    // 0x2f7544: 0x16000114  bnez        $s0, . + 4 + (0x114 << 2)
label_2f7548:
    if (ctx->pc == 0x2F7548u) {
        ctx->pc = 0x2F754Cu;
        goto label_2f754c;
    }
    ctx->pc = 0x2F7544u;
    {
        const bool branch_taken_0x2f7544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7544) {
            ctx->pc = 0x2F7998u;
            goto label_2f7998;
        }
    }
    ctx->pc = 0x2F754Cu;
label_2f754c:
    // 0x2f754c: 0xc08bfa0  jal         func_22FE80
label_2f7550:
    if (ctx->pc == 0x2F7550u) {
        ctx->pc = 0x2F7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F754Cu;
        // 0x2f7550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7554u;
        goto label_2f7554;
    }
    ctx->pc = 0x2F754Cu;
    SET_GPR_U32(ctx, 31, 0x2F7554u);
    ctx->pc = 0x2F7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F754Cu;
    // 0x2f7550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F754Cu, 0x2F7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7554u;
label_2f7554:
    // 0x2f7554: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f7554u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f7558:
    // 0x2f7558: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f7558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f755c:
    // 0x2f755c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f755cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f7560:
    // 0x2f7560: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2f7560u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2f7564:
    // 0x2f7564: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2f7564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2f7568:
    // 0x2f7568: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2f756c:
    if (ctx->pc == 0x2F756Cu) {
        ctx->pc = 0x2F756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7568u;
        // 0x2f756c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7570u;
        goto label_2f7570;
    }
    ctx->pc = 0x2F7568u;
    {
        const bool branch_taken_0x2f7568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7568u;
        // 0x2f756c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7568) {
            ctx->pc = 0x2F7594u;
            goto label_2f7594;
        }
    }
    ctx->pc = 0x2F7570u;
label_2f7570:
    // 0x2f7570: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f7570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f7574:
    // 0x2f7574: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f7574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f7578:
    // 0x2f7578: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2f7578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f757c:
    // 0x2f757c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2f7580:
    if (ctx->pc == 0x2F7580u) {
        ctx->pc = 0x2F7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F757Cu;
        // 0x2f7580: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7584u;
        goto label_2f7584;
    }
    ctx->pc = 0x2F757Cu;
    {
        const bool branch_taken_0x2f757c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F757Cu;
        // 0x2f7580: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f757c) {
            ctx->pc = 0x2F75A8u;
            goto label_2f75a8;
        }
    }
    ctx->pc = 0x2F7584u;
label_2f7584:
    // 0x2f7584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f7588:
    // 0x2f7588: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2f7588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2f758c:
    // 0x2f758c: 0x10000180  b           . + 4 + (0x180 << 2)
label_2f7590:
    if (ctx->pc == 0x2F7590u) {
        ctx->pc = 0x2F7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F758Cu;
        // 0x2f7590: 0xa222001c  sb          $v0, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7594u;
        goto label_2f7594;
    }
    ctx->pc = 0x2F758Cu;
    {
        const bool branch_taken_0x2f758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F758Cu;
        // 0x2f7590: 0xa222001c  sb          $v0, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f758c) {
            ctx->pc = 0x2F7B90u;
            goto label_2f7b90;
        }
    }
    ctx->pc = 0x2F7594u;
label_2f7594:
    // 0x2f7594: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f7594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f7598:
    // 0x2f7598: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f7598u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f759c:
    // 0x2f759c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f75a0:
    // 0x2f75a0: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x2f75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
label_2f75a4:
    // 0x2f75a4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2f75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2f75a8:
    // 0x2f75a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f75a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f75ac:
    // 0x2f75ac: 0xc0a7c8c  jal         func_29F230
label_2f75b0:
    if (ctx->pc == 0x2F75B0u) {
        ctx->pc = 0x2F75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75ACu;
        // 0x2f75b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F75B4u;
        goto label_2f75b4;
    }
    ctx->pc = 0x2F75ACu;
    SET_GPR_U32(ctx, 31, 0x2F75B4u);
    ctx->pc = 0x2F75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75ACu;
    // 0x2f75b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F75ACu, 0x2F75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75B4u;
label_2f75b4:
    // 0x2f75b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f75b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f75b8:
    // 0x2f75b8: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_2f75bc:
    if (ctx->pc == 0x2F75BCu) {
        ctx->pc = 0x2F75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75B8u;
        // 0x2f75bc: 0x26960090  addiu       $s6, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F75C0u;
        goto label_2f75c0;
    }
    ctx->pc = 0x2F75B8u;
    {
        const bool branch_taken_0x2f75b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75B8u;
        // 0x2f75bc: 0x26960090  addiu       $s6, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75b8) {
            ctx->pc = 0x2F75D0u;
            goto label_2f75d0;
        }
    }
    ctx->pc = 0x2F75C0u;
label_2f75c0:
    // 0x2f75c0: 0xc0bdc48  jal         func_2F7120
label_2f75c4:
    if (ctx->pc == 0x2F75C4u) {
        ctx->pc = 0x2F75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75C0u;
        // 0x2f75c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F75C8u;
        goto label_2f75c8;
    }
    ctx->pc = 0x2F75C0u;
    SET_GPR_U32(ctx, 31, 0x2F75C8u);
    ctx->pc = 0x2F75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75C0u;
    // 0x2f75c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7120u, 0x2F75C0u, 0x2F75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75C8u;
label_2f75c8:
    // 0x2f75c8: 0x10000172  b           . + 4 + (0x172 << 2)
label_2f75cc:
    if (ctx->pc == 0x2F75CCu) {
        ctx->pc = 0x2F75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75C8u;
        // 0x2f75cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F75D0u;
        goto label_2f75d0;
    }
    ctx->pc = 0x2F75C8u;
    {
        const bool branch_taken_0x2f75c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75C8u;
        // 0x2f75cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75c8) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F75D0u;
label_2f75d0:
    // 0x2f75d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f75d4:
    // 0x2f75d4: 0x86c20002  lh          $v0, 0x2($s6)
    ctx->pc = 0x2f75d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2f75d8:
    // 0x2f75d8: 0x26b34b00  addiu       $s3, $s5, 0x4B00
    ctx->pc = 0x2f75d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_2f75dc:
    // 0x2f75dc: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2f75dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_2f75e0:
    // 0x2f75e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f75e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f75e4:
    // 0x2f75e4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f75e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f75e8:
    // 0x2f75e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f75ec:
    // 0x2f75ec: 0xc4a00140  lwc1        $f0, 0x140($a1)
    ctx->pc = 0x2f75ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f75f0:
    // 0x2f75f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2f75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2f75f4:
    // 0x2f75f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f75f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f75f8:
    // 0x2f75f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f75f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f75fc:
    // 0x2f75fc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x2f75fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f7600:
    // 0x2f7600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f7600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7604:
    // 0x2f7604: 0x26550090  addiu       $s5, $s2, 0x90
    ctx->pc = 0x2f7604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2f7608:
    // 0x2f7608: 0xc0cdb38  jal         func_336CE0
label_2f760c:
    if (ctx->pc == 0x2F760Cu) {
        ctx->pc = 0x2F760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7608u;
        // 0x2f760c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7610u;
        goto label_2f7610;
    }
    ctx->pc = 0x2F7608u;
    SET_GPR_U32(ctx, 31, 0x2F7610u);
    ctx->pc = 0x2F760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7608u;
    // 0x2f760c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F7608u, 0x2F7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7610u;
label_2f7610:
    // 0x2f7610: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x2f7610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2f7614:
    // 0x2f7614: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2f7614u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2f7618:
    // 0x2f7618: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f7618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f761c:
    // 0x2f761c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2f761cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2f7620:
    // 0x2f7620: 0xc0cd7d2  jal         func_335F48
label_2f7624:
    if (ctx->pc == 0x2F7624u) {
        ctx->pc = 0x2F7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7620u;
        // 0x2f7624: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7628u;
        goto label_2f7628;
    }
    ctx->pc = 0x2F7620u;
    SET_GPR_U32(ctx, 31, 0x2F7628u);
    ctx->pc = 0x2F7624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7620u;
    // 0x2f7624: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2F7620u, 0x2F7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7628u;
label_2f7628:
    // 0x2f7628: 0xc0cd742  jal         func_335D08
label_2f762c:
    if (ctx->pc == 0x2F762Cu) {
        ctx->pc = 0x2F762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7628u;
        // 0x2f762c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7630u;
        goto label_2f7630;
    }
    ctx->pc = 0x2F7628u;
    SET_GPR_U32(ctx, 31, 0x2F7630u);
    ctx->pc = 0x2F762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7628u;
    // 0x2f762c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2F7628u, 0x2F7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7630u;
label_2f7630:
    // 0x2f7630: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f7630u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2f7634:
    // 0x2f7634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f7634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7638:
    // 0x2f7638: 0xc0cd780  jal         func_335E00
label_2f763c:
    if (ctx->pc == 0x2F763Cu) {
        ctx->pc = 0x2F763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7638u;
        // 0x2f763c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7640u;
        goto label_2f7640;
    }
    ctx->pc = 0x2F7638u;
    SET_GPR_U32(ctx, 31, 0x2F7640u);
    ctx->pc = 0x2F763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7638u;
    // 0x2f763c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F7638u, 0x2F7640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7640u;
label_2f7640:
    // 0x2f7640: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f7644:
    // 0x2f7644: 0xc0cdd2e  jal         func_3374B8
label_2f7648:
    if (ctx->pc == 0x2F7648u) {
        ctx->pc = 0x2F7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7644u;
        // 0x2f7648: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F764Cu;
        goto label_2f764c;
    }
    ctx->pc = 0x2F7644u;
    SET_GPR_U32(ctx, 31, 0x2F764Cu);
    ctx->pc = 0x2F7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7644u;
    // 0x2f7648: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2F7644u, 0x2F764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F764Cu;
label_2f764c:
    // 0x2f764c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f764cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7650:
    // 0x2f7650: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f7650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2f7654:
    // 0x2f7654: 0x8e8301a8  lw          $v1, 0x1A8($s4)
    ctx->pc = 0x2f7654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_2f7658:
    // 0x2f7658: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_2f765c:
    if (ctx->pc == 0x2F765Cu) {
        ctx->pc = 0x2F765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7658u;
        // 0x2f765c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7660u;
        goto label_2f7660;
    }
    ctx->pc = 0x2F7658u;
    {
        const bool branch_taken_0x2f7658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7658u;
        // 0x2f765c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7658) {
            ctx->pc = 0x2F771Cu;
            goto label_2f771c;
        }
    }
    ctx->pc = 0x2F7660u;
label_2f7660:
    // 0x2f7660: 0x86c50002  lh          $a1, 0x2($s6)
    ctx->pc = 0x2f7660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2f7664:
    // 0x2f7664: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f7664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f7668:
    // 0x2f7668: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f7668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f766c:
    // 0x2f766c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2f766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2f7670:
    // 0x2f7670: 0xc0cd8ec  jal         func_3363B0
label_2f7674:
    if (ctx->pc == 0x2F7674u) {
        ctx->pc = 0x2F7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7670u;
        // 0x2f7674: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7678u;
        goto label_2f7678;
    }
    ctx->pc = 0x2F7670u;
    SET_GPR_U32(ctx, 31, 0x2F7678u);
    ctx->pc = 0x2F7674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7670u;
    // 0x2f7674: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2F7670u, 0x2F7678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7678u;
label_2f7678:
    // 0x2f7678: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2f7678u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2f767c:
    // 0x2f767c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f767cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f7680:
    // 0x2f7680: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f7680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f7684:
    // 0x2f7684: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2f7684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2f7688:
    // 0x2f7688: 0xc0cd8ec  jal         func_3363B0
label_2f768c:
    if (ctx->pc == 0x2F768Cu) {
        ctx->pc = 0x2F768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7688u;
        // 0x2f768c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7690u;
        goto label_2f7690;
    }
    ctx->pc = 0x2F7688u;
    SET_GPR_U32(ctx, 31, 0x2F7690u);
    ctx->pc = 0x2F768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7688u;
    // 0x2f768c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2F7688u, 0x2F7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7690u;
label_2f7690:
    // 0x2f7690: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2f7690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f7694:
    // 0x2f7694: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2f7694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7698:
    // 0x2f7698: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f7698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f769c:
    // 0x2f769c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f769cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f76a0:
    // 0x2f76a0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2f76a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2f76a4:
    // 0x2f76a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f76a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2f76a8:
    // 0x2f76a8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2f76a8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2f76ac:
    // 0x2f76ac: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x2f76acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
label_2f76b0:
    // 0x2f76b0: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2f76b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_2f76b4:
    // 0x2f76b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f76b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f76b8:
    // 0x2f76b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f76b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f76bc:
    // 0x2f76bc: 0x0  nop
    ctx->pc = 0x2f76bcu;
    // NOP
label_2f76c0:
    // 0x2f76c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f76c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f76c4:
    // 0x2f76c4: 0x0  nop
    ctx->pc = 0x2f76c4u;
    // NOP
label_2f76c8:
    // 0x2f76c8: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_2f76cc:
    if (ctx->pc == 0x2F76CCu) {
        ctx->pc = 0x2F76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76C8u;
        // 0x2f76cc: 0x9222001f  lbu         $v0, 0x1F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F76D0u;
        goto label_2f76d0;
    }
    ctx->pc = 0x2F76C8u;
    {
        const bool branch_taken_0x2f76c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f76c8) {
            ctx->pc = 0x2F76CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F76C8u;
            // 0x2f76cc: 0x9222001f  lbu         $v0, 0x1F($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7720u;
            goto label_2f7720;
        }
    }
    ctx->pc = 0x2F76D0u;
label_2f76d0:
    // 0x2f76d0: 0xc68001ac  lwc1        $f0, 0x1AC($s4)
    ctx->pc = 0x2f76d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f76d4:
    // 0x2f76d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f76d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f76d8:
    // 0x2f76d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f76d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f76dc:
    // 0x2f76dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f76dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f76e0:
    // 0x2f76e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f76e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f76e4:
    // 0x2f76e4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f76e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f76e8:
    // 0x2f76e8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f76e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f76ec:
    // 0x2f76ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f76ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f76f0:
    // 0x2f76f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f76f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f76f4:
    // 0x2f76f4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f76f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f76f8:
    // 0x2f76f8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f76f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f76fc:
    // 0x2f76fc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f76fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f7700:
    // 0x2f7700: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2f7700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2f7704:
    // 0x2f7704: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f7704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2f7708:
    // 0x2f7708: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2f770c:
    // 0x2f770c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2f770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2f7710:
    // 0x2f7710: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f7710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2f7714:
    // 0x2f7714: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2f7714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2f7718:
    // 0x2f7718: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2f7718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2f771c:
    // 0x2f771c: 0x9222001f  lbu         $v0, 0x1F($s1)
    ctx->pc = 0x2f771cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_2f7720:
    // 0x2f7720: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
label_2f7724:
    if (ctx->pc == 0x2F7724u) {
        ctx->pc = 0x2F7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7720u;
        // 0x2f7724: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7728u;
        goto label_2f7728;
    }
    ctx->pc = 0x2F7720u;
    {
        const bool branch_taken_0x2f7720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7720) {
            ctx->pc = 0x2F7724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7720u;
            // 0x2f7724: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F786Cu;
            goto label_2f786c;
        }
    }
    ctx->pc = 0x2F7728u;
label_2f7728:
    // 0x2f7728: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2f7728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_2f772c:
    // 0x2f772c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2f772cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7730:
    // 0x2f7730: 0x0  nop
    ctx->pc = 0x2f7730u;
    // NOP
label_2f7734:
    // 0x2f7734: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2f7738:
    if (ctx->pc == 0x2F7738u) {
        ctx->pc = 0x2F773Cu;
        goto label_2f773c;
    }
    ctx->pc = 0x2F7734u;
    {
        const bool branch_taken_0x2f7734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7734) {
            ctx->pc = 0x2F7750u;
            goto label_2f7750;
        }
    }
    ctx->pc = 0x2F773Cu;
label_2f773c:
    // 0x2f773c: 0xc088ed2  jal         func_223B48
label_2f7740:
    if (ctx->pc == 0x2F7740u) {
        ctx->pc = 0x2F7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F773Cu;
        // 0x2f7740: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7744u;
        goto label_2f7744;
    }
    ctx->pc = 0x2F773Cu;
    SET_GPR_U32(ctx, 31, 0x2F7744u);
    ctx->pc = 0x2F7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F773Cu;
    // 0x2f7740: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F773Cu, 0x2F7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7744u;
label_2f7744:
    // 0x2f7744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7748:
    // 0x2f7748: 0x54430048  bnel        $v0, $v1, . + 4 + (0x48 << 2)
label_2f774c:
    if (ctx->pc == 0x2F774Cu) {
        ctx->pc = 0x2F774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7748u;
        // 0x2f774c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7750u;
        goto label_2f7750;
    }
    ctx->pc = 0x2F7748u;
    {
        const bool branch_taken_0x2f7748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7748) {
            ctx->pc = 0x2F774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7748u;
            // 0x2f774c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F786Cu;
            goto label_2f786c;
        }
    }
    ctx->pc = 0x2F7750u;
label_2f7750:
    // 0x2f7750: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2f7750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2f7754:
    // 0x2f7754: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2f7754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2f7758:
    // 0x2f7758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f775c:
    // 0x2f775c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2f775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f7760:
    // 0x2f7760: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f7760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f7764:
    // 0x2f7764: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f7764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7768:
    // 0x2f7768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f7768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f776c:
    // 0x2f776c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2f7770:
    if (ctx->pc == 0x2F7770u) {
        ctx->pc = 0x2F7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F776Cu;
        // 0x2f7770: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7774u;
        goto label_2f7774;
    }
    ctx->pc = 0x2F776Cu;
    {
        const bool branch_taken_0x2f776c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F776Cu;
        // 0x2f7770: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f776c) {
            ctx->pc = 0x2F77A8u;
            goto label_2f77a8;
        }
    }
    ctx->pc = 0x2F7774u;
label_2f7774:
    // 0x2f7774: 0xc0a367c  jal         func_28D9F0
label_2f7778:
    if (ctx->pc == 0x2F7778u) {
        ctx->pc = 0x2F7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7774u;
        // 0x2f7778: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F777Cu;
        goto label_2f777c;
    }
    ctx->pc = 0x2F7774u;
    SET_GPR_U32(ctx, 31, 0x2F777Cu);
    ctx->pc = 0x2F7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7774u;
    // 0x2f7778: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F7774u, 0x2F777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F777Cu;
label_2f777c:
    // 0x2f777c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f777cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7780:
    // 0x2f7780: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_2f7784:
    if (ctx->pc == 0x2F7784u) {
        ctx->pc = 0x2F7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7780u;
        // 0x2f7784: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7788u;
        goto label_2f7788;
    }
    ctx->pc = 0x2F7780u;
    {
        const bool branch_taken_0x2f7780 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7780u;
        // 0x2f7784: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7780) {
            ctx->pc = 0x2F77A8u;
            goto label_2f77a8;
        }
    }
    ctx->pc = 0x2F7788u;
label_2f7788:
    // 0x2f7788: 0xc0884f6  jal         func_2213D8
label_2f778c:
    if (ctx->pc == 0x2F778Cu) {
        ctx->pc = 0x2F778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7788u;
        // 0x2f778c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7790u;
        goto label_2f7790;
    }
    ctx->pc = 0x2F7788u;
    SET_GPR_U32(ctx, 31, 0x2F7790u);
    ctx->pc = 0x2F778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7788u;
    // 0x2f778c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2F7788u, 0x2F7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7790u;
label_2f7790:
    // 0x2f7790: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f7790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7794:
    // 0x2f7794: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f7798:
    // 0x2f7798: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f7798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f779c:
    // 0x2f779c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f779cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2f77a0:
    // 0x2f77a0: 0xc0bf800  jal         func_2FE000
label_2f77a4:
    if (ctx->pc == 0x2F77A4u) {
        ctx->pc = 0x2F77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77A0u;
        // 0x2f77a4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77A8u;
        goto label_2f77a8;
    }
    ctx->pc = 0x2F77A0u;
    SET_GPR_U32(ctx, 31, 0x2F77A8u);
    ctx->pc = 0x2F77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77A0u;
    // 0x2f77a4: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2F77A0u, 0x2F77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77A8u;
label_2f77a8:
    // 0x2f77a8: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2f77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_2f77ac:
    // 0x2f77ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2f77acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f77b0:
    // 0x2f77b0: 0xc043d5e  jal         func_10F578
label_2f77b4:
    if (ctx->pc == 0x2F77B4u) {
        ctx->pc = 0x2F77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77B0u;
        // 0x2f77b4: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77B8u;
        goto label_2f77b8;
    }
    ctx->pc = 0x2F77B0u;
    SET_GPR_U32(ctx, 31, 0x2F77B8u);
    ctx->pc = 0x2F77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77B0u;
    // 0x2f77b4: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2F77B0u, 0x2F77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77B8u;
label_2f77b8:
    // 0x2f77b8: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
label_2f77bc:
    if (ctx->pc == 0x2F77BCu) {
        ctx->pc = 0x2F77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77B8u;
        // 0x2f77bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77C0u;
        goto label_2f77c0;
    }
    ctx->pc = 0x2F77B8u;
    {
        const bool branch_taken_0x2f77b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77B8u;
        // 0x2f77bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77b8) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F77C0u;
label_2f77c0:
    // 0x2f77c0: 0x8ee2b734  lw          $v0, -0x48CC($s7)
    ctx->pc = 0x2f77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
label_2f77c4:
    // 0x2f77c4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2f77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2f77c8:
    // 0x2f77c8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2f77cc:
    if (ctx->pc == 0x2F77CCu) {
        ctx->pc = 0x2F77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C8u;
        // 0x2f77cc: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77D0u;
        goto label_2f77d0;
    }
    ctx->pc = 0x2F77C8u;
    {
        const bool branch_taken_0x2f77c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C8u;
        // 0x2f77cc: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77c8) {
            ctx->pc = 0x2F77ECu;
            goto label_2f77ec;
        }
    }
    ctx->pc = 0x2F77D0u;
label_2f77d0:
    // 0x2f77d0: 0xc088ed2  jal         func_223B48
label_2f77d4:
    if (ctx->pc == 0x2F77D4u) {
        ctx->pc = 0x2F77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77D0u;
        // 0x2f77d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77D8u;
        goto label_2f77d8;
    }
    ctx->pc = 0x2F77D0u;
    SET_GPR_U32(ctx, 31, 0x2F77D8u);
    ctx->pc = 0x2F77D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77D0u;
    // 0x2f77d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F77D0u, 0x2F77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77D8u;
label_2f77d8:
    // 0x2f77d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2f77dc:
    if (ctx->pc == 0x2F77DCu) {
        ctx->pc = 0x2F77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77D8u;
        // 0x2f77dc: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77E0u;
        goto label_2f77e0;
    }
    ctx->pc = 0x2F77D8u;
    {
        const bool branch_taken_0x2f77d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f77d8) {
            ctx->pc = 0x2F77DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F77D8u;
            // 0x2f77dc: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F77F0u;
            goto label_2f77f0;
        }
    }
    ctx->pc = 0x2F77E0u;
label_2f77e0:
    // 0x2f77e0: 0x26020bb8  addiu       $v0, $s0, 0xBB8
    ctx->pc = 0x2f77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3000));
label_2f77e4:
    // 0x2f77e4: 0x100000ea  b           . + 4 + (0xEA << 2)
label_2f77e8:
    if (ctx->pc == 0x2F77E8u) {
        ctx->pc = 0x2F77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77E4u;
        // 0x2f77e8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77ECu;
        goto label_2f77ec;
    }
    ctx->pc = 0x2F77E4u;
    {
        const bool branch_taken_0x2f77e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77E4u;
        // 0x2f77e8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77e4) {
            ctx->pc = 0x2F7B90u;
            goto label_2f7b90;
        }
    }
    ctx->pc = 0x2F77ECu;
label_2f77ec:
    // 0x2f77ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2f77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2f77f0:
    // 0x2f77f0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2f77f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2f77f4:
    // 0x2f77f4: 0x104000e7  beqz        $v0, . + 4 + (0xE7 << 2)
label_2f77f8:
    if (ctx->pc == 0x2F77F8u) {
        ctx->pc = 0x2F77F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77F4u;
        // 0x2f77f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F77FCu;
        goto label_2f77fc;
    }
    ctx->pc = 0x2F77F4u;
    {
        const bool branch_taken_0x2f77f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77F4u;
        // 0x2f77f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77f4) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F77FCu;
label_2f77fc:
    // 0x2f77fc: 0xc0a367c  jal         func_28D9F0
label_2f7800:
    if (ctx->pc == 0x2F7800u) {
        ctx->pc = 0x2F7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77FCu;
        // 0x2f7800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7804u;
        goto label_2f7804;
    }
    ctx->pc = 0x2F77FCu;
    SET_GPR_U32(ctx, 31, 0x2F7804u);
    ctx->pc = 0x2F7800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77FCu;
    // 0x2f7800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F77FCu, 0x2F7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7804u;
label_2f7804:
    // 0x2f7804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2f7808:
    if (ctx->pc == 0x2F7808u) {
        ctx->pc = 0x2F7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7804u;
        // 0x2f7808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F780Cu;
        goto label_2f780c;
    }
    ctx->pc = 0x2F7804u;
    {
        const bool branch_taken_0x2f7804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7804u;
        // 0x2f7808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7804) {
            ctx->pc = 0x2F7824u;
            goto label_2f7824;
        }
    }
    ctx->pc = 0x2F780Cu;
label_2f780c:
    // 0x2f780c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f780cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7810:
    // 0x2f7810: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2f7810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f7814:
    // 0x2f7814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f7814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7818:
    // 0x2f7818: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x2f7818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f781c:
    // 0x2f781c: 0xc0bec3c  jal         func_2FB0F0
label_2f7820:
    if (ctx->pc == 0x2F7820u) {
        ctx->pc = 0x2F7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F781Cu;
        // 0x2f7820: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7824u;
        goto label_2f7824;
    }
    ctx->pc = 0x2F781Cu;
    SET_GPR_U32(ctx, 31, 0x2F7824u);
    ctx->pc = 0x2F7820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F781Cu;
    // 0x2f7820: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2F781Cu, 0x2F7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7824u;
label_2f7824:
    // 0x2f7824: 0xc0a367c  jal         func_28D9F0
label_2f7828:
    if (ctx->pc == 0x2F7828u) {
        ctx->pc = 0x2F7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7824u;
        // 0x2f7828: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F782Cu;
        goto label_2f782c;
    }
    ctx->pc = 0x2F7824u;
    SET_GPR_U32(ctx, 31, 0x2F782Cu);
    ctx->pc = 0x2F7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7824u;
    // 0x2f7828: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F7824u, 0x2F782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F782Cu;
label_2f782c:
    // 0x2f782c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2f7830:
    if (ctx->pc == 0x2F7830u) {
        ctx->pc = 0x2F7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F782Cu;
        // 0x2f7830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7834u;
        goto label_2f7834;
    }
    ctx->pc = 0x2F782Cu;
    {
        const bool branch_taken_0x2f782c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F782Cu;
        // 0x2f7830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f782c) {
            ctx->pc = 0x2F7864u;
            goto label_2f7864;
        }
    }
    ctx->pc = 0x2F7834u;
label_2f7834:
    // 0x2f7834: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f7834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f7838:
    // 0x2f7838: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f7838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f783c:
    // 0x2f783c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2f783cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_2f7840:
    // 0x2f7840: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f7840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2f7844:
    // 0x2f7844: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f7844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f7848:
    // 0x2f7848: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f7848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f784c:
    // 0x2f784c: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x2f784cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_2f7850:
    // 0x2f7850: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f7850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7854:
    // 0x2f7854: 0x460dab42  mul.s       $f13, $f21, $f13
    ctx->pc = 0x2f7854u;
    ctx->f[13] = FPU_MUL_S(ctx->f[21], ctx->f[13]);
label_2f7858:
    // 0x2f7858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f7858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f785c:
    // 0x2f785c: 0xc0bf3d4  jal         func_2FCF50
label_2f7860:
    if (ctx->pc == 0x2F7860u) {
        ctx->pc = 0x2F7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F785Cu;
        // 0x2f7860: 0x24081770  addiu       $t0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7864u;
        goto label_2f7864;
    }
    ctx->pc = 0x2F785Cu;
    SET_GPR_U32(ctx, 31, 0x2F7864u);
    ctx->pc = 0x2F7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F785Cu;
    // 0x2f7860: 0x24081770  addiu       $t0, $zero, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2F785Cu, 0x2F7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7864u;
label_2f7864:
    // 0x2f7864: 0x100000ca  b           . + 4 + (0xCA << 2)
label_2f7868:
    if (ctx->pc == 0x2F7868u) {
        ctx->pc = 0x2F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7864u;
        // 0x2f7868: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F786Cu;
        goto label_2f786c;
    }
    ctx->pc = 0x2F7864u;
    {
        const bool branch_taken_0x2f7864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7864u;
        // 0x2f7868: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7864) {
            ctx->pc = 0x2F7B90u;
            goto label_2f7b90;
        }
    }
    ctx->pc = 0x2F786Cu;
label_2f786c:
    // 0x2f786c: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2f786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7870:
    // 0x2f7870: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f7870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2f7874:
    // 0x2f7874: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2f7874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7878:
    // 0x2f7878: 0x0  nop
    ctx->pc = 0x2f7878u;
    // NOP
label_2f787c:
    // 0x2f787c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2f7880:
    if (ctx->pc == 0x2F7880u) {
        ctx->pc = 0x2F7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F787Cu;
        // 0x2f7880: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7884u;
        goto label_2f7884;
    }
    ctx->pc = 0x2F787Cu;
    {
        const bool branch_taken_0x2f787c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F787Cu;
        // 0x2f7880: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f787c) {
            ctx->pc = 0x2F7888u;
            goto label_2f7888;
        }
    }
    ctx->pc = 0x2F7884u;
label_2f7884:
    // 0x2f7884: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f7884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2f7888:
    // 0x2f7888: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2f7888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_2f788c:
    // 0x2f788c: 0x34216595  ori         $at, $at, 0x6595
    ctx->pc = 0x2f788cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26005);
label_2f7890:
    // 0x2f7890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f7890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f7894:
    // 0x2f7894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7898:
    // 0x2f7898: 0xc088708  jal         func_221C20
label_2f789c:
    if (ctx->pc == 0x2F789Cu) {
        ctx->pc = 0x2F789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7898u;
        // 0x2f789c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78A0u;
        goto label_2f78a0;
    }
    ctx->pc = 0x2F7898u;
    SET_GPR_U32(ctx, 31, 0x2F78A0u);
    ctx->pc = 0x2F789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7898u;
    // 0x2f789c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2F7898u, 0x2F78A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78A0u;
label_2f78a0:
    // 0x2f78a0: 0xc0a367c  jal         func_28D9F0
label_2f78a4:
    if (ctx->pc == 0x2F78A4u) {
        ctx->pc = 0x2F78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78A0u;
        // 0x2f78a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78A8u;
        goto label_2f78a8;
    }
    ctx->pc = 0x2F78A0u;
    SET_GPR_U32(ctx, 31, 0x2F78A8u);
    ctx->pc = 0x2F78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78A0u;
    // 0x2f78a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F78A0u, 0x2F78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78A8u;
label_2f78a8:
    // 0x2f78a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f78ac:
    if (ctx->pc == 0x2F78ACu) {
        ctx->pc = 0x2F78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78A8u;
        // 0x2f78ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78B0u;
        goto label_2f78b0;
    }
    ctx->pc = 0x2F78A8u;
    {
        const bool branch_taken_0x2f78a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78A8u;
        // 0x2f78ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78a8) {
            ctx->pc = 0x2F78D8u;
            goto label_2f78d8;
        }
    }
    ctx->pc = 0x2F78B0u;
label_2f78b0:
    // 0x2f78b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f78b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f78b4:
    // 0x2f78b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f78b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f78b8:
    // 0x2f78b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f78b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f78bc:
    // 0x2f78bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f78bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f78c0:
    // 0x2f78c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f78c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f78c4:
    // 0x2f78c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f78c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f78c8:
    // 0x2f78c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f78c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f78cc:
    // 0x2f78cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f78ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f78d0:
    // 0x2f78d0: 0xc0be968  jal         func_2FA5A0
label_2f78d4:
    if (ctx->pc == 0x2F78D4u) {
        ctx->pc = 0x2F78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78D0u;
        // 0x2f78d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78D8u;
        goto label_2f78d8;
    }
    ctx->pc = 0x2F78D0u;
    SET_GPR_U32(ctx, 31, 0x2F78D8u);
    ctx->pc = 0x2F78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78D0u;
    // 0x2f78d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F78D0u, 0x2F78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78D8u;
label_2f78d8:
    // 0x2f78d8: 0x9223001f  lbu         $v1, 0x1F($s1)
    ctx->pc = 0x2f78d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_2f78dc:
    // 0x2f78dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f78e0:
    // 0x2f78e0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2f78e4:
    if (ctx->pc == 0x2F78E4u) {
        ctx->pc = 0x2F78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78E0u;
        // 0x2f78e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F78E8u;
        goto label_2f78e8;
    }
    ctx->pc = 0x2F78E0u;
    {
        const bool branch_taken_0x2f78e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78E0u;
        // 0x2f78e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78e0) {
            ctx->pc = 0x2F791Cu;
            goto label_2f791c;
        }
    }
    ctx->pc = 0x2F78E8u;
label_2f78e8:
    // 0x2f78e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f78ec:
    // 0x2f78ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f78ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f78f0:
    // 0x2f78f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f78f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f78f4:
    // 0x2f78f4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f78f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f78f8:
    // 0x2f78f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f78f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f78fc:
    // 0x2f78fc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2f78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2f7900:
    // 0x2f7900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7904:
    // 0x2f7904: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f7904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7908:
    // 0x2f7908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f7908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f790c:
    // 0x2f790c: 0xc088178  jal         func_2205E0
label_2f7910:
    if (ctx->pc == 0x2F7910u) {
        ctx->pc = 0x2F7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F790Cu;
        // 0x2f7910: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7914u;
        goto label_2f7914;
    }
    ctx->pc = 0x2F790Cu;
    SET_GPR_U32(ctx, 31, 0x2F7914u);
    ctx->pc = 0x2F7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F790Cu;
    // 0x2f7910: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F790Cu, 0x2F7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7914u;
label_2f7914:
    // 0x2f7914: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2f7918:
    if (ctx->pc == 0x2F7918u) {
        ctx->pc = 0x2F7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7914u;
        // 0x2f7918: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F791Cu;
        goto label_2f791c;
    }
    ctx->pc = 0x2F7914u;
    {
        const bool branch_taken_0x2f7914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7914u;
        // 0x2f7918: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7914) {
            ctx->pc = 0x2F7980u;
            goto label_2f7980;
        }
    }
    ctx->pc = 0x2F791Cu;
label_2f791c:
    // 0x2f791c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2f791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f7920:
    // 0x2f7920: 0x2450b880  addiu       $s0, $v0, -0x4780
    ctx->pc = 0x2f7920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2f7924:
    // 0x2f7924: 0xc0cd4ee  jal         func_3353B8
label_2f7928:
    if (ctx->pc == 0x2F7928u) {
        ctx->pc = 0x2F7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7924u;
        // 0x2f7928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F792Cu;
        goto label_2f792c;
    }
    ctx->pc = 0x2F7924u;
    SET_GPR_U32(ctx, 31, 0x2F792Cu);
    ctx->pc = 0x2F7928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7924u;
    // 0x2f7928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F7924u, 0x2F792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F792Cu;
label_2f792c:
    // 0x2f792c: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2f792cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2f7930:
    // 0x2f7930: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2f7934:
    if (ctx->pc == 0x2F7934u) {
        ctx->pc = 0x2F7934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7930u;
        // 0x2f7934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7938u;
        goto label_2f7938;
    }
    ctx->pc = 0x2F7930u;
    {
        const bool branch_taken_0x2f7930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7930u;
        // 0x2f7934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7930) {
            ctx->pc = 0x2F797Cu;
            goto label_2f797c;
        }
    }
    ctx->pc = 0x2F7938u;
label_2f7938:
    // 0x2f7938: 0xc0cd4ee  jal         func_3353B8
label_2f793c:
    if (ctx->pc == 0x2F793Cu) {
        ctx->pc = 0x2F793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7938u;
        // 0x2f793c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7940u;
        goto label_2f7940;
    }
    ctx->pc = 0x2F7938u;
    SET_GPR_U32(ctx, 31, 0x2F7940u);
    ctx->pc = 0x2F793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7938u;
    // 0x2f793c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F7938u, 0x2F7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7940u;
label_2f7940:
    // 0x2f7940: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2f7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2f7944:
    // 0x2f7944: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f7944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f7948:
    // 0x2f7948: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2f7948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f794c:
    // 0x2f794c: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x2f794cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2f7950:
    // 0x2f7950: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2f7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2f7954:
    // 0x2f7954: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2f7954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f7958:
    // 0x2f7958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f795c:
    // 0x2f795c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f795cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f7960:
    // 0x2f7960: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2f7960u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2f7964:
    // 0x2f7964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7968:
    // 0x2f7968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f796c:
    // 0x2f796c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f796cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7970:
    // 0x2f7970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f7970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7974:
    // 0x2f7974: 0xc088178  jal         func_2205E0
label_2f7978:
    if (ctx->pc == 0x2F7978u) {
        ctx->pc = 0x2F7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7974u;
        // 0x2f7978: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F797Cu;
        goto label_2f797c;
    }
    ctx->pc = 0x2F7974u;
    SET_GPR_U32(ctx, 31, 0x2F797Cu);
    ctx->pc = 0x2F7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7974u;
    // 0x2f7978: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F7974u, 0x2F797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F797Cu;
label_2f797c:
    // 0x2f797c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7980:
    // 0x2f7980: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2f7980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2f7984:
    // 0x2f7984: 0xa223001c  sb          $v1, 0x1C($s1)
    ctx->pc = 0x2f7984u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 3));
label_2f7988:
    // 0x2f7988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f798c:
    // 0x2f798c: 0xa223001e  sb          $v1, 0x1E($s1)
    ctx->pc = 0x2f798cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 3));
label_2f7990:
    // 0x2f7990: 0x10000080  b           . + 4 + (0x80 << 2)
label_2f7994:
    if (ctx->pc == 0x2F7994u) {
        ctx->pc = 0x2F7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7990u;
        // 0x2f7994: 0xa220001f  sb          $zero, 0x1F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7998u;
        goto label_2f7998;
    }
    ctx->pc = 0x2F7990u;
    {
        const bool branch_taken_0x2f7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7990u;
        // 0x2f7994: 0xa220001f  sb          $zero, 0x1F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7990) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7998u;
label_2f7998:
    // 0x2f7998: 0x16130036  bne         $s0, $s3, . + 4 + (0x36 << 2)
label_2f799c:
    if (ctx->pc == 0x2F799Cu) {
        ctx->pc = 0x2F799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7998u;
        // 0x2f799c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F79A0u;
        goto label_2f79a0;
    }
    ctx->pc = 0x2F7998u;
    {
        const bool branch_taken_0x2f7998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7998u;
        // 0x2f799c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7998) {
            ctx->pc = 0x2F7A74u;
            goto label_2f7a74;
        }
    }
    ctx->pc = 0x2F79A0u;
label_2f79a0:
    // 0x2f79a0: 0xc08bfa0  jal         func_22FE80
label_2f79a4:
    if (ctx->pc == 0x2F79A4u) {
        ctx->pc = 0x2F79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79A0u;
        // 0x2f79a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F79A8u;
        goto label_2f79a8;
    }
    ctx->pc = 0x2F79A0u;
    SET_GPR_U32(ctx, 31, 0x2F79A8u);
    ctx->pc = 0x2F79A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79A0u;
    // 0x2f79a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F79A0u, 0x2F79A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79A8u;
label_2f79a8:
    // 0x2f79a8: 0xde4400e0  ld          $a0, 0xE0($s2)
    ctx->pc = 0x2f79a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f79ac:
    // 0x2f79ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f79acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f79b0:
    // 0x2f79b0: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2f79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f79b4:
    // 0x2f79b4: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2f79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2f79b8:
    // 0x2f79b8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2f79b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2f79bc:
    // 0x2f79bc: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x2f79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f79c0:
    // 0x2f79c0: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2f79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2f79c4:
    // 0x2f79c4: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x2f79c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2f79c8:
    // 0x2f79c8: 0xfe4500e0  sd          $a1, 0xE0($s2)
    ctx->pc = 0x2f79c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 5));
label_2f79cc:
    // 0x2f79cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2f79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2f79d0:
    // 0x2f79d0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2f79d4:
    if (ctx->pc == 0x2F79D4u) {
        ctx->pc = 0x2F79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79D0u;
        // 0x2f79d4: 0x62102b  sltu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F79D8u;
        goto label_2f79d8;
    }
    ctx->pc = 0x2F79D0u;
    {
        const bool branch_taken_0x2f79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79D0u;
        // 0x2f79d4: 0x62102b  sltu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79d0) {
            ctx->pc = 0x2F7A30u;
            goto label_2f7a30;
        }
    }
    ctx->pc = 0x2F79D8u;
label_2f79d8:
    // 0x2f79d8: 0x24620bb8  addiu       $v0, $v1, 0xBB8
    ctx->pc = 0x2f79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
label_2f79dc:
    // 0x2f79dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f79e0:
    // 0x2f79e0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2f79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2f79e4:
    // 0x2f79e4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f79e8:
    // 0x2f79e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f79e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f79ec:
    // 0x2f79ec: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f79ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f79f0:
    // 0x2f79f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f79f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f79f4:
    // 0x2f79f4: 0xc08bd96  jal         func_22F658
label_2f79f8:
    if (ctx->pc == 0x2F79F8u) {
        ctx->pc = 0x2F79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79F4u;
        // 0x2f79f8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F79FCu;
        goto label_2f79fc;
    }
    ctx->pc = 0x2F79F4u;
    SET_GPR_U32(ctx, 31, 0x2F79FCu);
    ctx->pc = 0x2F79F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79F4u;
    // 0x2f79f8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2F79F4u, 0x2F79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79FCu;
label_2f79fc:
    // 0x2f79fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f7a00:
    // 0x2f7a00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f7a04:
    // 0x2f7a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f7a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f7a08:
    // 0x2f7a08: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f7a08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f7a0c:
    // 0x2f7a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a10:
    // 0x2f7a10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f7a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f7a14:
    // 0x2f7a14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a18:
    // 0x2f7a18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f7a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7a1c:
    // 0x2f7a1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f7a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a20:
    // 0x2f7a20: 0xc088178  jal         func_2205E0
label_2f7a24:
    if (ctx->pc == 0x2F7A24u) {
        ctx->pc = 0x2F7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A20u;
        // 0x2f7a24: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A28u;
        goto label_2f7a28;
    }
    ctx->pc = 0x2F7A20u;
    SET_GPR_U32(ctx, 31, 0x2F7A28u);
    ctx->pc = 0x2F7A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7A20u;
    // 0x2f7a24: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F7A20u, 0x2F7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A28u;
label_2f7a28:
    // 0x2f7a28: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2f7a2c:
    if (ctx->pc == 0x2F7A2Cu) {
        ctx->pc = 0x2F7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A28u;
        // 0x2f7a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A30u;
        goto label_2f7a30;
    }
    ctx->pc = 0x2F7A28u;
    {
        const bool branch_taken_0x2f7a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A28u;
        // 0x2f7a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a28) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7A30u;
label_2f7a30:
    // 0x2f7a30: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_2f7a34:
    if (ctx->pc == 0x2F7A34u) {
        ctx->pc = 0x2F7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A30u;
        // 0x2f7a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A38u;
        goto label_2f7a38;
    }
    ctx->pc = 0x2F7A30u;
    {
        const bool branch_taken_0x2f7a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A30u;
        // 0x2f7a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a30) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7A38u;
label_2f7a38:
    // 0x2f7a38: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2f7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_2f7a3c:
    // 0x2f7a3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f7a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f7a40:
    // 0x2f7a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a44:
    // 0x2f7a44: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2f7a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2f7a48:
    // 0x2f7a48: 0xc088ef0  jal         func_223BC0
label_2f7a4c:
    if (ctx->pc == 0x2F7A4Cu) {
        ctx->pc = 0x2F7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A48u;
        // 0x2f7a4c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A50u;
        goto label_2f7a50;
    }
    ctx->pc = 0x2F7A48u;
    SET_GPR_U32(ctx, 31, 0x2F7A50u);
    ctx->pc = 0x2F7A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7A48u;
    // 0x2f7a4c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2F7A48u, 0x2F7A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A50u;
label_2f7a50:
    // 0x2f7a50: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
label_2f7a54:
    if (ctx->pc == 0x2F7A54u) {
        ctx->pc = 0x2F7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A50u;
        // 0x2f7a54: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A58u;
        goto label_2f7a58;
    }
    ctx->pc = 0x2F7A50u;
    {
        const bool branch_taken_0x2f7a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f7a50) {
            ctx->pc = 0x2F7A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7A50u;
            // 0x2f7a54: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7A68u;
            goto label_2f7a68;
        }
    }
    ctx->pc = 0x2F7A58u;
label_2f7a58:
    // 0x2f7a58: 0xc08be36  jal         func_22F8D8
label_2f7a5c:
    if (ctx->pc == 0x2F7A5Cu) {
        ctx->pc = 0x2F7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A58u;
        // 0x2f7a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A60u;
        goto label_2f7a60;
    }
    ctx->pc = 0x2F7A58u;
    SET_GPR_U32(ctx, 31, 0x2F7A60u);
    ctx->pc = 0x2F7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7A58u;
    // 0x2f7a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2F7A58u, 0x2F7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A60u;
label_2f7a60:
    // 0x2f7a60: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2f7a64:
    if (ctx->pc == 0x2F7A64u) {
        ctx->pc = 0x2F7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A60u;
        // 0x2f7a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A68u;
        goto label_2f7a68;
    }
    ctx->pc = 0x2F7A60u;
    {
        const bool branch_taken_0x2f7a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A60u;
        // 0x2f7a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a60) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7A68u;
label_2f7a68:
    // 0x2f7a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7a6c:
    // 0x2f7a6c: 0x10000049  b           . + 4 + (0x49 << 2)
label_2f7a70:
    if (ctx->pc == 0x2F7A70u) {
        ctx->pc = 0x2F7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A6Cu;
        // 0x2f7a70: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A74u;
        goto label_2f7a74;
    }
    ctx->pc = 0x2F7A6Cu;
    {
        const bool branch_taken_0x2f7a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A6Cu;
        // 0x2f7a70: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a6c) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7A74u;
label_2f7a74:
    // 0x2f7a74: 0x16020047  bne         $s0, $v0, . + 4 + (0x47 << 2)
label_2f7a78:
    if (ctx->pc == 0x2F7A78u) {
        ctx->pc = 0x2F7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A74u;
        // 0x2f7a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A7Cu;
        goto label_2f7a7c;
    }
    ctx->pc = 0x2F7A74u;
    {
        const bool branch_taken_0x2f7a74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A74u;
        // 0x2f7a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a74) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7A7Cu;
label_2f7a7c:
    // 0x2f7a7c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2f7a7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f7a80:
    // 0x2f7a80: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2f7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f7a84:
    // 0x2f7a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f7a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f7a88:
    // 0x2f7a88: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2f7a88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2f7a8c:
    // 0x2f7a8c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2f7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2f7a90:
    // 0x2f7a90: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_2f7a94:
    if (ctx->pc == 0x2F7A94u) {
        ctx->pc = 0x2F7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A90u;
        // 0x2f7a94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7A98u;
        goto label_2f7a98;
    }
    ctx->pc = 0x2F7A90u;
    {
        const bool branch_taken_0x2f7a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A90u;
        // 0x2f7a94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a90) {
            ctx->pc = 0x2F7AB8u;
            goto label_2f7ab8;
        }
    }
    ctx->pc = 0x2F7A98u;
label_2f7a98:
    // 0x2f7a98: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f7a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f7a9c:
    // 0x2f7a9c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f7aa0:
    // 0x2f7aa0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2f7aa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f7aa4:
    // 0x2f7aa4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2f7aa8:
    if (ctx->pc == 0x2F7AA8u) {
        ctx->pc = 0x2F7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AA4u;
        // 0x2f7aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7AACu;
        goto label_2f7aac;
    }
    ctx->pc = 0x2F7AA4u;
    {
        const bool branch_taken_0x2f7aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AA4u;
        // 0x2f7aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7aa4) {
            ctx->pc = 0x2F7AC8u;
            goto label_2f7ac8;
        }
    }
    ctx->pc = 0x2F7AACu;
label_2f7aac:
    // 0x2f7aac: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2f7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2f7ab0:
    // 0x2f7ab0: 0x10000038  b           . + 4 + (0x38 << 2)
label_2f7ab4:
    if (ctx->pc == 0x2F7AB4u) {
        ctx->pc = 0x2F7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AB0u;
        // 0x2f7ab4: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7AB8u;
        goto label_2f7ab8;
    }
    ctx->pc = 0x2F7AB0u;
    {
        const bool branch_taken_0x2f7ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AB0u;
        // 0x2f7ab4: 0xa220001c  sb          $zero, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ab0) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7AB8u;
label_2f7ab8:
    // 0x2f7ab8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f7ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f7abc:
    // 0x2f7abc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f7ac0:
    // 0x2f7ac0: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x2f7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
label_2f7ac4:
    // 0x2f7ac4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2f7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2f7ac8:
    // 0x2f7ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7acc:
    // 0x2f7acc: 0xc0a7c8c  jal         func_29F230
label_2f7ad0:
    if (ctx->pc == 0x2F7AD0u) {
        ctx->pc = 0x2F7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7ACCu;
        // 0x2f7ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7AD4u;
        goto label_2f7ad4;
    }
    ctx->pc = 0x2F7ACCu;
    SET_GPR_U32(ctx, 31, 0x2F7AD4u);
    ctx->pc = 0x2F7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7ACCu;
    // 0x2f7ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F7ACCu, 0x2F7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AD4u;
label_2f7ad4:
    // 0x2f7ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ad8:
    // 0x2f7ad8: 0x1200feb9  beqz        $s0, . + 4 + (-0x147 << 2)
label_2f7adc:
    if (ctx->pc == 0x2F7ADCu) {
        ctx->pc = 0x2F7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AD8u;
        // 0x2f7adc: 0x26a34b00  addiu       $v1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7AE0u;
        goto label_2f7ae0;
    }
    ctx->pc = 0x2F7AD8u;
    {
        const bool branch_taken_0x2f7ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AD8u;
        // 0x2f7adc: 0x26a34b00  addiu       $v1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ad8) {
            ctx->pc = 0x2F75C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f75c0;
        }
    }
    ctx->pc = 0x2F7AE0u;
label_2f7ae0:
    // 0x2f7ae0: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2f7ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2f7ae4:
    // 0x2f7ae4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2f7ae4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2f7ae8:
    // 0x2f7ae8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7aec:
    // 0x2f7aec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f7aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f7af0:
    // 0x2f7af0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f7af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f7af4:
    // 0x2f7af4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f7af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f7af8:
    // 0x2f7af8: 0xc454013c  lwc1        $f20, 0x13C($v0)
    ctx->pc = 0x2f7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f7afc:
    // 0x2f7afc: 0xc0cdb38  jal         func_336CE0
label_2f7b00:
    if (ctx->pc == 0x2F7B00u) {
        ctx->pc = 0x2F7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AFCu;
        // 0x2f7b00: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B04u;
        goto label_2f7b04;
    }
    ctx->pc = 0x2F7AFCu;
    SET_GPR_U32(ctx, 31, 0x2F7B04u);
    ctx->pc = 0x2F7B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7AFCu;
    // 0x2f7b00: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F7AFCu, 0x2F7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B04u;
label_2f7b04:
    // 0x2f7b04: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2f7b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2f7b08:
    // 0x2f7b08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f7b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7b0c:
    // 0x2f7b0c: 0x0  nop
    ctx->pc = 0x2f7b0cu;
    // NOP
label_2f7b10:
    // 0x2f7b10: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2f7b14:
    if (ctx->pc == 0x2F7B14u) {
        ctx->pc = 0x2F7B18u;
        goto label_2f7b18;
    }
    ctx->pc = 0x2F7B10u;
    {
        const bool branch_taken_0x2f7b10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7b10) {
            ctx->pc = 0x2F7B60u;
            goto label_2f7b60;
        }
    }
    ctx->pc = 0x2F7B18u;
label_2f7b18:
    // 0x2f7b18: 0xc0a367c  jal         func_28D9F0
label_2f7b1c:
    if (ctx->pc == 0x2F7B1Cu) {
        ctx->pc = 0x2F7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B18u;
        // 0x2f7b1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B20u;
        goto label_2f7b20;
    }
    ctx->pc = 0x2F7B18u;
    SET_GPR_U32(ctx, 31, 0x2F7B20u);
    ctx->pc = 0x2F7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B18u;
    // 0x2f7b1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F7B18u, 0x2F7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B20u;
label_2f7b20:
    // 0x2f7b20: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2f7b24:
    if (ctx->pc == 0x2F7B24u) {
        ctx->pc = 0x2F7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B20u;
        // 0x2f7b24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B28u;
        goto label_2f7b28;
    }
    ctx->pc = 0x2F7B20u;
    {
        const bool branch_taken_0x2f7b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B20u;
        // 0x2f7b24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b20) {
            ctx->pc = 0x2F7B90u;
            goto label_2f7b90;
        }
    }
    ctx->pc = 0x2F7B28u;
label_2f7b28:
    // 0x2f7b28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f7b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f7b2c:
    // 0x2f7b2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f7b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f7b30:
    // 0x2f7b30: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2f7b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_2f7b34:
    // 0x2f7b34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f7b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2f7b38:
    // 0x2f7b38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f7b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f7b3c:
    // 0x2f7b3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f7b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b40:
    // 0x2f7b40: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2f7b40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_2f7b44:
    // 0x2f7b44: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f7b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7b48:
    // 0x2f7b48: 0x460da342  mul.s       $f13, $f20, $f13
    ctx->pc = 0x2f7b48u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_2f7b4c:
    // 0x2f7b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f7b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b50:
    // 0x2f7b50: 0xc0bf3d4  jal         func_2FCF50
label_2f7b54:
    if (ctx->pc == 0x2F7B54u) {
        ctx->pc = 0x2F7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B50u;
        // 0x2f7b54: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B58u;
        goto label_2f7b58;
    }
    ctx->pc = 0x2F7B50u;
    SET_GPR_U32(ctx, 31, 0x2F7B58u);
    ctx->pc = 0x2F7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B50u;
    // 0x2f7b54: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2F7B50u, 0x2F7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B58u;
label_2f7b58:
    // 0x2f7b58: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f7b5c:
    if (ctx->pc == 0x2F7B5Cu) {
        ctx->pc = 0x2F7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B58u;
        // 0x2f7b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B60u;
        goto label_2f7b60;
    }
    ctx->pc = 0x2F7B58u;
    {
        const bool branch_taken_0x2f7b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B58u;
        // 0x2f7b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b58) {
            ctx->pc = 0x2F7B94u;
            goto label_2f7b94;
        }
    }
    ctx->pc = 0x2F7B60u;
label_2f7b60:
    // 0x2f7b60: 0xc0a4e54  jal         func_293950
label_2f7b64:
    if (ctx->pc == 0x2F7B64u) {
        ctx->pc = 0x2F7B68u;
        goto label_2f7b68;
    }
    ctx->pc = 0x2F7B60u;
    SET_GPR_U32(ctx, 31, 0x2F7B68u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F7B60u, 0x2F7B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B68u;
label_2f7b68:
    // 0x2f7b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b6c:
    // 0x2f7b6c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2f7b70:
    if (ctx->pc == 0x2F7B70u) {
        ctx->pc = 0x2F7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B6Cu;
        // 0x2f7b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B74u;
        goto label_2f7b74;
    }
    ctx->pc = 0x2F7B6Cu;
    {
        const bool branch_taken_0x2f7b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B6Cu;
        // 0x2f7b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b6c) {
            ctx->pc = 0x2F7B84u;
            goto label_2f7b84;
        }
    }
    ctx->pc = 0x2F7B74u;
label_2f7b74:
    // 0x2f7b74: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f7b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7b78:
    // 0x2f7b78: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x2f7b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2f7b7c:
    // 0x2f7b7c: 0xc0acb08  jal         func_2B2C20
label_2f7b80:
    if (ctx->pc == 0x2F7B80u) {
        ctx->pc = 0x2F7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B7Cu;
        // 0x2f7b80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B84u;
        goto label_2f7b84;
    }
    ctx->pc = 0x2F7B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F7B84u);
    ctx->pc = 0x2F7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B7Cu;
    // 0x2f7b80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2F7B7Cu, 0x2F7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B84u;
label_2f7b84:
    // 0x2f7b84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f7b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7b88:
    // 0x2f7b88: 0xc0a35d6  jal         func_28D758
label_2f7b8c:
    if (ctx->pc == 0x2F7B8Cu) {
        ctx->pc = 0x2F7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B88u;
        // 0x2f7b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7B90u;
        goto label_2f7b90;
    }
    ctx->pc = 0x2F7B88u;
    SET_GPR_U32(ctx, 31, 0x2F7B90u);
    ctx->pc = 0x2F7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B88u;
    // 0x2f7b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F7B88u, 0x2F7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B90u;
label_2f7b90:
    // 0x2f7b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b94:
    // 0x2f7b94: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2f7b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2f7b98:
    // 0x2f7b98: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2f7b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2f7b9c:
    // 0x2f7b9c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2f7b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2f7ba0:
    // 0x2f7ba0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2f7ba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f7ba4:
    // 0x2f7ba4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2f7ba4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f7ba8:
    // 0x2f7ba8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2f7ba8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2f7bac:
    // 0x2f7bac: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2f7bacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f7bb0:
    // 0x2f7bb0: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2f7bb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f7bb4:
    // 0x2f7bb4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f7bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2f7bb8:
    // 0x2f7bb8: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x2f7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f7bbc:
    // 0x2f7bbc: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2f7bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f7bc0:
    // 0x2f7bc0: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2f7bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f7bc4:
    // 0x2f7bc4: 0x3e00008  jr          $ra
label_2f7bc8:
    if (ctx->pc == 0x2F7BC8u) {
        ctx->pc = 0x2F7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BC4u;
        // 0x2f7bc8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F7BCCu;
        goto label_2f7bcc;
    }
    ctx->pc = 0x2F7BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BC4u;
        // 0x2f7bc8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7BCCu;
label_2f7bcc:
    // 0x2f7bcc: 0x0  nop
    ctx->pc = 0x2f7bccu;
    // NOP
    ctx->pc = 0x2f7bd0u;
}
