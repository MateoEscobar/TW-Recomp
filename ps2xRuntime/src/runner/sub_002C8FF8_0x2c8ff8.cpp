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

// Function: sub_002C8FF8
// Address: 0x2c8ff8 - 0x2c9578
void sub_002C8FF8_0x2c8ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8FF8_0x2c8ff8");
#endif

    switch (ctx->pc) {
        case 0x2c8ff8u: goto label_2c8ff8;
        case 0x2c8ffcu: goto label_2c8ffc;
        case 0x2c9000u: goto label_2c9000;
        case 0x2c9004u: goto label_2c9004;
        case 0x2c9008u: goto label_2c9008;
        case 0x2c900cu: goto label_2c900c;
        case 0x2c9010u: goto label_2c9010;
        case 0x2c9014u: goto label_2c9014;
        case 0x2c9018u: goto label_2c9018;
        case 0x2c901cu: goto label_2c901c;
        case 0x2c9020u: goto label_2c9020;
        case 0x2c9024u: goto label_2c9024;
        case 0x2c9028u: goto label_2c9028;
        case 0x2c902cu: goto label_2c902c;
        case 0x2c9030u: goto label_2c9030;
        case 0x2c9034u: goto label_2c9034;
        case 0x2c9038u: goto label_2c9038;
        case 0x2c903cu: goto label_2c903c;
        case 0x2c9040u: goto label_2c9040;
        case 0x2c9044u: goto label_2c9044;
        case 0x2c9048u: goto label_2c9048;
        case 0x2c904cu: goto label_2c904c;
        case 0x2c9050u: goto label_2c9050;
        case 0x2c9054u: goto label_2c9054;
        case 0x2c9058u: goto label_2c9058;
        case 0x2c905cu: goto label_2c905c;
        case 0x2c9060u: goto label_2c9060;
        case 0x2c9064u: goto label_2c9064;
        case 0x2c9068u: goto label_2c9068;
        case 0x2c906cu: goto label_2c906c;
        case 0x2c9070u: goto label_2c9070;
        case 0x2c9074u: goto label_2c9074;
        case 0x2c9078u: goto label_2c9078;
        case 0x2c907cu: goto label_2c907c;
        case 0x2c9080u: goto label_2c9080;
        case 0x2c9084u: goto label_2c9084;
        case 0x2c9088u: goto label_2c9088;
        case 0x2c908cu: goto label_2c908c;
        case 0x2c9090u: goto label_2c9090;
        case 0x2c9094u: goto label_2c9094;
        case 0x2c9098u: goto label_2c9098;
        case 0x2c909cu: goto label_2c909c;
        case 0x2c90a0u: goto label_2c90a0;
        case 0x2c90a4u: goto label_2c90a4;
        case 0x2c90a8u: goto label_2c90a8;
        case 0x2c90acu: goto label_2c90ac;
        case 0x2c90b0u: goto label_2c90b0;
        case 0x2c90b4u: goto label_2c90b4;
        case 0x2c90b8u: goto label_2c90b8;
        case 0x2c90bcu: goto label_2c90bc;
        case 0x2c90c0u: goto label_2c90c0;
        case 0x2c90c4u: goto label_2c90c4;
        case 0x2c90c8u: goto label_2c90c8;
        case 0x2c90ccu: goto label_2c90cc;
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c90d4u: goto label_2c90d4;
        case 0x2c90d8u: goto label_2c90d8;
        case 0x2c90dcu: goto label_2c90dc;
        case 0x2c90e0u: goto label_2c90e0;
        case 0x2c90e4u: goto label_2c90e4;
        case 0x2c90e8u: goto label_2c90e8;
        case 0x2c90ecu: goto label_2c90ec;
        case 0x2c90f0u: goto label_2c90f0;
        case 0x2c90f4u: goto label_2c90f4;
        case 0x2c90f8u: goto label_2c90f8;
        case 0x2c90fcu: goto label_2c90fc;
        case 0x2c9100u: goto label_2c9100;
        case 0x2c9104u: goto label_2c9104;
        case 0x2c9108u: goto label_2c9108;
        case 0x2c910cu: goto label_2c910c;
        case 0x2c9110u: goto label_2c9110;
        case 0x2c9114u: goto label_2c9114;
        case 0x2c9118u: goto label_2c9118;
        case 0x2c911cu: goto label_2c911c;
        case 0x2c9120u: goto label_2c9120;
        case 0x2c9124u: goto label_2c9124;
        case 0x2c9128u: goto label_2c9128;
        case 0x2c912cu: goto label_2c912c;
        case 0x2c9130u: goto label_2c9130;
        case 0x2c9134u: goto label_2c9134;
        case 0x2c9138u: goto label_2c9138;
        case 0x2c913cu: goto label_2c913c;
        case 0x2c9140u: goto label_2c9140;
        case 0x2c9144u: goto label_2c9144;
        case 0x2c9148u: goto label_2c9148;
        case 0x2c914cu: goto label_2c914c;
        case 0x2c9150u: goto label_2c9150;
        case 0x2c9154u: goto label_2c9154;
        case 0x2c9158u: goto label_2c9158;
        case 0x2c915cu: goto label_2c915c;
        case 0x2c9160u: goto label_2c9160;
        case 0x2c9164u: goto label_2c9164;
        case 0x2c9168u: goto label_2c9168;
        case 0x2c916cu: goto label_2c916c;
        case 0x2c9170u: goto label_2c9170;
        case 0x2c9174u: goto label_2c9174;
        case 0x2c9178u: goto label_2c9178;
        case 0x2c917cu: goto label_2c917c;
        case 0x2c9180u: goto label_2c9180;
        case 0x2c9184u: goto label_2c9184;
        case 0x2c9188u: goto label_2c9188;
        case 0x2c918cu: goto label_2c918c;
        case 0x2c9190u: goto label_2c9190;
        case 0x2c9194u: goto label_2c9194;
        case 0x2c9198u: goto label_2c9198;
        case 0x2c919cu: goto label_2c919c;
        case 0x2c91a0u: goto label_2c91a0;
        case 0x2c91a4u: goto label_2c91a4;
        case 0x2c91a8u: goto label_2c91a8;
        case 0x2c91acu: goto label_2c91ac;
        case 0x2c91b0u: goto label_2c91b0;
        case 0x2c91b4u: goto label_2c91b4;
        case 0x2c91b8u: goto label_2c91b8;
        case 0x2c91bcu: goto label_2c91bc;
        case 0x2c91c0u: goto label_2c91c0;
        case 0x2c91c4u: goto label_2c91c4;
        case 0x2c91c8u: goto label_2c91c8;
        case 0x2c91ccu: goto label_2c91cc;
        case 0x2c91d0u: goto label_2c91d0;
        case 0x2c91d4u: goto label_2c91d4;
        case 0x2c91d8u: goto label_2c91d8;
        case 0x2c91dcu: goto label_2c91dc;
        case 0x2c91e0u: goto label_2c91e0;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c91e8u: goto label_2c91e8;
        case 0x2c91ecu: goto label_2c91ec;
        case 0x2c91f0u: goto label_2c91f0;
        case 0x2c91f4u: goto label_2c91f4;
        case 0x2c91f8u: goto label_2c91f8;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c9200u: goto label_2c9200;
        case 0x2c9204u: goto label_2c9204;
        case 0x2c9208u: goto label_2c9208;
        case 0x2c920cu: goto label_2c920c;
        case 0x2c9210u: goto label_2c9210;
        case 0x2c9214u: goto label_2c9214;
        case 0x2c9218u: goto label_2c9218;
        case 0x2c921cu: goto label_2c921c;
        case 0x2c9220u: goto label_2c9220;
        case 0x2c9224u: goto label_2c9224;
        case 0x2c9228u: goto label_2c9228;
        case 0x2c922cu: goto label_2c922c;
        case 0x2c9230u: goto label_2c9230;
        case 0x2c9234u: goto label_2c9234;
        case 0x2c9238u: goto label_2c9238;
        case 0x2c923cu: goto label_2c923c;
        case 0x2c9240u: goto label_2c9240;
        case 0x2c9244u: goto label_2c9244;
        case 0x2c9248u: goto label_2c9248;
        case 0x2c924cu: goto label_2c924c;
        case 0x2c9250u: goto label_2c9250;
        case 0x2c9254u: goto label_2c9254;
        case 0x2c9258u: goto label_2c9258;
        case 0x2c925cu: goto label_2c925c;
        case 0x2c9260u: goto label_2c9260;
        case 0x2c9264u: goto label_2c9264;
        case 0x2c9268u: goto label_2c9268;
        case 0x2c926cu: goto label_2c926c;
        case 0x2c9270u: goto label_2c9270;
        case 0x2c9274u: goto label_2c9274;
        case 0x2c9278u: goto label_2c9278;
        case 0x2c927cu: goto label_2c927c;
        case 0x2c9280u: goto label_2c9280;
        case 0x2c9284u: goto label_2c9284;
        case 0x2c9288u: goto label_2c9288;
        case 0x2c928cu: goto label_2c928c;
        case 0x2c9290u: goto label_2c9290;
        case 0x2c9294u: goto label_2c9294;
        case 0x2c9298u: goto label_2c9298;
        case 0x2c929cu: goto label_2c929c;
        case 0x2c92a0u: goto label_2c92a0;
        case 0x2c92a4u: goto label_2c92a4;
        case 0x2c92a8u: goto label_2c92a8;
        case 0x2c92acu: goto label_2c92ac;
        case 0x2c92b0u: goto label_2c92b0;
        case 0x2c92b4u: goto label_2c92b4;
        case 0x2c92b8u: goto label_2c92b8;
        case 0x2c92bcu: goto label_2c92bc;
        case 0x2c92c0u: goto label_2c92c0;
        case 0x2c92c4u: goto label_2c92c4;
        case 0x2c92c8u: goto label_2c92c8;
        case 0x2c92ccu: goto label_2c92cc;
        case 0x2c92d0u: goto label_2c92d0;
        case 0x2c92d4u: goto label_2c92d4;
        case 0x2c92d8u: goto label_2c92d8;
        case 0x2c92dcu: goto label_2c92dc;
        case 0x2c92e0u: goto label_2c92e0;
        case 0x2c92e4u: goto label_2c92e4;
        case 0x2c92e8u: goto label_2c92e8;
        case 0x2c92ecu: goto label_2c92ec;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c92f4u: goto label_2c92f4;
        case 0x2c92f8u: goto label_2c92f8;
        case 0x2c92fcu: goto label_2c92fc;
        case 0x2c9300u: goto label_2c9300;
        case 0x2c9304u: goto label_2c9304;
        case 0x2c9308u: goto label_2c9308;
        case 0x2c930cu: goto label_2c930c;
        case 0x2c9310u: goto label_2c9310;
        case 0x2c9314u: goto label_2c9314;
        case 0x2c9318u: goto label_2c9318;
        case 0x2c931cu: goto label_2c931c;
        case 0x2c9320u: goto label_2c9320;
        case 0x2c9324u: goto label_2c9324;
        case 0x2c9328u: goto label_2c9328;
        case 0x2c932cu: goto label_2c932c;
        case 0x2c9330u: goto label_2c9330;
        case 0x2c9334u: goto label_2c9334;
        case 0x2c9338u: goto label_2c9338;
        case 0x2c933cu: goto label_2c933c;
        case 0x2c9340u: goto label_2c9340;
        case 0x2c9344u: goto label_2c9344;
        case 0x2c9348u: goto label_2c9348;
        case 0x2c934cu: goto label_2c934c;
        case 0x2c9350u: goto label_2c9350;
        case 0x2c9354u: goto label_2c9354;
        case 0x2c9358u: goto label_2c9358;
        case 0x2c935cu: goto label_2c935c;
        case 0x2c9360u: goto label_2c9360;
        case 0x2c9364u: goto label_2c9364;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c936cu: goto label_2c936c;
        case 0x2c9370u: goto label_2c9370;
        case 0x2c9374u: goto label_2c9374;
        case 0x2c9378u: goto label_2c9378;
        case 0x2c937cu: goto label_2c937c;
        case 0x2c9380u: goto label_2c9380;
        case 0x2c9384u: goto label_2c9384;
        case 0x2c9388u: goto label_2c9388;
        case 0x2c938cu: goto label_2c938c;
        case 0x2c9390u: goto label_2c9390;
        case 0x2c9394u: goto label_2c9394;
        case 0x2c9398u: goto label_2c9398;
        case 0x2c939cu: goto label_2c939c;
        case 0x2c93a0u: goto label_2c93a0;
        case 0x2c93a4u: goto label_2c93a4;
        case 0x2c93a8u: goto label_2c93a8;
        case 0x2c93acu: goto label_2c93ac;
        case 0x2c93b0u: goto label_2c93b0;
        case 0x2c93b4u: goto label_2c93b4;
        case 0x2c93b8u: goto label_2c93b8;
        case 0x2c93bcu: goto label_2c93bc;
        case 0x2c93c0u: goto label_2c93c0;
        case 0x2c93c4u: goto label_2c93c4;
        case 0x2c93c8u: goto label_2c93c8;
        case 0x2c93ccu: goto label_2c93cc;
        case 0x2c93d0u: goto label_2c93d0;
        case 0x2c93d4u: goto label_2c93d4;
        case 0x2c93d8u: goto label_2c93d8;
        case 0x2c93dcu: goto label_2c93dc;
        case 0x2c93e0u: goto label_2c93e0;
        case 0x2c93e4u: goto label_2c93e4;
        case 0x2c93e8u: goto label_2c93e8;
        case 0x2c93ecu: goto label_2c93ec;
        case 0x2c93f0u: goto label_2c93f0;
        case 0x2c93f4u: goto label_2c93f4;
        case 0x2c93f8u: goto label_2c93f8;
        case 0x2c93fcu: goto label_2c93fc;
        case 0x2c9400u: goto label_2c9400;
        case 0x2c9404u: goto label_2c9404;
        case 0x2c9408u: goto label_2c9408;
        case 0x2c940cu: goto label_2c940c;
        case 0x2c9410u: goto label_2c9410;
        case 0x2c9414u: goto label_2c9414;
        case 0x2c9418u: goto label_2c9418;
        case 0x2c941cu: goto label_2c941c;
        case 0x2c9420u: goto label_2c9420;
        case 0x2c9424u: goto label_2c9424;
        case 0x2c9428u: goto label_2c9428;
        case 0x2c942cu: goto label_2c942c;
        case 0x2c9430u: goto label_2c9430;
        case 0x2c9434u: goto label_2c9434;
        case 0x2c9438u: goto label_2c9438;
        case 0x2c943cu: goto label_2c943c;
        case 0x2c9440u: goto label_2c9440;
        case 0x2c9444u: goto label_2c9444;
        case 0x2c9448u: goto label_2c9448;
        case 0x2c944cu: goto label_2c944c;
        case 0x2c9450u: goto label_2c9450;
        case 0x2c9454u: goto label_2c9454;
        case 0x2c9458u: goto label_2c9458;
        case 0x2c945cu: goto label_2c945c;
        case 0x2c9460u: goto label_2c9460;
        case 0x2c9464u: goto label_2c9464;
        case 0x2c9468u: goto label_2c9468;
        case 0x2c946cu: goto label_2c946c;
        case 0x2c9470u: goto label_2c9470;
        case 0x2c9474u: goto label_2c9474;
        case 0x2c9478u: goto label_2c9478;
        case 0x2c947cu: goto label_2c947c;
        case 0x2c9480u: goto label_2c9480;
        case 0x2c9484u: goto label_2c9484;
        case 0x2c9488u: goto label_2c9488;
        case 0x2c948cu: goto label_2c948c;
        case 0x2c9490u: goto label_2c9490;
        case 0x2c9494u: goto label_2c9494;
        case 0x2c9498u: goto label_2c9498;
        case 0x2c949cu: goto label_2c949c;
        case 0x2c94a0u: goto label_2c94a0;
        case 0x2c94a4u: goto label_2c94a4;
        case 0x2c94a8u: goto label_2c94a8;
        case 0x2c94acu: goto label_2c94ac;
        case 0x2c94b0u: goto label_2c94b0;
        case 0x2c94b4u: goto label_2c94b4;
        case 0x2c94b8u: goto label_2c94b8;
        case 0x2c94bcu: goto label_2c94bc;
        case 0x2c94c0u: goto label_2c94c0;
        case 0x2c94c4u: goto label_2c94c4;
        case 0x2c94c8u: goto label_2c94c8;
        case 0x2c94ccu: goto label_2c94cc;
        case 0x2c94d0u: goto label_2c94d0;
        case 0x2c94d4u: goto label_2c94d4;
        case 0x2c94d8u: goto label_2c94d8;
        case 0x2c94dcu: goto label_2c94dc;
        case 0x2c94e0u: goto label_2c94e0;
        case 0x2c94e4u: goto label_2c94e4;
        case 0x2c94e8u: goto label_2c94e8;
        case 0x2c94ecu: goto label_2c94ec;
        case 0x2c94f0u: goto label_2c94f0;
        case 0x2c94f4u: goto label_2c94f4;
        case 0x2c94f8u: goto label_2c94f8;
        case 0x2c94fcu: goto label_2c94fc;
        case 0x2c9500u: goto label_2c9500;
        case 0x2c9504u: goto label_2c9504;
        case 0x2c9508u: goto label_2c9508;
        case 0x2c950cu: goto label_2c950c;
        case 0x2c9510u: goto label_2c9510;
        case 0x2c9514u: goto label_2c9514;
        case 0x2c9518u: goto label_2c9518;
        case 0x2c951cu: goto label_2c951c;
        case 0x2c9520u: goto label_2c9520;
        case 0x2c9524u: goto label_2c9524;
        case 0x2c9528u: goto label_2c9528;
        case 0x2c952cu: goto label_2c952c;
        case 0x2c9530u: goto label_2c9530;
        case 0x2c9534u: goto label_2c9534;
        case 0x2c9538u: goto label_2c9538;
        case 0x2c953cu: goto label_2c953c;
        case 0x2c9540u: goto label_2c9540;
        case 0x2c9544u: goto label_2c9544;
        case 0x2c9548u: goto label_2c9548;
        case 0x2c954cu: goto label_2c954c;
        case 0x2c9550u: goto label_2c9550;
        case 0x2c9554u: goto label_2c9554;
        case 0x2c9558u: goto label_2c9558;
        case 0x2c955cu: goto label_2c955c;
        case 0x2c9560u: goto label_2c9560;
        case 0x2c9564u: goto label_2c9564;
        case 0x2c9568u: goto label_2c9568;
        case 0x2c956cu: goto label_2c956c;
        case 0x2c9570u: goto label_2c9570;
        case 0x2c9574u: goto label_2c9574;
        default: break;
    }

    ctx->pc = 0x2c8ff8u;

