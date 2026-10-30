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

// Function: sub_001F9558
// Address: 0x1f9558 - 0x1f9b38
void sub_001F9558_0x1f9558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9558_0x1f9558");
#endif

    switch (ctx->pc) {
        case 0x1f9558u: goto label_1f9558;
        case 0x1f955cu: goto label_1f955c;
        case 0x1f9560u: goto label_1f9560;
        case 0x1f9564u: goto label_1f9564;
        case 0x1f9568u: goto label_1f9568;
        case 0x1f956cu: goto label_1f956c;
        case 0x1f9570u: goto label_1f9570;
        case 0x1f9574u: goto label_1f9574;
        case 0x1f9578u: goto label_1f9578;
        case 0x1f957cu: goto label_1f957c;
        case 0x1f9580u: goto label_1f9580;
        case 0x1f9584u: goto label_1f9584;
        case 0x1f9588u: goto label_1f9588;
        case 0x1f958cu: goto label_1f958c;
        case 0x1f9590u: goto label_1f9590;
        case 0x1f9594u: goto label_1f9594;
        case 0x1f9598u: goto label_1f9598;
        case 0x1f959cu: goto label_1f959c;
        case 0x1f95a0u: goto label_1f95a0;
        case 0x1f95a4u: goto label_1f95a4;
        case 0x1f95a8u: goto label_1f95a8;
        case 0x1f95acu: goto label_1f95ac;
        case 0x1f95b0u: goto label_1f95b0;
        case 0x1f95b4u: goto label_1f95b4;
        case 0x1f95b8u: goto label_1f95b8;
        case 0x1f95bcu: goto label_1f95bc;
        case 0x1f95c0u: goto label_1f95c0;
        case 0x1f95c4u: goto label_1f95c4;
        case 0x1f95c8u: goto label_1f95c8;
        case 0x1f95ccu: goto label_1f95cc;
        case 0x1f95d0u: goto label_1f95d0;
        case 0x1f95d4u: goto label_1f95d4;
        case 0x1f95d8u: goto label_1f95d8;
        case 0x1f95dcu: goto label_1f95dc;
        case 0x1f95e0u: goto label_1f95e0;
        case 0x1f95e4u: goto label_1f95e4;
        case 0x1f95e8u: goto label_1f95e8;
        case 0x1f95ecu: goto label_1f95ec;
        case 0x1f95f0u: goto label_1f95f0;
        case 0x1f95f4u: goto label_1f95f4;
        case 0x1f95f8u: goto label_1f95f8;
        case 0x1f95fcu: goto label_1f95fc;
        case 0x1f9600u: goto label_1f9600;
        case 0x1f9604u: goto label_1f9604;
        case 0x1f9608u: goto label_1f9608;
        case 0x1f960cu: goto label_1f960c;
        case 0x1f9610u: goto label_1f9610;
        case 0x1f9614u: goto label_1f9614;
        case 0x1f9618u: goto label_1f9618;
        case 0x1f961cu: goto label_1f961c;
        case 0x1f9620u: goto label_1f9620;
        case 0x1f9624u: goto label_1f9624;
        case 0x1f9628u: goto label_1f9628;
        case 0x1f962cu: goto label_1f962c;
        case 0x1f9630u: goto label_1f9630;
        case 0x1f9634u: goto label_1f9634;
        case 0x1f9638u: goto label_1f9638;
        case 0x1f963cu: goto label_1f963c;
        case 0x1f9640u: goto label_1f9640;
        case 0x1f9644u: goto label_1f9644;
        case 0x1f9648u: goto label_1f9648;
        case 0x1f964cu: goto label_1f964c;
        case 0x1f9650u: goto label_1f9650;
        case 0x1f9654u: goto label_1f9654;
        case 0x1f9658u: goto label_1f9658;
        case 0x1f965cu: goto label_1f965c;
        case 0x1f9660u: goto label_1f9660;
        case 0x1f9664u: goto label_1f9664;
        case 0x1f9668u: goto label_1f9668;
        case 0x1f966cu: goto label_1f966c;
        case 0x1f9670u: goto label_1f9670;
        case 0x1f9674u: goto label_1f9674;
        case 0x1f9678u: goto label_1f9678;
        case 0x1f967cu: goto label_1f967c;
        case 0x1f9680u: goto label_1f9680;
        case 0x1f9684u: goto label_1f9684;
        case 0x1f9688u: goto label_1f9688;
        case 0x1f968cu: goto label_1f968c;
        case 0x1f9690u: goto label_1f9690;
        case 0x1f9694u: goto label_1f9694;
        case 0x1f9698u: goto label_1f9698;
        case 0x1f969cu: goto label_1f969c;
        case 0x1f96a0u: goto label_1f96a0;
        case 0x1f96a4u: goto label_1f96a4;
        case 0x1f96a8u: goto label_1f96a8;
        case 0x1f96acu: goto label_1f96ac;
        case 0x1f96b0u: goto label_1f96b0;
        case 0x1f96b4u: goto label_1f96b4;
        case 0x1f96b8u: goto label_1f96b8;
        case 0x1f96bcu: goto label_1f96bc;
        case 0x1f96c0u: goto label_1f96c0;
        case 0x1f96c4u: goto label_1f96c4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96ccu: goto label_1f96cc;
        case 0x1f96d0u: goto label_1f96d0;
        case 0x1f96d4u: goto label_1f96d4;
        case 0x1f96d8u: goto label_1f96d8;
        case 0x1f96dcu: goto label_1f96dc;
        case 0x1f96e0u: goto label_1f96e0;
        case 0x1f96e4u: goto label_1f96e4;
        case 0x1f96e8u: goto label_1f96e8;
        case 0x1f96ecu: goto label_1f96ec;
        case 0x1f96f0u: goto label_1f96f0;
        case 0x1f96f4u: goto label_1f96f4;
        case 0x1f96f8u: goto label_1f96f8;
        case 0x1f96fcu: goto label_1f96fc;
        case 0x1f9700u: goto label_1f9700;
        case 0x1f9704u: goto label_1f9704;
        case 0x1f9708u: goto label_1f9708;
        case 0x1f970cu: goto label_1f970c;
        case 0x1f9710u: goto label_1f9710;
        case 0x1f9714u: goto label_1f9714;
        case 0x1f9718u: goto label_1f9718;
        case 0x1f971cu: goto label_1f971c;
        case 0x1f9720u: goto label_1f9720;
        case 0x1f9724u: goto label_1f9724;
        case 0x1f9728u: goto label_1f9728;
        case 0x1f972cu: goto label_1f972c;
        case 0x1f9730u: goto label_1f9730;
        case 0x1f9734u: goto label_1f9734;
        case 0x1f9738u: goto label_1f9738;
        case 0x1f973cu: goto label_1f973c;
        case 0x1f9740u: goto label_1f9740;
        case 0x1f9744u: goto label_1f9744;
        case 0x1f9748u: goto label_1f9748;
        case 0x1f974cu: goto label_1f974c;
        case 0x1f9750u: goto label_1f9750;
        case 0x1f9754u: goto label_1f9754;
        case 0x1f9758u: goto label_1f9758;
        case 0x1f975cu: goto label_1f975c;
        case 0x1f9760u: goto label_1f9760;
        case 0x1f9764u: goto label_1f9764;
        case 0x1f9768u: goto label_1f9768;
        case 0x1f976cu: goto label_1f976c;
        case 0x1f9770u: goto label_1f9770;
        case 0x1f9774u: goto label_1f9774;
        case 0x1f9778u: goto label_1f9778;
        case 0x1f977cu: goto label_1f977c;
        case 0x1f9780u: goto label_1f9780;
        case 0x1f9784u: goto label_1f9784;
        case 0x1f9788u: goto label_1f9788;
        case 0x1f978cu: goto label_1f978c;
        case 0x1f9790u: goto label_1f9790;
        case 0x1f9794u: goto label_1f9794;
        case 0x1f9798u: goto label_1f9798;
        case 0x1f979cu: goto label_1f979c;
        case 0x1f97a0u: goto label_1f97a0;
        case 0x1f97a4u: goto label_1f97a4;
        case 0x1f97a8u: goto label_1f97a8;
        case 0x1f97acu: goto label_1f97ac;
        case 0x1f97b0u: goto label_1f97b0;
        case 0x1f97b4u: goto label_1f97b4;
        case 0x1f97b8u: goto label_1f97b8;
        case 0x1f97bcu: goto label_1f97bc;
        case 0x1f97c0u: goto label_1f97c0;
        case 0x1f97c4u: goto label_1f97c4;
        case 0x1f97c8u: goto label_1f97c8;
        case 0x1f97ccu: goto label_1f97cc;
        case 0x1f97d0u: goto label_1f97d0;
        case 0x1f97d4u: goto label_1f97d4;
        case 0x1f97d8u: goto label_1f97d8;
        case 0x1f97dcu: goto label_1f97dc;
        case 0x1f97e0u: goto label_1f97e0;
        case 0x1f97e4u: goto label_1f97e4;
        case 0x1f97e8u: goto label_1f97e8;
        case 0x1f97ecu: goto label_1f97ec;
        case 0x1f97f0u: goto label_1f97f0;
        case 0x1f97f4u: goto label_1f97f4;
        case 0x1f97f8u: goto label_1f97f8;
        case 0x1f97fcu: goto label_1f97fc;
        case 0x1f9800u: goto label_1f9800;
        case 0x1f9804u: goto label_1f9804;
        case 0x1f9808u: goto label_1f9808;
        case 0x1f980cu: goto label_1f980c;
        case 0x1f9810u: goto label_1f9810;
        case 0x1f9814u: goto label_1f9814;
        case 0x1f9818u: goto label_1f9818;
        case 0x1f981cu: goto label_1f981c;
        case 0x1f9820u: goto label_1f9820;
        case 0x1f9824u: goto label_1f9824;
        case 0x1f9828u: goto label_1f9828;
        case 0x1f982cu: goto label_1f982c;
        case 0x1f9830u: goto label_1f9830;
        case 0x1f9834u: goto label_1f9834;
        case 0x1f9838u: goto label_1f9838;
        case 0x1f983cu: goto label_1f983c;
        case 0x1f9840u: goto label_1f9840;
        case 0x1f9844u: goto label_1f9844;
        case 0x1f9848u: goto label_1f9848;
        case 0x1f984cu: goto label_1f984c;
        case 0x1f9850u: goto label_1f9850;
        case 0x1f9854u: goto label_1f9854;
        case 0x1f9858u: goto label_1f9858;
        case 0x1f985cu: goto label_1f985c;
        case 0x1f9860u: goto label_1f9860;
        case 0x1f9864u: goto label_1f9864;
        case 0x1f9868u: goto label_1f9868;
        case 0x1f986cu: goto label_1f986c;
        case 0x1f9870u: goto label_1f9870;
        case 0x1f9874u: goto label_1f9874;
        case 0x1f9878u: goto label_1f9878;
        case 0x1f987cu: goto label_1f987c;
        case 0x1f9880u: goto label_1f9880;
        case 0x1f9884u: goto label_1f9884;
        case 0x1f9888u: goto label_1f9888;
        case 0x1f988cu: goto label_1f988c;
        case 0x1f9890u: goto label_1f9890;
        case 0x1f9894u: goto label_1f9894;
        case 0x1f9898u: goto label_1f9898;
        case 0x1f989cu: goto label_1f989c;
        case 0x1f98a0u: goto label_1f98a0;
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98a8u: goto label_1f98a8;
        case 0x1f98acu: goto label_1f98ac;
        case 0x1f98b0u: goto label_1f98b0;
        case 0x1f98b4u: goto label_1f98b4;
        case 0x1f98b8u: goto label_1f98b8;
        case 0x1f98bcu: goto label_1f98bc;
        case 0x1f98c0u: goto label_1f98c0;
        case 0x1f98c4u: goto label_1f98c4;
        case 0x1f98c8u: goto label_1f98c8;
        case 0x1f98ccu: goto label_1f98cc;
        case 0x1f98d0u: goto label_1f98d0;
        case 0x1f98d4u: goto label_1f98d4;
        case 0x1f98d8u: goto label_1f98d8;
        case 0x1f98dcu: goto label_1f98dc;
        case 0x1f98e0u: goto label_1f98e0;
        case 0x1f98e4u: goto label_1f98e4;
        case 0x1f98e8u: goto label_1f98e8;
        case 0x1f98ecu: goto label_1f98ec;
        case 0x1f98f0u: goto label_1f98f0;
        case 0x1f98f4u: goto label_1f98f4;
        case 0x1f98f8u: goto label_1f98f8;
        case 0x1f98fcu: goto label_1f98fc;
        case 0x1f9900u: goto label_1f9900;
        case 0x1f9904u: goto label_1f9904;
        case 0x1f9908u: goto label_1f9908;
        case 0x1f990cu: goto label_1f990c;
        case 0x1f9910u: goto label_1f9910;
        case 0x1f9914u: goto label_1f9914;
        case 0x1f9918u: goto label_1f9918;
        case 0x1f991cu: goto label_1f991c;
        case 0x1f9920u: goto label_1f9920;
        case 0x1f9924u: goto label_1f9924;
        case 0x1f9928u: goto label_1f9928;
        case 0x1f992cu: goto label_1f992c;
        case 0x1f9930u: goto label_1f9930;
        case 0x1f9934u: goto label_1f9934;
        case 0x1f9938u: goto label_1f9938;
        case 0x1f993cu: goto label_1f993c;
        case 0x1f9940u: goto label_1f9940;
        case 0x1f9944u: goto label_1f9944;
        case 0x1f9948u: goto label_1f9948;
        case 0x1f994cu: goto label_1f994c;
        case 0x1f9950u: goto label_1f9950;
        case 0x1f9954u: goto label_1f9954;
        case 0x1f9958u: goto label_1f9958;
        case 0x1f995cu: goto label_1f995c;
        case 0x1f9960u: goto label_1f9960;
        case 0x1f9964u: goto label_1f9964;
        case 0x1f9968u: goto label_1f9968;
        case 0x1f996cu: goto label_1f996c;
        case 0x1f9970u: goto label_1f9970;
        case 0x1f9974u: goto label_1f9974;
        case 0x1f9978u: goto label_1f9978;
        case 0x1f997cu: goto label_1f997c;
        case 0x1f9980u: goto label_1f9980;
        case 0x1f9984u: goto label_1f9984;
        case 0x1f9988u: goto label_1f9988;
        case 0x1f998cu: goto label_1f998c;
        case 0x1f9990u: goto label_1f9990;
        case 0x1f9994u: goto label_1f9994;
        case 0x1f9998u: goto label_1f9998;
        case 0x1f999cu: goto label_1f999c;
        case 0x1f99a0u: goto label_1f99a0;
        case 0x1f99a4u: goto label_1f99a4;
        case 0x1f99a8u: goto label_1f99a8;
        case 0x1f99acu: goto label_1f99ac;
        case 0x1f99b0u: goto label_1f99b0;
        case 0x1f99b4u: goto label_1f99b4;
        case 0x1f99b8u: goto label_1f99b8;
        case 0x1f99bcu: goto label_1f99bc;
        case 0x1f99c0u: goto label_1f99c0;
        case 0x1f99c4u: goto label_1f99c4;
        case 0x1f99c8u: goto label_1f99c8;
        case 0x1f99ccu: goto label_1f99cc;
        case 0x1f99d0u: goto label_1f99d0;
        case 0x1f99d4u: goto label_1f99d4;
        case 0x1f99d8u: goto label_1f99d8;
        case 0x1f99dcu: goto label_1f99dc;
        case 0x1f99e0u: goto label_1f99e0;
        case 0x1f99e4u: goto label_1f99e4;
        case 0x1f99e8u: goto label_1f99e8;
        case 0x1f99ecu: goto label_1f99ec;
        case 0x1f99f0u: goto label_1f99f0;
        case 0x1f99f4u: goto label_1f99f4;
        case 0x1f99f8u: goto label_1f99f8;
        case 0x1f99fcu: goto label_1f99fc;
        case 0x1f9a00u: goto label_1f9a00;
        case 0x1f9a04u: goto label_1f9a04;
        case 0x1f9a08u: goto label_1f9a08;
        case 0x1f9a0cu: goto label_1f9a0c;
        case 0x1f9a10u: goto label_1f9a10;
        case 0x1f9a14u: goto label_1f9a14;
        case 0x1f9a18u: goto label_1f9a18;
        case 0x1f9a1cu: goto label_1f9a1c;
        case 0x1f9a20u: goto label_1f9a20;
        case 0x1f9a24u: goto label_1f9a24;
        case 0x1f9a28u: goto label_1f9a28;
        case 0x1f9a2cu: goto label_1f9a2c;
        case 0x1f9a30u: goto label_1f9a30;
        case 0x1f9a34u: goto label_1f9a34;
        case 0x1f9a38u: goto label_1f9a38;
        case 0x1f9a3cu: goto label_1f9a3c;
        case 0x1f9a40u: goto label_1f9a40;
        case 0x1f9a44u: goto label_1f9a44;
        case 0x1f9a48u: goto label_1f9a48;
        case 0x1f9a4cu: goto label_1f9a4c;
        case 0x1f9a50u: goto label_1f9a50;
        case 0x1f9a54u: goto label_1f9a54;
        case 0x1f9a58u: goto label_1f9a58;
        case 0x1f9a5cu: goto label_1f9a5c;
        case 0x1f9a60u: goto label_1f9a60;
        case 0x1f9a64u: goto label_1f9a64;
        case 0x1f9a68u: goto label_1f9a68;
        case 0x1f9a6cu: goto label_1f9a6c;
        case 0x1f9a70u: goto label_1f9a70;
        case 0x1f9a74u: goto label_1f9a74;
        case 0x1f9a78u: goto label_1f9a78;
        case 0x1f9a7cu: goto label_1f9a7c;
        case 0x1f9a80u: goto label_1f9a80;
        case 0x1f9a84u: goto label_1f9a84;
        case 0x1f9a88u: goto label_1f9a88;
        case 0x1f9a8cu: goto label_1f9a8c;
        case 0x1f9a90u: goto label_1f9a90;
        case 0x1f9a94u: goto label_1f9a94;
        case 0x1f9a98u: goto label_1f9a98;
        case 0x1f9a9cu: goto label_1f9a9c;
        case 0x1f9aa0u: goto label_1f9aa0;
        case 0x1f9aa4u: goto label_1f9aa4;
        case 0x1f9aa8u: goto label_1f9aa8;
        case 0x1f9aacu: goto label_1f9aac;
        case 0x1f9ab0u: goto label_1f9ab0;
        case 0x1f9ab4u: goto label_1f9ab4;
        case 0x1f9ab8u: goto label_1f9ab8;
        case 0x1f9abcu: goto label_1f9abc;
        case 0x1f9ac0u: goto label_1f9ac0;
        case 0x1f9ac4u: goto label_1f9ac4;
        case 0x1f9ac8u: goto label_1f9ac8;
        case 0x1f9accu: goto label_1f9acc;
        case 0x1f9ad0u: goto label_1f9ad0;
        case 0x1f9ad4u: goto label_1f9ad4;
        case 0x1f9ad8u: goto label_1f9ad8;
        case 0x1f9adcu: goto label_1f9adc;
        case 0x1f9ae0u: goto label_1f9ae0;
        case 0x1f9ae4u: goto label_1f9ae4;
        case 0x1f9ae8u: goto label_1f9ae8;
        case 0x1f9aecu: goto label_1f9aec;
        case 0x1f9af0u: goto label_1f9af0;
        case 0x1f9af4u: goto label_1f9af4;
        case 0x1f9af8u: goto label_1f9af8;
        case 0x1f9afcu: goto label_1f9afc;
        case 0x1f9b00u: goto label_1f9b00;
        case 0x1f9b04u: goto label_1f9b04;
        case 0x1f9b08u: goto label_1f9b08;
        case 0x1f9b0cu: goto label_1f9b0c;
        case 0x1f9b10u: goto label_1f9b10;
        case 0x1f9b14u: goto label_1f9b14;
        case 0x1f9b18u: goto label_1f9b18;
        case 0x1f9b1cu: goto label_1f9b1c;
        case 0x1f9b20u: goto label_1f9b20;
        case 0x1f9b24u: goto label_1f9b24;
        case 0x1f9b28u: goto label_1f9b28;
        case 0x1f9b2cu: goto label_1f9b2c;
        case 0x1f9b30u: goto label_1f9b30;
        case 0x1f9b34u: goto label_1f9b34;
        default: break;
    }

    ctx->pc = 0x1f9558u;

