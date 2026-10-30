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

// Function: sub_002A9508
// Address: 0x2a9508 - 0x2a9d58
void sub_002A9508_0x2a9508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9508_0x2a9508");
#endif

    switch (ctx->pc) {
        case 0x2a9508u: goto label_2a9508;
        case 0x2a950cu: goto label_2a950c;
        case 0x2a9510u: goto label_2a9510;
        case 0x2a9514u: goto label_2a9514;
        case 0x2a9518u: goto label_2a9518;
        case 0x2a951cu: goto label_2a951c;
        case 0x2a9520u: goto label_2a9520;
        case 0x2a9524u: goto label_2a9524;
        case 0x2a9528u: goto label_2a9528;
        case 0x2a952cu: goto label_2a952c;
        case 0x2a9530u: goto label_2a9530;
        case 0x2a9534u: goto label_2a9534;
        case 0x2a9538u: goto label_2a9538;
        case 0x2a953cu: goto label_2a953c;
        case 0x2a9540u: goto label_2a9540;
        case 0x2a9544u: goto label_2a9544;
        case 0x2a9548u: goto label_2a9548;
        case 0x2a954cu: goto label_2a954c;
        case 0x2a9550u: goto label_2a9550;
        case 0x2a9554u: goto label_2a9554;
        case 0x2a9558u: goto label_2a9558;
        case 0x2a955cu: goto label_2a955c;
        case 0x2a9560u: goto label_2a9560;
        case 0x2a9564u: goto label_2a9564;
        case 0x2a9568u: goto label_2a9568;
        case 0x2a956cu: goto label_2a956c;
        case 0x2a9570u: goto label_2a9570;
        case 0x2a9574u: goto label_2a9574;
        case 0x2a9578u: goto label_2a9578;
        case 0x2a957cu: goto label_2a957c;
        case 0x2a9580u: goto label_2a9580;
        case 0x2a9584u: goto label_2a9584;
        case 0x2a9588u: goto label_2a9588;
        case 0x2a958cu: goto label_2a958c;
        case 0x2a9590u: goto label_2a9590;
        case 0x2a9594u: goto label_2a9594;
        case 0x2a9598u: goto label_2a9598;
        case 0x2a959cu: goto label_2a959c;
        case 0x2a95a0u: goto label_2a95a0;
        case 0x2a95a4u: goto label_2a95a4;
        case 0x2a95a8u: goto label_2a95a8;
        case 0x2a95acu: goto label_2a95ac;
        case 0x2a95b0u: goto label_2a95b0;
        case 0x2a95b4u: goto label_2a95b4;
        case 0x2a95b8u: goto label_2a95b8;
        case 0x2a95bcu: goto label_2a95bc;
        case 0x2a95c0u: goto label_2a95c0;
        case 0x2a95c4u: goto label_2a95c4;
        case 0x2a95c8u: goto label_2a95c8;
        case 0x2a95ccu: goto label_2a95cc;
        case 0x2a95d0u: goto label_2a95d0;
        case 0x2a95d4u: goto label_2a95d4;
        case 0x2a95d8u: goto label_2a95d8;
        case 0x2a95dcu: goto label_2a95dc;
        case 0x2a95e0u: goto label_2a95e0;
        case 0x2a95e4u: goto label_2a95e4;
        case 0x2a95e8u: goto label_2a95e8;
        case 0x2a95ecu: goto label_2a95ec;
        case 0x2a95f0u: goto label_2a95f0;
        case 0x2a95f4u: goto label_2a95f4;
        case 0x2a95f8u: goto label_2a95f8;
        case 0x2a95fcu: goto label_2a95fc;
        case 0x2a9600u: goto label_2a9600;
        case 0x2a9604u: goto label_2a9604;
        case 0x2a9608u: goto label_2a9608;
        case 0x2a960cu: goto label_2a960c;
        case 0x2a9610u: goto label_2a9610;
        case 0x2a9614u: goto label_2a9614;
        case 0x2a9618u: goto label_2a9618;
        case 0x2a961cu: goto label_2a961c;
        case 0x2a9620u: goto label_2a9620;
        case 0x2a9624u: goto label_2a9624;
        case 0x2a9628u: goto label_2a9628;
        case 0x2a962cu: goto label_2a962c;
        case 0x2a9630u: goto label_2a9630;
        case 0x2a9634u: goto label_2a9634;
        case 0x2a9638u: goto label_2a9638;
        case 0x2a963cu: goto label_2a963c;
        case 0x2a9640u: goto label_2a9640;
        case 0x2a9644u: goto label_2a9644;
        case 0x2a9648u: goto label_2a9648;
        case 0x2a964cu: goto label_2a964c;
        case 0x2a9650u: goto label_2a9650;
        case 0x2a9654u: goto label_2a9654;
        case 0x2a9658u: goto label_2a9658;
        case 0x2a965cu: goto label_2a965c;
        case 0x2a9660u: goto label_2a9660;
        case 0x2a9664u: goto label_2a9664;
        case 0x2a9668u: goto label_2a9668;
        case 0x2a966cu: goto label_2a966c;
        case 0x2a9670u: goto label_2a9670;
        case 0x2a9674u: goto label_2a9674;
        case 0x2a9678u: goto label_2a9678;
        case 0x2a967cu: goto label_2a967c;
        case 0x2a9680u: goto label_2a9680;
        case 0x2a9684u: goto label_2a9684;
        case 0x2a9688u: goto label_2a9688;
        case 0x2a968cu: goto label_2a968c;
        case 0x2a9690u: goto label_2a9690;
        case 0x2a9694u: goto label_2a9694;
        case 0x2a9698u: goto label_2a9698;
        case 0x2a969cu: goto label_2a969c;
        case 0x2a96a0u: goto label_2a96a0;
        case 0x2a96a4u: goto label_2a96a4;
        case 0x2a96a8u: goto label_2a96a8;
        case 0x2a96acu: goto label_2a96ac;
        case 0x2a96b0u: goto label_2a96b0;
        case 0x2a96b4u: goto label_2a96b4;
        case 0x2a96b8u: goto label_2a96b8;
        case 0x2a96bcu: goto label_2a96bc;
        case 0x2a96c0u: goto label_2a96c0;
        case 0x2a96c4u: goto label_2a96c4;
        case 0x2a96c8u: goto label_2a96c8;
        case 0x2a96ccu: goto label_2a96cc;
        case 0x2a96d0u: goto label_2a96d0;
        case 0x2a96d4u: goto label_2a96d4;
        case 0x2a96d8u: goto label_2a96d8;
        case 0x2a96dcu: goto label_2a96dc;
        case 0x2a96e0u: goto label_2a96e0;
        case 0x2a96e4u: goto label_2a96e4;
        case 0x2a96e8u: goto label_2a96e8;
        case 0x2a96ecu: goto label_2a96ec;
        case 0x2a96f0u: goto label_2a96f0;
        case 0x2a96f4u: goto label_2a96f4;
        case 0x2a96f8u: goto label_2a96f8;
        case 0x2a96fcu: goto label_2a96fc;
        case 0x2a9700u: goto label_2a9700;
        case 0x2a9704u: goto label_2a9704;
        case 0x2a9708u: goto label_2a9708;
        case 0x2a970cu: goto label_2a970c;
        case 0x2a9710u: goto label_2a9710;
        case 0x2a9714u: goto label_2a9714;
        case 0x2a9718u: goto label_2a9718;
        case 0x2a971cu: goto label_2a971c;
        case 0x2a9720u: goto label_2a9720;
        case 0x2a9724u: goto label_2a9724;
        case 0x2a9728u: goto label_2a9728;
        case 0x2a972cu: goto label_2a972c;
        case 0x2a9730u: goto label_2a9730;
        case 0x2a9734u: goto label_2a9734;
        case 0x2a9738u: goto label_2a9738;
        case 0x2a973cu: goto label_2a973c;
        case 0x2a9740u: goto label_2a9740;
        case 0x2a9744u: goto label_2a9744;
        case 0x2a9748u: goto label_2a9748;
        case 0x2a974cu: goto label_2a974c;
        case 0x2a9750u: goto label_2a9750;
        case 0x2a9754u: goto label_2a9754;
        case 0x2a9758u: goto label_2a9758;
        case 0x2a975cu: goto label_2a975c;
        case 0x2a9760u: goto label_2a9760;
        case 0x2a9764u: goto label_2a9764;
        case 0x2a9768u: goto label_2a9768;
        case 0x2a976cu: goto label_2a976c;
        case 0x2a9770u: goto label_2a9770;
        case 0x2a9774u: goto label_2a9774;
        case 0x2a9778u: goto label_2a9778;
        case 0x2a977cu: goto label_2a977c;
        case 0x2a9780u: goto label_2a9780;
        case 0x2a9784u: goto label_2a9784;
        case 0x2a9788u: goto label_2a9788;
        case 0x2a978cu: goto label_2a978c;
        case 0x2a9790u: goto label_2a9790;
        case 0x2a9794u: goto label_2a9794;
        case 0x2a9798u: goto label_2a9798;
        case 0x2a979cu: goto label_2a979c;
        case 0x2a97a0u: goto label_2a97a0;
        case 0x2a97a4u: goto label_2a97a4;
        case 0x2a97a8u: goto label_2a97a8;
        case 0x2a97acu: goto label_2a97ac;
        case 0x2a97b0u: goto label_2a97b0;
        case 0x2a97b4u: goto label_2a97b4;
        case 0x2a97b8u: goto label_2a97b8;
        case 0x2a97bcu: goto label_2a97bc;
        case 0x2a97c0u: goto label_2a97c0;
        case 0x2a97c4u: goto label_2a97c4;
        case 0x2a97c8u: goto label_2a97c8;
        case 0x2a97ccu: goto label_2a97cc;
        case 0x2a97d0u: goto label_2a97d0;
        case 0x2a97d4u: goto label_2a97d4;
        case 0x2a97d8u: goto label_2a97d8;
        case 0x2a97dcu: goto label_2a97dc;
        case 0x2a97e0u: goto label_2a97e0;
        case 0x2a97e4u: goto label_2a97e4;
        case 0x2a97e8u: goto label_2a97e8;
        case 0x2a97ecu: goto label_2a97ec;
        case 0x2a97f0u: goto label_2a97f0;
        case 0x2a97f4u: goto label_2a97f4;
        case 0x2a97f8u: goto label_2a97f8;
        case 0x2a97fcu: goto label_2a97fc;
        case 0x2a9800u: goto label_2a9800;
        case 0x2a9804u: goto label_2a9804;
        case 0x2a9808u: goto label_2a9808;
        case 0x2a980cu: goto label_2a980c;
        case 0x2a9810u: goto label_2a9810;
        case 0x2a9814u: goto label_2a9814;
        case 0x2a9818u: goto label_2a9818;
        case 0x2a981cu: goto label_2a981c;
        case 0x2a9820u: goto label_2a9820;
        case 0x2a9824u: goto label_2a9824;
        case 0x2a9828u: goto label_2a9828;
        case 0x2a982cu: goto label_2a982c;
        case 0x2a9830u: goto label_2a9830;
        case 0x2a9834u: goto label_2a9834;
        case 0x2a9838u: goto label_2a9838;
        case 0x2a983cu: goto label_2a983c;
        case 0x2a9840u: goto label_2a9840;
        case 0x2a9844u: goto label_2a9844;
        case 0x2a9848u: goto label_2a9848;
        case 0x2a984cu: goto label_2a984c;
        case 0x2a9850u: goto label_2a9850;
        case 0x2a9854u: goto label_2a9854;
        case 0x2a9858u: goto label_2a9858;
        case 0x2a985cu: goto label_2a985c;
        case 0x2a9860u: goto label_2a9860;
        case 0x2a9864u: goto label_2a9864;
        case 0x2a9868u: goto label_2a9868;
        case 0x2a986cu: goto label_2a986c;
        case 0x2a9870u: goto label_2a9870;
        case 0x2a9874u: goto label_2a9874;
        case 0x2a9878u: goto label_2a9878;
        case 0x2a987cu: goto label_2a987c;
        case 0x2a9880u: goto label_2a9880;
        case 0x2a9884u: goto label_2a9884;
        case 0x2a9888u: goto label_2a9888;
        case 0x2a988cu: goto label_2a988c;
        case 0x2a9890u: goto label_2a9890;
        case 0x2a9894u: goto label_2a9894;
        case 0x2a9898u: goto label_2a9898;
        case 0x2a989cu: goto label_2a989c;
        case 0x2a98a0u: goto label_2a98a0;
        case 0x2a98a4u: goto label_2a98a4;
        case 0x2a98a8u: goto label_2a98a8;
        case 0x2a98acu: goto label_2a98ac;
        case 0x2a98b0u: goto label_2a98b0;
        case 0x2a98b4u: goto label_2a98b4;
        case 0x2a98b8u: goto label_2a98b8;
        case 0x2a98bcu: goto label_2a98bc;
        case 0x2a98c0u: goto label_2a98c0;
        case 0x2a98c4u: goto label_2a98c4;
        case 0x2a98c8u: goto label_2a98c8;
        case 0x2a98ccu: goto label_2a98cc;
        case 0x2a98d0u: goto label_2a98d0;
        case 0x2a98d4u: goto label_2a98d4;
        case 0x2a98d8u: goto label_2a98d8;
        case 0x2a98dcu: goto label_2a98dc;
        case 0x2a98e0u: goto label_2a98e0;
        case 0x2a98e4u: goto label_2a98e4;
        case 0x2a98e8u: goto label_2a98e8;
        case 0x2a98ecu: goto label_2a98ec;
        case 0x2a98f0u: goto label_2a98f0;
        case 0x2a98f4u: goto label_2a98f4;
        case 0x2a98f8u: goto label_2a98f8;
        case 0x2a98fcu: goto label_2a98fc;
        case 0x2a9900u: goto label_2a9900;
        case 0x2a9904u: goto label_2a9904;
        case 0x2a9908u: goto label_2a9908;
        case 0x2a990cu: goto label_2a990c;
        case 0x2a9910u: goto label_2a9910;
        case 0x2a9914u: goto label_2a9914;
        case 0x2a9918u: goto label_2a9918;
        case 0x2a991cu: goto label_2a991c;
        case 0x2a9920u: goto label_2a9920;
        case 0x2a9924u: goto label_2a9924;
        case 0x2a9928u: goto label_2a9928;
        case 0x2a992cu: goto label_2a992c;
        case 0x2a9930u: goto label_2a9930;
        case 0x2a9934u: goto label_2a9934;
        case 0x2a9938u: goto label_2a9938;
        case 0x2a993cu: goto label_2a993c;
        case 0x2a9940u: goto label_2a9940;
        case 0x2a9944u: goto label_2a9944;
        case 0x2a9948u: goto label_2a9948;
        case 0x2a994cu: goto label_2a994c;
        case 0x2a9950u: goto label_2a9950;
        case 0x2a9954u: goto label_2a9954;
        case 0x2a9958u: goto label_2a9958;
        case 0x2a995cu: goto label_2a995c;
        case 0x2a9960u: goto label_2a9960;
        case 0x2a9964u: goto label_2a9964;
        case 0x2a9968u: goto label_2a9968;
        case 0x2a996cu: goto label_2a996c;
        case 0x2a9970u: goto label_2a9970;
        case 0x2a9974u: goto label_2a9974;
        case 0x2a9978u: goto label_2a9978;
        case 0x2a997cu: goto label_2a997c;
        case 0x2a9980u: goto label_2a9980;
        case 0x2a9984u: goto label_2a9984;
        case 0x2a9988u: goto label_2a9988;
        case 0x2a998cu: goto label_2a998c;
        case 0x2a9990u: goto label_2a9990;
        case 0x2a9994u: goto label_2a9994;
        case 0x2a9998u: goto label_2a9998;
        case 0x2a999cu: goto label_2a999c;
        case 0x2a99a0u: goto label_2a99a0;
        case 0x2a99a4u: goto label_2a99a4;
        case 0x2a99a8u: goto label_2a99a8;
        case 0x2a99acu: goto label_2a99ac;
        case 0x2a99b0u: goto label_2a99b0;
        case 0x2a99b4u: goto label_2a99b4;
        case 0x2a99b8u: goto label_2a99b8;
        case 0x2a99bcu: goto label_2a99bc;
        case 0x2a99c0u: goto label_2a99c0;
        case 0x2a99c4u: goto label_2a99c4;
        case 0x2a99c8u: goto label_2a99c8;
        case 0x2a99ccu: goto label_2a99cc;
        case 0x2a99d0u: goto label_2a99d0;
        case 0x2a99d4u: goto label_2a99d4;
        case 0x2a99d8u: goto label_2a99d8;
        case 0x2a99dcu: goto label_2a99dc;
        case 0x2a99e0u: goto label_2a99e0;
        case 0x2a99e4u: goto label_2a99e4;
        case 0x2a99e8u: goto label_2a99e8;
        case 0x2a99ecu: goto label_2a99ec;
        case 0x2a99f0u: goto label_2a99f0;
        case 0x2a99f4u: goto label_2a99f4;
        case 0x2a99f8u: goto label_2a99f8;
        case 0x2a99fcu: goto label_2a99fc;
        case 0x2a9a00u: goto label_2a9a00;
        case 0x2a9a04u: goto label_2a9a04;
        case 0x2a9a08u: goto label_2a9a08;
        case 0x2a9a0cu: goto label_2a9a0c;
        case 0x2a9a10u: goto label_2a9a10;
        case 0x2a9a14u: goto label_2a9a14;
        case 0x2a9a18u: goto label_2a9a18;
        case 0x2a9a1cu: goto label_2a9a1c;
        case 0x2a9a20u: goto label_2a9a20;
        case 0x2a9a24u: goto label_2a9a24;
        case 0x2a9a28u: goto label_2a9a28;
        case 0x2a9a2cu: goto label_2a9a2c;
        case 0x2a9a30u: goto label_2a9a30;
        case 0x2a9a34u: goto label_2a9a34;
        case 0x2a9a38u: goto label_2a9a38;
        case 0x2a9a3cu: goto label_2a9a3c;
        case 0x2a9a40u: goto label_2a9a40;
        case 0x2a9a44u: goto label_2a9a44;
        case 0x2a9a48u: goto label_2a9a48;
        case 0x2a9a4cu: goto label_2a9a4c;
        case 0x2a9a50u: goto label_2a9a50;
        case 0x2a9a54u: goto label_2a9a54;
        case 0x2a9a58u: goto label_2a9a58;
        case 0x2a9a5cu: goto label_2a9a5c;
        case 0x2a9a60u: goto label_2a9a60;
        case 0x2a9a64u: goto label_2a9a64;
        case 0x2a9a68u: goto label_2a9a68;
        case 0x2a9a6cu: goto label_2a9a6c;
        case 0x2a9a70u: goto label_2a9a70;
        case 0x2a9a74u: goto label_2a9a74;
        case 0x2a9a78u: goto label_2a9a78;
        case 0x2a9a7cu: goto label_2a9a7c;
        case 0x2a9a80u: goto label_2a9a80;
        case 0x2a9a84u: goto label_2a9a84;
        case 0x2a9a88u: goto label_2a9a88;
        case 0x2a9a8cu: goto label_2a9a8c;
        case 0x2a9a90u: goto label_2a9a90;
        case 0x2a9a94u: goto label_2a9a94;
        case 0x2a9a98u: goto label_2a9a98;
        case 0x2a9a9cu: goto label_2a9a9c;
        case 0x2a9aa0u: goto label_2a9aa0;
        case 0x2a9aa4u: goto label_2a9aa4;
        case 0x2a9aa8u: goto label_2a9aa8;
        case 0x2a9aacu: goto label_2a9aac;
        case 0x2a9ab0u: goto label_2a9ab0;
        case 0x2a9ab4u: goto label_2a9ab4;
        case 0x2a9ab8u: goto label_2a9ab8;
        case 0x2a9abcu: goto label_2a9abc;
        case 0x2a9ac0u: goto label_2a9ac0;
        case 0x2a9ac4u: goto label_2a9ac4;
        case 0x2a9ac8u: goto label_2a9ac8;
        case 0x2a9accu: goto label_2a9acc;
        case 0x2a9ad0u: goto label_2a9ad0;
        case 0x2a9ad4u: goto label_2a9ad4;
        case 0x2a9ad8u: goto label_2a9ad8;
        case 0x2a9adcu: goto label_2a9adc;
        case 0x2a9ae0u: goto label_2a9ae0;
        case 0x2a9ae4u: goto label_2a9ae4;
        case 0x2a9ae8u: goto label_2a9ae8;
        case 0x2a9aecu: goto label_2a9aec;
        case 0x2a9af0u: goto label_2a9af0;
        case 0x2a9af4u: goto label_2a9af4;
        case 0x2a9af8u: goto label_2a9af8;
        case 0x2a9afcu: goto label_2a9afc;
        case 0x2a9b00u: goto label_2a9b00;
        case 0x2a9b04u: goto label_2a9b04;
        case 0x2a9b08u: goto label_2a9b08;
        case 0x2a9b0cu: goto label_2a9b0c;
        case 0x2a9b10u: goto label_2a9b10;
        case 0x2a9b14u: goto label_2a9b14;
        case 0x2a9b18u: goto label_2a9b18;
        case 0x2a9b1cu: goto label_2a9b1c;
        case 0x2a9b20u: goto label_2a9b20;
        case 0x2a9b24u: goto label_2a9b24;
        case 0x2a9b28u: goto label_2a9b28;
        case 0x2a9b2cu: goto label_2a9b2c;
        case 0x2a9b30u: goto label_2a9b30;
        case 0x2a9b34u: goto label_2a9b34;
        case 0x2a9b38u: goto label_2a9b38;
        case 0x2a9b3cu: goto label_2a9b3c;
        case 0x2a9b40u: goto label_2a9b40;
        case 0x2a9b44u: goto label_2a9b44;
        case 0x2a9b48u: goto label_2a9b48;
        case 0x2a9b4cu: goto label_2a9b4c;
        case 0x2a9b50u: goto label_2a9b50;
        case 0x2a9b54u: goto label_2a9b54;
        case 0x2a9b58u: goto label_2a9b58;
        case 0x2a9b5cu: goto label_2a9b5c;
        case 0x2a9b60u: goto label_2a9b60;
        case 0x2a9b64u: goto label_2a9b64;
        case 0x2a9b68u: goto label_2a9b68;
        case 0x2a9b6cu: goto label_2a9b6c;
        case 0x2a9b70u: goto label_2a9b70;
        case 0x2a9b74u: goto label_2a9b74;
        case 0x2a9b78u: goto label_2a9b78;
        case 0x2a9b7cu: goto label_2a9b7c;
        case 0x2a9b80u: goto label_2a9b80;
        case 0x2a9b84u: goto label_2a9b84;
        case 0x2a9b88u: goto label_2a9b88;
        case 0x2a9b8cu: goto label_2a9b8c;
        case 0x2a9b90u: goto label_2a9b90;
        case 0x2a9b94u: goto label_2a9b94;
        case 0x2a9b98u: goto label_2a9b98;
        case 0x2a9b9cu: goto label_2a9b9c;
        case 0x2a9ba0u: goto label_2a9ba0;
        case 0x2a9ba4u: goto label_2a9ba4;
        case 0x2a9ba8u: goto label_2a9ba8;
        case 0x2a9bacu: goto label_2a9bac;
        case 0x2a9bb0u: goto label_2a9bb0;
        case 0x2a9bb4u: goto label_2a9bb4;
        case 0x2a9bb8u: goto label_2a9bb8;
        case 0x2a9bbcu: goto label_2a9bbc;
        case 0x2a9bc0u: goto label_2a9bc0;
        case 0x2a9bc4u: goto label_2a9bc4;
        case 0x2a9bc8u: goto label_2a9bc8;
        case 0x2a9bccu: goto label_2a9bcc;
        case 0x2a9bd0u: goto label_2a9bd0;
        case 0x2a9bd4u: goto label_2a9bd4;
        case 0x2a9bd8u: goto label_2a9bd8;
        case 0x2a9bdcu: goto label_2a9bdc;
        case 0x2a9be0u: goto label_2a9be0;
        case 0x2a9be4u: goto label_2a9be4;
        case 0x2a9be8u: goto label_2a9be8;
        case 0x2a9becu: goto label_2a9bec;
        case 0x2a9bf0u: goto label_2a9bf0;
        case 0x2a9bf4u: goto label_2a9bf4;
        case 0x2a9bf8u: goto label_2a9bf8;
        case 0x2a9bfcu: goto label_2a9bfc;
        case 0x2a9c00u: goto label_2a9c00;
        case 0x2a9c04u: goto label_2a9c04;
        case 0x2a9c08u: goto label_2a9c08;
        case 0x2a9c0cu: goto label_2a9c0c;
        case 0x2a9c10u: goto label_2a9c10;
        case 0x2a9c14u: goto label_2a9c14;
        case 0x2a9c18u: goto label_2a9c18;
        case 0x2a9c1cu: goto label_2a9c1c;
        case 0x2a9c20u: goto label_2a9c20;
        case 0x2a9c24u: goto label_2a9c24;
        case 0x2a9c28u: goto label_2a9c28;
        case 0x2a9c2cu: goto label_2a9c2c;
        case 0x2a9c30u: goto label_2a9c30;
        case 0x2a9c34u: goto label_2a9c34;
        case 0x2a9c38u: goto label_2a9c38;
        case 0x2a9c3cu: goto label_2a9c3c;
        case 0x2a9c40u: goto label_2a9c40;
        case 0x2a9c44u: goto label_2a9c44;
        case 0x2a9c48u: goto label_2a9c48;
        case 0x2a9c4cu: goto label_2a9c4c;
        case 0x2a9c50u: goto label_2a9c50;
        case 0x2a9c54u: goto label_2a9c54;
        case 0x2a9c58u: goto label_2a9c58;
        case 0x2a9c5cu: goto label_2a9c5c;
        case 0x2a9c60u: goto label_2a9c60;
        case 0x2a9c64u: goto label_2a9c64;
        case 0x2a9c68u: goto label_2a9c68;
        case 0x2a9c6cu: goto label_2a9c6c;
        case 0x2a9c70u: goto label_2a9c70;
        case 0x2a9c74u: goto label_2a9c74;
        case 0x2a9c78u: goto label_2a9c78;
        case 0x2a9c7cu: goto label_2a9c7c;
        case 0x2a9c80u: goto label_2a9c80;
        case 0x2a9c84u: goto label_2a9c84;
        case 0x2a9c88u: goto label_2a9c88;
        case 0x2a9c8cu: goto label_2a9c8c;
        case 0x2a9c90u: goto label_2a9c90;
        case 0x2a9c94u: goto label_2a9c94;
        case 0x2a9c98u: goto label_2a9c98;
        case 0x2a9c9cu: goto label_2a9c9c;
        case 0x2a9ca0u: goto label_2a9ca0;
        case 0x2a9ca4u: goto label_2a9ca4;
        case 0x2a9ca8u: goto label_2a9ca8;
        case 0x2a9cacu: goto label_2a9cac;
        case 0x2a9cb0u: goto label_2a9cb0;
        case 0x2a9cb4u: goto label_2a9cb4;
        case 0x2a9cb8u: goto label_2a9cb8;
        case 0x2a9cbcu: goto label_2a9cbc;
        case 0x2a9cc0u: goto label_2a9cc0;
        case 0x2a9cc4u: goto label_2a9cc4;
        case 0x2a9cc8u: goto label_2a9cc8;
        case 0x2a9cccu: goto label_2a9ccc;
        case 0x2a9cd0u: goto label_2a9cd0;
        case 0x2a9cd4u: goto label_2a9cd4;
        case 0x2a9cd8u: goto label_2a9cd8;
        case 0x2a9cdcu: goto label_2a9cdc;
        case 0x2a9ce0u: goto label_2a9ce0;
        case 0x2a9ce4u: goto label_2a9ce4;
        case 0x2a9ce8u: goto label_2a9ce8;
        case 0x2a9cecu: goto label_2a9cec;
        case 0x2a9cf0u: goto label_2a9cf0;
        case 0x2a9cf4u: goto label_2a9cf4;
        case 0x2a9cf8u: goto label_2a9cf8;
        case 0x2a9cfcu: goto label_2a9cfc;
        case 0x2a9d00u: goto label_2a9d00;
        case 0x2a9d04u: goto label_2a9d04;
        case 0x2a9d08u: goto label_2a9d08;
        case 0x2a9d0cu: goto label_2a9d0c;
        case 0x2a9d10u: goto label_2a9d10;
        case 0x2a9d14u: goto label_2a9d14;
        case 0x2a9d18u: goto label_2a9d18;
        case 0x2a9d1cu: goto label_2a9d1c;
        case 0x2a9d20u: goto label_2a9d20;
        case 0x2a9d24u: goto label_2a9d24;
        case 0x2a9d28u: goto label_2a9d28;
        case 0x2a9d2cu: goto label_2a9d2c;
        case 0x2a9d30u: goto label_2a9d30;
        case 0x2a9d34u: goto label_2a9d34;
        case 0x2a9d38u: goto label_2a9d38;
        case 0x2a9d3cu: goto label_2a9d3c;
        case 0x2a9d40u: goto label_2a9d40;
        case 0x2a9d44u: goto label_2a9d44;
        case 0x2a9d48u: goto label_2a9d48;
        case 0x2a9d4cu: goto label_2a9d4c;
        case 0x2a9d50u: goto label_2a9d50;
        case 0x2a9d54u: goto label_2a9d54;
        default: break;
    }

    ctx->pc = 0x2a9508u;