label_2c8ff8:
    // 0x2c8ff8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c8ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2c8ffc:
    // 0x2c8ffc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2c8ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2c9000:
    // 0x2c9000: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2c9000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2c9004:
    // 0x2c9004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9008:
    // 0x2c9008: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2c9008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2c900c:
    // 0x2c900c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2c900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2c9010:
    // 0x2c9010: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2c9010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2c9014:
    // 0x2c9014: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2c9014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2c9018:
    // 0x2c9018: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2c9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2c901c:
    // 0x2c901c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2c9020:
    // 0x2c9020: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2c9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2c9024:
    // 0x2c9024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c9024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2c9028:
    // 0x2c9028: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x2c9028u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2c902c:
    // 0x2c902c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2c902cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2c9030:
    // 0x2c9030: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c9030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2c9034:
    // 0x2c9034: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c9034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9038:
    // 0x2c9038: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c9038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2c903c:
    // 0x2c903c: 0x1c40013e  bgtz        $v0, . + 4 + (0x13E << 2)
label_2c9040:
    if (ctx->pc == 0x2C9040u) {
        ctx->pc = 0x2C9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C903Cu;
        // 0x2c9040: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9044u;
        goto label_2c9044;
    }
    ctx->pc = 0x2C903Cu;
    {
        const bool branch_taken_0x2c903c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C903Cu;
        // 0x2c9040: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c903c) {
            ctx->pc = 0x2C9538u;
            goto label_2c9538;
        }
    }
    ctx->pc = 0x2C9044u;
