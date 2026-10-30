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

// Function: sub_002E8F78
// Address: 0x2e8f78 - 0x2e9c60
void sub_002E8F78_0x2e8f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8F78_0x2e8f78");
#endif

    switch (ctx->pc) {
        case 0x2e8f78u: goto label_2e8f78;
        case 0x2e8f7cu: goto label_2e8f7c;
        case 0x2e8f80u: goto label_2e8f80;
        case 0x2e8f84u: goto label_2e8f84;
        case 0x2e8f88u: goto label_2e8f88;
        case 0x2e8f8cu: goto label_2e8f8c;
        case 0x2e8f90u: goto label_2e8f90;
        case 0x2e8f94u: goto label_2e8f94;
        case 0x2e8f98u: goto label_2e8f98;
        case 0x2e8f9cu: goto label_2e8f9c;
        case 0x2e8fa0u: goto label_2e8fa0;
        case 0x2e8fa4u: goto label_2e8fa4;
        case 0x2e8fa8u: goto label_2e8fa8;
        case 0x2e8facu: goto label_2e8fac;
        case 0x2e8fb0u: goto label_2e8fb0;
        case 0x2e8fb4u: goto label_2e8fb4;
        case 0x2e8fb8u: goto label_2e8fb8;
        case 0x2e8fbcu: goto label_2e8fbc;
        case 0x2e8fc0u: goto label_2e8fc0;
        case 0x2e8fc4u: goto label_2e8fc4;
        case 0x2e8fc8u: goto label_2e8fc8;
        case 0x2e8fccu: goto label_2e8fcc;
        case 0x2e8fd0u: goto label_2e8fd0;
        case 0x2e8fd4u: goto label_2e8fd4;
        case 0x2e8fd8u: goto label_2e8fd8;
        case 0x2e8fdcu: goto label_2e8fdc;
        case 0x2e8fe0u: goto label_2e8fe0;
        case 0x2e8fe4u: goto label_2e8fe4;
        case 0x2e8fe8u: goto label_2e8fe8;
        case 0x2e8fecu: goto label_2e8fec;
        case 0x2e8ff0u: goto label_2e8ff0;
        case 0x2e8ff4u: goto label_2e8ff4;
        case 0x2e8ff8u: goto label_2e8ff8;
        case 0x2e8ffcu: goto label_2e8ffc;
        case 0x2e9000u: goto label_2e9000;
        case 0x2e9004u: goto label_2e9004;
        case 0x2e9008u: goto label_2e9008;
        case 0x2e900cu: goto label_2e900c;
        case 0x2e9010u: goto label_2e9010;
        case 0x2e9014u: goto label_2e9014;
        case 0x2e9018u: goto label_2e9018;
        case 0x2e901cu: goto label_2e901c;
        case 0x2e9020u: goto label_2e9020;
        case 0x2e9024u: goto label_2e9024;
        case 0x2e9028u: goto label_2e9028;
        case 0x2e902cu: goto label_2e902c;
        case 0x2e9030u: goto label_2e9030;
        case 0x2e9034u: goto label_2e9034;
        case 0x2e9038u: goto label_2e9038;
        case 0x2e903cu: goto label_2e903c;
        case 0x2e9040u: goto label_2e9040;
        case 0x2e9044u: goto label_2e9044;
        case 0x2e9048u: goto label_2e9048;
        case 0x2e904cu: goto label_2e904c;
        case 0x2e9050u: goto label_2e9050;
        case 0x2e9054u: goto label_2e9054;
        case 0x2e9058u: goto label_2e9058;
        case 0x2e905cu: goto label_2e905c;
        case 0x2e9060u: goto label_2e9060;
        case 0x2e9064u: goto label_2e9064;
        case 0x2e9068u: goto label_2e9068;
        case 0x2e906cu: goto label_2e906c;
        case 0x2e9070u: goto label_2e9070;
        case 0x2e9074u: goto label_2e9074;
        case 0x2e9078u: goto label_2e9078;
        case 0x2e907cu: goto label_2e907c;
        case 0x2e9080u: goto label_2e9080;
        case 0x2e9084u: goto label_2e9084;
        case 0x2e9088u: goto label_2e9088;
        case 0x2e908cu: goto label_2e908c;
        case 0x2e9090u: goto label_2e9090;
        case 0x2e9094u: goto label_2e9094;
        case 0x2e9098u: goto label_2e9098;
        case 0x2e909cu: goto label_2e909c;
        case 0x2e90a0u: goto label_2e90a0;
        case 0x2e90a4u: goto label_2e90a4;
        case 0x2e90a8u: goto label_2e90a8;
        case 0x2e90acu: goto label_2e90ac;
        case 0x2e90b0u: goto label_2e90b0;
        case 0x2e90b4u: goto label_2e90b4;
        case 0x2e90b8u: goto label_2e90b8;
        case 0x2e90bcu: goto label_2e90bc;
        case 0x2e90c0u: goto label_2e90c0;
        case 0x2e90c4u: goto label_2e90c4;
        case 0x2e90c8u: goto label_2e90c8;
        case 0x2e90ccu: goto label_2e90cc;
        case 0x2e90d0u: goto label_2e90d0;
        case 0x2e90d4u: goto label_2e90d4;
        case 0x2e90d8u: goto label_2e90d8;
        case 0x2e90dcu: goto label_2e90dc;
        case 0x2e90e0u: goto label_2e90e0;
        case 0x2e90e4u: goto label_2e90e4;
        case 0x2e90e8u: goto label_2e90e8;
        case 0x2e90ecu: goto label_2e90ec;
        case 0x2e90f0u: goto label_2e90f0;
        case 0x2e90f4u: goto label_2e90f4;
        case 0x2e90f8u: goto label_2e90f8;
        case 0x2e90fcu: goto label_2e90fc;
        case 0x2e9100u: goto label_2e9100;
        case 0x2e9104u: goto label_2e9104;
        case 0x2e9108u: goto label_2e9108;
        case 0x2e910cu: goto label_2e910c;
        case 0x2e9110u: goto label_2e9110;
        case 0x2e9114u: goto label_2e9114;
        case 0x2e9118u: goto label_2e9118;
        case 0x2e911cu: goto label_2e911c;
        case 0x2e9120u: goto label_2e9120;
        case 0x2e9124u: goto label_2e9124;
        case 0x2e9128u: goto label_2e9128;
        case 0x2e912cu: goto label_2e912c;
        case 0x2e9130u: goto label_2e9130;
        case 0x2e9134u: goto label_2e9134;
        case 0x2e9138u: goto label_2e9138;
        case 0x2e913cu: goto label_2e913c;
        case 0x2e9140u: goto label_2e9140;
        case 0x2e9144u: goto label_2e9144;
        case 0x2e9148u: goto label_2e9148;
        case 0x2e914cu: goto label_2e914c;
        case 0x2e9150u: goto label_2e9150;
        case 0x2e9154u: goto label_2e9154;
        case 0x2e9158u: goto label_2e9158;
        case 0x2e915cu: goto label_2e915c;
        case 0x2e9160u: goto label_2e9160;
        case 0x2e9164u: goto label_2e9164;
        case 0x2e9168u: goto label_2e9168;
        case 0x2e916cu: goto label_2e916c;
        case 0x2e9170u: goto label_2e9170;
        case 0x2e9174u: goto label_2e9174;
        case 0x2e9178u: goto label_2e9178;
        case 0x2e917cu: goto label_2e917c;
        case 0x2e9180u: goto label_2e9180;
        case 0x2e9184u: goto label_2e9184;
        case 0x2e9188u: goto label_2e9188;
        case 0x2e918cu: goto label_2e918c;
        case 0x2e9190u: goto label_2e9190;
        case 0x2e9194u: goto label_2e9194;
        case 0x2e9198u: goto label_2e9198;
        case 0x2e919cu: goto label_2e919c;
        case 0x2e91a0u: goto label_2e91a0;
        case 0x2e91a4u: goto label_2e91a4;
        case 0x2e91a8u: goto label_2e91a8;
        case 0x2e91acu: goto label_2e91ac;
        case 0x2e91b0u: goto label_2e91b0;
        case 0x2e91b4u: goto label_2e91b4;
        case 0x2e91b8u: goto label_2e91b8;
        case 0x2e91bcu: goto label_2e91bc;
        case 0x2e91c0u: goto label_2e91c0;
        case 0x2e91c4u: goto label_2e91c4;
        case 0x2e91c8u: goto label_2e91c8;
        case 0x2e91ccu: goto label_2e91cc;
        case 0x2e91d0u: goto label_2e91d0;
        case 0x2e91d4u: goto label_2e91d4;
        case 0x2e91d8u: goto label_2e91d8;
        case 0x2e91dcu: goto label_2e91dc;
        case 0x2e91e0u: goto label_2e91e0;
        case 0x2e91e4u: goto label_2e91e4;
        case 0x2e91e8u: goto label_2e91e8;
        case 0x2e91ecu: goto label_2e91ec;
        case 0x2e91f0u: goto label_2e91f0;
        case 0x2e91f4u: goto label_2e91f4;
        case 0x2e91f8u: goto label_2e91f8;
        case 0x2e91fcu: goto label_2e91fc;
        case 0x2e9200u: goto label_2e9200;
        case 0x2e9204u: goto label_2e9204;
        case 0x2e9208u: goto label_2e9208;
        case 0x2e920cu: goto label_2e920c;
        case 0x2e9210u: goto label_2e9210;
        case 0x2e9214u: goto label_2e9214;
        case 0x2e9218u: goto label_2e9218;
        case 0x2e921cu: goto label_2e921c;
        case 0x2e9220u: goto label_2e9220;
        case 0x2e9224u: goto label_2e9224;
        case 0x2e9228u: goto label_2e9228;
        case 0x2e922cu: goto label_2e922c;
        case 0x2e9230u: goto label_2e9230;
        case 0x2e9234u: goto label_2e9234;
        case 0x2e9238u: goto label_2e9238;
        case 0x2e923cu: goto label_2e923c;
        case 0x2e9240u: goto label_2e9240;
        case 0x2e9244u: goto label_2e9244;
        case 0x2e9248u: goto label_2e9248;
        case 0x2e924cu: goto label_2e924c;
        case 0x2e9250u: goto label_2e9250;
        case 0x2e9254u: goto label_2e9254;
        case 0x2e9258u: goto label_2e9258;
        case 0x2e925cu: goto label_2e925c;
        case 0x2e9260u: goto label_2e9260;
        case 0x2e9264u: goto label_2e9264;
        case 0x2e9268u: goto label_2e9268;
        case 0x2e926cu: goto label_2e926c;
        case 0x2e9270u: goto label_2e9270;
        case 0x2e9274u: goto label_2e9274;
        case 0x2e9278u: goto label_2e9278;
        case 0x2e927cu: goto label_2e927c;
        case 0x2e9280u: goto label_2e9280;
        case 0x2e9284u: goto label_2e9284;
        case 0x2e9288u: goto label_2e9288;
        case 0x2e928cu: goto label_2e928c;
        case 0x2e9290u: goto label_2e9290;
        case 0x2e9294u: goto label_2e9294;
        case 0x2e9298u: goto label_2e9298;
        case 0x2e929cu: goto label_2e929c;
        case 0x2e92a0u: goto label_2e92a0;
        case 0x2e92a4u: goto label_2e92a4;
        case 0x2e92a8u: goto label_2e92a8;
        case 0x2e92acu: goto label_2e92ac;
        case 0x2e92b0u: goto label_2e92b0;
        case 0x2e92b4u: goto label_2e92b4;
        case 0x2e92b8u: goto label_2e92b8;
        case 0x2e92bcu: goto label_2e92bc;
        case 0x2e92c0u: goto label_2e92c0;
        case 0x2e92c4u: goto label_2e92c4;
        case 0x2e92c8u: goto label_2e92c8;
        case 0x2e92ccu: goto label_2e92cc;
        case 0x2e92d0u: goto label_2e92d0;
        case 0x2e92d4u: goto label_2e92d4;
        case 0x2e92d8u: goto label_2e92d8;
        case 0x2e92dcu: goto label_2e92dc;
        case 0x2e92e0u: goto label_2e92e0;
        case 0x2e92e4u: goto label_2e92e4;
        case 0x2e92e8u: goto label_2e92e8;
        case 0x2e92ecu: goto label_2e92ec;
        case 0x2e92f0u: goto label_2e92f0;
        case 0x2e92f4u: goto label_2e92f4;
        case 0x2e92f8u: goto label_2e92f8;
        case 0x2e92fcu: goto label_2e92fc;
        case 0x2e9300u: goto label_2e9300;
        case 0x2e9304u: goto label_2e9304;
        case 0x2e9308u: goto label_2e9308;
        case 0x2e930cu: goto label_2e930c;
        case 0x2e9310u: goto label_2e9310;
        case 0x2e9314u: goto label_2e9314;
        case 0x2e9318u: goto label_2e9318;
        case 0x2e931cu: goto label_2e931c;
        case 0x2e9320u: goto label_2e9320;
        case 0x2e9324u: goto label_2e9324;
        case 0x2e9328u: goto label_2e9328;
        case 0x2e932cu: goto label_2e932c;
        case 0x2e9330u: goto label_2e9330;
        case 0x2e9334u: goto label_2e9334;
        case 0x2e9338u: goto label_2e9338;
        case 0x2e933cu: goto label_2e933c;
        case 0x2e9340u: goto label_2e9340;
        case 0x2e9344u: goto label_2e9344;
        case 0x2e9348u: goto label_2e9348;
        case 0x2e934cu: goto label_2e934c;
        case 0x2e9350u: goto label_2e9350;
        case 0x2e9354u: goto label_2e9354;
        case 0x2e9358u: goto label_2e9358;
        case 0x2e935cu: goto label_2e935c;
        case 0x2e9360u: goto label_2e9360;
        case 0x2e9364u: goto label_2e9364;
        case 0x2e9368u: goto label_2e9368;
        case 0x2e936cu: goto label_2e936c;
        case 0x2e9370u: goto label_2e9370;
        case 0x2e9374u: goto label_2e9374;
        case 0x2e9378u: goto label_2e9378;
        case 0x2e937cu: goto label_2e937c;
        case 0x2e9380u: goto label_2e9380;
        case 0x2e9384u: goto label_2e9384;
        case 0x2e9388u: goto label_2e9388;
        case 0x2e938cu: goto label_2e938c;
        case 0x2e9390u: goto label_2e9390;
        case 0x2e9394u: goto label_2e9394;
        case 0x2e9398u: goto label_2e9398;
        case 0x2e939cu: goto label_2e939c;
        case 0x2e93a0u: goto label_2e93a0;
        case 0x2e93a4u: goto label_2e93a4;
        case 0x2e93a8u: goto label_2e93a8;
        case 0x2e93acu: goto label_2e93ac;
        case 0x2e93b0u: goto label_2e93b0;
        case 0x2e93b4u: goto label_2e93b4;
        case 0x2e93b8u: goto label_2e93b8;
        case 0x2e93bcu: goto label_2e93bc;
        case 0x2e93c0u: goto label_2e93c0;
        case 0x2e93c4u: goto label_2e93c4;
        case 0x2e93c8u: goto label_2e93c8;
        case 0x2e93ccu: goto label_2e93cc;
        case 0x2e93d0u: goto label_2e93d0;
        case 0x2e93d4u: goto label_2e93d4;
        case 0x2e93d8u: goto label_2e93d8;
        case 0x2e93dcu: goto label_2e93dc;
        case 0x2e93e0u: goto label_2e93e0;
        case 0x2e93e4u: goto label_2e93e4;
        case 0x2e93e8u: goto label_2e93e8;
        case 0x2e93ecu: goto label_2e93ec;
        case 0x2e93f0u: goto label_2e93f0;
        case 0x2e93f4u: goto label_2e93f4;
        case 0x2e93f8u: goto label_2e93f8;
        case 0x2e93fcu: goto label_2e93fc;
        case 0x2e9400u: goto label_2e9400;
        case 0x2e9404u: goto label_2e9404;
        case 0x2e9408u: goto label_2e9408;
        case 0x2e940cu: goto label_2e940c;
        case 0x2e9410u: goto label_2e9410;
        case 0x2e9414u: goto label_2e9414;
        case 0x2e9418u: goto label_2e9418;
        case 0x2e941cu: goto label_2e941c;
        case 0x2e9420u: goto label_2e9420;
        case 0x2e9424u: goto label_2e9424;
        case 0x2e9428u: goto label_2e9428;
        case 0x2e942cu: goto label_2e942c;
        case 0x2e9430u: goto label_2e9430;
        case 0x2e9434u: goto label_2e9434;
        case 0x2e9438u: goto label_2e9438;
        case 0x2e943cu: goto label_2e943c;
        case 0x2e9440u: goto label_2e9440;
        case 0x2e9444u: goto label_2e9444;
        case 0x2e9448u: goto label_2e9448;
        case 0x2e944cu: goto label_2e944c;
        case 0x2e9450u: goto label_2e9450;
        case 0x2e9454u: goto label_2e9454;
        case 0x2e9458u: goto label_2e9458;
        case 0x2e945cu: goto label_2e945c;
        case 0x2e9460u: goto label_2e9460;
        case 0x2e9464u: goto label_2e9464;
        case 0x2e9468u: goto label_2e9468;
        case 0x2e946cu: goto label_2e946c;
        case 0x2e9470u: goto label_2e9470;
        case 0x2e9474u: goto label_2e9474;
        case 0x2e9478u: goto label_2e9478;
        case 0x2e947cu: goto label_2e947c;
        case 0x2e9480u: goto label_2e9480;
        case 0x2e9484u: goto label_2e9484;
        case 0x2e9488u: goto label_2e9488;
        case 0x2e948cu: goto label_2e948c;
        case 0x2e9490u: goto label_2e9490;
        case 0x2e9494u: goto label_2e9494;
        case 0x2e9498u: goto label_2e9498;
        case 0x2e949cu: goto label_2e949c;
        case 0x2e94a0u: goto label_2e94a0;
        case 0x2e94a4u: goto label_2e94a4;
        case 0x2e94a8u: goto label_2e94a8;
        case 0x2e94acu: goto label_2e94ac;
        case 0x2e94b0u: goto label_2e94b0;
        case 0x2e94b4u: goto label_2e94b4;
        case 0x2e94b8u: goto label_2e94b8;
        case 0x2e94bcu: goto label_2e94bc;
        case 0x2e94c0u: goto label_2e94c0;
        case 0x2e94c4u: goto label_2e94c4;
        case 0x2e94c8u: goto label_2e94c8;
        case 0x2e94ccu: goto label_2e94cc;
        case 0x2e94d0u: goto label_2e94d0;
        case 0x2e94d4u: goto label_2e94d4;
        case 0x2e94d8u: goto label_2e94d8;
        case 0x2e94dcu: goto label_2e94dc;
        case 0x2e94e0u: goto label_2e94e0;
        case 0x2e94e4u: goto label_2e94e4;
        case 0x2e94e8u: goto label_2e94e8;
        case 0x2e94ecu: goto label_2e94ec;
        case 0x2e94f0u: goto label_2e94f0;
        case 0x2e94f4u: goto label_2e94f4;
        case 0x2e94f8u: goto label_2e94f8;
        case 0x2e94fcu: goto label_2e94fc;
        case 0x2e9500u: goto label_2e9500;
        case 0x2e9504u: goto label_2e9504;
        case 0x2e9508u: goto label_2e9508;
        case 0x2e950cu: goto label_2e950c;
        case 0x2e9510u: goto label_2e9510;
        case 0x2e9514u: goto label_2e9514;
        case 0x2e9518u: goto label_2e9518;
        case 0x2e951cu: goto label_2e951c;
        case 0x2e9520u: goto label_2e9520;
        case 0x2e9524u: goto label_2e9524;
        case 0x2e9528u: goto label_2e9528;
        case 0x2e952cu: goto label_2e952c;
        case 0x2e9530u: goto label_2e9530;
        case 0x2e9534u: goto label_2e9534;
        case 0x2e9538u: goto label_2e9538;
        case 0x2e953cu: goto label_2e953c;
        case 0x2e9540u: goto label_2e9540;
        case 0x2e9544u: goto label_2e9544;
        case 0x2e9548u: goto label_2e9548;
        case 0x2e954cu: goto label_2e954c;
        case 0x2e9550u: goto label_2e9550;
        case 0x2e9554u: goto label_2e9554;
        case 0x2e9558u: goto label_2e9558;
        case 0x2e955cu: goto label_2e955c;
        case 0x2e9560u: goto label_2e9560;
        case 0x2e9564u: goto label_2e9564;
        case 0x2e9568u: goto label_2e9568;
        case 0x2e956cu: goto label_2e956c;
        case 0x2e9570u: goto label_2e9570;
        case 0x2e9574u: goto label_2e9574;
        case 0x2e9578u: goto label_2e9578;
        case 0x2e957cu: goto label_2e957c;
        case 0x2e9580u: goto label_2e9580;
        case 0x2e9584u: goto label_2e9584;
        case 0x2e9588u: goto label_2e9588;
        case 0x2e958cu: goto label_2e958c;
        case 0x2e9590u: goto label_2e9590;
        case 0x2e9594u: goto label_2e9594;
        case 0x2e9598u: goto label_2e9598;
        case 0x2e959cu: goto label_2e959c;
        case 0x2e95a0u: goto label_2e95a0;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95a8u: goto label_2e95a8;
        case 0x2e95acu: goto label_2e95ac;
        case 0x2e95b0u: goto label_2e95b0;
        case 0x2e95b4u: goto label_2e95b4;
        case 0x2e95b8u: goto label_2e95b8;
        case 0x2e95bcu: goto label_2e95bc;
        case 0x2e95c0u: goto label_2e95c0;
        case 0x2e95c4u: goto label_2e95c4;
        case 0x2e95c8u: goto label_2e95c8;
        case 0x2e95ccu: goto label_2e95cc;
        case 0x2e95d0u: goto label_2e95d0;
        case 0x2e95d4u: goto label_2e95d4;
        case 0x2e95d8u: goto label_2e95d8;
        case 0x2e95dcu: goto label_2e95dc;
        case 0x2e95e0u: goto label_2e95e0;
        case 0x2e95e4u: goto label_2e95e4;
        case 0x2e95e8u: goto label_2e95e8;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e95f0u: goto label_2e95f0;
        case 0x2e95f4u: goto label_2e95f4;
        case 0x2e95f8u: goto label_2e95f8;
        case 0x2e95fcu: goto label_2e95fc;
        case 0x2e9600u: goto label_2e9600;
        case 0x2e9604u: goto label_2e9604;
        case 0x2e9608u: goto label_2e9608;
        case 0x2e960cu: goto label_2e960c;
        case 0x2e9610u: goto label_2e9610;
        case 0x2e9614u: goto label_2e9614;
        case 0x2e9618u: goto label_2e9618;
        case 0x2e961cu: goto label_2e961c;
        case 0x2e9620u: goto label_2e9620;
        case 0x2e9624u: goto label_2e9624;
        case 0x2e9628u: goto label_2e9628;
        case 0x2e962cu: goto label_2e962c;
        case 0x2e9630u: goto label_2e9630;
        case 0x2e9634u: goto label_2e9634;
        case 0x2e9638u: goto label_2e9638;
        case 0x2e963cu: goto label_2e963c;
        case 0x2e9640u: goto label_2e9640;
        case 0x2e9644u: goto label_2e9644;
        case 0x2e9648u: goto label_2e9648;
        case 0x2e964cu: goto label_2e964c;
        case 0x2e9650u: goto label_2e9650;
        case 0x2e9654u: goto label_2e9654;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e965cu: goto label_2e965c;
        case 0x2e9660u: goto label_2e9660;
        case 0x2e9664u: goto label_2e9664;
        case 0x2e9668u: goto label_2e9668;
        case 0x2e966cu: goto label_2e966c;
        case 0x2e9670u: goto label_2e9670;
        case 0x2e9674u: goto label_2e9674;
        case 0x2e9678u: goto label_2e9678;
        case 0x2e967cu: goto label_2e967c;
        case 0x2e9680u: goto label_2e9680;
        case 0x2e9684u: goto label_2e9684;
        case 0x2e9688u: goto label_2e9688;
        case 0x2e968cu: goto label_2e968c;
        case 0x2e9690u: goto label_2e9690;
        case 0x2e9694u: goto label_2e9694;
        case 0x2e9698u: goto label_2e9698;
        case 0x2e969cu: goto label_2e969c;
        case 0x2e96a0u: goto label_2e96a0;
        case 0x2e96a4u: goto label_2e96a4;
        case 0x2e96a8u: goto label_2e96a8;
        case 0x2e96acu: goto label_2e96ac;
        case 0x2e96b0u: goto label_2e96b0;
        case 0x2e96b4u: goto label_2e96b4;
        case 0x2e96b8u: goto label_2e96b8;
        case 0x2e96bcu: goto label_2e96bc;
        case 0x2e96c0u: goto label_2e96c0;
        case 0x2e96c4u: goto label_2e96c4;
        case 0x2e96c8u: goto label_2e96c8;
        case 0x2e96ccu: goto label_2e96cc;
        case 0x2e96d0u: goto label_2e96d0;
        case 0x2e96d4u: goto label_2e96d4;
        case 0x2e96d8u: goto label_2e96d8;
        case 0x2e96dcu: goto label_2e96dc;
        case 0x2e96e0u: goto label_2e96e0;
        case 0x2e96e4u: goto label_2e96e4;
        case 0x2e96e8u: goto label_2e96e8;
        case 0x2e96ecu: goto label_2e96ec;
        case 0x2e96f0u: goto label_2e96f0;
        case 0x2e96f4u: goto label_2e96f4;
        case 0x2e96f8u: goto label_2e96f8;
        case 0x2e96fcu: goto label_2e96fc;
        case 0x2e9700u: goto label_2e9700;
        case 0x2e9704u: goto label_2e9704;
        case 0x2e9708u: goto label_2e9708;
        case 0x2e970cu: goto label_2e970c;
        case 0x2e9710u: goto label_2e9710;
        case 0x2e9714u: goto label_2e9714;
        case 0x2e9718u: goto label_2e9718;
        case 0x2e971cu: goto label_2e971c;
        case 0x2e9720u: goto label_2e9720;
        case 0x2e9724u: goto label_2e9724;
        case 0x2e9728u: goto label_2e9728;
        case 0x2e972cu: goto label_2e972c;
        case 0x2e9730u: goto label_2e9730;
        case 0x2e9734u: goto label_2e9734;
        case 0x2e9738u: goto label_2e9738;
        case 0x2e973cu: goto label_2e973c;
        case 0x2e9740u: goto label_2e9740;
        case 0x2e9744u: goto label_2e9744;
        case 0x2e9748u: goto label_2e9748;
        case 0x2e974cu: goto label_2e974c;
        case 0x2e9750u: goto label_2e9750;
        case 0x2e9754u: goto label_2e9754;
        case 0x2e9758u: goto label_2e9758;
        case 0x2e975cu: goto label_2e975c;
        case 0x2e9760u: goto label_2e9760;
        case 0x2e9764u: goto label_2e9764;
        case 0x2e9768u: goto label_2e9768;
        case 0x2e976cu: goto label_2e976c;
        case 0x2e9770u: goto label_2e9770;
        case 0x2e9774u: goto label_2e9774;
        case 0x2e9778u: goto label_2e9778;
        case 0x2e977cu: goto label_2e977c;
        case 0x2e9780u: goto label_2e9780;
        case 0x2e9784u: goto label_2e9784;
        case 0x2e9788u: goto label_2e9788;
        case 0x2e978cu: goto label_2e978c;
        case 0x2e9790u: goto label_2e9790;
        case 0x2e9794u: goto label_2e9794;
        case 0x2e9798u: goto label_2e9798;
        case 0x2e979cu: goto label_2e979c;
        case 0x2e97a0u: goto label_2e97a0;
        case 0x2e97a4u: goto label_2e97a4;
        case 0x2e97a8u: goto label_2e97a8;
        case 0x2e97acu: goto label_2e97ac;
        case 0x2e97b0u: goto label_2e97b0;
        case 0x2e97b4u: goto label_2e97b4;
        case 0x2e97b8u: goto label_2e97b8;
        case 0x2e97bcu: goto label_2e97bc;
        case 0x2e97c0u: goto label_2e97c0;
        case 0x2e97c4u: goto label_2e97c4;
        case 0x2e97c8u: goto label_2e97c8;
        case 0x2e97ccu: goto label_2e97cc;
        case 0x2e97d0u: goto label_2e97d0;
        case 0x2e97d4u: goto label_2e97d4;
        case 0x2e97d8u: goto label_2e97d8;
        case 0x2e97dcu: goto label_2e97dc;
        case 0x2e97e0u: goto label_2e97e0;
        case 0x2e97e4u: goto label_2e97e4;
        case 0x2e97e8u: goto label_2e97e8;
        case 0x2e97ecu: goto label_2e97ec;
        case 0x2e97f0u: goto label_2e97f0;
        case 0x2e97f4u: goto label_2e97f4;
        case 0x2e97f8u: goto label_2e97f8;
        case 0x2e97fcu: goto label_2e97fc;
        case 0x2e9800u: goto label_2e9800;
        case 0x2e9804u: goto label_2e9804;
        case 0x2e9808u: goto label_2e9808;
        case 0x2e980cu: goto label_2e980c;
        case 0x2e9810u: goto label_2e9810;
        case 0x2e9814u: goto label_2e9814;
        case 0x2e9818u: goto label_2e9818;
        case 0x2e981cu: goto label_2e981c;
        case 0x2e9820u: goto label_2e9820;
        case 0x2e9824u: goto label_2e9824;
        case 0x2e9828u: goto label_2e9828;
        case 0x2e982cu: goto label_2e982c;
        case 0x2e9830u: goto label_2e9830;
        case 0x2e9834u: goto label_2e9834;
        case 0x2e9838u: goto label_2e9838;
        case 0x2e983cu: goto label_2e983c;
        case 0x2e9840u: goto label_2e9840;
        case 0x2e9844u: goto label_2e9844;
        case 0x2e9848u: goto label_2e9848;
        case 0x2e984cu: goto label_2e984c;
        case 0x2e9850u: goto label_2e9850;
        case 0x2e9854u: goto label_2e9854;
        case 0x2e9858u: goto label_2e9858;
        case 0x2e985cu: goto label_2e985c;
        case 0x2e9860u: goto label_2e9860;
        case 0x2e9864u: goto label_2e9864;
        case 0x2e9868u: goto label_2e9868;
        case 0x2e986cu: goto label_2e986c;
        case 0x2e9870u: goto label_2e9870;
        case 0x2e9874u: goto label_2e9874;
        case 0x2e9878u: goto label_2e9878;
        case 0x2e987cu: goto label_2e987c;
        case 0x2e9880u: goto label_2e9880;
        case 0x2e9884u: goto label_2e9884;
        case 0x2e9888u: goto label_2e9888;
        case 0x2e988cu: goto label_2e988c;
        case 0x2e9890u: goto label_2e9890;
        case 0x2e9894u: goto label_2e9894;
        case 0x2e9898u: goto label_2e9898;
        case 0x2e989cu: goto label_2e989c;
        case 0x2e98a0u: goto label_2e98a0;
        case 0x2e98a4u: goto label_2e98a4;
        case 0x2e98a8u: goto label_2e98a8;
        case 0x2e98acu: goto label_2e98ac;
        case 0x2e98b0u: goto label_2e98b0;
        case 0x2e98b4u: goto label_2e98b4;
        case 0x2e98b8u: goto label_2e98b8;
        case 0x2e98bcu: goto label_2e98bc;
        case 0x2e98c0u: goto label_2e98c0;
        case 0x2e98c4u: goto label_2e98c4;
        case 0x2e98c8u: goto label_2e98c8;
        case 0x2e98ccu: goto label_2e98cc;
        case 0x2e98d0u: goto label_2e98d0;
        case 0x2e98d4u: goto label_2e98d4;
        case 0x2e98d8u: goto label_2e98d8;
        case 0x2e98dcu: goto label_2e98dc;
        case 0x2e98e0u: goto label_2e98e0;
        case 0x2e98e4u: goto label_2e98e4;
        case 0x2e98e8u: goto label_2e98e8;
        case 0x2e98ecu: goto label_2e98ec;
        case 0x2e98f0u: goto label_2e98f0;
        case 0x2e98f4u: goto label_2e98f4;
        case 0x2e98f8u: goto label_2e98f8;
        case 0x2e98fcu: goto label_2e98fc;
        case 0x2e9900u: goto label_2e9900;
        case 0x2e9904u: goto label_2e9904;
        case 0x2e9908u: goto label_2e9908;
        case 0x2e990cu: goto label_2e990c;
        case 0x2e9910u: goto label_2e9910;
        case 0x2e9914u: goto label_2e9914;
        case 0x2e9918u: goto label_2e9918;
        case 0x2e991cu: goto label_2e991c;
        case 0x2e9920u: goto label_2e9920;
        case 0x2e9924u: goto label_2e9924;
        case 0x2e9928u: goto label_2e9928;
        case 0x2e992cu: goto label_2e992c;
        case 0x2e9930u: goto label_2e9930;
        case 0x2e9934u: goto label_2e9934;
        case 0x2e9938u: goto label_2e9938;
        case 0x2e993cu: goto label_2e993c;
        case 0x2e9940u: goto label_2e9940;
        case 0x2e9944u: goto label_2e9944;
        case 0x2e9948u: goto label_2e9948;
        case 0x2e994cu: goto label_2e994c;
        case 0x2e9950u: goto label_2e9950;
        case 0x2e9954u: goto label_2e9954;
        case 0x2e9958u: goto label_2e9958;
        case 0x2e995cu: goto label_2e995c;
        case 0x2e9960u: goto label_2e9960;
        case 0x2e9964u: goto label_2e9964;
        case 0x2e9968u: goto label_2e9968;
        case 0x2e996cu: goto label_2e996c;
        case 0x2e9970u: goto label_2e9970;
        case 0x2e9974u: goto label_2e9974;
        case 0x2e9978u: goto label_2e9978;
        case 0x2e997cu: goto label_2e997c;
        case 0x2e9980u: goto label_2e9980;
        case 0x2e9984u: goto label_2e9984;
        case 0x2e9988u: goto label_2e9988;
        case 0x2e998cu: goto label_2e998c;
        case 0x2e9990u: goto label_2e9990;
        case 0x2e9994u: goto label_2e9994;
        case 0x2e9998u: goto label_2e9998;
        case 0x2e999cu: goto label_2e999c;
        case 0x2e99a0u: goto label_2e99a0;
        case 0x2e99a4u: goto label_2e99a4;
        case 0x2e99a8u: goto label_2e99a8;
        case 0x2e99acu: goto label_2e99ac;
        case 0x2e99b0u: goto label_2e99b0;
        case 0x2e99b4u: goto label_2e99b4;
        case 0x2e99b8u: goto label_2e99b8;
        case 0x2e99bcu: goto label_2e99bc;
        case 0x2e99c0u: goto label_2e99c0;
        case 0x2e99c4u: goto label_2e99c4;
        case 0x2e99c8u: goto label_2e99c8;
        case 0x2e99ccu: goto label_2e99cc;
        case 0x2e99d0u: goto label_2e99d0;
        case 0x2e99d4u: goto label_2e99d4;
        case 0x2e99d8u: goto label_2e99d8;
        case 0x2e99dcu: goto label_2e99dc;
        case 0x2e99e0u: goto label_2e99e0;
        case 0x2e99e4u: goto label_2e99e4;
        case 0x2e99e8u: goto label_2e99e8;
        case 0x2e99ecu: goto label_2e99ec;
        case 0x2e99f0u: goto label_2e99f0;
        case 0x2e99f4u: goto label_2e99f4;
        case 0x2e99f8u: goto label_2e99f8;
        case 0x2e99fcu: goto label_2e99fc;
        case 0x2e9a00u: goto label_2e9a00;
        case 0x2e9a04u: goto label_2e9a04;
        case 0x2e9a08u: goto label_2e9a08;
        case 0x2e9a0cu: goto label_2e9a0c;
        case 0x2e9a10u: goto label_2e9a10;
        case 0x2e9a14u: goto label_2e9a14;
        case 0x2e9a18u: goto label_2e9a18;
        case 0x2e9a1cu: goto label_2e9a1c;
        case 0x2e9a20u: goto label_2e9a20;
        case 0x2e9a24u: goto label_2e9a24;
        case 0x2e9a28u: goto label_2e9a28;
        case 0x2e9a2cu: goto label_2e9a2c;
        case 0x2e9a30u: goto label_2e9a30;
        case 0x2e9a34u: goto label_2e9a34;
        case 0x2e9a38u: goto label_2e9a38;
        case 0x2e9a3cu: goto label_2e9a3c;
        case 0x2e9a40u: goto label_2e9a40;
        case 0x2e9a44u: goto label_2e9a44;
        case 0x2e9a48u: goto label_2e9a48;
        case 0x2e9a4cu: goto label_2e9a4c;
        case 0x2e9a50u: goto label_2e9a50;
        case 0x2e9a54u: goto label_2e9a54;
        case 0x2e9a58u: goto label_2e9a58;
        case 0x2e9a5cu: goto label_2e9a5c;
        case 0x2e9a60u: goto label_2e9a60;
        case 0x2e9a64u: goto label_2e9a64;
        case 0x2e9a68u: goto label_2e9a68;
        case 0x2e9a6cu: goto label_2e9a6c;
        case 0x2e9a70u: goto label_2e9a70;
        case 0x2e9a74u: goto label_2e9a74;
        case 0x2e9a78u: goto label_2e9a78;
        case 0x2e9a7cu: goto label_2e9a7c;
        case 0x2e9a80u: goto label_2e9a80;
        case 0x2e9a84u: goto label_2e9a84;
        case 0x2e9a88u: goto label_2e9a88;
        case 0x2e9a8cu: goto label_2e9a8c;
        case 0x2e9a90u: goto label_2e9a90;
        case 0x2e9a94u: goto label_2e9a94;
        case 0x2e9a98u: goto label_2e9a98;
        case 0x2e9a9cu: goto label_2e9a9c;
        case 0x2e9aa0u: goto label_2e9aa0;
        case 0x2e9aa4u: goto label_2e9aa4;
        case 0x2e9aa8u: goto label_2e9aa8;
        case 0x2e9aacu: goto label_2e9aac;
        case 0x2e9ab0u: goto label_2e9ab0;
        case 0x2e9ab4u: goto label_2e9ab4;
        case 0x2e9ab8u: goto label_2e9ab8;
        case 0x2e9abcu: goto label_2e9abc;
        case 0x2e9ac0u: goto label_2e9ac0;
        case 0x2e9ac4u: goto label_2e9ac4;
        case 0x2e9ac8u: goto label_2e9ac8;
        case 0x2e9accu: goto label_2e9acc;
        case 0x2e9ad0u: goto label_2e9ad0;
        case 0x2e9ad4u: goto label_2e9ad4;
        case 0x2e9ad8u: goto label_2e9ad8;
        case 0x2e9adcu: goto label_2e9adc;
        case 0x2e9ae0u: goto label_2e9ae0;
        case 0x2e9ae4u: goto label_2e9ae4;
        case 0x2e9ae8u: goto label_2e9ae8;
        case 0x2e9aecu: goto label_2e9aec;
        case 0x2e9af0u: goto label_2e9af0;
        case 0x2e9af4u: goto label_2e9af4;
        case 0x2e9af8u: goto label_2e9af8;
        case 0x2e9afcu: goto label_2e9afc;
        case 0x2e9b00u: goto label_2e9b00;
        case 0x2e9b04u: goto label_2e9b04;
        case 0x2e9b08u: goto label_2e9b08;
        case 0x2e9b0cu: goto label_2e9b0c;
        case 0x2e9b10u: goto label_2e9b10;
        case 0x2e9b14u: goto label_2e9b14;
        case 0x2e9b18u: goto label_2e9b18;
        case 0x2e9b1cu: goto label_2e9b1c;
        case 0x2e9b20u: goto label_2e9b20;
        case 0x2e9b24u: goto label_2e9b24;
        case 0x2e9b28u: goto label_2e9b28;
        case 0x2e9b2cu: goto label_2e9b2c;
        case 0x2e9b30u: goto label_2e9b30;
        case 0x2e9b34u: goto label_2e9b34;
        case 0x2e9b38u: goto label_2e9b38;
        case 0x2e9b3cu: goto label_2e9b3c;
        case 0x2e9b40u: goto label_2e9b40;
        case 0x2e9b44u: goto label_2e9b44;
        case 0x2e9b48u: goto label_2e9b48;
        case 0x2e9b4cu: goto label_2e9b4c;
        case 0x2e9b50u: goto label_2e9b50;
        case 0x2e9b54u: goto label_2e9b54;
        case 0x2e9b58u: goto label_2e9b58;
        case 0x2e9b5cu: goto label_2e9b5c;
        case 0x2e9b60u: goto label_2e9b60;
        case 0x2e9b64u: goto label_2e9b64;
        case 0x2e9b68u: goto label_2e9b68;
        case 0x2e9b6cu: goto label_2e9b6c;
        case 0x2e9b70u: goto label_2e9b70;
        case 0x2e9b74u: goto label_2e9b74;
        case 0x2e9b78u: goto label_2e9b78;
        case 0x2e9b7cu: goto label_2e9b7c;
        case 0x2e9b80u: goto label_2e9b80;
        case 0x2e9b84u: goto label_2e9b84;
        case 0x2e9b88u: goto label_2e9b88;
        case 0x2e9b8cu: goto label_2e9b8c;
        case 0x2e9b90u: goto label_2e9b90;
        case 0x2e9b94u: goto label_2e9b94;
        case 0x2e9b98u: goto label_2e9b98;
        case 0x2e9b9cu: goto label_2e9b9c;
        case 0x2e9ba0u: goto label_2e9ba0;
        case 0x2e9ba4u: goto label_2e9ba4;
        case 0x2e9ba8u: goto label_2e9ba8;
        case 0x2e9bacu: goto label_2e9bac;
        case 0x2e9bb0u: goto label_2e9bb0;
        case 0x2e9bb4u: goto label_2e9bb4;
        case 0x2e9bb8u: goto label_2e9bb8;
        case 0x2e9bbcu: goto label_2e9bbc;
        case 0x2e9bc0u: goto label_2e9bc0;
        case 0x2e9bc4u: goto label_2e9bc4;
        case 0x2e9bc8u: goto label_2e9bc8;
        case 0x2e9bccu: goto label_2e9bcc;
        case 0x2e9bd0u: goto label_2e9bd0;
        case 0x2e9bd4u: goto label_2e9bd4;
        case 0x2e9bd8u: goto label_2e9bd8;
        case 0x2e9bdcu: goto label_2e9bdc;
        case 0x2e9be0u: goto label_2e9be0;
        case 0x2e9be4u: goto label_2e9be4;
        case 0x2e9be8u: goto label_2e9be8;
        case 0x2e9becu: goto label_2e9bec;
        case 0x2e9bf0u: goto label_2e9bf0;
        case 0x2e9bf4u: goto label_2e9bf4;
        case 0x2e9bf8u: goto label_2e9bf8;
        case 0x2e9bfcu: goto label_2e9bfc;
        case 0x2e9c00u: goto label_2e9c00;
        case 0x2e9c04u: goto label_2e9c04;
        case 0x2e9c08u: goto label_2e9c08;
        case 0x2e9c0cu: goto label_2e9c0c;
        case 0x2e9c10u: goto label_2e9c10;
        case 0x2e9c14u: goto label_2e9c14;
        case 0x2e9c18u: goto label_2e9c18;
        case 0x2e9c1cu: goto label_2e9c1c;
        case 0x2e9c20u: goto label_2e9c20;
        case 0x2e9c24u: goto label_2e9c24;
        case 0x2e9c28u: goto label_2e9c28;
        case 0x2e9c2cu: goto label_2e9c2c;
        case 0x2e9c30u: goto label_2e9c30;
        case 0x2e9c34u: goto label_2e9c34;
        case 0x2e9c38u: goto label_2e9c38;
        case 0x2e9c3cu: goto label_2e9c3c;
        case 0x2e9c40u: goto label_2e9c40;
        case 0x2e9c44u: goto label_2e9c44;
        case 0x2e9c48u: goto label_2e9c48;
        case 0x2e9c4cu: goto label_2e9c4c;
        case 0x2e9c50u: goto label_2e9c50;
        case 0x2e9c54u: goto label_2e9c54;
        case 0x2e9c58u: goto label_2e9c58;
        case 0x2e9c5cu: goto label_2e9c5c;
        default: break;
    }

    ctx->pc = 0x2e8f78u;