label_2a9508:
    // 0x2a9508: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a9508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2a950c:
    // 0x2a950c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2a950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2a9510:
    // 0x2a9510: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2a9510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2a9514:
    // 0x2a9514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a9514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9518:
    // 0x2a9518: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2a9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2a951c:
    // 0x2a951c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2a951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2a9520:
    // 0x2a9520: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2a9520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2a9524:
    // 0x2a9524: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2a9524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2a9528:
    // 0x2a9528: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2a9528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2a952c:
    // 0x2a952c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2a9530:
    // 0x2a9530: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2a9530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2a9534:
    // 0x2a9534: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2a9534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2a9538:
    // 0x2a9538: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2a953c:
    if (ctx->pc == 0x2A953Cu) {
        ctx->pc = 0x2A953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9538u;
        // 0x2a953c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9540u;
        goto label_2a9540;
    }
    ctx->pc = 0x2A9538u;
    {
        const bool branch_taken_0x2a9538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9538u;
        // 0x2a953c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9538) {
            ctx->pc = 0x2A9554u;
            goto label_2a9554;
        }
    }
    ctx->pc = 0x2A9540u;
label_2a9540:
    // 0x2a9540: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a9540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a9544:
    // 0x2a9544: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a9544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a9548:
    // 0x2a9548: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2a9548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a954c:
    // 0x2a954c: 0x146001f7  bnez        $v1, . + 4 + (0x1F7 << 2)