label_2c9044:
    // 0x2c9044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9048:
    // 0x2c9048: 0xc0a7c26  jal         func_29F098
label_2c904c:
    if (ctx->pc == 0x2C904Cu) {
        ctx->pc = 0x2C904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9048u;
        // 0x2c904c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9050u;
        goto label_2c9050;
    }
    ctx->pc = 0x2C9048u;
    SET_GPR_U32(ctx, 31, 0x2C9050u);
    ctx->pc = 0x2C904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9048u;
    // 0x2c904c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F098u, 0x2C9048u, 0x2C9050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9050u;
label_2c9050:
    // 0x2c9050: 0x1440013a  bnez        $v0, . + 4 + (0x13A << 2)
label_2c9054:
    if (ctx->pc == 0x2C9054u) {
        ctx->pc = 0x2C9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9050u;
        // 0x2c9054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9058u;
        goto label_2c9058;
    }
    ctx->pc = 0x2C9050u;
    {
        const bool branch_taken_0x2c9050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9050u;
        // 0x2c9054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9050) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C9058u;
label_2c9058:
    // 0x2c9058: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c9058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c905c:
    // 0x2c905c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9060:
    // 0x2c9060: 0x34a5cfe9  ori         $a1, $a1, 0xCFE9
    ctx->pc = 0x2c9060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53225);
label_2c9064:
    // 0x2c9064: 0xc0a7c8c  jal         func_29F230
label_2c9068:
    if (ctx->pc == 0x2C9068u) {
        ctx->pc = 0x2C9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9064u;
        // 0x2c9068: 0x26360010  addiu       $s6, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C906Cu;
        goto label_2c906c;
    }
    ctx->pc = 0x2C9064u;
    SET_GPR_U32(ctx, 31, 0x2C906Cu);
    ctx->pc = 0x2C9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9064u;
    // 0x2c9068: 0x26360010  addiu       $s6, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2C9064u, 0x2C906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C906Cu;
label_2c906c:
    // 0x2c906c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9070:
    // 0x2c9070: 0xc0a3678  jal         func_28D9E0
label_2c9074:
    if (ctx->pc == 0x2C9074u) {
        ctx->pc = 0x2C9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9070u;
        // 0x2c9074: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9078u;
        goto label_2c9078;
    }
    ctx->pc = 0x2C9070u;
    SET_GPR_U32(ctx, 31, 0x2C9078u);
    ctx->pc = 0x2C9074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9070u;
    // 0x2c9074: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2C9070u, 0x2C9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9078u;
label_2c9078:
    // 0x2c9078: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c907c:
    // 0x2c907c: 0x86a30092  lh          $v1, 0x92($s5)
    ctx->pc = 0x2c907cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c9080:
    // 0x2c9080: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c9080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c9084:
    // 0x2c9084: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c9084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c9088:
    // 0x2c9088: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c9088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c908c:
    // 0x2c908c: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x2c908cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c9090:
    // 0x2c9090: 0x779021  addu        $s2, $v1, $s7
    ctx->pc = 0x2c9090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2c9094:
    // 0x2c9094: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x2c9094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2c9098:
    // 0x2c9098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c9098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c909c:
    // 0x2c909c: 0xc0cdb38  jal         func_336CE0
label_2c90a0:
    if (ctx->pc == 0x2C90A0u) {
        ctx->pc = 0x2C90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C909Cu;
        // 0x2c90a0: 0x267e0030  addiu       $fp, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90A4u;
        goto label_2c90a4;
    }
    ctx->pc = 0x2C909Cu;
    SET_GPR_U32(ctx, 31, 0x2C90A4u);
    ctx->pc = 0x2C90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C909Cu;
    // 0x2c90a0: 0x267e0030  addiu       $fp, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C909Cu, 0x2C90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90A4u;
label_2c90a4:
    // 0x2c90a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c90a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c90a8:
    // 0x2c90a8: 0xc0e40a2  jal         func_390288
label_2c90ac:
    if (ctx->pc == 0x2C90ACu) {
        ctx->pc = 0x2C90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90A8u;
        // 0x2c90ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90B0u;
        goto label_2c90b0;
    }
    ctx->pc = 0x2C90A8u;
    SET_GPR_U32(ctx, 31, 0x2C90B0u);
    ctx->pc = 0x2C90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90A8u;
    // 0x2c90ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C90A8u, 0x2C90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90B0u;
