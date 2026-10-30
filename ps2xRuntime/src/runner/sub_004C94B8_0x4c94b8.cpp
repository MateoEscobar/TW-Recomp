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

// Function: sub_004C94B8
// Address: 0x4c94b8 - 0x4ca1d0
void sub_004C94B8_0x4c94b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C94B8_0x4c94b8");
#endif

    switch (ctx->pc) {
        case 0x4c94b8u: goto label_4c94b8;
        case 0x4c94bcu: goto label_4c94bc;
        case 0x4c94c0u: goto label_4c94c0;
        case 0x4c94c4u: goto label_4c94c4;
        case 0x4c94c8u: goto label_4c94c8;
        case 0x4c94ccu: goto label_4c94cc;
        case 0x4c94d0u: goto label_4c94d0;
        case 0x4c94d4u: goto label_4c94d4;
        case 0x4c94d8u: goto label_4c94d8;
        case 0x4c94dcu: goto label_4c94dc;
        case 0x4c94e0u: goto label_4c94e0;
        case 0x4c94e4u: goto label_4c94e4;
        case 0x4c94e8u: goto label_4c94e8;
        case 0x4c94ecu: goto label_4c94ec;
        case 0x4c94f0u: goto label_4c94f0;
        case 0x4c94f4u: goto label_4c94f4;
        case 0x4c94f8u: goto label_4c94f8;
        case 0x4c94fcu: goto label_4c94fc;
        case 0x4c9500u: goto label_4c9500;
        case 0x4c9504u: goto label_4c9504;
        case 0x4c9508u: goto label_4c9508;
        case 0x4c950cu: goto label_4c950c;
        case 0x4c9510u: goto label_4c9510;
        case 0x4c9514u: goto label_4c9514;
        case 0x4c9518u: goto label_4c9518;
        case 0x4c951cu: goto label_4c951c;
        case 0x4c9520u: goto label_4c9520;
        case 0x4c9524u: goto label_4c9524;
        case 0x4c9528u: goto label_4c9528;
        case 0x4c952cu: goto label_4c952c;
        case 0x4c9530u: goto label_4c9530;
        case 0x4c9534u: goto label_4c9534;
        case 0x4c9538u: goto label_4c9538;
        case 0x4c953cu: goto label_4c953c;
        case 0x4c9540u: goto label_4c9540;
        case 0x4c9544u: goto label_4c9544;
        case 0x4c9548u: goto label_4c9548;
        case 0x4c954cu: goto label_4c954c;
        case 0x4c9550u: goto label_4c9550;
        case 0x4c9554u: goto label_4c9554;
        case 0x4c9558u: goto label_4c9558;
        case 0x4c955cu: goto label_4c955c;
        case 0x4c9560u: goto label_4c9560;
        case 0x4c9564u: goto label_4c9564;
        case 0x4c9568u: goto label_4c9568;
        case 0x4c956cu: goto label_4c956c;
        case 0x4c9570u: goto label_4c9570;
        case 0x4c9574u: goto label_4c9574;
        case 0x4c9578u: goto label_4c9578;
        case 0x4c957cu: goto label_4c957c;
        case 0x4c9580u: goto label_4c9580;
        case 0x4c9584u: goto label_4c9584;
        case 0x4c9588u: goto label_4c9588;
        case 0x4c958cu: goto label_4c958c;
        case 0x4c9590u: goto label_4c9590;
        case 0x4c9594u: goto label_4c9594;
        case 0x4c9598u: goto label_4c9598;
        case 0x4c959cu: goto label_4c959c;
        case 0x4c95a0u: goto label_4c95a0;
        case 0x4c95a4u: goto label_4c95a4;
        case 0x4c95a8u: goto label_4c95a8;
        case 0x4c95acu: goto label_4c95ac;
        case 0x4c95b0u: goto label_4c95b0;
        case 0x4c95b4u: goto label_4c95b4;
        case 0x4c95b8u: goto label_4c95b8;
        case 0x4c95bcu: goto label_4c95bc;
        case 0x4c95c0u: goto label_4c95c0;
        case 0x4c95c4u: goto label_4c95c4;
        case 0x4c95c8u: goto label_4c95c8;
        case 0x4c95ccu: goto label_4c95cc;
        case 0x4c95d0u: goto label_4c95d0;
        case 0x4c95d4u: goto label_4c95d4;
        case 0x4c95d8u: goto label_4c95d8;
        case 0x4c95dcu: goto label_4c95dc;
        case 0x4c95e0u: goto label_4c95e0;
        case 0x4c95e4u: goto label_4c95e4;
        case 0x4c95e8u: goto label_4c95e8;
        case 0x4c95ecu: goto label_4c95ec;
        case 0x4c95f0u: goto label_4c95f0;
        case 0x4c95f4u: goto label_4c95f4;
        case 0x4c95f8u: goto label_4c95f8;
        case 0x4c95fcu: goto label_4c95fc;
        case 0x4c9600u: goto label_4c9600;
        case 0x4c9604u: goto label_4c9604;
        case 0x4c9608u: goto label_4c9608;
        case 0x4c960cu: goto label_4c960c;
        case 0x4c9610u: goto label_4c9610;
        case 0x4c9614u: goto label_4c9614;
        case 0x4c9618u: goto label_4c9618;
        case 0x4c961cu: goto label_4c961c;
        case 0x4c9620u: goto label_4c9620;
        case 0x4c9624u: goto label_4c9624;
        case 0x4c9628u: goto label_4c9628;
        case 0x4c962cu: goto label_4c962c;
        case 0x4c9630u: goto label_4c9630;
        case 0x4c9634u: goto label_4c9634;
        case 0x4c9638u: goto label_4c9638;
        case 0x4c963cu: goto label_4c963c;
        case 0x4c9640u: goto label_4c9640;
        case 0x4c9644u: goto label_4c9644;
        case 0x4c9648u: goto label_4c9648;
        case 0x4c964cu: goto label_4c964c;
        case 0x4c9650u: goto label_4c9650;
        case 0x4c9654u: goto label_4c9654;
        case 0x4c9658u: goto label_4c9658;
        case 0x4c965cu: goto label_4c965c;
        case 0x4c9660u: goto label_4c9660;
        case 0x4c9664u: goto label_4c9664;
        case 0x4c9668u: goto label_4c9668;
        case 0x4c966cu: goto label_4c966c;
        case 0x4c9670u: goto label_4c9670;
        case 0x4c9674u: goto label_4c9674;
        case 0x4c9678u: goto label_4c9678;
        case 0x4c967cu: goto label_4c967c;
        case 0x4c9680u: goto label_4c9680;
        case 0x4c9684u: goto label_4c9684;
        case 0x4c9688u: goto label_4c9688;
        case 0x4c968cu: goto label_4c968c;
        case 0x4c9690u: goto label_4c9690;
        case 0x4c9694u: goto label_4c9694;
        case 0x4c9698u: goto label_4c9698;
        case 0x4c969cu: goto label_4c969c;
        case 0x4c96a0u: goto label_4c96a0;
        case 0x4c96a4u: goto label_4c96a4;
        case 0x4c96a8u: goto label_4c96a8;
        case 0x4c96acu: goto label_4c96ac;
        case 0x4c96b0u: goto label_4c96b0;
        case 0x4c96b4u: goto label_4c96b4;
        case 0x4c96b8u: goto label_4c96b8;
        case 0x4c96bcu: goto label_4c96bc;
        case 0x4c96c0u: goto label_4c96c0;
        case 0x4c96c4u: goto label_4c96c4;
        case 0x4c96c8u: goto label_4c96c8;
        case 0x4c96ccu: goto label_4c96cc;
        case 0x4c96d0u: goto label_4c96d0;
        case 0x4c96d4u: goto label_4c96d4;
        case 0x4c96d8u: goto label_4c96d8;
        case 0x4c96dcu: goto label_4c96dc;
        case 0x4c96e0u: goto label_4c96e0;
        case 0x4c96e4u: goto label_4c96e4;
        case 0x4c96e8u: goto label_4c96e8;
        case 0x4c96ecu: goto label_4c96ec;
        case 0x4c96f0u: goto label_4c96f0;
        case 0x4c96f4u: goto label_4c96f4;
        case 0x4c96f8u: goto label_4c96f8;
        case 0x4c96fcu: goto label_4c96fc;
        case 0x4c9700u: goto label_4c9700;
        case 0x4c9704u: goto label_4c9704;
        case 0x4c9708u: goto label_4c9708;
        case 0x4c970cu: goto label_4c970c;
        case 0x4c9710u: goto label_4c9710;
        case 0x4c9714u: goto label_4c9714;
        case 0x4c9718u: goto label_4c9718;
        case 0x4c971cu: goto label_4c971c;
        case 0x4c9720u: goto label_4c9720;
        case 0x4c9724u: goto label_4c9724;
        case 0x4c9728u: goto label_4c9728;
        case 0x4c972cu: goto label_4c972c;
        case 0x4c9730u: goto label_4c9730;
        case 0x4c9734u: goto label_4c9734;
        case 0x4c9738u: goto label_4c9738;
        case 0x4c973cu: goto label_4c973c;
        case 0x4c9740u: goto label_4c9740;
        case 0x4c9744u: goto label_4c9744;
        case 0x4c9748u: goto label_4c9748;
        case 0x4c974cu: goto label_4c974c;
        case 0x4c9750u: goto label_4c9750;
        case 0x4c9754u: goto label_4c9754;
        case 0x4c9758u: goto label_4c9758;
        case 0x4c975cu: goto label_4c975c;
        case 0x4c9760u: goto label_4c9760;
        case 0x4c9764u: goto label_4c9764;
        case 0x4c9768u: goto label_4c9768;
        case 0x4c976cu: goto label_4c976c;
        case 0x4c9770u: goto label_4c9770;
        case 0x4c9774u: goto label_4c9774;
        case 0x4c9778u: goto label_4c9778;
        case 0x4c977cu: goto label_4c977c;
        case 0x4c9780u: goto label_4c9780;
        case 0x4c9784u: goto label_4c9784;
        case 0x4c9788u: goto label_4c9788;
        case 0x4c978cu: goto label_4c978c;
        case 0x4c9790u: goto label_4c9790;
        case 0x4c9794u: goto label_4c9794;
        case 0x4c9798u: goto label_4c9798;
        case 0x4c979cu: goto label_4c979c;
        case 0x4c97a0u: goto label_4c97a0;
        case 0x4c97a4u: goto label_4c97a4;
        case 0x4c97a8u: goto label_4c97a8;
        case 0x4c97acu: goto label_4c97ac;
        case 0x4c97b0u: goto label_4c97b0;
        case 0x4c97b4u: goto label_4c97b4;
        case 0x4c97b8u: goto label_4c97b8;
        case 0x4c97bcu: goto label_4c97bc;
        case 0x4c97c0u: goto label_4c97c0;
        case 0x4c97c4u: goto label_4c97c4;
        case 0x4c97c8u: goto label_4c97c8;
        case 0x4c97ccu: goto label_4c97cc;
        case 0x4c97d0u: goto label_4c97d0;
        case 0x4c97d4u: goto label_4c97d4;
        case 0x4c97d8u: goto label_4c97d8;
        case 0x4c97dcu: goto label_4c97dc;
        case 0x4c97e0u: goto label_4c97e0;
        case 0x4c97e4u: goto label_4c97e4;
        case 0x4c97e8u: goto label_4c97e8;
        case 0x4c97ecu: goto label_4c97ec;
        case 0x4c97f0u: goto label_4c97f0;
        case 0x4c97f4u: goto label_4c97f4;
        case 0x4c97f8u: goto label_4c97f8;
        case 0x4c97fcu: goto label_4c97fc;
        case 0x4c9800u: goto label_4c9800;
        case 0x4c9804u: goto label_4c9804;
        case 0x4c9808u: goto label_4c9808;
        case 0x4c980cu: goto label_4c980c;
        case 0x4c9810u: goto label_4c9810;
        case 0x4c9814u: goto label_4c9814;
        case 0x4c9818u: goto label_4c9818;
        case 0x4c981cu: goto label_4c981c;
        case 0x4c9820u: goto label_4c9820;
        case 0x4c9824u: goto label_4c9824;
        case 0x4c9828u: goto label_4c9828;
        case 0x4c982cu: goto label_4c982c;
        case 0x4c9830u: goto label_4c9830;
        case 0x4c9834u: goto label_4c9834;
        case 0x4c9838u: goto label_4c9838;
        case 0x4c983cu: goto label_4c983c;
        case 0x4c9840u: goto label_4c9840;
        case 0x4c9844u: goto label_4c9844;
        case 0x4c9848u: goto label_4c9848;
        case 0x4c984cu: goto label_4c984c;
        case 0x4c9850u: goto label_4c9850;
        case 0x4c9854u: goto label_4c9854;
        case 0x4c9858u: goto label_4c9858;
        case 0x4c985cu: goto label_4c985c;
        case 0x4c9860u: goto label_4c9860;
        case 0x4c9864u: goto label_4c9864;
        case 0x4c9868u: goto label_4c9868;
        case 0x4c986cu: goto label_4c986c;
        case 0x4c9870u: goto label_4c9870;
        case 0x4c9874u: goto label_4c9874;
        case 0x4c9878u: goto label_4c9878;
        case 0x4c987cu: goto label_4c987c;
        case 0x4c9880u: goto label_4c9880;
        case 0x4c9884u: goto label_4c9884;
        case 0x4c9888u: goto label_4c9888;
        case 0x4c988cu: goto label_4c988c;
        case 0x4c9890u: goto label_4c9890;
        case 0x4c9894u: goto label_4c9894;
        case 0x4c9898u: goto label_4c9898;
        case 0x4c989cu: goto label_4c989c;
        case 0x4c98a0u: goto label_4c98a0;
        case 0x4c98a4u: goto label_4c98a4;
        case 0x4c98a8u: goto label_4c98a8;
        case 0x4c98acu: goto label_4c98ac;
        case 0x4c98b0u: goto label_4c98b0;
        case 0x4c98b4u: goto label_4c98b4;
        case 0x4c98b8u: goto label_4c98b8;
        case 0x4c98bcu: goto label_4c98bc;
        case 0x4c98c0u: goto label_4c98c0;
        case 0x4c98c4u: goto label_4c98c4;
        case 0x4c98c8u: goto label_4c98c8;
        case 0x4c98ccu: goto label_4c98cc;
        case 0x4c98d0u: goto label_4c98d0;
        case 0x4c98d4u: goto label_4c98d4;
        case 0x4c98d8u: goto label_4c98d8;
        case 0x4c98dcu: goto label_4c98dc;
        case 0x4c98e0u: goto label_4c98e0;
        case 0x4c98e4u: goto label_4c98e4;
        case 0x4c98e8u: goto label_4c98e8;
        case 0x4c98ecu: goto label_4c98ec;
        case 0x4c98f0u: goto label_4c98f0;
        case 0x4c98f4u: goto label_4c98f4;
        case 0x4c98f8u: goto label_4c98f8;
        case 0x4c98fcu: goto label_4c98fc;
        case 0x4c9900u: goto label_4c9900;
        case 0x4c9904u: goto label_4c9904;
        case 0x4c9908u: goto label_4c9908;
        case 0x4c990cu: goto label_4c990c;
        case 0x4c9910u: goto label_4c9910;
        case 0x4c9914u: goto label_4c9914;
        case 0x4c9918u: goto label_4c9918;
        case 0x4c991cu: goto label_4c991c;
        case 0x4c9920u: goto label_4c9920;
        case 0x4c9924u: goto label_4c9924;
        case 0x4c9928u: goto label_4c9928;
        case 0x4c992cu: goto label_4c992c;
        case 0x4c9930u: goto label_4c9930;
        case 0x4c9934u: goto label_4c9934;
        case 0x4c9938u: goto label_4c9938;
        case 0x4c993cu: goto label_4c993c;
        case 0x4c9940u: goto label_4c9940;
        case 0x4c9944u: goto label_4c9944;
        case 0x4c9948u: goto label_4c9948;
        case 0x4c994cu: goto label_4c994c;
        case 0x4c9950u: goto label_4c9950;
        case 0x4c9954u: goto label_4c9954;
        case 0x4c9958u: goto label_4c9958;
        case 0x4c995cu: goto label_4c995c;
        case 0x4c9960u: goto label_4c9960;
        case 0x4c9964u: goto label_4c9964;
        case 0x4c9968u: goto label_4c9968;
        case 0x4c996cu: goto label_4c996c;
        case 0x4c9970u: goto label_4c9970;
        case 0x4c9974u: goto label_4c9974;
        case 0x4c9978u: goto label_4c9978;
        case 0x4c997cu: goto label_4c997c;
        case 0x4c9980u: goto label_4c9980;
        case 0x4c9984u: goto label_4c9984;
        case 0x4c9988u: goto label_4c9988;
        case 0x4c998cu: goto label_4c998c;
        case 0x4c9990u: goto label_4c9990;
        case 0x4c9994u: goto label_4c9994;
        case 0x4c9998u: goto label_4c9998;
        case 0x4c999cu: goto label_4c999c;
        case 0x4c99a0u: goto label_4c99a0;
        case 0x4c99a4u: goto label_4c99a4;
        case 0x4c99a8u: goto label_4c99a8;
        case 0x4c99acu: goto label_4c99ac;
        case 0x4c99b0u: goto label_4c99b0;
        case 0x4c99b4u: goto label_4c99b4;
        case 0x4c99b8u: goto label_4c99b8;
        case 0x4c99bcu: goto label_4c99bc;
        case 0x4c99c0u: goto label_4c99c0;
        case 0x4c99c4u: goto label_4c99c4;
        case 0x4c99c8u: goto label_4c99c8;
        case 0x4c99ccu: goto label_4c99cc;
        case 0x4c99d0u: goto label_4c99d0;
        case 0x4c99d4u: goto label_4c99d4;
        case 0x4c99d8u: goto label_4c99d8;
        case 0x4c99dcu: goto label_4c99dc;
        case 0x4c99e0u: goto label_4c99e0;
        case 0x4c99e4u: goto label_4c99e4;
        case 0x4c99e8u: goto label_4c99e8;
        case 0x4c99ecu: goto label_4c99ec;
        case 0x4c99f0u: goto label_4c99f0;
        case 0x4c99f4u: goto label_4c99f4;
        case 0x4c99f8u: goto label_4c99f8;
        case 0x4c99fcu: goto label_4c99fc;
        case 0x4c9a00u: goto label_4c9a00;
        case 0x4c9a04u: goto label_4c9a04;
        case 0x4c9a08u: goto label_4c9a08;
        case 0x4c9a0cu: goto label_4c9a0c;
        case 0x4c9a10u: goto label_4c9a10;
        case 0x4c9a14u: goto label_4c9a14;
        case 0x4c9a18u: goto label_4c9a18;
        case 0x4c9a1cu: goto label_4c9a1c;
        case 0x4c9a20u: goto label_4c9a20;
        case 0x4c9a24u: goto label_4c9a24;
        case 0x4c9a28u: goto label_4c9a28;
        case 0x4c9a2cu: goto label_4c9a2c;
        case 0x4c9a30u: goto label_4c9a30;
        case 0x4c9a34u: goto label_4c9a34;
        case 0x4c9a38u: goto label_4c9a38;
        case 0x4c9a3cu: goto label_4c9a3c;
        case 0x4c9a40u: goto label_4c9a40;
        case 0x4c9a44u: goto label_4c9a44;
        case 0x4c9a48u: goto label_4c9a48;
        case 0x4c9a4cu: goto label_4c9a4c;
        case 0x4c9a50u: goto label_4c9a50;
        case 0x4c9a54u: goto label_4c9a54;
        case 0x4c9a58u: goto label_4c9a58;
        case 0x4c9a5cu: goto label_4c9a5c;
        case 0x4c9a60u: goto label_4c9a60;
        case 0x4c9a64u: goto label_4c9a64;
        case 0x4c9a68u: goto label_4c9a68;
        case 0x4c9a6cu: goto label_4c9a6c;
        case 0x4c9a70u: goto label_4c9a70;
        case 0x4c9a74u: goto label_4c9a74;
        case 0x4c9a78u: goto label_4c9a78;
        case 0x4c9a7cu: goto label_4c9a7c;
        case 0x4c9a80u: goto label_4c9a80;
        case 0x4c9a84u: goto label_4c9a84;
        case 0x4c9a88u: goto label_4c9a88;
        case 0x4c9a8cu: goto label_4c9a8c;
        case 0x4c9a90u: goto label_4c9a90;
        case 0x4c9a94u: goto label_4c9a94;
        case 0x4c9a98u: goto label_4c9a98;
        case 0x4c9a9cu: goto label_4c9a9c;
        case 0x4c9aa0u: goto label_4c9aa0;
        case 0x4c9aa4u: goto label_4c9aa4;
        case 0x4c9aa8u: goto label_4c9aa8;
        case 0x4c9aacu: goto label_4c9aac;
        case 0x4c9ab0u: goto label_4c9ab0;
        case 0x4c9ab4u: goto label_4c9ab4;
        case 0x4c9ab8u: goto label_4c9ab8;
        case 0x4c9abcu: goto label_4c9abc;
        case 0x4c9ac0u: goto label_4c9ac0;
        case 0x4c9ac4u: goto label_4c9ac4;
        case 0x4c9ac8u: goto label_4c9ac8;
        case 0x4c9accu: goto label_4c9acc;
        case 0x4c9ad0u: goto label_4c9ad0;
        case 0x4c9ad4u: goto label_4c9ad4;
        case 0x4c9ad8u: goto label_4c9ad8;
        case 0x4c9adcu: goto label_4c9adc;
        case 0x4c9ae0u: goto label_4c9ae0;
        case 0x4c9ae4u: goto label_4c9ae4;
        case 0x4c9ae8u: goto label_4c9ae8;
        case 0x4c9aecu: goto label_4c9aec;
        case 0x4c9af0u: goto label_4c9af0;
        case 0x4c9af4u: goto label_4c9af4;
        case 0x4c9af8u: goto label_4c9af8;
        case 0x4c9afcu: goto label_4c9afc;
        case 0x4c9b00u: goto label_4c9b00;
        case 0x4c9b04u: goto label_4c9b04;
        case 0x4c9b08u: goto label_4c9b08;
        case 0x4c9b0cu: goto label_4c9b0c;
        case 0x4c9b10u: goto label_4c9b10;
        case 0x4c9b14u: goto label_4c9b14;
        case 0x4c9b18u: goto label_4c9b18;
        case 0x4c9b1cu: goto label_4c9b1c;
        case 0x4c9b20u: goto label_4c9b20;
        case 0x4c9b24u: goto label_4c9b24;
        case 0x4c9b28u: goto label_4c9b28;
        case 0x4c9b2cu: goto label_4c9b2c;
        case 0x4c9b30u: goto label_4c9b30;
        case 0x4c9b34u: goto label_4c9b34;
        case 0x4c9b38u: goto label_4c9b38;
        case 0x4c9b3cu: goto label_4c9b3c;
        case 0x4c9b40u: goto label_4c9b40;
        case 0x4c9b44u: goto label_4c9b44;
        case 0x4c9b48u: goto label_4c9b48;
        case 0x4c9b4cu: goto label_4c9b4c;
        case 0x4c9b50u: goto label_4c9b50;
        case 0x4c9b54u: goto label_4c9b54;
        case 0x4c9b58u: goto label_4c9b58;
        case 0x4c9b5cu: goto label_4c9b5c;
        case 0x4c9b60u: goto label_4c9b60;
        case 0x4c9b64u: goto label_4c9b64;
        case 0x4c9b68u: goto label_4c9b68;
        case 0x4c9b6cu: goto label_4c9b6c;
        case 0x4c9b70u: goto label_4c9b70;
        case 0x4c9b74u: goto label_4c9b74;
        case 0x4c9b78u: goto label_4c9b78;
        case 0x4c9b7cu: goto label_4c9b7c;
        case 0x4c9b80u: goto label_4c9b80;
        case 0x4c9b84u: goto label_4c9b84;
        case 0x4c9b88u: goto label_4c9b88;
        case 0x4c9b8cu: goto label_4c9b8c;
        case 0x4c9b90u: goto label_4c9b90;
        case 0x4c9b94u: goto label_4c9b94;
        case 0x4c9b98u: goto label_4c9b98;
        case 0x4c9b9cu: goto label_4c9b9c;
        case 0x4c9ba0u: goto label_4c9ba0;
        case 0x4c9ba4u: goto label_4c9ba4;
        case 0x4c9ba8u: goto label_4c9ba8;
        case 0x4c9bacu: goto label_4c9bac;
        case 0x4c9bb0u: goto label_4c9bb0;
        case 0x4c9bb4u: goto label_4c9bb4;
        case 0x4c9bb8u: goto label_4c9bb8;
        case 0x4c9bbcu: goto label_4c9bbc;
        case 0x4c9bc0u: goto label_4c9bc0;
        case 0x4c9bc4u: goto label_4c9bc4;
        case 0x4c9bc8u: goto label_4c9bc8;
        case 0x4c9bccu: goto label_4c9bcc;
        case 0x4c9bd0u: goto label_4c9bd0;
        case 0x4c9bd4u: goto label_4c9bd4;
        case 0x4c9bd8u: goto label_4c9bd8;
        case 0x4c9bdcu: goto label_4c9bdc;
        case 0x4c9be0u: goto label_4c9be0;
        case 0x4c9be4u: goto label_4c9be4;
        case 0x4c9be8u: goto label_4c9be8;
        case 0x4c9becu: goto label_4c9bec;
        case 0x4c9bf0u: goto label_4c9bf0;
        case 0x4c9bf4u: goto label_4c9bf4;
        case 0x4c9bf8u: goto label_4c9bf8;
        case 0x4c9bfcu: goto label_4c9bfc;
        case 0x4c9c00u: goto label_4c9c00;
        case 0x4c9c04u: goto label_4c9c04;
        case 0x4c9c08u: goto label_4c9c08;
        case 0x4c9c0cu: goto label_4c9c0c;
        case 0x4c9c10u: goto label_4c9c10;
        case 0x4c9c14u: goto label_4c9c14;
        case 0x4c9c18u: goto label_4c9c18;
        case 0x4c9c1cu: goto label_4c9c1c;
        case 0x4c9c20u: goto label_4c9c20;
        case 0x4c9c24u: goto label_4c9c24;
        case 0x4c9c28u: goto label_4c9c28;
        case 0x4c9c2cu: goto label_4c9c2c;
        case 0x4c9c30u: goto label_4c9c30;
        case 0x4c9c34u: goto label_4c9c34;
        case 0x4c9c38u: goto label_4c9c38;
        case 0x4c9c3cu: goto label_4c9c3c;
        case 0x4c9c40u: goto label_4c9c40;
        case 0x4c9c44u: goto label_4c9c44;
        case 0x4c9c48u: goto label_4c9c48;
        case 0x4c9c4cu: goto label_4c9c4c;
        case 0x4c9c50u: goto label_4c9c50;
        case 0x4c9c54u: goto label_4c9c54;
        case 0x4c9c58u: goto label_4c9c58;
        case 0x4c9c5cu: goto label_4c9c5c;
        case 0x4c9c60u: goto label_4c9c60;
        case 0x4c9c64u: goto label_4c9c64;
        case 0x4c9c68u: goto label_4c9c68;
        case 0x4c9c6cu: goto label_4c9c6c;
        case 0x4c9c70u: goto label_4c9c70;
        case 0x4c9c74u: goto label_4c9c74;
        case 0x4c9c78u: goto label_4c9c78;
        case 0x4c9c7cu: goto label_4c9c7c;
        case 0x4c9c80u: goto label_4c9c80;
        case 0x4c9c84u: goto label_4c9c84;
        case 0x4c9c88u: goto label_4c9c88;
        case 0x4c9c8cu: goto label_4c9c8c;
        case 0x4c9c90u: goto label_4c9c90;
        case 0x4c9c94u: goto label_4c9c94;
        case 0x4c9c98u: goto label_4c9c98;
        case 0x4c9c9cu: goto label_4c9c9c;
        case 0x4c9ca0u: goto label_4c9ca0;
        case 0x4c9ca4u: goto label_4c9ca4;
        case 0x4c9ca8u: goto label_4c9ca8;
        case 0x4c9cacu: goto label_4c9cac;
        case 0x4c9cb0u: goto label_4c9cb0;
        case 0x4c9cb4u: goto label_4c9cb4;
        case 0x4c9cb8u: goto label_4c9cb8;
        case 0x4c9cbcu: goto label_4c9cbc;
        case 0x4c9cc0u: goto label_4c9cc0;
        case 0x4c9cc4u: goto label_4c9cc4;
        case 0x4c9cc8u: goto label_4c9cc8;
        case 0x4c9cccu: goto label_4c9ccc;
        case 0x4c9cd0u: goto label_4c9cd0;
        case 0x4c9cd4u: goto label_4c9cd4;
        case 0x4c9cd8u: goto label_4c9cd8;
        case 0x4c9cdcu: goto label_4c9cdc;
        case 0x4c9ce0u: goto label_4c9ce0;
        case 0x4c9ce4u: goto label_4c9ce4;
        case 0x4c9ce8u: goto label_4c9ce8;
        case 0x4c9cecu: goto label_4c9cec;
        case 0x4c9cf0u: goto label_4c9cf0;
        case 0x4c9cf4u: goto label_4c9cf4;
        case 0x4c9cf8u: goto label_4c9cf8;
        case 0x4c9cfcu: goto label_4c9cfc;
        case 0x4c9d00u: goto label_4c9d00;
        case 0x4c9d04u: goto label_4c9d04;
        case 0x4c9d08u: goto label_4c9d08;
        case 0x4c9d0cu: goto label_4c9d0c;
        case 0x4c9d10u: goto label_4c9d10;
        case 0x4c9d14u: goto label_4c9d14;
        case 0x4c9d18u: goto label_4c9d18;
        case 0x4c9d1cu: goto label_4c9d1c;
        case 0x4c9d20u: goto label_4c9d20;
        case 0x4c9d24u: goto label_4c9d24;
        case 0x4c9d28u: goto label_4c9d28;
        case 0x4c9d2cu: goto label_4c9d2c;
        case 0x4c9d30u: goto label_4c9d30;
        case 0x4c9d34u: goto label_4c9d34;
        case 0x4c9d38u: goto label_4c9d38;
        case 0x4c9d3cu: goto label_4c9d3c;
        case 0x4c9d40u: goto label_4c9d40;
        case 0x4c9d44u: goto label_4c9d44;
        case 0x4c9d48u: goto label_4c9d48;
        case 0x4c9d4cu: goto label_4c9d4c;
        case 0x4c9d50u: goto label_4c9d50;
        case 0x4c9d54u: goto label_4c9d54;
        case 0x4c9d58u: goto label_4c9d58;
        case 0x4c9d5cu: goto label_4c9d5c;
        case 0x4c9d60u: goto label_4c9d60;
        case 0x4c9d64u: goto label_4c9d64;
        case 0x4c9d68u: goto label_4c9d68;
        case 0x4c9d6cu: goto label_4c9d6c;
        case 0x4c9d70u: goto label_4c9d70;
        case 0x4c9d74u: goto label_4c9d74;
        case 0x4c9d78u: goto label_4c9d78;
        case 0x4c9d7cu: goto label_4c9d7c;
        case 0x4c9d80u: goto label_4c9d80;
        case 0x4c9d84u: goto label_4c9d84;
        case 0x4c9d88u: goto label_4c9d88;
        case 0x4c9d8cu: goto label_4c9d8c;
        case 0x4c9d90u: goto label_4c9d90;
        case 0x4c9d94u: goto label_4c9d94;
        case 0x4c9d98u: goto label_4c9d98;
        case 0x4c9d9cu: goto label_4c9d9c;
        case 0x4c9da0u: goto label_4c9da0;
        case 0x4c9da4u: goto label_4c9da4;
        case 0x4c9da8u: goto label_4c9da8;
        case 0x4c9dacu: goto label_4c9dac;
        case 0x4c9db0u: goto label_4c9db0;
        case 0x4c9db4u: goto label_4c9db4;
        case 0x4c9db8u: goto label_4c9db8;
        case 0x4c9dbcu: goto label_4c9dbc;
        case 0x4c9dc0u: goto label_4c9dc0;
        case 0x4c9dc4u: goto label_4c9dc4;
        case 0x4c9dc8u: goto label_4c9dc8;
        case 0x4c9dccu: goto label_4c9dcc;
        case 0x4c9dd0u: goto label_4c9dd0;
        case 0x4c9dd4u: goto label_4c9dd4;
        case 0x4c9dd8u: goto label_4c9dd8;
        case 0x4c9ddcu: goto label_4c9ddc;
        case 0x4c9de0u: goto label_4c9de0;
        case 0x4c9de4u: goto label_4c9de4;
        case 0x4c9de8u: goto label_4c9de8;
        case 0x4c9decu: goto label_4c9dec;
        case 0x4c9df0u: goto label_4c9df0;
        case 0x4c9df4u: goto label_4c9df4;
        case 0x4c9df8u: goto label_4c9df8;
        case 0x4c9dfcu: goto label_4c9dfc;
        case 0x4c9e00u: goto label_4c9e00;
        case 0x4c9e04u: goto label_4c9e04;
        case 0x4c9e08u: goto label_4c9e08;
        case 0x4c9e0cu: goto label_4c9e0c;
        case 0x4c9e10u: goto label_4c9e10;
        case 0x4c9e14u: goto label_4c9e14;
        case 0x4c9e18u: goto label_4c9e18;
        case 0x4c9e1cu: goto label_4c9e1c;
        case 0x4c9e20u: goto label_4c9e20;
        case 0x4c9e24u: goto label_4c9e24;
        case 0x4c9e28u: goto label_4c9e28;
        case 0x4c9e2cu: goto label_4c9e2c;
        case 0x4c9e30u: goto label_4c9e30;
        case 0x4c9e34u: goto label_4c9e34;
        case 0x4c9e38u: goto label_4c9e38;
        case 0x4c9e3cu: goto label_4c9e3c;
        case 0x4c9e40u: goto label_4c9e40;
        case 0x4c9e44u: goto label_4c9e44;
        case 0x4c9e48u: goto label_4c9e48;
        case 0x4c9e4cu: goto label_4c9e4c;
        case 0x4c9e50u: goto label_4c9e50;
        case 0x4c9e54u: goto label_4c9e54;
        case 0x4c9e58u: goto label_4c9e58;
        case 0x4c9e5cu: goto label_4c9e5c;
        case 0x4c9e60u: goto label_4c9e60;
        case 0x4c9e64u: goto label_4c9e64;
        case 0x4c9e68u: goto label_4c9e68;
        case 0x4c9e6cu: goto label_4c9e6c;
        case 0x4c9e70u: goto label_4c9e70;
        case 0x4c9e74u: goto label_4c9e74;
        case 0x4c9e78u: goto label_4c9e78;
        case 0x4c9e7cu: goto label_4c9e7c;
        case 0x4c9e80u: goto label_4c9e80;
        case 0x4c9e84u: goto label_4c9e84;
        case 0x4c9e88u: goto label_4c9e88;
        case 0x4c9e8cu: goto label_4c9e8c;
        case 0x4c9e90u: goto label_4c9e90;
        case 0x4c9e94u: goto label_4c9e94;
        case 0x4c9e98u: goto label_4c9e98;
        case 0x4c9e9cu: goto label_4c9e9c;
        case 0x4c9ea0u: goto label_4c9ea0;
        case 0x4c9ea4u: goto label_4c9ea4;
        case 0x4c9ea8u: goto label_4c9ea8;
        case 0x4c9eacu: goto label_4c9eac;
        case 0x4c9eb0u: goto label_4c9eb0;
        case 0x4c9eb4u: goto label_4c9eb4;
        case 0x4c9eb8u: goto label_4c9eb8;
        case 0x4c9ebcu: goto label_4c9ebc;
        case 0x4c9ec0u: goto label_4c9ec0;
        case 0x4c9ec4u: goto label_4c9ec4;
        case 0x4c9ec8u: goto label_4c9ec8;
        case 0x4c9eccu: goto label_4c9ecc;
        case 0x4c9ed0u: goto label_4c9ed0;
        case 0x4c9ed4u: goto label_4c9ed4;
        case 0x4c9ed8u: goto label_4c9ed8;
        case 0x4c9edcu: goto label_4c9edc;
        case 0x4c9ee0u: goto label_4c9ee0;
        case 0x4c9ee4u: goto label_4c9ee4;
        case 0x4c9ee8u: goto label_4c9ee8;
        case 0x4c9eecu: goto label_4c9eec;
        case 0x4c9ef0u: goto label_4c9ef0;
        case 0x4c9ef4u: goto label_4c9ef4;
        case 0x4c9ef8u: goto label_4c9ef8;
        case 0x4c9efcu: goto label_4c9efc;
        case 0x4c9f00u: goto label_4c9f00;
        case 0x4c9f04u: goto label_4c9f04;
        case 0x4c9f08u: goto label_4c9f08;
        case 0x4c9f0cu: goto label_4c9f0c;
        case 0x4c9f10u: goto label_4c9f10;
        case 0x4c9f14u: goto label_4c9f14;
        case 0x4c9f18u: goto label_4c9f18;
        case 0x4c9f1cu: goto label_4c9f1c;
        case 0x4c9f20u: goto label_4c9f20;
        case 0x4c9f24u: goto label_4c9f24;
        case 0x4c9f28u: goto label_4c9f28;
        case 0x4c9f2cu: goto label_4c9f2c;
        case 0x4c9f30u: goto label_4c9f30;
        case 0x4c9f34u: goto label_4c9f34;
        case 0x4c9f38u: goto label_4c9f38;
        case 0x4c9f3cu: goto label_4c9f3c;
        case 0x4c9f40u: goto label_4c9f40;
        case 0x4c9f44u: goto label_4c9f44;
        case 0x4c9f48u: goto label_4c9f48;
        case 0x4c9f4cu: goto label_4c9f4c;
        case 0x4c9f50u: goto label_4c9f50;
        case 0x4c9f54u: goto label_4c9f54;
        case 0x4c9f58u: goto label_4c9f58;
        case 0x4c9f5cu: goto label_4c9f5c;
        case 0x4c9f60u: goto label_4c9f60;
        case 0x4c9f64u: goto label_4c9f64;
        case 0x4c9f68u: goto label_4c9f68;
        case 0x4c9f6cu: goto label_4c9f6c;
        case 0x4c9f70u: goto label_4c9f70;
        case 0x4c9f74u: goto label_4c9f74;
        case 0x4c9f78u: goto label_4c9f78;
        case 0x4c9f7cu: goto label_4c9f7c;
        case 0x4c9f80u: goto label_4c9f80;
        case 0x4c9f84u: goto label_4c9f84;
        case 0x4c9f88u: goto label_4c9f88;
        case 0x4c9f8cu: goto label_4c9f8c;
        case 0x4c9f90u: goto label_4c9f90;
        case 0x4c9f94u: goto label_4c9f94;
        case 0x4c9f98u: goto label_4c9f98;
        case 0x4c9f9cu: goto label_4c9f9c;
        case 0x4c9fa0u: goto label_4c9fa0;
        case 0x4c9fa4u: goto label_4c9fa4;
        case 0x4c9fa8u: goto label_4c9fa8;
        case 0x4c9facu: goto label_4c9fac;
        case 0x4c9fb0u: goto label_4c9fb0;
        case 0x4c9fb4u: goto label_4c9fb4;
        case 0x4c9fb8u: goto label_4c9fb8;
        case 0x4c9fbcu: goto label_4c9fbc;
        case 0x4c9fc0u: goto label_4c9fc0;
        case 0x4c9fc4u: goto label_4c9fc4;
        case 0x4c9fc8u: goto label_4c9fc8;
        case 0x4c9fccu: goto label_4c9fcc;
        case 0x4c9fd0u: goto label_4c9fd0;
        case 0x4c9fd4u: goto label_4c9fd4;
        case 0x4c9fd8u: goto label_4c9fd8;
        case 0x4c9fdcu: goto label_4c9fdc;
        case 0x4c9fe0u: goto label_4c9fe0;
        case 0x4c9fe4u: goto label_4c9fe4;
        case 0x4c9fe8u: goto label_4c9fe8;
        case 0x4c9fecu: goto label_4c9fec;
        case 0x4c9ff0u: goto label_4c9ff0;
        case 0x4c9ff4u: goto label_4c9ff4;
        case 0x4c9ff8u: goto label_4c9ff8;
        case 0x4c9ffcu: goto label_4c9ffc;
        case 0x4ca000u: goto label_4ca000;
        case 0x4ca004u: goto label_4ca004;
        case 0x4ca008u: goto label_4ca008;
        case 0x4ca00cu: goto label_4ca00c;
        case 0x4ca010u: goto label_4ca010;
        case 0x4ca014u: goto label_4ca014;
        case 0x4ca018u: goto label_4ca018;
        case 0x4ca01cu: goto label_4ca01c;
        case 0x4ca020u: goto label_4ca020;
        case 0x4ca024u: goto label_4ca024;
        case 0x4ca028u: goto label_4ca028;
        case 0x4ca02cu: goto label_4ca02c;
        case 0x4ca030u: goto label_4ca030;
        case 0x4ca034u: goto label_4ca034;
        case 0x4ca038u: goto label_4ca038;
        case 0x4ca03cu: goto label_4ca03c;
        case 0x4ca040u: goto label_4ca040;
        case 0x4ca044u: goto label_4ca044;
        case 0x4ca048u: goto label_4ca048;
        case 0x4ca04cu: goto label_4ca04c;
        case 0x4ca050u: goto label_4ca050;
        case 0x4ca054u: goto label_4ca054;
        case 0x4ca058u: goto label_4ca058;
        case 0x4ca05cu: goto label_4ca05c;
        case 0x4ca060u: goto label_4ca060;
        case 0x4ca064u: goto label_4ca064;
        case 0x4ca068u: goto label_4ca068;
        case 0x4ca06cu: goto label_4ca06c;
        case 0x4ca070u: goto label_4ca070;
        case 0x4ca074u: goto label_4ca074;
        case 0x4ca078u: goto label_4ca078;
        case 0x4ca07cu: goto label_4ca07c;
        case 0x4ca080u: goto label_4ca080;
        case 0x4ca084u: goto label_4ca084;
        case 0x4ca088u: goto label_4ca088;
        case 0x4ca08cu: goto label_4ca08c;
        case 0x4ca090u: goto label_4ca090;
        case 0x4ca094u: goto label_4ca094;
        case 0x4ca098u: goto label_4ca098;
        case 0x4ca09cu: goto label_4ca09c;
        case 0x4ca0a0u: goto label_4ca0a0;
        case 0x4ca0a4u: goto label_4ca0a4;
        case 0x4ca0a8u: goto label_4ca0a8;
        case 0x4ca0acu: goto label_4ca0ac;
        case 0x4ca0b0u: goto label_4ca0b0;
        case 0x4ca0b4u: goto label_4ca0b4;
        case 0x4ca0b8u: goto label_4ca0b8;
        case 0x4ca0bcu: goto label_4ca0bc;
        case 0x4ca0c0u: goto label_4ca0c0;
        case 0x4ca0c4u: goto label_4ca0c4;
        case 0x4ca0c8u: goto label_4ca0c8;
        case 0x4ca0ccu: goto label_4ca0cc;
        case 0x4ca0d0u: goto label_4ca0d0;
        case 0x4ca0d4u: goto label_4ca0d4;
        case 0x4ca0d8u: goto label_4ca0d8;
        case 0x4ca0dcu: goto label_4ca0dc;
        case 0x4ca0e0u: goto label_4ca0e0;
        case 0x4ca0e4u: goto label_4ca0e4;
        case 0x4ca0e8u: goto label_4ca0e8;
        case 0x4ca0ecu: goto label_4ca0ec;
        case 0x4ca0f0u: goto label_4ca0f0;
        case 0x4ca0f4u: goto label_4ca0f4;
        case 0x4ca0f8u: goto label_4ca0f8;
        case 0x4ca0fcu: goto label_4ca0fc;
        case 0x4ca100u: goto label_4ca100;
        case 0x4ca104u: goto label_4ca104;
        case 0x4ca108u: goto label_4ca108;
        case 0x4ca10cu: goto label_4ca10c;
        case 0x4ca110u: goto label_4ca110;
        case 0x4ca114u: goto label_4ca114;
        case 0x4ca118u: goto label_4ca118;
        case 0x4ca11cu: goto label_4ca11c;
        case 0x4ca120u: goto label_4ca120;
        case 0x4ca124u: goto label_4ca124;
        case 0x4ca128u: goto label_4ca128;
        case 0x4ca12cu: goto label_4ca12c;
        case 0x4ca130u: goto label_4ca130;
        case 0x4ca134u: goto label_4ca134;
        case 0x4ca138u: goto label_4ca138;
        case 0x4ca13cu: goto label_4ca13c;
        case 0x4ca140u: goto label_4ca140;
        case 0x4ca144u: goto label_4ca144;
        case 0x4ca148u: goto label_4ca148;
        case 0x4ca14cu: goto label_4ca14c;
        case 0x4ca150u: goto label_4ca150;
        case 0x4ca154u: goto label_4ca154;
        case 0x4ca158u: goto label_4ca158;
        case 0x4ca15cu: goto label_4ca15c;
        case 0x4ca160u: goto label_4ca160;
        case 0x4ca164u: goto label_4ca164;
        case 0x4ca168u: goto label_4ca168;
        case 0x4ca16cu: goto label_4ca16c;
        case 0x4ca170u: goto label_4ca170;
        case 0x4ca174u: goto label_4ca174;
        case 0x4ca178u: goto label_4ca178;
        case 0x4ca17cu: goto label_4ca17c;
        case 0x4ca180u: goto label_4ca180;
        case 0x4ca184u: goto label_4ca184;
        case 0x4ca188u: goto label_4ca188;
        case 0x4ca18cu: goto label_4ca18c;
        case 0x4ca190u: goto label_4ca190;
        case 0x4ca194u: goto label_4ca194;
        case 0x4ca198u: goto label_4ca198;
        case 0x4ca19cu: goto label_4ca19c;
        case 0x4ca1a0u: goto label_4ca1a0;
        case 0x4ca1a4u: goto label_4ca1a4;
        case 0x4ca1a8u: goto label_4ca1a8;
        case 0x4ca1acu: goto label_4ca1ac;
        case 0x4ca1b0u: goto label_4ca1b0;
        case 0x4ca1b4u: goto label_4ca1b4;
        case 0x4ca1b8u: goto label_4ca1b8;
        case 0x4ca1bcu: goto label_4ca1bc;
        case 0x4ca1c0u: goto label_4ca1c0;
        case 0x4ca1c4u: goto label_4ca1c4;
        case 0x4ca1c8u: goto label_4ca1c8;
        case 0x4ca1ccu: goto label_4ca1cc;
        default: break;
    }

    ctx->pc = 0x4c94b8u;