label_1f9558:
    // 0x1f9558: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1f9558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1f955c:
    // 0x1f955c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1f955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1f9560:
    // 0x1f9560: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1f9560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1f9564:
    // 0x1f9564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9568:
    // 0x1f9568: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1f9568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1f956c:
    // 0x1f956c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1f956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1f9570:
    // 0x1f9570: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1f9570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1f9574:
    // 0x1f9574: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1f9574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1f9578:
    // 0x1f9578: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1f9578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1f957c:
    // 0x1f957c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f9580:
    // 0x1f9580: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1f9580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1f9584:
    // 0x1f9584: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f9588:
    // 0x1f9588: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1f9588u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f958c:
    // 0x1f958c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1f958cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f9590:
    // 0x1f9590: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f9594:
    // 0x1f9594: 0x1440015a  bnez        $v0, . + 4 + (0x15A << 2)
label_1f9598:
    if (ctx->pc == 0x1F9598u) {
        ctx->pc = 0x1F9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9594u;
        // 0x1f9598: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F959Cu;
        goto label_1f959c;
    }
    ctx->pc = 0x1F9594u;
    {
        const bool branch_taken_0x1f9594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9594u;
        // 0x1f9598: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9594) {
            ctx->pc = 0x1F9B00u;
            goto label_1f9b00;
        }
    }
    ctx->pc = 0x1F959Cu;