label_2a9550:
    if (ctx->pc == 0x2A9550u) {
        ctx->pc = 0x2A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A954Cu;
        // 0x2a9550: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9554u;
        goto label_2a9554;
    }
    ctx->pc = 0x2A954Cu;
    {
        const bool branch_taken_0x2a954c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A954Cu;
        // 0x2a9550: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a954c) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9554u;
label_2a9554:
    // 0x2a9554: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2a9554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a9558:
    // 0x2a9558: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2a955c:
    if (ctx->pc == 0x2A955Cu) {
        ctx->pc = 0x2A955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9558u;
        // 0x2a955c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9560u;
        goto label_2a9560;
    }
    ctx->pc = 0x2A9558u;
    {
        const bool branch_taken_0x2a9558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9558) {
            ctx->pc = 0x2A955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9558u;
            // 0x2a955c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9594u;
            goto label_2a9594;
        }
    }
    ctx->pc = 0x2A9560u;
label_2a9560:
    // 0x2a9560: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a9560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a9564:
    // 0x2a9564: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a9564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a9568:
    // 0x2a9568: 0x8c659438  lw          $a1, -0x6BC8($v1)
    ctx->pc = 0x2a9568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939704)));
label_2a956c:
    // 0x2a956c: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x2a956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2a9570:
    // 0x2a9570: 0x54a201ee  bnel        $a1, $v0, . + 4 + (0x1EE << 2)
label_2a9574:
    if (ctx->pc == 0x2A9574u) {
        ctx->pc = 0x2A9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9570u;
        // 0x2a9574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9578u;
        goto label_2a9578;
    }
    ctx->pc = 0x2A9570u;
    {
        const bool branch_taken_0x2a9570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9570) {
            ctx->pc = 0x2A9574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9570u;
            // 0x2a9574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9578u;
label_2a9578:
    // 0x2a9578: 0xc0aa462  jal         func_2A9188
label_2a957c:
    if (ctx->pc == 0x2A957Cu) {
        ctx->pc = 0x2A957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9578u;
        // 0x2a957c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9580u;
        goto label_2a9580;
    }
    ctx->pc = 0x2A9578u;
    SET_GPR_U32(ctx, 31, 0x2A9580u);
    ctx->pc = 0x2A957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9578u;
    // 0x2a957c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9188u, 0x2A9578u, 0x2A9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9580u;
label_2a9580:
    // 0x2a9580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a9580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9584:
    // 0x2a9584: 0x146001e9  bnez        $v1, . + 4 + (0x1E9 << 2)
label_2a9588:
    if (ctx->pc == 0x2A9588u) {
        ctx->pc = 0x2A9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9584u;
        // 0x2a9588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A958Cu;
        goto label_2a958c;
    }
    ctx->pc = 0x2A9584u;
    {
        const bool branch_taken_0x2a9584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9584u;
        // 0x2a9588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9584) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A958Cu;
label_2a958c:
    // 0x2a958c: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_2a9590:
    if (ctx->pc == 0x2A9590u) {
        ctx->pc = 0x2A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A958Cu;
        // 0x2a9590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9594u;
        goto label_2a9594;
    }
    ctx->pc = 0x2A958Cu;
    {
        const bool branch_taken_0x2a958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A958Cu;
        // 0x2a9590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a958c) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9594u;
label_2a9594:
    // 0x2a9594: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2a9594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2a9598:
    // 0x2a9598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a9598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a959c:
    // 0x2a959c: 0xc0e409a  jal         func_390268
label_2a95a0:
    if (ctx->pc == 0x2A95A0u) {
        ctx->pc = 0x2A95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A959Cu;
        // 0x2a95a0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95A4u;
        goto label_2a95a4;
    }
    ctx->pc = 0x2A959Cu;
    SET_GPR_U32(ctx, 31, 0x2A95A4u);
    ctx->pc = 0x2A95A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A959Cu;
    // 0x2a95a0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A959Cu, 0x2A95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95A4u;
label_2a95a4:
    // 0x2a95a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a95a8:
    // 0x2a95a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a95a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a95ac:
    // 0x2a95ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a95acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a95b0:
    // 0x2a95b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a95b4:
    // 0x2a95b4: 0x40f809  jalr        $v0
label_2a95b8:
    if (ctx->pc == 0x2A95B8u) {
        ctx->pc = 0x2A95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95B4u;
        // 0x2a95b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95BCu;
        goto label_2a95bc;
    }
    ctx->pc = 0x2A95B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A95BCu);
        ctx->pc = 0x2A95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95B4u;
        // 0x2a95b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A95B4u, 0x2A95BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A95BCu;
label_2a95bc:
    // 0x2a95bc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2a95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_2a95c0:
    // 0x2a95c0: 0xc0e4060  jal         func_390180
label_2a95c4:
    if (ctx->pc == 0x2A95C4u) {
        ctx->pc = 0x2A95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95C0u;
        // 0x2a95c4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95C8u;
        goto label_2a95c8;
    }
    ctx->pc = 0x2A95C0u;
    SET_GPR_U32(ctx, 31, 0x2A95C8u);
    ctx->pc = 0x2A95C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A95C0u;
    // 0x2a95c4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A95C0u, 0x2A95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95C8u;
label_2a95c8:
    // 0x2a95c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a95cc:
    if (ctx->pc == 0x2A95CCu) {
        ctx->pc = 0x2A95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95C8u;
        // 0x2a95cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95D0u;
        goto label_2a95d0;
    }
    ctx->pc = 0x2A95C8u;
    {
        const bool branch_taken_0x2a95c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a95c8) {
            ctx->pc = 0x2A95CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A95C8u;
            // 0x2a95cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A95D8u;
            goto label_2a95d8;
        }
    }
    ctx->pc = 0x2A95D0u;
label_2a95d0:
    // 0x2a95d0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_2a95d4:
    if (ctx->pc == 0x2A95D4u) {
        ctx->pc = 0x2A95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95D0u;
        // 0x2a95d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95D8u;
        goto label_2a95d8;
    }
    ctx->pc = 0x2A95D0u;
    {
        const bool branch_taken_0x2a95d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a95d0) {
            ctx->pc = 0x2A95D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A95D0u;
            // 0x2a95d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A95D8u;
            goto label_2a95d8;
        }
    }
    ctx->pc = 0x2A95D8u;
label_2a95d8:
    // 0x2a95d8: 0x160001d4  bnez        $s0, . + 4 + (0x1D4 << 2)
label_2a95dc:
    if (ctx->pc == 0x2A95DCu) {
        ctx->pc = 0x2A95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95D8u;
        // 0x2a95dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95E0u;
        goto label_2a95e0;
    }
    ctx->pc = 0x2A95D8u;
    {
        const bool branch_taken_0x2a95d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95D8u;
        // 0x2a95dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95d8) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A95E0u;
label_2a95e0:
    // 0x2a95e0: 0xc087502  jal         func_21D408
label_2a95e4:
    if (ctx->pc == 0x2A95E4u) {
        ctx->pc = 0x2A95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95E0u;
        // 0x2a95e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95E8u;
        goto label_2a95e8;
    }
    ctx->pc = 0x2A95E0u;
    SET_GPR_U32(ctx, 31, 0x2A95E8u);
    ctx->pc = 0x2A95E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A95E0u;
    // 0x2a95e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A95E0u, 0x2A95E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95E8u;
label_2a95e8:
    // 0x2a95e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a95e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a95ec:
    // 0x2a95ec: 0x82a2002c  lb          $v0, 0x2C($s5)
    ctx->pc = 0x2a95ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_2a95f0:
    // 0x2a95f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a95f4:
    if (ctx->pc == 0x2A95F4u) {
        ctx->pc = 0x2A95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95F0u;
        // 0x2a95f4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95F8u;
        goto label_2a95f8;
    }
    ctx->pc = 0x2A95F0u;
    {
        const bool branch_taken_0x2a95f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95F0u;
        // 0x2a95f4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95f0) {
            ctx->pc = 0x2A9604u;
            goto label_2a9604;
        }
    }
    ctx->pc = 0x2A95F8u;