label_2e8f78:
    // 0x2e8f78: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e8f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2e8f7c:
    // 0x2e8f7c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2e8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2e8f80:
    // 0x2e8f80: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2e8f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2e8f84:
    // 0x2e8f84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8f88:
    // 0x2e8f88: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2e8f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2e8f8c:
    // 0x2e8f8c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2e8f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2e8f90:
    // 0x2e8f90: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2e8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2e8f94:
    // 0x2e8f94: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2e8f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2e8f98:
    // 0x2e8f98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e8f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2e8f9c:
    // 0x2e8f9c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2e8f9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2e8fa0:
    // 0x2e8fa0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2e8fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2e8fa4:
    // 0x2e8fa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8fa8:
    // 0x2e8fa8: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2e8fa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2e8fac:
    // 0x2e8fac: 0x1c400320  bgtz        $v0, . + 4 + (0x320 << 2)
label_2e8fb0:
    if (ctx->pc == 0x2E8FB0u) {
        ctx->pc = 0x2E8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FACu;
        // 0x2e8fb0: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FB4u;
        goto label_2e8fb4;
    }
    ctx->pc = 0x2E8FACu;
    {
        const bool branch_taken_0x2e8fac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FACu;
        // 0x2e8fb0: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fac) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E8FB4u;
label_2e8fb4:
    // 0x2e8fb4: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2e8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2e8fb8:
    // 0x2e8fb8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2e8fbc:
    if (ctx->pc == 0x2E8FBCu) {
        ctx->pc = 0x2E8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FB8u;
        // 0x2e8fbc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FC0u;
        goto label_2e8fc0;
    }
    ctx->pc = 0x2E8FB8u;
    {
        const bool branch_taken_0x2e8fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8fb8) {
            ctx->pc = 0x2E8FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FB8u;
            // 0x2e8fbc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8FECu;
            goto label_2e8fec;
        }
    }
    ctx->pc = 0x2E8FC0u;