label_2c90b0:
    // 0x2c90b0: 0xc10587a  jal         func_4161E8
label_2c90b4:
    if (ctx->pc == 0x2C90B4u) {
        ctx->pc = 0x2C90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90B0u;
        // 0x2c90b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90B8u;
        goto label_2c90b8;
    }
    ctx->pc = 0x2C90B0u;
    SET_GPR_U32(ctx, 31, 0x2C90B8u);
    ctx->pc = 0x2C90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90B0u;
    // 0x2c90b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C90B0u, 0x2C90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90B8u;
label_2c90b8:
    // 0x2c90b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c90b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c90bc:
    // 0x2c90bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c90bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c90c0:
    // 0x2c90c0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2c90c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2c90c4:
    // 0x2c90c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c90c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c90c8:
    // 0x2c90c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2c90c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c90cc:
    // 0x2c90cc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c90ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2c90d0:
    // 0x2c90d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c90d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2c90d4:
    // 0x2c90d4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2c90d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2c90d8:
    // 0x2c90d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c90d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c90dc:
    // 0x2c90dc: 0xc0e40a2  jal         func_390288
label_2c90e0:
    if (ctx->pc == 0x2C90E0u) {
        ctx->pc = 0x2C90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90DCu;
        // 0x2c90e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90E4u;
        goto label_2c90e4;
    }
    ctx->pc = 0x2C90DCu;
    SET_GPR_U32(ctx, 31, 0x2C90E4u);
    ctx->pc = 0x2C90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90DCu;
    // 0x2c90e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C90DCu, 0x2C90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90E4u;
label_2c90e4:
    // 0x2c90e4: 0xc10587a  jal         func_4161E8
label_2c90e8:
    if (ctx->pc == 0x2C90E8u) {
        ctx->pc = 0x2C90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90E4u;
        // 0x2c90e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90ECu;
        goto label_2c90ec;
    }
    ctx->pc = 0x2C90E4u;
    SET_GPR_U32(ctx, 31, 0x2C90ECu);
    ctx->pc = 0x2C90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C90E4u;
    // 0x2c90e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C90E4u, 0x2C90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90ECu;
label_2c90ec:
    // 0x2c90ec: 0x7a660030  lq          $a2, 0x30($s3)
    ctx->pc = 0x2c90ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_2c90f0:
    // 0x2c90f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c90f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c90f4:
    // 0x2c90f4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2c90f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c90f8:
    // 0x2c90f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c90f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c90fc:
    // 0x2c90fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c90fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c9100:
    // 0x2c9100: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2c9100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2c9104:
    // 0x2c9104: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2c9104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c9108:
    // 0x2c9108: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c9108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c910c:
    // 0x2c910c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c910cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c9110:
    // 0x2c9110: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x2c9110u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c9114:
    // 0x2c9114: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2c9114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2c9118:
    // 0x2c9118: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2c9118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_2c911c:
    // 0x2c911c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2c911cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2c9120:
    // 0x2c9120: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x2c9120u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_2c9124:
    // 0x2c9124: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2c9124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_2c9128:
    // 0x2c9128: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x2c9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_2c912c:
    // 0x2c912c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2c912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_2c9130:
    // 0x2c9130: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c9130u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9134:
    // 0x2c9134: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c9134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c9138:
    // 0x2c9138: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2c9138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2c913c:
    // 0x2c913c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c913cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2c9140:
    // 0x2c9140: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c9140u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2c9144:
    // 0x2c9144: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2c9144u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2c9148:
    // 0x2c9148: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2c9148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2c914c:
    // 0x2c914c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2c914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2c9150:
    // 0x2c9150: 0xc0cdb38  jal         func_336CE0
label_2c9154:
    if (ctx->pc == 0x2C9154u) {
        ctx->pc = 0x2C9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9150u;
        // 0x2c9154: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9158u;
        goto label_2c9158;
    }
    ctx->pc = 0x2C9150u;
    SET_GPR_U32(ctx, 31, 0x2C9158u);
    ctx->pc = 0x2C9154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9150u;
    // 0x2c9154: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C9150u, 0x2C9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9158u;
label_2c9158:
    // 0x2c9158: 0x128000b3  beqz        $s4, . + 4 + (0xB3 << 2)
label_2c915c:
    if (ctx->pc == 0x2C915Cu) {
        ctx->pc = 0x2C915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9158u;
        // 0x2c915c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9160u;
        goto label_2c9160;
    }
    ctx->pc = 0x2C9158u;
    {
        const bool branch_taken_0x2c9158 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9158u;
        // 0x2c915c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9158) {
            ctx->pc = 0x2C9428u;
            goto label_2c9428;
        }
    }
    ctx->pc = 0x2C9160u;
label_2c9160:
    // 0x2c9160: 0xc08bfa0  jal         func_22FE80
label_2c9164:
    if (ctx->pc == 0x2C9164u) {
        ctx->pc = 0x2C9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9160u;
        // 0x2c9164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9168u;
        goto label_2c9168;
    }
    ctx->pc = 0x2C9160u;
    SET_GPR_U32(ctx, 31, 0x2C9168u);
    ctx->pc = 0x2C9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9160u;
    // 0x2c9164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2C9160u, 0x2C9168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9168u;
label_2c9168:
    // 0x2c9168: 0x86900092  lh          $s0, 0x92($s4)
    ctx->pc = 0x2c9168u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2c916c:
    // 0x2c916c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c916cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9170:
    // 0x2c9170: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c9170u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c9174:
    // 0x2c9174: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x2c9174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_2c9178:
    // 0x2c9178: 0xc0cdb38  jal         func_336CE0
label_2c917c:
    if (ctx->pc == 0x2C917Cu) {
        ctx->pc = 0x2C917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9178u;
        // 0x2c917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9180u;
        goto label_2c9180;
    }
    ctx->pc = 0x2C9178u;
    SET_GPR_U32(ctx, 31, 0x2C9180u);
    ctx->pc = 0x2C917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9178u;
    // 0x2c917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C9178u, 0x2C9180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9180u;
label_2c9180:
    // 0x2c9180: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9184:
    // 0x2c9184: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2c9184u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2c9188:
    // 0x2c9188: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x2c9188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_2c918c:
    // 0x2c918c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9190:
    // 0x2c9190: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2c9190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2c9194:
    // 0x2c9194: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c9194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c9198:
    // 0x2c9198: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2c9198u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c919c:
    // 0x2c919c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c919cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2c91a0:
    // 0x2c91a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c91a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2c91a4:
    // 0x2c91a4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2c91a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2c91a8:
    // 0x2c91a8: 0xc494013c  lwc1        $f20, 0x13C($a0)
    ctx->pc = 0x2c91a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c91ac:
    // 0x2c91ac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2c91acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2c91b0:
    // 0x2c91b0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2c91b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2c91b4:
    // 0x2c91b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c91b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c91b8:
    // 0x2c91b8: 0x7a620050  lq          $v0, 0x50($s3)
    ctx->pc = 0x2c91b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_2c91bc:
    // 0x2c91bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c91bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c91c0:
    // 0x2c91c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2c91c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c91c4:
    // 0x2c91c4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2c91c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c91c8:
    // 0x2c91c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c91c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c91cc:
    // 0x2c91cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c91ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c91d0:
    // 0x2c91d0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2c91d0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c91d4:
    // 0x2c91d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c91d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c91d8:
    // 0x2c91d8: 0x0  nop
    ctx->pc = 0x2c91d8u;
    // NOP
label_2c91dc:
    // 0x2c91dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c91dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c91e0:
    // 0x2c91e0: 0x0  nop
    ctx->pc = 0x2c91e0u;
    // NOP
label_2c91e4:
    // 0x2c91e4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2c91e8:
    if (ctx->pc == 0x2C91E8u) {
        ctx->pc = 0x2C91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91E4u;
        // 0x2c91e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91ECu;
        goto label_2c91ec;
    }
    ctx->pc = 0x2C91E4u;
    {
        const bool branch_taken_0x2c91e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c91e4) {
            ctx->pc = 0x2C91E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91E4u;
            // 0x2c91e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C91ECu;
            goto label_2c91ec;
        }
    }
    ctx->pc = 0x2C91ECu;
label_2c91ec:
    // 0x2c91ec: 0x14a00081  bnez        $a1, . + 4 + (0x81 << 2)