label_1f959c:
    // 0x1f959c: 0xc07e548  jal         func_1F9520
label_1f95a0:
    if (ctx->pc == 0x1F95A0u) {
        ctx->pc = 0x1F95A4u;
        goto label_1f95a4;
    }
    ctx->pc = 0x1F959Cu;
    SET_GPR_U32(ctx, 31, 0x1F95A4u);
    ctx->pc = 0x1F9520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9520u, 0x1F959Cu, 0x1F95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95A4u;
label_1f95a4:
    // 0x1f95a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f95a8:
    // 0x1f95a8: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1f95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1f95ac:
    // 0x1f95ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f95acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f95b0:
    // 0x1f95b0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1f95b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1f95b4:
    // 0x1f95b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f95b8:
    if (ctx->pc == 0x1F95B8u) {
        ctx->pc = 0x1F95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95B4u;
        // 0x1f95b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F95BCu;
        goto label_1f95bc;
    }
    ctx->pc = 0x1F95B4u;
    {
        const bool branch_taken_0x1f95b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95B4u;
        // 0x1f95b8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95b4) {
            ctx->pc = 0x1F95DCu;
            goto label_1f95dc;
        }
    }
    ctx->pc = 0x1F95BCu;
label_1f95bc:
    // 0x1f95bc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_1f95c0:
    if (ctx->pc == 0x1F95C0u) {
        ctx->pc = 0x1F95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95BCu;
        // 0x1f95c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F95C4u;
        goto label_1f95c4;
    }
    ctx->pc = 0x1F95BCu;
    {
        const bool branch_taken_0x1f95bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95BCu;
        // 0x1f95c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95bc) {
            ctx->pc = 0x1F966Cu;
            goto label_1f966c;
        }
    }
    ctx->pc = 0x1F95C4u;
label_1f95c4:
    // 0x1f95c4: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1f95c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_1f95c8:
    // 0x1f95c8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1f95c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1f95cc:
    // 0x1f95cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f95ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f95d0:
    // 0x1f95d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f95d4:
    // 0x1f95d4: 0x10000025  b           . + 4 + (0x25 << 2)