label_2e8fc0:
    // 0x2e8fc0: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2e8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
label_2e8fc4:
    // 0x2e8fc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e8fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e8fc8:
    // 0x2e8fc8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2e8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2e8fcc:
    // 0x2e8fcc: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_2e8fd0:
    if (ctx->pc == 0x2E8FD0u) {
        ctx->pc = 0x2E8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FCCu;
        // 0x2e8fd0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FD4u;
        goto label_2e8fd4;
    }
    ctx->pc = 0x2E8FCCu;
    {
        const bool branch_taken_0x2e8fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8fcc) {
            ctx->pc = 0x2E8FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FCCu;
            // 0x2e8fd0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8FECu;
            goto label_2e8fec;
        }
    }
    ctx->pc = 0x2E8FD4u;
label_2e8fd4:
    // 0x2e8fd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e8fd8:
    // 0x2e8fd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e8fdc:
    // 0x2e8fdc: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2e8fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e8fe0:
    // 0x2e8fe0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2e8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2e8fe4:
    // 0x2e8fe4: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x2e8fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_2e8fe8:
    // 0x2e8fe8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2e8fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8fec:
    // 0x2e8fec: 0xc0e409a  jal         func_390268
label_2e8ff0:
    if (ctx->pc == 0x2E8FF0u) {
        ctx->pc = 0x2E8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FECu;
        // 0x2e8ff0: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8FF4u;
        goto label_2e8ff4;
    }
    ctx->pc = 0x2E8FECu;
    SET_GPR_U32(ctx, 31, 0x2E8FF4u);
    ctx->pc = 0x2E8FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FECu;
    // 0x2e8ff0: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E8FECu, 0x2E8FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FF4u;
label_2e8ff4:
    // 0x2e8ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ff8:
    // 0x2e8ff8: 0xc0a34d6  jal         func_28D358
label_2e8ffc:
    if (ctx->pc == 0x2E8FFCu) {
        ctx->pc = 0x2E8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FF8u;
        // 0x2e8ffc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9000u;
        goto label_2e9000;
    }
    ctx->pc = 0x2E8FF8u;
    SET_GPR_U32(ctx, 31, 0x2E9000u);
    ctx->pc = 0x2E8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FF8u;
    // 0x2e8ffc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2E8FF8u, 0x2E9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9000u;
label_2e9000:
    // 0x2e9000: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2e9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2e9004:
    // 0x2e9004: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
label_2e9008:
    if (ctx->pc == 0x2E9008u) {
        ctx->pc = 0x2E9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9004u;
        // 0x2e9008: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E900Cu;
        goto label_2e900c;
    }
    ctx->pc = 0x2E9004u;
    {
        const bool branch_taken_0x2e9004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9004u;
        // 0x2e9008: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9004) {
            ctx->pc = 0x2E9120u;
            goto label_2e9120;
        }
    }
    ctx->pc = 0x2E900Cu;
label_2e900c:
    // 0x2e900c: 0x9230003f  lbu         $s0, 0x3F($s1)
    ctx->pc = 0x2e900cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
label_2e9010:
    // 0x2e9010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9014:
    // 0x2e9014: 0x16020040  bne         $s0, $v0, . + 4 + (0x40 << 2)
label_2e9018:
    if (ctx->pc == 0x2E9018u) {
        ctx->pc = 0x2E9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9014u;
        // 0x2e9018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E901Cu;
        goto label_2e901c;
    }
    ctx->pc = 0x2E9014u;
    {
        const bool branch_taken_0x2e9014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9014u;
        // 0x2e9018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9014) {
            ctx->pc = 0x2E9118u;
            goto label_2e9118;
        }
    }
    ctx->pc = 0x2E901Cu;
label_2e901c:
    // 0x2e901c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e901cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2e9020:
    // 0x2e9020: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9024:
    // 0x2e9024: 0xc089998  jal         func_226660
label_2e9028:
    if (ctx->pc == 0x2E9028u) {
        ctx->pc = 0x2E9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9024u;
        // 0x2e9028: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E902Cu;
        goto label_2e902c;
    }
    ctx->pc = 0x2E9024u;
    SET_GPR_U32(ctx, 31, 0x2E902Cu);
    ctx->pc = 0x2E9028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9024u;
    // 0x2e9028: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E9024u, 0x2E902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E902Cu;
label_2e902c:
    // 0x2e902c: 0x14400301  bnez        $v0, . + 4 + (0x301 << 2)
label_2e9030:
    if (ctx->pc == 0x2E9030u) {
        ctx->pc = 0x2E9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E902Cu;
        // 0x2e9030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9034u;
        goto label_2e9034;
    }
    ctx->pc = 0x2E902Cu;
    {
        const bool branch_taken_0x2e902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E902Cu;
        // 0x2e9030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e902c) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9034u;
label_2e9034:
    // 0x2e9034: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x2e9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2e9038:
    // 0x2e9038: 0x2442ff89  addiu       $v0, $v0, -0x77
    ctx->pc = 0x2e9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967177));
label_2e903c:
    // 0x2e903c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e903cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e9040:
    // 0x2e9040: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2e9044:
    if (ctx->pc == 0x2E9044u) {
        ctx->pc = 0x2E9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9040u;
        // 0x2e9044: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9048u;
        goto label_2e9048;
    }
    ctx->pc = 0x2E9040u;
    {
        const bool branch_taken_0x2e9040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9040u;
        // 0x2e9044: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9040) {
            ctx->pc = 0x2E9088u;
            goto label_2e9088;
        }
    }
    ctx->pc = 0x2E9048u;
label_2e9048:
    // 0x2e9048: 0x8e6503b0  lw          $a1, 0x3B0($s3)
    ctx->pc = 0x2e9048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
label_2e904c:
    // 0x2e904c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x2e904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2e9050:
    // 0x2e9050: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2e9050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2e9054:
    // 0x2e9054: 0xc04442a  jal         func_1110A8
label_2e9058:
    if (ctx->pc == 0x2E9058u) {
        ctx->pc = 0x2E9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9054u;
        // 0x2e9058: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E905Cu;
        goto label_2e905c;
    }
    ctx->pc = 0x2E9054u;
    SET_GPR_U32(ctx, 31, 0x2E905Cu);
    ctx->pc = 0x2E9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9054u;
    // 0x2e9058: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110A8u, 0x2E9054u, 0x2E905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E905Cu;
label_2e905c:
    // 0x2e905c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2e9060:
    if (ctx->pc == 0x2E9060u) {
        ctx->pc = 0x2E9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E905Cu;
        // 0x2e9060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9064u;
        goto label_2e9064;
    }
    ctx->pc = 0x2E905Cu;
    {
        const bool branch_taken_0x2e905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E905Cu;
        // 0x2e9060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e905c) {
            ctx->pc = 0x2E90C0u;
            goto label_2e90c0;
        }
    }
    ctx->pc = 0x2E9064u;
label_2e9064:
    // 0x2e9064: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e9064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e9068:
    // 0x2e9068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e906c:
    // 0x2e906c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e906cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9070:
    // 0x2e9070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9074:
    // 0x2e9074: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9078:
    // 0x2e9078: 0xc0879a6  jal         func_21E698
label_2e907c:
    if (ctx->pc == 0x2E907Cu) {
        ctx->pc = 0x2E907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9078u;
        // 0x2e907c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9080u;
        goto label_2e9080;
    }
    ctx->pc = 0x2E9078u;
    SET_GPR_U32(ctx, 31, 0x2E9080u);
    ctx->pc = 0x2E907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9078u;
    // 0x2e907c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x2E9078u, 0x2E9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9080u;
label_2e9080:
    // 0x2e9080: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e9084:
    if (ctx->pc == 0x2E9084u) {
        ctx->pc = 0x2E9088u;
        goto label_2e9088;
    }
    ctx->pc = 0x2E9080u;
    {
        const bool branch_taken_0x2e9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9080) {
            ctx->pc = 0x2E90C0u;
            goto label_2e90c0;
        }
    }
    ctx->pc = 0x2E9088u;
label_2e9088:
    // 0x2e9088: 0xc0a47b4  jal         func_291ED0
label_2e908c:
    if (ctx->pc == 0x2E908Cu) {
        ctx->pc = 0x2E908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9088u;
        // 0x2e908c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9090u;
        goto label_2e9090;
    }
    ctx->pc = 0x2E9088u;
    SET_GPR_U32(ctx, 31, 0x2E9090u);
    ctx->pc = 0x2E908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9088u;
    // 0x2e908c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2E9088u, 0x2E9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9090u;
label_2e9090:
    // 0x2e9090: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2e9094:
    if (ctx->pc == 0x2E9094u) {
        ctx->pc = 0x2E9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9090u;
        // 0x2e9094: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9098u;
        goto label_2e9098;
    }
    ctx->pc = 0x2E9090u;
    {
        const bool branch_taken_0x2e9090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9090u;
        // 0x2e9094: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9090) {
            ctx->pc = 0x2E90C0u;
            goto label_2e90c0;
        }
    }
    ctx->pc = 0x2E9098u;
label_2e9098:
    // 0x2e9098: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e9098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e909c:
    // 0x2e909c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e909cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e90a0:
    // 0x2e90a0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e90a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e90a4:
    // 0x2e90a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e90a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e90a8:
    // 0x2e90a8: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x2e90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2e90ac:
    // 0x2e90ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e90acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e90b0:
    // 0x2e90b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e90b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e90b4:
    // 0x2e90b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e90b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e90b8:
    // 0x2e90b8: 0xc088178  jal         func_2205E0
label_2e90bc:
    if (ctx->pc == 0x2E90BCu) {
        ctx->pc = 0x2E90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90B8u;
        // 0x2e90bc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90C0u;
        goto label_2e90c0;
    }
    ctx->pc = 0x2E90B8u;
    SET_GPR_U32(ctx, 31, 0x2E90C0u);
    ctx->pc = 0x2E90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90B8u;
    // 0x2e90bc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E90B8u, 0x2E90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90C0u;
label_2e90c0:
    // 0x2e90c0: 0xc0a367c  jal         func_28D9F0
label_2e90c4:
    if (ctx->pc == 0x2E90C4u) {
        ctx->pc = 0x2E90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90C0u;
        // 0x2e90c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90C8u;
        goto label_2e90c8;
    }
    ctx->pc = 0x2E90C0u;
    SET_GPR_U32(ctx, 31, 0x2E90C8u);
    ctx->pc = 0x2E90C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90C0u;
    // 0x2e90c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E90C0u, 0x2E90C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90C8u;
label_2e90c8:
    // 0x2e90c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e90c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e90cc:
    // 0x2e90cc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2e90d0:
    if (ctx->pc == 0x2E90D0u) {
        ctx->pc = 0x2E90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90CCu;
        // 0x2e90d0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90D4u;
        goto label_2e90d4;
    }
    ctx->pc = 0x2E90CCu;
    {
        const bool branch_taken_0x2e90cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90CCu;
        // 0x2e90d0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90cc) {
            ctx->pc = 0x2E9114u;
            goto label_2e9114;
        }
    }
    ctx->pc = 0x2E90D4u;
label_2e90d4:
    // 0x2e90d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e90d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e90d8:
    // 0x2e90d8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e90dc:
    // 0x2e90dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e90dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e90e0:
    // 0x2e90e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e90e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e90e4:
    // 0x2e90e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e90e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e90e8:
    // 0x2e90e8: 0xc0cd4fc  jal         func_3353F0
label_2e90ec:
    if (ctx->pc == 0x2E90ECu) {
        ctx->pc = 0x2E90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90E8u;
        // 0x2e90ec: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E90F0u;
        goto label_2e90f0;
    }
    ctx->pc = 0x2E90E8u;
    SET_GPR_U32(ctx, 31, 0x2E90F0u);
    ctx->pc = 0x2E90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90E8u;
    // 0x2e90ec: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E90E8u, 0x2E90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90F0u;
label_2e90f0:
    // 0x2e90f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e90f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e90f4:
    // 0x2e90f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e90f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e90f8:
    // 0x2e90f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e90f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2e90fc:
    // 0x2e90fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e90fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9100:
    // 0x2e9100: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2e9100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2e9104:
    // 0x2e9104: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e9104u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e9108:
    // 0x2e9108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e9108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e910c:
    // 0x2e910c: 0xc0be968  jal         func_2FA5A0
label_2e9110:
    if (ctx->pc == 0x2E9110u) {
        ctx->pc = 0x2E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E910Cu;
        // 0x2e9110: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9114u;
        goto label_2e9114;
    }
    ctx->pc = 0x2E910Cu;
    SET_GPR_U32(ctx, 31, 0x2E9114u);
    ctx->pc = 0x2E9110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E910Cu;
    // 0x2e9110: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2E910Cu, 0x2E9114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9114u;
label_2e9114:
    // 0x2e9114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9118:
    // 0x2e9118: 0x100002c5  b           . + 4 + (0x2C5 << 2)
label_2e911c:
    if (ctx->pc == 0x2E911Cu) {
        ctx->pc = 0x2E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9118u;
        // 0x2e911c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9120u;
        goto label_2e9120;
    }
    ctx->pc = 0x2E9118u;
    {
        const bool branch_taken_0x2e9118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9118u;
        // 0x2e911c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9118) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E9120u;
label_2e9120:
    // 0x2e9120: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2e9120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9124:
    // 0x2e9124: 0x14740108  bne         $v1, $s4, . + 4 + (0x108 << 2)
label_2e9128:
    if (ctx->pc == 0x2E9128u) {
        ctx->pc = 0x2E9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9124u;
        // 0x2e9128: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E912Cu;
        goto label_2e912c;
    }
    ctx->pc = 0x2E9124u;
    {
        const bool branch_taken_0x2e9124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2E9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9124u;
        // 0x2e9128: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9124) {
            ctx->pc = 0x2E9548u;
            goto label_2e9548;
        }
    }
    ctx->pc = 0x2E912Cu;
label_2e912c:
    // 0x2e912c: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2e912cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2e9130:
    // 0x2e9130: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2e9130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2e9134:
    // 0x2e9134: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2e9134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2e9138:
    // 0x2e9138: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e913c:
    // 0x2e913c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e913cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e9140:
    // 0x2e9140: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e9140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2e9144:
    // 0x2e9144: 0xc08a158  jal         func_228560
label_2e9148:
    if (ctx->pc == 0x2E9148u) {
        ctx->pc = 0x2E9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9144u;
        // 0x2e9148: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E914Cu;
        goto label_2e914c;
    }
    ctx->pc = 0x2E9144u;
    SET_GPR_U32(ctx, 31, 0x2E914Cu);
    ctx->pc = 0x2E9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9144u;
    // 0x2e9148: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2E9144u, 0x2E914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E914Cu;
label_2e914c:
    // 0x2e914c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e9150:
    if (ctx->pc == 0x2E9150u) {
        ctx->pc = 0x2E9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E914Cu;
        // 0x2e9150: 0xa2200046  sb          $zero, 0x46($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9154u;
        goto label_2e9154;
    }
    ctx->pc = 0x2E914Cu;
    {
        const bool branch_taken_0x2e914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e914c) {
            ctx->pc = 0x2E9150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E914Cu;
            // 0x2e9150: 0xa2200046  sb          $zero, 0x46($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9154u;
            goto label_2e9154;
        }
    }
    ctx->pc = 0x2E9154u;
label_2e9154:
    // 0x2e9154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9158:
    // 0x2e9158: 0xc088fa8  jal         func_223EA0
label_2e915c:
    if (ctx->pc == 0x2E915Cu) {
        ctx->pc = 0x2E915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9158u;
        // 0x2e915c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9160u;
        goto label_2e9160;
    }
    ctx->pc = 0x2E9158u;
    SET_GPR_U32(ctx, 31, 0x2E9160u);
    ctx->pc = 0x2E915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9158u;
    // 0x2e915c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2E9158u, 0x2E9160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9160u;
label_2e9160:
    // 0x2e9160: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e9160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9164:
    // 0x2e9164: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