label_4c94b8:
    // 0x4c94b8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4c94b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4c94bc:
    // 0x4c94bc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x4c94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_4c94c0:
    // 0x4c94c0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4c94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c94c4:
    // 0x4c94c4: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x4c94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
label_4c94c8:
    // 0x4c94c8: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x4c94c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
label_4c94cc:
    // 0x4c94cc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x4c94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_4c94d0:
    // 0x4c94d0: 0x8fb50188  lw          $s5, 0x188($sp)
    ctx->pc = 0x4c94d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4c94d4:
    // 0x4c94d4: 0x8fb20190  lw          $s2, 0x190($sp)
    ctx->pc = 0x4c94d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_4c94d8:
    // 0x4c94d8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x4c94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4c94dc:
    // 0x4c94dc: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x4c94dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
label_4c94e0:
    // 0x4c94e0: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x4c94e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
label_4c94e4:
    // 0x4c94e4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x4c94e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c94e8:
    // 0x4c94e8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x4c94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_4c94ec:
    // 0x4c94ec: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4c94ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c94f0:
    // 0x4c94f0: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x4c94f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
label_4c94f4:
    // 0x4c94f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4c94f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4c94f8:
    // 0x4c94f8: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x4c94f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
label_4c94fc:
    // 0x4c94fc: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x4c94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_4c9500:
    // 0x4c9500: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x4c9500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