label_1f95d8:
    if (ctx->pc == 0x1F95D8u) {
        ctx->pc = 0x1F95D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95D4u;
        // 0x1f95d8: 0xe440f494  swc1        $f0, -0xB6C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964372), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F95DCu;
        goto label_1f95dc;
    }
    ctx->pc = 0x1F95D4u;
    {
        const bool branch_taken_0x1f95d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95D4u;
        // 0x1f95d8: 0xe440f494  swc1        $f0, -0xB6C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95d4) {
            ctx->pc = 0x1F966Cu;
            goto label_1f966c;
        }
    }
    ctx->pc = 0x1F95DCu;
label_1f95dc:
    // 0x1f95dc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1f95dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f95e0:
    // 0x1f95e0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1f95e4:
    if (ctx->pc == 0x1F95E4u) {
        ctx->pc = 0x1F95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95E0u;
        // 0x1f95e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F95E8u;
        goto label_1f95e8;
    }
    ctx->pc = 0x1F95E0u;
    {
        const bool branch_taken_0x1f95e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95E0u;
        // 0x1f95e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95e0) {
            ctx->pc = 0x1F966Cu;
            goto label_1f966c;
        }
    }
    ctx->pc = 0x1F95E8u;
label_1f95e8:
    // 0x1f95e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1f95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f95ec:
    // 0x1f95ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1f95f0:
    if (ctx->pc == 0x1F95F0u) {
        ctx->pc = 0x1F95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95ECu;
        // 0x1f95f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F95F4u;
        goto label_1f95f4;
    }
    ctx->pc = 0x1F95ECu;
    {
        const bool branch_taken_0x1f95ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95ECu;
        // 0x1f95f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95ec) {
            ctx->pc = 0x1F9628u;
            goto label_1f9628;
        }
    }
    ctx->pc = 0x1F95F4u;
label_1f95f4:
    // 0x1f95f4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1f95f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1f95f8:
    // 0x1f95f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f95f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f95fc:
    // 0x1f95fc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1f95fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1f9600:
    // 0x1f9600: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f9600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f9604:
    // 0x1f9604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9608:
    // 0x1f9608: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f9608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f960c:
    // 0x1f960c: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1f960cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
label_1f9610:
    // 0x1f9610: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1f9610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_1f9614:
    // 0x1f9614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f9614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9618:
    // 0x1f9618: 0xe462f488  swc1        $f2, -0xB78($v1)
    ctx->pc = 0x1f9618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964360), bits); }
label_1f961c:
    // 0x1f961c: 0xe600f48c  swc1        $f0, -0xB74($s0)
    ctx->pc = 0x1f961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964364), bits); }
label_1f9620:
    // 0x1f9620: 0x10000012  b           . + 4 + (0x12 << 2)
label_1f9624:
    if (ctx->pc == 0x1F9624u) {
        ctx->pc = 0x1F9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9620u;
        // 0x1f9624: 0xe441f490  swc1        $f1, -0xB70($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9628u;
        goto label_1f9628;
    }
    ctx->pc = 0x1F9620u;
    {
        const bool branch_taken_0x1f9620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9620u;
        // 0x1f9624: 0xe441f490  swc1        $f1, -0xB70($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9620) {
            ctx->pc = 0x1F966Cu;
            goto label_1f966c;
        }
    }
    ctx->pc = 0x1F9628u;
label_1f9628:
    // 0x1f9628: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1f9628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1f962c:
    // 0x1f962c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f962cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f9630:
    // 0x1f9630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9634:
    // 0x1f9634: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1f9634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_1f9638:
    // 0x1f9638: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1f9638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1f963c:
    // 0x1f963c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f963cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9640:
    // 0x1f9640: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f9640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f9644:
    // 0x1f9644: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1f9644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1f9648:
    // 0x1f9648: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f9648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f964c:
    // 0x1f964c: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x1f964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
label_1f9650:
    // 0x1f9650: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1f9650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1f9654:
    // 0x1f9654: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f9658:
    // 0x1f9658: 0xe440f490  swc1        $f0, -0xB70($v0)
    ctx->pc = 0x1f9658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964368), bits); }
label_1f965c:
    // 0x1f965c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f9660:
    // 0x1f9660: 0xe481f494  swc1        $f1, -0xB6C($a0)
    ctx->pc = 0x1f9660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964372), bits); }
label_1f9664:
    // 0x1f9664: 0xe442f488  swc1        $f2, -0xB78($v0)
    ctx->pc = 0x1f9664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964360), bits); }
label_1f9668:
    // 0x1f9668: 0xe603f48c  swc1        $f3, -0xB74($s0)
    ctx->pc = 0x1f9668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964364), bits); }
label_1f966c:
    // 0x1f966c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9670:
    // 0x1f9670: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x1f9670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_1f9674:
    // 0x1f9674: 0xa22000e6  sb          $zero, 0xE6($s1)
    ctx->pc = 0x1f9674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 230), (uint8_t)GPR_U32(ctx, 0));
label_1f9678:
    // 0x1f9678: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1f967c:
    // 0x1f967c: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x1f967cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
label_1f9680:
    // 0x1f9680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9684:
    // 0x1f9684: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x1f9684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_1f9688:
    // 0x1f9688: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1f9688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1f968c:
    // 0x1f968c: 0xa2200104  sb          $zero, 0x104($s1)
    ctx->pc = 0x1f968cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 260), (uint8_t)GPR_U32(ctx, 0));
label_1f9690:
    // 0x1f9690: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f9690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9694:
    // 0x1f9694: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f9694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f9698:
    // 0x1f9698: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1f9698u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1f969c:
    // 0x1f969c: 0xa22200e4  sb          $v0, 0xE4($s1)
    ctx->pc = 0x1f969cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 2));
label_1f96a0:
    // 0x1f96a0: 0xc06ba26  jal         func_1AE898
label_1f96a4:
    if (ctx->pc == 0x1F96A4u) {
        ctx->pc = 0x1F96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96A0u;
        // 0x1f96a4: 0x3c170055  lui         $s7, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96A8u;
        goto label_1f96a8;
    }
    ctx->pc = 0x1F96A0u;
    SET_GPR_U32(ctx, 31, 0x1F96A8u);
    ctx->pc = 0x1F96A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96A0u;
    // 0x1f96a4: 0x3c170055  lui         $s7, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1F96A0u, 0x1F96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96A8u;
label_1f96a8:
    // 0x1f96a8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1f96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1f96ac:
    // 0x1f96ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f96acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f96b0:
    // 0x1f96b0: 0xc062c5a  jal         func_18B168
label_1f96b4:
    if (ctx->pc == 0x1F96B4u) {
        ctx->pc = 0x1F96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96B0u;
        // 0x1f96b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96B8u;
        goto label_1f96b8;
    }
    ctx->pc = 0x1F96B0u;
    SET_GPR_U32(ctx, 31, 0x1F96B8u);
    ctx->pc = 0x1F96B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96B0u;
    // 0x1f96b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x1F96B0u, 0x1F96B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96B8u;
label_1f96b8:
    // 0x1f96b8: 0xc07e4e8  jal         func_1F93A0
label_1f96bc:
    if (ctx->pc == 0x1F96BCu) {
        ctx->pc = 0x1F96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96B8u;
        // 0x1f96bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96C0u;
        goto label_1f96c0;
    }
    ctx->pc = 0x1F96B8u;
    SET_GPR_U32(ctx, 31, 0x1F96C0u);
    ctx->pc = 0x1F96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96B8u;
    // 0x1f96bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F93A0u, 0x1F96B8u, 0x1F96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96C0u;