label_2a95f8:
    // 0x2a95f8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2a95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2a95fc:
    // 0x2a95fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a9600:
    if (ctx->pc == 0x2A9600u) {
        ctx->pc = 0x2A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95FCu;
        // 0x2a9600: 0x8c530040  lw          $s3, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9604u;
        goto label_2a9604;
    }
    ctx->pc = 0x2A95FCu;
    {
        const bool branch_taken_0x2a95fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95FCu;
        // 0x2a9600: 0x8c530040  lw          $s3, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95fc) {
            ctx->pc = 0x2A9608u;
            goto label_2a9608;
        }
    }
    ctx->pc = 0x2A9604u;
label_2a9604:
    // 0x2a9604: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a9604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9608:
    // 0x2a9608: 0x126001c8  beqz        $s3, . + 4 + (0x1C8 << 2)
label_2a960c:
    if (ctx->pc == 0x2A960Cu) {
        ctx->pc = 0x2A960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9608u;
        // 0x2a960c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9610u;
        goto label_2a9610;
    }
    ctx->pc = 0x2A9608u;
    {
        const bool branch_taken_0x2a9608 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9608u;
        // 0x2a960c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9608) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9610u;
label_2a9610:
    // 0x2a9610: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2a9610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2a9614:
    // 0x2a9614: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2a9614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2a9618:
    // 0x2a9618: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a961c:
    // 0x2a961c: 0x40f809  jalr        $v0
label_2a9620:
    if (ctx->pc == 0x2A9620u) {
        ctx->pc = 0x2A9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A961Cu;
        // 0x2a9620: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9624u;
        goto label_2a9624;
    }
    ctx->pc = 0x2A961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9624u);
        ctx->pc = 0x2A9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A961Cu;
        // 0x2a9620: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A961Cu, 0x2A9624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9624u;
label_2a9624:
    // 0x2a9624: 0x38420071  xori        $v0, $v0, 0x71
    ctx->pc = 0x2a9624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)113);
label_2a9628:
    // 0x2a9628: 0x144001c0  bnez        $v0, . + 4 + (0x1C0 << 2)
label_2a962c:
    if (ctx->pc == 0x2A962Cu) {
        ctx->pc = 0x2A962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9628u;
        // 0x2a962c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9630u;
        goto label_2a9630;
    }
    ctx->pc = 0x2A9628u;
    {
        const bool branch_taken_0x2a9628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9628u;
        // 0x2a962c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9628) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9630u;
label_2a9630:
    // 0x2a9630: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a9630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a9634:
    // 0x2a9634: 0x8e360014  lw          $s6, 0x14($s1)
    ctx->pc = 0x2a9634u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a9638:
    // 0x2a9638: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a963c:
    // 0x2a963c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9640:
    // 0x2a9640: 0x16c4005d  bne         $s6, $a0, . + 4 + (0x5D << 2)
label_2a9644:
    if (ctx->pc == 0x2A9644u) {
        ctx->pc = 0x2A9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9640u;
        // 0x2a9644: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9648u;
        goto label_2a9648;
    }
    ctx->pc = 0x2A9640u;
    {
        const bool branch_taken_0x2a9640 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9640u;
        // 0x2a9644: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9640) {
            ctx->pc = 0x2A97B8u;
            goto label_2a97b8;
        }
    }
    ctx->pc = 0x2A9648u;
label_2a9648:
    // 0x2a9648: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2a9648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2a964c:
    // 0x2a964c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2a964cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2a9650:
    // 0x2a9650: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2a9650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2a9654:
    // 0x2a9654: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a9654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9658:
    // 0x2a9658: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a9658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a965c:
    // 0x2a965c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a965cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a9660:
    // 0x2a9660: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a9660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a9664:
    // 0x2a9664: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a9664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a9668:
    // 0x2a9668: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a9668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a966c:
    // 0x2a966c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2a966cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a9670:
    // 0x2a9670: 0x26081388  addiu       $t0, $s0, 0x1388
    ctx->pc = 0x2a9670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 5000));
label_2a9674:
    // 0x2a9674: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a9674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a9678:
    // 0x2a9678: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a9678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2a967c:
    // 0x2a967c: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x2a967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_2a9680:
    // 0x2a9680: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2a9680u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2a9684:
    // 0x2a9684: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a9684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2a9688:
    // 0x2a9688: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a9688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a968c:
    // 0x2a968c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2a968cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2a9690:
    // 0x2a9690: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a9690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a9694:
    // 0x2a9694: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2a9694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2a9698:
    // 0x2a9698: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a9698u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a969c:
    // 0x2a969c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a969cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2a96a0:
    // 0x2a96a0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2a96a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2a96a4:
    // 0x2a96a4: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x2a96a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_2a96a8:
    // 0x2a96a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a96a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a96ac:
    // 0x2a96ac: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2a96acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a96b0:
    // 0x2a96b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2a96b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a96b4:
    // 0x2a96b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2a96b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a96b8:
    // 0x2a96b8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2a96b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2a96bc:
    // 0x2a96bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2a96bcu;
    // VWAITQ (Q already resolved in this runtime)
label_2a96c0:
    // 0x2a96c0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2a96c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a96c4:
    // 0x2a96c4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2a96c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2a96c8:
    // 0x2a96c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2a96c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2a96cc:
    // 0x2a96cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a96ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a96d0:
    // 0x2a96d0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2a96d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2a96d4:
    // 0x2a96d4: 0x0  nop
    ctx->pc = 0x2a96d4u;
    // NOP
label_2a96d8:
    // 0x2a96d8: 0x0  nop
    ctx->pc = 0x2a96d8u;
    // NOP
label_2a96dc:
    // 0x2a96dc: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x2a96dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2a96e0:
    // 0x2a96e0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2a96e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2a96e4:
    // 0x2a96e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a96e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2a96e8:
    // 0x2a96e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a96e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a96ec:
    // 0x2a96ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a96ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a96f0:
    // 0x2a96f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a96f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a96f4:
    // 0x2a96f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a96f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a96f8:
    // 0x2a96f8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x2a96f8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_2a96fc:
    // 0x2a96fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a96fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2a9700:
    // 0x2a9700: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2a9700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_2a9704:
    // 0x2a9704: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a9704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a9708:
    // 0x2a9708: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a9708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a970c:
    // 0x2a970c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2a970cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_2a9710:
    // 0x2a9710: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2a9710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a9714:
    // 0x2a9714: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2a9714u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2a9718:
    // 0x2a9718: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2a9718u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a971c:
    // 0x2a971c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a971cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2a9720:
    // 0x2a9720: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2a9720u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2a9724:
    // 0x2a9724: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x2a9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_2a9728:
    // 0x2a9728: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x2a9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_2a972c:
    // 0x2a972c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2a972cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2a9730:
    // 0x2a9730: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a9730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a9734:
    // 0x2a9734: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a9734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a9738:
    // 0x2a9738: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a9738u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2a973c:
    // 0x2a973c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2a973cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_2a9740:
    // 0x2a9740: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x2a9740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_2a9744:
    // 0x2a9744: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2a9744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2a9748:
    // 0x2a9748: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2a9748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2a974c:
    // 0x2a974c: 0xae280018  sw          $t0, 0x18($s1)
    ctx->pc = 0x2a974cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 8));
label_2a9750:
    // 0x2a9750: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2a9750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_2a9754:
    // 0x2a9754: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x2a9754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_2a9758:
    // 0x2a9758: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x2a9758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_2a975c:
    // 0x2a975c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2a975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2a9760:
    // 0x2a9760: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x2a9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_2a9764:
    // 0x2a9764: 0xc0a367c  jal         func_28D9F0
label_2a9768:
    if (ctx->pc == 0x2A9768u) {
        ctx->pc = 0x2A9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9764u;
        // 0x2a9768: 0x7fa60050  sq          $a2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A976Cu;
        goto label_2a976c;
    }
    ctx->pc = 0x2A9764u;
    SET_GPR_U32(ctx, 31, 0x2A976Cu);
    ctx->pc = 0x2A9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9764u;
    // 0x2a9768: 0x7fa60050  sq          $a2, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A9764u, 0x2A976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A976Cu;
label_2a976c:
    // 0x2a976c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9770:
    // 0x2a9770: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2a9774:
    if (ctx->pc == 0x2A9774u) {
        ctx->pc = 0x2A9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9770u;
        // 0x2a9774: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9778u;
        goto label_2a9778;
    }
    ctx->pc = 0x2A9770u;
    {
        const bool branch_taken_0x2a9770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9770u;
        // 0x2a9774: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9770) {
            ctx->pc = 0x2A97A4u;
            goto label_2a97a4;
        }
    }
    ctx->pc = 0x2A9778u;
label_2a9778:
    // 0x2a9778: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a9778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a977c:
    // 0x2a977c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a977cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a9780:
    // 0x2a9780: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a9780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a9784:
    // 0x2a9784: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2a9784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_2a9788:
    // 0x2a9788: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2a9788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_2a978c:
    // 0x2a978c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a978cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a9790:
    // 0x2a9790: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a9790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a9794:
    // 0x2a9794: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a9794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9798:
    // 0x2a9798: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a9798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a979c:
    // 0x2a979c: 0xc0bee7a  jal         func_2FB9E8
label_2a97a0:
    if (ctx->pc == 0x2A97A0u) {
        ctx->pc = 0x2A97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A979Cu;
        // 0x2a97a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97A4u;
        goto label_2a97a4;
    }
    ctx->pc = 0x2A979Cu;
    SET_GPR_U32(ctx, 31, 0x2A97A4u);
    ctx->pc = 0x2A97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A979Cu;
    // 0x2a97a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A979Cu, 0x2A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97A4u;
label_2a97a4:
    // 0x2a97a4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a97a8:
    // 0x2a97a8: 0x54560004  bnel        $v0, $s6, . + 4 + (0x4 << 2)
label_2a97ac:
    if (ctx->pc == 0x2A97ACu) {
        ctx->pc = 0x2A97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97A8u;
        // 0x2a97ac: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97B0u;
        goto label_2a97b0;
    }
    ctx->pc = 0x2A97A8u;
    {
        const bool branch_taken_0x2a97a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2a97a8) {
            ctx->pc = 0x2A97ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A97A8u;
            // 0x2a97ac: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A97BCu;
            goto label_2a97bc;
        }
    }
    ctx->pc = 0x2A97B0u;
label_2a97b0:
    // 0x2a97b0: 0xc0a3e2e  jal         func_28F8B8
label_2a97b4:
    if (ctx->pc == 0x2A97B4u) {
        ctx->pc = 0x2A97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97B0u;
        // 0x2a97b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97B8u;
        goto label_2a97b8;
    }
    ctx->pc = 0x2A97B0u;
    SET_GPR_U32(ctx, 31, 0x2A97B8u);
    ctx->pc = 0x2A97B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A97B0u;
    // 0x2a97b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8B8u, 0x2A97B0u, 0x2A97B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97B8u;
label_2a97b8:
    // 0x2a97b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2a97b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a97bc:
    // 0x2a97bc: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2a97bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_2a97c0:
    // 0x2a97c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a97c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a97c4:
    // 0x2a97c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2a97c8:
    if (ctx->pc == 0x2A97C8u) {
        ctx->pc = 0x2A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97C4u;
        // 0x2a97c8: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97CCu;
        goto label_2a97cc;
    }
    ctx->pc = 0x2A97C4u;
    {
        const bool branch_taken_0x2a97c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97C4u;
        // 0x2a97c8: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97c4) {
            ctx->pc = 0x2A97F8u;
            goto label_2a97f8;
        }
    }
    ctx->pc = 0x2A97CCu;
label_2a97cc:
    // 0x2a97cc: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x2a97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_2a97d0:
    // 0x2a97d0: 0xc043d5e  jal         func_10F578
label_2a97d4:
    if (ctx->pc == 0x2A97D4u) {
        ctx->pc = 0x2A97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97D0u;
        // 0x2a97d4: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97D8u;
        goto label_2a97d8;
    }
    ctx->pc = 0x2A97D0u;
    SET_GPR_U32(ctx, 31, 0x2A97D8u);
    ctx->pc = 0x2A97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A97D0u;
    // 0x2a97d4: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2A97D0u, 0x2A97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97D8u;
label_2a97d8:
    // 0x2a97d8: 0x14400154  bnez        $v0, . + 4 + (0x154 << 2)