label_2e9168:
    if (ctx->pc == 0x2E9168u) {
        ctx->pc = 0x2E9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9164u;
        // 0x2e9168: 0x86650092  lh          $a1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E916Cu;
        goto label_2e916c;
    }
    ctx->pc = 0x2E9164u;
    {
        const bool branch_taken_0x2e9164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e9164) {
            ctx->pc = 0x2E9168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9164u;
            // 0x2e9168: 0x86650092  lh          $a1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9180u;
            goto label_2e9180;
        }
    }
    ctx->pc = 0x2E916Cu;
label_2e916c:
    // 0x2e916c: 0xc089000  jal         func_224000
label_2e9170:
    if (ctx->pc == 0x2E9170u) {
        ctx->pc = 0x2E9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E916Cu;
        // 0x2e9170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9174u;
        goto label_2e9174;
    }
    ctx->pc = 0x2E916Cu;
    SET_GPR_U32(ctx, 31, 0x2E9174u);
    ctx->pc = 0x2E9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E916Cu;
    // 0x2e9170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2E916Cu, 0x2E9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9174u;
label_2e9174:
    // 0x2e9174: 0x1450002a  bne         $v0, $s0, . + 4 + (0x2A << 2)
label_2e9178:
    if (ctx->pc == 0x2E9178u) {
        ctx->pc = 0x2E917Cu;
        goto label_2e917c;
    }
    ctx->pc = 0x2E9174u;
    {
        const bool branch_taken_0x2e9174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e9174) {
            ctx->pc = 0x2E9220u;
            goto label_2e9220;
        }
    }
    ctx->pc = 0x2E917Cu;
label_2e917c:
    // 0x2e917c: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2e917cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e9180:
    // 0x2e9180: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e9180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e9184:
    // 0x2e9184: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9188:
    // 0x2e9188: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2e9188u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e918c:
    // 0x2e918c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e918cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e9190:
    // 0x2e9190: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e9190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2e9194:
    // 0x2e9194: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2e9194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
label_2e9198:
    // 0x2e9198: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2e9198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2e919c:
    // 0x2e919c: 0xc136d6c  jal         func_4DB5B0
label_2e91a0:
    if (ctx->pc == 0x2E91A0u) {
        ctx->pc = 0x2E91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E919Cu;
        // 0x2e91a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91A4u;
        goto label_2e91a4;
    }
    ctx->pc = 0x2E919Cu;
    SET_GPR_U32(ctx, 31, 0x2E91A4u);
    ctx->pc = 0x2E91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E919Cu;
    // 0x2e91a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2E919Cu, 0x2E91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91A4u;
label_2e91a4:
    // 0x2e91a4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2e91a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_2e91a8:
    // 0x2e91a8: 0xc0e409a  jal         func_390268
label_2e91ac:
    if (ctx->pc == 0x2E91ACu) {
        ctx->pc = 0x2E91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91A8u;
        // 0x2e91ac: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91B0u;
        goto label_2e91b0;
    }
    ctx->pc = 0x2E91A8u;
    SET_GPR_U32(ctx, 31, 0x2E91B0u);
    ctx->pc = 0x2E91ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91A8u;
    // 0x2e91ac: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E91A8u, 0x2E91B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91B0u;
label_2e91b0:
    // 0x2e91b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e91b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e91b4:
    // 0x2e91b4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2e91b8:
    if (ctx->pc == 0x2E91B8u) {
        ctx->pc = 0x2E91BCu;
        goto label_2e91bc;
    }
    ctx->pc = 0x2E91B4u;
    {
        const bool branch_taken_0x2e91b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e91b4) {
            ctx->pc = 0x2E9220u;
            goto label_2e9220;
        }
    }
    ctx->pc = 0x2E91BCu;
label_2e91bc:
    // 0x2e91bc: 0xc0a367c  jal         func_28D9F0
label_2e91c0:
    if (ctx->pc == 0x2E91C0u) {
        ctx->pc = 0x2E91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91BCu;
        // 0x2e91c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91C4u;
        goto label_2e91c4;
    }
    ctx->pc = 0x2E91BCu;
    SET_GPR_U32(ctx, 31, 0x2E91C4u);
    ctx->pc = 0x2E91C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91BCu;
    // 0x2e91c0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E91BCu, 0x2E91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91C4u;
label_2e91c4:
    // 0x2e91c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e91c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e91c8:
    // 0x2e91c8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_2e91cc:
    if (ctx->pc == 0x2E91CCu) {
        ctx->pc = 0x2E91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91C8u;
        // 0x2e91cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91D0u;
        goto label_2e91d0;
    }
    ctx->pc = 0x2E91C8u;
    {
        const bool branch_taken_0x2e91c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91C8u;
        // 0x2e91cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91c8) {
            ctx->pc = 0x2E91F8u;
            goto label_2e91f8;
        }
    }
    ctx->pc = 0x2E91D0u;
label_2e91d0:
    // 0x2e91d0: 0x86100092  lh          $s0, 0x92($s0)
    ctx->pc = 0x2e91d0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2e91d4:
    // 0x2e91d4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e91d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2e91d8:
    // 0x2e91d8: 0xc0884f6  jal         func_2213D8
label_2e91dc:
    if (ctx->pc == 0x2E91DCu) {
        ctx->pc = 0x2E91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91D8u;
        // 0x2e91dc: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91E0u;
        goto label_2e91e0;
    }
    ctx->pc = 0x2E91D8u;
    SET_GPR_U32(ctx, 31, 0x2E91E0u);
    ctx->pc = 0x2E91DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91D8u;
    // 0x2e91dc: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E91D8u, 0x2E91E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91E0u;
label_2e91e0:
    // 0x2e91e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e91e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e91e4:
    // 0x2e91e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e91e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e91e8:
    // 0x2e91e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e91e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e91ec:
    // 0x2e91ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e91ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e91f0:
    // 0x2e91f0: 0xc0bf800  jal         func_2FE000
label_2e91f4:
    if (ctx->pc == 0x2E91F4u) {
        ctx->pc = 0x2E91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91F0u;
        // 0x2e91f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91F8u;
        goto label_2e91f8;
    }
    ctx->pc = 0x2E91F0u;
    SET_GPR_U32(ctx, 31, 0x2E91F8u);
    ctx->pc = 0x2E91F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91F0u;
    // 0x2e91f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E91F0u, 0x2E91F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91F8u;
label_2e91f8:
    // 0x2e91f8: 0xc0a367c  jal         func_28D9F0
label_2e91fc:
    if (ctx->pc == 0x2E91FCu) {
        ctx->pc = 0x2E91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91F8u;
        // 0x2e91fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9200u;
        goto label_2e9200;
    }
    ctx->pc = 0x2E91F8u;
    SET_GPR_U32(ctx, 31, 0x2E9200u);
    ctx->pc = 0x2E91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91F8u;
    // 0x2e91fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E91F8u, 0x2E9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9200u;
label_2e9200:
    // 0x2e9200: 0x1040028b  beqz        $v0, . + 4 + (0x28B << 2)
label_2e9204:
    if (ctx->pc == 0x2E9204u) {
        ctx->pc = 0x2E9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9200u;
        // 0x2e9204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9208u;
        goto label_2e9208;
    }
    ctx->pc = 0x2E9200u;
    {
        const bool branch_taken_0x2e9200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9200u;
        // 0x2e9204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9200) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E9208u;
label_2e9208:
    // 0x2e9208: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e920c:
    // 0x2e920c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e920cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e9210:
    // 0x2e9210: 0xc0bebac  jal         func_2FAEB0
label_2e9214:
    if (ctx->pc == 0x2E9214u) {
        ctx->pc = 0x2E9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9210u;
        // 0x2e9214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9218u;
        goto label_2e9218;
    }
    ctx->pc = 0x2E9210u;
    SET_GPR_U32(ctx, 31, 0x2E9218u);
    ctx->pc = 0x2E9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9210u;
    // 0x2e9214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2E9210u, 0x2E9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9218u;
label_2e9218:
    // 0x2e9218: 0x10000286  b           . + 4 + (0x286 << 2)
label_2e921c:
    if (ctx->pc == 0x2E921Cu) {
        ctx->pc = 0x2E921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9218u;
        // 0x2e921c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9220u;
        goto label_2e9220;
    }
    ctx->pc = 0x2E9218u;
    {
        const bool branch_taken_0x2e9218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9218u;
        // 0x2e921c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9218) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9220u;
label_2e9220:
    // 0x2e9220: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_2e9224:
    if (ctx->pc == 0x2E9224u) {
        ctx->pc = 0x2E9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9220u;
        // 0x2e9224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9228u;
        goto label_2e9228;
    }
    ctx->pc = 0x2E9220u;
    {
        const bool branch_taken_0x2e9220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9220u;
        // 0x2e9224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9220) {
            ctx->pc = 0x2E9288u;
            goto label_2e9288;
        }
    }
    ctx->pc = 0x2E9228u;
label_2e9228:
    // 0x2e9228: 0x92300044  lbu         $s0, 0x44($s1)
    ctx->pc = 0x2e9228u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
label_2e922c:
    // 0x2e922c: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_2e9230:
    if (ctx->pc == 0x2E9230u) {
        ctx->pc = 0x2E9234u;
        goto label_2e9234;
    }
    ctx->pc = 0x2E922Cu;
    {
        const bool branch_taken_0x2e922c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e922c) {
            ctx->pc = 0x2E9268u;
            goto label_2e9268;
        }
    }
    ctx->pc = 0x2E9234u;
label_2e9234:
    // 0x2e9234: 0xc088ed2  jal         func_223B48
label_2e9238:
    if (ctx->pc == 0x2E9238u) {
        ctx->pc = 0x2E9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9234u;
        // 0x2e9238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E923Cu;
        goto label_2e923c;
    }
    ctx->pc = 0x2E9234u;
    SET_GPR_U32(ctx, 31, 0x2E923Cu);
    ctx->pc = 0x2E9238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9234u;
    // 0x2e9238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2E9234u, 0x2E923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E923Cu;
label_2e923c:
    // 0x2e923c: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
label_2e9240:
    if (ctx->pc == 0x2E9240u) {
        ctx->pc = 0x2E9244u;
        goto label_2e9244;
    }
    ctx->pc = 0x2E923Cu;
    {
        const bool branch_taken_0x2e923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e923c) {
            ctx->pc = 0x2E9268u;
            goto label_2e9268;
        }
    }
    ctx->pc = 0x2E9244u;
label_2e9244:
    // 0x2e9244: 0xc087502  jal         func_21D408
label_2e9248:
    if (ctx->pc == 0x2E9248u) {
        ctx->pc = 0x2E9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9244u;
        // 0x2e9248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E924Cu;
        goto label_2e924c;
    }
    ctx->pc = 0x2E9244u;
    SET_GPR_U32(ctx, 31, 0x2E924Cu);
    ctx->pc = 0x2E9248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9244u;
    // 0x2e9248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E9244u, 0x2E924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E924Cu;
label_2e924c:
    // 0x2e924c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e924cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9250:
    // 0x2e9250: 0xc0a445e  jal         func_291178
label_2e9254:
    if (ctx->pc == 0x2E9254u) {
        ctx->pc = 0x2E9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9250u;
        // 0x2e9254: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9258u;
        goto label_2e9258;
    }
    ctx->pc = 0x2E9250u;
    SET_GPR_U32(ctx, 31, 0x2E9258u);
    ctx->pc = 0x2E9254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9250u;
    // 0x2e9254: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2E9250u, 0x2E9258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9258u;
label_2e9258:
    // 0x2e9258: 0xc0ba3ce  jal         func_2E8F38
label_2e925c:
    if (ctx->pc == 0x2E925Cu) {
        ctx->pc = 0x2E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9258u;
        // 0x2e925c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9260u;
        goto label_2e9260;
    }
    ctx->pc = 0x2E9258u;
    SET_GPR_U32(ctx, 31, 0x2E9260u);
    ctx->pc = 0x2E925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9258u;
    // 0x2e925c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8F38u, 0x2E9258u, 0x2E9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9260u;
label_2e9260:
    // 0x2e9260: 0x10000274  b           . + 4 + (0x274 << 2)
label_2e9264:
    if (ctx->pc == 0x2E9264u) {
        ctx->pc = 0x2E9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9260u;
        // 0x2e9264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9268u;
        goto label_2e9268;
    }
    ctx->pc = 0x2E9260u;
    {
        const bool branch_taken_0x2e9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9260u;
        // 0x2e9264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9260) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9268u;
label_2e9268:
    // 0x2e9268: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2e926c:
    if (ctx->pc == 0x2E926Cu) {
        ctx->pc = 0x2E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9268u;
        // 0x2e926c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9270u;
        goto label_2e9270;
    }
    ctx->pc = 0x2E9268u;
    {
        const bool branch_taken_0x2e9268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9268u;
        // 0x2e926c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9268) {
            ctx->pc = 0x2E9288u;
            goto label_2e9288;
        }
    }
    ctx->pc = 0x2E9270u;
label_2e9270:
    // 0x2e9270: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2e9270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2e9274:
    // 0x2e9274: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2e9274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2e9278:
    // 0x2e9278: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2e9278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2e927c:
    // 0x2e927c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2e927cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2e9280:
    // 0x2e9280: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2e9284:
    if (ctx->pc == 0x2E9284u) {
        ctx->pc = 0x2E9288u;
        goto label_2e9288;
    }
    ctx->pc = 0x2E9280u;
    {
        const bool branch_taken_0x2e9280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9280) {
            ctx->pc = 0x2E92ACu;
            goto label_2e92ac;
        }
    }
    ctx->pc = 0x2E9288u;
label_2e9288:
    // 0x2e9288: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e928c:
    // 0x2e928c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9290:
    // 0x2e9290: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2e9290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e9294:
    // 0x2e9294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9298:
    // 0x2e9298: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2e9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2e929c:
    // 0x2e929c: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2e929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_2e92a0:
    // 0x2e92a0: 0xc0a7c8c  jal         func_29F230
label_2e92a4:
    if (ctx->pc == 0x2E92A4u) {
        ctx->pc = 0x2E92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92A0u;
        // 0x2e92a4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92A8u;
        goto label_2e92a8;
    }
    ctx->pc = 0x2E92A0u;
    SET_GPR_U32(ctx, 31, 0x2E92A8u);
    ctx->pc = 0x2E92A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92A0u;
    // 0x2e92a4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2E92A0u, 0x2E92A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92A8u;
label_2e92a8:
    // 0x2e92a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e92a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e92ac:
    // 0x2e92ac: 0x1240ffea  beqz        $s2, . + 4 + (-0x16 << 2)
label_2e92b0:
    if (ctx->pc == 0x2E92B0u) {
        ctx->pc = 0x2E92B4u;
        goto label_2e92b4;
    }
    ctx->pc = 0x2E92ACu;
    {
        const bool branch_taken_0x2e92ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92ac) {
            ctx->pc = 0x2E9258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9258;
        }
    }
    ctx->pc = 0x2E92B4u;
label_2e92b4:
    // 0x2e92b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e92b8:
    // 0x2e92b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e92b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e92bc:
    // 0x2e92bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e92c0:
    // 0x2e92c0: 0x40f809  jalr        $v0
label_2e92c4:
    if (ctx->pc == 0x2E92C4u) {
        ctx->pc = 0x2E92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92C0u;
        // 0x2e92c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92C8u;
        goto label_2e92c8;
    }
    ctx->pc = 0x2E92C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E92C8u);
        ctx->pc = 0x2E92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92C0u;
        // 0x2e92c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E92C0u, 0x2E92C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E92C8u;
label_2e92c8:
    // 0x2e92c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e92c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e92cc:
    // 0x2e92cc: 0xc087502  jal         func_21D408
label_2e92d0:
    if (ctx->pc == 0x2E92D0u) {
        ctx->pc = 0x2E92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92CCu;
        // 0x2e92d0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92D4u;
        goto label_2e92d4;
    }
    ctx->pc = 0x2E92CCu;
    SET_GPR_U32(ctx, 31, 0x2E92D4u);
    ctx->pc = 0x2E92D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92CCu;
    // 0x2e92d0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E92CCu, 0x2E92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92D4u;
label_2e92d4:
    // 0x2e92d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e92d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e92d8:
    // 0x2e92d8: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2e92d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e92dc:
    // 0x2e92dc: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2e92dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2e92e0:
    // 0x2e92e0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e92e4:
    // 0x2e92e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e92e8:
    // 0x2e92e8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e92ec:
    // 0x2e92ec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e92ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e92f0:
    // 0x2e92f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e92f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e92f4:
    // 0x2e92f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2e92f8:
    // 0x2e92f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e92f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2e92fc:
    // 0x2e92fc: 0xc0cdb38  jal         func_336CE0
label_2e9300:
    if (ctx->pc == 0x2E9300u) {
        ctx->pc = 0x2E9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92FCu;
        // 0x2e9300: 0xc4740140  lwc1        $f20, 0x140($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9304u;
        goto label_2e9304;
    }
    ctx->pc = 0x2E92FCu;
    SET_GPR_U32(ctx, 31, 0x2E9304u);
    ctx->pc = 0x2E9300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92FCu;
    // 0x2e9300: 0xc4740140  lwc1        $f20, 0x140($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E92FCu, 0x2E9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9304u;
label_2e9304:
    // 0x2e9304: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e9304u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2e9308:
    // 0x2e9308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e930c:
    // 0x2e930c: 0xc0a3792  jal         func_28DE48
label_2e9310:
    if (ctx->pc == 0x2E9310u) {
        ctx->pc = 0x2E9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E930Cu;
        // 0x2e9310: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9314u;
        goto label_2e9314;
    }
    ctx->pc = 0x2E930Cu;
    SET_GPR_U32(ctx, 31, 0x2E9314u);
    ctx->pc = 0x2E9310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E930Cu;
    // 0x2e9310: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2E930Cu, 0x2E9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9314u;
label_2e9314:
    // 0x2e9314: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
label_2e9318:
    if (ctx->pc == 0x2E9318u) {
        ctx->pc = 0x2E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9314u;
        // 0x2e9318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E931Cu;
        goto label_2e931c;
    }
    ctx->pc = 0x2E9314u;
    {
        const bool branch_taken_0x2e9314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9314u;
        // 0x2e9318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9314) {
            ctx->pc = 0x2E9250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9250;
        }
    }
    ctx->pc = 0x2E931Cu;
label_2e931c:
    // 0x2e931c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2e931cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2e9320:
    // 0x2e9320: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2e9320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e9324:
    // 0x2e9324: 0x0  nop
    ctx->pc = 0x2e9324u;
    // NOP
label_2e9328:
    // 0x2e9328: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_2e932c:
    if (ctx->pc == 0x2E932Cu) {
        ctx->pc = 0x2E932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9328u;
        // 0x2e932c: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9330u;
        goto label_2e9330;
    }
    ctx->pc = 0x2E9328u;
    {
        const bool branch_taken_0x2e9328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9328) {
            ctx->pc = 0x2E932Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9328u;
            // 0x2e932c: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9360u;
            goto label_2e9360;
        }
    }
    ctx->pc = 0x2E9330u;
label_2e9330:
    // 0x2e9330: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x2e9330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2e9334:
    // 0x2e9334: 0x38420078  xori        $v0, $v0, 0x78
    ctx->pc = 0x2e9334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)120);
label_2e9338:
    // 0x2e9338: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e933c:
    if (ctx->pc == 0x2E933Cu) {
        ctx->pc = 0x2E933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9338u;
        // 0x2e933c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9340u;
        goto label_2e9340;
    }
    ctx->pc = 0x2E9338u;
    {
        const bool branch_taken_0x2e9338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9338u;
        // 0x2e933c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9338) {
            ctx->pc = 0x2E9350u;
            goto label_2e9350;
        }
    }
    ctx->pc = 0x2E9340u;
label_2e9340:
    // 0x2e9340: 0x9222003f  lbu         $v0, 0x3F($s1)
    ctx->pc = 0x2e9340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
label_2e9344:
    // 0x2e9344: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2e9344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2e9348:
    // 0x2e9348: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e934c:
    if (ctx->pc == 0x2E934Cu) {
        ctx->pc = 0x2E9350u;
        goto label_2e9350;
    }
    ctx->pc = 0x2E9348u;
    {
        const bool branch_taken_0x2e9348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9348) {
            ctx->pc = 0x2E9354u;
            goto label_2e9354;
        }
    }
    ctx->pc = 0x2E9350u;
label_2e9350:
    // 0x2e9350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9354:
    // 0x2e9354: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
label_2e9358:
    if (ctx->pc == 0x2E9358u) {
        ctx->pc = 0x2E9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9354u;
        // 0x2e9358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E935Cu;
        goto label_2e935c;
    }
    ctx->pc = 0x2E9354u;
    {
        const bool branch_taken_0x2e9354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9354u;
        // 0x2e9358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9354) {
            ctx->pc = 0x2E9250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9250;
        }
    }
    ctx->pc = 0x2E935Cu;