label_1f96c0:
    // 0x1f96c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f96c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f96c4:
    // 0x1f96c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f96c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f96c8:
    // 0x1f96c8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1f96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f96cc:
    // 0x1f96cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f96ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f96d0:
    // 0x1f96d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f96d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f96d4:
    // 0x1f96d4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f96d8:
    // 0x1f96d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f96d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f96dc:
    // 0x1f96dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f96dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f96e0:
    // 0x1f96e0: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_1f96e4:
    // 0x1f96e4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f96e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f96e8:
    // 0x1f96e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f96e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f96ec:
    // 0x1f96ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f96ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f96f0:
    // 0x1f96f0: 0xc601f48c  lwc1        $f1, -0xB74($s0)
    ctx->pc = 0x1f96f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f96f4:
    // 0x1f96f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f96f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f96f8:
    // 0x1f96f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f96f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f96fc:
    // 0x1f96fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f96fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9700:
    // 0x1f9700: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1f9700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f9704:
    // 0x1f9704: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1f9704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1f9708:
    // 0x1f9708: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f9708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1f970c:
    // 0x1f970c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f970cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f9710:
    // 0x1f9710: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9714:
    // 0x1f9714: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1f9714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f9718:
    // 0x1f9718: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1f9718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1f971c:
    // 0x1f971c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1f971cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1f9720:
    // 0x1f9720: 0xc048b52  jal         func_122D48
label_1f9724:
    if (ctx->pc == 0x1F9724u) {
        ctx->pc = 0x1F9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9720u;
        // 0x1f9724: 0xe462000c  swc1        $f2, 0xC($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9728u;
        goto label_1f9728;
    }
    ctx->pc = 0x1F9720u;
    SET_GPR_U32(ctx, 31, 0x1F9728u);
    ctx->pc = 0x1F9724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9720u;
    // 0x1f9724: 0xe462000c  swc1        $f2, 0xC($v1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1F9720u, 0x1F9728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9728u;
label_1f9728:
    // 0x1f9728: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1f9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1f972c:
    // 0x1f972c: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f9730:
    // 0x1f9730: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f9734:
    if (ctx->pc == 0x1F9734u) {
        ctx->pc = 0x1F9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9730u;
        // 0x1f9734: 0xa22000e5  sb          $zero, 0xE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 229), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9738u;
        goto label_1f9738;
    }
    ctx->pc = 0x1F9730u;
    {
        const bool branch_taken_0x1f9730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9730u;
        // 0x1f9734: 0xa22000e5  sb          $zero, 0xE5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 229), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9730) {
            ctx->pc = 0x1F9740u;
            goto label_1f9740;
        }
    }
    ctx->pc = 0x1F9738u;
label_1f9738:
    // 0x1f9738: 0x10000042  b           . + 4 + (0x42 << 2)
label_1f973c:
    if (ctx->pc == 0x1F973Cu) {
        ctx->pc = 0x1F973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9738u;
        // 0x1f973c: 0x922200e5  lbu         $v0, 0xE5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9740u;
        goto label_1f9740;
    }
    ctx->pc = 0x1F9738u;
    {
        const bool branch_taken_0x1f9738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9738u;
        // 0x1f973c: 0x922200e5  lbu         $v0, 0xE5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9738) {
            ctx->pc = 0x1F9844u;
            goto label_1f9844;
        }
    }
    ctx->pc = 0x1F9740u;
label_1f9740:
    // 0x1f9740: 0x8fc927e4  lw          $t1, 0x27E4($fp)
    ctx->pc = 0x1f9740u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f9744:
    // 0x1f9744: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x1f9744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1f9748:
    // 0x1f9748: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x1f9748u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1f974c:
    // 0x1f974c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f9750:
    // 0x1f9750: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f9750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f9754:
    // 0x1f9754: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f9758:
    // 0x1f9758: 0x24a57ae0  addiu       $a1, $a1, 0x7AE0
    ctx->pc = 0x1f9758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31456));
label_1f975c:
    // 0x1f975c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f975cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f9760:
    // 0x1f9760: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f9760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f9764:
    // 0x1f9764: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f9768:
    // 0x1f9768: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f976c:
    // 0x1f976c: 0x26e87a78  addiu       $t0, $s7, 0x7A78
    ctx->pc = 0x1f976cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 31352));
label_1f9770:
    // 0x1f9770: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1f9770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1f9774:
    // 0x1f9774: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f9774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9778:
    // 0x1f9778: 0x240900c9  addiu       $t1, $zero, 0xC9
    ctx->pc = 0x1f9778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_1f977c:
    // 0x1f977c: 0x40f809  jalr        $v0
label_1f9780:
    if (ctx->pc == 0x1F9780u) {
        ctx->pc = 0x1F9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F977Cu;
        // 0x1f9780: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9784u;
        goto label_1f9784;
    }
    ctx->pc = 0x1F977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9784u);
        ctx->pc = 0x1F9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F977Cu;
        // 0x1f9780: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F977Cu, 0x1F9784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9784u;
label_1f9784:
    // 0x1f9784: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f9784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9788:
    // 0x1f9788: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_1f978c:
    if (ctx->pc == 0x1F978Cu) {
        ctx->pc = 0x1F978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9788u;
        // 0x1f978c: 0xae090000  sw          $t1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9790u;
        goto label_1f9790;
    }
    ctx->pc = 0x1F9788u;
    {
        const bool branch_taken_0x1f9788 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9788) {
            ctx->pc = 0x1F978Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9788u;
            // 0x1f978c: 0xae090000  sw          $t1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F97A0u;
            goto label_1f97a0;
        }
    }
    ctx->pc = 0x1F9790u;
label_1f9790:
    // 0x1f9790: 0xc0705aa  jal         func_1C16A8
label_1f9794:
    if (ctx->pc == 0x1F9794u) {
        ctx->pc = 0x1F9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9790u;
        // 0x1f9794: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9798u;
        goto label_1f9798;
    }
    ctx->pc = 0x1F9790u;
    SET_GPR_U32(ctx, 31, 0x1F9798u);
    ctx->pc = 0x1F9794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9790u;
    // 0x1f9794: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1F9790u, 0x1F9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9798u;
label_1f9798:
    // 0x1f9798: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f9798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f979c:
    // 0x1f979c: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x1f979cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
label_1f97a0:
    // 0x1f97a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f97a4:
    // 0x1f97a4: 0xc46cf488  lwc1        $f12, -0xB78($v1)
    ctx->pc = 0x1f97a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f97a8:
    // 0x1f97a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f97a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1f97ac:
    // 0x1f97ac: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1f97acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f97b0:
    // 0x1f97b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f97b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f97b4:
    // 0x1f97b4: 0x8c86d310  lw          $a2, -0x2CF0($a0)
    ctx->pc = 0x1f97b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1f97b8:
    // 0x1f97b8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f97b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f97bc:
    // 0x1f97bc: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1f97bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1f97c0:
    // 0x1f97c0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1f97c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f97c4:
    // 0x1f97c4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1f97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1f97c8:
    // 0x1f97c8: 0x26320068  addiu       $s2, $s1, 0x68
    ctx->pc = 0x1f97c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_1f97cc:
    // 0x1f97cc: 0x40f809  jalr        $v0
label_1f97d0:
    if (ctx->pc == 0x1F97D0u) {
        ctx->pc = 0x1F97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97CCu;
        // 0x1f97d0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97D4u;
        goto label_1f97d4;
    }
    ctx->pc = 0x1F97CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F97D4u);
        ctx->pc = 0x1F97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97CCu;
        // 0x1f97d0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F97CCu, 0x1F97D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F97D4u;
label_1f97d4:
    // 0x1f97d4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f97d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f97d8:
    // 0x1f97d8: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1f97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1f97dc:
    // 0x1f97dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f97dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f97e0:
    // 0x1f97e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f97e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f97e4:
    // 0x1f97e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f97e8:
    // 0x1f97e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f97e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1f97ec:
    // 0x1f97ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f97ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f97f0:
    // 0x1f97f0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1f97f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1f97f4:
    // 0x1f97f4: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1f97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f97f8:
    // 0x1f97f8: 0x60f809  jalr        $v1
label_1f97fc:
    if (ctx->pc == 0x1F97FCu) {
        ctx->pc = 0x1F97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97F8u;
        // 0x1f97fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9800u;
        goto label_1f9800;
    }
    ctx->pc = 0x1F97F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9800u);
        ctx->pc = 0x1F97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97F8u;
        // 0x1f97fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F97F8u, 0x1F9800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9800u;