label_2a97dc:
    if (ctx->pc == 0x2A97DCu) {
        ctx->pc = 0x2A97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97D8u;
        // 0x2a97dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97E0u;
        goto label_2a97e0;
    }
    ctx->pc = 0x2A97D8u;
    {
        const bool branch_taken_0x2a97d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97D8u;
        // 0x2a97dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97d8) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A97E0u;
label_2a97e0:
    // 0x2a97e0: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2a97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
label_2a97e4:
    // 0x2a97e4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2a97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_2a97e8:
    // 0x2a97e8: 0xc043d5e  jal         func_10F578
label_2a97ec:
    if (ctx->pc == 0x2A97ECu) {
        ctx->pc = 0x2A97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97E8u;
        // 0x2a97ec: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97F0u;
        goto label_2a97f0;
    }
    ctx->pc = 0x2A97E8u;
    SET_GPR_U32(ctx, 31, 0x2A97F0u);
    ctx->pc = 0x2A97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A97E8u;
    // 0x2a97ec: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2A97E8u, 0x2A97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97F0u;
label_2a97f0:
    // 0x2a97f0: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
label_2a97f4:
    if (ctx->pc == 0x2A97F4u) {
        ctx->pc = 0x2A97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97F0u;
        // 0x2a97f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A97F8u;
        goto label_2a97f8;
    }
    ctx->pc = 0x2A97F0u;
    {
        const bool branch_taken_0x2a97f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97F0u;
        // 0x2a97f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97f0) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A97F8u;
label_2a97f8:
    // 0x2a97f8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2a97f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a97fc:
    // 0x2a97fc: 0x2482fffb  addiu       $v0, $a0, -0x5
    ctx->pc = 0x2a97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
label_2a9800:
    // 0x2a9800: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a9800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a9804:
    // 0x2a9804: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2a9808:
    if (ctx->pc == 0x2A9808u) {
        ctx->pc = 0x2A9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9804u;
        // 0x2a9808: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A980Cu;
        goto label_2a980c;
    }
    ctx->pc = 0x2A9804u;
    {
        const bool branch_taken_0x2a9804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9804u;
        // 0x2a9808: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9804) {
            ctx->pc = 0x2A98F8u;
            goto label_2a98f8;
        }
    }
    ctx->pc = 0x2A980Cu;
label_2a980c:
    // 0x2a980c: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
label_2a9810:
    if (ctx->pc == 0x2A9810u) {
        ctx->pc = 0x2A9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A980Cu;
        // 0x2a9810: 0x8e4303b0  lw          $v1, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9814u;
        goto label_2a9814;
    }
    ctx->pc = 0x2A980Cu;
    {
        const bool branch_taken_0x2a980c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a980c) {
            ctx->pc = 0x2A9810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A980Cu;
            // 0x2a9810: 0x8e4303b0  lw          $v1, 0x3B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9828u;
            goto label_2a9828;
        }
    }
    ctx->pc = 0x2A9814u;
label_2a9814:
    // 0x2a9814: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a9814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a9818:
    // 0x2a9818: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2a9818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2a981c:
    // 0x2a981c: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
label_2a9820:
    if (ctx->pc == 0x2A9820u) {
        ctx->pc = 0x2A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A981Cu;
        // 0x2a9820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9824u;
        goto label_2a9824;
    }
    ctx->pc = 0x2A981Cu;
    {
        const bool branch_taken_0x2a981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A981Cu;
        // 0x2a9820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a981c) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9824u;
label_2a9824:
    // 0x2a9824: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x2a9824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_2a9828:
    // 0x2a9828: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a9828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a982c:
    // 0x2a982c: 0x2402026d  addiu       $v0, $zero, 0x26D
    ctx->pc = 0x2a982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
label_2a9830:
    // 0x2a9830: 0x828403b8  lb          $a0, 0x3B8($s4)
    ctx->pc = 0x2a9830u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 952)));
label_2a9834:
    // 0x2a9834: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2a9834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a9838:
    // 0x2a9838: 0x8ca6aa84  lw          $a2, -0x557C($a1)
    ctx->pc = 0x2a9838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945412)));
label_2a983c:
    // 0x2a983c: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x2a983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_2a9840:
    // 0x2a9840: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2a9840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_2a9844:
    // 0x2a9844: 0x241300ab  addiu       $s3, $zero, 0xAB
    ctx->pc = 0x2a9844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_2a9848:
    // 0x2a9848: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x2a9848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_2a984c:
    // 0x2a984c: 0x44980a  movz        $s3, $v0, $a0
    ctx->pc = 0x2a984cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_2a9850:
    // 0x2a9850: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2a9850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2a9854:
    // 0x2a9854: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a9854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a9858:
    // 0x2a9858: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a9858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2a985c:
    // 0x2a985c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a9860:
    // 0x2a9860: 0x90700001  lbu         $s0, 0x1($v1)
    ctx->pc = 0x2a9860u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2a9864:
    // 0x2a9864: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2a9868:
    if (ctx->pc == 0x2A9868u) {
        ctx->pc = 0x2A9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9864u;
        // 0x2a9868: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A986Cu;
        goto label_2a986c;
    }
    ctx->pc = 0x2A9864u;
    {
        const bool branch_taken_0x2a9864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9864u;
        // 0x2a9868: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9864) {
            ctx->pc = 0x2A9874u;
            goto label_2a9874;
        }
    }
    ctx->pc = 0x2A986Cu;
label_2a986c:
    // 0x2a986c: 0x10000122  b           . + 4 + (0x122 << 2)
label_2a9870:
    if (ctx->pc == 0x2A9870u) {
        ctx->pc = 0x2A9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A986Cu;
        // 0x2a9870: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9874u;
        goto label_2a9874;
    }
    ctx->pc = 0x2A986Cu;
    {
        const bool branch_taken_0x2a986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A986Cu;
        // 0x2a9870: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a986c) {
            ctx->pc = 0x2A9CF8u;
            goto label_2a9cf8;
        }
    }
    ctx->pc = 0x2A9874u;
label_2a9874:
    // 0x2a9874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a9878:
    // 0x2a9878: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a9878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a987c:
    // 0x2a987c: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2a987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2a9880:
    // 0x2a9880: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a9880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a9884:
    // 0x2a9884: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x2a9884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2a9888:
    // 0x2a9888: 0xc0a6800  jal         func_29A000
label_2a988c:
    if (ctx->pc == 0x2A988Cu) {
        ctx->pc = 0x2A988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9888u;
        // 0x2a988c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9890u;
        goto label_2a9890;
    }
    ctx->pc = 0x2A9888u;
    SET_GPR_U32(ctx, 31, 0x2A9890u);
    ctx->pc = 0x2A988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9888u;
    // 0x2a988c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2A9888u, 0x2A9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9890u;
label_2a9890:
    // 0x2a9890: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x2a9890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2a9894:
    // 0x2a9894: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a9894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a9898:
    // 0x2a9898: 0x10550007  beq         $v0, $s5, . + 4 + (0x7 << 2)
label_2a989c:
    if (ctx->pc == 0x2A989Cu) {
        ctx->pc = 0x2A989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9898u;
        // 0x2a989c: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A98A0u;
        goto label_2a98a0;
    }
    ctx->pc = 0x2A9898u;
    {
        const bool branch_taken_0x2a9898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2A989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9898u;
        // 0x2a989c: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9898) {
            ctx->pc = 0x2A98B8u;
            goto label_2a98b8;
        }
    }
    ctx->pc = 0x2A98A0u;
label_2a98a0:
    // 0x2a98a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a98a4:
    if (ctx->pc == 0x2A98A4u) {
        ctx->pc = 0x2A98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98A0u;
        // 0x2a98a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A98A8u;
        goto label_2a98a8;
    }
    ctx->pc = 0x2A98A0u;
    {
        const bool branch_taken_0x2a98a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98A0u;
        // 0x2a98a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98a0) {
            ctx->pc = 0x2A98BCu;
            goto label_2a98bc;
        }
    }
    ctx->pc = 0x2A98A8u;
label_2a98a8:
    // 0x2a98a8: 0x8e8303b0  lw          $v1, 0x3B0($s4)
    ctx->pc = 0x2a98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 944)));
label_2a98ac:
    // 0x2a98ac: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x2a98acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_2a98b0:
    // 0x2a98b0: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
label_2a98b4:
    if (ctx->pc == 0x2A98B4u) {
        ctx->pc = 0x2A98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98B0u;
        // 0x2a98b4: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A98B8u;
        goto label_2a98b8;
    }
    ctx->pc = 0x2A98B0u;
    {
        const bool branch_taken_0x2a98b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a98b0) {
            ctx->pc = 0x2A98B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A98B0u;
            // 0x2a98b4: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A98E8u;
            goto label_2a98e8;
        }
    }
    ctx->pc = 0x2A98B8u;
label_2a98b8:
    // 0x2a98b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a98bc:
    // 0x2a98bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a98bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a98c0:
    // 0x2a98c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a98c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a98c4:
    // 0x2a98c4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2a98c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a98c8:
    // 0x2a98c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a98c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a98cc:
    // 0x2a98cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a98ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a98d0:
    // 0x2a98d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a98d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a98d4:
    // 0x2a98d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a98d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a98d8:
    // 0x2a98d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a98d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a98dc:
    // 0x2a98dc: 0xc088178  jal         func_2205E0
label_2a98e0:
    if (ctx->pc == 0x2A98E0u) {
        ctx->pc = 0x2A98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98DCu;
        // 0x2a98e0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A98E4u;
        goto label_2a98e4;
    }
    ctx->pc = 0x2A98DCu;
    SET_GPR_U32(ctx, 31, 0x2A98E4u);
    ctx->pc = 0x2A98E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A98DCu;
    // 0x2a98e0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A98DCu, 0x2A98E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A98E4u;
label_2a98e4:
    // 0x2a98e4: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x2a98e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2a98e8:
    // 0x2a98e8: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
label_2a98ec:
    if (ctx->pc == 0x2A98ECu) {
        ctx->pc = 0x2A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98E8u;
        // 0x2a98ec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A98F0u;
        goto label_2a98f0;
    }
    ctx->pc = 0x2A98E8u;
    {
        const bool branch_taken_0x2a98e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98E8u;
        // 0x2a98ec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98e8) {
            ctx->pc = 0x2A9D24u;
            goto label_2a9d24;
        }
    }
    ctx->pc = 0x2A98F0u;
label_2a98f0:
    // 0x2a98f0: 0x1000010c  b           . + 4 + (0x10C << 2)
label_2a98f4:
    if (ctx->pc == 0x2A98F4u) {
        ctx->pc = 0x2A98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98F0u;
        // 0x2a98f4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A98F8u;
        goto label_2a98f8;
    }
    ctx->pc = 0x2A98F0u;
    {
        const bool branch_taken_0x2a98f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98F0u;
        // 0x2a98f4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98f0) {
            ctx->pc = 0x2A9D24u;
            goto label_2a9d24;
        }
    }
    ctx->pc = 0x2A98F8u;
label_2a98f8:
    // 0x2a98f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a98fc:
    // 0x2a98fc: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_2a9900:
    if (ctx->pc == 0x2A9900u) {
        ctx->pc = 0x2A9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98FCu;
        // 0x2a9900: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9904u;
        goto label_2a9904;
    }
    ctx->pc = 0x2A98FCu;
    {
        const bool branch_taken_0x2a98fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98FCu;
        // 0x2a9900: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98fc) {
            ctx->pc = 0x2A9948u;
            goto label_2a9948;
        }
    }
    ctx->pc = 0x2A9904u;
label_2a9904:
    // 0x2a9904: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a9908:
    // 0x2a9908: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2a9908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2a990c:
    // 0x2a990c: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
label_2a9910:
    if (ctx->pc == 0x2A9910u) {
        ctx->pc = 0x2A9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A990Cu;
        // 0x2a9910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9914u;
        goto label_2a9914;
    }
    ctx->pc = 0x2A990Cu;
    {
        const bool branch_taken_0x2a990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A990Cu;
        // 0x2a9910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a990c) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9914u;
label_2a9914:
    // 0x2a9914: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a9914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a9918:
    // 0x2a9918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a991c:
    // 0x2a991c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a991cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a9920:
    // 0x2a9920: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2a9920u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a9924:
    // 0x2a9924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9928:
    // 0x2a9928: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x2a9928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_2a992c:
    // 0x2a992c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a992cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9930:
    // 0x2a9930: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a9930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9934:
    // 0x2a9934: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a9934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9938:
    // 0x2a9938: 0xc088178  jal         func_2205E0
label_2a993c:
    if (ctx->pc == 0x2A993Cu) {
        ctx->pc = 0x2A993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9938u;
        // 0x2a993c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9940u;
        goto label_2a9940;
    }
    ctx->pc = 0x2A9938u;
    SET_GPR_U32(ctx, 31, 0x2A9940u);
    ctx->pc = 0x2A993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9938u;
    // 0x2a993c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A9938u, 0x2A9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9940u;
label_2a9940:
    // 0x2a9940: 0x100000ed  b           . + 4 + (0xED << 2)
label_2a9944:
    if (ctx->pc == 0x2A9944u) {
        ctx->pc = 0x2A9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9940u;
        // 0x2a9944: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9948u;
        goto label_2a9948;
    }
    ctx->pc = 0x2A9940u;
    {
        const bool branch_taken_0x2a9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9940u;
        // 0x2a9944: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9940) {
            ctx->pc = 0x2A9CF8u;
            goto label_2a9cf8;
        }
    }
    ctx->pc = 0x2A9948u;
label_2a9948:
    // 0x2a9948: 0x54820032  bnel        $a0, $v0, . + 4 + (0x32 << 2)