label_2c91f0:
    if (ctx->pc == 0x2C91F0u) {
        ctx->pc = 0x2C91F4u;
        goto label_2c91f4;
    }
    ctx->pc = 0x2C91ECu;
    {
        const bool branch_taken_0x2c91ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c91ec) {
            ctx->pc = 0x2C93F4u;
            goto label_2c93f4;
        }
    }
    ctx->pc = 0x2C91F4u;
label_2c91f4:
    // 0x2c91f4: 0xc08a08a  jal         func_228228
label_2c91f8:
    if (ctx->pc == 0x2C91F8u) {
        ctx->pc = 0x2C91F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91F4u;
        // 0x2c91f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91FCu;
        goto label_2c91fc;
    }
    ctx->pc = 0x2C91F4u;
    SET_GPR_U32(ctx, 31, 0x2C91FCu);
    ctx->pc = 0x2C91F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C91F4u;
    // 0x2c91f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2C91F4u, 0x2C91FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91FCu;
label_2c91fc:
    // 0x2c91fc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
label_2c9200:
    if (ctx->pc == 0x2C9200u) {
        ctx->pc = 0x2C9204u;
        goto label_2c9204;
    }
    ctx->pc = 0x2C91FCu;
    {
        const bool branch_taken_0x2c91fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c91fc) {
            ctx->pc = 0x2C93F4u;
            goto label_2c93f4;
        }
    }
    ctx->pc = 0x2C9204u;
label_2c9204:
    // 0x2c9204: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x2c9204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_2c9208:
    // 0x2c9208: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2c9208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_2c920c:
    // 0x2c920c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c920cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9210:
    // 0x2c9210: 0x0  nop
    ctx->pc = 0x2c9210u;
    // NOP
label_2c9214:
    // 0x2c9214: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c9214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c9218:
    // 0x2c9218: 0x0  nop
    ctx->pc = 0x2c9218u;
    // NOP
label_2c921c:
    // 0x2c921c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_2c9220:
    if (ctx->pc == 0x2C9220u) {
        ctx->pc = 0x2C9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C921Cu;
        // 0x2c9220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9224u;
        goto label_2c9224;
    }
    ctx->pc = 0x2C921Cu;
    {
        const bool branch_taken_0x2c921c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C921Cu;
        // 0x2c9220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c921c) {
            ctx->pc = 0x2C92A0u;
            goto label_2c92a0;
        }
    }
    ctx->pc = 0x2C9224u;
label_2c9224:
    // 0x2c9224: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9228:
    // 0x2c9228: 0xc0a33f8  jal         func_28CFE0
label_2c922c:
    if (ctx->pc == 0x2C922Cu) {
        ctx->pc = 0x2C922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9228u;
        // 0x2c922c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9230u;
        goto label_2c9230;
    }
    ctx->pc = 0x2C9228u;
    SET_GPR_U32(ctx, 31, 0x2C9230u);
    ctx->pc = 0x2C922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9228u;
    // 0x2c922c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2C9228u, 0x2C9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9230u;
label_2c9230:
    // 0x2c9230: 0xc0a36c8  jal         func_28DB20
label_2c9234:
    if (ctx->pc == 0x2C9234u) {
        ctx->pc = 0x2C9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9230u;
        // 0x2c9234: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9238u;
        goto label_2c9238;
    }
    ctx->pc = 0x2C9230u;
    SET_GPR_U32(ctx, 31, 0x2C9238u);
    ctx->pc = 0x2C9234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9230u;
    // 0x2c9234: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C9230u, 0x2C9238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9238u;
label_2c9238:
    // 0x2c9238: 0xc0a367c  jal         func_28D9F0
label_2c923c:
    if (ctx->pc == 0x2C923Cu) {
        ctx->pc = 0x2C923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9238u;
        // 0x2c923c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9240u;
        goto label_2c9240;
    }
    ctx->pc = 0x2C9238u;
    SET_GPR_U32(ctx, 31, 0x2C9240u);
    ctx->pc = 0x2C923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9238u;
    // 0x2c923c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C9238u, 0x2C9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9240u;
label_2c9240:
    // 0x2c9240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9244:
    // 0x2c9244: 0x120000bd  beqz        $s0, . + 4 + (0xBD << 2)
label_2c9248:
    if (ctx->pc == 0x2C9248u) {
        ctx->pc = 0x2C9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9244u;
        // 0x2c9248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C924Cu;
        goto label_2c924c;
    }
    ctx->pc = 0x2C9244u;
    {
        const bool branch_taken_0x2c9244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9244u;
        // 0x2c9248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9244) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C924Cu;
label_2c924c:
    // 0x2c924c: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2c924cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2c9250:
    // 0x2c9250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9254:
    // 0x2c9254: 0x0  nop
    ctx->pc = 0x2c9254u;
    // NOP
label_2c9258:
    // 0x2c9258: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c9258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c925c:
    // 0x2c925c: 0x0  nop
    ctx->pc = 0x2c925cu;
    // NOP
label_2c9260:
    // 0x2c9260: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2c9264:
    if (ctx->pc == 0x2C9264u) {
        ctx->pc = 0x2C9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9260u;
        // 0x2c9264: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9268u;
        goto label_2c9268;
    }
    ctx->pc = 0x2C9260u;
    {
        const bool branch_taken_0x2c9260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9260u;
        // 0x2c9264: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9260) {
            ctx->pc = 0x2C926Cu;
            goto label_2c926c;
        }
    }
    ctx->pc = 0x2C9268u;
label_2c9268:
    // 0x2c9268: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2c9268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c926c:
    // 0x2c926c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c9270:
    // 0x2c9270: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c9270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c9274:
    // 0x2c9274: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c9278:
    // 0x2c9278: 0x40f809  jalr        $v0
label_2c927c:
    if (ctx->pc == 0x2C927Cu) {
        ctx->pc = 0x2C927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9278u;
        // 0x2c927c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9280u;
        goto label_2c9280;
    }
    ctx->pc = 0x2C9278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C9280u);
        ctx->pc = 0x2C927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9278u;
        // 0x2c927c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9278u, 0x2C9280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C9280u;
label_2c9280:
    // 0x2c9280: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c9280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9284:
    // 0x2c9284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9288:
    // 0x2c9288: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c9288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2c928c:
    // 0x2c928c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c928cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c9290:
    // 0x2c9290: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c9290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c9294:
    // 0x2c9294: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c9294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9298:
    // 0x2c9298: 0x1000007f  b           . + 4 + (0x7F << 2)
label_2c929c:
    if (ctx->pc == 0x2C929Cu) {
        ctx->pc = 0x2C929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9298u;
        // 0x2c929c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92A0u;
        goto label_2c92a0;
    }
    ctx->pc = 0x2C9298u;
    {
        const bool branch_taken_0x2c9298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9298u;
        // 0x2c929c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9298) {
            ctx->pc = 0x2C9498u;
            goto label_2c9498;
        }
    }
    ctx->pc = 0x2C92A0u;
label_2c92a0:
    // 0x2c92a0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2c92a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2c92a4:
    // 0x2c92a4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2c92a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c92a8:
    // 0x2c92a8: 0x0  nop
    ctx->pc = 0x2c92a8u;
    // NOP
label_2c92ac:
    // 0x2c92ac: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_2c92b0:
    if (ctx->pc == 0x2C92B0u) {
        ctx->pc = 0x2C92B4u;
        goto label_2c92b4;
    }
    ctx->pc = 0x2C92ACu;
    {
        const bool branch_taken_0x2c92ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c92ac) {
            ctx->pc = 0x2C93F4u;
            goto label_2c93f4;
        }
    }
    ctx->pc = 0x2C92B4u;
label_2c92b4:
    // 0x2c92b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c92b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c92b8:
    // 0x2c92b8: 0xc0a33f8  jal         func_28CFE0
label_2c92bc:
    if (ctx->pc == 0x2C92BCu) {
        ctx->pc = 0x2C92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92B8u;
        // 0x2c92bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92C0u;
        goto label_2c92c0;
    }
    ctx->pc = 0x2C92B8u;
    SET_GPR_U32(ctx, 31, 0x2C92C0u);
    ctx->pc = 0x2C92BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92B8u;
    // 0x2c92bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2C92B8u, 0x2C92C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92C0u;