label_4c9504:
    // 0x4c9504: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x4c9504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
label_4c9508:
    // 0x4c9508: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x4c9508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
label_4c950c:
    // 0x4c950c: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x4c950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
label_4c9510:
    // 0x4c9510: 0xafb500a4  sw          $s5, 0xA4($sp)
    ctx->pc = 0x4c9510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 21));
label_4c9514:
    // 0x4c9514: 0xafb200ac  sw          $s2, 0xAC($sp)
    ctx->pc = 0x4c9514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 18));
label_4c9518:
    // 0x4c9518: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x4c9518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_4c951c:
    // 0x4c951c: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x4c951cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_4c9520:
    // 0x4c9520: 0xafaa007c  sw          $t2, 0x7C($sp)
    ctx->pc = 0x4c9520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 10));
label_4c9524:
    // 0x4c9524: 0xafab0080  sw          $t3, 0x80($sp)
    ctx->pc = 0x4c9524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 11));
label_4c9528:
    // 0x4c9528: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x4c9528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_4c952c:
    // 0x4c952c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_4c9530:
    if (ctx->pc == 0x4C9530u) {
        ctx->pc = 0x4C9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C952Cu;
        // 0x4c9530: 0xafa70068  sw          $a3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9534u;
        goto label_4c9534;
    }
    ctx->pc = 0x4C952Cu;
    {
        const bool branch_taken_0x4c952c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C952Cu;
        // 0x4c9530: 0xafa70068  sw          $a3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c952c) {
            ctx->pc = 0x4C9578u;
            goto label_4c9578;
        }
    }
    ctx->pc = 0x4C9534u;
label_4c9534:
    // 0x4c9534: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4c9534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c9538:
    // 0x4c9538: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x4c9538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4c953c:
    // 0x4c953c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x4c953cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_4c9540:
    // 0x4c9540: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4c9540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4c9544:
    // 0x4c9544: 0xafb4009c  sw          $s4, 0x9C($sp)
    ctx->pc = 0x4c9544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 20));
label_4c9548:
    // 0x4c9548: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x4c9548u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_4c954c:
    // 0x4c954c: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x4c954cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_4c9550:
    // 0x4c9550: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x4c9550u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c9554:
    // 0x4c9554: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x4c9554u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c9558:
    // 0x4c9558: 0x280682d  daddu       $t5, $s4, $zero
    ctx->pc = 0x4c9558u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c955c:
    // 0x4c955c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4c955cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4c9560:
    // 0x4c9560: 0xa9042  srl         $s2, $t2, 1
    ctx->pc = 0x4c9560u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
label_4c9564:
    // 0x4c9564: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x4c9564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
label_4c9568:
    // 0x4c9568: 0xba840  sll         $s5, $t3, 1
    ctx->pc = 0x4c9568u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_4c956c:
    // 0x4c956c: 0xafa70180  sw          $a3, 0x180($sp)
    ctx->pc = 0x4c956cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 7));
label_4c9570:
    // 0x4c9570: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c9574:
    if (ctx->pc == 0x4C9574u) {
        ctx->pc = 0x4C9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9570u;
        // 0x4c9574: 0xda040  sll         $s4, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9578u;
        goto label_4c9578;
    }
    ctx->pc = 0x4C9570u;
    {
        const bool branch_taken_0x4c9570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9570u;
        // 0x4c9574: 0xda040  sll         $s4, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9570) {
            ctx->pc = 0x4C957Cu;
            goto label_4c957c;
        }
    }
    ctx->pc = 0x4C9578u;
label_4c9578:
    // 0x4c9578: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x4c9578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_4c957c:
    // 0x4c957c: 0x8fae01a8  lw          $t6, 0x1A8($sp)
    ctx->pc = 0x4c957cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4c9580:
    // 0x4c9580: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4c9580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_4c9584:
    // 0x4c9584: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4c9584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c9588:
    // 0x4c9588: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x4c9588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
label_4c958c:
    // 0x4c958c: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x4c958cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4c9590:
    // 0x4c9590: 0x8faf0078  lw          $t7, 0x78($sp)
    ctx->pc = 0x4c9590u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_4c9594:
    // 0x4c9594: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x4c9594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_4c9598:
    // 0x4c9598: 0x1e21818  mult        $v1, $t7, $v0
    ctx->pc = 0x4c9598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c959c:
    // 0x4c959c: 0x8faa0198  lw          $t2, 0x198($sp)
    ctx->pc = 0x4c959cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4c95a0:
    // 0x4c95a0: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x4c95a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c95a4:
    // 0x4c95a4: 0x8fab0070  lw          $t3, 0x70($sp)
    ctx->pc = 0x4c95a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4c95a8:
    // 0x4c95a8: 0x24a22860  addiu       $v0, $a1, 0x2860
    ctx->pc = 0x4c95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10336));
label_4c95ac:
    // 0x4c95ac: 0x1463824  and         $a3, $t2, $a2
    ctx->pc = 0x4c95acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
label_4c95b0:
    // 0x4c95b0: 0xac4b0024  sw          $t3, 0x24($v0)
    ctx->pc = 0x4c95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 11));
label_4c95b4:
    // 0x4c95b4: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x4c95b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_4c95b8:
    // 0x4c95b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c95bc:
    // 0x4c95bc: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x4c95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_4c95c0:
    // 0x4c95c0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
label_4c95c4:
    if (ctx->pc == 0x4C95C4u) {
        ctx->pc = 0x4C95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C95C0u;
        // 0x4c95c4: 0xaca32860  sw          $v1, 0x2860($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 10336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C95C8u;
        goto label_4c95c8;
    }
    ctx->pc = 0x4C95C0u;
    {
        const bool branch_taken_0x4c95c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x4C95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C95C0u;
        // 0x4c95c4: 0xaca32860  sw          $v1, 0x2860($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 10336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c95c0) {
            ctx->pc = 0x4C95D4u;
            goto label_4c95d4;
        }
    }
    ctx->pc = 0x4C95C8u;
label_4c95c8:
    // 0x4c95c8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x4c95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_4c95cc:
    // 0x4c95cc: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
label_4c95d0:
    if (ctx->pc == 0x4C95D0u) {
        ctx->pc = 0x4C95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C95CCu;
        // 0x4c95d0: 0x8fad0178  lw          $t5, 0x178($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C95D4u;
        goto label_4c95d4;
    }
    ctx->pc = 0x4C95CCu;
    {
        const bool branch_taken_0x4c95cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C95CCu;
        // 0x4c95d0: 0x8fad0178  lw          $t5, 0x178($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c95cc) {
            ctx->pc = 0x4C95E4u;
            goto label_4c95e4;
        }
    }
    ctx->pc = 0x4C95D4u;