label_1f9800:
    // 0x1f9800: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f9800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9804:
    // 0x1f9804: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9808:
    // 0x1f9808: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f9808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f980c:
    // 0x1f980c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f9810:
    // 0x1f9810: 0x60f809  jalr        $v1
label_1f9814:
    if (ctx->pc == 0x1F9814u) {
        ctx->pc = 0x1F9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9810u;
        // 0x1f9814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9818u;
        goto label_1f9818;
    }
    ctx->pc = 0x1F9810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9818u);
        ctx->pc = 0x1F9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9810u;
        // 0x1f9814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9810u, 0x1F9818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9818u;
label_1f9818:
    // 0x1f9818: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1f9818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f981c:
    // 0x1f981c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1f981cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f9820:
    // 0x1f9820: 0x2e83000a  sltiu       $v1, $s4, 0xA
    ctx->pc = 0x1f9820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1f9824:
    // 0x1f9824: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f9828:
    if (ctx->pc == 0x1F9828u) {
        ctx->pc = 0x1F9828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9824u;
        // 0x1f9828: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F982Cu;
        goto label_1f982c;
    }
    ctx->pc = 0x1F9824u;
    {
        const bool branch_taken_0x1f9824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9824u;
        // 0x1f9828: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9824) {
            ctx->pc = 0x1F9840u;
            goto label_1f9840;
        }
    }
    ctx->pc = 0x1F982Cu;
label_1f982c:
    // 0x1f982c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f9830:
    // 0x1f9830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9834:
    // 0x1f9834: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_1f9838:
    if (ctx->pc == 0x1F9838u) {
        ctx->pc = 0x1F9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9834u;
        // 0x1f9838: 0x8fc927e4  lw          $t1, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F983Cu;
        goto label_1f983c;
    }
    ctx->pc = 0x1F9834u;
    {
        const bool branch_taken_0x1f9834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9834u;
        // 0x1f9838: 0x8fc927e4  lw          $t1, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9834) {
            ctx->pc = 0x1F9744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9744;
        }
    }
    ctx->pc = 0x1F983Cu;
label_1f983c:
    // 0x1f983c: 0xa23400e5  sb          $s4, 0xE5($s1)
    ctx->pc = 0x1f983cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 229), (uint8_t)GPR_U32(ctx, 20));
label_1f9840:
    // 0x1f9840: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1f9840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1f9844:
    // 0x1f9844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f9848:
    // 0x1f9848: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
label_1f984c:
    if (ctx->pc == 0x1F984Cu) {
        ctx->pc = 0x1F984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9848u;
        // 0x1f984c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9850u;
        goto label_1f9850;
    }
    ctx->pc = 0x1F9848u;
    {
        const bool branch_taken_0x1f9848 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9848u;
        // 0x1f984c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9848) {
            ctx->pc = 0x1F9938u;
            goto label_1f9938;
        }
    }
    ctx->pc = 0x1F9850u;
label_1f9850:
    // 0x1f9850: 0x263300b8  addiu       $s3, $s1, 0xB8
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_1f9854:
    // 0x1f9854: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x1f9854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f9858:
    // 0x1f9858: 0x8fcb27e4  lw          $t3, 0x27E4($fp)
    ctx->pc = 0x1f9858u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f985c:
    // 0x1f985c: 0x0  nop
    ctx->pc = 0x1f985cu;
    // NOP
label_1f9860:
    // 0x1f9860: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f9860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f9864:
    // 0x1f9864: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x1f9864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1f9868:
    // 0x1f9868: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f9868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f986c:
    // 0x1f986c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f9870:
    // 0x1f9870: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f9870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f9874:
    // 0x1f9874: 0x24457af8  addiu       $a1, $v0, 0x7AF8
    ctx->pc = 0x1f9874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31480));
label_1f9878:
    // 0x1f9878: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f9878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f987c:
    // 0x1f987c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f987cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f9880:
    // 0x1f9880: 0x26e87a78  addiu       $t0, $s7, 0x7A78
    ctx->pc = 0x1f9880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 31352));
label_1f9884:
    // 0x1f9884: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f9884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f9888:
    // 0x1f9888: 0x240900d4  addiu       $t1, $zero, 0xD4
    ctx->pc = 0x1f9888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_1f988c:
    // 0x1f988c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1f9890:
    // 0x1f9890: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f9890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9894:
    // 0x1f9894: 0x40f809  jalr        $v0
label_1f9898:
    if (ctx->pc == 0x1F9898u) {
        ctx->pc = 0x1F9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9894u;
        // 0x1f9898: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F989Cu;
        goto label_1f989c;
    }
    ctx->pc = 0x1F9894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F989Cu);
        ctx->pc = 0x1F9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9894u;
        // 0x1f9898: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9894u, 0x1F989Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F989Cu;
label_1f989c:
    // 0x1f989c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f98a0:
    if (ctx->pc == 0x1F98A0u) {
        ctx->pc = 0x1F98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F989Cu;
        // 0x1f98a0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F98A4u;
        goto label_1f98a4;
    }
    ctx->pc = 0x1F989Cu;
    {
        const bool branch_taken_0x1f989c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f989c) {
            ctx->pc = 0x1F98A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F989Cu;
            // 0x1f98a0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F98B0u;
            goto label_1f98b0;
        }
    }
    ctx->pc = 0x1F98A4u;
label_1f98a4:
    // 0x1f98a4: 0xc0686fe  jal         func_1A1BF8
label_1f98a8:
    if (ctx->pc == 0x1F98A8u) {
        ctx->pc = 0x1F98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98A4u;
        // 0x1f98a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F98ACu;
        goto label_1f98ac;
    }
    ctx->pc = 0x1F98A4u;
    SET_GPR_U32(ctx, 31, 0x1F98ACu);
    ctx->pc = 0x1F98A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98A4u;
    // 0x1f98a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F98A4u, 0x1F98ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98ACu;
label_1f98ac:
    // 0x1f98ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f98acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1f98b0:
    // 0x1f98b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1f98b4:
    // 0x1f98b4: 0x8c86d310  lw          $a2, -0x2CF0($a0)
    ctx->pc = 0x1f98b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1f98b8:
    // 0x1f98b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f98b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f98bc:
    // 0x1f98bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f98c0:
    // 0x1f98c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f98c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f98c4:
    // 0x1f98c4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1f98c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f98c8:
    // 0x1f98c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f98cc:
    // 0x1f98cc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f98ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f98d0:
    // 0x1f98d0: 0x3c09001d  lui         $t1, 0x1D
    ctx->pc = 0x1f98d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)29 << 16));
label_1f98d4:
    // 0x1f98d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1f98d8:
    // 0x1f98d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f98d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f98dc:
    // 0x1f98dc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f98dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1f98e0:
    // 0x1f98e0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f98e4:
    // 0x1f98e4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1f98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
label_1f98e8:
    // 0x1f98e8: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1f98e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1f98ec:
    // 0x1f98ec: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1f98ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1f98f0:
    // 0x1f98f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f98f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f98f4:
    // 0x1f98f4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f98f8:
    // 0x1f98f8: 0x40f809  jalr        $v0
label_1f98fc:
    if (ctx->pc == 0x1F98FCu) {
        ctx->pc = 0x1F98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98F8u;
        // 0x1f98fc: 0x8e2a0060  lw          $t2, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9900u;
        goto label_1f9900;
    }
    ctx->pc = 0x1F98F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9900u);
        ctx->pc = 0x1F98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98F8u;
        // 0x1f98fc: 0x8e2a0060  lw          $t2, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98F8u, 0x1F9900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9900u;
label_1f9900:
    // 0x1f9900: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f9900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9904:
    // 0x1f9904: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f9904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f9908:
    // 0x1f9908: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f9908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f990c:
    // 0x1f990c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1f990cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1f9910:
    // 0x1f9910: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1f9910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1f9914:
    // 0x1f9914: 0xc0f809  jalr        $a2