label_2a994c:
    if (ctx->pc == 0x2A994Cu) {
        ctx->pc = 0x2A994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9948u;
        // 0x2a994c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9950u;
        goto label_2a9950;
    }
    ctx->pc = 0x2A9948u;
    {
        const bool branch_taken_0x2a9948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9948) {
            ctx->pc = 0x2A994Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9948u;
            // 0x2a994c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9A14u;
            goto label_2a9a14;
        }
    }
    ctx->pc = 0x2A9950u;
label_2a9950:
    // 0x2a9950: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a9954:
    // 0x2a9954: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2a9954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_2a9958:
    // 0x2a9958: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
label_2a995c:
    if (ctx->pc == 0x2A995Cu) {
        ctx->pc = 0x2A995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9958u;
        // 0x2a995c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9960u;
        goto label_2a9960;
    }
    ctx->pc = 0x2A9958u;
    {
        const bool branch_taken_0x2a9958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9958u;
        // 0x2a995c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9958) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9960u;
label_2a9960:
    // 0x2a9960: 0x8e4403b0  lw          $a0, 0x3B0($s2)
    ctx->pc = 0x2a9960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_2a9964:
    // 0x2a9964: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a9964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a9968:
    // 0x2a9968: 0x2403026d  addiu       $v1, $zero, 0x26D
    ctx->pc = 0x2a9968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
label_2a996c:
    // 0x2a996c: 0x8c45aa84  lw          $a1, -0x557C($v0)
    ctx->pc = 0x2a996cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2a9970:
    // 0x2a9970: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2a9970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2a9974:
    // 0x2a9974: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x2a9974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_2a9978:
    // 0x2a9978: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a9978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a997c:
    // 0x2a997c: 0x9083021d  lbu         $v1, 0x21D($a0)
    ctx->pc = 0x2a997cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 541)));
label_2a9980:
    // 0x2a9980: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2a9984:
    if (ctx->pc == 0x2A9984u) {
        ctx->pc = 0x2A9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9980u;
        // 0x2a9984: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9988u;
        goto label_2a9988;
    }
    ctx->pc = 0x2A9980u;
    {
        const bool branch_taken_0x2a9980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9980u;
        // 0x2a9984: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9980) {
            ctx->pc = 0x2A99A0u;
            goto label_2a99a0;
        }
    }
    ctx->pc = 0x2A9988u;
label_2a9988:
    // 0x2a9988: 0x9082021c  lbu         $v0, 0x21C($a0)
    ctx->pc = 0x2a9988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 540)));
label_2a998c:
    // 0x2a998c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9990:
    // 0x2a9990: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2a9990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a9994:
    // 0x2a9994: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a9994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9998:
    // 0x2a9998: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2a9998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a999c:
    // 0x2a999c: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x2a999cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_2a99a0:
    // 0x2a99a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a99a4:
    // 0x2a99a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a99a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a99a8:
    // 0x2a99a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a99a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a99ac:
    // 0x2a99ac: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2a99acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a99b0:
    // 0x2a99b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a99b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a99b4:
    // 0x2a99b4: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2a99b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_2a99b8:
    // 0x2a99b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a99b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a99bc:
    // 0x2a99bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a99bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a99c0:
    // 0x2a99c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a99c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a99c4:
    // 0x2a99c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a99c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a99c8:
    // 0x2a99c8: 0xc088178  jal         func_2205E0
label_2a99cc:
    if (ctx->pc == 0x2A99CCu) {
        ctx->pc = 0x2A99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99C8u;
        // 0x2a99cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A99D0u;
        goto label_2a99d0;
    }
    ctx->pc = 0x2A99C8u;
    SET_GPR_U32(ctx, 31, 0x2A99D0u);
    ctx->pc = 0x2A99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A99C8u;
    // 0x2a99cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A99C8u, 0x2A99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99D0u;
label_2a99d0:
    // 0x2a99d0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2a99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a99d4:
    // 0x2a99d4: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2a99d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_2a99d8:
    // 0x2a99d8: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
label_2a99dc:
    if (ctx->pc == 0x2A99DCu) {
        ctx->pc = 0x2A99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99D8u;
        // 0x2a99dc: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A99E0u;
        goto label_2a99e0;
    }
    ctx->pc = 0x2A99D8u;
    {
        const bool branch_taken_0x2a99d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99D8u;
        // 0x2a99dc: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99d8) {
            ctx->pc = 0x2A9D28u;
            goto label_2a9d28;
        }
    }
    ctx->pc = 0x2A99E0u;
label_2a99e0:
    // 0x2a99e0: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2a99e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2a99e4:
    // 0x2a99e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a99e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a99e8:
    // 0x2a99e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a99e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a99ec:
    // 0x2a99ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a99ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a99f0:
    // 0x2a99f0: 0xc0a6800  jal         func_29A000
label_2a99f4:
    if (ctx->pc == 0x2A99F4u) {
        ctx->pc = 0x2A99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99F0u;
        // 0x2a99f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A99F8u;
        goto label_2a99f8;
    }
    ctx->pc = 0x2A99F0u;
    SET_GPR_U32(ctx, 31, 0x2A99F8u);
    ctx->pc = 0x2A99F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A99F0u;
    // 0x2a99f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2A99F0u, 0x2A99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99F8u;
label_2a99f8:
    // 0x2a99f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a99fc:
    // 0x2a99fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a99fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9a00:
    // 0x2a9a00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a9a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a9a04:
    // 0x2a9a04: 0xc0a5d0c  jal         func_297430
label_2a9a08:
    if (ctx->pc == 0x2A9A08u) {
        ctx->pc = 0x2A9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A04u;
        // 0x2a9a08: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A0Cu;
        goto label_2a9a0c;
    }
    ctx->pc = 0x2A9A04u;
    SET_GPR_U32(ctx, 31, 0x2A9A0Cu);
    ctx->pc = 0x2A9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A04u;
    // 0x2a9a08: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297430u, 0x2A9A04u, 0x2A9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A0Cu;
label_2a9a0c:
    // 0x2a9a0c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_2a9a10:
    if (ctx->pc == 0x2A9A10u) {
        ctx->pc = 0x2A9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A0Cu;
        // 0x2a9a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A14u;
        goto label_2a9a14;
    }
    ctx->pc = 0x2A9A0Cu;
    {
        const bool branch_taken_0x2a9a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A0Cu;
        // 0x2a9a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a0c) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9A14u;
label_2a9a14:
    // 0x2a9a14: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2a9a14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2a9a18:
    // 0x2a9a18: 0x1c4000c3  bgtz        $v0, . + 4 + (0xC3 << 2)
label_2a9a1c:
    if (ctx->pc == 0x2A9A1Cu) {
        ctx->pc = 0x2A9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A18u;
        // 0x2a9a1c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A20u;
        goto label_2a9a20;
    }
    ctx->pc = 0x2A9A18u;
    {
        const bool branch_taken_0x2a9a18 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A18u;
        // 0x2a9a1c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a18) {
            ctx->pc = 0x2A9D28u;
            goto label_2a9d28;
        }
    }
    ctx->pc = 0x2A9A20u;
label_2a9a20:
    // 0x2a9a20: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a9a24:
    // 0x2a9a24: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
label_2a9a28:
    if (ctx->pc == 0x2A9A28u) {
        ctx->pc = 0x2A9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A24u;
        // 0x2a9a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A2Cu;
        goto label_2a9a2c;
    }
    ctx->pc = 0x2A9A24u;
    {
        const bool branch_taken_0x2a9a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A24u;
        // 0x2a9a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a24) {
            ctx->pc = 0x2A9A5Cu;
            goto label_2a9a5c;
        }
    }
    ctx->pc = 0x2A9A2Cu;
label_2a9a2c:
    // 0x2a9a2c: 0x82a2002e  lb          $v0, 0x2E($s5)
    ctx->pc = 0x2a9a2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_2a9a30:
    // 0x2a9a30: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2a9a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a9a34:
    // 0x2a9a34: 0x105600bc  beq         $v0, $s6, . + 4 + (0xBC << 2)
label_2a9a38:
    if (ctx->pc == 0x2A9A38u) {
        ctx->pc = 0x2A9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A34u;
        // 0x2a9a38: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A3Cu;
        goto label_2a9a3c;
    }
    ctx->pc = 0x2A9A34u;
    {
        const bool branch_taken_0x2a9a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A34u;
        // 0x2a9a38: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a34) {
            ctx->pc = 0x2A9D28u;
            goto label_2a9d28;
        }
    }
    ctx->pc = 0x2A9A3Cu;
label_2a9a3c:
    // 0x2a9a3c: 0x8c820fc8  lw          $v0, 0xFC8($a0)
    ctx->pc = 0x2a9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4040)));
label_2a9a40:
    // 0x2a9a40: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2a9a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a9a44:
    // 0x2a9a44: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_2a9a48:
    if (ctx->pc == 0x2A9A48u) {
        ctx->pc = 0x2A9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A44u;
        // 0x2a9a48: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A4Cu;
        goto label_2a9a4c;
    }
    ctx->pc = 0x2A9A44u;
    {
        const bool branch_taken_0x2a9a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A44u;
        // 0x2a9a48: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a44) {
            ctx->pc = 0x2A9B8Cu;
            goto label_2a9b8c;
        }
    }
    ctx->pc = 0x2A9A4Cu;
label_2a9a4c:
    // 0x2a9a4c: 0x8c620fcc  lw          $v0, 0xFCC($v1)
    ctx->pc = 0x2a9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4044)));
label_2a9a50:
    // 0x2a9a50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a9a54:
    // 0x2a9a54: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2a9a58:
    if (ctx->pc == 0x2A9A58u) {
        ctx->pc = 0x2A9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A54u;
        // 0x2a9a58: 0xac820fc8  sw          $v0, 0xFC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A5Cu;
        goto label_2a9a5c;
    }
    ctx->pc = 0x2A9A54u;
    {
        const bool branch_taken_0x2a9a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A54u;
        // 0x2a9a58: 0xac820fc8  sw          $v0, 0xFC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a54) {
            ctx->pc = 0x2A9B8Cu;
            goto label_2a9b8c;
        }
    }
    ctx->pc = 0x2A9A5Cu;
label_2a9a5c:
    // 0x2a9a5c: 0x54820019  bnel        $a0, $v0, . + 4 + (0x19 << 2)
label_2a9a60:
    if (ctx->pc == 0x2A9A60u) {
        ctx->pc = 0x2A9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A5Cu;
        // 0x2a9a60: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A64u;
        goto label_2a9a64;
    }
    ctx->pc = 0x2A9A5Cu;
    {
        const bool branch_taken_0x2a9a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9a5c) {
            ctx->pc = 0x2A9A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9A5Cu;
            // 0x2a9a60: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9AC4u;
            goto label_2a9ac4;
        }
    }
    ctx->pc = 0x2A9A64u;
label_2a9a64:
    // 0x2a9a64: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2a9a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2a9a68:
    // 0x2a9a68: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2a9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2a9a6c:
    // 0x2a9a6c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2a9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2a9a70:
    // 0x2a9a70: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2a9a74:
    // 0x2a9a74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a9a78:
    // 0x2a9a78: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2a9a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9a7c:
    // 0x2a9a7c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a9a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2a9a80:
    // 0x2a9a80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a9a84:
    // 0x2a9a84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a9a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a9a88:
    // 0x2a9a88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a9a8c:
    // 0x2a9a8c: 0x40f809  jalr        $v0
label_2a9a90:
    if (ctx->pc == 0x2A9A90u) {
        ctx->pc = 0x2A9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A8Cu;
        // 0x2a9a90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9A94u;
        goto label_2a9a94;
    }
    ctx->pc = 0x2A9A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9A94u);
        ctx->pc = 0x2A9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A8Cu;
        // 0x2a9a90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9A8Cu, 0x2A9A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9A94u;
label_2a9a94:
    // 0x2a9a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9a98:
    // 0x2a9a98: 0xc0884f6  jal         func_2213D8
label_2a9a9c:
    if (ctx->pc == 0x2A9A9Cu) {
        ctx->pc = 0x2A9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A98u;
        // 0x2a9a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9AA0u;
        goto label_2a9aa0;
    }
    ctx->pc = 0x2A9A98u;
    SET_GPR_U32(ctx, 31, 0x2A9AA0u);
    ctx->pc = 0x2A9A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A98u;
    // 0x2a9a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2A9A98u, 0x2A9AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AA0u;
label_2a9aa0:
    // 0x2a9aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9aa4:
    // 0x2a9aa4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a9aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a9aa8:
    // 0x2a9aa8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a9aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a9aac:
    // 0x2a9aac: 0xc0bf7dc  jal         func_2FDF70
label_2a9ab0:
    if (ctx->pc == 0x2A9AB0u) {
        ctx->pc = 0x2A9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AACu;
        // 0x2a9ab0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9AB4u;
        goto label_2a9ab4;
    }
    ctx->pc = 0x2A9AACu;
    SET_GPR_U32(ctx, 31, 0x2A9AB4u);
    ctx->pc = 0x2A9AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9AACu;
    // 0x2a9ab0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF70u, 0x2A9AACu, 0x2A9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AB4u;