label_4c95d4:
    // 0x4c95d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4c95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4c95d8:
    // 0x4c95d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c95dc:
    // 0x4c95dc: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4c95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4c95e0:
    // 0x4c95e0: 0x8fad0178  lw          $t5, 0x178($sp)
    ctx->pc = 0x4c95e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4c95e4:
    // 0x4c95e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4c95e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c95e8:
    // 0x4c95e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4c95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4c95ec:
    // 0x4c95ec: 0x27a90064  addiu       $t1, $sp, 0x64
    ctx->pc = 0x4c95ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_4c95f0:
    // 0x4c95f0: 0xd1902  srl         $v1, $t5, 4
    ctx->pc = 0x4c95f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
label_4c95f4:
    // 0x4c95f4: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x4c95f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4c95f8:
    // 0x4c95f8: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x4c95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_4c95fc:
    // 0x4c95fc: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x4c95fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c9600:
    // 0x4c9600: 0x8fa801a8  lw          $t0, 0x1A8($sp)
    ctx->pc = 0x4c9600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4c9604:
    // 0x4c9604: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4c9604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4c9608:
    // 0x4c9608: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x4c9608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_4c960c:
    // 0x4c960c: 0xc13238a  jal         func_4C8E28
label_4c9610:
    if (ctx->pc == 0x4C9610u) {
        ctx->pc = 0x4C9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C960Cu;
        // 0x4c9610: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9614u;
        goto label_4c9614;
    }
    ctx->pc = 0x4C960Cu;
    SET_GPR_U32(ctx, 31, 0x4C9614u);
    ctx->pc = 0x4C9610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C960Cu;
    // 0x4c9610: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E28u, 0x4C960Cu, 0x4C9614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9614u;
label_4c9614:
    // 0x4c9614: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x4c9614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4c9618:
    // 0x4c9618: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x4c9618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_4c961c:
    // 0x4c961c: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x4c961cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c9620:
    // 0x4c9620: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4c9620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4c9624:
    // 0x4c9624: 0x8fa801a8  lw          $t0, 0x1A8($sp)
    ctx->pc = 0x4c9624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4c9628:
    // 0x4c9628: 0xc13238a  jal         func_4C8E28
label_4c962c:
    if (ctx->pc == 0x4C962Cu) {
        ctx->pc = 0x4C962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9628u;
        // 0x4c962c: 0x27a9006c  addiu       $t1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9630u;
        goto label_4c9630;
    }
    ctx->pc = 0x4C9628u;
    SET_GPR_U32(ctx, 31, 0x4C9630u);
    ctx->pc = 0x4C962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9628u;
    // 0x4c962c: 0x27a9006c  addiu       $t1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E28u, 0x4C9628u, 0x4C9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9630u;
label_4c9630:
    // 0x4c9630: 0x8fae0198  lw          $t6, 0x198($sp)
    ctx->pc = 0x4c9630u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4c9634:
    // 0x4c9634: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x4c9634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_4c9638:
    // 0x4c9638: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x4c9638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_4c963c:
    // 0x4c963c: 0x1c21824  and         $v1, $t6, $v0
    ctx->pc = 0x4c963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
label_4c9640:
    // 0x4c9640: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_4c9644:
    if (ctx->pc == 0x4C9644u) {
        ctx->pc = 0x4C9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9640u;
        // 0x4c9644: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9648u;
        goto label_4c9648;
    }
    ctx->pc = 0x4C9640u;
    {
        const bool branch_taken_0x4c9640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4C9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9640u;
        // 0x4c9644: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9640) {
            ctx->pc = 0x4C9660u;
            goto label_4c9660;
        }
    }
    ctx->pc = 0x4C9648u;
label_4c9648:
    // 0x4c9648: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_4c964c:
    if (ctx->pc == 0x4C964Cu) {
        ctx->pc = 0x4C964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9648u;
        // 0x4c964c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9650u;
        goto label_4c9650;
    }
    ctx->pc = 0x4C9648u;
    {
        const bool branch_taken_0x4c9648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9648u;
        // 0x4c964c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9648) {
            ctx->pc = 0x4C9664u;
            goto label_4c9664;
        }
    }
    ctx->pc = 0x4C9650u;
label_4c9650:
    // 0x4c9650: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_4c9654:
    if (ctx->pc == 0x4C9654u) {
        ctx->pc = 0x4C9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9650u;
        // 0x4c9654: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9658u;
        goto label_4c9658;
    }
    ctx->pc = 0x4C9650u;
    {
        const bool branch_taken_0x4c9650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4C9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9650u;
        // 0x4c9654: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9650) {
            ctx->pc = 0x4C9664u;
            goto label_4c9664;
        }
    }
    ctx->pc = 0x4C9658u;
label_4c9658:
    // 0x4c9658: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_4c965c:
    if (ctx->pc == 0x4C965Cu) {
        ctx->pc = 0x4C965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9658u;
        // 0x4c965c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9660u;
        goto label_4c9660;
    }
    ctx->pc = 0x4C9658u;
    {
        const bool branch_taken_0x4c9658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9658u;
        // 0x4c965c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9658) {
            ctx->pc = 0x4C966Cu;
            goto label_4c966c;
        }
    }
    ctx->pc = 0x4C9660u;
label_4c9660:
    // 0x4c9660: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x4c9660u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c9664:
    // 0x4c9664: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c9668:
    if (ctx->pc == 0x4C9668u) {
        ctx->pc = 0x4C9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9664u;
        // 0x4c9668: 0xafaf00b0  sw          $t7, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C966Cu;
        goto label_4c966c;
    }
    ctx->pc = 0x4C9664u;
    {
        const bool branch_taken_0x4c9664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9664u;
        // 0x4c9668: 0xafaf00b0  sw          $t7, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9664) {
            ctx->pc = 0x4C9670u;
            goto label_4c9670;
        }
    }
    ctx->pc = 0x4C966Cu;
label_4c966c:
    // 0x4c966c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x4c966cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_4c9670:
    // 0x4c9670: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x4c9670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4c9674:
    // 0x4c9674: 0x153842  srl         $a3, $s5, 1
    ctx->pc = 0x4c9674u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_4c9678:
    // 0x4c9678: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x4c9678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4c967c:
    // 0x4c967c: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x4c967cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4c9680:
    // 0x4c9680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c9680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c9684:
    // 0x4c9684: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4c9684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c9688:
    // 0x4c9688: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x4c9688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4c968c:
    // 0x4c968c: 0x24f9fff8  addiu       $t9, $a3, -0x8
    ctx->pc = 0x4c968cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
label_4c9690:
    // 0x4c9690: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4c9690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c9694:
    // 0x4c9694: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x4c9694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4c9698:
    // 0x4c9698: 0x308a000f  andi        $t2, $a0, 0xF
    ctx->pc = 0x4c9698u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_4c969c:
    // 0x4c969c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x4c969cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4c96a0:
    // 0x4c96a0: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x4c96a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_4c96a4:
    // 0x4c96a4: 0x753018  mult        $a2, $v1, $s5
    ctx->pc = 0x4c96a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4c96a8:
    // 0x4c96a8: 0x8fae01a0  lw          $t6, 0x1A0($sp)
    ctx->pc = 0x4c96a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4c96ac:
    // 0x4c96ac: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c96acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4c96b0:
    // 0x4c96b0: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x4c96b0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4c96b4:
    // 0x4c96b4: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x4c96b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c96b8:
    // 0x4c96b8: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x4c96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4c96bc:
    // 0x4c96bc: 0x1c54821  addu        $t1, $t6, $a1
    ctx->pc = 0x4c96bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_4c96c0:
    // 0x4c96c0: 0x1e2102  srl         $a0, $fp, 4
    ctx->pc = 0x4c96c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 4));
label_4c96c4:
    // 0x4c96c4: 0x8c6b2860  lw          $t3, 0x2860($v1)
    ctx->pc = 0x4c96c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10336)));
label_4c96c8:
    // 0x4c96c8: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x4c96c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4c96cc:
    // 0x4c96cc: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x4c96ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_4c96d0:
    // 0x4c96d0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x4c96d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_4c96d4:
    // 0x4c96d4: 0x8fad0068  lw          $t5, 0x68($sp)
    ctx->pc = 0x4c96d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4c96d8:
    // 0x4c96d8: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x4c96d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4c96dc:
    // 0x4c96dc: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x4c96dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c96e0:
    // 0x4c96e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4c96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4c96e4:
    // 0x4c96e4: 0x1ac7818  mult        $t7, $t5, $t4
    ctx->pc = 0x4c96e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_4c96e8:
    // 0x4c96e8: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x4c96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_4c96ec:
    // 0x4c96ec: 0x2a67023  subu        $t6, $s5, $a2
    ctx->pc = 0x4c96ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_4c96f0:
    // 0x4c96f0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x4c96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_4c96f4:
    // 0x4c96f4: 0x2ac6018  mult        $t4, $s5, $t4
    ctx->pc = 0x4c96f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4c96f8:
    // 0x4c96f8: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x4c96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
label_4c96fc:
    // 0x4c96fc: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x4c96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4c9700:
    // 0x4c9700: 0x1a52823  subu        $a1, $t5, $a1
    ctx->pc = 0x4c9700u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
label_4c9704:
    // 0x4c9704: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4c9704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4c9708:
    // 0x4c9708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c970c:
    // 0x4c970c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4c970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4c9710:
    // 0x4c9710: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4c9710u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4c9714:
    // 0x4c9714: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x4c9714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_4c9718:
    // 0x4c9718: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x4c9718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
label_4c971c:
    // 0x4c971c: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4c971cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
label_4c9720:
    // 0x4c9720: 0xafaa00c4  sw          $t2, 0xC4($sp)
    ctx->pc = 0x4c9720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 10));
label_4c9724:
    // 0x4c9724: 0x24e52860  addiu       $a1, $a3, 0x2860
    ctx->pc = 0x4c9724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 10336));
label_4c9728:
    // 0x4c9728: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x4c9728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_4c972c:
    // 0x4c972c: 0x1151821  addu        $v1, $t0, $s5
    ctx->pc = 0x4c972cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
label_4c9730:
    // 0x4c9730: 0x1ca5021  addu        $t2, $t6, $t2
    ctx->pc = 0x4c9730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_4c9734:
    // 0x4c9734: 0xacab0004  sw          $t3, 0x4($a1)
    ctx->pc = 0x4c9734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 11));
label_4c9738:
    // 0x4c9738: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4c9738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4c973c:
    // 0x4c973c: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x4c973cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_4c9740:
    // 0x4c9740: 0xafaa0090  sw          $t2, 0x90($sp)
    ctx->pc = 0x4c9740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 10));
label_4c9744:
    // 0x4c9744: 0x1352021  addu        $a0, $t1, $s5
    ctx->pc = 0x4c9744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
label_4c9748:
    // 0x4c9748: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x4c9748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
label_4c974c:
    // 0x4c974c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4c9750:
    // 0x4c9750: 0x26acfff0  addiu       $t4, $s5, -0x10
    ctx->pc = 0x4c9750u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
label_4c9754:
    // 0x4c9754: 0x8faa0094  lw          $t2, 0x94($sp)
    ctx->pc = 0x4c9754u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4c9758:
    // 0x4c9758: 0x8fab0098  lw          $t3, 0x98($sp)
    ctx->pc = 0x4c9758u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4c975c:
    // 0x4c975c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x4c975cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_4c9760:
    // 0x4c9760: 0x8fad0198  lw          $t5, 0x198($sp)
    ctx->pc = 0x4c9760u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4c9764:
    // 0x4c9764: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x4c9764u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
label_4c9768:
    // 0x4c9768: 0xafaa0094  sw          $t2, 0x94($sp)
    ctx->pc = 0x4c9768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 10));
label_4c976c:
    // 0x4c976c: 0xafab0098  sw          $t3, 0x98($sp)
    ctx->pc = 0x4c976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 11));
label_4c9770:
    // 0x4c9770: 0x26afffe0  addiu       $t7, $s5, -0x20
    ctx->pc = 0x4c9770u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
label_4c9774:
    // 0x4c9774: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x4c9774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
label_4c9778:
    // 0x4c9778: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x4c9778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_4c977c:
    // 0x4c977c: 0xaca90018  sw          $t1, 0x18($a1)
    ctx->pc = 0x4c977cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 9));
label_4c9780:
    // 0x4c9780: 0xafaf0088  sw          $t7, 0x88($sp)
    ctx->pc = 0x4c9780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 15));
label_4c9784:
    // 0x4c9784: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4c9788:
    if (ctx->pc == 0x4C9788u) {
        ctx->pc = 0x4C9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9784u;
        // 0x4c9788: 0xafae0060  sw          $t6, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C978Cu;
        goto label_4c978c;
    }
    ctx->pc = 0x4C9784u;
    {
        const bool branch_taken_0x4c9784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9784u;
        // 0x4c9788: 0xafae0060  sw          $t6, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9784) {
            ctx->pc = 0x4C97B0u;
            goto label_4c97b0;
        }
    }
    ctx->pc = 0x4C978Cu;
label_4c978c:
    // 0x4c978c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x4c978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_4c9790:
    // 0x4c9790: 0x400013  mtlo        $v0
    ctx->pc = 0x4c9790u;
    ctx->lo = GPR_U64(ctx, 2);
label_4c9794:
    // 0x4c9794: 0x72b22000  madd        $a0, $s5, $s2
    ctx->pc = 0x4c9794u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c9798:
    // 0x4c9798: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x4c9798u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_4c979c:
    // 0x4c979c: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x4c979cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c97a0:
    // 0x4c97a0: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x4c97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_4c97a4:
    // 0x4c97a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4c97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c97a8:
    // 0x4c97a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4c97ac:
    if (ctx->pc == 0x4C97ACu) {
        ctx->pc = 0x4C97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C97A8u;
        // 0x4c97ac: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C97B0u;
        goto label_4c97b0;
    }
    ctx->pc = 0x4C97A8u;
    {
        const bool branch_taken_0x4c97a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C97A8u;
        // 0x4c97ac: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c97a8) {
            ctx->pc = 0x4C97D0u;
            goto label_4c97d0;
        }
    }
    ctx->pc = 0x4C97B0u;
label_4c97b0:
    // 0x4c97b0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x4c97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_4c97b4:
    // 0x4c97b4: 0x400013  mtlo        $v0
    ctx->pc = 0x4c97b4u;
    ctx->lo = GPR_U64(ctx, 2);
label_4c97b8:
    // 0x4c97b8: 0x72b22000  madd        $a0, $s5, $s2
    ctx->pc = 0x4c97b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c97bc:
    // 0x4c97bc: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x4c97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_4c97c0:
    // 0x4c97c0: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x4c97c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c97c4:
    // 0x4c97c4: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x4c97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_4c97c8:
    // 0x4c97c8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4c97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c97cc:
    // 0x4c97cc: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x4c97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_4c97d0:
    // 0x4c97d0: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x4c97d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4c97d4:
    // 0x4c97d4: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4c97d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_4c97d8:
    // 0x4c97d8: 0x24ca2860  addiu       $t2, $a2, 0x2860
    ctx->pc = 0x4c97d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 10336));
label_4c97dc:
    // 0x4c97dc: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x4c97dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4c97e0:
    // 0x4c97e0: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x4c97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_4c97e4:
    // 0x4c97e4: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x4c97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_4c97e8:
    // 0x4c97e8: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4c97e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c97ec:
    // 0x4c97ec: 0x8d430014  lw          $v1, 0x14($t2)
    ctx->pc = 0x4c97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_4c97f0:
    // 0x4c97f0: 0x72842  srl         $a1, $a3, 1
    ctx->pc = 0x4c97f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_4c97f4:
    // 0x4c97f4: 0x8fab0198  lw          $t3, 0x198($sp)
    ctx->pc = 0x4c97f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4c97f8:
    // 0x4c97f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c97fc:
    // 0x4c97fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c9800:
    // 0x4c9800: 0x31660800  andi        $a2, $t3, 0x800
    ctx->pc = 0x4c9800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2048);
label_4c9804:
    // 0x4c9804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c9804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c9808:
    // 0x4c9808: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c9808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c980c:
    // 0x4c980c: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x4c980cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
label_4c9810:
    // 0x4c9810: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_4c9814:
    if (ctx->pc == 0x4C9814u) {
        ctx->pc = 0x4C9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9810u;
        // 0x4c9814: 0xad430014  sw          $v1, 0x14($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9818u;
        goto label_4c9818;
    }
    ctx->pc = 0x4C9810u;
    {
        const bool branch_taken_0x4c9810 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9810u;
        // 0x4c9814: 0xad430014  sw          $v1, 0x14($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9810) {
            ctx->pc = 0x4C9838u;
            goto label_4c9838;
        }
    }
    ctx->pc = 0x4C9818u;
label_4c9818:
    // 0x4c9818: 0x8d440008  lw          $a0, 0x8($t2)
    ctx->pc = 0x4c9818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_4c981c:
    // 0x4c981c: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x4c981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_4c9820:
    // 0x4c9820: 0xad440018  sw          $a0, 0x18($t2)
    ctx->pc = 0x4c9820u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 4));
label_4c9824:
    // 0x4c9824: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x4c9824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_4c9828:
    // 0x4c9828: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x4c9828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_4c982c:
    // 0x4c982c: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x4c982cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
label_4c9830:
    // 0x4c9830: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x4c9830u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
label_4c9834:
    // 0x4c9834: 0xad44001c  sw          $a0, 0x1C($t2)
    ctx->pc = 0x4c9834u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 4));
label_4c9838:
    // 0x4c9838: 0x8fad0170  lw          $t5, 0x170($sp)
    ctx->pc = 0x4c9838u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4c983c:
    // 0x4c983c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c9840:
    // 0x4c9840: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x4c9840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4c9844:
    // 0x4c9844: 0xd2902  srl         $a1, $t5, 4
    ctx->pc = 0x4c9844u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
label_4c9848:
    // 0x4c9848: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x4c9848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4c984c:
    // 0x4c984c: 0x2851018  mult        $v0, $s4, $a1
    ctx->pc = 0x4c984cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c9850:
    // 0x4c9850: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x4c9850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4c9854:
    // 0x4c9854: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x4c9854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4c9858:
    // 0x4c9858: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x4c9858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_4c985c:
    // 0x4c985c: 0x8fab0178  lw          $t3, 0x178($sp)
    ctx->pc = 0x4c985cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4c9860:
    // 0x4c9860: 0x30ce000f  andi        $t6, $a2, 0xF
    ctx->pc = 0x4c9860u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_4c9864:
    // 0x4c9864: 0xe3200b  movn        $a0, $a3, $v1
    ctx->pc = 0x4c9864u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_4c9868:
    // 0x4c9868: 0xafae00c8  sw          $t6, 0xC8($sp)
    ctx->pc = 0x4c9868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 14));