label_2e935c:
    // 0x2e935c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2e935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e9360:
    // 0x2e9360: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x2e9360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2e9364:
    // 0x2e9364: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
label_2e9368:
    if (ctx->pc == 0x2E9368u) {
        ctx->pc = 0x2E9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9364u;
        // 0x2e9368: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E936Cu;
        goto label_2e936c;
    }
    ctx->pc = 0x2E9364u;
    {
        const bool branch_taken_0x2e9364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2E9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9364u;
        // 0x2e9368: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9364) {
            ctx->pc = 0x2E938Cu;
            goto label_2e938c;
        }
    }
    ctx->pc = 0x2E936Cu;
label_2e936c:
    // 0x2e936c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2e936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2e9370:
    // 0x2e9370: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9374:
    // 0x2e9374: 0x68467a6f  ldl         $a2, 0x7A6F($v0)
    ctx->pc = 0x2e9374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2e9378:
    // 0x2e9378: 0x6c467a68  ldr         $a2, 0x7A68($v0)
    ctx->pc = 0x2e9378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2e937c:
    // 0x2e937c: 0xc0a39c2  jal         func_28E708
label_2e9380:
    if (ctx->pc == 0x2E9380u) {
        ctx->pc = 0x2E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E937Cu;
        // 0x2e9380: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9384u;
        goto label_2e9384;
    }
    ctx->pc = 0x2E937Cu;
    SET_GPR_U32(ctx, 31, 0x2E9384u);
    ctx->pc = 0x2E9380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E937Cu;
    // 0x2e9380: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2E937Cu, 0x2E9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9384u;
label_2e9384:
    // 0x2e9384: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2e9384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2e9388:
    // 0x2e9388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e938c:
    // 0x2e938c: 0xc08bfa0  jal         func_22FE80
label_2e9390:
    if (ctx->pc == 0x2E9390u) {
        ctx->pc = 0x2E9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E938Cu;
        // 0x2e9390: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9394u;
        goto label_2e9394;
    }
    ctx->pc = 0x2E938Cu;
    SET_GPR_U32(ctx, 31, 0x2E9394u);
    ctx->pc = 0x2E9390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E938Cu;
    // 0x2e9390: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2E938Cu, 0x2E9394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9394u;
label_2e9394:
    // 0x2e9394: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9398:
    // 0x2e9398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e939c:
    // 0x2e939c: 0xc0a41ae  jal         func_2906B8
label_2e93a0:
    if (ctx->pc == 0x2E93A0u) {
        ctx->pc = 0x2E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E939Cu;
        // 0x2e93a0: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93A4u;
        goto label_2e93a4;
    }
    ctx->pc = 0x2E939Cu;
    SET_GPR_U32(ctx, 31, 0x2E93A4u);
    ctx->pc = 0x2E93A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E939Cu;
    // 0x2e93a0: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2E939Cu, 0x2E93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93A4u;
label_2e93a4:
    // 0x2e93a4: 0x1450003d  bne         $v0, $s0, . + 4 + (0x3D << 2)
label_2e93a8:
    if (ctx->pc == 0x2E93A8u) {
        ctx->pc = 0x2E93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93A4u;
        // 0x2e93a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93ACu;
        goto label_2e93ac;
    }
    ctx->pc = 0x2E93A4u;
    {
        const bool branch_taken_0x2e93a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93A4u;
        // 0x2e93a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93a4) {
            ctx->pc = 0x2E949Cu;
            goto label_2e949c;
        }
    }
    ctx->pc = 0x2E93ACu;
label_2e93ac:
    // 0x2e93ac: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2e93acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e93b0:
    // 0x2e93b0: 0xc08c340  jal         func_230D00
label_2e93b4:
    if (ctx->pc == 0x2E93B4u) {
        ctx->pc = 0x2E93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93B0u;
        // 0x2e93b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93B8u;
        goto label_2e93b8;
    }
    ctx->pc = 0x2E93B0u;
    SET_GPR_U32(ctx, 31, 0x2E93B8u);
    ctx->pc = 0x2E93B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93B0u;
    // 0x2e93b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2E93B0u, 0x2E93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93B8u;
label_2e93b8:
    // 0x2e93b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e93b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e93bc:
    // 0x2e93bc: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2e93bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e93c0:
    // 0x2e93c0: 0x0  nop
    ctx->pc = 0x2e93c0u;
    // NOP
label_2e93c4:
    // 0x2e93c4: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_2e93c8:
    if (ctx->pc == 0x2E93C8u) {
        ctx->pc = 0x2E93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C4u;
        // 0x2e93c8: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93CCu;
        goto label_2e93cc;
    }
    ctx->pc = 0x2E93C4u;
    {
        const bool branch_taken_0x2e93c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e93c4) {
            ctx->pc = 0x2E93C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E93C4u;
            // 0x2e93c8: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9430u;
            goto label_2e9430;
        }
    }
    ctx->pc = 0x2E93CCu;
label_2e93cc:
    // 0x2e93cc: 0xc086618  jal         func_219860
label_2e93d0:
    if (ctx->pc == 0x2E93D0u) {
        ctx->pc = 0x2E93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93CCu;
        // 0x2e93d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93D4u;
        goto label_2e93d4;
    }
    ctx->pc = 0x2E93CCu;
    SET_GPR_U32(ctx, 31, 0x2E93D4u);
    ctx->pc = 0x2E93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93CCu;
    // 0x2e93d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2E93CCu, 0x2E93D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93D4u;
label_2e93d4:
    // 0x2e93d4: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2e93d4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e93d8:
    // 0x2e93d8: 0x0  nop
    ctx->pc = 0x2e93d8u;
    // NOP
label_2e93dc:
    // 0x2e93dc: 0x0  nop
    ctx->pc = 0x2e93dcu;
    // NOP
label_2e93e0:
    // 0x2e93e0: 0x46140044  c1          0x140044
    ctx->pc = 0x2e93e0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2e93e4:
    // 0x2e93e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e93e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e93e8:
    // 0x2e93e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e93e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e93ec:
    // 0x2e93ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e93ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e93f0:
    // 0x2e93f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e93f4:
    // 0x2e93f4: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2e93f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2e93f8:
    // 0x2e93f8: 0x46000d28  max.s       $f20, $f1, $f0
    ctx->pc = 0x2e93f8u;
    ctx->f[20] = std::max(ctx->f[1], ctx->f[0]);
label_2e93fc:
    // 0x2e93fc: 0xc0a367c  jal         func_28D9F0
label_2e9400:
    if (ctx->pc == 0x2E9400u) {
        ctx->pc = 0x2E9404u;
        goto label_2e9404;
    }
    ctx->pc = 0x2E93FCu;
    SET_GPR_U32(ctx, 31, 0x2E9404u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E93FCu, 0x2E9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9404u;
label_2e9404:
    // 0x2e9404: 0x1040020a  beqz        $v0, . + 4 + (0x20A << 2)
label_2e9408:
    if (ctx->pc == 0x2E9408u) {
        ctx->pc = 0x2E9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9404u;
        // 0x2e9408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E940Cu;
        goto label_2e940c;
    }
    ctx->pc = 0x2E9404u;
    {
        const bool branch_taken_0x2e9404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9404u;
        // 0x2e9408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9404) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E940Cu;
label_2e940c:
    // 0x2e940c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e940cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9410:
    // 0x2e9410: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e9410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e9414:
    // 0x2e9414: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e9414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2e9418:
    // 0x2e9418: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e9418u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2e941c:
    // 0x2e941c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e941cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9420:
    // 0x2e9420: 0xc0bf3d4  jal         func_2FCF50
label_2e9424:
    if (ctx->pc == 0x2E9424u) {
        ctx->pc = 0x2E9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9420u;
        // 0x2e9424: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9428u;
        goto label_2e9428;
    }
    ctx->pc = 0x2E9420u;
    SET_GPR_U32(ctx, 31, 0x2E9428u);
    ctx->pc = 0x2E9424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9420u;
    // 0x2e9424: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2E9420u, 0x2E9428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9428u;
label_2e9428:
    // 0x2e9428: 0x10000202  b           . + 4 + (0x202 << 2)
label_2e942c:
    if (ctx->pc == 0x2E942Cu) {
        ctx->pc = 0x2E942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9428u;
        // 0x2e942c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9430u;
        goto label_2e9430;
    }
    ctx->pc = 0x2E9428u;
    {
        const bool branch_taken_0x2e9428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9428u;
        // 0x2e942c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9428) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9430u;
label_2e9430:
    // 0x2e9430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9434:
    // 0x2e9434: 0xc0891de  jal         func_224778
label_2e9438:
    if (ctx->pc == 0x2E9438u) {
        ctx->pc = 0x2E9438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9434u;
        // 0x2e9438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E943Cu;
        goto label_2e943c;
    }
    ctx->pc = 0x2E9434u;
    SET_GPR_U32(ctx, 31, 0x2E943Cu);
    ctx->pc = 0x2E9438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9434u;
    // 0x2e9438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2E9434u, 0x2E943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E943Cu;
label_2e943c:
    // 0x2e943c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2e9440:
    if (ctx->pc == 0x2E9440u) {
        ctx->pc = 0x2E9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E943Cu;
        // 0x2e9440: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9444u;
        goto label_2e9444;
    }
    ctx->pc = 0x2E943Cu;
    {
        const bool branch_taken_0x2e943c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e943c) {
            ctx->pc = 0x2E9440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E943Cu;
            // 0x2e9440: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9464u;
            goto label_2e9464;
        }
    }
    ctx->pc = 0x2E9444u;
label_2e9444:
    // 0x2e9444: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2e9444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2e9448:
    // 0x2e9448: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e944c:
    // 0x2e944c: 0x68467a77  ldl         $a2, 0x7A77($v0)
    ctx->pc = 0x2e944cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2e9450:
    // 0x2e9450: 0x6c467a70  ldr         $a2, 0x7A70($v0)
    ctx->pc = 0x2e9450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2e9454:
    // 0x2e9454: 0xc0a39c2  jal         func_28E708
label_2e9458:
    if (ctx->pc == 0x2E9458u) {
        ctx->pc = 0x2E9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9454u;
        // 0x2e9458: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E945Cu;
        goto label_2e945c;
    }
    ctx->pc = 0x2E9454u;
    SET_GPR_U32(ctx, 31, 0x2E945Cu);
    ctx->pc = 0x2E9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9454u;
    // 0x2e9458: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2E9454u, 0x2E945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E945Cu;
label_2e945c:
    // 0x2e945c: 0x100001f4  b           . + 4 + (0x1F4 << 2)
label_2e9460:
    if (ctx->pc == 0x2E9460u) {
        ctx->pc = 0x2E9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E945Cu;
        // 0x2e9460: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9464u;
        goto label_2e9464;
    }
    ctx->pc = 0x2E945Cu;
    {
        const bool branch_taken_0x2e945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E945Cu;
        // 0x2e9460: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e945c) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E9464u;
label_2e9464:
    // 0x2e9464: 0x38c2002d  xori        $v0, $a2, 0x2D
    ctx->pc = 0x2e9464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)45);
label_2e9468:
    // 0x2e9468: 0x104001f1  beqz        $v0, . + 4 + (0x1F1 << 2)
label_2e946c:
    if (ctx->pc == 0x2E946Cu) {
        ctx->pc = 0x2E946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9468u;
        // 0x2e946c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9470u;
        goto label_2e9470;
    }
    ctx->pc = 0x2E9468u;
    {
        const bool branch_taken_0x2e9468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9468u;
        // 0x2e946c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9468) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E9470u;
label_2e9470:
    // 0x2e9470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9474:
    // 0x2e9474: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e9474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2e9478:
    // 0x2e9478: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e947c:
    // 0x2e947c: 0xc0a3892  jal         func_28E248
label_2e9480:
    if (ctx->pc == 0x2E9480u) {
        ctx->pc = 0x2E9480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E947Cu;
        // 0x2e9480: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9484u;
        goto label_2e9484;
    }
    ctx->pc = 0x2E947Cu;
    SET_GPR_U32(ctx, 31, 0x2E9484u);
    ctx->pc = 0x2E9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E947Cu;
    // 0x2e9480: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2E947Cu, 0x2E9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9484u;
label_2e9484:
    // 0x2e9484: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2e9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e9488:
    // 0x2e9488: 0xae340020  sw          $s4, 0x20($s1)
    ctx->pc = 0x2e9488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2e948c:
    // 0x2e948c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x2e948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_2e9490:
    // 0x2e9490: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e9490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e9494:
    // 0x2e9494: 0x100001e6  b           . + 4 + (0x1E6 << 2)
label_2e9498:
    if (ctx->pc == 0x2E9498u) {
        ctx->pc = 0x2E9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9494u;
        // 0x2e9498: 0xa2220044  sb          $v0, 0x44($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E949Cu;
        goto label_2e949c;
    }
    ctx->pc = 0x2E9494u;
    {
        const bool branch_taken_0x2e9494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9494u;
        // 0x2e9498: 0xa2220044  sb          $v0, 0x44($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9494) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E949Cu;
label_2e949c:
    // 0x2e949c: 0xc086618  jal         func_219860
label_2e94a0:
    if (ctx->pc == 0x2E94A0u) {
        ctx->pc = 0x2E94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E949Cu;
        // 0x2e94a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94A4u;
        goto label_2e94a4;
    }
    ctx->pc = 0x2E949Cu;
    SET_GPR_U32(ctx, 31, 0x2E94A4u);
    ctx->pc = 0x2E94A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E949Cu;
    // 0x2e94a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2E949Cu, 0x2E94A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94A4u;
label_2e94a4:
    // 0x2e94a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e94a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e94a8:
    // 0x2e94a8: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2e94a8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e94ac:
    // 0x2e94ac: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2e94b0:
    // 0x2e94b0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2e94b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2e94b4:
    // 0x2e94b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e94b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e94b8:
    // 0x2e94b8: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2e94b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e94bc:
    // 0x2e94bc: 0xc0a367c  jal         func_28D9F0
label_2e94c0:
    if (ctx->pc == 0x2E94C0u) {
        ctx->pc = 0x2E94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94BCu;
        // 0x2e94c0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94C4u;
        goto label_2e94c4;
    }
    ctx->pc = 0x2E94BCu;
    SET_GPR_U32(ctx, 31, 0x2E94C4u);
    ctx->pc = 0x2E94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94BCu;
    // 0x2e94c0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E94BCu, 0x2E94C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94C4u;
label_2e94c4:
    // 0x2e94c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e94c8:
    if (ctx->pc == 0x2E94C8u) {
        ctx->pc = 0x2E94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94C4u;
        // 0x2e94c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94CCu;
        goto label_2e94cc;
    }
    ctx->pc = 0x2E94C4u;
    {
        const bool branch_taken_0x2e94c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94C4u;
        // 0x2e94c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94c4) {
            ctx->pc = 0x2E94E8u;
            goto label_2e94e8;
        }
    }
    ctx->pc = 0x2E94CCu;
label_2e94cc:
    // 0x2e94cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e94ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e94d0:
    // 0x2e94d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e94d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e94d4:
    // 0x2e94d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e94d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2e94d8:
    // 0x2e94d8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e94d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2e94dc:
    // 0x2e94dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e94dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e94e0:
    // 0x2e94e0: 0xc0bf3d4  jal         func_2FCF50
label_2e94e4:
    if (ctx->pc == 0x2E94E4u) {
        ctx->pc = 0x2E94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94E0u;
        // 0x2e94e4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94E8u;
        goto label_2e94e8;
    }
    ctx->pc = 0x2E94E0u;
    SET_GPR_U32(ctx, 31, 0x2E94E8u);
    ctx->pc = 0x2E94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94E0u;
    // 0x2e94e4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2E94E0u, 0x2E94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94E8u;
label_2e94e8:
    // 0x2e94e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e94ec:
    // 0x2e94ec: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e94f0:
    // 0x2e94f0: 0xc0cd4ee  jal         func_3353B8
label_2e94f4:
    if (ctx->pc == 0x2E94F4u) {
        ctx->pc = 0x2E94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94F0u;
        // 0x2e94f4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94F8u;
        goto label_2e94f8;
    }
    ctx->pc = 0x2E94F0u;
    SET_GPR_U32(ctx, 31, 0x2E94F8u);
    ctx->pc = 0x2E94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94F0u;
    // 0x2e94f4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2E94F0u, 0x2E94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94F8u;
label_2e94f8:
    // 0x2e94f8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2e94f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2e94fc:
    // 0x2e94fc: 0x104001cd  beqz        $v0, . + 4 + (0x1CD << 2)
label_2e9500:
    if (ctx->pc == 0x2E9500u) {
        ctx->pc = 0x2E9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94FCu;
        // 0x2e9500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9504u;
        goto label_2e9504;
    }
    ctx->pc = 0x2E94FCu;
    {
        const bool branch_taken_0x2e94fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94FCu;
        // 0x2e9500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94fc) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9504u;
label_2e9504:
    // 0x2e9504: 0xc0a47b4  jal         func_291ED0
label_2e9508:
    if (ctx->pc == 0x2E9508u) {
        ctx->pc = 0x2E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9504u;
        // 0x2e9508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E950Cu;
        goto label_2e950c;
    }
    ctx->pc = 0x2E9504u;
    SET_GPR_U32(ctx, 31, 0x2E950Cu);
    ctx->pc = 0x2E9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9504u;
    // 0x2e9508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2E9504u, 0x2E950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E950Cu;
label_2e950c:
    // 0x2e950c: 0x145001c9  bne         $v0, $s0, . + 4 + (0x1C9 << 2)
label_2e9510:
    if (ctx->pc == 0x2E9510u) {
        ctx->pc = 0x2E9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E950Cu;
        // 0x2e9510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9514u;
        goto label_2e9514;
    }
    ctx->pc = 0x2E950Cu;
    {
        const bool branch_taken_0x2e950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E950Cu;
        // 0x2e9510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e950c) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9514u;
label_2e9514:
    // 0x2e9514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e9514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e9518:
    // 0x2e9518: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e9518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e951c:
    // 0x2e951c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e951cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9520:
    // 0x2e9520: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e9520u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e9524:
    // 0x2e9524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9528:
    // 0x2e9528: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2e9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2e952c:
    // 0x2e952c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e952cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9530:
    // 0x2e9530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9534:
    // 0x2e9534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9538:
    // 0x2e9538: 0xc088178  jal         func_2205E0
label_2e953c:
    if (ctx->pc == 0x2E953Cu) {
        ctx->pc = 0x2E953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9538u;
        // 0x2e953c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9540u;
        goto label_2e9540;
    }
    ctx->pc = 0x2E9538u;
    SET_GPR_U32(ctx, 31, 0x2E9540u);
    ctx->pc = 0x2E953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9538u;
    // 0x2e953c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E9538u, 0x2E9540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9540u;
label_2e9540:
    // 0x2e9540: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_2e9544:
    if (ctx->pc == 0x2E9544u) {
        ctx->pc = 0x2E9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9540u;
        // 0x2e9544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9548u;
        goto label_2e9548;
    }
    ctx->pc = 0x2E9540u;
    {
        const bool branch_taken_0x2e9540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9540u;
        // 0x2e9544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9540) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9548u;
label_2e9548:
    // 0x2e9548: 0x147000e3  bne         $v1, $s0, . + 4 + (0xE3 << 2)
label_2e954c:
    if (ctx->pc == 0x2E954Cu) {
        ctx->pc = 0x2E954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9548u;
        // 0x2e954c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9550u;
        goto label_2e9550;
    }
    ctx->pc = 0x2E9548u;
    {
        const bool branch_taken_0x2e9548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9548u;
        // 0x2e954c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9548) {
            ctx->pc = 0x2E98D8u;
            goto label_2e98d8;
        }
    }
    ctx->pc = 0x2E9550u;
label_2e9550:
    // 0x2e9550: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x2e9550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2e9554:
    // 0x2e9554: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2e9554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2e9558:
    // 0x2e9558: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_2e955c:
    if (ctx->pc == 0x2E955Cu) {
        ctx->pc = 0x2E955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9558u;
        // 0x2e955c: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9560u;
        goto label_2e9560;
    }
    ctx->pc = 0x2E9558u;
    {
        const bool branch_taken_0x2e9558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e9558) {
            ctx->pc = 0x2E955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9558u;
            // 0x2e955c: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9574u;
            goto label_2e9574;
        }
    }
    ctx->pc = 0x2E9560u;
label_2e9560:
    // 0x2e9560: 0x9222003f  lbu         $v0, 0x3F($s1)
    ctx->pc = 0x2e9560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
label_2e9564:
    // 0x2e9564: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2e9564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2e9568:
    // 0x2e9568: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
label_2e956c:
    if (ctx->pc == 0x2E956Cu) {
        ctx->pc = 0x2E956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9568u;
        // 0x2e956c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9570u;
        goto label_2e9570;
    }
    ctx->pc = 0x2E9568u;
    {
        const bool branch_taken_0x2e9568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9568u;
        // 0x2e956c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9568) {
            ctx->pc = 0x2E991Cu;
            goto label_2e991c;
        }
    }
    ctx->pc = 0x2E9570u;
label_2e9570:
    // 0x2e9570: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2e9570u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2e9574:
    // 0x2e9574: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2e9574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2e9578:
    // 0x2e9578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e957c:
    // 0x2e957c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e957cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9580:
    // 0x2e9580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e9584:
    // 0x2e9584: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x2e9584u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_2e9588:
    // 0x2e9588: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e9588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e958c:
    // 0x2e958c: 0xc0a7c8c  jal         func_29F230
label_2e9590:
    if (ctx->pc == 0x2E9590u) {
        ctx->pc = 0x2E9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E958Cu;
        // 0x2e9590: 0xa060011e  sb          $zero, 0x11E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9594u;
        goto label_2e9594;
    }
    ctx->pc = 0x2E958Cu;
    SET_GPR_U32(ctx, 31, 0x2E9594u);
    ctx->pc = 0x2E9590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E958Cu;
    // 0x2e9590: 0xa060011e  sb          $zero, 0x11E($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2E958Cu, 0x2E9594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9594u;
label_2e9594:
    // 0x2e9594: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e9594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9598:
    // 0x2e9598: 0x128001a5  beqz        $s4, . + 4 + (0x1A5 << 2)
label_2e959c:
    if (ctx->pc == 0x2E959Cu) {
        ctx->pc = 0x2E959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9598u;
        // 0x2e959c: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95A0u;
        goto label_2e95a0;
    }
    ctx->pc = 0x2E9598u;
    {
        const bool branch_taken_0x2e9598 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9598u;
        // 0x2e959c: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9598) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E95A0u;
label_2e95a0:
    // 0x2e95a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2e95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2e95a4:
    // 0x2e95a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2e95a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e95a8:
    // 0x2e95a8: 0xc0e409a  jal         func_390268
label_2e95ac:
    if (ctx->pc == 0x2E95ACu) {
        ctx->pc = 0x2E95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95A8u;
        // 0x2e95ac: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95B0u;
        goto label_2e95b0;
    }
    ctx->pc = 0x2E95A8u;
    SET_GPR_U32(ctx, 31, 0x2E95B0u);
    ctx->pc = 0x2E95ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95A8u;
    // 0x2e95ac: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E95A8u, 0x2E95B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95B0u;
label_2e95b0:
    // 0x2e95b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e95b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e95b4:
    // 0x2e95b4: 0xc0a34d6  jal         func_28D358
label_2e95b8:
    if (ctx->pc == 0x2E95B8u) {
        ctx->pc = 0x2E95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95B4u;
        // 0x2e95b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95BCu;
        goto label_2e95bc;
    }
    ctx->pc = 0x2E95B4u;
    SET_GPR_U32(ctx, 31, 0x2E95BCu);
    ctx->pc = 0x2E95B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95B4u;
    // 0x2e95b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2E95B4u, 0x2E95BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95BCu;
label_2e95bc:
    // 0x2e95bc: 0x1682002b  bne         $s4, $v0, . + 4 + (0x2B << 2)
label_2e95c0:
    if (ctx->pc == 0x2E95C0u) {
        ctx->pc = 0x2E95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95BCu;
        // 0x2e95c0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95C4u;
        goto label_2e95c4;
    }
    ctx->pc = 0x2E95BCu;
    {
        const bool branch_taken_0x2e95bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95BCu;
        // 0x2e95c0: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95bc) {
            ctx->pc = 0x2E966Cu;
            goto label_2e966c;
        }
    }
    ctx->pc = 0x2E95C4u;
label_2e95c4:
    // 0x2e95c4: 0xc08a08a  jal         func_228228
label_2e95c8:
    if (ctx->pc == 0x2E95C8u) {
        ctx->pc = 0x2E95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95C4u;
        // 0x2e95c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95CCu;
        goto label_2e95cc;
    }
    ctx->pc = 0x2E95C4u;
    SET_GPR_U32(ctx, 31, 0x2E95CCu);
    ctx->pc = 0x2E95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95C4u;
    // 0x2e95c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2E95C4u, 0x2E95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95CCu;
label_2e95cc:
    // 0x2e95cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e95d0:
    // 0x2e95d0: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_2e95d4:
    if (ctx->pc == 0x2E95D4u) {
        ctx->pc = 0x2E95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95D0u;
        // 0x2e95d4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95D8u;
        goto label_2e95d8;
    }
    ctx->pc = 0x2E95D0u;
    {
        const bool branch_taken_0x2e95d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95D0u;
        // 0x2e95d4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95d0) {
            ctx->pc = 0x2E966Cu;
            goto label_2e966c;
        }
    }
    ctx->pc = 0x2E95D8u;
label_2e95d8:
    // 0x2e95d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e95d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e95dc:
    // 0x2e95dc: 0xc0a367c  jal         func_28D9F0
label_2e95e0:
    if (ctx->pc == 0x2E95E0u) {
        ctx->pc = 0x2E95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95DCu;
        // 0x2e95e0: 0xc494013c  lwc1        $f20, 0x13C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95E4u;
        goto label_2e95e4;
    }
    ctx->pc = 0x2E95DCu;
    SET_GPR_U32(ctx, 31, 0x2E95E4u);
    ctx->pc = 0x2E95E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95DCu;
    // 0x2e95e0: 0xc494013c  lwc1        $f20, 0x13C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E95DCu, 0x2E95E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95E4u;
label_2e95e4:
    // 0x2e95e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2e95e8:
    if (ctx->pc == 0x2E95E8u) {
        ctx->pc = 0x2E95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95E4u;
        // 0x2e95e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95ECu;
        goto label_2e95ec;
    }
    ctx->pc = 0x2E95E4u;
    {
        const bool branch_taken_0x2e95e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95E4u;
        // 0x2e95e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95e4) {
            ctx->pc = 0x2E9610u;
            goto label_2e9610;
        }
    }
    ctx->pc = 0x2E95ECu;