label_2a9ab4:
    // 0x2a9ab4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9ab8:
    // 0x2a9ab8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2a9ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2a9abc:
    // 0x2a9abc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2a9abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2a9ac0:
    // 0x2a9ac0: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2a9ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a9ac4:
    // 0x2a9ac4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9ac8:
    // 0x2a9ac8: 0x56020064  bnel        $s0, $v0, . + 4 + (0x64 << 2)
label_2a9acc:
    if (ctx->pc == 0x2A9ACCu) {
        ctx->pc = 0x2A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AC8u;
        // 0x2a9acc: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9AD0u;
        goto label_2a9ad0;
    }
    ctx->pc = 0x2A9AC8u;
    {
        const bool branch_taken_0x2a9ac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9ac8) {
            ctx->pc = 0x2A9ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9AC8u;
            // 0x2a9acc: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9C5Cu;
            goto label_2a9c5c;
        }
    }
    ctx->pc = 0x2A9AD0u;
label_2a9ad0:
    // 0x2a9ad0: 0x82a2002e  lb          $v0, 0x2E($s5)
    ctx->pc = 0x2a9ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_2a9ad4:
    // 0x2a9ad4: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
label_2a9ad8:
    if (ctx->pc == 0x2A9AD8u) {
        ctx->pc = 0x2A9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AD4u;
        // 0x2a9ad8: 0x86450092  lh          $a1, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9ADCu;
        goto label_2a9adc;
    }
    ctx->pc = 0x2A9AD4u;
    {
        const bool branch_taken_0x2a9ad4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a9ad4) {
            ctx->pc = 0x2A9AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9AD4u;
            // 0x2a9ad8: 0x86450092  lh          $a1, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9B08u;
            goto label_2a9b08;
        }
    }
    ctx->pc = 0x2A9ADCu;
label_2a9adc:
    // 0x2a9adc: 0xc0a36c2  jal         func_28DB08
label_2a9ae0:
    if (ctx->pc == 0x2A9AE0u) {
        ctx->pc = 0x2A9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9ADCu;
        // 0x2a9ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9AE4u;
        goto label_2a9ae4;
    }
    ctx->pc = 0x2A9ADCu;
    SET_GPR_U32(ctx, 31, 0x2A9AE4u);
    ctx->pc = 0x2A9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9ADCu;
    // 0x2a9ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2A9ADCu, 0x2A9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AE4u;
label_2a9ae4:
    // 0x2a9ae4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2a9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a9ae8:
    // 0x2a9ae8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2a9ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2a9aec:
    // 0x2a9aec: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2a9aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a9af0:
    // 0x2a9af0: 0xa0f809  jalr        $a1
label_2a9af4:
    if (ctx->pc == 0x2A9AF4u) {
        ctx->pc = 0x2A9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AF0u;
        // 0x2a9af4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9AF8u;
        goto label_2a9af8;
    }
    ctx->pc = 0x2A9AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A9AF8u);
        ctx->pc = 0x2A9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AF0u;
        // 0x2a9af4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9AF0u, 0x2A9AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9AF8u;
label_2a9af8:
    // 0x2a9af8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2a9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2a9afc:
    // 0x2a9afc: 0x54430057  bnel        $v0, $v1, . + 4 + (0x57 << 2)
label_2a9b00:
    if (ctx->pc == 0x2A9B00u) {
        ctx->pc = 0x2A9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AFCu;
        // 0x2a9b00: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9B04u;
        goto label_2a9b04;
    }
    ctx->pc = 0x2A9AFCu;
    {
        const bool branch_taken_0x2a9afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9afc) {
            ctx->pc = 0x2A9B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9AFCu;
            // 0x2a9b00: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9C5Cu;
            goto label_2a9c5c;
        }
    }
    ctx->pc = 0x2A9B04u;
label_2a9b04:
    // 0x2a9b04: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2a9b04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2a9b08:
    // 0x2a9b08: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2a9b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2a9b0c:
    // 0x2a9b0c: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2a9b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2a9b10:
    // 0x2a9b10: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2a9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2a9b14:
    // 0x2a9b14: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a9b14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2a9b18:
    // 0x2a9b18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a9b1c:
    // 0x2a9b1c: 0x342100a8  ori         $at, $at, 0xA8
    ctx->pc = 0x2a9b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)168);
label_2a9b20:
    // 0x2a9b20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a9b24:
    // 0x2a9b24: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2a9b28:
    // 0x2a9b28: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2a9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2a9b2c:
    // 0x2a9b2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a9b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a9b30:
    // 0x2a9b30: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2a9b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2a9b34:
    // 0x2a9b34: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2a9b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9b38:
    // 0x2a9b38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a9b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a9b3c:
    // 0x2a9b3c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2a9b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2a9b40:
    // 0x2a9b40: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a9b40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2a9b44:
    // 0x2a9b44: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a9b44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2a9b48:
    // 0x2a9b48: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2a9b48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2a9b4c:
    // 0x2a9b4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a9b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2a9b50:
    // 0x2a9b50: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2a9b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9b54:
    // 0x2a9b54: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2a9b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9b58:
    // 0x2a9b58: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2a9b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2a9b5c:
    // 0x2a9b5c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2a9b5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2a9b60:
    // 0x2a9b60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2a9b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2a9b64:
    // 0x2a9b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9b68:
    // 0x2a9b68: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2a9b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2a9b6c:
    // 0x2a9b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a9b70:
    // 0x2a9b70: 0x0  nop
    ctx->pc = 0x2a9b70u;
    // NOP
label_2a9b74:
    // 0x2a9b74: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2a9b78:
    if (ctx->pc == 0x2A9B78u) {
        ctx->pc = 0x2A9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B74u;
        // 0x2a9b78: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9B7Cu;
        goto label_2a9b7c;
    }
    ctx->pc = 0x2A9B74u;
    {
        const bool branch_taken_0x2a9b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B74u;
        // 0x2a9b78: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b74) {
            ctx->pc = 0x2A9BA0u;
            goto label_2a9ba0;
        }
    }
    ctx->pc = 0x2A9B7Cu;
label_2a9b7c:
    // 0x2a9b7c: 0x9223001d  lbu         $v1, 0x1D($s1)
    ctx->pc = 0x2a9b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
label_2a9b80:
    // 0x2a9b80: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2a9b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2a9b84:
    // 0x2a9b84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a9b88:
    if (ctx->pc == 0x2A9B88u) {
        ctx->pc = 0x2A9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B84u;
        // 0x2a9b88: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9B8Cu;
        goto label_2a9b8c;
    }
    ctx->pc = 0x2A9B84u;
    {
        const bool branch_taken_0x2a9b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B84u;
        // 0x2a9b88: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b84) {
            ctx->pc = 0x2A9B94u;
            goto label_2a9b94;
        }
    }
    ctx->pc = 0x2A9B8Cu;
label_2a9b8c:
    // 0x2a9b8c: 0x10000067  b           . + 4 + (0x67 << 2)
label_2a9b90:
    if (ctx->pc == 0x2A9B90u) {
        ctx->pc = 0x2A9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B8Cu;
        // 0x2a9b90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9B94u;
        goto label_2a9b94;
    }
    ctx->pc = 0x2A9B8Cu;
    {
        const bool branch_taken_0x2a9b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B8Cu;
        // 0x2a9b90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b8c) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9B94u;
label_2a9b94:
    // 0x2a9b94: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x2a9b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
label_2a9b98:
    // 0x2a9b98: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2a9b9c:
    if (ctx->pc == 0x2A9B9Cu) {
        ctx->pc = 0x2A9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B98u;
        // 0x2a9b9c: 0xa222001d  sb          $v0, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BA0u;
        goto label_2a9ba0;
    }
    ctx->pc = 0x2A9B98u;
    {
        const bool branch_taken_0x2a9b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B98u;
        // 0x2a9b9c: 0xa222001d  sb          $v0, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b98) {
            ctx->pc = 0x2A9C58u;
            goto label_2a9c58;
        }
    }
    ctx->pc = 0x2A9BA0u;
label_2a9ba0:
    // 0x2a9ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ba4:
    // 0x2a9ba4: 0xc088680  jal         func_221A00
label_2a9ba8:
    if (ctx->pc == 0x2A9BA8u) {
        ctx->pc = 0x2A9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BA4u;
        // 0x2a9ba8: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BACu;
        goto label_2a9bac;
    }
    ctx->pc = 0x2A9BA4u;
    SET_GPR_U32(ctx, 31, 0x2A9BACu);
    ctx->pc = 0x2A9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9BA4u;
    // 0x2a9ba8: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2A9BA4u, 0x2A9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BACu;
label_2a9bac:
    // 0x2a9bac: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_2a9bb0:
    if (ctx->pc == 0x2A9BB0u) {
        ctx->pc = 0x2A9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BACu;
        // 0x2a9bb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BB4u;
        goto label_2a9bb4;
    }
    ctx->pc = 0x2A9BACu;
    {
        const bool branch_taken_0x2a9bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BACu;
        // 0x2a9bb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bac) {
            ctx->pc = 0x2A9D28u;
            goto label_2a9d28;
        }
    }
    ctx->pc = 0x2A9BB4u;
label_2a9bb4:
    // 0x2a9bb4: 0xc088680  jal         func_221A00
label_2a9bb8:
    if (ctx->pc == 0x2A9BB8u) {
        ctx->pc = 0x2A9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BB4u;
        // 0x2a9bb8: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BBCu;
        goto label_2a9bbc;
    }
    ctx->pc = 0x2A9BB4u;
    SET_GPR_U32(ctx, 31, 0x2A9BBCu);
    ctx->pc = 0x2A9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9BB4u;
    // 0x2a9bb8: 0x240502a1  addiu       $a1, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2A9BB4u, 0x2A9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BBCu;
label_2a9bbc:
    // 0x2a9bbc: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_2a9bc0:
    if (ctx->pc == 0x2A9BC0u) {
        ctx->pc = 0x2A9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BBCu;
        // 0x2a9bc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BC4u;
        goto label_2a9bc4;
    }
    ctx->pc = 0x2A9BBCu;
    {
        const bool branch_taken_0x2a9bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BBCu;
        // 0x2a9bc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bbc) {
            ctx->pc = 0x2A9D28u;
            goto label_2a9d28;
        }
    }
    ctx->pc = 0x2A9BC4u;
label_2a9bc4:
    // 0x2a9bc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9bc8:
    // 0x2a9bc8: 0xc0a367c  jal         func_28D9F0
label_2a9bcc:
    if (ctx->pc == 0x2A9BCCu) {
        ctx->pc = 0x2A9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BC8u;
        // 0x2a9bcc: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BD0u;
        goto label_2a9bd0;
    }
    ctx->pc = 0x2A9BC8u;
    SET_GPR_U32(ctx, 31, 0x2A9BD0u);
    ctx->pc = 0x2A9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9BC8u;
    // 0x2a9bcc: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A9BC8u, 0x2A9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BD0u;
label_2a9bd0:
    // 0x2a9bd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a9bd4:
    if (ctx->pc == 0x2A9BD4u) {
        ctx->pc = 0x2A9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BD0u;
        // 0x2a9bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BD8u;
        goto label_2a9bd8;
    }
    ctx->pc = 0x2A9BD0u;
    {
        const bool branch_taken_0x2a9bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BD0u;
        // 0x2a9bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bd0) {
            ctx->pc = 0x2A9BF8u;
            goto label_2a9bf8;
        }
    }
    ctx->pc = 0x2A9BD8u;
label_2a9bd8:
    // 0x2a9bd8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a9bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9bdc:
    // 0x2a9bdc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a9be0:
    // 0x2a9be0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a9be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a9be4:
    // 0x2a9be4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a9be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a9be8:
    // 0x2a9be8: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2a9be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2a9bec:
    // 0x2a9bec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a9becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9bf0:
    // 0x2a9bf0: 0xc0be8c0  jal         func_2FA300
label_2a9bf4:
    if (ctx->pc == 0x2A9BF4u) {
        ctx->pc = 0x2A9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BF0u;
        // 0x2a9bf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9BF8u;
        goto label_2a9bf8;
    }
    ctx->pc = 0x2A9BF0u;
    SET_GPR_U32(ctx, 31, 0x2A9BF8u);
    ctx->pc = 0x2A9BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9BF0u;
    // 0x2a9bf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A9BF0u, 0x2A9BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BF8u;
label_2a9bf8:
    // 0x2a9bf8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a9bfc:
    // 0x2a9bfc: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2a9c00:
    if (ctx->pc == 0x2A9C00u) {
        ctx->pc = 0x2A9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BFCu;
        // 0x2a9c00: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C04u;
        goto label_2a9c04;
    }
    ctx->pc = 0x2A9BFCu;
    {
        const bool branch_taken_0x2a9bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a9bfc) {
            ctx->pc = 0x2A9C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9BFCu;
            // 0x2a9c00: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9C10u;
            goto label_2a9c10;
        }
    }
    ctx->pc = 0x2A9C04u;