label_4c986c:
    // 0x4c986c: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x4c986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4c9870:
    // 0x4c9870: 0x25a3000f  addiu       $v1, $t5, 0xF
    ctx->pc = 0x4c9870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 15));
label_4c9874:
    // 0x4c9874: 0xcd1021  addu        $v0, $a2, $t5
    ctx->pc = 0x4c9874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_4c9878:
    // 0x4c9878: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x4c9878u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_4c987c:
    // 0x4c987c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c9880:
    // 0x4c9880: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x4c9880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4c9884:
    // 0x4c9884: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4c9884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4c9888:
    // 0x4c9888: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x4c9888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_4c988c:
    // 0x4c988c: 0x8fad00b4  lw          $t5, 0xB4($sp)
    ctx->pc = 0x4c988cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_4c9890:
    // 0x4c9890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c9890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c9894:
    // 0x4c9894: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x4c9894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_4c9898:
    // 0x4c9898: 0x1a3182a  slt         $v1, $t5, $v1
    ctx->pc = 0x4c9898u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4c989c:
    // 0x4c989c: 0x146001f6  bnez        $v1, . + 4 + (0x1F6 << 2)
label_4c98a0:
    if (ctx->pc == 0x4C98A0u) {
        ctx->pc = 0x4C98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C989Cu;
        // 0x4c98a0: 0x8fab0170  lw          $t3, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C98A4u;
        goto label_4c98a4;
    }
    ctx->pc = 0x4C989Cu;
    {
        const bool branch_taken_0x4c989c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C989Cu;
        // 0x4c98a0: 0x8fab0170  lw          $t3, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c989c) {
            ctx->pc = 0x4CA078u;
            goto label_4ca078;
        }
    }
    ctx->pc = 0x4C98A4u;
label_4c98a4:
    // 0x4c98a4: 0x8faf00b8  lw          $t7, 0xB8($sp)
    ctx->pc = 0x4c98a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_4c98a8:
    // 0x4c98a8: 0x24e2001f  addiu       $v0, $a3, 0x1F
    ctx->pc = 0x4c98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
label_4c98ac:
    // 0x4c98ac: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x4c98acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c98b0:
    // 0x4c98b0: 0x1e2102a  slt         $v0, $t7, $v0
    ctx->pc = 0x4c98b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4c98b4:
    // 0x4c98b4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x4c98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_4c98b8:
    // 0x4c98b8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x4c98b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_4c98bc:
    // 0x4c98bc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x4c98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_4c98c0:
    // 0x4c98c0: 0xafab00c0  sw          $t3, 0xC0($sp)
    ctx->pc = 0x4c98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 11));
label_4c98c4:
    // 0x4c98c4: 0x14400154  bnez        $v0, . + 4 + (0x154 << 2)
label_4c98c8:
    if (ctx->pc == 0x4C98C8u) {
        ctx->pc = 0x4C98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C98C4u;
        // 0x4c98c8: 0x8fab0080  lw          $t3, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C98CCu;
        goto label_4c98cc;
    }
    ctx->pc = 0x4C98C4u;
    {
        const bool branch_taken_0x4c98c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C98C4u;
        // 0x4c98c8: 0x8fab0080  lw          $t3, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c98c4) {
            ctx->pc = 0x4C9E18u;
            goto label_4c9e18;
        }
    }
    ctx->pc = 0x4C98CCu;
label_4c98cc:
    // 0x4c98cc: 0x3c0d0053  lui         $t5, 0x53
    ctx->pc = 0x4c98ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)83 << 16));
label_4c98d0:
    // 0x4c98d0: 0x25b32860  addiu       $s3, $t5, 0x2860
    ctx->pc = 0x4c98d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 10336));
label_4c98d4:
    // 0x4c98d4: 0x0  nop
    ctx->pc = 0x4c98d4u;
    // NOP
label_4c98d8:
    // 0x4c98d8: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x4c98d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_4c98dc:
    // 0x4c98dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c98e0:
    // 0x4c98e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x4c98e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4c98e4:
    // 0x4c98e4: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x4c98e4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_4c98e8:
    // 0x4c98e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4c98e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c98ec:
    // 0x4c98ec: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x4c98ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c98f0:
    // 0x4c98f0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x4c98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_4c98f4:
    // 0x4c98f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_4c98f8:
    if (ctx->pc == 0x4C98F8u) {
        ctx->pc = 0x4C98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C98F4u;
        // 0x4c98f8: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C98FCu;
        goto label_4c98fc;
    }
    ctx->pc = 0x4C98F4u;
    {
        const bool branch_taken_0x4c98f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C98F4u;
        // 0x4c98f8: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c98f4) {
            ctx->pc = 0x4C9920u;
            goto label_4c9920;
        }
    }
    ctx->pc = 0x4C98FCu;
label_4c98fc:
    // 0x4c98fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c98fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c9900:
    // 0x4c9900: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x4c9900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4c9904:
    // 0x4c9904: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4c9904u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c9908:
    // 0x4c9908: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4c990c:
    if (ctx->pc == 0x4C990Cu) {
        ctx->pc = 0x4C990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9908u;
        // 0x4c990c: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9910u;
        goto label_4c9910;
    }
    ctx->pc = 0x4C9908u;
    {
        const bool branch_taken_0x4c9908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9908u;
        // 0x4c990c: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9908) {
            ctx->pc = 0x4C991Cu;
            goto label_4c991c;
        }
    }
    ctx->pc = 0x4C9910u;
label_4c9910:
    // 0x4c9910: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4c9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c9914:
    // 0x4c9914: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c9918:
    if (ctx->pc == 0x4C9918u) {
        ctx->pc = 0x4C9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9914u;
        // 0x4c9918: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C991Cu;
        goto label_4c991c;
    }
    ctx->pc = 0x4C9914u;
    {
        const bool branch_taken_0x4c9914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9914u;
        // 0x4c9918: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9914) {
            ctx->pc = 0x4C9920u;
            goto label_4c9920;
        }
    }
    ctx->pc = 0x4C991Cu;
label_4c991c:
    // 0x4c991c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x4c991cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_4c9920:
    // 0x4c9920: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4c9920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c9924:
    // 0x4c9924: 0x10c40052  beq         $a2, $a0, . + 4 + (0x52 << 2)
label_4c9928:
    if (ctx->pc == 0x4C9928u) {
        ctx->pc = 0x4C9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9924u;
        // 0x4c9928: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C992Cu;
        goto label_4c992c;
    }
    ctx->pc = 0x4C9924u;
    {
        const bool branch_taken_0x4c9924 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x4C9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9924u;
        // 0x4c9928: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9924) {
            ctx->pc = 0x4C9A70u;
            goto label_4c9a70;
        }
    }
    ctx->pc = 0x4C992Cu;
label_4c992c:
    // 0x4c992c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c9930:
    if (ctx->pc == 0x4C9930u) {
        ctx->pc = 0x4C9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C992Cu;
        // 0x4c9930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9934u;
        goto label_4c9934;
    }
    ctx->pc = 0x4C992Cu;
    {
        const bool branch_taken_0x4c992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C992Cu;
        // 0x4c9930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c992c) {
            ctx->pc = 0x4C9944u;
            goto label_4c9944;
        }
    }
    ctx->pc = 0x4C9934u;
label_4c9934:
    // 0x4c9934: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
label_4c9938:
    if (ctx->pc == 0x4C9938u) {
        ctx->pc = 0x4C9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9934u;
        // 0x4c9938: 0x26360002  addiu       $s6, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C993Cu;
        goto label_4c993c;
    }
    ctx->pc = 0x4C9934u;
    {
        const bool branch_taken_0x4c9934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9934u;
        // 0x4c9938: 0x26360002  addiu       $s6, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9934) {
            ctx->pc = 0x4C995Cu;
            goto label_4c995c;
        }
    }
    ctx->pc = 0x4C993Cu;
label_4c993c:
    // 0x4c993c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4c9940:
    if (ctx->pc == 0x4C9940u) {
        ctx->pc = 0x4C9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C993Cu;
        // 0x4c9940: 0x25740020  addiu       $s4, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9944u;
        goto label_4c9944;
    }
    ctx->pc = 0x4C993Cu;
    {
        const bool branch_taken_0x4c993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C993Cu;
        // 0x4c9940: 0x25740020  addiu       $s4, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c993c) {
            ctx->pc = 0x4C9954u;
            goto label_4c9954;
        }
    }
    ctx->pc = 0x4C9944u;
label_4c9944:
    // 0x4c9944: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c9948:
    // 0x4c9948: 0x10c200bb  beq         $a2, $v0, . + 4 + (0xBB << 2)
label_4c994c:
    if (ctx->pc == 0x4C994Cu) {
        ctx->pc = 0x4C994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9948u;
        // 0x4c994c: 0x26360002  addiu       $s6, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9950u;
        goto label_4c9950;
    }
    ctx->pc = 0x4C9948u;
    {
        const bool branch_taken_0x4c9948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9948u;
        // 0x4c994c: 0x26360002  addiu       $s6, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9948) {
            ctx->pc = 0x4C9C38u;
            goto label_4c9c38;
        }
    }
    ctx->pc = 0x4C9950u;
label_4c9950:
    // 0x4c9950: 0x25740020  addiu       $s4, $t3, 0x20
    ctx->pc = 0x4c9950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_4c9954:
    // 0x4c9954: 0x10000112  b           . + 4 + (0x112 << 2)
label_4c9958:
    if (ctx->pc == 0x4C9958u) {
        ctx->pc = 0x4C9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9954u;
        // 0x4c9958: 0x1e9040  sll         $s2, $fp, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C995Cu;
        goto label_4c995c;
    }
    ctx->pc = 0x4C9954u;
    {
        const bool branch_taken_0x4c9954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9954u;
        // 0x4c9958: 0x1e9040  sll         $s2, $fp, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9954) {
            ctx->pc = 0x4C9DA0u;
            goto label_4c9da0;
        }
    }
    ctx->pc = 0x4C995Cu;
label_4c995c:
    // 0x4c995c: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4c995cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_4c9960:
    // 0x4c9960: 0x24ae2860  addiu       $t6, $a1, 0x2860
    ctx->pc = 0x4c9960u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 10336));
label_4c9964:
    // 0x4c9964: 0x69c60007  ldl         $a2, 0x7($t6)
    ctx->pc = 0x4c9964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4c9968:
    // 0x4c9968: 0x6dc60000  ldr         $a2, 0x0($t6)
    ctx->pc = 0x4c9968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4c996c:
    // 0x4c996c: 0x69c7000f  ldl         $a3, 0xF($t6)
    ctx->pc = 0x4c996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4c9970:
    // 0x4c9970: 0x6dc70008  ldr         $a3, 0x8($t6)
    ctx->pc = 0x4c9970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4c9974:
    // 0x4c9974: 0x69ca0017  ldl         $t2, 0x17($t6)
    ctx->pc = 0x4c9974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c9978:
    // 0x4c9978: 0x6dca0010  ldr         $t2, 0x10($t6)
    ctx->pc = 0x4c9978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c997c:
    // 0x4c997c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x4c997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9980:
    // 0x4c9980: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x4c9980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9984:
    // 0x4c9984: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x4c9984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9988:
    // 0x4c9988: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x4c9988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c998c:
    // 0x4c998c: 0xb3aa0047  sdl         $t2, 0x47($sp)
    ctx->pc = 0x4c998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9990:
    // 0x4c9990: 0xb7aa0040  sdr         $t2, 0x40($sp)
    ctx->pc = 0x4c9990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9994:
    // 0x4c9994: 0x69c6001f  ldl         $a2, 0x1F($t6)
    ctx->pc = 0x4c9994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4c9998:
    // 0x4c9998: 0x6dc60018  ldr         $a2, 0x18($t6)
    ctx->pc = 0x4c9998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4c999c:
    // 0x4c999c: 0x69c70027  ldl         $a3, 0x27($t6)
    ctx->pc = 0x4c999cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4c99a0:
    // 0x4c99a0: 0x6dc70020  ldr         $a3, 0x20($t6)
    ctx->pc = 0x4c99a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4c99a4:
    // 0x4c99a4: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x4c99a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c99a8:
    // 0x4c99a8: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x4c99a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c99ac:
    // 0x4c99ac: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x4c99acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c99b0:
    // 0x4c99b0: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x4c99b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c99b4:
    // 0x4c99b4: 0x25740020  addiu       $s4, $t3, 0x20
    ctx->pc = 0x4c99b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_4c99b8:
    // 0x4c99b8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4c99b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c99bc:
    // 0x4c99bc: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x4c99bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
label_4c99c0:
    // 0x4c99c0: 0x1e9040  sll         $s2, $fp, 1
    ctx->pc = 0x4c99c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_4c99c4:
    // 0x4c99c4: 0x25502860  addiu       $s0, $t2, 0x2860
    ctx->pc = 0x4c99c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 10336));
label_4c99c8:
    // 0x4c99c8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x4c99c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4c99cc:
    // 0x4c99cc: 0x0  nop
    ctx->pc = 0x4c99ccu;
    // NOP
label_4c99d0:
    // 0x4c99d0: 0x8d624478  lw          $v0, 0x4478($t3)
    ctx->pc = 0x4c99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 17528)));
label_4c99d4:
    // 0x4c99d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c99d8:
    // 0x4c99d8: 0x7faa00d0  sq          $t2, 0xD0($sp)
    ctx->pc = 0x4c99d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 10));
label_4c99dc:
    // 0x4c99dc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4c99dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4c99e0:
    // 0x4c99e0: 0x7fab00e0  sq          $t3, 0xE0($sp)
    ctx->pc = 0x4c99e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 11));
label_4c99e4:
    // 0x4c99e4: 0x7fac00f0  sq          $t4, 0xF0($sp)
    ctx->pc = 0x4c99e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 12));
label_4c99e8:
    // 0x4c99e8: 0x7fad0100  sq          $t5, 0x100($sp)
    ctx->pc = 0x4c99e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 13));
label_4c99ec:
    // 0x4c99ec: 0x40f809  jalr        $v0
label_4c99f0:
    if (ctx->pc == 0x4C99F0u) {
        ctx->pc = 0x4C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C99ECu;
        // 0x4c99f0: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C99F4u;
        goto label_4c99f4;
    }
    ctx->pc = 0x4C99ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C99F4u);
        ctx->pc = 0x4C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C99ECu;
        // 0x4c99f0: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C99ECu, 0x4C99F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C99F4u;
label_4c99f4:
    // 0x4c99f4: 0x7bac00f0  lq          $t4, 0xF0($sp)
    ctx->pc = 0x4c99f4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4c99f8:
    // 0x4c99f8: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x4c99f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_4c99fc:
    // 0x4c99fc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4c99fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c9a00:
    // 0x4c9a00: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x4c9a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4c9a04:
    // 0x4c9a04: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x4c9a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c9a08:
    // 0x4c9a08: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x4c9a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_4c9a0c:
    // 0x4c9a0c: 0x7bb90110  lq          $t9, 0x110($sp)
    ctx->pc = 0x4c9a0cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4c9a10:
    // 0x4c9a10: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4c9a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4c9a14:
    // 0x4c9a14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4c9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4c9a18:
    // 0x4c9a18: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4c9a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4c9a1c:
    // 0x4c9a1c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4c9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4c9a20:
    // 0x4c9a20: 0xd54821  addu        $t1, $a2, $s5
    ctx->pc = 0x4c9a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4c9a24:
    // 0x4c9a24: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4c9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c9a28:
    // 0x4c9a28: 0xf52821  addu        $a1, $a3, $s5
    ctx->pc = 0x4c9a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_4c9a2c:
    // 0x4c9a2c: 0x992021  addu        $a0, $a0, $t9
    ctx->pc = 0x4c9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_4c9a30:
    // 0x4c9a30: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4c9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c9a34:
    // 0x4c9a34: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x4c9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_4c9a38:
    // 0x4c9a38: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x4c9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_4c9a3c:
    // 0x4c9a3c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x4c9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_4c9a40:
    // 0x4c9a40: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4c9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4c9a44:
    // 0x4c9a44: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4c9a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_4c9a48:
    // 0x4c9a48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c9a4c:
    // 0x4c9a4c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4c9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_4c9a50:
    // 0x4c9a50: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x4c9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_4c9a54:
    // 0x4c9a54: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x4c9a54u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4c9a58:
    // 0x4c9a58: 0x7bab00e0  lq          $t3, 0xE0($sp)
    ctx->pc = 0x4c9a58u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4c9a5c:
    // 0x4c9a5c: 0xad482860  sw          $t0, 0x2860($t2)
    ctx->pc = 0x4c9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 10336), GPR_U32(ctx, 8));
label_4c9a60:
    // 0x4c9a60: 0x621ffdb  bgez        $s1, . + 4 + (-0x25 << 2)
label_4c9a64:
    if (ctx->pc == 0x4C9A64u) {
        ctx->pc = 0x4C9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9A60u;
        // 0x4c9a64: 0x7bad0100  lq          $t5, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9A68u;
        goto label_4c9a68;
    }
    ctx->pc = 0x4C9A60u;
    {
        const bool branch_taken_0x4c9a60 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4C9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9A60u;
        // 0x4c9a64: 0x7bad0100  lq          $t5, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9a60) {
            ctx->pc = 0x4C99D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c99d0;
        }
    }
    ctx->pc = 0x4C9A68u;
label_4c9a68:
    // 0x4c9a68: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_4c9a6c:
    if (ctx->pc == 0x4C9A6Cu) {
        ctx->pc = 0x4C9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9A68u;
        // 0x4c9a6c: 0x3c0f0053  lui         $t7, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9A70u;
        goto label_4c9a70;
    }
    ctx->pc = 0x4C9A68u;
    {
        const bool branch_taken_0x4c9a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9A68u;
        // 0x4c9a6c: 0x3c0f0053  lui         $t7, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9a68) {
            ctx->pc = 0x4C9D4Cu;
            goto label_4c9d4c;
        }
    }
    ctx->pc = 0x4C9A70u;