label_2e95ec:
    // 0x2e95ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e95f0:
    // 0x2e95f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e95f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e95f4:
    // 0x2e95f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e95f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e95f8:
    // 0x2e95f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e95f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e95fc:
    // 0x2e95fc: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2e95fcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2e9600:
    // 0x2e9600: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e9600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e9604:
    // 0x2e9604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9608:
    // 0x2e9608: 0xc0bf3d4  jal         func_2FCF50
label_2e960c:
    if (ctx->pc == 0x2E960Cu) {
        ctx->pc = 0x2E960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9608u;
        // 0x2e960c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9610u;
        goto label_2e9610;
    }
    ctx->pc = 0x2E9608u;
    SET_GPR_U32(ctx, 31, 0x2E9610u);
    ctx->pc = 0x2E960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9608u;
    // 0x2e960c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2E9608u, 0x2E9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9610u;
label_2e9610:
    // 0x2e9610: 0xc0a367c  jal         func_28D9F0
label_2e9614:
    if (ctx->pc == 0x2E9614u) {
        ctx->pc = 0x2E9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9610u;
        // 0x2e9614: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9618u;
        goto label_2e9618;
    }
    ctx->pc = 0x2E9610u;
    SET_GPR_U32(ctx, 31, 0x2E9618u);
    ctx->pc = 0x2E9614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9610u;
    // 0x2e9614: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E9610u, 0x2E9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9618u;
label_2e9618:
    // 0x2e9618: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e961c:
    if (ctx->pc == 0x2E961Cu) {
        ctx->pc = 0x2E961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9618u;
        // 0x2e961c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9620u;
        goto label_2e9620;
    }
    ctx->pc = 0x2E9618u;
    {
        const bool branch_taken_0x2e9618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9618u;
        // 0x2e961c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9618) {
            ctx->pc = 0x2E963Cu;
            goto label_2e963c;
        }
    }
    ctx->pc = 0x2E9620u;
label_2e9620:
    // 0x2e9620: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9624:
    // 0x2e9624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e9628:
    // 0x2e9628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e962c:
    // 0x2e962c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2e962cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e9630:
    // 0x2e9630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e9630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9634:
    // 0x2e9634: 0xc0bee1a  jal         func_2FB868
label_2e9638:
    if (ctx->pc == 0x2E9638u) {
        ctx->pc = 0x2E9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9634u;
        // 0x2e9638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E963Cu;
        goto label_2e963c;
    }
    ctx->pc = 0x2E9634u;
    SET_GPR_U32(ctx, 31, 0x2E963Cu);
    ctx->pc = 0x2E9638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9634u;
    // 0x2e9638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB868u, 0x2E9634u, 0x2E963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E963Cu;
label_2e963c:
    // 0x2e963c: 0xc0a367c  jal         func_28D9F0
label_2e9640:
    if (ctx->pc == 0x2E9640u) {
        ctx->pc = 0x2E9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E963Cu;
        // 0x2e9640: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9644u;
        goto label_2e9644;
    }
    ctx->pc = 0x2E963Cu;
    SET_GPR_U32(ctx, 31, 0x2E9644u);
    ctx->pc = 0x2E9640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E963Cu;
    // 0x2e9640: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E963Cu, 0x2E9644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9644u;
label_2e9644:
    // 0x2e9644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e9648:
    if (ctx->pc == 0x2E9648u) {
        ctx->pc = 0x2E9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9644u;
        // 0x2e9648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E964Cu;
        goto label_2e964c;
    }
    ctx->pc = 0x2E9644u;
    {
        const bool branch_taken_0x2e9644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9644u;
        // 0x2e9648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9644) {
            ctx->pc = 0x2E9658u;
            goto label_2e9658;
        }
    }
    ctx->pc = 0x2E964Cu;
label_2e964c:
    // 0x2e964c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e964cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9650:
    // 0x2e9650: 0xc0bebdc  jal         func_2FAF70
label_2e9654:
    if (ctx->pc == 0x2E9654u) {
        ctx->pc = 0x2E9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9650u;
        // 0x2e9654: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9658u;
        goto label_2e9658;
    }
    ctx->pc = 0x2E9650u;
    SET_GPR_U32(ctx, 31, 0x2E9658u);
    ctx->pc = 0x2E9654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9650u;
    // 0x2e9654: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2E9650u, 0x2E9658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9658u;
label_2e9658:
    // 0x2e9658: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e965c:
    // 0x2e965c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9660:
    // 0x2e9660: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2e9660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e9664:
    // 0x2e9664: 0x10000099  b           . + 4 + (0x99 << 2)
label_2e9668:
    if (ctx->pc == 0x2E9668u) {
        ctx->pc = 0x2E9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9664u;
        // 0x2e9668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E966Cu;
        goto label_2e966c;
    }
    ctx->pc = 0x2E9664u;
    {
        const bool branch_taken_0x2e9664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9664u;
        // 0x2e9668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9664) {
            ctx->pc = 0x2E98CCu;
            goto label_2e98cc;
        }
    }
    ctx->pc = 0x2E966Cu;
label_2e966c:
    // 0x2e966c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e9670:
    // 0x2e9670: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2e9670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2e9674:
    // 0x2e9674: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2e9674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_2e9678:
    // 0x2e9678: 0x26630090  addiu       $v1, $s3, 0x90
    ctx->pc = 0x2e9678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2e967c:
    // 0x2e967c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2e967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2e9680:
    // 0x2e9680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9684:
    // 0x2e9684: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2e9684u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9688:
    // 0x2e9688: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2e9688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e968c:
    // 0x2e968c: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x2e968cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_2e9690:
    // 0x2e9690: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e9690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e9694:
    // 0x2e9694: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x2e9694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_2e9698:
    // 0x2e9698: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e9698u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e969c:
    // 0x2e969c: 0xafb30014  sw          $s3, 0x14($sp)
    ctx->pc = 0x2e969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
label_2e96a0:
    // 0x2e96a0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e96a4:
    // 0x2e96a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e96a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2e96a8:
    // 0x2e96a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e96a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e96ac:
    // 0x2e96ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e96acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e96b0:
    // 0x2e96b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e96b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e96b4:
    // 0x2e96b4: 0x84660002  lh          $a2, 0x2($v1)
    ctx->pc = 0x2e96b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2e96b8:
    // 0x2e96b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e96b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e96bc:
    // 0x2e96bc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2e96bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2e96c0:
    // 0x2e96c0: 0xc0a4dda  jal         func_293768
label_2e96c4:
    if (ctx->pc == 0x2E96C4u) {
        ctx->pc = 0x2E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96C0u;
        // 0x2e96c4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96C8u;
        goto label_2e96c8;
    }
    ctx->pc = 0x2E96C0u;
    SET_GPR_U32(ctx, 31, 0x2E96C8u);
    ctx->pc = 0x2E96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96C0u;
    // 0x2e96c4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293768u, 0x2E96C0u, 0x2E96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96C8u;
label_2e96c8:
    // 0x2e96c8: 0xc0a4e54  jal         func_293950
label_2e96cc:
    if (ctx->pc == 0x2E96CCu) {
        ctx->pc = 0x2E96D0u;
        goto label_2e96d0;
    }
    ctx->pc = 0x2E96C8u;
    SET_GPR_U32(ctx, 31, 0x2E96D0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E96C8u, 0x2E96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96D0u;
label_2e96d0:
    // 0x2e96d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e96d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e96d4:
    // 0x2e96d4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2e96d8:
    if (ctx->pc == 0x2E96D8u) {
        ctx->pc = 0x2E96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96D4u;
        // 0x2e96d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96DCu;
        goto label_2e96dc;
    }
    ctx->pc = 0x2E96D4u;
    {
        const bool branch_taken_0x2e96d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e96d4) {
            ctx->pc = 0x2E96D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E96D4u;
            // 0x2e96d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9708u;
            goto label_2e9708;
        }
    }
    ctx->pc = 0x2E96DCu;
label_2e96dc:
    // 0x2e96dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2e96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e96e0:
    // 0x2e96e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e96e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e96e4:
    // 0x2e96e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e96e8:
    // 0x2e96e8: 0x40f809  jalr        $v0
label_2e96ec:
    if (ctx->pc == 0x2E96ECu) {
        ctx->pc = 0x2E96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E8u;
        // 0x2e96ec: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96F0u;
        goto label_2e96f0;
    }
    ctx->pc = 0x2E96E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E96F0u);
        ctx->pc = 0x2E96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E8u;
        // 0x2e96ec: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E96E8u, 0x2E96F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E96F0u;
label_2e96f0:
    // 0x2e96f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e96f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e96f4:
    // 0x2e96f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e96f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e96f8:
    // 0x2e96f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e96f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e96fc:
    // 0x2e96fc: 0xc0abd6c  jal         func_2AF5B0
label_2e9700:
    if (ctx->pc == 0x2E9700u) {
        ctx->pc = 0x2E9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96FCu;
        // 0x2e9700: 0x24070047  addiu       $a3, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9704u;
        goto label_2e9704;
    }
    ctx->pc = 0x2E96FCu;
    SET_GPR_U32(ctx, 31, 0x2E9704u);
    ctx->pc = 0x2E9700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96FCu;
    // 0x2e9700: 0x24070047  addiu       $a3, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2E96FCu, 0x2E9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9704u;
label_2e9704:
    // 0x2e9704: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9708:
    // 0x2e9708: 0xc0a35d6  jal         func_28D758
label_2e970c:
    if (ctx->pc == 0x2E970Cu) {
        ctx->pc = 0x2E970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9708u;
        // 0x2e970c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9710u;
        goto label_2e9710;
    }
    ctx->pc = 0x2E9708u;
    SET_GPR_U32(ctx, 31, 0x2E9710u);
    ctx->pc = 0x2E970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9708u;
    // 0x2e970c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E9708u, 0x2E9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9710u;
label_2e9710:
    // 0x2e9710: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9714:
    // 0x2e9714: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2e9714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2e9718:
    // 0x2e9718: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2e971c:
    if (ctx->pc == 0x2E971Cu) {
        ctx->pc = 0x2E971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9718u;
        // 0x2e971c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9720u;
        goto label_2e9720;
    }
    ctx->pc = 0x2E9718u;
    {
        const bool branch_taken_0x2e9718 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9718u;
        // 0x2e971c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9718) {
            ctx->pc = 0x2E972Cu;
            goto label_2e972c;
        }
    }
    ctx->pc = 0x2E9720u;
label_2e9720:
    // 0x2e9720: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e9720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e9724:
    // 0x2e9724: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e9728:
    if (ctx->pc == 0x2E9728u) {
        ctx->pc = 0x2E9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9724u;
        // 0x2e9728: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E972Cu;
        goto label_2e972c;
    }
    ctx->pc = 0x2E9724u;
    {
        const bool branch_taken_0x2e9724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9724u;
        // 0x2e9728: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9724) {
            ctx->pc = 0x2E9730u;
            goto label_2e9730;
        }
    }
    ctx->pc = 0x2E972Cu;
label_2e972c:
    // 0x2e972c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e972cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9730:
    // 0x2e9730: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_2e9734:
    if (ctx->pc == 0x2E9734u) {
        ctx->pc = 0x2E9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9730u;
        // 0x2e9734: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9738u;
        goto label_2e9738;
    }
    ctx->pc = 0x2E9730u;
    {
        const bool branch_taken_0x2e9730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9730) {
            ctx->pc = 0x2E9734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9730u;
            // 0x2e9734: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E976Cu;
            goto label_2e976c;
        }
    }
    ctx->pc = 0x2E9738u;
label_2e9738:
    // 0x2e9738: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e9738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e973c:
    // 0x2e973c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e973cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e9740:
    // 0x2e9740: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e9740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e9744:
    // 0x2e9744: 0x40f809  jalr        $v0
label_2e9748:
    if (ctx->pc == 0x2E9748u) {
        ctx->pc = 0x2E9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9744u;
        // 0x2e9748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E974Cu;
        goto label_2e974c;
    }
    ctx->pc = 0x2E9744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E974Cu);
        ctx->pc = 0x2E9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9744u;
        // 0x2e9748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9744u, 0x2E974Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E974Cu;
label_2e974c:
    // 0x2e974c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e9750:
    // 0x2e9750: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2e9754:
    if (ctx->pc == 0x2E9754u) {
        ctx->pc = 0x2E9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9750u;
        // 0x2e9754: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9758u;
        goto label_2e9758;
    }
    ctx->pc = 0x2E9750u;
    {
        const bool branch_taken_0x2e9750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9750) {
            ctx->pc = 0x2E9754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9750u;
            // 0x2e9754: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E976Cu;
            goto label_2e976c;
        }
    }
    ctx->pc = 0x2E9758u;
label_2e9758:
    // 0x2e9758: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x2e9758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
label_2e975c:
    // 0x2e975c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e9760:
    // 0x2e9760: 0x0  nop
    ctx->pc = 0x2e9760u;
    // NOP
label_2e9764:
    // 0x2e9764: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2e9768:
    // 0x2e9768: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e976c:
    // 0x2e976c: 0x26a24b00  addiu       $v0, $s5, 0x4B00
    ctx->pc = 0x2e976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_2e9770:
    // 0x2e9770: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x2e9770u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2e9774:
    // 0x2e9774: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x2e9774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
label_2e9778:
    // 0x2e9778: 0xc4810140  lwc1        $f1, 0x140($a0)
    ctx->pc = 0x2e9778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e977c:
    // 0x2e977c: 0x2508bf60  addiu       $t0, $t0, -0x40A0
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950752));
label_2e9780:
    // 0x2e9780: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x2e9780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_2e9784:
    // 0x2e9784: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e9784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e9788:
    // 0x2e9788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e9788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e978c:
    // 0x2e978c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2e978cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2e9790:
    // 0x2e9790: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2e9790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
label_2e9794:
    // 0x2e9794: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2e9794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2e9798:
    // 0x2e9798: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2e9798u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e979c:
    // 0x2e979c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e979cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e97a0:
    // 0x2e97a0: 0xc0a734c  jal         func_29CD30
label_2e97a4:
    if (ctx->pc == 0x2E97A4u) {
        ctx->pc = 0x2E97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A0u;
        // 0x2e97a4: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97A8u;
        goto label_2e97a8;
    }
    ctx->pc = 0x2E97A0u;
    SET_GPR_U32(ctx, 31, 0x2E97A8u);
    ctx->pc = 0x2E97A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97A0u;
    // 0x2e97a4: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD30u, 0x2E97A0u, 0x2E97A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97A8u;
label_2e97a8:
    // 0x2e97a8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2e97ac:
    if (ctx->pc == 0x2E97ACu) {
        ctx->pc = 0x2E97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A8u;
        // 0x2e97ac: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97B0u;
        goto label_2e97b0;
    }
    ctx->pc = 0x2E97A8u;
    {
        const bool branch_taken_0x2e97a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A8u;
        // 0x2e97ac: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97a8) {
            ctx->pc = 0x2E97FCu;
            goto label_2e97fc;
        }
    }
    ctx->pc = 0x2E97B0u;
label_2e97b0:
    // 0x2e97b0: 0xc08a08a  jal         func_228228