label_1f9918:
    if (ctx->pc == 0x1F9918u) {
        ctx->pc = 0x1F9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9914u;
        // 0x1f9918: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F991Cu;
        goto label_1f991c;
    }
    ctx->pc = 0x1F9914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1F991Cu);
        ctx->pc = 0x1F9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9914u;
        // 0x1f9918: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9914u, 0x1F991Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F991Cu;
label_1f991c:
    // 0x1f991c: 0x922300e5  lbu         $v1, 0xE5($s1)
    ctx->pc = 0x1f991cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1f9920:
    // 0x1f9920: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f9924:
    // 0x1f9924: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1f9924u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f9928:
    // 0x1f9928: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f9928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f992c:
    // 0x1f992c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1f992cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f9930:
    // 0x1f9930: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_1f9934:
    if (ctx->pc == 0x1F9934u) {
        ctx->pc = 0x1F9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9930u;
        // 0x1f9934: 0x8fcb27e4  lw          $t3, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9938u;
        goto label_1f9938;
    }
    ctx->pc = 0x1F9930u;
    {
        const bool branch_taken_0x1f9930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9930u;
        // 0x1f9934: 0x8fcb27e4  lw          $t3, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9930) {
            ctx->pc = 0x1F9860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9860;
        }
    }
    ctx->pc = 0x1F9938u;
label_1f9938:
    // 0x1f9938: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f9938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f993c:
    // 0x1f993c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f9940:
    // 0x1f9940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f9940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f9944:
    // 0x1f9944: 0xc440f494  lwc1        $f0, -0xB6C($v0)
    ctx->pc = 0x1f9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9948:
    // 0x1f9948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f9948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f994c:
    // 0x1f994c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f9950:
    // 0x1f9950: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f9950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f9954:
    // 0x1f9954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9958:
    // 0x1f9958: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1f9958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f995c:
    // 0x1f995c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f995cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9960:
    // 0x1f9960: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f9960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f9964:
    // 0x1f9964: 0x26f07a78  addiu       $s0, $s7, 0x7A78
    ctx->pc = 0x1f9964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 31352));
label_1f9968:
    // 0x1f9968: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f9968u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f996c:
    // 0x1f996c: 0xc048b52  jal         func_122D48
label_1f9970:
    if (ctx->pc == 0x1F9970u) {
        ctx->pc = 0x1F9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F996Cu;
        // 0x1f9970: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9974u;
        goto label_1f9974;
    }
    ctx->pc = 0x1F996Cu;
    SET_GPR_U32(ctx, 31, 0x1F9974u);
    ctx->pc = 0x1F9970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F996Cu;
    // 0x1f9970: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1F996Cu, 0x1F9974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9974u;
label_1f9974:
    // 0x1f9974: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f9974u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f9978:
    // 0x1f9978: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1f9978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1f997c:
    // 0x1f997c: 0x24657b08  addiu       $a1, $v1, 0x7B08
    ctx->pc = 0x1f997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31496));
label_1f9980:
    // 0x1f9980: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1f9980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1f9984:
    // 0x1f9984: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f9984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f9988:
    // 0x1f9988: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f9988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f998c:
    // 0x1f998c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f998cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9990:
    // 0x1f9990: 0x240900dc  addiu       $t1, $zero, 0xDC
    ctx->pc = 0x1f9990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1f9994:
    // 0x1f9994: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f9994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f9998:
    // 0x1f9998: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f9998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f999c:
    // 0x1f999c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f99a0:
    // 0x1f99a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f99a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f99a4:
    // 0x1f99a4: 0x40f809  jalr        $v0
label_1f99a8:
    if (ctx->pc == 0x1F99A8u) {
        ctx->pc = 0x1F99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99A4u;
        // 0x1f99a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99ACu;
        goto label_1f99ac;
    }
    ctx->pc = 0x1F99A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F99ACu);
        ctx->pc = 0x1F99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99A4u;
        // 0x1f99a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F99A4u, 0x1F99ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F99ACu;
label_1f99ac:
    // 0x1f99ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f99b0:
    if (ctx->pc == 0x1F99B0u) {
        ctx->pc = 0x1F99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99ACu;
        // 0x1f99b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99B4u;
        goto label_1f99b4;
    }
    ctx->pc = 0x1F99ACu;
    {
        const bool branch_taken_0x1f99ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99ACu;
        // 0x1f99b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99ac) {
            ctx->pc = 0x1F99C0u;
            goto label_1f99c0;
        }
    }
    ctx->pc = 0x1F99B4u;
label_1f99b4:
    // 0x1f99b4: 0xc073a9c  jal         func_1CEA70
label_1f99b8:
    if (ctx->pc == 0x1F99B8u) {
        ctx->pc = 0x1F99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99B4u;
        // 0x1f99b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99BCu;
        goto label_1f99bc;
    }
    ctx->pc = 0x1F99B4u;
    SET_GPR_U32(ctx, 31, 0x1F99BCu);
    ctx->pc = 0x1F99B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99B4u;
    // 0x1f99b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1F99B4u, 0x1F99BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99BCu;
label_1f99bc:
    // 0x1f99bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f99bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f99c0:
    // 0x1f99c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f99c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f99c4:
    // 0x1f99c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f99c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f99c8:
    // 0x1f99c8: 0xc073ad0  jal         func_1CEB40
label_1f99cc:
    if (ctx->pc == 0x1F99CCu) {
        ctx->pc = 0x1F99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99C8u;
        // 0x1f99cc: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99D0u;
        goto label_1f99d0;
    }
    ctx->pc = 0x1F99C8u;
    SET_GPR_U32(ctx, 31, 0x1F99D0u);
    ctx->pc = 0x1F99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99C8u;
    // 0x1f99cc: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1F99C8u, 0x1F99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99D0u;
label_1f99d0:
    // 0x1f99d0: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x1f99d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1f99d4:
    // 0x1f99d4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1f99d8:
    // 0x1f99d8: 0x2485d310  addiu       $a1, $a0, -0x2CF0
    ctx->pc = 0x1f99d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955792));
label_1f99dc:
    // 0x1f99dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f99e0:
    // 0x1f99e0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1f99e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1f99e4:
    // 0x1f99e4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1f99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1f99e8:
    // 0x1f99e8: 0x60f809  jalr        $v1
label_1f99ec:
    if (ctx->pc == 0x1F99ECu) {
        ctx->pc = 0x1F99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99E8u;
        // 0x1f99ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99F0u;
        goto label_1f99f0;
    }
    ctx->pc = 0x1F99E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F99F0u);
        ctx->pc = 0x1F99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99E8u;
        // 0x1f99ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F99E8u, 0x1F99F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F99F0u;
label_1f99f0:
    // 0x1f99f0: 0xc067b9c  jal         func_19EE70
label_1f99f4:
    if (ctx->pc == 0x1F99F4u) {
        ctx->pc = 0x1F99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99F0u;
        // 0x1f99f4: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99F8u;
        goto label_1f99f8;
    }
    ctx->pc = 0x1F99F0u;
    SET_GPR_U32(ctx, 31, 0x1F99F8u);
    ctx->pc = 0x1F99F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99F0u;
    // 0x1f99f4: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F99F0u, 0x1F99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F99F8u;
label_1f99f8:
    // 0x1f99f8: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x1f99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1f99fc:
    // 0x1f99fc: 0xc073b0a  jal         func_1CEC28
label_1f9a00:
    if (ctx->pc == 0x1F9A00u) {
        ctx->pc = 0x1F9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99FCu;
        // 0x1f9a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A04u;
        goto label_1f9a04;
    }
    ctx->pc = 0x1F99FCu;
    SET_GPR_U32(ctx, 31, 0x1F9A04u);
    ctx->pc = 0x1F9A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99FCu;
    // 0x1f9a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1F99FCu, 0x1F9A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A04u;
label_1f9a04:
    // 0x1f9a04: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x1f9a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1f9a08:
    // 0x1f9a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a0c:
    // 0x1f9a0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9a10:
    // 0x1f9a10: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f9a14:
    // 0x1f9a14: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f9a18:
    // 0x1f9a18: 0x60f809  jalr        $v1