label_4c9a70:
    // 0x4c9a70: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x4c9a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4c9a74:
    // 0x4c9a74: 0x25740020  addiu       $s4, $t3, 0x20
    ctx->pc = 0x4c9a74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_4c9a78:
    // 0x4c9a78: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x4c9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4c9a7c:
    // 0x4c9a7c: 0x26360002  addiu       $s6, $s1, 0x2
    ctx->pc = 0x4c9a7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_4c9a80:
    // 0x4c9a80: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x4c9a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4c9a84:
    // 0x4c9a84: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4c9a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4c9a88:
    // 0x4c9a88: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x4c9a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_4c9a8c:
    // 0x4c9a8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4c9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4c9a90:
    // 0x4c9a90: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x4c9a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4c9a94:
    // 0x4c9a94: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4c9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4c9a98:
    // 0x4c9a98: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x4c9a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4c9a9c:
    // 0x4c9a9c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4c9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_4c9aa0:
    // 0x4c9aa0: 0x8da82860  lw          $t0, 0x2860($t5)
    ctx->pc = 0x4c9aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 10336)));
label_4c9aa4:
    // 0x4c9aa4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x4c9aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_4c9aa8:
    // 0x4c9aa8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4c9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4c9aac:
    // 0x4c9aac: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4c9aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_4c9ab0:
    // 0x4c9ab0: 0x25af2860  addiu       $t7, $t5, 0x2860
    ctx->pc = 0x4c9ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 10336));
label_4c9ab4:
    // 0x4c9ab4: 0x69ea0007  ldl         $t2, 0x7($t7)
    ctx->pc = 0x4c9ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c9ab8:
    // 0x4c9ab8: 0x6dea0000  ldr         $t2, 0x0($t7)
    ctx->pc = 0x4c9ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c9abc:
    // 0x4c9abc: 0x69eb000f  ldl         $t3, 0xF($t7)
    ctx->pc = 0x4c9abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4c9ac0:
    // 0x4c9ac0: 0x6deb0008  ldr         $t3, 0x8($t7)
    ctx->pc = 0x4c9ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4c9ac4:
    // 0x4c9ac4: 0x69ee0017  ldl         $t6, 0x17($t7)
    ctx->pc = 0x4c9ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4c9ac8:
    // 0x4c9ac8: 0x6dee0010  ldr         $t6, 0x10($t7)
    ctx->pc = 0x4c9ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4c9acc:
    // 0x4c9acc: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x4c9accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ad0:
    // 0x4c9ad0: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x4c9ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ad4:
    // 0x4c9ad4: 0xb3ab003f  sdl         $t3, 0x3F($sp)
    ctx->pc = 0x4c9ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ad8:
    // 0x4c9ad8: 0xb7ab0038  sdr         $t3, 0x38($sp)
    ctx->pc = 0x4c9ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9adc:
    // 0x4c9adc: 0xb3ae0047  sdl         $t6, 0x47($sp)
    ctx->pc = 0x4c9adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ae0:
    // 0x4c9ae0: 0xb7ae0040  sdr         $t6, 0x40($sp)
    ctx->pc = 0x4c9ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ae4:
    // 0x4c9ae4: 0x69ea001f  ldl         $t2, 0x1F($t7)
    ctx->pc = 0x4c9ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c9ae8:
    // 0x4c9ae8: 0x6dea0018  ldr         $t2, 0x18($t7)
    ctx->pc = 0x4c9ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c9aec:
    // 0x4c9aec: 0x69eb0027  ldl         $t3, 0x27($t7)
    ctx->pc = 0x4c9aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4c9af0:
    // 0x4c9af0: 0x6deb0020  ldr         $t3, 0x20($t7)
    ctx->pc = 0x4c9af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4c9af4:
    // 0x4c9af4: 0xb3aa004f  sdl         $t2, 0x4F($sp)
    ctx->pc = 0x4c9af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9af8:
    // 0x4c9af8: 0xb7aa0048  sdr         $t2, 0x48($sp)
    ctx->pc = 0x4c9af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9afc:
    // 0x4c9afc: 0xb3ab0057  sdl         $t3, 0x57($sp)
    ctx->pc = 0x4c9afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9b00:
    // 0x4c9b00: 0xb7ab0050  sdr         $t3, 0x50($sp)
    ctx->pc = 0x4c9b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9b04:
    // 0x4c9b04: 0x11e4021  addu        $t0, $t0, $fp
    ctx->pc = 0x4c9b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 30)));
label_4c9b08:
    // 0x4c9b08: 0xae690008  sw          $t1, 0x8($s3)
    ctx->pc = 0x4c9b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 9));
label_4c9b0c:
    // 0x4c9b0c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c9b10:
    // 0x4c9b10: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x4c9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_4c9b14:
    // 0x4c9b14: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x4c9b14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
label_4c9b18:
    // 0x4c9b18: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x4c9b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_4c9b1c:
    // 0x4c9b1c: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x4c9b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
label_4c9b20:
    // 0x4c9b20: 0xae65001c  sw          $a1, 0x1C($s3)
    ctx->pc = 0x4c9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
label_4c9b24:
    // 0x4c9b24: 0x1e9040  sll         $s2, $fp, 1
    ctx->pc = 0x4c9b24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_4c9b28:
    // 0x4c9b28: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x4c9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
label_4c9b2c:
    // 0x4c9b2c: 0x25502860  addiu       $s0, $t2, 0x2860
    ctx->pc = 0x4c9b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 10336));
label_4c9b30:
    // 0x4c9b30: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x4c9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
label_4c9b34:
    // 0x4c9b34: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x4c9b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4c9b38:
    // 0x4c9b38: 0xada82860  sw          $t0, 0x2860($t5)
    ctx->pc = 0x4c9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 10336), GPR_U32(ctx, 8));
label_4c9b3c:
    // 0x4c9b3c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x4c9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_4c9b40:
    // 0x4c9b40: 0x8d624478  lw          $v0, 0x4478($t3)
    ctx->pc = 0x4c9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 17528)));
label_4c9b44:
    // 0x4c9b44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c9b48:
    // 0x4c9b48: 0x7faa00d0  sq          $t2, 0xD0($sp)
    ctx->pc = 0x4c9b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 10));
label_4c9b4c:
    // 0x4c9b4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4c9b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4c9b50:
    // 0x4c9b50: 0x7fab00e0  sq          $t3, 0xE0($sp)
    ctx->pc = 0x4c9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 11));
label_4c9b54:
    // 0x4c9b54: 0x7fac00f0  sq          $t4, 0xF0($sp)
    ctx->pc = 0x4c9b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 12));
label_4c9b58:
    // 0x4c9b58: 0x7fad0100  sq          $t5, 0x100($sp)
    ctx->pc = 0x4c9b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 13));
label_4c9b5c:
    // 0x4c9b5c: 0x40f809  jalr        $v0
label_4c9b60:
    if (ctx->pc == 0x4C9B60u) {
        ctx->pc = 0x4C9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9B5Cu;
        // 0x4c9b60: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9B64u;
        goto label_4c9b64;
    }
    ctx->pc = 0x4C9B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C9B64u);
        ctx->pc = 0x4C9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9B5Cu;
        // 0x4c9b60: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9B5Cu, 0x4C9B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C9B64u;
label_4c9b64:
    // 0x4c9b64: 0x7bac00f0  lq          $t4, 0xF0($sp)
    ctx->pc = 0x4c9b64u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4c9b68:
    // 0x4c9b68: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x4c9b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_4c9b6c:
    // 0x4c9b6c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4c9b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c9b70:
    // 0x4c9b70: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x4c9b70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4c9b74:
    // 0x4c9b74: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x4c9b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c9b78:
    // 0x4c9b78: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x4c9b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_4c9b7c:
    // 0x4c9b7c: 0x7bb90110  lq          $t9, 0x110($sp)
    ctx->pc = 0x4c9b7cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4c9b80:
    // 0x4c9b80: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4c9b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4c9b84:
    // 0x4c9b84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4c9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4c9b88:
    // 0x4c9b88: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4c9b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4c9b8c:
    // 0x4c9b8c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4c9b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4c9b90:
    // 0x4c9b90: 0xd54821  addu        $t1, $a2, $s5
    ctx->pc = 0x4c9b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4c9b94:
    // 0x4c9b94: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4c9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c9b98:
    // 0x4c9b98: 0xf52821  addu        $a1, $a3, $s5
    ctx->pc = 0x4c9b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_4c9b9c:
    // 0x4c9b9c: 0x992021  addu        $a0, $a0, $t9
    ctx->pc = 0x4c9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_4c9ba0:
    // 0x4c9ba0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4c9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c9ba4:
    // 0x4c9ba4: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x4c9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_4c9ba8:
    // 0x4c9ba8: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x4c9ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_4c9bac:
    // 0x4c9bac: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x4c9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_4c9bb0:
    // 0x4c9bb0: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4c9bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4c9bb4:
    // 0x4c9bb4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4c9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_4c9bb8:
    // 0x4c9bb8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c9bbc:
    // 0x4c9bbc: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4c9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_4c9bc0:
    // 0x4c9bc0: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x4c9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_4c9bc4:
    // 0x4c9bc4: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x4c9bc4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4c9bc8:
    // 0x4c9bc8: 0x7bab00e0  lq          $t3, 0xE0($sp)
    ctx->pc = 0x4c9bc8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4c9bcc:
    // 0x4c9bcc: 0xad482860  sw          $t0, 0x2860($t2)
    ctx->pc = 0x4c9bccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 10336), GPR_U32(ctx, 8));
label_4c9bd0:
    // 0x4c9bd0: 0x621ffdb  bgez        $s1, . + 4 + (-0x25 << 2)
label_4c9bd4:
    if (ctx->pc == 0x4C9BD4u) {
        ctx->pc = 0x4C9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9BD0u;
        // 0x4c9bd4: 0x7bad0100  lq          $t5, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9BD8u;
        goto label_4c9bd8;
    }
    ctx->pc = 0x4C9BD0u;
    {
        const bool branch_taken_0x4c9bd0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4C9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9BD0u;
        // 0x4c9bd4: 0x7bad0100  lq          $t5, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9bd0) {
            ctx->pc = 0x4C9B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c9b40;
        }
    }
    ctx->pc = 0x4C9BD8u;
label_4c9bd8:
    // 0x4c9bd8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c9bdc:
    // 0x4c9bdc: 0x24462860  addiu       $a2, $v0, 0x2860
    ctx->pc = 0x4c9bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10336));
label_4c9be0:
    // 0x4c9be0: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x4c9be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c9be4:
    // 0x4c9be4: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x4c9be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c9be8:
    // 0x4c9be8: 0x6ba4003f  ldl         $a0, 0x3F($sp)
    ctx->pc = 0x4c9be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c9bec:
    // 0x4c9bec: 0x6fa40038  ldr         $a0, 0x38($sp)
    ctx->pc = 0x4c9becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c9bf0:
    // 0x4c9bf0: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x4c9bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4c9bf4:
    // 0x4c9bf4: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x4c9bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4c9bf8:
    // 0x4c9bf8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4c9bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9bfc:
    // 0x4c9bfc: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4c9bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c00:
    // 0x4c9c00: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x4c9c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c04:
    // 0x4c9c04: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x4c9c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c08:
    // 0x4c9c08: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x4c9c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c0c:
    // 0x4c9c0c: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x4c9c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c10:
    // 0x4c9c10: 0x6ba3004f  ldl         $v1, 0x4F($sp)
    ctx->pc = 0x4c9c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c9c14:
    // 0x4c9c14: 0x6fa30048  ldr         $v1, 0x48($sp)
    ctx->pc = 0x4c9c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c9c18:
    // 0x4c9c18: 0x6ba40057  ldl         $a0, 0x57($sp)
    ctx->pc = 0x4c9c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c9c1c:
    // 0x4c9c1c: 0x6fa40050  ldr         $a0, 0x50($sp)
    ctx->pc = 0x4c9c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c9c20:
    // 0x4c9c20: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x4c9c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c24:
    // 0x4c9c24: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x4c9c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c28:
    // 0x4c9c28: 0xb0c40027  sdl         $a0, 0x27($a2)
    ctx->pc = 0x4c9c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c2c:
    // 0x4c9c2c: 0xb4c40020  sdr         $a0, 0x20($a2)
    ctx->pc = 0x4c9c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c30:
    // 0x4c9c30: 0x1000005c  b           . + 4 + (0x5C << 2)
label_4c9c34:
    if (ctx->pc == 0x4C9C34u) {
        ctx->pc = 0x4C9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9C30u;
        // 0x4c9c34: 0x8e680008  lw          $t0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9C38u;
        goto label_4c9c38;
    }
    ctx->pc = 0x4C9C30u;
    {
        const bool branch_taken_0x4c9c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9C30u;
        // 0x4c9c34: 0x8e680008  lw          $t0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9c30) {
            ctx->pc = 0x4C9DA4u;
            goto label_4c9da4;
        }
    }
    ctx->pc = 0x4C9C38u;
label_4c9c38:
    // 0x4c9c38: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4c9c38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
label_4c9c3c:
    // 0x4c9c3c: 0x24e22860  addiu       $v0, $a3, 0x2860
    ctx->pc = 0x4c9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 10336));
label_4c9c40:
    // 0x4c9c40: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x4c9c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c9c44:
    // 0x4c9c44: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x4c9c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c9c48:
    // 0x4c9c48: 0x684e000f  ldl         $t6, 0xF($v0)
    ctx->pc = 0x4c9c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4c9c4c:
    // 0x4c9c4c: 0x6c4e0008  ldr         $t6, 0x8($v0)
    ctx->pc = 0x4c9c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4c9c50:
    // 0x4c9c50: 0x684f0017  ldl         $t7, 0x17($v0)
    ctx->pc = 0x4c9c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_4c9c54:
    // 0x4c9c54: 0x6c4f0010  ldr         $t7, 0x10($v0)
    ctx->pc = 0x4c9c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4c9c58:
    // 0x4c9c58: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x4c9c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c5c:
    // 0x4c9c5c: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x4c9c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c60:
    // 0x4c9c60: 0xb3ae003f  sdl         $t6, 0x3F($sp)
    ctx->pc = 0x4c9c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c64:
    // 0x4c9c64: 0xb7ae0038  sdr         $t6, 0x38($sp)
    ctx->pc = 0x4c9c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c68:
    // 0x4c9c68: 0xb3af0047  sdl         $t7, 0x47($sp)
    ctx->pc = 0x4c9c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c6c:
    // 0x4c9c6c: 0xb7af0040  sdr         $t7, 0x40($sp)
    ctx->pc = 0x4c9c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c70:
    // 0x4c9c70: 0x684a001f  ldl         $t2, 0x1F($v0)
    ctx->pc = 0x4c9c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_4c9c74:
    // 0x4c9c74: 0x6c4a0018  ldr         $t2, 0x18($v0)
    ctx->pc = 0x4c9c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_4c9c78:
    // 0x4c9c78: 0x684e0027  ldl         $t6, 0x27($v0)
    ctx->pc = 0x4c9c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4c9c7c:
    // 0x4c9c7c: 0x6c4e0020  ldr         $t6, 0x20($v0)
    ctx->pc = 0x4c9c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4c9c80:
    // 0x4c9c80: 0xb3aa004f  sdl         $t2, 0x4F($sp)
    ctx->pc = 0x4c9c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c84:
    // 0x4c9c84: 0xb7aa0048  sdr         $t2, 0x48($sp)
    ctx->pc = 0x4c9c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c88:
    // 0x4c9c88: 0xb3ae0057  sdl         $t6, 0x57($sp)
    ctx->pc = 0x4c9c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c8c:
    // 0x4c9c8c: 0xb7ae0050  sdr         $t6, 0x50($sp)
    ctx->pc = 0x4c9c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9c90:
    // 0x4c9c90: 0x25740020  addiu       $s4, $t3, 0x20
    ctx->pc = 0x4c9c90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_4c9c94:
    // 0x4c9c94: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4c9c94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c9c98:
    // 0x4c9c98: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x4c9c98u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
label_4c9c9c:
    // 0x4c9c9c: 0x1e9040  sll         $s2, $fp, 1
    ctx->pc = 0x4c9c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_4c9ca0:
    // 0x4c9ca0: 0x25502860  addiu       $s0, $t2, 0x2860
    ctx->pc = 0x4c9ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 10336));
label_4c9ca4:
    // 0x4c9ca4: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x4c9ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4c9ca8:
    // 0x4c9ca8: 0x8d624478  lw          $v0, 0x4478($t3)
    ctx->pc = 0x4c9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 17528)));
label_4c9cac:
    // 0x4c9cac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4c9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c9cb0:
    // 0x4c9cb0: 0x7faa00d0  sq          $t2, 0xD0($sp)
    ctx->pc = 0x4c9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 10));
label_4c9cb4:
    // 0x4c9cb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4c9cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4c9cb8:
    // 0x4c9cb8: 0x7fab00e0  sq          $t3, 0xE0($sp)
    ctx->pc = 0x4c9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 11));
label_4c9cbc:
    // 0x4c9cbc: 0x7fac00f0  sq          $t4, 0xF0($sp)
    ctx->pc = 0x4c9cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 12));
label_4c9cc0:
    // 0x4c9cc0: 0x7fad0100  sq          $t5, 0x100($sp)
    ctx->pc = 0x4c9cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 13));
label_4c9cc4:
    // 0x4c9cc4: 0x40f809  jalr        $v0
label_4c9cc8:
    if (ctx->pc == 0x4C9CC8u) {
        ctx->pc = 0x4C9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9CC4u;
        // 0x4c9cc8: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9CCCu;
        goto label_4c9ccc;
    }
    ctx->pc = 0x4C9CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C9CCCu);
        ctx->pc = 0x4C9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9CC4u;
        // 0x4c9cc8: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9CC4u, 0x4C9CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C9CCCu;