label_2e97b4:
    if (ctx->pc == 0x2E97B4u) {
        ctx->pc = 0x2E97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97B0u;
        // 0x2e97b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97B8u;
        goto label_2e97b8;
    }
    ctx->pc = 0x2E97B0u;
    SET_GPR_U32(ctx, 31, 0x2E97B8u);
    ctx->pc = 0x2E97B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97B0u;
    // 0x2e97b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2E97B0u, 0x2E97B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97B8u;
label_2e97b8:
    // 0x2e97b8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2e97bc:
    if (ctx->pc == 0x2E97BCu) {
        ctx->pc = 0x2E97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97B8u;
        // 0x2e97bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97C0u;
        goto label_2e97c0;
    }
    ctx->pc = 0x2E97B8u;
    {
        const bool branch_taken_0x2e97b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e97b8) {
            ctx->pc = 0x2E97BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E97B8u;
            // 0x2e97bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E97FCu;
            goto label_2e97fc;
        }
    }
    ctx->pc = 0x2E97C0u;
label_2e97c0:
    // 0x2e97c0: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2e97c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2e97c4:
    // 0x2e97c4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2e97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e97c8:
    // 0x2e97c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e97c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e97cc:
    // 0x2e97cc: 0x0  nop
    ctx->pc = 0x2e97ccu;
    // NOP
label_2e97d0:
    // 0x2e97d0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2e97d4:
    if (ctx->pc == 0x2E97D4u) {
        ctx->pc = 0x2E97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97D0u;
        // 0x2e97d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97D8u;
        goto label_2e97d8;
    }
    ctx->pc = 0x2E97D0u;
    {
        const bool branch_taken_0x2e97d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97D0u;
        // 0x2e97d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97d0) {
            ctx->pc = 0x2E97F8u;
            goto label_2e97f8;
        }
    }
    ctx->pc = 0x2E97D8u;
label_2e97d8:
    // 0x2e97d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e97d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e97dc:
    // 0x2e97dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e97dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2e97e0:
    // 0x2e97e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e97e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e97e4:
    // 0x2e97e4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e97e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e97e8:
    // 0x2e97e8: 0xc0a3892  jal         func_28E248
label_2e97ec:
    if (ctx->pc == 0x2E97ECu) {
        ctx->pc = 0x2E97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97E8u;
        // 0x2e97ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97F0u;
        goto label_2e97f0;
    }
    ctx->pc = 0x2E97E8u;
    SET_GPR_U32(ctx, 31, 0x2E97F0u);
    ctx->pc = 0x2E97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97E8u;
    // 0x2e97ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2E97E8u, 0x2E97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97F0u;
label_2e97f0:
    // 0x2e97f0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e97f4:
    if (ctx->pc == 0x2E97F4u) {
        ctx->pc = 0x2E97F8u;
        goto label_2e97f8;
    }
    ctx->pc = 0x2E97F0u;
    {
        const bool branch_taken_0x2e97f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e97f0) {
            ctx->pc = 0x2E983Cu;
            goto label_2e983c;
        }
    }
    ctx->pc = 0x2E97F8u;
label_2e97f8:
    // 0x2e97f8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e97f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e97fc:
    // 0x2e97fc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e97fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e9800:
    // 0x2e9800: 0xc0cd4ee  jal         func_3353B8
label_2e9804:
    if (ctx->pc == 0x2E9804u) {
        ctx->pc = 0x2E9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9800u;
        // 0x2e9804: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9808u;
        goto label_2e9808;
    }
    ctx->pc = 0x2E9800u;
    SET_GPR_U32(ctx, 31, 0x2E9808u);
    ctx->pc = 0x2E9804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9800u;
    // 0x2e9804: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2E9800u, 0x2E9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9808u;
label_2e9808:
    // 0x2e9808: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2e9808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2e980c:
    // 0x2e980c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e9810:
    if (ctx->pc == 0x2E9810u) {
        ctx->pc = 0x2E9814u;
        goto label_2e9814;
    }
    ctx->pc = 0x2E980Cu;
    {
        const bool branch_taken_0x2e980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e980c) {
            ctx->pc = 0x2E983Cu;
            goto label_2e983c;
        }
    }
    ctx->pc = 0x2E9814u;
label_2e9814:
    // 0x2e9814: 0xc0a367c  jal         func_28D9F0
label_2e9818:
    if (ctx->pc == 0x2E9818u) {
        ctx->pc = 0x2E9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9814u;
        // 0x2e9818: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E981Cu;
        goto label_2e981c;
    }
    ctx->pc = 0x2E9814u;
    SET_GPR_U32(ctx, 31, 0x2E981Cu);
    ctx->pc = 0x2E9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9814u;
    // 0x2e9818: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E9814u, 0x2E981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E981Cu;
label_2e981c:
    // 0x2e981c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e9820:
    if (ctx->pc == 0x2E9820u) {
        ctx->pc = 0x2E9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E981Cu;
        // 0x2e9820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9824u;
        goto label_2e9824;
    }
    ctx->pc = 0x2E981Cu;
    {
        const bool branch_taken_0x2e981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E981Cu;
        // 0x2e9820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e981c) {
            ctx->pc = 0x2E983Cu;
            goto label_2e983c;
        }
    }
    ctx->pc = 0x2E9824u;
label_2e9824:
    // 0x2e9824: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9828:
    // 0x2e9828: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2e9828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e982c:
    // 0x2e982c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e982cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9830:
    // 0x2e9830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9834:
    // 0x2e9834: 0xc0bec3c  jal         func_2FB0F0
label_2e9838:
    if (ctx->pc == 0x2E9838u) {
        ctx->pc = 0x2E9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9834u;
        // 0x2e9838: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E983Cu;
        goto label_2e983c;
    }
    ctx->pc = 0x2E9834u;
    SET_GPR_U32(ctx, 31, 0x2E983Cu);
    ctx->pc = 0x2E9838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9834u;
    // 0x2e9838: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2E9834u, 0x2E983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E983Cu;
label_2e983c:
    // 0x2e983c: 0xc0a367c  jal         func_28D9F0
label_2e9840:
    if (ctx->pc == 0x2E9840u) {
        ctx->pc = 0x2E9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E983Cu;
        // 0x2e9840: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9844u;
        goto label_2e9844;
    }
    ctx->pc = 0x2E983Cu;
    SET_GPR_U32(ctx, 31, 0x2E9844u);
    ctx->pc = 0x2E9840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E983Cu;
    // 0x2e9840: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E983Cu, 0x2E9844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9844u;
label_2e9844:
    // 0x2e9844: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e9844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9848:
    // 0x2e9848: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2e984c:
    if (ctx->pc == 0x2E984Cu) {
        ctx->pc = 0x2E984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9848u;
        // 0x2e984c: 0x26a24b00  addiu       $v0, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9850u;
        goto label_2e9850;
    }
    ctx->pc = 0x2E9848u;
    {
        const bool branch_taken_0x2e9848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9848u;
        // 0x2e984c: 0x26a24b00  addiu       $v0, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9848) {
            ctx->pc = 0x2E987Cu;
            goto label_2e987c;
        }
    }
    ctx->pc = 0x2E9850u;
label_2e9850:
    // 0x2e9850: 0x86900092  lh          $s0, 0x92($s4)
    ctx->pc = 0x2e9850u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2e9854:
    // 0x2e9854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9858:
    // 0x2e9858: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e9858u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2e985c:
    // 0x2e985c: 0xc0884f6  jal         func_2213D8
label_2e9860:
    if (ctx->pc == 0x2E9860u) {
        ctx->pc = 0x2E9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E985Cu;
        // 0x2e9860: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9864u;
        goto label_2e9864;
    }
    ctx->pc = 0x2E985Cu;
    SET_GPR_U32(ctx, 31, 0x2E9864u);
    ctx->pc = 0x2E9860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E985Cu;
    // 0x2e9860: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E985Cu, 0x2E9864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9864u;
label_2e9864:
    // 0x2e9864: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9868:
    // 0x2e9868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e986c:
    // 0x2e986c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e986cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9870:
    // 0x2e9870: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e9870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e9874:
    // 0x2e9874: 0xc0bf800  jal         func_2FE000
label_2e9878:
    if (ctx->pc == 0x2E9878u) {
        ctx->pc = 0x2E9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9874u;
        // 0x2e9878: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E987Cu;
        goto label_2e987c;
    }
    ctx->pc = 0x2E9874u;
    SET_GPR_U32(ctx, 31, 0x2E987Cu);
    ctx->pc = 0x2E9878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9874u;
    // 0x2e9878: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E9874u, 0x2E987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E987Cu;
label_2e987c:
    // 0x2e987c: 0x92250040  lbu         $a1, 0x40($s1)
    ctx->pc = 0x2e987cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
label_2e9880:
    // 0x2e9880: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9884:
    // 0x2e9884: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e9884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e9888:
    // 0x2e9888: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2e9888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2e988c:
    // 0x2e988c: 0xc0a337e  jal         func_28CDF8
label_2e9890:
    if (ctx->pc == 0x2E9890u) {
        ctx->pc = 0x2E9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E988Cu;
        // 0x2e9890: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9894u;
        goto label_2e9894;
    }
    ctx->pc = 0x2E988Cu;
    SET_GPR_U32(ctx, 31, 0x2E9894u);
    ctx->pc = 0x2E9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E988Cu;
    // 0x2e9890: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E988Cu, 0x2E9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9894u;
label_2e9894:
    // 0x2e9894: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x2e9894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2e9898:
    // 0x2e9898: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2e9898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2e989c:
    // 0x2e989c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2e98a0:
    if (ctx->pc == 0x2E98A0u) {
        ctx->pc = 0x2E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E989Cu;
        // 0x2e98a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98A4u;
        goto label_2e98a4;
    }
    ctx->pc = 0x2E989Cu;
    {
        const bool branch_taken_0x2e989c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E989Cu;
        // 0x2e98a0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e989c) {
            ctx->pc = 0x2E98C0u;
            goto label_2e98c0;
        }
    }
    ctx->pc = 0x2E98A4u;
label_2e98a4:
    // 0x2e98a4: 0x92250041  lbu         $a1, 0x41($s1)
    ctx->pc = 0x2e98a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
label_2e98a8:
    // 0x2e98a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e98a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e98ac:
    // 0x2e98ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e98acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e98b0:
    // 0x2e98b0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2e98b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2e98b4:
    // 0x2e98b4: 0xc0a3398  jal         func_28CE60
label_2e98b8:
    if (ctx->pc == 0x2E98B8u) {
        ctx->pc = 0x2E98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98B4u;
        // 0x2e98b8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98BCu;
        goto label_2e98bc;
    }
    ctx->pc = 0x2E98B4u;
    SET_GPR_U32(ctx, 31, 0x2E98BCu);
    ctx->pc = 0x2E98B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98B4u;
    // 0x2e98b8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2E98B4u, 0x2E98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E98BCu;
label_2e98bc:
    // 0x2e98bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e98c0:
    // 0x2e98c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e98c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e98c4:
    // 0x2e98c4: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2e98c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e98c8:
    // 0x2e98c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e98cc:
    // 0x2e98cc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2e98ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2e98d0:
    // 0x2e98d0: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_2e98d4:
    if (ctx->pc == 0x2E98D4u) {
        ctx->pc = 0x2E98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98D0u;
        // 0x2e98d4: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98D8u;
        goto label_2e98d8;
    }
    ctx->pc = 0x2E98D0u;
    {
        const bool branch_taken_0x2e98d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98D0u;
        // 0x2e98d4: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98d0) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E98D8u;
label_2e98d8:
    // 0x2e98d8: 0x146200d6  bne         $v1, $v0, . + 4 + (0xD6 << 2)
label_2e98dc:
    if (ctx->pc == 0x2E98DCu) {
        ctx->pc = 0x2E98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98D8u;
        // 0x2e98dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98E0u;
        goto label_2e98e0;
    }
    ctx->pc = 0x2E98D8u;
    {
        const bool branch_taken_0x2e98d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98D8u;
        // 0x2e98dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98d8) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E98E0u;
label_2e98e0:
    // 0x2e98e0: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2e98e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2e98e4:
    // 0x2e98e4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2e98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2e98e8:
    // 0x2e98e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e98e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e98ec:
    // 0x2e98ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e98ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e98f0:
    // 0x2e98f0: 0xc089018  jal         func_224060
label_2e98f4:
    if (ctx->pc == 0x2E98F4u) {
        ctx->pc = 0x2E98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98F0u;
        // 0x2e98f4: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98F8u;
        goto label_2e98f8;
    }
    ctx->pc = 0x2E98F0u;
    SET_GPR_U32(ctx, 31, 0x2E98F8u);
    ctx->pc = 0x2E98F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98F0u;
    // 0x2e98f4: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2E98F0u, 0x2E98F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E98F8u;
label_2e98f8:
    // 0x2e98f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e98f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e98fc:
    // 0x2e98fc: 0x1490000e  bne         $a0, $s0, . + 4 + (0xE << 2)
label_2e9900:
    if (ctx->pc == 0x2E9900u) {
        ctx->pc = 0x2E9904u;
        goto label_2e9904;
    }
    ctx->pc = 0x2E98FCu;
    {
        const bool branch_taken_0x2e98fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e98fc) {
            ctx->pc = 0x2E9938u;
            goto label_2e9938;
        }
    }
    ctx->pc = 0x2E9904u;
label_2e9904:
    // 0x2e9904: 0x92230043  lbu         $v1, 0x43($s1)
    ctx->pc = 0x2e9904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
label_2e9908:
    // 0x2e9908: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e9908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e990c:
    // 0x2e990c: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
label_2e9910:
    if (ctx->pc == 0x2E9910u) {
        ctx->pc = 0x2E9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E990Cu;
        // 0x2e9910: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9914u;
        goto label_2e9914;
    }
    ctx->pc = 0x2E990Cu;
    {
        const bool branch_taken_0x2e990c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E990Cu;
        // 0x2e9910: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e990c) {
            ctx->pc = 0x2E9930u;
            goto label_2e9930;
        }
    }
    ctx->pc = 0x2E9914u;
label_2e9914:
    // 0x2e9914: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2e9918:
    if (ctx->pc == 0x2E9918u) {
        ctx->pc = 0x2E9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9914u;
        // 0x2e9918: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E991Cu;
        goto label_2e991c;
    }
    ctx->pc = 0x2E9914u;
    {
        const bool branch_taken_0x2e9914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9914u;
        // 0x2e9918: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9914) {
            ctx->pc = 0x2E9938u;
            goto label_2e9938;
        }
    }
    ctx->pc = 0x2E991Cu;
label_2e991c:
    // 0x2e991c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e991cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9920:
    // 0x2e9920: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x2e9920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e9924:
    // 0x2e9924: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x2e9924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
label_2e9928:
    // 0x2e9928: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_2e992c:
    if (ctx->pc == 0x2E992Cu) {
        ctx->pc = 0x2E992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9928u;
        // 0x2e992c: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9930u;
        goto label_2e9930;
    }
    ctx->pc = 0x2E9928u;
    {
        const bool branch_taken_0x2e9928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9928u;
        // 0x2e992c: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9928) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9930u;
label_2e9930:
    // 0x2e9930: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2e9930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e9934:
    // 0x2e9934: 0xa2220043  sb          $v0, 0x43($s1)
    ctx->pc = 0x2e9934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 2));
label_2e9938:
    // 0x2e9938: 0xc0e4060  jal         func_390180
label_2e993c:
    if (ctx->pc == 0x2E993Cu) {
        ctx->pc = 0x2E993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9938u;
        // 0x2e993c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9940u;
        goto label_2e9940;
    }
    ctx->pc = 0x2E9938u;
    SET_GPR_U32(ctx, 31, 0x2E9940u);
    ctx->pc = 0x2E993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9938u;
    // 0x2e993c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E9938u, 0x2E9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9940u;
label_2e9940:
    // 0x2e9940: 0xc105e98  jal         func_417A60
label_2e9944:
    if (ctx->pc == 0x2E9944u) {
        ctx->pc = 0x2E9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9940u;
        // 0x2e9944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9948u;
        goto label_2e9948;
    }
    ctx->pc = 0x2E9940u;
    SET_GPR_U32(ctx, 31, 0x2E9948u);
    ctx->pc = 0x2E9944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9940u;
    // 0x2e9944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2E9940u, 0x2E9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9948u;
label_2e9948:
    // 0x2e9948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e994c:
    // 0x2e994c: 0x92220043  lbu         $v0, 0x43($s1)
    ctx->pc = 0x2e994cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
label_2e9950:
    // 0x2e9950: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_2e9954:
    if (ctx->pc == 0x2E9954u) {
        ctx->pc = 0x2E9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9950u;
        // 0x2e9954: 0x92230043  lbu         $v1, 0x43($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9958u;
        goto label_2e9958;
    }
    ctx->pc = 0x2E9950u;
    {
        const bool branch_taken_0x2e9950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9950) {
            ctx->pc = 0x2E9954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9950u;
            // 0x2e9954: 0x92230043  lbu         $v1, 0x43($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E99F8u;
            goto label_2e99f8;
        }
    }
    ctx->pc = 0x2E9958u;
label_2e9958:
    // 0x2e9958: 0xc10587a  jal         func_4161E8
label_2e995c:
    if (ctx->pc == 0x2E995Cu) {
        ctx->pc = 0x2E995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9958u;
        // 0x2e995c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9960u;
        goto label_2e9960;
    }
    ctx->pc = 0x2E9958u;
    SET_GPR_U32(ctx, 31, 0x2E9960u);
    ctx->pc = 0x2E995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9958u;
    // 0x2e995c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E9958u, 0x2E9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9960u;
label_2e9960:
    // 0x2e9960: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e9960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9964:
    // 0x2e9964: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e9964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e9968:
    // 0x2e9968: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e9968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e996c:
    // 0x2e996c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2e996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2e9970:
    // 0x2e9970: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e9970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e9974:
    // 0x2e9974: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2e9974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e9978:
    // 0x2e9978: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e9978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e997c:
    // 0x2e997c: 0xc0cdb38  jal         func_336CE0
label_2e9980:
    if (ctx->pc == 0x2E9980u) {
        ctx->pc = 0x2E9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E997Cu;
        // 0x2e9980: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9984u;
        goto label_2e9984;
    }
    ctx->pc = 0x2E997Cu;
    SET_GPR_U32(ctx, 31, 0x2E9984u);
    ctx->pc = 0x2E9980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E997Cu;
    // 0x2e9980: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E997Cu, 0x2E9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9984u;
label_2e9984:
    // 0x2e9984: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2e9984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2e9988:
    // 0x2e9988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e9988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e998c:
    // 0x2e998c: 0x0  nop
    ctx->pc = 0x2e998cu;
    // NOP
label_2e9990:
    // 0x2e9990: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e9990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e9994:
    // 0x2e9994: 0x0  nop
    ctx->pc = 0x2e9994u;
    // NOP
label_2e9998:
    // 0x2e9998: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2e999c:
    if (ctx->pc == 0x2E999Cu) {
        ctx->pc = 0x2E999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9998u;
        // 0x2e999c: 0x92220043  lbu         $v0, 0x43($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E99A0u;
        goto label_2e99a0;
    }
    ctx->pc = 0x2E9998u;
    {
        const bool branch_taken_0x2e9998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9998) {
            ctx->pc = 0x2E999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9998u;
            // 0x2e999c: 0x92220043  lbu         $v0, 0x43($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E99ECu;
            goto label_2e99ec;
        }
    }
    ctx->pc = 0x2E99A0u;
label_2e99a0:
    // 0x2e99a0: 0xc08bfbc  jal         func_22FEF0
label_2e99a4:
    if (ctx->pc == 0x2E99A4u) {
        ctx->pc = 0x2E99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99A0u;
        // 0x2e99a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E99A8u;
        goto label_2e99a8;
    }
    ctx->pc = 0x2E99A0u;
    SET_GPR_U32(ctx, 31, 0x2E99A8u);
    ctx->pc = 0x2E99A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E99A0u;
    // 0x2e99a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E99A0u, 0x2E99A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99A8u;
label_2e99a8:
    // 0x2e99a8: 0xc0a367c  jal         func_28D9F0
label_2e99ac:
    if (ctx->pc == 0x2E99ACu) {
        ctx->pc = 0x2E99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99A8u;
        // 0x2e99ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E99B0u;
        goto label_2e99b0;
    }
    ctx->pc = 0x2E99A8u;
    SET_GPR_U32(ctx, 31, 0x2E99B0u);
    ctx->pc = 0x2E99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E99A8u;
    // 0x2e99ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E99A8u, 0x2E99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99B0u;
label_2e99b0:
    // 0x2e99b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e99b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e99b4:
    // 0x2e99b4: 0x1080009e  beqz        $a0, . + 4 + (0x9E << 2)