label_2a9c04:
    // 0x2a9c04: 0xc0a3e2e  jal         func_28F8B8
label_2a9c08:
    if (ctx->pc == 0x2A9C08u) {
        ctx->pc = 0x2A9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C04u;
        // 0x2a9c08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C0Cu;
        goto label_2a9c0c;
    }
    ctx->pc = 0x2A9C04u;
    SET_GPR_U32(ctx, 31, 0x2A9C0Cu);
    ctx->pc = 0x2A9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C04u;
    // 0x2a9c08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8B8u, 0x2A9C04u, 0x2A9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C0Cu;
label_2a9c0c:
    // 0x2a9c0c: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x2a9c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2a9c10:
    // 0x2a9c10: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2a9c14:
    if (ctx->pc == 0x2A9C14u) {
        ctx->pc = 0x2A9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C10u;
        // 0x2a9c14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C18u;
        goto label_2a9c18;
    }
    ctx->pc = 0x2A9C10u;
    {
        const bool branch_taken_0x2a9c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C10u;
        // 0x2a9c14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c10) {
            ctx->pc = 0x2A9C54u;
            goto label_2a9c54;
        }
    }
    ctx->pc = 0x2A9C18u;
label_2a9c18:
    // 0x2a9c18: 0x9262001e  lbu         $v0, 0x1E($s3)
    ctx->pc = 0x2a9c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 30)));
label_2a9c1c:
    // 0x2a9c1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2a9c20:
    if (ctx->pc == 0x2A9C20u) {
        ctx->pc = 0x2A9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C1Cu;
        // 0x2a9c20: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C24u;
        goto label_2a9c24;
    }
    ctx->pc = 0x2A9C1Cu;
    {
        const bool branch_taken_0x2a9c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c1c) {
            ctx->pc = 0x2A9C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9C1Cu;
            // 0x2a9c20: 0x9222001e  lbu         $v0, 0x1E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9C48u;
            goto label_2a9c48;
        }
    }
    ctx->pc = 0x2A9C24u;
label_2a9c24:
    // 0x2a9c24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9c28:
    // 0x2a9c28: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2a9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2a9c2c:
    // 0x2a9c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a9c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a9c30:
    // 0x2a9c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a9c34:
    if (ctx->pc == 0x2A9C34u) {
        ctx->pc = 0x2A9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C30u;
        // 0x2a9c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C38u;
        goto label_2a9c38;
    }
    ctx->pc = 0x2A9C30u;
    {
        const bool branch_taken_0x2a9c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C30u;
        // 0x2a9c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c30) {
            ctx->pc = 0x2A9C40u;
            goto label_2a9c40;
        }
    }
    ctx->pc = 0x2A9C38u;
label_2a9c38:
    // 0x2a9c38: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a9c3c:
    if (ctx->pc == 0x2A9C3Cu) {
        ctx->pc = 0x2A9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C38u;
        // 0x2a9c3c: 0xa236001e  sb          $s6, 0x1E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C40u;
        goto label_2a9c40;
    }
    ctx->pc = 0x2A9C38u;
    {
        const bool branch_taken_0x2a9c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C38u;
        // 0x2a9c3c: 0xa236001e  sb          $s6, 0x1E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c38) {
            ctx->pc = 0x2A9C44u;
            goto label_2a9c44;
        }
    }
    ctx->pc = 0x2A9C40u;
label_2a9c40:
    // 0x2a9c40: 0xa262001e  sb          $v0, 0x1E($s3)
    ctx->pc = 0x2a9c40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 30), (uint8_t)GPR_U32(ctx, 2));
label_2a9c44:
    // 0x2a9c44: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x2a9c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2a9c48:
    // 0x2a9c48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2a9c4c:
    if (ctx->pc == 0x2A9C4Cu) {
        ctx->pc = 0x2A9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C48u;
        // 0x2a9c4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C50u;
        goto label_2a9c50;
    }
    ctx->pc = 0x2A9C48u;
    {
        const bool branch_taken_0x2a9c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C48u;
        // 0x2a9c4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c48) {
            ctx->pc = 0x2A9C54u;
            goto label_2a9c54;
        }
    }
    ctx->pc = 0x2A9C50u;
label_2a9c50:
    // 0x2a9c50: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a9c54:
    // 0x2a9c54: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2a9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2a9c58:
    // 0x2a9c58: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2a9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a9c5c:
    // 0x2a9c5c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a9c60:
    // 0x2a9c60: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_2a9c64:
    if (ctx->pc == 0x2A9C64u) {
        ctx->pc = 0x2A9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C60u;
        // 0x2a9c64: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C68u;
        goto label_2a9c68;
    }
    ctx->pc = 0x2A9C60u;
    {
        const bool branch_taken_0x2a9c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C60u;
        // 0x2a9c64: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c60) {
            ctx->pc = 0x2A9D04u;
            goto label_2a9d04;
        }
    }
    ctx->pc = 0x2A9C68u;
label_2a9c68:
    // 0x2a9c68: 0x9222001e  lbu         $v0, 0x1E($s1)
    ctx->pc = 0x2a9c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2a9c6c:
    // 0x2a9c6c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2a9c6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a9c70:
    // 0x2a9c70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2a9c74:
    if (ctx->pc == 0x2A9C74u) {
        ctx->pc = 0x2A9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C70u;
        // 0x2a9c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C78u;
        goto label_2a9c78;
    }
    ctx->pc = 0x2A9C70u;
    {
        const bool branch_taken_0x2a9c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C70u;
        // 0x2a9c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c70) {
            ctx->pc = 0x2A9C88u;
            goto label_2a9c88;
        }
    }
    ctx->pc = 0x2A9C78u;
label_2a9c78:
    // 0x2a9c78: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a9c7c:
    // 0x2a9c7c: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x2a9c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_2a9c80:
    // 0x2a9c80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2a9c84:
    if (ctx->pc == 0x2A9C84u) {
        ctx->pc = 0x2A9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C80u;
        // 0x2a9c84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9C88u;
        goto label_2a9c88;
    }
    ctx->pc = 0x2A9C80u;
    {
        const bool branch_taken_0x2a9c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c80) {
            ctx->pc = 0x2A9C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9C80u;
            // 0x2a9c84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9CA4u;
            goto label_2a9ca4;
        }
    }
    ctx->pc = 0x2A9C88u;
label_2a9c88:
    // 0x2a9c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9c8c:
    // 0x2a9c8c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2a9c90:
    if (ctx->pc == 0x2A9C90u) {
        ctx->pc = 0x2A9C94u;
        goto label_2a9c94;
    }
    ctx->pc = 0x2A9C8Cu;
    {
        const bool branch_taken_0x2a9c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9c8c) {
            ctx->pc = 0x2A9CA4u;
            goto label_2a9ca4;
        }
    }
    ctx->pc = 0x2A9C94u;
label_2a9c94:
    // 0x2a9c94: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2a9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a9c98:
    // 0x2a9c98: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2a9c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_2a9c9c:
    // 0x2a9c9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2a9ca0:
    if (ctx->pc == 0x2A9CA0u) {
        ctx->pc = 0x2A9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C9Cu;
        // 0x2a9ca0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CA4u;
        goto label_2a9ca4;
    }
    ctx->pc = 0x2A9C9Cu;
    {
        const bool branch_taken_0x2a9c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c9c) {
            ctx->pc = 0x2A9CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9C9Cu;
            // 0x2a9ca0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9CA4u;
            goto label_2a9ca4;
        }
    }
    ctx->pc = 0x2A9CA4u;
label_2a9ca4:
    // 0x2a9ca4: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
label_2a9ca8:
    if (ctx->pc == 0x2A9CA8u) {
        ctx->pc = 0x2A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CA4u;
        // 0x2a9ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CACu;
        goto label_2a9cac;
    }
    ctx->pc = 0x2A9CA4u;
    {
        const bool branch_taken_0x2a9ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CA4u;
        // 0x2a9ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ca4) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9CACu;
label_2a9cac:
    // 0x2a9cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a9cb0:
    // 0x2a9cb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a9cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a9cb4:
    // 0x2a9cb4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a9cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cb8:
    // 0x2a9cb8: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2a9cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_2a9cbc:
    // 0x2a9cbc: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x2a9cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2a9cc0:
    // 0x2a9cc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a9cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a9cc4:
    // 0x2a9cc4: 0xc0a6800  jal         func_29A000
label_2a9cc8:
    if (ctx->pc == 0x2A9CC8u) {
        ctx->pc = 0x2A9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CC4u;
        // 0x2a9cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CCCu;
        goto label_2a9ccc;
    }
    ctx->pc = 0x2A9CC4u;
    SET_GPR_U32(ctx, 31, 0x2A9CCCu);
    ctx->pc = 0x2A9CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9CC4u;
    // 0x2a9cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2A9CC4u, 0x2A9CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9CCCu;
label_2a9ccc:
    // 0x2a9ccc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a9cd0:
    // 0x2a9cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a9cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cd4:
    // 0x2a9cd4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2a9cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a9cd8:
    // 0x2a9cd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a9cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a9cdc:
    // 0x2a9cdc: 0x240500b5  addiu       $a1, $zero, 0xB5
    ctx->pc = 0x2a9cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_2a9ce0:
    // 0x2a9ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ce4:
    // 0x2a9ce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a9ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9ce8:
    // 0x2a9ce8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a9ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9cec:
    // 0x2a9cec: 0xc088178  jal         func_2205E0
label_2a9cf0:
    if (ctx->pc == 0x2A9CF0u) {
        ctx->pc = 0x2A9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CECu;
        // 0x2a9cf0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9CF4u;
        goto label_2a9cf4;
    }
    ctx->pc = 0x2A9CECu;
    SET_GPR_U32(ctx, 31, 0x2A9CF4u);
    ctx->pc = 0x2A9CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9CECu;
    // 0x2a9cf0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A9CECu, 0x2A9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9CF4u;
label_2a9cf4:
    // 0x2a9cf4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a9cf8:
    // 0x2a9cf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9cfc:
    // 0x2a9cfc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a9d00:
    if (ctx->pc == 0x2A9D00u) {
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CFCu;
        // 0x2a9d00: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D04u;
        goto label_2a9d04;
    }
    ctx->pc = 0x2A9CFCu;
    {
        const bool branch_taken_0x2a9cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CFCu;
        // 0x2a9d00: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cfc) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9D04u;
label_2a9d04:
    // 0x2a9d04: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2a9d08:
    if (ctx->pc == 0x2A9D08u) {
        ctx->pc = 0x2A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D04u;
        // 0x2a9d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D0Cu;
        goto label_2a9d0c;
    }
    ctx->pc = 0x2A9D04u;
    {
        const bool branch_taken_0x2a9d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D04u;
        // 0x2a9d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d04) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9D0Cu;
label_2a9d0c:
    // 0x2a9d0c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2a9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2a9d10:
    // 0x2a9d10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2a9d14:
    if (ctx->pc == 0x2A9D14u) {
        ctx->pc = 0x2A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D10u;
        // 0x2a9d14: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D18u;
        goto label_2a9d18;
    }
    ctx->pc = 0x2A9D10u;
    {
        const bool branch_taken_0x2a9d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D10u;
        // 0x2a9d14: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d10) {
            ctx->pc = 0x2A9D20u;
            goto label_2a9d20;
        }
    }
    ctx->pc = 0x2A9D18u;
label_2a9d18:
    // 0x2a9d18: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_2a9d1c:
    if (ctx->pc == 0x2A9D1Cu) {
        ctx->pc = 0x2A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D18u;
        // 0x2a9d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D20u;
        goto label_2a9d20;
    }
    ctx->pc = 0x2A9D18u;
    {
        const bool branch_taken_0x2a9d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D18u;
        // 0x2a9d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d18) {
            ctx->pc = 0x2A9D2Cu;
            goto label_2a9d2c;
        }
    }
    ctx->pc = 0x2A9D20u;
label_2a9d20:
    // 0x2a9d20: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a9d24:
    // 0x2a9d24: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2a9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2a9d28:
    // 0x2a9d28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9d2c:
    // 0x2a9d2c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2a9d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a9d30:
    // 0x2a9d30: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2a9d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a9d34:
    // 0x2a9d34: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2a9d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a9d38:
    // 0x2a9d38: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2a9d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a9d3c:
    // 0x2a9d3c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2a9d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a9d40:
    // 0x2a9d40: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2a9d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a9d44:
    // 0x2a9d44: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2a9d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a9d48:
    // 0x2a9d48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a9d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a9d4c:
    // 0x2a9d4c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2a9d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a9d50:
    // 0x2a9d50: 0x3e00008  jr          $ra
label_2a9d54:
    if (ctx->pc == 0x2A9D54u) {
        ctx->pc = 0x2A9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D50u;
        // 0x2a9d54: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9D58u;
        goto label_fallthrough_0x2a9d50;
    }
    ctx->pc = 0x2A9D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D50u;
        // 0x2a9d54: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a9d50:
    ctx->pc = 0x2A9D58u;
}