label_4c9ccc:
    // 0x4c9ccc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x4c9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_4c9cd0:
    // 0x4c9cd0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4c9cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c9cd4:
    // 0x4c9cd4: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x4c9cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4c9cd8:
    // 0x4c9cd8: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x4c9cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_4c9cdc:
    // 0x4c9cdc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4c9cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4c9ce0:
    // 0x4c9ce0: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x4c9ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c9ce4:
    // 0x4c9ce4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4c9ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4c9ce8:
    // 0x4c9ce8: 0x8fae008c  lw          $t6, 0x8C($sp)
    ctx->pc = 0x4c9ce8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_4c9cec:
    // 0x4c9cec: 0xd54821  addu        $t1, $a2, $s5
    ctx->pc = 0x4c9cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4c9cf0:
    // 0x4c9cf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4c9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4c9cf4:
    // 0x4c9cf4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4c9cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4c9cf8:
    // 0x4c9cf8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4c9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4c9cfc:
    // 0x4c9cfc: 0xf52821  addu        $a1, $a3, $s5
    ctx->pc = 0x4c9cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_4c9d00:
    // 0x4c9d00: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4c9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c9d04:
    // 0x4c9d04: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4c9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c9d08:
    // 0x4c9d08: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x4c9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_4c9d0c:
    // 0x4c9d0c: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x4c9d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_4c9d10:
    // 0x4c9d10: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x4c9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_4c9d14:
    // 0x4c9d14: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x4c9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_4c9d18:
    // 0x4c9d18: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4c9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4c9d1c:
    // 0x4c9d1c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4c9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_4c9d20:
    // 0x4c9d20: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c9d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c9d24:
    // 0x4c9d24: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4c9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_4c9d28:
    // 0x4c9d28: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x4c9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_4c9d2c:
    // 0x4c9d2c: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x4c9d2cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4c9d30:
    // 0x4c9d30: 0x7bab00e0  lq          $t3, 0xE0($sp)
    ctx->pc = 0x4c9d30u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4c9d34:
    // 0x4c9d34: 0xad482860  sw          $t0, 0x2860($t2)
    ctx->pc = 0x4c9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 10336), GPR_U32(ctx, 8));
label_4c9d38:
    // 0x4c9d38: 0x7bac00f0  lq          $t4, 0xF0($sp)
    ctx->pc = 0x4c9d38u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4c9d3c:
    // 0x4c9d3c: 0x7bad0100  lq          $t5, 0x100($sp)
    ctx->pc = 0x4c9d3cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4c9d40:
    // 0x4c9d40: 0x621ffd9  bgez        $s1, . + 4 + (-0x27 << 2)
label_4c9d44:
    if (ctx->pc == 0x4C9D44u) {
        ctx->pc = 0x4C9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9D40u;
        // 0x4c9d44: 0x7bb90110  lq          $t9, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9D48u;
        goto label_4c9d48;
    }
    ctx->pc = 0x4C9D40u;
    {
        const bool branch_taken_0x4c9d40 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4C9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9D40u;
        // 0x4c9d44: 0x7bb90110  lq          $t9, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9d40) {
            ctx->pc = 0x4C9CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c9ca8;
        }
    }
    ctx->pc = 0x4C9D48u;
label_4c9d48:
    // 0x4c9d48: 0x3c0f0053  lui         $t7, 0x53
    ctx->pc = 0x4c9d48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)83 << 16));
label_4c9d4c:
    // 0x4c9d4c: 0x25e52860  addiu       $a1, $t7, 0x2860
    ctx->pc = 0x4c9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 10336));
label_4c9d50:
    // 0x4c9d50: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x4c9d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c9d54:
    // 0x4c9d54: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x4c9d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c9d58:
    // 0x4c9d58: 0x6ba3003f  ldl         $v1, 0x3F($sp)
    ctx->pc = 0x4c9d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c9d5c:
    // 0x4c9d5c: 0x6fa30038  ldr         $v1, 0x38($sp)
    ctx->pc = 0x4c9d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c9d60:
    // 0x4c9d60: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x4c9d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c9d64:
    // 0x4c9d64: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x4c9d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c9d68:
    // 0x4c9d68: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4c9d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d6c:
    // 0x4c9d6c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4c9d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d70:
    // 0x4c9d70: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x4c9d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d74:
    // 0x4c9d74: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x4c9d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d78:
    // 0x4c9d78: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x4c9d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d7c:
    // 0x4c9d7c: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x4c9d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d80:
    // 0x4c9d80: 0x6ba2004f  ldl         $v0, 0x4F($sp)
    ctx->pc = 0x4c9d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c9d84:
    // 0x4c9d84: 0x6fa20048  ldr         $v0, 0x48($sp)
    ctx->pc = 0x4c9d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c9d88:
    // 0x4c9d88: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x4c9d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c9d8c:
    // 0x4c9d8c: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x4c9d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c9d90:
    // 0x4c9d90: 0xb0a2001f  sdl         $v0, 0x1F($a1)
    ctx->pc = 0x4c9d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d94:
    // 0x4c9d94: 0xb4a20018  sdr         $v0, 0x18($a1)
    ctx->pc = 0x4c9d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d98:
    // 0x4c9d98: 0xb0a30027  sdl         $v1, 0x27($a1)
    ctx->pc = 0x4c9d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9d9c:
    // 0x4c9d9c: 0xb4a30020  sdr         $v1, 0x20($a1)
    ctx->pc = 0x4c9d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9da0:
    // 0x4c9da0: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x4c9da0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4c9da4:
    // 0x4c9da4: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x4c9da4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c9da8:
    // 0x4c9da8: 0x8e69000c  lw          $t1, 0xC($s3)
    ctx->pc = 0x4c9da8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4c9dac:
    // 0x4c9dac: 0x256a001f  addiu       $t2, $t3, 0x1F
    ctx->pc = 0x4c9dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 31));
label_4c9db0:
    // 0x4c9db0: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x4c9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4c9db4:
    // 0x4c9db4: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x4c9db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_4c9db8:
    // 0x4c9db8: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x4c9db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_4c9dbc:
    // 0x4c9dbc: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x4c9dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_4c9dc0:
    // 0x4c9dc0: 0x8da32860  lw          $v1, 0x2860($t5)
    ctx->pc = 0x4c9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 10336)));
label_4c9dc4:
    // 0x4c9dc4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4c9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4c9dc8:
    // 0x4c9dc8: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x4c9dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4c9dcc:
    // 0x4c9dcc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x4c9dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_4c9dd0:
    // 0x4c9dd0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x4c9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4c9dd4:
    // 0x4c9dd4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4c9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4c9dd8:
    // 0x4c9dd8: 0xae680008  sw          $t0, 0x8($s3)
    ctx->pc = 0x4c9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 8));
label_4c9ddc:
    // 0x4c9ddc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4c9ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4c9de0:
    // 0x4c9de0: 0xae69000c  sw          $t1, 0xC($s3)
    ctx->pc = 0x4c9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 9));
label_4c9de4:
    // 0x4c9de4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4c9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4c9de8:
    // 0x4c9de8: 0xae650018  sw          $a1, 0x18($s3)
    ctx->pc = 0x4c9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 5));
label_4c9dec:
    // 0x4c9dec: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x4c9decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c9df0:
    // 0x4c9df0: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x4c9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_4c9df4:
    // 0x4c9df4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x4c9df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_4c9df8:
    // 0x4c9df8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4c9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4c9dfc:
    // 0x4c9dfc: 0xae670010  sw          $a3, 0x10($s3)
    ctx->pc = 0x4c9dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
label_4c9e00:
    // 0x4c9e00: 0xca502a  slt         $t2, $a2, $t2
    ctx->pc = 0x4c9e00u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_4c9e04:
    // 0x4c9e04: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x4c9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
label_4c9e08:
    // 0x4c9e08: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4c9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c9e0c:
    // 0x4c9e0c: 0xada32860  sw          $v1, 0x2860($t5)
    ctx->pc = 0x4c9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 10336), GPR_U32(ctx, 3));
label_4c9e10:
    // 0x4c9e10: 0x1140feb1  beqz        $t2, . + 4 + (-0x14F << 2)
label_4c9e14:
    if (ctx->pc == 0x4C9E14u) {
        ctx->pc = 0x4C9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E10u;
        // 0x4c9e14: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9E18u;
        goto label_4c9e18;
    }
    ctx->pc = 0x4C9E10u;
    {
        const bool branch_taken_0x4c9e10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E10u;
        // 0x4c9e14: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9e10) {
            ctx->pc = 0x4C98D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c98d8;
        }
    }
    ctx->pc = 0x4C9E18u;
label_4c9e18:
    // 0x4c9e18: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x4c9e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_4c9e1c:
    // 0x4c9e1c: 0x2562000f  addiu       $v0, $t3, 0xF
    ctx->pc = 0x4c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
label_4c9e20:
    // 0x4c9e20: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x4c9e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4c9e24:
    // 0x4c9e24: 0x54400074  bnel        $v0, $zero, . + 4 + (0x74 << 2)
label_4c9e28:
    if (ctx->pc == 0x4C9E28u) {
        ctx->pc = 0x4C9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E24u;
        // 0x4c9e28: 0x8fad0090  lw          $t5, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9E2Cu;
        goto label_4c9e2c;
    }
    ctx->pc = 0x4C9E24u;
    {
        const bool branch_taken_0x4c9e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c9e24) {
            ctx->pc = 0x4C9E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9E24u;
            // 0x4c9e28: 0x8fad0090  lw          $t5, 0x90($sp) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9FF8u;
            goto label_4c9ff8;
        }
    }
    ctx->pc = 0x4C9E2Cu;
label_4c9e2c:
    // 0x4c9e2c: 0x8faa009c  lw          $t2, 0x9C($sp)
    ctx->pc = 0x4c9e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_4c9e30:
    // 0x4c9e30: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_4c9e34:
    if (ctx->pc == 0x4C9E34u) {
        ctx->pc = 0x4C9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E30u;
        // 0x4c9e34: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9E38u;
        goto label_4c9e38;
    }
    ctx->pc = 0x4C9E30u;
    {
        const bool branch_taken_0x4c9e30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E30u;
        // 0x4c9e34: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9e30) {
            ctx->pc = 0x4C9E44u;
            goto label_4c9e44;
        }
    }
    ctx->pc = 0x4C9E38u;
label_4c9e38:
    // 0x4c9e38: 0x22a1021  addu        $v0, $s1, $t2
    ctx->pc = 0x4c9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
label_4c9e3c:
    // 0x4c9e3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4c9e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c9e40:
    // 0x4c9e40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c9e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4c9e44:
    // 0x4c9e44: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
label_4c9e48:
    if (ctx->pc == 0x4C9E48u) {
        ctx->pc = 0x4C9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E44u;
        // 0x4c9e48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9E4Cu;
        goto label_4c9e4c;
    }
    ctx->pc = 0x4C9E44u;
    {
        const bool branch_taken_0x4c9e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E44u;
        // 0x4c9e48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9e44) {
            ctx->pc = 0x4C9F90u;
            goto label_4c9f90;
        }
    }
    ctx->pc = 0x4C9E4Cu;
label_4c9e4c:
    // 0x4c9e4c: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4c9e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
label_4c9e50:
    // 0x4c9e50: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x4c9e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4c9e54:
    // 0x4c9e54: 0x266f2860  addiu       $t7, $s3, 0x2860
    ctx->pc = 0x4c9e54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 10336));
label_4c9e58:
    // 0x4c9e58: 0x69eb0007  ldl         $t3, 0x7($t7)
    ctx->pc = 0x4c9e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4c9e5c:
    // 0x4c9e5c: 0x6deb0000  ldr         $t3, 0x0($t7)
    ctx->pc = 0x4c9e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4c9e60:
    // 0x4c9e60: 0x69ed000f  ldl         $t5, 0xF($t7)
    ctx->pc = 0x4c9e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_4c9e64:
    // 0x4c9e64: 0x6ded0008  ldr         $t5, 0x8($t7)
    ctx->pc = 0x4c9e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_4c9e68:
    // 0x4c9e68: 0x69ee0017  ldl         $t6, 0x17($t7)
    ctx->pc = 0x4c9e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4c9e6c:
    // 0x4c9e6c: 0x6dee0010  ldr         $t6, 0x10($t7)
    ctx->pc = 0x4c9e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_4c9e70:
    // 0x4c9e70: 0xb3ab0037  sdl         $t3, 0x37($sp)
    ctx->pc = 0x4c9e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9e74:
    // 0x4c9e74: 0xb7ab0030  sdr         $t3, 0x30($sp)
    ctx->pc = 0x4c9e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9e78:
    // 0x4c9e78: 0xb3ad003f  sdl         $t5, 0x3F($sp)
    ctx->pc = 0x4c9e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9e7c:
    // 0x4c9e7c: 0xb7ad0038  sdr         $t5, 0x38($sp)
    ctx->pc = 0x4c9e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9e80:
    // 0x4c9e80: 0xb3ae0047  sdl         $t6, 0x47($sp)
    ctx->pc = 0x4c9e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9e84:
    // 0x4c9e84: 0xb7ae0040  sdr         $t6, 0x40($sp)
    ctx->pc = 0x4c9e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9e88:
    // 0x4c9e88: 0x69eb001f  ldl         $t3, 0x1F($t7)
    ctx->pc = 0x4c9e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4c9e8c:
    // 0x4c9e8c: 0x6deb0018  ldr         $t3, 0x18($t7)
    ctx->pc = 0x4c9e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4c9e90:
    // 0x4c9e90: 0x69ed0027  ldl         $t5, 0x27($t7)
    ctx->pc = 0x4c9e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_4c9e94:
    // 0x4c9e94: 0x6ded0020  ldr         $t5, 0x20($t7)
    ctx->pc = 0x4c9e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_4c9e98:
    // 0x4c9e98: 0xb3ab004f  sdl         $t3, 0x4F($sp)
    ctx->pc = 0x4c9e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9e9c:
    // 0x4c9e9c: 0xb7ab0048  sdr         $t3, 0x48($sp)
    ctx->pc = 0x4c9e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ea0:
    // 0x4c9ea0: 0xb3ad0057  sdl         $t5, 0x57($sp)
    ctx->pc = 0x4c9ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ea4:
    // 0x4c9ea4: 0xb7ad0050  sdr         $t5, 0x50($sp)
    ctx->pc = 0x4c9ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9ea8:
    // 0x4c9ea8: 0x26702860  addiu       $s0, $s3, 0x2860
    ctx->pc = 0x4c9ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 10336));
label_4c9eac:
    // 0x4c9eac: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x4c9eacu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
label_4c9eb0:
    // 0x4c9eb0: 0x8d624478  lw          $v0, 0x4478($t3)
    ctx->pc = 0x4c9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 17528)));
label_4c9eb4:
    // 0x4c9eb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c9eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c9eb8:
    // 0x4c9eb8: 0x7fab00e0  sq          $t3, 0xE0($sp)
    ctx->pc = 0x4c9eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 11));
label_4c9ebc:
    // 0x4c9ebc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4c9ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4c9ec0:
    // 0x4c9ec0: 0x7fac00f0  sq          $t4, 0xF0($sp)
    ctx->pc = 0x4c9ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 12));
label_4c9ec4:
    // 0x4c9ec4: 0x40f809  jalr        $v0
label_4c9ec8:
    if (ctx->pc == 0x4C9EC8u) {
        ctx->pc = 0x4C9EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9EC4u;
        // 0x4c9ec8: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9ECCu;
        goto label_4c9ecc;
    }
    ctx->pc = 0x4C9EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C9ECCu);
        ctx->pc = 0x4C9EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9EC4u;
        // 0x4c9ec8: 0x7fb90110  sq          $t9, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9EC4u, 0x4C9ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C9ECCu;
label_4c9ecc:
    // 0x4c9ecc: 0x7bac00f0  lq          $t4, 0xF0($sp)
    ctx->pc = 0x4c9eccu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4c9ed0:
    // 0x4c9ed0: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x4c9ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_4c9ed4:
    // 0x4c9ed4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4c9ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c9ed8:
    // 0x4c9ed8: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x4c9ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4c9edc:
    // 0x4c9edc: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x4c9edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c9ee0:
    // 0x4c9ee0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x4c9ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_4c9ee4:
    // 0x4c9ee4: 0x7bb90110  lq          $t9, 0x110($sp)
    ctx->pc = 0x4c9ee4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4c9ee8:
    // 0x4c9ee8: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4c9ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4c9eec:
    // 0x4c9eec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4c9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4c9ef0:
    // 0x4c9ef0: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x4c9ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4c9ef4:
    // 0x4c9ef4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4c9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4c9ef8:
    // 0x4c9ef8: 0xd54821  addu        $t1, $a2, $s5
    ctx->pc = 0x4c9ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4c9efc:
    // 0x4c9efc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4c9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4c9f00:
    // 0x4c9f00: 0xf52821  addu        $a1, $a3, $s5
    ctx->pc = 0x4c9f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_4c9f04:
    // 0x4c9f04: 0x992021  addu        $a0, $a0, $t9
    ctx->pc = 0x4c9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_4c9f08:
    // 0x4c9f08: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x4c9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c9f0c:
    // 0x4c9f0c: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x4c9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_4c9f10:
    // 0x4c9f10: 0xae09000c  sw          $t1, 0xC($s0)
    ctx->pc = 0x4c9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_4c9f14:
    // 0x4c9f14: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x4c9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_4c9f18:
    // 0x4c9f18: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4c9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4c9f1c:
    // 0x4c9f1c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4c9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_4c9f20:
    // 0x4c9f20: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c9f24:
    // 0x4c9f24: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4c9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_4c9f28:
    // 0x4c9f28: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x4c9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_4c9f2c:
    // 0x4c9f2c: 0xae682860  sw          $t0, 0x2860($s3)
    ctx->pc = 0x4c9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10336), GPR_U32(ctx, 8));
label_4c9f30:
    // 0x4c9f30: 0x641ffdf  bgez        $s2, . + 4 + (-0x21 << 2)
label_4c9f34:
    if (ctx->pc == 0x4C9F34u) {
        ctx->pc = 0x4C9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9F30u;
        // 0x4c9f34: 0x7bab00e0  lq          $t3, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C9F38u;
        goto label_4c9f38;
    }
    ctx->pc = 0x4C9F30u;
    {
        const bool branch_taken_0x4c9f30 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4C9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9F30u;
        // 0x4c9f34: 0x7bab00e0  lq          $t3, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9f30) {
            ctx->pc = 0x4C9EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c9eb0;
        }
    }
    ctx->pc = 0x4C9F38u;
label_4c9f38:
    // 0x4c9f38: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c9f3c:
    // 0x4c9f3c: 0x24462860  addiu       $a2, $v0, 0x2860
    ctx->pc = 0x4c9f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10336));