label_2e99b8:
    if (ctx->pc == 0x2E99B8u) {
        ctx->pc = 0x2E99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99B4u;
        // 0x2e99b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E99BCu;
        goto label_2e99bc;
    }
    ctx->pc = 0x2E99B4u;
    {
        const bool branch_taken_0x2e99b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99B4u;
        // 0x2e99b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99b4) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E99BCu;
label_2e99bc:
    // 0x2e99bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e99bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e99c0:
    // 0x2e99c0: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e99c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e99c4:
    // 0x2e99c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e99c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e99c8:
    // 0x2e99c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e99c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2e99cc:
    // 0x2e99cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e99ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e99d0:
    // 0x2e99d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2e99d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e99d4:
    // 0x2e99d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e99d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e99d8:
    // 0x2e99d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e99d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e99dc:
    // 0x2e99dc: 0xc0bee7a  jal         func_2FB9E8
label_2e99e0:
    if (ctx->pc == 0x2E99E0u) {
        ctx->pc = 0x2E99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99DCu;
        // 0x2e99e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E99E4u;
        goto label_2e99e4;
    }
    ctx->pc = 0x2E99DCu;
    SET_GPR_U32(ctx, 31, 0x2E99E4u);
    ctx->pc = 0x2E99E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E99DCu;
    // 0x2e99e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E99DCu, 0x2E99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99E4u;
label_2e99e4:
    // 0x2e99e4: 0x10000093  b           . + 4 + (0x93 << 2)
label_2e99e8:
    if (ctx->pc == 0x2E99E8u) {
        ctx->pc = 0x2E99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99E4u;
        // 0x2e99e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E99ECu;
        goto label_2e99ec;
    }
    ctx->pc = 0x2E99E4u;
    {
        const bool branch_taken_0x2e99e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99E4u;
        // 0x2e99e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99e4) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E99ECu;
label_2e99ec:
    // 0x2e99ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e99f0:
    // 0x2e99f0: 0xa2220043  sb          $v0, 0x43($s1)
    ctx->pc = 0x2e99f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 2));
label_2e99f4:
    // 0x2e99f4: 0x92230043  lbu         $v1, 0x43($s1)
    ctx->pc = 0x2e99f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
label_2e99f8:
    // 0x2e99f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e99fc:
    // 0x2e99fc: 0x54620043  bnel        $v1, $v0, . + 4 + (0x43 << 2)
label_2e9a00:
    if (ctx->pc == 0x2E9A00u) {
        ctx->pc = 0x2E9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99FCu;
        // 0x2e9a00: 0x92230043  lbu         $v1, 0x43($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9A04u;
        goto label_2e9a04;
    }
    ctx->pc = 0x2E99FCu;
    {
        const bool branch_taken_0x2e99fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e99fc) {
            ctx->pc = 0x2E9A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E99FCu;
            // 0x2e9a00: 0x92230043  lbu         $v1, 0x43($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9B0Cu;
            goto label_2e9b0c;
        }
    }
    ctx->pc = 0x2E9A04u;
label_2e9a04:
    // 0x2e9a04: 0xc047e6c  jal         func_11F9B0
label_2e9a08:
    if (ctx->pc == 0x2E9A08u) {
        ctx->pc = 0x2E9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A04u;
        // 0x2e9a08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9A0Cu;
        goto label_2e9a0c;
    }
    ctx->pc = 0x2E9A04u;
    SET_GPR_U32(ctx, 31, 0x2E9A0Cu);
    ctx->pc = 0x2E9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A04u;
    // 0x2e9a08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2E9A04u, 0x2E9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A0Cu;
label_2e9a0c:
    // 0x2e9a0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e9a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9a10:
    // 0x2e9a10: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
label_2e9a14:
    if (ctx->pc == 0x2E9A14u) {
        ctx->pc = 0x2E9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A10u;
        // 0x2e9a14: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9A18u;
        goto label_2e9a18;
    }
    ctx->pc = 0x2E9A10u;
    {
        const bool branch_taken_0x2e9a10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A10u;
        // 0x2e9a14: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a10) {
            ctx->pc = 0x2E9B08u;
            goto label_2e9b08;
        }
    }
    ctx->pc = 0x2E9A18u;
label_2e9a18:
    // 0x2e9a18: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2e9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e9a1c:
    // 0x2e9a1c: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x2e9a1cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e9a20:
    // 0x2e9a20: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2e9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2e9a24:
    // 0x2e9a24: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x2e9a24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_2e9a28:
    // 0x2e9a28: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e9a28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2e9a2c:
    // 0x2e9a2c: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x2e9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_2e9a30:
    // 0x2e9a30: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2e9a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2e9a34:
    // 0x2e9a34: 0x40f809  jalr        $v0
label_2e9a38:
    if (ctx->pc == 0x2E9A38u) {
        ctx->pc = 0x2E9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A34u;
        // 0x2e9a38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9A3Cu;
        goto label_2e9a3c;
    }
    ctx->pc = 0x2E9A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E9A3Cu);
        ctx->pc = 0x2E9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A34u;
        // 0x2e9a38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9A34u, 0x2E9A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9A3Cu;
label_2e9a3c:
    // 0x2e9a3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e9a3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9a40:
    // 0x2e9a40: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2e9a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e9a44:
    // 0x2e9a44: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2e9a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2e9a48:
    // 0x2e9a48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2e9a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e9a4c:
    // 0x2e9a4c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2e9a4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9a50:
    // 0x2e9a50: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e9a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9a54:
    // 0x2e9a54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9a58:
    // 0x2e9a58: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e9a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e9a5c:
    // 0x2e9a5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e9a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e9a60:
    // 0x2e9a60: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e9a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e9a64:
    // 0x2e9a64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e9a64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e9a68:
    // 0x2e9a68: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e9a68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e9a6c:
    // 0x2e9a6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e9a6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e9a70:
    // 0x2e9a70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e9a70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e9a74:
    // 0x2e9a74: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e9a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e9a78:
    // 0x2e9a78: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e9a78u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e9a7c:
    // 0x2e9a7c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2e9a7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e9a80:
    // 0x2e9a80: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2e9a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2e9a84:
    // 0x2e9a84: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e9a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2e9a88:
    // 0x2e9a88: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2e9a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2e9a8c:
    // 0x2e9a8c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e9a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2e9a90:
    // 0x2e9a90: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2e9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2e9a94:
    // 0x2e9a94: 0xc0a367c  jal         func_28D9F0
label_2e9a98:
    if (ctx->pc == 0x2E9A98u) {
        ctx->pc = 0x2E9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A94u;
        // 0x2e9a98: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9A9Cu;
        goto label_2e9a9c;
    }
    ctx->pc = 0x2E9A94u;
    SET_GPR_U32(ctx, 31, 0x2E9A9Cu);
    ctx->pc = 0x2E9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A94u;
    // 0x2e9a98: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E9A94u, 0x2E9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A9Cu;
label_2e9a9c:
    // 0x2e9a9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e9a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9aa0:
    // 0x2e9aa0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2e9aa4:
    if (ctx->pc == 0x2E9AA4u) {
        ctx->pc = 0x2E9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AA0u;
        // 0x2e9aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9AA8u;
        goto label_2e9aa8;
    }
    ctx->pc = 0x2E9AA0u;
    {
        const bool branch_taken_0x2e9aa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AA0u;
        // 0x2e9aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9aa0) {
            ctx->pc = 0x2E9AC8u;
            goto label_2e9ac8;
        }
    }
    ctx->pc = 0x2E9AA8u;
label_2e9aa8:
    // 0x2e9aa8: 0xc0884f6  jal         func_2213D8
label_2e9aac:
    if (ctx->pc == 0x2E9AACu) {
        ctx->pc = 0x2E9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AA8u;
        // 0x2e9aac: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9AB0u;
        goto label_2e9ab0;
    }
    ctx->pc = 0x2E9AA8u;
    SET_GPR_U32(ctx, 31, 0x2E9AB0u);
    ctx->pc = 0x2E9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AA8u;
    // 0x2e9aac: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E9AA8u, 0x2E9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AB0u;
label_2e9ab0:
    // 0x2e9ab0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9ab4:
    // 0x2e9ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ab8:
    // 0x2e9ab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e9ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9abc:
    // 0x2e9abc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e9abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e9ac0:
    // 0x2e9ac0: 0xc0bf800  jal         func_2FE000
label_2e9ac4:
    if (ctx->pc == 0x2E9AC4u) {
        ctx->pc = 0x2E9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AC0u;
        // 0x2e9ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9AC8u;
        goto label_2e9ac8;
    }
    ctx->pc = 0x2E9AC0u;
    SET_GPR_U32(ctx, 31, 0x2E9AC8u);
    ctx->pc = 0x2E9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AC0u;
    // 0x2e9ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E9AC0u, 0x2E9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AC8u;
label_2e9ac8:
    // 0x2e9ac8: 0xc0a367c  jal         func_28D9F0
label_2e9acc:
    if (ctx->pc == 0x2E9ACCu) {
        ctx->pc = 0x2E9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AC8u;
        // 0x2e9acc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9AD0u;
        goto label_2e9ad0;
    }
    ctx->pc = 0x2E9AC8u;
    SET_GPR_U32(ctx, 31, 0x2E9AD0u);
    ctx->pc = 0x2E9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AC8u;
    // 0x2e9acc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E9AC8u, 0x2E9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AD0u;
label_2e9ad0:
    // 0x2e9ad0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_2e9ad4:
    if (ctx->pc == 0x2E9AD4u) {
        ctx->pc = 0x2E9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AD0u;
        // 0x2e9ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9AD8u;
        goto label_2e9ad8;
    }
    ctx->pc = 0x2E9AD0u;
    {
        const bool branch_taken_0x2e9ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AD0u;
        // 0x2e9ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ad0) {
            ctx->pc = 0x2E9C30u;
            goto label_2e9c30;
        }
    }
    ctx->pc = 0x2E9AD8u;
label_2e9ad8:
    // 0x2e9ad8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e9ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e9adc:
    // 0x2e9adc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e9adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e9ae0:
    // 0x2e9ae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9ae4:
    // 0x2e9ae4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9ae8:
    // 0x2e9ae8: 0x24060225  addiu       $a2, $zero, 0x225
    ctx->pc = 0x2e9ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_2e9aec:
    // 0x2e9aec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e9aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9af0:
    // 0x2e9af0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e9af0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e9af4:
    // 0x2e9af4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9af8:
    // 0x2e9af8: 0xc0be968  jal         func_2FA5A0
label_2e9afc:
    if (ctx->pc == 0x2E9AFCu) {
        ctx->pc = 0x2E9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AF8u;
        // 0x2e9afc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9B00u;
        goto label_2e9b00;
    }
    ctx->pc = 0x2E9AF8u;
    SET_GPR_U32(ctx, 31, 0x2E9B00u);
    ctx->pc = 0x2E9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AF8u;
    // 0x2e9afc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2E9AF8u, 0x2E9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B00u;
label_2e9b00:
    // 0x2e9b00: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2e9b04:
    if (ctx->pc == 0x2E9B04u) {
        ctx->pc = 0x2E9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B00u;
        // 0x2e9b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9B08u;
        goto label_2e9b08;
    }
    ctx->pc = 0x2E9B00u;
    {
        const bool branch_taken_0x2e9b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B00u;
        // 0x2e9b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b00) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9B08u;
label_2e9b08:
    // 0x2e9b08: 0x92230043  lbu         $v1, 0x43($s1)
    ctx->pc = 0x2e9b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
label_2e9b0c:
    // 0x2e9b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9b10:
    // 0x2e9b10: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
label_2e9b14:
    if (ctx->pc == 0x2E9B14u) {
        ctx->pc = 0x2E9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B10u;
        // 0x2e9b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9B18u;
        goto label_2e9b18;
    }
    ctx->pc = 0x2E9B10u;
    {
        const bool branch_taken_0x2e9b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B10u;
        // 0x2e9b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b10) {
            ctx->pc = 0x2E9C34u;
            goto label_2e9c34;
        }
    }
    ctx->pc = 0x2E9B18u;
label_2e9b18:
    // 0x2e9b18: 0xc105896  jal         func_416258
label_2e9b1c:
    if (ctx->pc == 0x2E9B1Cu) {
        ctx->pc = 0x2E9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B18u;
        // 0x2e9b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9B20u;
        goto label_2e9b20;
    }
    ctx->pc = 0x2E9B18u;
    SET_GPR_U32(ctx, 31, 0x2E9B20u);
    ctx->pc = 0x2E9B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B18u;
    // 0x2e9b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2E9B18u, 0x2E9B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B20u;
label_2e9b20:
    // 0x2e9b20: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2e9b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2e9b24:
    // 0x2e9b24: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2e9b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2e9b28:
    // 0x2e9b28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9b2c:
    // 0x2e9b2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e9b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e9b30:
    // 0x2e9b30: 0xc0cd790  jal         func_335E40
label_2e9b34:
    if (ctx->pc == 0x2E9B34u) {
        ctx->pc = 0x2E9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B30u;
        // 0x2e9b34: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9B38u;
        goto label_2e9b38;
    }
    ctx->pc = 0x2E9B30u;
    SET_GPR_U32(ctx, 31, 0x2E9B38u);
    ctx->pc = 0x2E9B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B30u;
    // 0x2e9b34: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x2E9B30u, 0x2E9B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B38u;
label_2e9b38:
    // 0x2e9b38: 0xc10587a  jal         func_4161E8
label_2e9b3c:
    if (ctx->pc == 0x2E9B3Cu) {
        ctx->pc = 0x2E9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B38u;
        // 0x2e9b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9B40u;
        goto label_2e9b40;
    }
    ctx->pc = 0x2E9B38u;
    SET_GPR_U32(ctx, 31, 0x2E9B40u);
    ctx->pc = 0x2E9B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B38u;
    // 0x2e9b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E9B38u, 0x2E9B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B40u;
label_2e9b40:
    // 0x2e9b40: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e9b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e9b44:
    // 0x2e9b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9b48:
    // 0x2e9b48: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e9b4c:
    // 0x2e9b4c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2e9b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e9b50:
    // 0x2e9b50: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2e9b50u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2e9b54:
    // 0x2e9b54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e9b54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2e9b58:
    // 0x2e9b58: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2e9b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e9b5c:
    // 0x2e9b5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e9b5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2e9b60:
    // 0x2e9b60: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e9b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e9b64:
    // 0x2e9b64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2e9b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2e9b68:
    // 0x2e9b68: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2e9b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2e9b6c:
    // 0x2e9b6c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2e9b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2e9b70:
    // 0x2e9b70: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2e9b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2e9b74:
    // 0x2e9b74: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2e9b74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2e9b78:
    // 0x2e9b78: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x2e9b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2e9b7c:
    // 0x2e9b7c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2e9b7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e9b80:
    // 0x2e9b80: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e9b80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e9b84:
    // 0x2e9b84: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2e9b84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2e9b88:
    // 0x2e9b88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e9b88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e9b8c:
    // 0x2e9b8c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2e9b8cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_2e9b90:
    // 0x2e9b90: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x2e9b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_2e9b94:
    // 0x2e9b94: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x2e9b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_2e9b98:
    // 0x2e9b98: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x2e9b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_2e9b9c:
    // 0x2e9b9c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2e9b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2e9ba0:
    // 0x2e9ba0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e9ba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9ba4:
    // 0x2e9ba4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e9ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e9ba8:
    // 0x2e9ba8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2e9ba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2e9bac:
    // 0x2e9bac: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e9bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e9bb0:
    // 0x2e9bb0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e9bb0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e9bb4:
    // 0x2e9bb4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2e9bb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e9bb8:
    // 0x2e9bb8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2e9bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2e9bbc:
    // 0x2e9bbc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2e9bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2e9bc0:
    // 0x2e9bc0: 0xc08bfa0  jal         func_22FE80
label_2e9bc4:
    if (ctx->pc == 0x2E9BC4u) {
        ctx->pc = 0x2E9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BC0u;
        // 0x2e9bc4: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9BC8u;
        goto label_2e9bc8;
    }
    ctx->pc = 0x2E9BC0u;
    SET_GPR_U32(ctx, 31, 0x2E9BC8u);
    ctx->pc = 0x2E9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BC0u;
    // 0x2e9bc4: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2E9BC0u, 0x2E9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BC8u;
label_2e9bc8:
    // 0x2e9bc8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e9bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e9bcc:
    // 0x2e9bcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e9bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9bd0:
    // 0x2e9bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e9bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9bd4:
    // 0x2e9bd4: 0xc088878  jal         func_2221E0
label_2e9bd8:
    if (ctx->pc == 0x2E9BD8u) {
        ctx->pc = 0x2E9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BD4u;
        // 0x2e9bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9BDCu;
        goto label_2e9bdc;
    }
    ctx->pc = 0x2E9BD4u;
    SET_GPR_U32(ctx, 31, 0x2E9BDCu);
    ctx->pc = 0x2E9BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BD4u;
    // 0x2e9bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2E9BD4u, 0x2E9BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BDCu;
label_2e9bdc:
    // 0x2e9bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9be0:
    // 0x2e9be0: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_2e9be4:
    if (ctx->pc == 0x2E9BE4u) {
        ctx->pc = 0x2E9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BE0u;
        // 0x2e9be4: 0x92220043  lbu         $v0, 0x43($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9BE8u;
        goto label_2e9be8;
    }
    ctx->pc = 0x2E9BE0u;
    {
        const bool branch_taken_0x2e9be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9be0) {
            ctx->pc = 0x2E9BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9BE0u;
            // 0x2e9be4: 0x92220043  lbu         $v0, 0x43($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9C28u;
            goto label_2e9c28;
        }
    }
    ctx->pc = 0x2E9BE8u;
label_2e9be8:
    // 0x2e9be8: 0xc0a367c  jal         func_28D9F0
label_2e9bec:
    if (ctx->pc == 0x2E9BECu) {
        ctx->pc = 0x2E9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BE8u;
        // 0x2e9bec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9BF0u;
        goto label_2e9bf0;
    }
    ctx->pc = 0x2E9BE8u;
    SET_GPR_U32(ctx, 31, 0x2E9BF0u);
    ctx->pc = 0x2E9BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BE8u;
    // 0x2e9bec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E9BE8u, 0x2E9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BF0u;
label_2e9bf0:
    // 0x2e9bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9bf4:
    // 0x2e9bf4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2e9bf8:
    if (ctx->pc == 0x2E9BF8u) {
        ctx->pc = 0x2E9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BF4u;
        // 0x2e9bf8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9BFCu;
        goto label_2e9bfc;
    }
    ctx->pc = 0x2E9BF4u;
    {
        const bool branch_taken_0x2e9bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BF4u;
        // 0x2e9bf8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9bf4) {
            ctx->pc = 0x2E9C24u;
            goto label_2e9c24;
        }
    }
    ctx->pc = 0x2E9BFCu;
label_2e9bfc:
    // 0x2e9bfc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e9c00:
    // 0x2e9c00: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e9c00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e9c04:
    // 0x2e9c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e9c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c08:
    // 0x2e9c08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e9c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2e9c0c:
    // 0x2e9c0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9c10:
    // 0x2e9c10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e9c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9c14:
    // 0x2e9c14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c18:
    // 0x2e9c18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c1c:
    // 0x2e9c1c: 0xc0bee7a  jal         func_2FB9E8
label_2e9c20:
    if (ctx->pc == 0x2E9C20u) {
        ctx->pc = 0x2E9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C1Cu;
        // 0x2e9c20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9C24u;
        goto label_2e9c24;
    }
    ctx->pc = 0x2E9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C24u);
    ctx->pc = 0x2E9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C1Cu;
    // 0x2e9c20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E9C1Cu, 0x2E9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C24u;
label_2e9c24:
    // 0x2e9c24: 0x92220043  lbu         $v0, 0x43($s1)
    ctx->pc = 0x2e9c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
label_2e9c28:
    // 0x2e9c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e9c2c:
    // 0x2e9c2c: 0xa2220043  sb          $v0, 0x43($s1)
    ctx->pc = 0x2e9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 2));
label_2e9c30:
    // 0x2e9c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9c34:
    // 0x2e9c34: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2e9c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e9c38:
    // 0x2e9c38: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2e9c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e9c3c:
    // 0x2e9c3c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2e9c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e9c40:
    // 0x2e9c40: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2e9c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e9c44:
    // 0x2e9c44: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2e9c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e9c48:
    // 0x2e9c48: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2e9c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e9c4c:
    // 0x2e9c4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e9c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2e9c50:
    // 0x2e9c50: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2e9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e9c54:
    // 0x2e9c54: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2e9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e9c58:
    // 0x2e9c58: 0x3e00008  jr          $ra
label_2e9c5c:
    if (ctx->pc == 0x2E9C5Cu) {
        ctx->pc = 0x2E9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C58u;
        // 0x2e9c5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9C60u;
        goto label_fallthrough_0x2e9c58;
    }
    ctx->pc = 0x2E9C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C58u;
        // 0x2e9c5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e9c58:
    ctx->pc = 0x2E9C60u;
}