label_2c92c0:
    // 0x2c92c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c92c4:
    // 0x2c92c4: 0xc0a3fa4  jal         func_28FE90
label_2c92c8:
    if (ctx->pc == 0x2C92C8u) {
        ctx->pc = 0x2C92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92C4u;
        // 0x2c92c8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92CCu;
        goto label_2c92cc;
    }
    ctx->pc = 0x2C92C4u;
    SET_GPR_U32(ctx, 31, 0x2C92CCu);
    ctx->pc = 0x2C92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92C4u;
    // 0x2c92c8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2C92C4u, 0x2C92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92CCu;
label_2c92cc:
    // 0x2c92cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c92ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c92d0:
    // 0x2c92d0: 0x94620034  lhu         $v0, 0x34($v1)
    ctx->pc = 0x2c92d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
label_2c92d4:
    // 0x2c92d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c92d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c92d8:
    // 0x2c92d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c92dc:
    if (ctx->pc == 0x2C92DCu) {
        ctx->pc = 0x2C92E0u;
        goto label_2c92e0;
    }
    ctx->pc = 0x2C92D8u;
    {
        const bool branch_taken_0x2c92d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c92d8) {
            ctx->pc = 0x2C92F0u;
            goto label_2c92f0;
        }
    }
    ctx->pc = 0x2C92E0u;
label_2c92e0:
    // 0x2c92e0: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x2c92e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_2c92e4:
    // 0x2c92e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c92e8:
    // 0x2c92e8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2c92ec:
    if (ctx->pc == 0x2C92ECu) {
        ctx->pc = 0x2C92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92E8u;
        // 0x2c92ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92F0u;
        goto label_2c92f0;
    }
    ctx->pc = 0x2C92E8u;
    {
        const bool branch_taken_0x2c92e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92E8u;
        // 0x2c92ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92e8) {
            ctx->pc = 0x2C9334u;
            goto label_2c9334;
        }
    }
    ctx->pc = 0x2C92F0u;
label_2c92f0:
    // 0x2c92f0: 0xc0a367c  jal         func_28D9F0
label_2c92f4:
    if (ctx->pc == 0x2C92F4u) {
        ctx->pc = 0x2C92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92F0u;
        // 0x2c92f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C92F8u;
        goto label_2c92f8;
    }
    ctx->pc = 0x2C92F0u;
    SET_GPR_U32(ctx, 31, 0x2C92F8u);
    ctx->pc = 0x2C92F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92F0u;
    // 0x2c92f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C92F0u, 0x2C92F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92F8u;
label_2c92f8:
    // 0x2c92f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c92f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c92fc:
    // 0x2c92fc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2c9300:
    if (ctx->pc == 0x2C9300u) {
        ctx->pc = 0x2C9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92FCu;
        // 0x2c9300: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9304u;
        goto label_2c9304;
    }
    ctx->pc = 0x2C92FCu;
    {
        const bool branch_taken_0x2c92fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92FCu;
        // 0x2c9300: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92fc) {
            ctx->pc = 0x2C9334u;
            goto label_2c9334;
        }
    }
    ctx->pc = 0x2C9304u;
label_2c9304:
    // 0x2c9304: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c9304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c9308:
    // 0x2c9308: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c9308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c930c:
    // 0x2c930c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c9310:
    // 0x2c9310: 0x40f809  jalr        $v0
label_2c9314:
    if (ctx->pc == 0x2C9314u) {
        ctx->pc = 0x2C9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9310u;
        // 0x2c9314: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9318u;
        goto label_2c9318;
    }
    ctx->pc = 0x2C9310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C9318u);
        ctx->pc = 0x2C9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9310u;
        // 0x2c9314: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9310u, 0x2C9318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C9318u;
label_2c9318:
    // 0x2c9318: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c9318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c931c:
    // 0x2c931c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9320:
    // 0x2c9320: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c9320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9324:
    // 0x2c9324: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2c9324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c9328:
    // 0x2c9328: 0xc0bf9ba  jal         func_2FE6E8
label_2c932c:
    if (ctx->pc == 0x2C932Cu) {
        ctx->pc = 0x2C932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9328u;
        // 0x2c932c: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9330u;
        goto label_2c9330;
    }
    ctx->pc = 0x2C9328u;
    SET_GPR_U32(ctx, 31, 0x2C9330u);
    ctx->pc = 0x2C932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9328u;
    // 0x2c932c: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE6E8u, 0x2C9328u, 0x2C9330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9330u;
label_2c9330:
    // 0x2c9330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c9334:
    // 0x2c9334: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2c9334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c9338:
    // 0x2c9338: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c9338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c933c:
    // 0x2c933c: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2c933cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c9340:
    // 0x2c9340: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2c9340u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c9344:
    // 0x2c9344: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_2c9348:
    if (ctx->pc == 0x2C9348u) {
        ctx->pc = 0x2C9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9344u;
        // 0x2c9348: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C934Cu;
        goto label_2c934c;
    }
    ctx->pc = 0x2C9344u;
    {
        const bool branch_taken_0x2c9344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9344u;
        // 0x2c9348: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9344) {
            ctx->pc = 0x2C9538u;
            goto label_2c9538;
        }
    }
    ctx->pc = 0x2C934Cu;
label_2c934c:
    // 0x2c934c: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2c934cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2c9350:
    // 0x2c9350: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c9350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2c9354:
    // 0x2c9354: 0xc0cd4fc  jal         func_3353F0
label_2c9358:
    if (ctx->pc == 0x2C9358u) {
        ctx->pc = 0x2C9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9354u;
        // 0x2c9358: 0x24061964  addiu       $a2, $zero, 0x1964 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C935Cu;
        goto label_2c935c;
    }
    ctx->pc = 0x2C9354u;
    SET_GPR_U32(ctx, 31, 0x2C935Cu);
    ctx->pc = 0x2C9358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9354u;
    // 0x2c9358: 0x24061964  addiu       $a2, $zero, 0x1964 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2C9354u, 0x2C935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C935Cu;
label_2c935c:
    // 0x2c935c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9360:
    // 0x2c9360: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c9360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c9364:
    // 0x2c9364: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2c9364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2c9368:
    // 0x2c9368: 0xc137832  jal         func_4DE0C8
label_2c936c:
    if (ctx->pc == 0x2C936Cu) {
        ctx->pc = 0x2C936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9368u;
        // 0x2c936c: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9370u;
        goto label_2c9370;
    }
    ctx->pc = 0x2C9368u;
    SET_GPR_U32(ctx, 31, 0x2C9370u);
    ctx->pc = 0x2C936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9368u;
    // 0x2c936c: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2C9368u, 0x2C9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9370u;