label_4c9f40:
    // 0x4c9f40: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x4c9f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c9f44:
    // 0x4c9f44: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x4c9f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c9f48:
    // 0x4c9f48: 0x6ba4003f  ldl         $a0, 0x3F($sp)
    ctx->pc = 0x4c9f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c9f4c:
    // 0x4c9f4c: 0x6fa40038  ldr         $a0, 0x38($sp)
    ctx->pc = 0x4c9f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c9f50:
    // 0x4c9f50: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x4c9f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4c9f54:
    // 0x4c9f54: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x4c9f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4c9f58:
    // 0x4c9f58: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4c9f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f5c:
    // 0x4c9f5c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4c9f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f60:
    // 0x4c9f60: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x4c9f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f64:
    // 0x4c9f64: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x4c9f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f68:
    // 0x4c9f68: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x4c9f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f6c:
    // 0x4c9f6c: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x4c9f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f70:
    // 0x4c9f70: 0x6ba3004f  ldl         $v1, 0x4F($sp)
    ctx->pc = 0x4c9f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c9f74:
    // 0x4c9f74: 0x6fa30048  ldr         $v1, 0x48($sp)
    ctx->pc = 0x4c9f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c9f78:
    // 0x4c9f78: 0x6ba40057  ldl         $a0, 0x57($sp)
    ctx->pc = 0x4c9f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4c9f7c:
    // 0x4c9f7c: 0x6fa40050  ldr         $a0, 0x50($sp)
    ctx->pc = 0x4c9f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4c9f80:
    // 0x4c9f80: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x4c9f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f84:
    // 0x4c9f84: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x4c9f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f88:
    // 0x4c9f88: 0xb0c40027  sdl         $a0, 0x27($a2)
    ctx->pc = 0x4c9f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f8c:
    // 0x4c9f8c: 0xb4c40020  sdr         $a0, 0x20($a2)
    ctx->pc = 0x4c9f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c9f90:
    // 0x4c9f90: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x4c9f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_4c9f94:
    // 0x4c9f94: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x4c9f94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
label_4c9f98:
    // 0x4c9f98: 0x8ee8000c  lw          $t0, 0xC($s7)
    ctx->pc = 0x4c9f98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_4c9f9c:
    // 0x4c9f9c: 0x8ee90018  lw          $t1, 0x18($s7)
    ctx->pc = 0x4c9f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_4c9fa0:
    // 0x4c9fa0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4c9fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4c9fa4:
    // 0x4c9fa4: 0x8ee7001c  lw          $a3, 0x1C($s7)
    ctx->pc = 0x4c9fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
label_4c9fa8:
    // 0x4c9fa8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4c9fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_4c9fac:
    // 0x4c9fac: 0x8ee50010  lw          $a1, 0x10($s7)
    ctx->pc = 0x4c9facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_4c9fb0:
    // 0x4c9fb0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4c9fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4c9fb4:
    // 0x4c9fb4: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x4c9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_4c9fb8:
    // 0x4c9fb8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4c9fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4c9fbc:
    // 0x4c9fbc: 0x8d432860  lw          $v1, 0x2860($t2)
    ctx->pc = 0x4c9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10336)));
label_4c9fc0:
    // 0x4c9fc0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4c9fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_4c9fc4:
    // 0x4c9fc4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x4c9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4c9fc8:
    // 0x4c9fc8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4c9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4c9fcc:
    // 0x4c9fcc: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x4c9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4c9fd0:
    // 0x4c9fd0: 0xaee60008  sw          $a2, 0x8($s7)
    ctx->pc = 0x4c9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 6));
label_4c9fd4:
    // 0x4c9fd4: 0xaee8000c  sw          $t0, 0xC($s7)
    ctx->pc = 0x4c9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 8));
label_4c9fd8:
    // 0x4c9fd8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4c9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4c9fdc:
    // 0x4c9fdc: 0xaee90018  sw          $t1, 0x18($s7)
    ctx->pc = 0x4c9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 9));
label_4c9fe0:
    // 0x4c9fe0: 0xaee7001c  sw          $a3, 0x1C($s7)
    ctx->pc = 0x4c9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 7));
label_4c9fe4:
    // 0x4c9fe4: 0xaee50010  sw          $a1, 0x10($s7)
    ctx->pc = 0x4c9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 5));
label_4c9fe8:
    // 0x4c9fe8: 0xaee40014  sw          $a0, 0x14($s7)
    ctx->pc = 0x4c9fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 4));
label_4c9fec:
    // 0x4c9fec: 0xad432860  sw          $v1, 0x2860($t2)
    ctx->pc = 0x4c9fecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 10336), GPR_U32(ctx, 3));
label_4c9ff0:
    // 0x4c9ff0: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x4c9ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
label_4c9ff4:
    // 0x4c9ff4: 0x8fad0090  lw          $t5, 0x90($sp)
    ctx->pc = 0x4c9ff4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4c9ff8:
    // 0x4c9ff8: 0x8ee9000c  lw          $t1, 0xC($s7)
    ctx->pc = 0x4c9ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_4c9ffc:
    // 0x4c9ffc: 0x8ee7001c  lw          $a3, 0x1C($s7)
    ctx->pc = 0x4c9ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
label_4ca000:
    // 0x4ca000: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x4ca000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_4ca004:
    // 0x4ca004: 0x8fae0098  lw          $t6, 0x98($sp)
    ctx->pc = 0x4ca004u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4ca008:
    // 0x4ca008: 0x8faf0094  lw          $t7, 0x94($sp)
    ctx->pc = 0x4ca008u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4ca00c:
    // 0x4ca00c: 0x1352821  addu        $a1, $t1, $s5
    ctx->pc = 0x4ca00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
label_4ca010:
    // 0x4ca010: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x4ca010u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4ca014:
    // 0x4ca014: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x4ca014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_4ca018:
    // 0x4ca018: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x4ca018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4ca01c:
    // 0x4ca01c: 0xf54021  addu        $t0, $a3, $s5
    ctx->pc = 0x4ca01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_4ca020:
    // 0x4ca020: 0xaee5000c  sw          $a1, 0xC($s7)
    ctx->pc = 0x4ca020u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 5));
label_4ca024:
    // 0x4ca024: 0x256a000f  addiu       $t2, $t3, 0xF
    ctx->pc = 0x4ca024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
label_4ca028:
    // 0x4ca028: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x4ca028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_4ca02c:
    // 0x4ca02c: 0x8ee60004  lw          $a2, 0x4($s7)
    ctx->pc = 0x4ca02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4ca030:
    // 0x4ca030: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x4ca030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_4ca034:
    // 0x4ca034: 0xaa502a  slt         $t2, $a1, $t2
    ctx->pc = 0x4ca034u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_4ca038:
    // 0x4ca038: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x4ca038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_4ca03c:
    // 0x4ca03c: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x4ca03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_4ca040:
    // 0x4ca040: 0xaee8001c  sw          $t0, 0x1C($s7)
    ctx->pc = 0x4ca040u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 8));
label_4ca044:
    // 0x4ca044: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x4ca044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
label_4ca048:
    // 0x4ca048: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4ca048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4ca04c:
    // 0x4ca04c: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x4ca04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
label_4ca050:
    // 0x4ca050: 0x8fad0084  lw          $t5, 0x84($sp)
    ctx->pc = 0x4ca050u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_4ca054:
    // 0x4ca054: 0x3c0e0053  lui         $t6, 0x53
    ctx->pc = 0x4ca054u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)83 << 16));
label_4ca058:
    // 0x4ca058: 0xaee40010  sw          $a0, 0x10($s7)
    ctx->pc = 0x4ca058u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 4));
label_4ca05c:
    // 0x4ca05c: 0xaee30014  sw          $v1, 0x14($s7)
    ctx->pc = 0x4ca05cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 3));
label_4ca060:
    // 0x4ca060: 0x22d8821  addu        $s1, $s1, $t5
    ctx->pc = 0x4ca060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
label_4ca064:
    // 0x4ca064: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x4ca064u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
label_4ca068:
    // 0x4ca068: 0xaee90008  sw          $t1, 0x8($s7)
    ctx->pc = 0x4ca068u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 9));
label_4ca06c:
    // 0x4ca06c: 0xaee70018  sw          $a3, 0x18($s7)
    ctx->pc = 0x4ca06cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 7));
label_4ca070:
    // 0x4ca070: 0x1140fe11  beqz        $t2, . + 4 + (-0x1EF << 2)
label_4ca074:
    if (ctx->pc == 0x4CA074u) {
        ctx->pc = 0x4CA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA070u;
        // 0x4ca074: 0xadc62860  sw          $a2, 0x2860($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 10336), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA078u;
        goto label_4ca078;
    }
    ctx->pc = 0x4CA070u;
    {
        const bool branch_taken_0x4ca070 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA070u;
        // 0x4ca074: 0xadc62860  sw          $a2, 0x2860($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 10336), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca070) {
            ctx->pc = 0x4C98B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c98b8;
        }
    }
    ctx->pc = 0x4CA078u;
label_4ca078:
    // 0x4ca078: 0x8faf00c4  lw          $t7, 0xC4($sp)
    ctx->pc = 0x4ca078u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_4ca07c:
    // 0x4ca07c: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_4ca080:
    if (ctx->pc == 0x4CA080u) {
        ctx->pc = 0x4CA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA07Cu;
        // 0x4ca080: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA084u;
        goto label_4ca084;
    }
    ctx->pc = 0x4CA07Cu;
    {
        const bool branch_taken_0x4ca07c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA07Cu;
        // 0x4ca080: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca07c) {
            ctx->pc = 0x4CA0F4u;
            goto label_4ca0f4;
        }
    }
    ctx->pc = 0x4CA084u;
label_4ca084:
    // 0x4ca084: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4ca084u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4ca088:
    // 0x4ca088: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x4ca088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4ca08c:
    // 0x4ca08c: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x4ca08cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
label_4ca090:
    // 0x4ca090: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4ca090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4ca094:
    // 0x4ca094: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x4ca094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4ca098:
    // 0x4ca098: 0x894824  and         $t1, $a0, $t1
    ctx->pc = 0x4ca098u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
label_4ca09c:
    // 0x4ca09c: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x4ca09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4ca0a0:
    // 0x4ca0a0: 0x895823  subu        $t3, $a0, $t1
    ctx->pc = 0x4ca0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_4ca0a4:
    // 0x4ca0a4: 0x400013  mtlo        $v0
    ctx->pc = 0x4ca0a4u;
    ctx->lo = GPR_U64(ctx, 2);
label_4ca0a8:
    // 0x4ca0a8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x4ca0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_4ca0ac:
    // 0x4ca0ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x4ca0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4ca0b0:
    // 0x4ca0b0: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x4ca0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4ca0b4:
    // 0x4ca0b4: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x4ca0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4ca0b8:
    // 0x4ca0b8: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x4ca0b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4ca0bc:
    // 0x4ca0bc: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4ca0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_4ca0c0:
    // 0x4ca0c0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4ca0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_4ca0c4:
    // 0x4ca0c4: 0x71222800  madd        $a1, $t1, $v0
    ctx->pc = 0x4ca0c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4ca0c8:
    // 0x4ca0c8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x4ca0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4ca0cc:
    // 0x4ca0cc: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x4ca0ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_4ca0d0:
    // 0x4ca0d0: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x4ca0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_4ca0d4:
    // 0x4ca0d4: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x4ca0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
label_4ca0d8:
    // 0x4ca0d8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4ca0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4ca0dc:
    // 0x4ca0dc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x4ca0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_4ca0e0:
    // 0x4ca0e0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x4ca0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4ca0e4:
    // 0x4ca0e4: 0x8fa8007c  lw          $t0, 0x7C($sp)
    ctx->pc = 0x4ca0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_4ca0e8:
    // 0x4ca0e8: 0x8faa0170  lw          $t2, 0x170($sp)
    ctx->pc = 0x4ca0e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4ca0ec:
    // 0x4ca0ec: 0xc1323fe  jal         func_4C8FF8
label_4ca0f0:
    if (ctx->pc == 0x4CA0F0u) {
        ctx->pc = 0x4CA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA0ECu;
        // 0x4ca0f0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA0F4u;
        goto label_4ca0f4;
    }
    ctx->pc = 0x4CA0ECu;
    SET_GPR_U32(ctx, 31, 0x4CA0F4u);
    ctx->pc = 0x4CA0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA0ECu;
    // 0x4ca0f0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8FF8u, 0x4CA0ECu, 0x4CA0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA0F4u;
label_4ca0f4:
    // 0x4ca0f4: 0x8fab00c8  lw          $t3, 0xC8($sp)
    ctx->pc = 0x4ca0f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_4ca0f8:
    // 0x4ca0f8: 0x11600029  beqz        $t3, . + 4 + (0x29 << 2)
label_4ca0fc:
    if (ctx->pc == 0x4CA0FCu) {
        ctx->pc = 0x4CA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA0F8u;
        // 0x4ca0fc: 0x8fa60180  lw          $a2, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA100u;
        goto label_4ca100;
    }
    ctx->pc = 0x4CA0F8u;
    {
        const bool branch_taken_0x4ca0f8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA0F8u;
        // 0x4ca0fc: 0x8fa60180  lw          $a2, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca0f8) {
            ctx->pc = 0x4CA1A0u;
            goto label_4ca1a0;
        }
    }
    ctx->pc = 0x4CA100u;
label_4ca100:
    // 0x4ca100: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4ca100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4ca104:
    // 0x4ca104: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x4ca104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_4ca108:
    // 0x4ca108: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x4ca108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
label_4ca10c:
    // 0x4ca10c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x4ca10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_4ca110:
    // 0x4ca110: 0xc13399c  jal         func_4CE670
label_4ca114:
    if (ctx->pc == 0x4CA114u) {
        ctx->pc = 0x4CA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA110u;
        // 0x4ca114: 0x24b1ffff  addiu       $s1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA118u;
        goto label_4ca118;
    }
    ctx->pc = 0x4CA110u;
    SET_GPR_U32(ctx, 31, 0x4CA118u);
    ctx->pc = 0x4CA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA110u;
    // 0x4ca114: 0x24b1ffff  addiu       $s1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4CA110u, 0x4CA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA118u;
label_4ca118:
    // 0x4ca118: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x4ca118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4ca11c:
    // 0x4ca11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ca11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca120:
    // 0x4ca120: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x4ca120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4ca124:
    // 0x4ca124: 0x750018  mult        $zero, $v1, $s5
    ctx->pc = 0x4ca124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4ca128:
    // 0x4ca128: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x4ca128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_4ca12c:
    // 0x4ca12c: 0x3012  mflo        $a2
    ctx->pc = 0x4ca12cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4ca130:
    // 0x4ca130: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x4ca130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4ca134:
    // 0x4ca134: 0x2812  mflo        $a1
    ctx->pc = 0x4ca134u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4ca138:
    // 0x4ca138: 0xc13399c  jal         func_4CE670
label_4ca13c:
    if (ctx->pc == 0x4CA13Cu) {
        ctx->pc = 0x4CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA138u;
        // 0x4ca13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA140u;
        goto label_4ca140;
    }
    ctx->pc = 0x4CA138u;
    SET_GPR_U32(ctx, 31, 0x4CA140u);
    ctx->pc = 0x4CA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA138u;
    // 0x4ca13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4CA138u, 0x4CA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA140u;
label_4ca140:
    // 0x4ca140: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x4ca140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4ca144:
    // 0x4ca144: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x4ca144u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4ca148:
    // 0x4ca148: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x4ca148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_4ca14c:
    // 0x4ca14c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4ca14cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4ca150:
    // 0x4ca150: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x4ca150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4ca154:
    // 0x4ca154: 0x905021  addu        $t2, $a0, $s0
    ctx->pc = 0x4ca154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4ca158:
    // 0x4ca158: 0x8fab0198  lw          $t3, 0x198($sp)
    ctx->pc = 0x4ca158u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_4ca15c:
    // 0x4ca15c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x4ca15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_4ca160:
    // 0x4ca160: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x4ca160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_4ca164:
    // 0x4ca164: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x4ca164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_4ca168:
    // 0x4ca168: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x4ca168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ca16c:
    // 0x4ca16c: 0xafab0018  sw          $t3, 0x18($sp)
    ctx->pc = 0x4ca16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 11));
label_4ca170:
    // 0x4ca170: 0x8fad01a0  lw          $t5, 0x1A0($sp)
    ctx->pc = 0x4ca170u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4ca174:
    // 0x4ca174: 0x8fae01a8  lw          $t6, 0x1A8($sp)
    ctx->pc = 0x4ca174u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_4ca178:
    // 0x4ca178: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4ca178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4ca17c:
    // 0x4ca17c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x4ca17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4ca180:
    // 0x4ca180: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x4ca180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4ca184:
    // 0x4ca184: 0x8fa8007c  lw          $t0, 0x7C($sp)
    ctx->pc = 0x4ca184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_4ca188:
    // 0x4ca188: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x4ca188u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4ca18c:
    // 0x4ca18c: 0x8fab0178  lw          $t3, 0x178($sp)
    ctx->pc = 0x4ca18cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4ca190:
    // 0x4ca190: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x4ca190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_4ca194:
    // 0x4ca194: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x4ca194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
label_4ca198:
    // 0x4ca198: 0xc1323fe  jal         func_4C8FF8
label_4ca19c:
    if (ctx->pc == 0x4CA19Cu) {
        ctx->pc = 0x4CA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA198u;
        // 0x4ca19c: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA1A0u;
        goto label_4ca1a0;
    }
    ctx->pc = 0x4CA198u;
    SET_GPR_U32(ctx, 31, 0x4CA1A0u);
    ctx->pc = 0x4CA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA198u;
    // 0x4ca19c: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8FF8u, 0x4CA198u, 0x4CA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA1A0u;
label_4ca1a0:
    // 0x4ca1a0: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x4ca1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_4ca1a4:
    // 0x4ca1a4: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x4ca1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_4ca1a8:
    // 0x4ca1a8: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x4ca1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_4ca1ac:
    // 0x4ca1ac: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x4ca1acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_4ca1b0:
    // 0x4ca1b0: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x4ca1b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_4ca1b4:
    // 0x4ca1b4: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x4ca1b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_4ca1b8:
    // 0x4ca1b8: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x4ca1b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_4ca1bc:
    // 0x4ca1bc: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x4ca1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_4ca1c0:
    // 0x4ca1c0: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x4ca1c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_4ca1c4:
    // 0x4ca1c4: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x4ca1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_4ca1c8:
    // 0x4ca1c8: 0x3e00008  jr          $ra
label_4ca1cc:
    if (ctx->pc == 0x4CA1CCu) {
        ctx->pc = 0x4CA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA1C8u;
        // 0x4ca1cc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA1D0u;
        goto label_fallthrough_0x4ca1c8;
    }
    ctx->pc = 0x4CA1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA1C8u;
        // 0x4ca1cc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ca1c8:
    ctx->pc = 0x4CA1D0u;
}