label_1f9a1c:
    if (ctx->pc == 0x1F9A1Cu) {
        ctx->pc = 0x1F9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A18u;
        // 0x1f9a1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A20u;
        goto label_1f9a20;
    }
    ctx->pc = 0x1F9A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9A20u);
        ctx->pc = 0x1F9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A18u;
        // 0x1f9a1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9A18u, 0x1F9A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9A20u;
label_1f9a20:
    // 0x1f9a20: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f9a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f9a24:
    // 0x1f9a24: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f9a28:
    // 0x1f9a28: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x1f9a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1f9a2c:
    // 0x1f9a2c: 0x24457b18  addiu       $a1, $v0, 0x7B18
    ctx->pc = 0x1f9a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31512));
label_1f9a30:
    // 0x1f9a30: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1f9a30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1f9a34:
    // 0x1f9a34: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f9a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a38:
    // 0x1f9a38: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x1f9a38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_1f9a3c:
    // 0x1f9a3c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f9a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f9a40:
    // 0x1f9a40: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1f9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1f9a44:
    // 0x1f9a44: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f9a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f9a48:
    // 0x1f9a48: 0x240900e4  addiu       $t1, $zero, 0xE4
    ctx->pc = 0x1f9a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_1f9a4c:
    // 0x1f9a4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f9a4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a50:
    // 0x1f9a50: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f9a54:
    // 0x1f9a54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f9a54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a58:
    // 0x1f9a58: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f9a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f9a5c:
    // 0x1f9a5c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f9a60:
    // 0x1f9a60: 0x40f809  jalr        $v0
label_1f9a64:
    if (ctx->pc == 0x1F9A64u) {
        ctx->pc = 0x1F9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A60u;
        // 0x1f9a64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A68u;
        goto label_1f9a68;
    }
    ctx->pc = 0x1F9A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9A68u);
        ctx->pc = 0x1F9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A60u;
        // 0x1f9a64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9A60u, 0x1F9A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9A68u;
label_1f9a68:
    // 0x1f9a68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f9a6c:
    if (ctx->pc == 0x1F9A6Cu) {
        ctx->pc = 0x1F9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A68u;
        // 0x1f9a6c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A70u;
        goto label_1f9a70;
    }
    ctx->pc = 0x1F9A68u;
    {
        const bool branch_taken_0x1f9a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A68u;
        // 0x1f9a6c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a68) {
            ctx->pc = 0x1F9A7Cu;
            goto label_1f9a7c;
        }
    }
    ctx->pc = 0x1F9A70u;
label_1f9a70:
    // 0x1f9a70: 0xc0733e2  jal         func_1CCF88
label_1f9a74:
    if (ctx->pc == 0x1F9A74u) {
        ctx->pc = 0x1F9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A70u;
        // 0x1f9a74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A78u;
        goto label_1f9a78;
    }
    ctx->pc = 0x1F9A70u;
    SET_GPR_U32(ctx, 31, 0x1F9A78u);
    ctx->pc = 0x1F9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A70u;
    // 0x1f9a74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F9A70u, 0x1F9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A78u;
label_1f9a78:
    // 0x1f9a78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f9a7c:
    // 0x1f9a7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f9a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f9a80:
    // 0x1f9a80: 0xc46cf488  lwc1        $f12, -0xB78($v1)
    ctx->pc = 0x1f9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f9a84:
    // 0x1f9a84: 0xc05e602  jal         func_179808
label_1f9a88:
    if (ctx->pc == 0x1F9A88u) {
        ctx->pc = 0x1F9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A84u;
        // 0x1f9a88: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9A8Cu;
        goto label_1f9a8c;
    }
    ctx->pc = 0x1F9A84u;
    SET_GPR_U32(ctx, 31, 0x1F9A8Cu);
    ctx->pc = 0x1F9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A84u;
    // 0x1f9a88: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F9A84u, 0x1F9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A8Cu;
label_1f9a8c:
    // 0x1f9a8c: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1f9a90:
    // 0x1f9a90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1f9a94:
    // 0x1f9a94: 0x8c87d310  lw          $a3, -0x2CF0($a0)
    ctx->pc = 0x1f9a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1f9a98:
    // 0x1f9a98: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1f9a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f9a9c:
    // 0x1f9a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9aa0:
    // 0x1f9aa0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1f9aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f9aa4:
    // 0x1f9aa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f9aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9aa8:
    // 0x1f9aa8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f9aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9aac:
    // 0x1f9aac: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f9aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f9ab0:
    // 0x1f9ab0: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1f9ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f9ab4:
    // 0x1f9ab4: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x1f9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_1f9ab8:
    // 0x1f9ab8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f9ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f9abc:
    // 0x1f9abc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f9abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f9ac0:
    // 0x1f9ac0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f9ac4:
    // 0x1f9ac4: 0x40f809  jalr        $v0
label_1f9ac8:
    if (ctx->pc == 0x1F9AC8u) {
        ctx->pc = 0x1F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AC4u;
        // 0x1f9ac8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9ACCu;
        goto label_1f9acc;
    }
    ctx->pc = 0x1F9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9ACCu);
        ctx->pc = 0x1F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AC4u;
        // 0x1f9ac8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AC4u, 0x1F9ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9ACCu;
label_1f9acc:
    // 0x1f9acc: 0x8e2600e0  lw          $a2, 0xE0($s1)
    ctx->pc = 0x1f9accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1f9ad0:
    // 0x1f9ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9ad4:
    // 0x1f9ad4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9ad8:
    // 0x1f9ad8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f9ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f9adc:
    // 0x1f9adc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f9ae0:
    // 0x1f9ae0: 0x60f809  jalr        $v1
label_1f9ae4:
    if (ctx->pc == 0x1F9AE4u) {
        ctx->pc = 0x1F9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AE0u;
        // 0x1f9ae4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9AE8u;
        goto label_1f9ae8;
    }
    ctx->pc = 0x1F9AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9AE8u);
        ctx->pc = 0x1F9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AE0u;
        // 0x1f9ae4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AE0u, 0x1F9AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9AE8u;
label_1f9ae8:
    // 0x1f9ae8: 0xc07e782  jal         func_1F9E08
label_1f9aec:
    if (ctx->pc == 0x1F9AECu) {
        ctx->pc = 0x1F9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AE8u;
        // 0x1f9aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9AF0u;
        goto label_1f9af0;
    }
    ctx->pc = 0x1F9AE8u;
    SET_GPR_U32(ctx, 31, 0x1F9AF0u);
    ctx->pc = 0x1F9AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AE8u;
    // 0x1f9aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E08u, 0x1F9AE8u, 0x1F9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AF0u;
label_1f9af0:
    // 0x1f9af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9af4:
    // 0x1f9af4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1f9af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1f9af8:
    // 0x1f9af8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1f9afc:
    // 0x1f9afc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1f9afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f9b00:
    // 0x1f9b00: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1f9b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f9b04:
    // 0x1f9b04: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1f9b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f9b08:
    // 0x1f9b08: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1f9b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f9b0c:
    // 0x1f9b0c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1f9b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f9b10:
    // 0x1f9b10: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1f9b10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f9b14:
    // 0x1f9b14: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1f9b14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f9b18:
    // 0x1f9b18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f9b18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f9b1c:
    // 0x1f9b1c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1f9b1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f9b20:
    // 0x1f9b20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f9b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f9b24:
    // 0x1f9b24: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1f9b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f9b28:
    // 0x1f9b28: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1f9b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f9b2c:
    // 0x1f9b2c: 0x3e00008  jr          $ra
label_1f9b30:
    if (ctx->pc == 0x1F9B30u) {
        ctx->pc = 0x1F9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B2Cu;
        // 0x1f9b30: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9B34u;
        goto label_1f9b34;
    }
    ctx->pc = 0x1F9B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B2Cu;
        // 0x1f9b30: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B34u;
label_1f9b34:
    // 0x1f9b34: 0x0  nop
    ctx->pc = 0x1f9b34u;
    // NOP
    ctx->pc = 0x1f9b38u;
}