label_2c9370:
    // 0x2c9370: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_2c9374:
    if (ctx->pc == 0x2C9374u) {
        ctx->pc = 0x2C9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9370u;
        // 0x2c9374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9378u;
        goto label_2c9378;
    }
    ctx->pc = 0x2C9370u;
    {
        const bool branch_taken_0x2c9370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9370u;
        // 0x2c9374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9370) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C9378u;
label_2c9378:
    // 0x2c9378: 0xc087502  jal         func_21D408
label_2c937c:
    if (ctx->pc == 0x2C937Cu) {
        ctx->pc = 0x2C937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9378u;
        // 0x2c937c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9380u;
        goto label_2c9380;
    }
    ctx->pc = 0x2C9378u;
    SET_GPR_U32(ctx, 31, 0x2C9380u);
    ctx->pc = 0x2C937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9378u;
    // 0x2c937c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C9378u, 0x2C9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9380u;
label_2c9380:
    // 0x2c9380: 0xc0e409a  jal         func_390268
label_2c9384:
    if (ctx->pc == 0x2C9384u) {
        ctx->pc = 0x2C9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9380u;
        // 0x2c9384: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9388u;
        goto label_2c9388;
    }
    ctx->pc = 0x2C9380u;
    SET_GPR_U32(ctx, 31, 0x2C9388u);
    ctx->pc = 0x2C9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9380u;
    // 0x2c9384: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C9380u, 0x2C9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9388u;
label_2c9388:
    // 0x2c9388: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
label_2c938c:
    if (ctx->pc == 0x2C938Cu) {
        ctx->pc = 0x2C938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9388u;
        // 0x2c938c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9390u;
        goto label_2c9390;
    }
    ctx->pc = 0x2C9388u;
    {
        const bool branch_taken_0x2c9388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9388) {
            ctx->pc = 0x2C938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9388u;
            // 0x2c938c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C9390u;
label_2c9390:
    // 0x2c9390: 0xc087502  jal         func_21D408
label_2c9394:
    if (ctx->pc == 0x2C9394u) {
        ctx->pc = 0x2C9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9390u;
        // 0x2c9394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9398u;
        goto label_2c9398;
    }
    ctx->pc = 0x2C9390u;
    SET_GPR_U32(ctx, 31, 0x2C9398u);
    ctx->pc = 0x2C9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9390u;
    // 0x2c9394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C9390u, 0x2C9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9398u;
label_2c9398:
    // 0x2c9398: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c939c:
    // 0x2c939c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2c939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2c93a0:
    // 0x2c93a0: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x2c93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2c93a4:
    // 0x2c93a4: 0x14820065  bne         $a0, $v0, . + 4 + (0x65 << 2)
label_2c93a8:
    if (ctx->pc == 0x2C93A8u) {
        ctx->pc = 0x2C93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93A4u;
        // 0x2c93a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93ACu;
        goto label_2c93ac;
    }
    ctx->pc = 0x2C93A4u;
    {
        const bool branch_taken_0x2c93a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93A4u;
        // 0x2c93a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93a4) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C93ACu;
label_2c93ac:
    // 0x2c93ac: 0xc0a47b4  jal         func_291ED0
label_2c93b0:
    if (ctx->pc == 0x2C93B0u) {
        ctx->pc = 0x2C93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93ACu;
        // 0x2c93b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93B4u;
        goto label_2c93b4;
    }
    ctx->pc = 0x2C93ACu;
    SET_GPR_U32(ctx, 31, 0x2C93B4u);
    ctx->pc = 0x2C93B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C93ACu;
    // 0x2c93b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2C93ACu, 0x2C93B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93B4u;
label_2c93b4:
    // 0x2c93b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c93b8:
    // 0x2c93b8: 0x14430060  bne         $v0, $v1, . + 4 + (0x60 << 2)
label_2c93bc:
    if (ctx->pc == 0x2C93BCu) {
        ctx->pc = 0x2C93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93B8u;
        // 0x2c93bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93C0u;
        goto label_2c93c0;
    }
    ctx->pc = 0x2C93B8u;
    {
        const bool branch_taken_0x2c93b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93B8u;
        // 0x2c93bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93b8) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C93C0u;
label_2c93c0:
    // 0x2c93c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c93c4:
    // 0x2c93c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c93c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c93c8:
    // 0x2c93c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c93c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c93cc:
    // 0x2c93cc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2c93ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c93d0:
    // 0x2c93d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c93d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c93d4:
    // 0x2c93d4: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x2c93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_2c93d8:
    // 0x2c93d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c93d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c93dc:
    // 0x2c93dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c93dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c93e0:
    // 0x2c93e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c93e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c93e4:
    // 0x2c93e4: 0xc088178  jal         func_2205E0
label_2c93e8:
    if (ctx->pc == 0x2C93E8u) {
        ctx->pc = 0x2C93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93E4u;
        // 0x2c93e8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93ECu;
        goto label_2c93ec;
    }
    ctx->pc = 0x2C93E4u;
    SET_GPR_U32(ctx, 31, 0x2C93ECu);
    ctx->pc = 0x2C93E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C93E4u;
    // 0x2c93e8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C93E4u, 0x2C93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93ECu;
label_2c93ec:
    // 0x2c93ec: 0x10000053  b           . + 4 + (0x53 << 2)
label_2c93f0:
    if (ctx->pc == 0x2C93F0u) {
        ctx->pc = 0x2C93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93ECu;
        // 0x2c93f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C93F4u;
        goto label_2c93f4;
    }
    ctx->pc = 0x2C93ECu;
    {
        const bool branch_taken_0x2c93ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93ECu;
        // 0x2c93f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93ec) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C93F4u;
label_2c93f4:
    // 0x2c93f4: 0xc0a4e54  jal         func_293950
label_2c93f8:
    if (ctx->pc == 0x2C93F8u) {
        ctx->pc = 0x2C93FCu;
        goto label_2c93fc;
    }
    ctx->pc = 0x2C93F4u;
    SET_GPR_U32(ctx, 31, 0x2C93FCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C93F4u, 0x2C93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93FCu;
label_2c93fc:
    // 0x2c93fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c93fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9400:
    // 0x2c9400: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2c9404:
    if (ctx->pc == 0x2C9404u) {
        ctx->pc = 0x2C9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9400u;
        // 0x2c9404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9408u;
        goto label_2c9408;
    }
    ctx->pc = 0x2C9400u;
    {
        const bool branch_taken_0x2c9400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9400u;
        // 0x2c9404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9400) {
            ctx->pc = 0x2C9414u;
            goto label_2c9414;
        }
    }
    ctx->pc = 0x2C9408u;
label_2c9408:
    // 0x2c9408: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c9408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c940c:
    // 0x2c940c: 0xc0b255e  jal         func_2C9578
label_2c9410:
    if (ctx->pc == 0x2C9410u) {
        ctx->pc = 0x2C9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C940Cu;
        // 0x2c9410: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9414u;
        goto label_2c9414;
    }
    ctx->pc = 0x2C940Cu;
    SET_GPR_U32(ctx, 31, 0x2C9414u);
    ctx->pc = 0x2C9410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C940Cu;
    // 0x2c9410: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9578u, 0x2C940Cu, 0x2C9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9414u;
label_2c9414:
    // 0x2c9414: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9418:
    // 0x2c9418: 0xc0a35d6  jal         func_28D758
label_2c941c:
    if (ctx->pc == 0x2C941Cu) {
        ctx->pc = 0x2C941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9418u;
        // 0x2c941c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9420u;
        goto label_2c9420;
    }
    ctx->pc = 0x2C9418u;
    SET_GPR_U32(ctx, 31, 0x2C9420u);
    ctx->pc = 0x2C941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9418u;
    // 0x2c941c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C9418u, 0x2C9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9420u;
label_2c9420:
    // 0x2c9420: 0x10000046  b           . + 4 + (0x46 << 2)
label_2c9424:
    if (ctx->pc == 0x2C9424u) {
        ctx->pc = 0x2C9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9420u;
        // 0x2c9424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9428u;
        goto label_2c9428;
    }
    ctx->pc = 0x2C9420u;
    {
        const bool branch_taken_0x2c9420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9420u;
        // 0x2c9424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9420) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C9428u;
label_2c9428:
    // 0x2c9428: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c9428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c942c:
    // 0x2c942c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c942cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9430:
    // 0x2c9430: 0x0  nop
    ctx->pc = 0x2c9430u;
    // NOP
label_2c9434:
    // 0x2c9434: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c9434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c9438:
    // 0x2c9438: 0x0  nop
    ctx->pc = 0x2c9438u;
    // NOP
label_2c943c:
    // 0x2c943c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2c9440:
    if (ctx->pc == 0x2C9440u) {
        ctx->pc = 0x2C9444u;
        goto label_2c9444;
    }
    ctx->pc = 0x2C943Cu;
    {
        const bool branch_taken_0x2c943c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c943c) {
            ctx->pc = 0x2C94B0u;
            goto label_2c94b0;
        }
    }
    ctx->pc = 0x2C9444u;
label_2c9444:
    // 0x2c9444: 0xc0a36c8  jal         func_28DB20
label_2c9448:
    if (ctx->pc == 0x2C9448u) {
        ctx->pc = 0x2C9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9444u;
        // 0x2c9448: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C944Cu;
        goto label_2c944c;
    }
    ctx->pc = 0x2C9444u;
    SET_GPR_U32(ctx, 31, 0x2C944Cu);
    ctx->pc = 0x2C9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9444u;
    // 0x2c9448: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C9444u, 0x2C944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C944Cu;
label_2c944c:
    // 0x2c944c: 0xc0a367c  jal         func_28D9F0
label_2c9450:
    if (ctx->pc == 0x2C9450u) {
        ctx->pc = 0x2C9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C944Cu;
        // 0x2c9450: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9454u;
        goto label_2c9454;
    }
    ctx->pc = 0x2C944Cu;
    SET_GPR_U32(ctx, 31, 0x2C9454u);
    ctx->pc = 0x2C9450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C944Cu;
    // 0x2c9450: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C944Cu, 0x2C9454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9454u;
label_2c9454:
    // 0x2c9454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9458:
    // 0x2c9458: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
label_2c945c:
    if (ctx->pc == 0x2C945Cu) {
        ctx->pc = 0x2C945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9458u;
        // 0x2c945c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9460u;
        goto label_2c9460;
    }
    ctx->pc = 0x2C9458u;
    {
        const bool branch_taken_0x2c9458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9458u;
        // 0x2c945c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9458) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C9460u;
label_2c9460:
    // 0x2c9460: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2c9460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2c9464:
    // 0x2c9464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9468:
    // 0x2c9468: 0x0  nop
    ctx->pc = 0x2c9468u;
    // NOP
label_2c946c:
    // 0x2c946c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c946cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c9470:
    // 0x2c9470: 0x0  nop
    ctx->pc = 0x2c9470u;
    // NOP
label_2c9474:
    // 0x2c9474: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2c9478:
    if (ctx->pc == 0x2C9478u) {
        ctx->pc = 0x2C9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9474u;
        // 0x2c9478: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C947Cu;
        goto label_2c947c;
    }
    ctx->pc = 0x2C9474u;
    {
        const bool branch_taken_0x2c9474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9474u;
        // 0x2c9478: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9474) {
            ctx->pc = 0x2C9480u;
            goto label_2c9480;
        }
    }
    ctx->pc = 0x2C947Cu;
label_2c947c:
    // 0x2c947c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c947cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c9480:
    // 0x2c9480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c9480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c9484:
    // 0x2c9484: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c9484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9488:
    // 0x2c9488: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c9488u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c948c:
    // 0x2c948c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c948cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c9490:
    // 0x2c9490: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c9490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2c9494:
    // 0x2c9494: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c9494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c9498:
    // 0x2c9498: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c949c:
    // 0x2c949c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2c949cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c94a0:
    // 0x2c94a0: 0xc0bee7a  jal         func_2FB9E8
label_2c94a4:
    if (ctx->pc == 0x2C94A4u) {
        ctx->pc = 0x2C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94A0u;
        // 0x2c94a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94A8u;
        goto label_2c94a8;
    }
    ctx->pc = 0x2C94A0u;
    SET_GPR_U32(ctx, 31, 0x2C94A8u);
    ctx->pc = 0x2C94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C94A0u;
    // 0x2c94a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C94A0u, 0x2C94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94A8u;
label_2c94a8:
    // 0x2c94a8: 0x10000024  b           . + 4 + (0x24 << 2)
label_2c94ac:
    if (ctx->pc == 0x2C94ACu) {
        ctx->pc = 0x2C94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94A8u;
        // 0x2c94ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94B0u;
        goto label_2c94b0;
    }
    ctx->pc = 0x2C94A8u;
    {
        const bool branch_taken_0x2c94a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94A8u;
        // 0x2c94ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94a8) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C94B0u;
label_2c94b0:
    // 0x2c94b0: 0xc0a367c  jal         func_28D9F0
label_2c94b4:
    if (ctx->pc == 0x2C94B4u) {
        ctx->pc = 0x2C94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94B0u;
        // 0x2c94b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94B8u;
        goto label_2c94b8;
    }
    ctx->pc = 0x2C94B0u;
    SET_GPR_U32(ctx, 31, 0x2C94B8u);
    ctx->pc = 0x2C94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C94B0u;
    // 0x2c94b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C94B0u, 0x2C94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94B8u;
label_2c94b8:
    // 0x2c94b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2c94bc:
    if (ctx->pc == 0x2C94BCu) {
        ctx->pc = 0x2C94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94B8u;
        // 0x2c94bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C94C0u;
        goto label_2c94c0;
    }
    ctx->pc = 0x2C94B8u;
    {
        const bool branch_taken_0x2c94b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94B8u;
        // 0x2c94bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94b8) {
            ctx->pc = 0x2C9504u;
            goto label_2c9504;
        }
    }
    ctx->pc = 0x2C94C0u;
label_2c94c0:
    // 0x2c94c0: 0x7a630050  lq          $v1, 0x50($s3)
    ctx->pc = 0x2c94c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_2c94c4:
    // 0x2c94c4: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2c94c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2c94c8:
    // 0x2c94c8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c94c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c94cc:
    // 0x2c94cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c94ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c94d0:
    // 0x2c94d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2c94d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c94d4:
    // 0x2c94d4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c94d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2c94d8:
    // 0x2c94d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c94d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2c94dc:
    // 0x2c94dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2c94dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2c94e0:
    // 0x2c94e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c94e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c94e4:
    // 0x2c94e4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2c94e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_2c94e8:
    // 0x2c94e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2c94e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2c94ec:
    // 0x2c94ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c94ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c94f0:
    // 0x2c94f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c94f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c94f4:
    // 0x2c94f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2c94f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2c94f8:
    // 0x2c94f8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2c94f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2c94fc:
    // 0x2c94fc: 0xc0bf800  jal         func_2FE000
label_2c9500:
    if (ctx->pc == 0x2C9500u) {
        ctx->pc = 0x2C9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94FCu;
        // 0x2c9500: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9504u;
        goto label_2c9504;
    }
    ctx->pc = 0x2C94FCu;
    SET_GPR_U32(ctx, 31, 0x2C9504u);
    ctx->pc = 0x2C9500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C94FCu;
    // 0x2c9500: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C94FCu, 0x2C9504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9504u;
label_2c9504:
    // 0x2c9504: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c9504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c9508:
    // 0x2c9508: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2c9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2c950c:
    // 0x2c950c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c9510:
    // 0x2c9510: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2c9510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c9514:
    // 0x2c9514: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2c9514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c9518:
    // 0x2c9518: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2c951c:
    if (ctx->pc == 0x2C951Cu) {
        ctx->pc = 0x2C951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9518u;
        // 0x2c951c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9520u;
        goto label_2c9520;
    }
    ctx->pc = 0x2C9518u;
    {
        const bool branch_taken_0x2c9518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9518u;
        // 0x2c951c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9518) {
            ctx->pc = 0x2C9538u;
            goto label_2c9538;
        }
    }
    ctx->pc = 0x2C9520u;
label_2c9520:
    // 0x2c9520: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2c9520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2c9524:
    // 0x2c9524: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c9524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2c9528:
    // 0x2c9528: 0xc0cd4fc  jal         func_3353F0
label_2c952c:
    if (ctx->pc == 0x2C952Cu) {
        ctx->pc = 0x2C952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9528u;
        // 0x2c952c: 0x24061964  addiu       $a2, $zero, 0x1964 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9530u;
        goto label_2c9530;
    }
    ctx->pc = 0x2C9528u;
    SET_GPR_U32(ctx, 31, 0x2C9530u);
    ctx->pc = 0x2C952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9528u;
    // 0x2c952c: 0x24061964  addiu       $a2, $zero, 0x1964 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2C9528u, 0x2C9530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9530u;
label_2c9530:
    // 0x2c9530: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c9530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c9534:
    // 0x2c9534: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2c9534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2c9538:
    // 0x2c9538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c953c:
    // 0x2c953c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2c953cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c9540:
    // 0x2c9540: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2c9540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c9544:
    // 0x2c9544: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2c9544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c9548:
    // 0x2c9548: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2c9548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c954c:
    // 0x2c954c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2c954cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c9550:
    // 0x2c9550: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2c9550u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c9554:
    // 0x2c9554: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2c9554u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c9558:
    // 0x2c9558: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c9558u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c955c:
    // 0x2c955c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2c955cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c9560:
    // 0x2c9560: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c9560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c9564:
    // 0x2c9564: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x2c9564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2c9568:
    // 0x2c9568: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2c9568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c956c:
    // 0x2c956c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c9570:
    // 0x2c9570: 0x3e00008  jr          $ra
label_2c9574:
    if (ctx->pc == 0x2C9574u) {
        ctx->pc = 0x2C9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9570u;
        // 0x2c9574: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9578u;
        goto label_fallthrough_0x2c9570;
    }
    ctx->pc = 0x2C9570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9570u;
        // 0x2c9574: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c9570:
    ctx->pc = 0x2C9578u;
}
