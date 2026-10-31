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

// Function: sub_001B9600
// Address: 0x1b9600 - 0x1bac20
void sub_001B9600_0x1b9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9600_0x1b9600");
#endif

    switch (ctx->pc) {
        case 0x1b9600u: goto label_1b9600;
        case 0x1b9604u: goto label_1b9604;
        case 0x1b9608u: goto label_1b9608;
        case 0x1b960cu: goto label_1b960c;
        case 0x1b9610u: goto label_1b9610;
        case 0x1b9614u: goto label_1b9614;
        case 0x1b9618u: goto label_1b9618;
        case 0x1b961cu: goto label_1b961c;
        case 0x1b9620u: goto label_1b9620;
        case 0x1b9624u: goto label_1b9624;
        case 0x1b9628u: goto label_1b9628;
        case 0x1b962cu: goto label_1b962c;
        case 0x1b9630u: goto label_1b9630;
        case 0x1b9634u: goto label_1b9634;
        case 0x1b9638u: goto label_1b9638;
        case 0x1b963cu: goto label_1b963c;
        case 0x1b9640u: goto label_1b9640;
        case 0x1b9644u: goto label_1b9644;
        case 0x1b9648u: goto label_1b9648;
        case 0x1b964cu: goto label_1b964c;
        case 0x1b9650u: goto label_1b9650;
        case 0x1b9654u: goto label_1b9654;
        case 0x1b9658u: goto label_1b9658;
        case 0x1b965cu: goto label_1b965c;
        case 0x1b9660u: goto label_1b9660;
        case 0x1b9664u: goto label_1b9664;
        case 0x1b9668u: goto label_1b9668;
        case 0x1b966cu: goto label_1b966c;
        case 0x1b9670u: goto label_1b9670;
        case 0x1b9674u: goto label_1b9674;
        case 0x1b9678u: goto label_1b9678;
        case 0x1b967cu: goto label_1b967c;
        case 0x1b9680u: goto label_1b9680;
        case 0x1b9684u: goto label_1b9684;
        case 0x1b9688u: goto label_1b9688;
        case 0x1b968cu: goto label_1b968c;
        case 0x1b9690u: goto label_1b9690;
        case 0x1b9694u: goto label_1b9694;
        case 0x1b9698u: goto label_1b9698;
        case 0x1b969cu: goto label_1b969c;
        case 0x1b96a0u: goto label_1b96a0;
        case 0x1b96a4u: goto label_1b96a4;
        case 0x1b96a8u: goto label_1b96a8;
        case 0x1b96acu: goto label_1b96ac;
        case 0x1b96b0u: goto label_1b96b0;
        case 0x1b96b4u: goto label_1b96b4;
        case 0x1b96b8u: goto label_1b96b8;
        case 0x1b96bcu: goto label_1b96bc;
        case 0x1b96c0u: goto label_1b96c0;
        case 0x1b96c4u: goto label_1b96c4;
        case 0x1b96c8u: goto label_1b96c8;
        case 0x1b96ccu: goto label_1b96cc;
        case 0x1b96d0u: goto label_1b96d0;
        case 0x1b96d4u: goto label_1b96d4;
        case 0x1b96d8u: goto label_1b96d8;
        case 0x1b96dcu: goto label_1b96dc;
        case 0x1b96e0u: goto label_1b96e0;
        case 0x1b96e4u: goto label_1b96e4;
        case 0x1b96e8u: goto label_1b96e8;
        case 0x1b96ecu: goto label_1b96ec;
        case 0x1b96f0u: goto label_1b96f0;
        case 0x1b96f4u: goto label_1b96f4;
        case 0x1b96f8u: goto label_1b96f8;
        case 0x1b96fcu: goto label_1b96fc;
        case 0x1b9700u: goto label_1b9700;
        case 0x1b9704u: goto label_1b9704;
        case 0x1b9708u: goto label_1b9708;
        case 0x1b970cu: goto label_1b970c;
        case 0x1b9710u: goto label_1b9710;
        case 0x1b9714u: goto label_1b9714;
        case 0x1b9718u: goto label_1b9718;
        case 0x1b971cu: goto label_1b971c;
        case 0x1b9720u: goto label_1b9720;
        case 0x1b9724u: goto label_1b9724;
        case 0x1b9728u: goto label_1b9728;
        case 0x1b972cu: goto label_1b972c;
        case 0x1b9730u: goto label_1b9730;
        case 0x1b9734u: goto label_1b9734;
        case 0x1b9738u: goto label_1b9738;
        case 0x1b973cu: goto label_1b973c;
        case 0x1b9740u: goto label_1b9740;
        case 0x1b9744u: goto label_1b9744;
        case 0x1b9748u: goto label_1b9748;
        case 0x1b974cu: goto label_1b974c;
        case 0x1b9750u: goto label_1b9750;
        case 0x1b9754u: goto label_1b9754;
        case 0x1b9758u: goto label_1b9758;
        case 0x1b975cu: goto label_1b975c;
        case 0x1b9760u: goto label_1b9760;
        case 0x1b9764u: goto label_1b9764;
        case 0x1b9768u: goto label_1b9768;
        case 0x1b976cu: goto label_1b976c;
        case 0x1b9770u: goto label_1b9770;
        case 0x1b9774u: goto label_1b9774;
        case 0x1b9778u: goto label_1b9778;
        case 0x1b977cu: goto label_1b977c;
        case 0x1b9780u: goto label_1b9780;
        case 0x1b9784u: goto label_1b9784;
        case 0x1b9788u: goto label_1b9788;
        case 0x1b978cu: goto label_1b978c;
        case 0x1b9790u: goto label_1b9790;
        case 0x1b9794u: goto label_1b9794;
        case 0x1b9798u: goto label_1b9798;
        case 0x1b979cu: goto label_1b979c;
        case 0x1b97a0u: goto label_1b97a0;
        case 0x1b97a4u: goto label_1b97a4;
        case 0x1b97a8u: goto label_1b97a8;
        case 0x1b97acu: goto label_1b97ac;
        case 0x1b97b0u: goto label_1b97b0;
        case 0x1b97b4u: goto label_1b97b4;
        case 0x1b97b8u: goto label_1b97b8;
        case 0x1b97bcu: goto label_1b97bc;
        case 0x1b97c0u: goto label_1b97c0;
        case 0x1b97c4u: goto label_1b97c4;
        case 0x1b97c8u: goto label_1b97c8;
        case 0x1b97ccu: goto label_1b97cc;
        case 0x1b97d0u: goto label_1b97d0;
        case 0x1b97d4u: goto label_1b97d4;
        case 0x1b97d8u: goto label_1b97d8;
        case 0x1b97dcu: goto label_1b97dc;
        case 0x1b97e0u: goto label_1b97e0;
        case 0x1b97e4u: goto label_1b97e4;
        case 0x1b97e8u: goto label_1b97e8;
        case 0x1b97ecu: goto label_1b97ec;
        case 0x1b97f0u: goto label_1b97f0;
        case 0x1b97f4u: goto label_1b97f4;
        case 0x1b97f8u: goto label_1b97f8;
        case 0x1b97fcu: goto label_1b97fc;
        case 0x1b9800u: goto label_1b9800;
        case 0x1b9804u: goto label_1b9804;
        case 0x1b9808u: goto label_1b9808;
        case 0x1b980cu: goto label_1b980c;
        case 0x1b9810u: goto label_1b9810;
        case 0x1b9814u: goto label_1b9814;
        case 0x1b9818u: goto label_1b9818;
        case 0x1b981cu: goto label_1b981c;
        case 0x1b9820u: goto label_1b9820;
        case 0x1b9824u: goto label_1b9824;
        case 0x1b9828u: goto label_1b9828;
        case 0x1b982cu: goto label_1b982c;
        case 0x1b9830u: goto label_1b9830;
        case 0x1b9834u: goto label_1b9834;
        case 0x1b9838u: goto label_1b9838;
        case 0x1b983cu: goto label_1b983c;
        case 0x1b9840u: goto label_1b9840;
        case 0x1b9844u: goto label_1b9844;
        case 0x1b9848u: goto label_1b9848;
        case 0x1b984cu: goto label_1b984c;
        case 0x1b9850u: goto label_1b9850;
        case 0x1b9854u: goto label_1b9854;
        case 0x1b9858u: goto label_1b9858;
        case 0x1b985cu: goto label_1b985c;
        case 0x1b9860u: goto label_1b9860;
        case 0x1b9864u: goto label_1b9864;
        case 0x1b9868u: goto label_1b9868;
        case 0x1b986cu: goto label_1b986c;
        case 0x1b9870u: goto label_1b9870;
        case 0x1b9874u: goto label_1b9874;
        case 0x1b9878u: goto label_1b9878;
        case 0x1b987cu: goto label_1b987c;
        case 0x1b9880u: goto label_1b9880;
        case 0x1b9884u: goto label_1b9884;
        case 0x1b9888u: goto label_1b9888;
        case 0x1b988cu: goto label_1b988c;
        case 0x1b9890u: goto label_1b9890;
        case 0x1b9894u: goto label_1b9894;
        case 0x1b9898u: goto label_1b9898;
        case 0x1b989cu: goto label_1b989c;
        case 0x1b98a0u: goto label_1b98a0;
        case 0x1b98a4u: goto label_1b98a4;
        case 0x1b98a8u: goto label_1b98a8;
        case 0x1b98acu: goto label_1b98ac;
        case 0x1b98b0u: goto label_1b98b0;
        case 0x1b98b4u: goto label_1b98b4;
        case 0x1b98b8u: goto label_1b98b8;
        case 0x1b98bcu: goto label_1b98bc;
        case 0x1b98c0u: goto label_1b98c0;
        case 0x1b98c4u: goto label_1b98c4;
        case 0x1b98c8u: goto label_1b98c8;
        case 0x1b98ccu: goto label_1b98cc;
        case 0x1b98d0u: goto label_1b98d0;
        case 0x1b98d4u: goto label_1b98d4;
        case 0x1b98d8u: goto label_1b98d8;
        case 0x1b98dcu: goto label_1b98dc;
        case 0x1b98e0u: goto label_1b98e0;
        case 0x1b98e4u: goto label_1b98e4;
        case 0x1b98e8u: goto label_1b98e8;
        case 0x1b98ecu: goto label_1b98ec;
        case 0x1b98f0u: goto label_1b98f0;
        case 0x1b98f4u: goto label_1b98f4;
        case 0x1b98f8u: goto label_1b98f8;
        case 0x1b98fcu: goto label_1b98fc;
        case 0x1b9900u: goto label_1b9900;
        case 0x1b9904u: goto label_1b9904;
        case 0x1b9908u: goto label_1b9908;
        case 0x1b990cu: goto label_1b990c;
        case 0x1b9910u: goto label_1b9910;
        case 0x1b9914u: goto label_1b9914;
        case 0x1b9918u: goto label_1b9918;
        case 0x1b991cu: goto label_1b991c;
        case 0x1b9920u: goto label_1b9920;
        case 0x1b9924u: goto label_1b9924;
        case 0x1b9928u: goto label_1b9928;
        case 0x1b992cu: goto label_1b992c;
        case 0x1b9930u: goto label_1b9930;
        case 0x1b9934u: goto label_1b9934;
        case 0x1b9938u: goto label_1b9938;
        case 0x1b993cu: goto label_1b993c;
        case 0x1b9940u: goto label_1b9940;
        case 0x1b9944u: goto label_1b9944;
        case 0x1b9948u: goto label_1b9948;
        case 0x1b994cu: goto label_1b994c;
        case 0x1b9950u: goto label_1b9950;
        case 0x1b9954u: goto label_1b9954;
        case 0x1b9958u: goto label_1b9958;
        case 0x1b995cu: goto label_1b995c;
        case 0x1b9960u: goto label_1b9960;
        case 0x1b9964u: goto label_1b9964;
        case 0x1b9968u: goto label_1b9968;
        case 0x1b996cu: goto label_1b996c;
        case 0x1b9970u: goto label_1b9970;
        case 0x1b9974u: goto label_1b9974;
        case 0x1b9978u: goto label_1b9978;
        case 0x1b997cu: goto label_1b997c;
        case 0x1b9980u: goto label_1b9980;
        case 0x1b9984u: goto label_1b9984;
        case 0x1b9988u: goto label_1b9988;
        case 0x1b998cu: goto label_1b998c;
        case 0x1b9990u: goto label_1b9990;
        case 0x1b9994u: goto label_1b9994;
        case 0x1b9998u: goto label_1b9998;
        case 0x1b999cu: goto label_1b999c;
        case 0x1b99a0u: goto label_1b99a0;
        case 0x1b99a4u: goto label_1b99a4;
        case 0x1b99a8u: goto label_1b99a8;
        case 0x1b99acu: goto label_1b99ac;
        case 0x1b99b0u: goto label_1b99b0;
        case 0x1b99b4u: goto label_1b99b4;
        case 0x1b99b8u: goto label_1b99b8;
        case 0x1b99bcu: goto label_1b99bc;
        case 0x1b99c0u: goto label_1b99c0;
        case 0x1b99c4u: goto label_1b99c4;
        case 0x1b99c8u: goto label_1b99c8;
        case 0x1b99ccu: goto label_1b99cc;
        case 0x1b99d0u: goto label_1b99d0;
        case 0x1b99d4u: goto label_1b99d4;
        case 0x1b99d8u: goto label_1b99d8;
        case 0x1b99dcu: goto label_1b99dc;
        case 0x1b99e0u: goto label_1b99e0;
        case 0x1b99e4u: goto label_1b99e4;
        case 0x1b99e8u: goto label_1b99e8;
        case 0x1b99ecu: goto label_1b99ec;
        case 0x1b99f0u: goto label_1b99f0;
        case 0x1b99f4u: goto label_1b99f4;
        case 0x1b99f8u: goto label_1b99f8;
        case 0x1b99fcu: goto label_1b99fc;
        case 0x1b9a00u: goto label_1b9a00;
        case 0x1b9a04u: goto label_1b9a04;
        case 0x1b9a08u: goto label_1b9a08;
        case 0x1b9a0cu: goto label_1b9a0c;
        case 0x1b9a10u: goto label_1b9a10;
        case 0x1b9a14u: goto label_1b9a14;
        case 0x1b9a18u: goto label_1b9a18;
        case 0x1b9a1cu: goto label_1b9a1c;
        case 0x1b9a20u: goto label_1b9a20;
        case 0x1b9a24u: goto label_1b9a24;
        case 0x1b9a28u: goto label_1b9a28;
        case 0x1b9a2cu: goto label_1b9a2c;
        case 0x1b9a30u: goto label_1b9a30;
        case 0x1b9a34u: goto label_1b9a34;
        case 0x1b9a38u: goto label_1b9a38;
        case 0x1b9a3cu: goto label_1b9a3c;
        case 0x1b9a40u: goto label_1b9a40;
        case 0x1b9a44u: goto label_1b9a44;
        case 0x1b9a48u: goto label_1b9a48;
        case 0x1b9a4cu: goto label_1b9a4c;
        case 0x1b9a50u: goto label_1b9a50;
        case 0x1b9a54u: goto label_1b9a54;
        case 0x1b9a58u: goto label_1b9a58;
        case 0x1b9a5cu: goto label_1b9a5c;
        case 0x1b9a60u: goto label_1b9a60;
        case 0x1b9a64u: goto label_1b9a64;
        case 0x1b9a68u: goto label_1b9a68;
        case 0x1b9a6cu: goto label_1b9a6c;
        case 0x1b9a70u: goto label_1b9a70;
        case 0x1b9a74u: goto label_1b9a74;
        case 0x1b9a78u: goto label_1b9a78;
        case 0x1b9a7cu: goto label_1b9a7c;
        case 0x1b9a80u: goto label_1b9a80;
        case 0x1b9a84u: goto label_1b9a84;
        case 0x1b9a88u: goto label_1b9a88;
        case 0x1b9a8cu: goto label_1b9a8c;
        case 0x1b9a90u: goto label_1b9a90;
        case 0x1b9a94u: goto label_1b9a94;
        case 0x1b9a98u: goto label_1b9a98;
        case 0x1b9a9cu: goto label_1b9a9c;
        case 0x1b9aa0u: goto label_1b9aa0;
        case 0x1b9aa4u: goto label_1b9aa4;
        case 0x1b9aa8u: goto label_1b9aa8;
        case 0x1b9aacu: goto label_1b9aac;
        case 0x1b9ab0u: goto label_1b9ab0;
        case 0x1b9ab4u: goto label_1b9ab4;
        case 0x1b9ab8u: goto label_1b9ab8;
        case 0x1b9abcu: goto label_1b9abc;
        case 0x1b9ac0u: goto label_1b9ac0;
        case 0x1b9ac4u: goto label_1b9ac4;
        case 0x1b9ac8u: goto label_1b9ac8;
        case 0x1b9accu: goto label_1b9acc;
        case 0x1b9ad0u: goto label_1b9ad0;
        case 0x1b9ad4u: goto label_1b9ad4;
        case 0x1b9ad8u: goto label_1b9ad8;
        case 0x1b9adcu: goto label_1b9adc;
        case 0x1b9ae0u: goto label_1b9ae0;
        case 0x1b9ae4u: goto label_1b9ae4;
        case 0x1b9ae8u: goto label_1b9ae8;
        case 0x1b9aecu: goto label_1b9aec;
        case 0x1b9af0u: goto label_1b9af0;
        case 0x1b9af4u: goto label_1b9af4;
        case 0x1b9af8u: goto label_1b9af8;
        case 0x1b9afcu: goto label_1b9afc;
        case 0x1b9b00u: goto label_1b9b00;
        case 0x1b9b04u: goto label_1b9b04;
        case 0x1b9b08u: goto label_1b9b08;
        case 0x1b9b0cu: goto label_1b9b0c;
        case 0x1b9b10u: goto label_1b9b10;
        case 0x1b9b14u: goto label_1b9b14;
        case 0x1b9b18u: goto label_1b9b18;
        case 0x1b9b1cu: goto label_1b9b1c;
        case 0x1b9b20u: goto label_1b9b20;
        case 0x1b9b24u: goto label_1b9b24;
        case 0x1b9b28u: goto label_1b9b28;
        case 0x1b9b2cu: goto label_1b9b2c;
        case 0x1b9b30u: goto label_1b9b30;
        case 0x1b9b34u: goto label_1b9b34;
        case 0x1b9b38u: goto label_1b9b38;
        case 0x1b9b3cu: goto label_1b9b3c;
        case 0x1b9b40u: goto label_1b9b40;
        case 0x1b9b44u: goto label_1b9b44;
        case 0x1b9b48u: goto label_1b9b48;
        case 0x1b9b4cu: goto label_1b9b4c;
        case 0x1b9b50u: goto label_1b9b50;
        case 0x1b9b54u: goto label_1b9b54;
        case 0x1b9b58u: goto label_1b9b58;
        case 0x1b9b5cu: goto label_1b9b5c;
        case 0x1b9b60u: goto label_1b9b60;
        case 0x1b9b64u: goto label_1b9b64;
        case 0x1b9b68u: goto label_1b9b68;
        case 0x1b9b6cu: goto label_1b9b6c;
        case 0x1b9b70u: goto label_1b9b70;
        case 0x1b9b74u: goto label_1b9b74;
        case 0x1b9b78u: goto label_1b9b78;
        case 0x1b9b7cu: goto label_1b9b7c;
        case 0x1b9b80u: goto label_1b9b80;
        case 0x1b9b84u: goto label_1b9b84;
        case 0x1b9b88u: goto label_1b9b88;
        case 0x1b9b8cu: goto label_1b9b8c;
        case 0x1b9b90u: goto label_1b9b90;
        case 0x1b9b94u: goto label_1b9b94;
        case 0x1b9b98u: goto label_1b9b98;
        case 0x1b9b9cu: goto label_1b9b9c;
        case 0x1b9ba0u: goto label_1b9ba0;
        case 0x1b9ba4u: goto label_1b9ba4;
        case 0x1b9ba8u: goto label_1b9ba8;
        case 0x1b9bacu: goto label_1b9bac;
        case 0x1b9bb0u: goto label_1b9bb0;
        case 0x1b9bb4u: goto label_1b9bb4;
        case 0x1b9bb8u: goto label_1b9bb8;
        case 0x1b9bbcu: goto label_1b9bbc;
        case 0x1b9bc0u: goto label_1b9bc0;
        case 0x1b9bc4u: goto label_1b9bc4;
        case 0x1b9bc8u: goto label_1b9bc8;
        case 0x1b9bccu: goto label_1b9bcc;
        case 0x1b9bd0u: goto label_1b9bd0;
        case 0x1b9bd4u: goto label_1b9bd4;
        case 0x1b9bd8u: goto label_1b9bd8;
        case 0x1b9bdcu: goto label_1b9bdc;
        case 0x1b9be0u: goto label_1b9be0;
        case 0x1b9be4u: goto label_1b9be4;
        case 0x1b9be8u: goto label_1b9be8;
        case 0x1b9becu: goto label_1b9bec;
        case 0x1b9bf0u: goto label_1b9bf0;
        case 0x1b9bf4u: goto label_1b9bf4;
        case 0x1b9bf8u: goto label_1b9bf8;
        case 0x1b9bfcu: goto label_1b9bfc;
        case 0x1b9c00u: goto label_1b9c00;
        case 0x1b9c04u: goto label_1b9c04;
        case 0x1b9c08u: goto label_1b9c08;
        case 0x1b9c0cu: goto label_1b9c0c;
        case 0x1b9c10u: goto label_1b9c10;
        case 0x1b9c14u: goto label_1b9c14;
        case 0x1b9c18u: goto label_1b9c18;
        case 0x1b9c1cu: goto label_1b9c1c;
        case 0x1b9c20u: goto label_1b9c20;
        case 0x1b9c24u: goto label_1b9c24;
        case 0x1b9c28u: goto label_1b9c28;
        case 0x1b9c2cu: goto label_1b9c2c;
        case 0x1b9c30u: goto label_1b9c30;
        case 0x1b9c34u: goto label_1b9c34;
        case 0x1b9c38u: goto label_1b9c38;
        case 0x1b9c3cu: goto label_1b9c3c;
        case 0x1b9c40u: goto label_1b9c40;
        case 0x1b9c44u: goto label_1b9c44;
        case 0x1b9c48u: goto label_1b9c48;
        case 0x1b9c4cu: goto label_1b9c4c;
        case 0x1b9c50u: goto label_1b9c50;
        case 0x1b9c54u: goto label_1b9c54;
        case 0x1b9c58u: goto label_1b9c58;
        case 0x1b9c5cu: goto label_1b9c5c;
        case 0x1b9c60u: goto label_1b9c60;
        case 0x1b9c64u: goto label_1b9c64;
        case 0x1b9c68u: goto label_1b9c68;
        case 0x1b9c6cu: goto label_1b9c6c;
        case 0x1b9c70u: goto label_1b9c70;
        case 0x1b9c74u: goto label_1b9c74;
        case 0x1b9c78u: goto label_1b9c78;
        case 0x1b9c7cu: goto label_1b9c7c;
        case 0x1b9c80u: goto label_1b9c80;
        case 0x1b9c84u: goto label_1b9c84;
        case 0x1b9c88u: goto label_1b9c88;
        case 0x1b9c8cu: goto label_1b9c8c;
        case 0x1b9c90u: goto label_1b9c90;
        case 0x1b9c94u: goto label_1b9c94;
        case 0x1b9c98u: goto label_1b9c98;
        case 0x1b9c9cu: goto label_1b9c9c;
        case 0x1b9ca0u: goto label_1b9ca0;
        case 0x1b9ca4u: goto label_1b9ca4;
        case 0x1b9ca8u: goto label_1b9ca8;
        case 0x1b9cacu: goto label_1b9cac;
        case 0x1b9cb0u: goto label_1b9cb0;
        case 0x1b9cb4u: goto label_1b9cb4;
        case 0x1b9cb8u: goto label_1b9cb8;
        case 0x1b9cbcu: goto label_1b9cbc;
        case 0x1b9cc0u: goto label_1b9cc0;
        case 0x1b9cc4u: goto label_1b9cc4;
        case 0x1b9cc8u: goto label_1b9cc8;
        case 0x1b9cccu: goto label_1b9ccc;
        case 0x1b9cd0u: goto label_1b9cd0;
        case 0x1b9cd4u: goto label_1b9cd4;
        case 0x1b9cd8u: goto label_1b9cd8;
        case 0x1b9cdcu: goto label_1b9cdc;
        case 0x1b9ce0u: goto label_1b9ce0;
        case 0x1b9ce4u: goto label_1b9ce4;
        case 0x1b9ce8u: goto label_1b9ce8;
        case 0x1b9cecu: goto label_1b9cec;
        case 0x1b9cf0u: goto label_1b9cf0;
        case 0x1b9cf4u: goto label_1b9cf4;
        case 0x1b9cf8u: goto label_1b9cf8;
        case 0x1b9cfcu: goto label_1b9cfc;
        case 0x1b9d00u: goto label_1b9d00;
        case 0x1b9d04u: goto label_1b9d04;
        case 0x1b9d08u: goto label_1b9d08;
        case 0x1b9d0cu: goto label_1b9d0c;
        case 0x1b9d10u: goto label_1b9d10;
        case 0x1b9d14u: goto label_1b9d14;
        case 0x1b9d18u: goto label_1b9d18;
        case 0x1b9d1cu: goto label_1b9d1c;
        case 0x1b9d20u: goto label_1b9d20;
        case 0x1b9d24u: goto label_1b9d24;
        case 0x1b9d28u: goto label_1b9d28;
        case 0x1b9d2cu: goto label_1b9d2c;
        case 0x1b9d30u: goto label_1b9d30;
        case 0x1b9d34u: goto label_1b9d34;
        case 0x1b9d38u: goto label_1b9d38;
        case 0x1b9d3cu: goto label_1b9d3c;
        case 0x1b9d40u: goto label_1b9d40;
        case 0x1b9d44u: goto label_1b9d44;
        case 0x1b9d48u: goto label_1b9d48;
        case 0x1b9d4cu: goto label_1b9d4c;
        case 0x1b9d50u: goto label_1b9d50;
        case 0x1b9d54u: goto label_1b9d54;
        case 0x1b9d58u: goto label_1b9d58;
        case 0x1b9d5cu: goto label_1b9d5c;
        case 0x1b9d60u: goto label_1b9d60;
        case 0x1b9d64u: goto label_1b9d64;
        case 0x1b9d68u: goto label_1b9d68;
        case 0x1b9d6cu: goto label_1b9d6c;
        case 0x1b9d70u: goto label_1b9d70;
        case 0x1b9d74u: goto label_1b9d74;
        case 0x1b9d78u: goto label_1b9d78;
        case 0x1b9d7cu: goto label_1b9d7c;
        case 0x1b9d80u: goto label_1b9d80;
        case 0x1b9d84u: goto label_1b9d84;
        case 0x1b9d88u: goto label_1b9d88;
        case 0x1b9d8cu: goto label_1b9d8c;
        case 0x1b9d90u: goto label_1b9d90;
        case 0x1b9d94u: goto label_1b9d94;
        case 0x1b9d98u: goto label_1b9d98;
        case 0x1b9d9cu: goto label_1b9d9c;
        case 0x1b9da0u: goto label_1b9da0;
        case 0x1b9da4u: goto label_1b9da4;
        case 0x1b9da8u: goto label_1b9da8;
        case 0x1b9dacu: goto label_1b9dac;
        case 0x1b9db0u: goto label_1b9db0;
        case 0x1b9db4u: goto label_1b9db4;
        case 0x1b9db8u: goto label_1b9db8;
        case 0x1b9dbcu: goto label_1b9dbc;
        case 0x1b9dc0u: goto label_1b9dc0;
        case 0x1b9dc4u: goto label_1b9dc4;
        case 0x1b9dc8u: goto label_1b9dc8;
        case 0x1b9dccu: goto label_1b9dcc;
        case 0x1b9dd0u: goto label_1b9dd0;
        case 0x1b9dd4u: goto label_1b9dd4;
        case 0x1b9dd8u: goto label_1b9dd8;
        case 0x1b9ddcu: goto label_1b9ddc;
        case 0x1b9de0u: goto label_1b9de0;
        case 0x1b9de4u: goto label_1b9de4;
        case 0x1b9de8u: goto label_1b9de8;
        case 0x1b9decu: goto label_1b9dec;
        case 0x1b9df0u: goto label_1b9df0;
        case 0x1b9df4u: goto label_1b9df4;
        case 0x1b9df8u: goto label_1b9df8;
        case 0x1b9dfcu: goto label_1b9dfc;
        case 0x1b9e00u: goto label_1b9e00;
        case 0x1b9e04u: goto label_1b9e04;
        case 0x1b9e08u: goto label_1b9e08;
        case 0x1b9e0cu: goto label_1b9e0c;
        case 0x1b9e10u: goto label_1b9e10;
        case 0x1b9e14u: goto label_1b9e14;
        case 0x1b9e18u: goto label_1b9e18;
        case 0x1b9e1cu: goto label_1b9e1c;
        case 0x1b9e20u: goto label_1b9e20;
        case 0x1b9e24u: goto label_1b9e24;
        case 0x1b9e28u: goto label_1b9e28;
        case 0x1b9e2cu: goto label_1b9e2c;
        case 0x1b9e30u: goto label_1b9e30;
        case 0x1b9e34u: goto label_1b9e34;
        case 0x1b9e38u: goto label_1b9e38;
        case 0x1b9e3cu: goto label_1b9e3c;
        case 0x1b9e40u: goto label_1b9e40;
        case 0x1b9e44u: goto label_1b9e44;
        case 0x1b9e48u: goto label_1b9e48;
        case 0x1b9e4cu: goto label_1b9e4c;
        case 0x1b9e50u: goto label_1b9e50;
        case 0x1b9e54u: goto label_1b9e54;
        case 0x1b9e58u: goto label_1b9e58;
        case 0x1b9e5cu: goto label_1b9e5c;
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e68u: goto label_1b9e68;
        case 0x1b9e6cu: goto label_1b9e6c;
        case 0x1b9e70u: goto label_1b9e70;
        case 0x1b9e74u: goto label_1b9e74;
        case 0x1b9e78u: goto label_1b9e78;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9e80u: goto label_1b9e80;
        case 0x1b9e84u: goto label_1b9e84;
        case 0x1b9e88u: goto label_1b9e88;
        case 0x1b9e8cu: goto label_1b9e8c;
        case 0x1b9e90u: goto label_1b9e90;
        case 0x1b9e94u: goto label_1b9e94;
        case 0x1b9e98u: goto label_1b9e98;
        case 0x1b9e9cu: goto label_1b9e9c;
        case 0x1b9ea0u: goto label_1b9ea0;
        case 0x1b9ea4u: goto label_1b9ea4;
        case 0x1b9ea8u: goto label_1b9ea8;
        case 0x1b9eacu: goto label_1b9eac;
        case 0x1b9eb0u: goto label_1b9eb0;
        case 0x1b9eb4u: goto label_1b9eb4;
        case 0x1b9eb8u: goto label_1b9eb8;
        case 0x1b9ebcu: goto label_1b9ebc;
        case 0x1b9ec0u: goto label_1b9ec0;
        case 0x1b9ec4u: goto label_1b9ec4;
        case 0x1b9ec8u: goto label_1b9ec8;
        case 0x1b9eccu: goto label_1b9ecc;
        case 0x1b9ed0u: goto label_1b9ed0;
        case 0x1b9ed4u: goto label_1b9ed4;
        case 0x1b9ed8u: goto label_1b9ed8;
        case 0x1b9edcu: goto label_1b9edc;
        case 0x1b9ee0u: goto label_1b9ee0;
        case 0x1b9ee4u: goto label_1b9ee4;
        case 0x1b9ee8u: goto label_1b9ee8;
        case 0x1b9eecu: goto label_1b9eec;
        case 0x1b9ef0u: goto label_1b9ef0;
        case 0x1b9ef4u: goto label_1b9ef4;
        case 0x1b9ef8u: goto label_1b9ef8;
        case 0x1b9efcu: goto label_1b9efc;
        case 0x1b9f00u: goto label_1b9f00;
        case 0x1b9f04u: goto label_1b9f04;
        case 0x1b9f08u: goto label_1b9f08;
        case 0x1b9f0cu: goto label_1b9f0c;
        case 0x1b9f10u: goto label_1b9f10;
        case 0x1b9f14u: goto label_1b9f14;
        case 0x1b9f18u: goto label_1b9f18;
        case 0x1b9f1cu: goto label_1b9f1c;
        case 0x1b9f20u: goto label_1b9f20;
        case 0x1b9f24u: goto label_1b9f24;
        case 0x1b9f28u: goto label_1b9f28;
        case 0x1b9f2cu: goto label_1b9f2c;
        case 0x1b9f30u: goto label_1b9f30;
        case 0x1b9f34u: goto label_1b9f34;
        case 0x1b9f38u: goto label_1b9f38;
        case 0x1b9f3cu: goto label_1b9f3c;
        case 0x1b9f40u: goto label_1b9f40;
        case 0x1b9f44u: goto label_1b9f44;
        case 0x1b9f48u: goto label_1b9f48;
        case 0x1b9f4cu: goto label_1b9f4c;
        case 0x1b9f50u: goto label_1b9f50;
        case 0x1b9f54u: goto label_1b9f54;
        case 0x1b9f58u: goto label_1b9f58;
        case 0x1b9f5cu: goto label_1b9f5c;
        case 0x1b9f60u: goto label_1b9f60;
        case 0x1b9f64u: goto label_1b9f64;
        case 0x1b9f68u: goto label_1b9f68;
        case 0x1b9f6cu: goto label_1b9f6c;
        case 0x1b9f70u: goto label_1b9f70;
        case 0x1b9f74u: goto label_1b9f74;
        case 0x1b9f78u: goto label_1b9f78;
        case 0x1b9f7cu: goto label_1b9f7c;
        case 0x1b9f80u: goto label_1b9f80;
        case 0x1b9f84u: goto label_1b9f84;
        case 0x1b9f88u: goto label_1b9f88;
        case 0x1b9f8cu: goto label_1b9f8c;
        case 0x1b9f90u: goto label_1b9f90;
        case 0x1b9f94u: goto label_1b9f94;
        case 0x1b9f98u: goto label_1b9f98;
        case 0x1b9f9cu: goto label_1b9f9c;
        case 0x1b9fa0u: goto label_1b9fa0;
        case 0x1b9fa4u: goto label_1b9fa4;
        case 0x1b9fa8u: goto label_1b9fa8;
        case 0x1b9facu: goto label_1b9fac;
        case 0x1b9fb0u: goto label_1b9fb0;
        case 0x1b9fb4u: goto label_1b9fb4;
        case 0x1b9fb8u: goto label_1b9fb8;
        case 0x1b9fbcu: goto label_1b9fbc;
        case 0x1b9fc0u: goto label_1b9fc0;
        case 0x1b9fc4u: goto label_1b9fc4;
        case 0x1b9fc8u: goto label_1b9fc8;
        case 0x1b9fccu: goto label_1b9fcc;
        case 0x1b9fd0u: goto label_1b9fd0;
        case 0x1b9fd4u: goto label_1b9fd4;
        case 0x1b9fd8u: goto label_1b9fd8;
        case 0x1b9fdcu: goto label_1b9fdc;
        case 0x1b9fe0u: goto label_1b9fe0;
        case 0x1b9fe4u: goto label_1b9fe4;
        case 0x1b9fe8u: goto label_1b9fe8;
        case 0x1b9fecu: goto label_1b9fec;
        case 0x1b9ff0u: goto label_1b9ff0;
        case 0x1b9ff4u: goto label_1b9ff4;
        case 0x1b9ff8u: goto label_1b9ff8;
        case 0x1b9ffcu: goto label_1b9ffc;
        case 0x1ba000u: goto label_1ba000;
        case 0x1ba004u: goto label_1ba004;
        case 0x1ba008u: goto label_1ba008;
        case 0x1ba00cu: goto label_1ba00c;
        case 0x1ba010u: goto label_1ba010;
        case 0x1ba014u: goto label_1ba014;
        case 0x1ba018u: goto label_1ba018;
        case 0x1ba01cu: goto label_1ba01c;
        case 0x1ba020u: goto label_1ba020;
        case 0x1ba024u: goto label_1ba024;
        case 0x1ba028u: goto label_1ba028;
        case 0x1ba02cu: goto label_1ba02c;
        case 0x1ba030u: goto label_1ba030;
        case 0x1ba034u: goto label_1ba034;
        case 0x1ba038u: goto label_1ba038;
        case 0x1ba03cu: goto label_1ba03c;
        case 0x1ba040u: goto label_1ba040;
        case 0x1ba044u: goto label_1ba044;
        case 0x1ba048u: goto label_1ba048;
        case 0x1ba04cu: goto label_1ba04c;
        case 0x1ba050u: goto label_1ba050;
        case 0x1ba054u: goto label_1ba054;
        case 0x1ba058u: goto label_1ba058;
        case 0x1ba05cu: goto label_1ba05c;
        case 0x1ba060u: goto label_1ba060;
        case 0x1ba064u: goto label_1ba064;
        case 0x1ba068u: goto label_1ba068;
        case 0x1ba06cu: goto label_1ba06c;
        case 0x1ba070u: goto label_1ba070;
        case 0x1ba074u: goto label_1ba074;
        case 0x1ba078u: goto label_1ba078;
        case 0x1ba07cu: goto label_1ba07c;
        case 0x1ba080u: goto label_1ba080;
        case 0x1ba084u: goto label_1ba084;
        case 0x1ba088u: goto label_1ba088;
        case 0x1ba08cu: goto label_1ba08c;
        case 0x1ba090u: goto label_1ba090;
        case 0x1ba094u: goto label_1ba094;
        case 0x1ba098u: goto label_1ba098;
        case 0x1ba09cu: goto label_1ba09c;
        case 0x1ba0a0u: goto label_1ba0a0;
        case 0x1ba0a4u: goto label_1ba0a4;
        case 0x1ba0a8u: goto label_1ba0a8;
        case 0x1ba0acu: goto label_1ba0ac;
        case 0x1ba0b0u: goto label_1ba0b0;
        case 0x1ba0b4u: goto label_1ba0b4;
        case 0x1ba0b8u: goto label_1ba0b8;
        case 0x1ba0bcu: goto label_1ba0bc;
        case 0x1ba0c0u: goto label_1ba0c0;
        case 0x1ba0c4u: goto label_1ba0c4;
        case 0x1ba0c8u: goto label_1ba0c8;
        case 0x1ba0ccu: goto label_1ba0cc;
        case 0x1ba0d0u: goto label_1ba0d0;
        case 0x1ba0d4u: goto label_1ba0d4;
        case 0x1ba0d8u: goto label_1ba0d8;
        case 0x1ba0dcu: goto label_1ba0dc;
        case 0x1ba0e0u: goto label_1ba0e0;
        case 0x1ba0e4u: goto label_1ba0e4;
        case 0x1ba0e8u: goto label_1ba0e8;
        case 0x1ba0ecu: goto label_1ba0ec;
        case 0x1ba0f0u: goto label_1ba0f0;
        case 0x1ba0f4u: goto label_1ba0f4;
        case 0x1ba0f8u: goto label_1ba0f8;
        case 0x1ba0fcu: goto label_1ba0fc;
        case 0x1ba100u: goto label_1ba100;
        case 0x1ba104u: goto label_1ba104;
        case 0x1ba108u: goto label_1ba108;
        case 0x1ba10cu: goto label_1ba10c;
        case 0x1ba110u: goto label_1ba110;
        case 0x1ba114u: goto label_1ba114;
        case 0x1ba118u: goto label_1ba118;
        case 0x1ba11cu: goto label_1ba11c;
        case 0x1ba120u: goto label_1ba120;
        case 0x1ba124u: goto label_1ba124;
        case 0x1ba128u: goto label_1ba128;
        case 0x1ba12cu: goto label_1ba12c;
        case 0x1ba130u: goto label_1ba130;
        case 0x1ba134u: goto label_1ba134;
        case 0x1ba138u: goto label_1ba138;
        case 0x1ba13cu: goto label_1ba13c;
        case 0x1ba140u: goto label_1ba140;
        case 0x1ba144u: goto label_1ba144;
        case 0x1ba148u: goto label_1ba148;
        case 0x1ba14cu: goto label_1ba14c;
        case 0x1ba150u: goto label_1ba150;
        case 0x1ba154u: goto label_1ba154;
        case 0x1ba158u: goto label_1ba158;
        case 0x1ba15cu: goto label_1ba15c;
        case 0x1ba160u: goto label_1ba160;
        case 0x1ba164u: goto label_1ba164;
        case 0x1ba168u: goto label_1ba168;
        case 0x1ba16cu: goto label_1ba16c;
        case 0x1ba170u: goto label_1ba170;
        case 0x1ba174u: goto label_1ba174;
        case 0x1ba178u: goto label_1ba178;
        case 0x1ba17cu: goto label_1ba17c;
        case 0x1ba180u: goto label_1ba180;
        case 0x1ba184u: goto label_1ba184;
        case 0x1ba188u: goto label_1ba188;
        case 0x1ba18cu: goto label_1ba18c;
        case 0x1ba190u: goto label_1ba190;
        case 0x1ba194u: goto label_1ba194;
        case 0x1ba198u: goto label_1ba198;
        case 0x1ba19cu: goto label_1ba19c;
        case 0x1ba1a0u: goto label_1ba1a0;
        case 0x1ba1a4u: goto label_1ba1a4;
        case 0x1ba1a8u: goto label_1ba1a8;
        case 0x1ba1acu: goto label_1ba1ac;
        case 0x1ba1b0u: goto label_1ba1b0;
        case 0x1ba1b4u: goto label_1ba1b4;
        case 0x1ba1b8u: goto label_1ba1b8;
        case 0x1ba1bcu: goto label_1ba1bc;
        case 0x1ba1c0u: goto label_1ba1c0;
        case 0x1ba1c4u: goto label_1ba1c4;
        case 0x1ba1c8u: goto label_1ba1c8;
        case 0x1ba1ccu: goto label_1ba1cc;
        case 0x1ba1d0u: goto label_1ba1d0;
        case 0x1ba1d4u: goto label_1ba1d4;
        case 0x1ba1d8u: goto label_1ba1d8;
        case 0x1ba1dcu: goto label_1ba1dc;
        case 0x1ba1e0u: goto label_1ba1e0;
        case 0x1ba1e4u: goto label_1ba1e4;
        case 0x1ba1e8u: goto label_1ba1e8;
        case 0x1ba1ecu: goto label_1ba1ec;
        case 0x1ba1f0u: goto label_1ba1f0;
        case 0x1ba1f4u: goto label_1ba1f4;
        case 0x1ba1f8u: goto label_1ba1f8;
        case 0x1ba1fcu: goto label_1ba1fc;
        case 0x1ba200u: goto label_1ba200;
        case 0x1ba204u: goto label_1ba204;
        case 0x1ba208u: goto label_1ba208;
        case 0x1ba20cu: goto label_1ba20c;
        case 0x1ba210u: goto label_1ba210;
        case 0x1ba214u: goto label_1ba214;
        case 0x1ba218u: goto label_1ba218;
        case 0x1ba21cu: goto label_1ba21c;
        case 0x1ba220u: goto label_1ba220;
        case 0x1ba224u: goto label_1ba224;
        case 0x1ba228u: goto label_1ba228;
        case 0x1ba22cu: goto label_1ba22c;
        case 0x1ba230u: goto label_1ba230;
        case 0x1ba234u: goto label_1ba234;
        case 0x1ba238u: goto label_1ba238;
        case 0x1ba23cu: goto label_1ba23c;
        case 0x1ba240u: goto label_1ba240;
        case 0x1ba244u: goto label_1ba244;
        case 0x1ba248u: goto label_1ba248;
        case 0x1ba24cu: goto label_1ba24c;
        case 0x1ba250u: goto label_1ba250;
        case 0x1ba254u: goto label_1ba254;
        case 0x1ba258u: goto label_1ba258;
        case 0x1ba25cu: goto label_1ba25c;
        case 0x1ba260u: goto label_1ba260;
        case 0x1ba264u: goto label_1ba264;
        case 0x1ba268u: goto label_1ba268;
        case 0x1ba26cu: goto label_1ba26c;
        case 0x1ba270u: goto label_1ba270;
        case 0x1ba274u: goto label_1ba274;
        case 0x1ba278u: goto label_1ba278;
        case 0x1ba27cu: goto label_1ba27c;
        case 0x1ba280u: goto label_1ba280;
        case 0x1ba284u: goto label_1ba284;
        case 0x1ba288u: goto label_1ba288;
        case 0x1ba28cu: goto label_1ba28c;
        case 0x1ba290u: goto label_1ba290;
        case 0x1ba294u: goto label_1ba294;
        case 0x1ba298u: goto label_1ba298;
        case 0x1ba29cu: goto label_1ba29c;
        case 0x1ba2a0u: goto label_1ba2a0;
        case 0x1ba2a4u: goto label_1ba2a4;
        case 0x1ba2a8u: goto label_1ba2a8;
        case 0x1ba2acu: goto label_1ba2ac;
        case 0x1ba2b0u: goto label_1ba2b0;
        case 0x1ba2b4u: goto label_1ba2b4;
        case 0x1ba2b8u: goto label_1ba2b8;
        case 0x1ba2bcu: goto label_1ba2bc;
        case 0x1ba2c0u: goto label_1ba2c0;
        case 0x1ba2c4u: goto label_1ba2c4;
        case 0x1ba2c8u: goto label_1ba2c8;
        case 0x1ba2ccu: goto label_1ba2cc;
        case 0x1ba2d0u: goto label_1ba2d0;
        case 0x1ba2d4u: goto label_1ba2d4;
        case 0x1ba2d8u: goto label_1ba2d8;
        case 0x1ba2dcu: goto label_1ba2dc;
        case 0x1ba2e0u: goto label_1ba2e0;
        case 0x1ba2e4u: goto label_1ba2e4;
        case 0x1ba2e8u: goto label_1ba2e8;
        case 0x1ba2ecu: goto label_1ba2ec;
        case 0x1ba2f0u: goto label_1ba2f0;
        case 0x1ba2f4u: goto label_1ba2f4;
        case 0x1ba2f8u: goto label_1ba2f8;
        case 0x1ba2fcu: goto label_1ba2fc;
        case 0x1ba300u: goto label_1ba300;
        case 0x1ba304u: goto label_1ba304;
        case 0x1ba308u: goto label_1ba308;
        case 0x1ba30cu: goto label_1ba30c;
        case 0x1ba310u: goto label_1ba310;
        case 0x1ba314u: goto label_1ba314;
        case 0x1ba318u: goto label_1ba318;
        case 0x1ba31cu: goto label_1ba31c;
        case 0x1ba320u: goto label_1ba320;
        case 0x1ba324u: goto label_1ba324;
        case 0x1ba328u: goto label_1ba328;
        case 0x1ba32cu: goto label_1ba32c;
        case 0x1ba330u: goto label_1ba330;
        case 0x1ba334u: goto label_1ba334;
        case 0x1ba338u: goto label_1ba338;
        case 0x1ba33cu: goto label_1ba33c;
        case 0x1ba340u: goto label_1ba340;
        case 0x1ba344u: goto label_1ba344;
        case 0x1ba348u: goto label_1ba348;
        case 0x1ba34cu: goto label_1ba34c;
        case 0x1ba350u: goto label_1ba350;
        case 0x1ba354u: goto label_1ba354;
        case 0x1ba358u: goto label_1ba358;
        case 0x1ba35cu: goto label_1ba35c;
        case 0x1ba360u: goto label_1ba360;
        case 0x1ba364u: goto label_1ba364;
        case 0x1ba368u: goto label_1ba368;
        case 0x1ba36cu: goto label_1ba36c;
        case 0x1ba370u: goto label_1ba370;
        case 0x1ba374u: goto label_1ba374;
        case 0x1ba378u: goto label_1ba378;
        case 0x1ba37cu: goto label_1ba37c;
        case 0x1ba380u: goto label_1ba380;
        case 0x1ba384u: goto label_1ba384;
        case 0x1ba388u: goto label_1ba388;
        case 0x1ba38cu: goto label_1ba38c;
        case 0x1ba390u: goto label_1ba390;
        case 0x1ba394u: goto label_1ba394;
        case 0x1ba398u: goto label_1ba398;
        case 0x1ba39cu: goto label_1ba39c;
        case 0x1ba3a0u: goto label_1ba3a0;
        case 0x1ba3a4u: goto label_1ba3a4;
        case 0x1ba3a8u: goto label_1ba3a8;
        case 0x1ba3acu: goto label_1ba3ac;
        case 0x1ba3b0u: goto label_1ba3b0;
        case 0x1ba3b4u: goto label_1ba3b4;
        case 0x1ba3b8u: goto label_1ba3b8;
        case 0x1ba3bcu: goto label_1ba3bc;
        case 0x1ba3c0u: goto label_1ba3c0;
        case 0x1ba3c4u: goto label_1ba3c4;
        case 0x1ba3c8u: goto label_1ba3c8;
        case 0x1ba3ccu: goto label_1ba3cc;
        case 0x1ba3d0u: goto label_1ba3d0;
        case 0x1ba3d4u: goto label_1ba3d4;
        case 0x1ba3d8u: goto label_1ba3d8;
        case 0x1ba3dcu: goto label_1ba3dc;
        case 0x1ba3e0u: goto label_1ba3e0;
        case 0x1ba3e4u: goto label_1ba3e4;
        case 0x1ba3e8u: goto label_1ba3e8;
        case 0x1ba3ecu: goto label_1ba3ec;
        case 0x1ba3f0u: goto label_1ba3f0;
        case 0x1ba3f4u: goto label_1ba3f4;
        case 0x1ba3f8u: goto label_1ba3f8;
        case 0x1ba3fcu: goto label_1ba3fc;
        case 0x1ba400u: goto label_1ba400;
        case 0x1ba404u: goto label_1ba404;
        case 0x1ba408u: goto label_1ba408;
        case 0x1ba40cu: goto label_1ba40c;
        case 0x1ba410u: goto label_1ba410;
        case 0x1ba414u: goto label_1ba414;
        case 0x1ba418u: goto label_1ba418;
        case 0x1ba41cu: goto label_1ba41c;
        case 0x1ba420u: goto label_1ba420;
        case 0x1ba424u: goto label_1ba424;
        case 0x1ba428u: goto label_1ba428;
        case 0x1ba42cu: goto label_1ba42c;
        case 0x1ba430u: goto label_1ba430;
        case 0x1ba434u: goto label_1ba434;
        case 0x1ba438u: goto label_1ba438;
        case 0x1ba43cu: goto label_1ba43c;
        case 0x1ba440u: goto label_1ba440;
        case 0x1ba444u: goto label_1ba444;
        case 0x1ba448u: goto label_1ba448;
        case 0x1ba44cu: goto label_1ba44c;
        case 0x1ba450u: goto label_1ba450;
        case 0x1ba454u: goto label_1ba454;
        case 0x1ba458u: goto label_1ba458;
        case 0x1ba45cu: goto label_1ba45c;
        case 0x1ba460u: goto label_1ba460;
        case 0x1ba464u: goto label_1ba464;
        case 0x1ba468u: goto label_1ba468;
        case 0x1ba46cu: goto label_1ba46c;
        case 0x1ba470u: goto label_1ba470;
        case 0x1ba474u: goto label_1ba474;
        case 0x1ba478u: goto label_1ba478;
        case 0x1ba47cu: goto label_1ba47c;
        case 0x1ba480u: goto label_1ba480;
        case 0x1ba484u: goto label_1ba484;
        case 0x1ba488u: goto label_1ba488;
        case 0x1ba48cu: goto label_1ba48c;
        case 0x1ba490u: goto label_1ba490;
        case 0x1ba494u: goto label_1ba494;
        case 0x1ba498u: goto label_1ba498;
        case 0x1ba49cu: goto label_1ba49c;
        case 0x1ba4a0u: goto label_1ba4a0;
        case 0x1ba4a4u: goto label_1ba4a4;
        case 0x1ba4a8u: goto label_1ba4a8;
        case 0x1ba4acu: goto label_1ba4ac;
        case 0x1ba4b0u: goto label_1ba4b0;
        case 0x1ba4b4u: goto label_1ba4b4;
        case 0x1ba4b8u: goto label_1ba4b8;
        case 0x1ba4bcu: goto label_1ba4bc;
        case 0x1ba4c0u: goto label_1ba4c0;
        case 0x1ba4c4u: goto label_1ba4c4;
        case 0x1ba4c8u: goto label_1ba4c8;
        case 0x1ba4ccu: goto label_1ba4cc;
        case 0x1ba4d0u: goto label_1ba4d0;
        case 0x1ba4d4u: goto label_1ba4d4;
        case 0x1ba4d8u: goto label_1ba4d8;
        case 0x1ba4dcu: goto label_1ba4dc;
        case 0x1ba4e0u: goto label_1ba4e0;
        case 0x1ba4e4u: goto label_1ba4e4;
        case 0x1ba4e8u: goto label_1ba4e8;
        case 0x1ba4ecu: goto label_1ba4ec;
        case 0x1ba4f0u: goto label_1ba4f0;
        case 0x1ba4f4u: goto label_1ba4f4;
        case 0x1ba4f8u: goto label_1ba4f8;
        case 0x1ba4fcu: goto label_1ba4fc;
        case 0x1ba500u: goto label_1ba500;
        case 0x1ba504u: goto label_1ba504;
        case 0x1ba508u: goto label_1ba508;
        case 0x1ba50cu: goto label_1ba50c;
        case 0x1ba510u: goto label_1ba510;
        case 0x1ba514u: goto label_1ba514;
        case 0x1ba518u: goto label_1ba518;
        case 0x1ba51cu: goto label_1ba51c;
        case 0x1ba520u: goto label_1ba520;
        case 0x1ba524u: goto label_1ba524;
        case 0x1ba528u: goto label_1ba528;
        case 0x1ba52cu: goto label_1ba52c;
        case 0x1ba530u: goto label_1ba530;
        case 0x1ba534u: goto label_1ba534;
        case 0x1ba538u: goto label_1ba538;
        case 0x1ba53cu: goto label_1ba53c;
        case 0x1ba540u: goto label_1ba540;
        case 0x1ba544u: goto label_1ba544;
        case 0x1ba548u: goto label_1ba548;
        case 0x1ba54cu: goto label_1ba54c;
        case 0x1ba550u: goto label_1ba550;
        case 0x1ba554u: goto label_1ba554;
        case 0x1ba558u: goto label_1ba558;
        case 0x1ba55cu: goto label_1ba55c;
        case 0x1ba560u: goto label_1ba560;
        case 0x1ba564u: goto label_1ba564;
        case 0x1ba568u: goto label_1ba568;
        case 0x1ba56cu: goto label_1ba56c;
        case 0x1ba570u: goto label_1ba570;
        case 0x1ba574u: goto label_1ba574;
        case 0x1ba578u: goto label_1ba578;
        case 0x1ba57cu: goto label_1ba57c;
        case 0x1ba580u: goto label_1ba580;
        case 0x1ba584u: goto label_1ba584;
        case 0x1ba588u: goto label_1ba588;
        case 0x1ba58cu: goto label_1ba58c;
        case 0x1ba590u: goto label_1ba590;
        case 0x1ba594u: goto label_1ba594;
        case 0x1ba598u: goto label_1ba598;
        case 0x1ba59cu: goto label_1ba59c;
        case 0x1ba5a0u: goto label_1ba5a0;
        case 0x1ba5a4u: goto label_1ba5a4;
        case 0x1ba5a8u: goto label_1ba5a8;
        case 0x1ba5acu: goto label_1ba5ac;
        case 0x1ba5b0u: goto label_1ba5b0;
        case 0x1ba5b4u: goto label_1ba5b4;
        case 0x1ba5b8u: goto label_1ba5b8;
        case 0x1ba5bcu: goto label_1ba5bc;
        case 0x1ba5c0u: goto label_1ba5c0;
        case 0x1ba5c4u: goto label_1ba5c4;
        case 0x1ba5c8u: goto label_1ba5c8;
        case 0x1ba5ccu: goto label_1ba5cc;
        case 0x1ba5d0u: goto label_1ba5d0;
        case 0x1ba5d4u: goto label_1ba5d4;
        case 0x1ba5d8u: goto label_1ba5d8;
        case 0x1ba5dcu: goto label_1ba5dc;
        case 0x1ba5e0u: goto label_1ba5e0;
        case 0x1ba5e4u: goto label_1ba5e4;
        case 0x1ba5e8u: goto label_1ba5e8;
        case 0x1ba5ecu: goto label_1ba5ec;
        case 0x1ba5f0u: goto label_1ba5f0;
        case 0x1ba5f4u: goto label_1ba5f4;
        case 0x1ba5f8u: goto label_1ba5f8;
        case 0x1ba5fcu: goto label_1ba5fc;
        case 0x1ba600u: goto label_1ba600;
        case 0x1ba604u: goto label_1ba604;
        case 0x1ba608u: goto label_1ba608;
        case 0x1ba60cu: goto label_1ba60c;
        case 0x1ba610u: goto label_1ba610;
        case 0x1ba614u: goto label_1ba614;
        case 0x1ba618u: goto label_1ba618;
        case 0x1ba61cu: goto label_1ba61c;
        case 0x1ba620u: goto label_1ba620;
        case 0x1ba624u: goto label_1ba624;
        case 0x1ba628u: goto label_1ba628;
        case 0x1ba62cu: goto label_1ba62c;
        case 0x1ba630u: goto label_1ba630;
        case 0x1ba634u: goto label_1ba634;
        case 0x1ba638u: goto label_1ba638;
        case 0x1ba63cu: goto label_1ba63c;
        case 0x1ba640u: goto label_1ba640;
        case 0x1ba644u: goto label_1ba644;
        case 0x1ba648u: goto label_1ba648;
        case 0x1ba64cu: goto label_1ba64c;
        case 0x1ba650u: goto label_1ba650;
        case 0x1ba654u: goto label_1ba654;
        case 0x1ba658u: goto label_1ba658;
        case 0x1ba65cu: goto label_1ba65c;
        case 0x1ba660u: goto label_1ba660;
        case 0x1ba664u: goto label_1ba664;
        case 0x1ba668u: goto label_1ba668;
        case 0x1ba66cu: goto label_1ba66c;
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba674u: goto label_1ba674;
        case 0x1ba678u: goto label_1ba678;
        case 0x1ba67cu: goto label_1ba67c;
        case 0x1ba680u: goto label_1ba680;
        case 0x1ba684u: goto label_1ba684;
        case 0x1ba688u: goto label_1ba688;
        case 0x1ba68cu: goto label_1ba68c;
        case 0x1ba690u: goto label_1ba690;
        case 0x1ba694u: goto label_1ba694;
        case 0x1ba698u: goto label_1ba698;
        case 0x1ba69cu: goto label_1ba69c;
        case 0x1ba6a0u: goto label_1ba6a0;
        case 0x1ba6a4u: goto label_1ba6a4;
        case 0x1ba6a8u: goto label_1ba6a8;
        case 0x1ba6acu: goto label_1ba6ac;
        case 0x1ba6b0u: goto label_1ba6b0;
        case 0x1ba6b4u: goto label_1ba6b4;
        case 0x1ba6b8u: goto label_1ba6b8;
        case 0x1ba6bcu: goto label_1ba6bc;
        case 0x1ba6c0u: goto label_1ba6c0;
        case 0x1ba6c4u: goto label_1ba6c4;
        case 0x1ba6c8u: goto label_1ba6c8;
        case 0x1ba6ccu: goto label_1ba6cc;
        case 0x1ba6d0u: goto label_1ba6d0;
        case 0x1ba6d4u: goto label_1ba6d4;
        case 0x1ba6d8u: goto label_1ba6d8;
        case 0x1ba6dcu: goto label_1ba6dc;
        case 0x1ba6e0u: goto label_1ba6e0;
        case 0x1ba6e4u: goto label_1ba6e4;
        case 0x1ba6e8u: goto label_1ba6e8;
        case 0x1ba6ecu: goto label_1ba6ec;
        case 0x1ba6f0u: goto label_1ba6f0;
        case 0x1ba6f4u: goto label_1ba6f4;
        case 0x1ba6f8u: goto label_1ba6f8;
        case 0x1ba6fcu: goto label_1ba6fc;
        case 0x1ba700u: goto label_1ba700;
        case 0x1ba704u: goto label_1ba704;
        case 0x1ba708u: goto label_1ba708;
        case 0x1ba70cu: goto label_1ba70c;
        case 0x1ba710u: goto label_1ba710;
        case 0x1ba714u: goto label_1ba714;
        case 0x1ba718u: goto label_1ba718;
        case 0x1ba71cu: goto label_1ba71c;
        case 0x1ba720u: goto label_1ba720;
        case 0x1ba724u: goto label_1ba724;
        case 0x1ba728u: goto label_1ba728;
        case 0x1ba72cu: goto label_1ba72c;
        case 0x1ba730u: goto label_1ba730;
        case 0x1ba734u: goto label_1ba734;
        case 0x1ba738u: goto label_1ba738;
        case 0x1ba73cu: goto label_1ba73c;
        case 0x1ba740u: goto label_1ba740;
        case 0x1ba744u: goto label_1ba744;
        case 0x1ba748u: goto label_1ba748;
        case 0x1ba74cu: goto label_1ba74c;
        case 0x1ba750u: goto label_1ba750;
        case 0x1ba754u: goto label_1ba754;
        case 0x1ba758u: goto label_1ba758;
        case 0x1ba75cu: goto label_1ba75c;
        case 0x1ba760u: goto label_1ba760;
        case 0x1ba764u: goto label_1ba764;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba76cu: goto label_1ba76c;
        case 0x1ba770u: goto label_1ba770;
        case 0x1ba774u: goto label_1ba774;
        case 0x1ba778u: goto label_1ba778;
        case 0x1ba77cu: goto label_1ba77c;
        case 0x1ba780u: goto label_1ba780;
        case 0x1ba784u: goto label_1ba784;
        case 0x1ba788u: goto label_1ba788;
        case 0x1ba78cu: goto label_1ba78c;
        case 0x1ba790u: goto label_1ba790;
        case 0x1ba794u: goto label_1ba794;
        case 0x1ba798u: goto label_1ba798;
        case 0x1ba79cu: goto label_1ba79c;
        case 0x1ba7a0u: goto label_1ba7a0;
        case 0x1ba7a4u: goto label_1ba7a4;
        case 0x1ba7a8u: goto label_1ba7a8;
        case 0x1ba7acu: goto label_1ba7ac;
        case 0x1ba7b0u: goto label_1ba7b0;
        case 0x1ba7b4u: goto label_1ba7b4;
        case 0x1ba7b8u: goto label_1ba7b8;
        case 0x1ba7bcu: goto label_1ba7bc;
        case 0x1ba7c0u: goto label_1ba7c0;
        case 0x1ba7c4u: goto label_1ba7c4;
        case 0x1ba7c8u: goto label_1ba7c8;
        case 0x1ba7ccu: goto label_1ba7cc;
        case 0x1ba7d0u: goto label_1ba7d0;
        case 0x1ba7d4u: goto label_1ba7d4;
        case 0x1ba7d8u: goto label_1ba7d8;
        case 0x1ba7dcu: goto label_1ba7dc;
        case 0x1ba7e0u: goto label_1ba7e0;
        case 0x1ba7e4u: goto label_1ba7e4;
        case 0x1ba7e8u: goto label_1ba7e8;
        case 0x1ba7ecu: goto label_1ba7ec;
        case 0x1ba7f0u: goto label_1ba7f0;
        case 0x1ba7f4u: goto label_1ba7f4;
        case 0x1ba7f8u: goto label_1ba7f8;
        case 0x1ba7fcu: goto label_1ba7fc;
        case 0x1ba800u: goto label_1ba800;
        case 0x1ba804u: goto label_1ba804;
        case 0x1ba808u: goto label_1ba808;
        case 0x1ba80cu: goto label_1ba80c;
        case 0x1ba810u: goto label_1ba810;
        case 0x1ba814u: goto label_1ba814;
        case 0x1ba818u: goto label_1ba818;
        case 0x1ba81cu: goto label_1ba81c;
        case 0x1ba820u: goto label_1ba820;
        case 0x1ba824u: goto label_1ba824;
        case 0x1ba828u: goto label_1ba828;
        case 0x1ba82cu: goto label_1ba82c;
        case 0x1ba830u: goto label_1ba830;
        case 0x1ba834u: goto label_1ba834;
        case 0x1ba838u: goto label_1ba838;
        case 0x1ba83cu: goto label_1ba83c;
        case 0x1ba840u: goto label_1ba840;
        case 0x1ba844u: goto label_1ba844;
        case 0x1ba848u: goto label_1ba848;
        case 0x1ba84cu: goto label_1ba84c;
        case 0x1ba850u: goto label_1ba850;
        case 0x1ba854u: goto label_1ba854;
        case 0x1ba858u: goto label_1ba858;
        case 0x1ba85cu: goto label_1ba85c;
        case 0x1ba860u: goto label_1ba860;
        case 0x1ba864u: goto label_1ba864;
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba86cu: goto label_1ba86c;
        case 0x1ba870u: goto label_1ba870;
        case 0x1ba874u: goto label_1ba874;
        case 0x1ba878u: goto label_1ba878;
        case 0x1ba87cu: goto label_1ba87c;
        case 0x1ba880u: goto label_1ba880;
        case 0x1ba884u: goto label_1ba884;
        case 0x1ba888u: goto label_1ba888;
        case 0x1ba88cu: goto label_1ba88c;
        case 0x1ba890u: goto label_1ba890;
        case 0x1ba894u: goto label_1ba894;
        case 0x1ba898u: goto label_1ba898;
        case 0x1ba89cu: goto label_1ba89c;
        case 0x1ba8a0u: goto label_1ba8a0;
        case 0x1ba8a4u: goto label_1ba8a4;
        case 0x1ba8a8u: goto label_1ba8a8;
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8b0u: goto label_1ba8b0;
        case 0x1ba8b4u: goto label_1ba8b4;
        case 0x1ba8b8u: goto label_1ba8b8;
        case 0x1ba8bcu: goto label_1ba8bc;
        case 0x1ba8c0u: goto label_1ba8c0;
        case 0x1ba8c4u: goto label_1ba8c4;
        case 0x1ba8c8u: goto label_1ba8c8;
        case 0x1ba8ccu: goto label_1ba8cc;
        case 0x1ba8d0u: goto label_1ba8d0;
        case 0x1ba8d4u: goto label_1ba8d4;
        case 0x1ba8d8u: goto label_1ba8d8;
        case 0x1ba8dcu: goto label_1ba8dc;
        case 0x1ba8e0u: goto label_1ba8e0;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8e8u: goto label_1ba8e8;
        case 0x1ba8ecu: goto label_1ba8ec;
        case 0x1ba8f0u: goto label_1ba8f0;
        case 0x1ba8f4u: goto label_1ba8f4;
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba900u: goto label_1ba900;
        case 0x1ba904u: goto label_1ba904;
        case 0x1ba908u: goto label_1ba908;
        case 0x1ba90cu: goto label_1ba90c;
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba914u: goto label_1ba914;
        case 0x1ba918u: goto label_1ba918;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba920u: goto label_1ba920;
        case 0x1ba924u: goto label_1ba924;
        case 0x1ba928u: goto label_1ba928;
        case 0x1ba92cu: goto label_1ba92c;
        case 0x1ba930u: goto label_1ba930;
        case 0x1ba934u: goto label_1ba934;
        case 0x1ba938u: goto label_1ba938;
        case 0x1ba93cu: goto label_1ba93c;
        case 0x1ba940u: goto label_1ba940;
        case 0x1ba944u: goto label_1ba944;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba94cu: goto label_1ba94c;
        case 0x1ba950u: goto label_1ba950;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba958u: goto label_1ba958;
        case 0x1ba95cu: goto label_1ba95c;
        case 0x1ba960u: goto label_1ba960;
        case 0x1ba964u: goto label_1ba964;
        case 0x1ba968u: goto label_1ba968;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba970u: goto label_1ba970;
        case 0x1ba974u: goto label_1ba974;
        case 0x1ba978u: goto label_1ba978;
        case 0x1ba97cu: goto label_1ba97c;
        case 0x1ba980u: goto label_1ba980;
        case 0x1ba984u: goto label_1ba984;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba98cu: goto label_1ba98c;
        case 0x1ba990u: goto label_1ba990;
        case 0x1ba994u: goto label_1ba994;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba99cu: goto label_1ba99c;
        case 0x1ba9a0u: goto label_1ba9a0;
        case 0x1ba9a4u: goto label_1ba9a4;
        case 0x1ba9a8u: goto label_1ba9a8;
        case 0x1ba9acu: goto label_1ba9ac;
        case 0x1ba9b0u: goto label_1ba9b0;
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9bcu: goto label_1ba9bc;
        case 0x1ba9c0u: goto label_1ba9c0;
        case 0x1ba9c4u: goto label_1ba9c4;
        case 0x1ba9c8u: goto label_1ba9c8;
        case 0x1ba9ccu: goto label_1ba9cc;
        case 0x1ba9d0u: goto label_1ba9d0;
        case 0x1ba9d4u: goto label_1ba9d4;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9dcu: goto label_1ba9dc;
        case 0x1ba9e0u: goto label_1ba9e0;
        case 0x1ba9e4u: goto label_1ba9e4;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1ba9ecu: goto label_1ba9ec;
        case 0x1ba9f0u: goto label_1ba9f0;
        case 0x1ba9f4u: goto label_1ba9f4;
        case 0x1ba9f8u: goto label_1ba9f8;
        case 0x1ba9fcu: goto label_1ba9fc;
        case 0x1baa00u: goto label_1baa00;
        case 0x1baa04u: goto label_1baa04;
        case 0x1baa08u: goto label_1baa08;
        case 0x1baa0cu: goto label_1baa0c;
        case 0x1baa10u: goto label_1baa10;
        case 0x1baa14u: goto label_1baa14;
        case 0x1baa18u: goto label_1baa18;
        case 0x1baa1cu: goto label_1baa1c;
        case 0x1baa20u: goto label_1baa20;
        case 0x1baa24u: goto label_1baa24;
        case 0x1baa28u: goto label_1baa28;
        case 0x1baa2cu: goto label_1baa2c;
        case 0x1baa30u: goto label_1baa30;
        case 0x1baa34u: goto label_1baa34;
        case 0x1baa38u: goto label_1baa38;
        case 0x1baa3cu: goto label_1baa3c;
        case 0x1baa40u: goto label_1baa40;
        case 0x1baa44u: goto label_1baa44;
        case 0x1baa48u: goto label_1baa48;
        case 0x1baa4cu: goto label_1baa4c;
        case 0x1baa50u: goto label_1baa50;
        case 0x1baa54u: goto label_1baa54;
        case 0x1baa58u: goto label_1baa58;
        case 0x1baa5cu: goto label_1baa5c;
        case 0x1baa60u: goto label_1baa60;
        case 0x1baa64u: goto label_1baa64;
        case 0x1baa68u: goto label_1baa68;
        case 0x1baa6cu: goto label_1baa6c;
        case 0x1baa70u: goto label_1baa70;
        case 0x1baa74u: goto label_1baa74;
        case 0x1baa78u: goto label_1baa78;
        case 0x1baa7cu: goto label_1baa7c;
        case 0x1baa80u: goto label_1baa80;
        case 0x1baa84u: goto label_1baa84;
        case 0x1baa88u: goto label_1baa88;
        case 0x1baa8cu: goto label_1baa8c;
        case 0x1baa90u: goto label_1baa90;
        case 0x1baa94u: goto label_1baa94;
        case 0x1baa98u: goto label_1baa98;
        case 0x1baa9cu: goto label_1baa9c;
        case 0x1baaa0u: goto label_1baaa0;
        case 0x1baaa4u: goto label_1baaa4;
        case 0x1baaa8u: goto label_1baaa8;
        case 0x1baaacu: goto label_1baaac;
        case 0x1baab0u: goto label_1baab0;
        case 0x1baab4u: goto label_1baab4;
        case 0x1baab8u: goto label_1baab8;
        case 0x1baabcu: goto label_1baabc;
        case 0x1baac0u: goto label_1baac0;
        case 0x1baac4u: goto label_1baac4;
        case 0x1baac8u: goto label_1baac8;
        case 0x1baaccu: goto label_1baacc;
        case 0x1baad0u: goto label_1baad0;
        case 0x1baad4u: goto label_1baad4;
        case 0x1baad8u: goto label_1baad8;
        case 0x1baadcu: goto label_1baadc;
        case 0x1baae0u: goto label_1baae0;
        case 0x1baae4u: goto label_1baae4;
        case 0x1baae8u: goto label_1baae8;
        case 0x1baaecu: goto label_1baaec;
        case 0x1baaf0u: goto label_1baaf0;
        case 0x1baaf4u: goto label_1baaf4;
        case 0x1baaf8u: goto label_1baaf8;
        case 0x1baafcu: goto label_1baafc;
        case 0x1bab00u: goto label_1bab00;
        case 0x1bab04u: goto label_1bab04;
        case 0x1bab08u: goto label_1bab08;
        case 0x1bab0cu: goto label_1bab0c;
        case 0x1bab10u: goto label_1bab10;
        case 0x1bab14u: goto label_1bab14;
        case 0x1bab18u: goto label_1bab18;
        case 0x1bab1cu: goto label_1bab1c;
        case 0x1bab20u: goto label_1bab20;
        case 0x1bab24u: goto label_1bab24;
        case 0x1bab28u: goto label_1bab28;
        case 0x1bab2cu: goto label_1bab2c;
        case 0x1bab30u: goto label_1bab30;
        case 0x1bab34u: goto label_1bab34;
        case 0x1bab38u: goto label_1bab38;
        case 0x1bab3cu: goto label_1bab3c;
        case 0x1bab40u: goto label_1bab40;
        case 0x1bab44u: goto label_1bab44;
        case 0x1bab48u: goto label_1bab48;
        case 0x1bab4cu: goto label_1bab4c;
        case 0x1bab50u: goto label_1bab50;
        case 0x1bab54u: goto label_1bab54;
        case 0x1bab58u: goto label_1bab58;
        case 0x1bab5cu: goto label_1bab5c;
        case 0x1bab60u: goto label_1bab60;
        case 0x1bab64u: goto label_1bab64;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab6cu: goto label_1bab6c;
        case 0x1bab70u: goto label_1bab70;
        case 0x1bab74u: goto label_1bab74;
        case 0x1bab78u: goto label_1bab78;
        case 0x1bab7cu: goto label_1bab7c;
        case 0x1bab80u: goto label_1bab80;
        case 0x1bab84u: goto label_1bab84;
        case 0x1bab88u: goto label_1bab88;
        case 0x1bab8cu: goto label_1bab8c;
        case 0x1bab90u: goto label_1bab90;
        case 0x1bab94u: goto label_1bab94;
        case 0x1bab98u: goto label_1bab98;
        case 0x1bab9cu: goto label_1bab9c;
        case 0x1baba0u: goto label_1baba0;
        case 0x1baba4u: goto label_1baba4;
        case 0x1baba8u: goto label_1baba8;
        case 0x1babacu: goto label_1babac;
        case 0x1babb0u: goto label_1babb0;
        case 0x1babb4u: goto label_1babb4;
        case 0x1babb8u: goto label_1babb8;
        case 0x1babbcu: goto label_1babbc;
        case 0x1babc0u: goto label_1babc0;
        case 0x1babc4u: goto label_1babc4;
        case 0x1babc8u: goto label_1babc8;
        case 0x1babccu: goto label_1babcc;
        case 0x1babd0u: goto label_1babd0;
        case 0x1babd4u: goto label_1babd4;
        case 0x1babd8u: goto label_1babd8;
        case 0x1babdcu: goto label_1babdc;
        case 0x1babe0u: goto label_1babe0;
        case 0x1babe4u: goto label_1babe4;
        case 0x1babe8u: goto label_1babe8;
        case 0x1babecu: goto label_1babec;
        case 0x1babf0u: goto label_1babf0;
        case 0x1babf4u: goto label_1babf4;
        case 0x1babf8u: goto label_1babf8;
        case 0x1babfcu: goto label_1babfc;
        case 0x1bac00u: goto label_1bac00;
        case 0x1bac04u: goto label_1bac04;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac0cu: goto label_1bac0c;
        case 0x1bac10u: goto label_1bac10;
        case 0x1bac14u: goto label_1bac14;
        case 0x1bac18u: goto label_1bac18;
        case 0x1bac1cu: goto label_1bac1c;
        default: break;
    }

    ctx->pc = 0x1b9600u;

label_1b9600:
    // 0x1b9600: 0x27bdf890  addiu       $sp, $sp, -0x770
    ctx->pc = 0x1b9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965392));
label_1b9604:
    // 0x1b9604: 0x7fb20720  sq          $s2, 0x720($sp)
    ctx->pc = 0x1b9604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), GPR_VEC(ctx, 18));
label_1b9608:
    // 0x1b9608: 0x7fb00740  sq          $s0, 0x740($sp)
    ctx->pc = 0x1b9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1856), GPR_VEC(ctx, 16));
label_1b960c:
    // 0x1b960c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b960cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b9610:
    // 0x1b9610: 0x7fb10730  sq          $s1, 0x730($sp)
    ctx->pc = 0x1b9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), GPR_VEC(ctx, 17));
label_1b9614:
    // 0x1b9614: 0x7fb30710  sq          $s3, 0x710($sp)
    ctx->pc = 0x1b9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1808), GPR_VEC(ctx, 19));
label_1b9618:
    // 0x1b9618: 0x7fb40700  sq          $s4, 0x700($sp)
    ctx->pc = 0x1b9618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 20));
label_1b961c:
    // 0x1b961c: 0x7fb506f0  sq          $s5, 0x6F0($sp)
    ctx->pc = 0x1b961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 21));
label_1b9620:
    // 0x1b9620: 0x7fb606e0  sq          $s6, 0x6E0($sp)
    ctx->pc = 0x1b9620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 22));
label_1b9624:
    // 0x1b9624: 0x7fb706d0  sq          $s7, 0x6D0($sp)
    ctx->pc = 0x1b9624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 23));
label_1b9628:
    // 0x1b9628: 0x7fbe06c0  sq          $fp, 0x6C0($sp)
    ctx->pc = 0x1b9628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 30));
label_1b962c:
    // 0x1b962c: 0xffbf06b0  sd          $ra, 0x6B0($sp)
    ctx->pc = 0x1b962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 31));
label_1b9630:
    // 0x1b9630: 0xe7b70768  swc1        $f23, 0x768($sp)
    ctx->pc = 0x1b9630u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1896), bits); }
label_1b9634:
    // 0x1b9634: 0xe7b60760  swc1        $f22, 0x760($sp)
    ctx->pc = 0x1b9634u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1888), bits); }
label_1b9638:
    // 0x1b9638: 0xe7b50758  swc1        $f21, 0x758($sp)
    ctx->pc = 0x1b9638u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1880), bits); }
label_1b963c:
    // 0x1b963c: 0xe7b40750  swc1        $f20, 0x750($sp)
    ctx->pc = 0x1b963cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1872), bits); }
label_1b9640:
    // 0x1b9640: 0xafa40678  sw          $a0, 0x678($sp)
    ctx->pc = 0x1b9640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1656), GPR_U32(ctx, 4));
label_1b9644:
    // 0x1b9644: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_1b9648:
    // 0x1b9648: 0xafa7069c  sw          $a3, 0x69C($sp)
    ctx->pc = 0x1b9648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1692), GPR_U32(ctx, 7));
label_1b964c:
    // 0x1b964c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b9650:
    if (ctx->pc == 0x1B9650u) {
        ctx->pc = 0x1B9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B964Cu;
        // 0x1b9650: 0xafa8067c  sw          $t0, 0x67C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1660), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9654u;
        goto label_1b9654;
    }
    ctx->pc = 0x1B964Cu;
    {
        const bool branch_taken_0x1b964c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B964Cu;
        // 0x1b9650: 0xafa8067c  sw          $t0, 0x67C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1660), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b964c) {
            ctx->pc = 0x1B9670u;
            goto label_1b9670;
        }
    }
    ctx->pc = 0x1B9654u;
label_1b9654:
    // 0x1b9654: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b9654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9658:
    // 0x1b9658: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1b9658u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1b965c:
    // 0x1b965c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1b965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1b9660:
    // 0x1b9660: 0x60f809  jalr        $v1
label_1b9664:
    if (ctx->pc == 0x1B9664u) {
        ctx->pc = 0x1B9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9660u;
        // 0x1b9664: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9668u;
        goto label_1b9668;
    }
    ctx->pc = 0x1B9660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9668u);
        ctx->pc = 0x1B9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9660u;
        // 0x1b9664: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9660u, 0x1B9668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9668u;
label_1b9668:
    // 0x1b9668: 0x1000055d  b           . + 4 + (0x55D << 2)
label_1b966c:
    if (ctx->pc == 0x1B966Cu) {
        ctx->pc = 0x1B966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9668u;
        // 0x1b966c: 0x8fa20678  lw          $v0, 0x678($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9670u;
        goto label_1b9670;
    }
    ctx->pc = 0x1B9668u;
    {
        const bool branch_taken_0x1b9668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9668u;
        // 0x1b966c: 0x8fa20678  lw          $v0, 0x678($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9668) {
            ctx->pc = 0x1BABE0u;
            goto label_1babe0;
        }
    }
    ctx->pc = 0x1B9670u;
label_1b9670:
    // 0x1b9670: 0x925e017c  lbu         $fp, 0x17C($s2)
    ctx->pc = 0x1b9670u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 380)));
label_1b9674:
    // 0x1b9674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b9674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b9678:
    // 0x1b9678: 0xafa20684  sw          $v0, 0x684($sp)
    ctx->pc = 0x1b9678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1668), GPR_U32(ctx, 2));
label_1b967c:
    // 0x1b967c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9680:
    // 0x1b9680: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1b9680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1b9684:
    // 0x1b9684: 0x37c20004  ori         $v0, $fp, 0x4
    ctx->pc = 0x1b9684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
label_1b9688:
    // 0x1b9688: 0x8fa50684  lw          $a1, 0x684($sp)
    ctx->pc = 0x1b9688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1668)));
label_1b968c:
    // 0x1b968c: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x1b968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_1b9690:
    // 0x1b9690: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x1b9690u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
label_1b9694:
    // 0x1b9694: 0x8e57019c  lw          $s7, 0x19C($s2)
    ctx->pc = 0x1b9694u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
label_1b9698:
    // 0x1b9698: 0x86280a  movz        $a1, $a0, $a2
    ctx->pc = 0x1b9698u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_1b969c:
    // 0x1b969c: 0xafa50684  sw          $a1, 0x684($sp)
    ctx->pc = 0x1b969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1668), GPR_U32(ctx, 5));
label_1b96a0:
    // 0x1b96a0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b96a4:
    // 0x1b96a4: 0x8e450170  lw          $a1, 0x170($s2)
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b96a8:
    // 0x1b96a8: 0x43f00b  movn        $fp, $v0, $v1
    ctx->pc = 0x1b96a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_1b96ac:
    // 0x1b96ac: 0xafb70680  sw          $s7, 0x680($sp)
    ctx->pc = 0x1b96acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 23));
label_1b96b0:
    // 0x1b96b0: 0xafa00688  sw          $zero, 0x688($sp)
    ctx->pc = 0x1b96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1672), GPR_U32(ctx, 0));
label_1b96b4:
    // 0x1b96b4: 0xafa6068c  sw          $a2, 0x68C($sp)
    ctx->pc = 0x1b96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1676), GPR_U32(ctx, 6));
label_1b96b8:
    // 0x1b96b8: 0xafa00690  sw          $zero, 0x690($sp)
    ctx->pc = 0x1b96b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 0));
label_1b96bc:
    // 0x1b96bc: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1b96c0:
    if (ctx->pc == 0x1B96C0u) {
        ctx->pc = 0x1B96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96BCu;
        // 0x1b96c0: 0xafa00694  sw          $zero, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96C4u;
        goto label_1b96c4;
    }
    ctx->pc = 0x1B96BCu;
    {
        const bool branch_taken_0x1b96bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96BCu;
        // 0x1b96c0: 0xafa00694  sw          $zero, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96bc) {
            ctx->pc = 0x1B96D4u;
            goto label_1b96d4;
        }
    }
    ctx->pc = 0x1B96C4u;
label_1b96c4:
    // 0x1b96c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b96c8:
    // 0x1b96c8: 0xafa40688  sw          $a0, 0x688($sp)
    ctx->pc = 0x1b96c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1672), GPR_U32(ctx, 4));
label_1b96cc:
    // 0x1b96cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b96ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b96d0:
    // 0x1b96d0: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x1b96d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
label_1b96d4:
    // 0x1b96d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b96d8:
    // 0x1b96d8: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x1b96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b96dc:
    // 0x1b96dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b96dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b96e0:
    // 0x1b96e0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_1b96e4:
    if (ctx->pc == 0x1B96E4u) {
        ctx->pc = 0x1B96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96E0u;
        // 0x1b96e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B96E8u;
        goto label_1b96e8;
    }
    ctx->pc = 0x1B96E0u;
    {
        const bool branch_taken_0x1b96e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96E0u;
        // 0x1b96e4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96e0) {
            ctx->pc = 0x1B9788u;
            goto label_1b9788;
        }
    }
    ctx->pc = 0x1B96E8u;
label_1b96e8:
    // 0x1b96e8: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1b96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1b96ec:
    // 0x1b96ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b96f0:
    // 0x1b96f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1b96f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b96f4:
    // 0x1b96f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b96f8:
    // 0x1b96f8: 0x40f809  jalr        $v0
label_1b96fc:
    if (ctx->pc == 0x1B96FCu) {
        ctx->pc = 0x1B96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96F8u;
        // 0x1b96fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9700u;
        goto label_1b9700;
    }
    ctx->pc = 0x1B96F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9700u);
        ctx->pc = 0x1B96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96F8u;
        // 0x1b96fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B96F8u, 0x1B9700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9700u;
label_1b9700:
    // 0x1b9700: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x1b9700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b9704:
    // 0x1b9704: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b9704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b9708:
    // 0x1b9708: 0x2c6303e8  sltiu       $v1, $v1, 0x3E8
    ctx->pc = 0x1b9708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
label_1b970c:
    // 0x1b970c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_1b9710:
    if (ctx->pc == 0x1B9710u) {
        ctx->pc = 0x1B9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B970Cu;
        // 0x1b9710: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9714u;
        goto label_1b9714;
    }
    ctx->pc = 0x1B970Cu;
    {
        const bool branch_taken_0x1b970c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B970Cu;
        // 0x1b9710: 0x8e05b8b8  lw          $a1, -0x4748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b970c) {
            ctx->pc = 0x1B9788u;
            goto label_1b9788;
        }
    }
    ctx->pc = 0x1B9714u;
label_1b9714:
    // 0x1b9714: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b9714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b9718:
    // 0x1b9718: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1b9718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b971c:
    // 0x1b971c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b9720:
    // 0x1b9720: 0x40f809  jalr        $v0
label_1b9724:
    if (ctx->pc == 0x1B9724u) {
        ctx->pc = 0x1B9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9720u;
        // 0x1b9724: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9728u;
        goto label_1b9728;
    }
    ctx->pc = 0x1B9720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9728u);
        ctx->pc = 0x1B9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9720u;
        // 0x1b9724: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9720u, 0x1B9728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9728u;
label_1b9728:
    // 0x1b9728: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x1b9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b972c:
    // 0x1b972c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b972cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b9730:
    // 0x1b9730: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1b9734:
    if (ctx->pc == 0x1B9734u) {
        ctx->pc = 0x1B9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9730u;
        // 0x1b9734: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9738u;
        goto label_1b9738;
    }
    ctx->pc = 0x1B9730u;
    {
        const bool branch_taken_0x1b9730 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9730u;
        // 0x1b9734: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9730) {
            ctx->pc = 0x1B974Cu;
            goto label_1b974c;
        }
    }
    ctx->pc = 0x1B9738u;
label_1b9738:
    // 0x1b9738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b973c:
    // 0x1b973c: 0x0  nop
    ctx->pc = 0x1b973cu;
    // NOP
label_1b9740:
    // 0x1b9740: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b9740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b9744:
    // 0x1b9744: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b9748:
    if (ctx->pc == 0x1B9748u) {
        ctx->pc = 0x1B974Cu;
        goto label_1b974c;
    }
    ctx->pc = 0x1B9744u;
    {
        const bool branch_taken_0x1b9744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9744) {
            ctx->pc = 0x1B9764u;
            goto label_1b9764;
        }
    }
    ctx->pc = 0x1B974Cu;
label_1b974c:
    // 0x1b974c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b9750:
    // 0x1b9750: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b9754:
    // 0x1b9754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9758:
    // 0x1b9758: 0x0  nop
    ctx->pc = 0x1b9758u;
    // NOP
label_1b975c:
    // 0x1b975c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b975cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b9760:
    // 0x1b9760: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b9760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b9764:
    // 0x1b9764: 0x3c013e82  lui         $at, 0x3E82
    ctx->pc = 0x1b9764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16002 << 16));
label_1b9768:
    // 0x1b9768: 0x34218f5d  ori         $at, $at, 0x8F5D
    ctx->pc = 0x1b9768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36701);
label_1b976c:
    // 0x1b976c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b976cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9770:
    // 0x1b9770: 0x0  nop
    ctx->pc = 0x1b9770u;
    // NOP
label_1b9774:
    // 0x1b9774: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b9774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b9778:
    // 0x1b9778: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b977c:
    // 0x1b977c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b977cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b9780:
    // 0x1b9780: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b9780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b9784:
    // 0x1b9784: 0xafa2068c  sw          $v0, 0x68C($sp)
    ctx->pc = 0x1b9784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1676), GPR_U32(ctx, 2));
label_1b9788:
    // 0x1b9788: 0x8fa2068c  lw          $v0, 0x68C($sp)
    ctx->pc = 0x1b9788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
label_1b978c:
    // 0x1b978c: 0x27a30230  addiu       $v1, $sp, 0x230
    ctx->pc = 0x1b978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1b9790:
    // 0x1b9790: 0xa24201b0  sb          $v0, 0x1B0($s2)
    ctx->pc = 0x1b9790u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 432), (uint8_t)GPR_U32(ctx, 2));
label_1b9794:
    // 0x1b9794: 0xafa00698  sw          $zero, 0x698($sp)
    ctx->pc = 0x1b9794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1688), GPR_U32(ctx, 0));
label_1b9798:
    // 0x1b9798: 0x8fa40684  lw          $a0, 0x684($sp)
    ctx->pc = 0x1b9798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1668)));
label_1b979c:
    // 0x1b979c: 0x108004cc  beqz        $a0, . + 4 + (0x4CC << 2)
label_1b97a0:
    if (ctx->pc == 0x1B97A0u) {
        ctx->pc = 0x1B97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B979Cu;
        // 0x1b97a0: 0xafa306ac  sw          $v1, 0x6AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B97A4u;
        goto label_1b97a4;
    }
    ctx->pc = 0x1B979Cu;
    {
        const bool branch_taken_0x1b979c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B979Cu;
        // 0x1b97a0: 0xafa306ac  sw          $v1, 0x6AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b979c) {
            ctx->pc = 0x1BAAD0u;
            goto label_1baad0;
        }
    }
    ctx->pc = 0x1B97A4u;
label_1b97a4:
    // 0x1b97a4: 0x0  nop
    ctx->pc = 0x1b97a4u;
    // NOP
label_1b97a8:
    // 0x1b97a8: 0x8fa5069c  lw          $a1, 0x69C($sp)
    ctx->pc = 0x1b97a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1692)));
label_1b97ac:
    // 0x1b97ac: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1b97acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_1b97b0:
    // 0x1b97b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b97b4:
    if (ctx->pc == 0x1B97B4u) {
        ctx->pc = 0x1B97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97B0u;
        // 0x1b97b4: 0xafa50664  sw          $a1, 0x664($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1636), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B97B8u;
        goto label_1b97b8;
    }
    ctx->pc = 0x1B97B0u;
    {
        const bool branch_taken_0x1b97b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97B0u;
        // 0x1b97b4: 0xafa50664  sw          $a1, 0x664($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1636), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97b0) {
            ctx->pc = 0x1B97D0u;
            goto label_1b97d0;
        }
    }
    ctx->pc = 0x1B97B8u;
label_1b97b8:
    // 0x1b97b8: 0x924301b1  lbu         $v1, 0x1B1($s2)
    ctx->pc = 0x1b97b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 433)));
label_1b97bc:
    // 0x1b97bc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_1b97c0:
    // 0x1b97c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b97c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b97c4:
    // 0x1b97c4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1b97c8:
    // 0x1b97c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b97cc:
    if (ctx->pc == 0x1B97CCu) {
        ctx->pc = 0x1B97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97C8u;
        // 0x1b97cc: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B97D0u;
        goto label_1b97d0;
    }
    ctx->pc = 0x1B97C8u;
    {
        const bool branch_taken_0x1b97c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97C8u;
        // 0x1b97cc: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97c8) {
            ctx->pc = 0x1B97E8u;
            goto label_1b97e8;
        }
    }
    ctx->pc = 0x1B97D0u;
label_1b97d0:
    // 0x1b97d0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1b97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_1b97d4:
    // 0x1b97d4: 0x8fa6068c  lw          $a2, 0x68C($sp)
    ctx->pc = 0x1b97d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
label_1b97d8:
    // 0x1b97d8: 0x8fa7069c  lw          $a3, 0x69C($sp)
    ctx->pc = 0x1b97d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1692)));
label_1b97dc:
    // 0x1b97dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b97e0:
    // 0x1b97e0: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x1b97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_1b97e4:
    // 0x1b97e4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1b97e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1b97e8:
    // 0x1b97e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b97e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b97ec:
    // 0x1b97ec: 0xafa20664  sw          $v0, 0x664($sp)
    ctx->pc = 0x1b97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1636), GPR_U32(ctx, 2));
label_1b97f0:
    // 0x1b97f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b97f4:
    // 0x1b97f4: 0x8fa406ac  lw          $a0, 0x6AC($sp)
    ctx->pc = 0x1b97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_1b97f8:
    // 0x1b97f8: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1b97f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1b97fc:
    // 0x1b97fc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1b97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1b9800:
    // 0x1b9800: 0x60f809  jalr        $v1
label_1b9804:
    if (ctx->pc == 0x1B9804u) {
        ctx->pc = 0x1B9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9800u;
        // 0x1b9804: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9808u;
        goto label_1b9808;
    }
    ctx->pc = 0x1B9800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9808u);
        ctx->pc = 0x1B9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9800u;
        // 0x1b9804: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9800u, 0x1B9808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9808u;
label_1b9808:
    // 0x1b9808: 0x8fa80690  lw          $t0, 0x690($sp)
    ctx->pc = 0x1b9808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_1b980c:
    // 0x1b980c: 0x15000016  bnez        $t0, . + 4 + (0x16 << 2)
label_1b9810:
    if (ctx->pc == 0x1B9810u) {
        ctx->pc = 0x1B9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B980Cu;
        // 0x1b9810: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9814u;
        goto label_1b9814;
    }
    ctx->pc = 0x1B980Cu;
    {
        const bool branch_taken_0x1b980c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B980Cu;
        // 0x1b9810: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b980c) {
            ctx->pc = 0x1B9868u;
            goto label_1b9868;
        }
    }
    ctx->pc = 0x1B9814u;
label_1b9814:
    // 0x1b9814: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b9818:
    if (ctx->pc == 0x1B9818u) {
        ctx->pc = 0x1B9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9814u;
        // 0x1b9818: 0xc7a00230  lwc1        $f0, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B981Cu;
        goto label_1b981c;
    }
    ctx->pc = 0x1B9814u;
    {
        const bool branch_taken_0x1b9814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9814u;
        // 0x1b9818: 0xc7a00230  lwc1        $f0, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9814) {
            ctx->pc = 0x1B9824u;
            goto label_1b9824;
        }
    }
    ctx->pc = 0x1B981Cu;
label_1b981c:
    // 0x1b981c: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x1b981cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_1b9820:
    // 0x1b9820: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x1b9820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_1b9824:
    // 0x1b9824: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x1b9824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
label_1b9828:
    // 0x1b9828: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1b982c:
    if (ctx->pc == 0x1B982Cu) {
        ctx->pc = 0x1B9830u;
        goto label_1b9830;
    }
    ctx->pc = 0x1B9828u;
    {
        const bool branch_taken_0x1b9828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9828) {
            ctx->pc = 0x1B9868u;
            goto label_1b9868;
        }
    }
    ctx->pc = 0x1B9830u;
label_1b9830:
    // 0x1b9830: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x1b9830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9834:
    // 0x1b9834: 0x0  nop
    ctx->pc = 0x1b9834u;
    // NOP
label_1b9838:
    // 0x1b9838: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1b983c:
    if (ctx->pc == 0x1B983Cu) {
        ctx->pc = 0x1B983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9838u;
        // 0x1b983c: 0xc7a10230  lwc1        $f1, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9840u;
        goto label_1b9840;
    }
    ctx->pc = 0x1B9838u;
    {
        const bool branch_taken_0x1b9838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9838u;
        // 0x1b983c: 0xc7a10230  lwc1        $f1, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9838) {
            ctx->pc = 0x1B9850u;
            goto label_1b9850;
        }
    }
    ctx->pc = 0x1B9840u;
label_1b9840:
    // 0x1b9840: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b9844:
    // 0x1b9844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9848:
    // 0x1b9848: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b984c:
    if (ctx->pc == 0x1B984Cu) {
        ctx->pc = 0x1B984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9848u;
        // 0x1b984c: 0x4600b802  mul.s       $f0, $f23, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9850u;
        goto label_1b9850;
    }
    ctx->pc = 0x1B9848u;
    {
        const bool branch_taken_0x1b9848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9848u;
        // 0x1b984c: 0x4600b802  mul.s       $f0, $f23, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9848) {
            ctx->pc = 0x1B9860u;
            goto label_1b9860;
        }
    }
    ctx->pc = 0x1B9850u;
label_1b9850:
    // 0x1b9850: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b9850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b9854:
    // 0x1b9854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9858:
    // 0x1b9858: 0x0  nop
    ctx->pc = 0x1b9858u;
    // NOP
label_1b985c:
    // 0x1b985c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1b985cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_1b9860:
    // 0x1b9860: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b9860u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b9864:
    // 0x1b9864: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x1b9864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_1b9868:
    // 0x1b9868: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x1b9868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b986c:
    // 0x1b986c: 0x0  nop
    ctx->pc = 0x1b986cu;
    // NOP
label_1b9870:
    // 0x1b9870: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1b9874:
    if (ctx->pc == 0x1B9874u) {
        ctx->pc = 0x1B9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9870u;
        // 0x1b9874: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9878u;
        goto label_1b9878;
    }
    ctx->pc = 0x1B9870u;
    {
        const bool branch_taken_0x1b9870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9870) {
            ctx->pc = 0x1B9874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9870u;
            // 0x1b9874: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9878u;
            goto label_1b9878;
        }
    }
    ctx->pc = 0x1B9878u;
label_1b9878:
    // 0x1b9878: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x1b9878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1b987c:
    // 0x1b987c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1b987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1b9880:
    // 0x1b9880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b9880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b9884:
    // 0x1b9884: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1b9884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b9888:
    // 0x1b9888: 0xc06e538  jal         func_1B94E0
label_1b988c:
    if (ctx->pc == 0x1B988Cu) {
        ctx->pc = 0x1B988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9888u;
        // 0x1b988c: 0x7fa20220  sq          $v0, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9890u;
        goto label_1b9890;
    }
    ctx->pc = 0x1B9888u;
    SET_GPR_U32(ctx, 31, 0x1B9890u);
    ctx->pc = 0x1B988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9888u;
    // 0x1b988c: 0x7fa20220  sq          $v0, 0x220($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94E0u, 0x1B9888u, 0x1B9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9890u;
label_1b9890:
    // 0x1b9890: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1b9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_1b9894:
    // 0x1b9894: 0x6ba90247  ldl         $t1, 0x247($sp)
    ctx->pc = 0x1b9894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1b9898:
    // 0x1b9898: 0x6fa90240  ldr         $t1, 0x240($sp)
    ctx->pc = 0x1b9898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1b989c:
    // 0x1b989c: 0x6ba3024f  ldl         $v1, 0x24F($sp)
    ctx->pc = 0x1b989cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b98a0:
    // 0x1b98a0: 0x6fa30248  ldr         $v1, 0x248($sp)
    ctx->pc = 0x1b98a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b98a4:
    // 0x1b98a4: 0xb3a90217  sdl         $t1, 0x217($sp)
    ctx->pc = 0x1b98a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b98a8:
    // 0x1b98a8: 0xb7a90210  sdr         $t1, 0x210($sp)
    ctx->pc = 0x1b98a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b98ac:
    // 0x1b98ac: 0xb3a3021f  sdl         $v1, 0x21F($sp)
    ctx->pc = 0x1b98acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b98b0:
    // 0x1b98b0: 0xb7a30218  sdr         $v1, 0x218($sp)
    ctx->pc = 0x1b98b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b98b4:
    // 0x1b98b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b98b8:
    if (ctx->pc == 0x1B98B8u) {
        ctx->pc = 0x1B98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B4u;
        // 0x1b98b8: 0xafa0066c  sw          $zero, 0x66C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98BCu;
        goto label_1b98bc;
    }
    ctx->pc = 0x1B98B4u;
    {
        const bool branch_taken_0x1b98b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B4u;
        // 0x1b98b8: 0xafa0066c  sw          $zero, 0x66C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98b4) {
            ctx->pc = 0x1B98C4u;
            goto label_1b98c4;
        }
    }
    ctx->pc = 0x1B98BCu;
label_1b98bc:
    // 0x1b98bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b98c0:
    if (ctx->pc == 0x1B98C0u) {
        ctx->pc = 0x1B98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98BCu;
        // 0x1b98c0: 0x8e540068  lw          $s4, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98C4u;
        goto label_1b98c4;
    }
    ctx->pc = 0x1B98BCu;
    {
        const bool branch_taken_0x1b98bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98BCu;
        // 0x1b98c0: 0x8e540068  lw          $s4, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98bc) {
            ctx->pc = 0x1B98C8u;
            goto label_1b98c8;
        }
    }
    ctx->pc = 0x1B98C4u;
label_1b98c4:
    // 0x1b98c4: 0x8e540060  lw          $s4, 0x60($s2)
    ctx->pc = 0x1b98c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1b98c8:
    // 0x1b98c8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_1b98cc:
    if (ctx->pc == 0x1B98CCu) {
        ctx->pc = 0x1B98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98C8u;
        // 0x1b98cc: 0x8e540068  lw          $s4, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98D0u;
        goto label_1b98d0;
    }
    ctx->pc = 0x1B98C8u;
    {
        const bool branch_taken_0x1b98c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b98c8) {
            ctx->pc = 0x1B98CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B98C8u;
            // 0x1b98cc: 0x8e540068  lw          $s4, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B98D0u;
            goto label_1b98d0;
        }
    }
    ctx->pc = 0x1B98D0u;
label_1b98d0:
    // 0x1b98d0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1b98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1b98d4:
    // 0x1b98d4: 0x27a40252  addiu       $a0, $sp, 0x252
    ctx->pc = 0x1b98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 594));
label_1b98d8:
    // 0x1b98d8: 0x24434990  addiu       $v1, $v0, 0x4990
    ctx->pc = 0x1b98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_1b98dc:
    // 0x1b98dc: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b98e0:
    // 0x1b98e0: 0x80680001  lb          $t0, 0x1($v1)
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1b98e4:
    // 0x1b98e4: 0xa3a70250  sb          $a3, 0x250($sp)
    ctx->pc = 0x1b98e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 592), (uint8_t)GPR_U32(ctx, 7));
label_1b98e8:
    // 0x1b98e8: 0xa3a80251  sb          $t0, 0x251($sp)
    ctx->pc = 0x1b98e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 593), (uint8_t)GPR_U32(ctx, 8));
label_1b98ec:
    // 0x1b98ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b98ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b98f0:
    // 0x1b98f0: 0x240603fe  addiu       $a2, $zero, 0x3FE
    ctx->pc = 0x1b98f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
label_1b98f4:
    // 0x1b98f4: 0xc10c1fa  jal         func_4307E8
label_1b98f8:
    if (ctx->pc == 0x1B98F8u) {
        ctx->pc = 0x1B98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98F4u;
        // 0x1b98f8: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B98FCu;
        goto label_1b98fc;
    }
    ctx->pc = 0x1B98F4u;
    SET_GPR_U32(ctx, 31, 0x1B98FCu);
    ctx->pc = 0x1B98F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B98F4u;
    // 0x1b98f8: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1B98F4u, 0x1B98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B98FCu;
label_1b98fc:
    // 0x1b98fc: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x1b98fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1b9900:
    // 0x1b9900: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b9900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b9904:
    // 0x1b9904: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1b9908:
    if (ctx->pc == 0x1B9908u) {
        ctx->pc = 0x1B9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9904u;
        // 0x1b9908: 0xafa006a0  sw          $zero, 0x6A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B990Cu;
        goto label_1b990c;
    }
    ctx->pc = 0x1B9904u;
    {
        const bool branch_taken_0x1b9904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9904u;
        // 0x1b9908: 0xafa006a0  sw          $zero, 0x6A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9904) {
            ctx->pc = 0x1B991Cu;
            goto label_1b991c;
        }
    }
    ctx->pc = 0x1B990Cu;
label_1b990c:
    // 0x1b990c: 0x82a20001  lb          $v0, 0x1($s5)
    ctx->pc = 0x1b990cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_1b9910:
    // 0x1b9910: 0x3842003c  xori        $v0, $v0, 0x3C
    ctx->pc = 0x1b9910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)60);
label_1b9914:
    // 0x1b9914: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b9914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b9918:
    // 0x1b9918: 0xafa206a0  sw          $v0, 0x6A0($sp)
    ctx->pc = 0x1b9918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1696), GPR_U32(ctx, 2));
label_1b991c:
    // 0x1b991c: 0x8fa40698  lw          $a0, 0x698($sp)
    ctx->pc = 0x1b991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1688)));
label_1b9920:
    // 0x1b9920: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b9924:
    // 0x1b9924: 0x12a00464  beqz        $s5, . + 4 + (0x464 << 2)
label_1b9928:
    if (ctx->pc == 0x1B9928u) {
        ctx->pc = 0x1B9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9924u;
        // 0x1b9928: 0xafa406a4  sw          $a0, 0x6A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1700), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B992Cu;
        goto label_1b992c;
    }
    ctx->pc = 0x1B9924u;
    {
        const bool branch_taken_0x1b9924 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9924u;
        // 0x1b9928: 0xafa406a4  sw          $a0, 0x6A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1700), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9924) {
            ctx->pc = 0x1BAAB8u;
            goto label_1baab8;
        }
    }
    ctx->pc = 0x1B992Cu;
label_1b992c:
    // 0x1b992c: 0x8fa506a0  lw          $a1, 0x6A0($sp)
    ctx->pc = 0x1b992cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1696)));
label_1b9930:
    // 0x1b9930: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1b9934:
    if (ctx->pc == 0x1B9934u) {
        ctx->pc = 0x1B9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9930u;
        // 0x1b9934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9938u;
        goto label_1b9938;
    }
    ctx->pc = 0x1B9930u;
    {
        const bool branch_taken_0x1b9930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9930u;
        // 0x1b9934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9930) {
            ctx->pc = 0x1B9948u;
            goto label_1b9948;
        }
    }
    ctx->pc = 0x1B9938u;
label_1b9938:
    // 0x1b9938: 0x10a20109  beq         $a1, $v0, . + 4 + (0x109 << 2)
label_1b993c:
    if (ctx->pc == 0x1B993Cu) {
        ctx->pc = 0x1B993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9938u;
        // 0x1b993c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9940u;
        goto label_1b9940;
    }
    ctx->pc = 0x1B9938u;
    {
        const bool branch_taken_0x1b9938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9938u;
        // 0x1b993c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9938) {
            ctx->pc = 0x1B9D60u;
            goto label_1b9d60;
        }
    }
    ctx->pc = 0x1B9940u;
label_1b9940:
    // 0x1b9940: 0x1000045b  b           . + 4 + (0x45B << 2)
label_1b9944:
    if (ctx->pc == 0x1B9944u) {
        ctx->pc = 0x1B9948u;
        goto label_1b9948;
    }
    ctx->pc = 0x1B9940u;
    {
        const bool branch_taken_0x1b9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9940) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1B9948u;
label_1b9948:
    // 0x1b9948: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1b994c:
    // 0x1b994c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b9950:
    // 0x1b9950: 0xc10d74c  jal         func_435D30
label_1b9954:
    if (ctx->pc == 0x1B9954u) {
        ctx->pc = 0x1B9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9950u;
        // 0x1b9954: 0x24c54990  addiu       $a1, $a2, 0x4990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 18832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9958u;
        goto label_1b9958;
    }
    ctx->pc = 0x1B9950u;
    SET_GPR_U32(ctx, 31, 0x1B9958u);
    ctx->pc = 0x1B9954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9950u;
    // 0x1b9954: 0x24c54990  addiu       $a1, $a2, 0x4990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 18832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1B9950u, 0x1B9958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9958u;
label_1b9958:
    // 0x1b9958: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b9958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b995c:
    // 0x1b995c: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_1b9960:
    if (ctx->pc == 0x1B9960u) {
        ctx->pc = 0x1B9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B995Cu;
        // 0x1b9960: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9964u;
        goto label_1b9964;
    }
    ctx->pc = 0x1B995Cu;
    {
        const bool branch_taken_0x1b995c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B995Cu;
        // 0x1b9960: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b995c) {
            ctx->pc = 0x1B9974u;
            goto label_1b9974;
        }
    }
    ctx->pc = 0x1B9964u;
label_1b9964:
    // 0x1b9964: 0xc10c3ac  jal         func_430EB0
label_1b9968:
    if (ctx->pc == 0x1B9968u) {
        ctx->pc = 0x1B9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9964u;
        // 0x1b9968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B996Cu;
        goto label_1b996c;
    }
    ctx->pc = 0x1B9964u;
    SET_GPR_U32(ctx, 31, 0x1B996Cu);
    ctx->pc = 0x1B9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9964u;
    // 0x1b9968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1B9964u, 0x1B996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B996Cu;
label_1b996c:
    // 0x1b996c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b9970:
    if (ctx->pc == 0x1B9970u) {
        ctx->pc = 0x1B9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B996Cu;
        // 0x1b9970: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9974u;
        goto label_1b9974;
    }
    ctx->pc = 0x1B996Cu;
    {
        const bool branch_taken_0x1b996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B996Cu;
        // 0x1b9970: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b996c) {
            ctx->pc = 0x1B997Cu;
            goto label_1b997c;
        }
    }
    ctx->pc = 0x1B9974u;
label_1b9974:
    // 0x1b9974: 0x2b48023  subu        $s0, $s5, $s4
    ctx->pc = 0x1b9974u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1b9978:
    // 0x1b9978: 0xafa706a0  sw          $a3, 0x6A0($sp)
    ctx->pc = 0x1b9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1696), GPR_U32(ctx, 7));
label_1b997c:
    // 0x1b997c: 0x1200044c  beqz        $s0, . + 4 + (0x44C << 2)
label_1b9980:
    if (ctx->pc == 0x1B9980u) {
        ctx->pc = 0x1B9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B997Cu;
        // 0x1b9980: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9984u;
        goto label_1b9984;
    }
    ctx->pc = 0x1B997Cu;
    {
        const bool branch_taken_0x1b997c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B997Cu;
        // 0x1b9980: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b997c) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1B9984u;
label_1b9984:
    // 0x1b9984: 0xa3a0020f  sb          $zero, 0x20F($sp)
    ctx->pc = 0x1b9984u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 527), (uint8_t)GPR_U32(ctx, 0));
label_1b9988:
    // 0x1b9988: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b9988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b998c:
    // 0x1b998c: 0xc10c4de  jal         func_431378
label_1b9990:
    if (ctx->pc == 0x1B9990u) {
        ctx->pc = 0x1B9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B998Cu;
        // 0x1b9990: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9994u;
        goto label_1b9994;
    }
    ctx->pc = 0x1B998Cu;
    SET_GPR_U32(ctx, 31, 0x1B9994u);
    ctx->pc = 0x1B9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B998Cu;
    // 0x1b9990: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1B998Cu, 0x1B9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9994u;
label_1b9994:
    // 0x1b9994: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x1b9994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1b9998:
    // 0x1b9998: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x1b9998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_1b999c:
    // 0x1b999c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b99a0:
    // 0x1b99a0: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x1b99a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
label_1b99a4:
    // 0x1b99a4: 0x8fa80698  lw          $t0, 0x698($sp)
    ctx->pc = 0x1b99a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1688)));
label_1b99a8:
    // 0x1b99a8: 0x150300ca  bne         $t0, $v1, . + 4 + (0xCA << 2)
label_1b99ac:
    if (ctx->pc == 0x1B99ACu) {
        ctx->pc = 0x1B99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99A8u;
        // 0x1b99ac: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99B0u;
        goto label_1b99b0;
    }
    ctx->pc = 0x1B99A8u;
    {
        const bool branch_taken_0x1b99a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99A8u;
        // 0x1b99ac: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99a8) {
            ctx->pc = 0x1B9CD4u;
            goto label_1b9cd4;
        }
    }
    ctx->pc = 0x1B99B0u;
label_1b99b0:
    // 0x1b99b0: 0x8fa2066c  lw          $v0, 0x66C($sp)
    ctx->pc = 0x1b99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1644)));
label_1b99b4:
    // 0x1b99b4: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_1b99b8:
    if (ctx->pc == 0x1B99B8u) {
        ctx->pc = 0x1B99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99B4u;
        // 0x1b99b8: 0x8fb30664  lw          $s3, 0x664($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B99BCu;
        goto label_1b99bc;
    }
    ctx->pc = 0x1B99B4u;
    {
        const bool branch_taken_0x1b99b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99B4u;
        // 0x1b99b8: 0x8fb30664  lw          $s3, 0x664($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99b4) {
            ctx->pc = 0x1B9BCCu;
            goto label_1b9bcc;
        }
    }
    ctx->pc = 0x1B99BCu;
label_1b99bc:
    // 0x1b99bc: 0x131602  srl         $v0, $s3, 24
    ctx->pc = 0x1b99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 24));
label_1b99c0:
    // 0x1b99c0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b99c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1b99c4:
    // 0x1b99c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b99c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b99c8:
    // 0x1b99c8: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x1b99c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1b99cc:
    // 0x1b99cc: 0x0  nop
    ctx->pc = 0x1b99ccu;
    // NOP
label_1b99d0:
    // 0x1b99d0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1b99d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_1b99d4:
    // 0x1b99d4: 0x132402  srl         $a0, $s3, 16
    ctx->pc = 0x1b99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
label_1b99d8:
    // 0x1b99d8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1b99d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b99dc:
    // 0x1b99dc: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1b99dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1b99e0:
    // 0x1b99e0: 0x131202  srl         $v0, $s3, 8
    ctx->pc = 0x1b99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
label_1b99e4:
    // 0x1b99e4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1b99e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b99e8:
    // 0x1b99e8: 0x0  nop
    ctx->pc = 0x1b99e8u;
    // NOP
label_1b99ec:
    // 0x1b99ec: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b99ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1b99f0:
    // 0x1b99f0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1b99f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b99f4:
    // 0x1b99f4: 0x0  nop
    ctx->pc = 0x1b99f4u;
    // NOP
label_1b99f8:
    // 0x1b99f8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1b99f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1b99fc:
    // 0x1b99fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b99fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b9a00:
    // 0x1b9a00: 0x46013882  mul.s       $f2, $f7, $f1
    ctx->pc = 0x1b9a00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_1b9a04:
    // 0x1b9a04: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b9a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1b9a08:
    // 0x1b9a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9a0c:
    // 0x1b9a0c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b9a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b9a10:
    // 0x1b9a10: 0x0  nop
    ctx->pc = 0x1b9a10u;
    // NOP
label_1b9a14:
    // 0x1b9a14: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1b9a18:
    // 0x1b9a18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b9a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b9a1c:
    // 0x1b9a1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b9a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b9a20:
    // 0x1b9a20: 0x46013202  mul.s       $f8, $f6, $f1
    ctx->pc = 0x1b9a20u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_1b9a24:
    // 0x1b9a24: 0x27a70650  addiu       $a3, $sp, 0x650
    ctx->pc = 0x1b9a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_1b9a28:
    // 0x1b9a28: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x1b9a28u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
label_1b9a2c:
    // 0x1b9a2c: 0x46012242  mul.s       $f9, $f4, $f1
    ctx->pc = 0x1b9a2cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1b9a30:
    // 0x1b9a30: 0x460012a4  .word       0x460012A4                   # cvt.w.s     $f10, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[10], &tmp, sizeof(tmp)); }
label_1b9a34:
    // 0x1b9a34: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x1b9a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b9a38:
    // 0x1b9a38: 0x27a80654  addiu       $t0, $sp, 0x654
    ctx->pc = 0x1b9a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1620));
label_1b9a3c:
    // 0x1b9a3c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1b9a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1b9a40:
    // 0x1b9a40: 0x46004229  min.s       $f8, $f8, $f0
    ctx->pc = 0x1b9a40u;
    ctx->f[8] = std::min(ctx->f[8], ctx->f[0]);
label_1b9a44:
    // 0x1b9a44: 0x460040a4  .word       0x460040A4                   # cvt.w.s     $f2, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9a44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1b9a48:
    // 0x1b9a48: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1b9a48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b9a4c:
    // 0x1b9a4c: 0x46004a69  min.s       $f9, $f9, $f0
    ctx->pc = 0x1b9a4cu;
    ctx->f[9] = std::min(ctx->f[9], ctx->f[0]);
label_1b9a50:
    // 0x1b9a50: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x1b9a50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b9a54:
    // 0x1b9a54: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x1b9a54u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_1b9a58:
    // 0x1b9a58: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1b9a58u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_1b9a5c:
    // 0x1b9a5c: 0x46053182  mul.s       $f6, $f6, $f5
    ctx->pc = 0x1b9a5cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_1b9a60:
    // 0x1b9a60: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x1b9a60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_1b9a64:
    // 0x1b9a64: 0xa3a30650  sb          $v1, 0x650($sp)
    ctx->pc = 0x1b9a64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1616), (uint8_t)GPR_U32(ctx, 3));
label_1b9a68:
    // 0x1b9a68: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1b9a68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_1b9a6c:
    // 0x1b9a6c: 0x460039e9  min.s       $f7, $f7, $f0
    ctx->pc = 0x1b9a6cu;
    ctx->f[7] = std::min(ctx->f[7], ctx->f[0]);
label_1b9a70:
    // 0x1b9a70: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9a70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1b9a74:
    // 0x1b9a74: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1b9a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1b9a78:
    // 0x1b9a78: 0x460031a9  min.s       $f6, $f6, $f0
    ctx->pc = 0x1b9a78u;
    ctx->f[6] = std::min(ctx->f[6], ctx->f[0]);
label_1b9a7c:
    // 0x1b9a7c: 0x46004864  .word       0x46004864                   # cvt.w.s     $f1, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b9a80:
    // 0x1b9a80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b9a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b9a84:
    // 0x1b9a84: 0x46002129  min.s       $f4, $f4, $f0
    ctx->pc = 0x1b9a84u;
    ctx->f[4] = std::min(ctx->f[4], ctx->f[0]);
label_1b9a88:
    // 0x1b9a88: 0x460018e9  min.s       $f3, $f3, $f0
    ctx->pc = 0x1b9a88u;
    ctx->f[3] = std::min(ctx->f[3], ctx->f[0]);
label_1b9a8c:
    // 0x1b9a8c: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b9a90:
    // 0x1b9a90: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1b9a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1b9a94:
    // 0x1b9a94: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x1b9a94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
label_1b9a98:
    // 0x1b9a98: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x1b9a98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b9a9c:
    // 0x1b9a9c: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9a9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b9aa0:
    // 0x1b9aa0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b9aa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1b9aa4:
    // 0x1b9aa4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9aa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b9aa8:
    // 0x1b9aa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b9aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b9aac:
    // 0x1b9aac: 0xa1060003  sb          $a2, 0x3($t0)
    ctx->pc = 0x1b9aacu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 6));
label_1b9ab0:
    // 0x1b9ab0: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b9ab4:
    // 0x1b9ab4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1b9ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1b9ab8:
    // 0x1b9ab8: 0xa3a50654  sb          $a1, 0x654($sp)
    ctx->pc = 0x1b9ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1620), (uint8_t)GPR_U32(ctx, 5));
label_1b9abc:
    // 0x1b9abc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b9ac0:
    // 0x1b9ac0: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x1b9ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b9ac4:
    // 0x1b9ac4: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x1b9ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
label_1b9ac8:
    // 0x1b9ac8: 0x8c44b8b8  lw          $a0, -0x4748($v0)
    ctx->pc = 0x1b9ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1b9acc:
    // 0x1b9acc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b9accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b9ad0:
    // 0x1b9ad0: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1b9ad0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1b9ad4:
    // 0x1b9ad4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1b9ad8:
    // 0x1b9ad8: 0x40f809  jalr        $v0
label_1b9adc:
    if (ctx->pc == 0x1B9ADCu) {
        ctx->pc = 0x1B9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AD8u;
        // 0x1b9adc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9AE0u;
        goto label_1b9ae0;
    }
    ctx->pc = 0x1B9AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9AE0u);
        ctx->pc = 0x1B9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AD8u;
        // 0x1b9adc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9AD8u, 0x1B9AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9AE0u;
label_1b9ae0:
    // 0x1b9ae0: 0x8fa3066c  lw          $v1, 0x66C($sp)
    ctx->pc = 0x1b9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1644)));
label_1b9ae4:
    // 0x1b9ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b9ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ae8:
    // 0x1b9ae8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9aec:
    // 0x1b9aec: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x1b9aecu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1b9af0:
    // 0x1b9af0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1b9af4:
    if (ctx->pc == 0x1B9AF4u) {
        ctx->pc = 0x1B9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AF0u;
        // 0x1b9af4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9AF8u;
        goto label_1b9af8;
    }
    ctx->pc = 0x1B9AF0u;
    {
        const bool branch_taken_0x1b9af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9af0) {
            ctx->pc = 0x1B9AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9AF0u;
            // 0x1b9af4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9AF8u;
            goto label_1b9af8;
        }
    }
    ctx->pc = 0x1B9AF8u;
label_1b9af8:
    // 0x1b9af8: 0x2010  mfhi        $a0
    ctx->pc = 0x1b9af8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1b9afc:
    // 0x1b9afc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1b9afcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b9b00:
    // 0x1b9b00: 0x1812  mflo        $v1
    ctx->pc = 0x1b9b00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1b9b04:
    // 0x1b9b04: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1b9b08:
    if (ctx->pc == 0x1B9B08u) {
        ctx->pc = 0x1B9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B04u;
        // 0x1b9b08: 0x8fa90650  lw          $t1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B0Cu;
        goto label_1b9b0c;
    }
    ctx->pc = 0x1B9B04u;
    {
        const bool branch_taken_0x1b9b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B04u;
        // 0x1b9b08: 0x8fa90650  lw          $t1, 0x650($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b04) {
            ctx->pc = 0x1B9B10u;
            goto label_1b9b10;
        }
    }
    ctx->pc = 0x1B9B0Cu;
label_1b9b0c:
    // 0x1b9b0c: 0x8fa90654  lw          $t1, 0x654($sp)
    ctx->pc = 0x1b9b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_1b9b10:
    // 0x1b9b10: 0x8fa3066c  lw          $v1, 0x66C($sp)
    ctx->pc = 0x1b9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1644)));
label_1b9b14:
    // 0x1b9b14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9b18:
    // 0x1b9b18: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1b9b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b1c:
    // 0x1b9b1c: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x1b9b1cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1b9b20:
    // 0x1b9b20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1b9b24:
    if (ctx->pc == 0x1B9B24u) {
        ctx->pc = 0x1B9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B20u;
        // 0x1b9b24: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B28u;
        goto label_1b9b28;
    }
    ctx->pc = 0x1B9B20u;
    {
        const bool branch_taken_0x1b9b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b20) {
            ctx->pc = 0x1B9B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B20u;
            // 0x1b9b24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B28u;
            goto label_1b9b28;
        }
    }
    ctx->pc = 0x1B9B28u;
label_1b9b28:
    // 0x1b9b28: 0x2010  mfhi        $a0
    ctx->pc = 0x1b9b28u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1b9b2c:
    // 0x1b9b2c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1b9b2cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b9b30:
    // 0x1b9b30: 0x1812  mflo        $v1
    ctx->pc = 0x1b9b30u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1b9b34:
    // 0x1b9b34: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1b9b38:
    if (ctx->pc == 0x1B9B38u) {
        ctx->pc = 0x1B9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B34u;
        // 0x1b9b38: 0x8fa50654  lw          $a1, 0x654($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B3Cu;
        goto label_1b9b3c;
    }
    ctx->pc = 0x1B9B34u;
    {
        const bool branch_taken_0x1b9b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B34u;
        // 0x1b9b38: 0x8fa50654  lw          $a1, 0x654($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b34) {
            ctx->pc = 0x1B9B40u;
            goto label_1b9b40;
        }
    }
    ctx->pc = 0x1B9B3Cu;
label_1b9b3c:
    // 0x1b9b3c: 0x8fa50650  lw          $a1, 0x650($sp)
    ctx->pc = 0x1b9b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_1b9b40:
    // 0x1b9b40: 0xc8001b  divu        $zero, $a2, $t0
    ctx->pc = 0x1b9b40u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1b9b44:
    // 0x1b9b44: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_1b9b48:
    if (ctx->pc == 0x1B9B48u) {
        ctx->pc = 0x1B9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B44u;
        // 0x1b9b48: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B4Cu;
        goto label_1b9b4c;
    }
    ctx->pc = 0x1B9B44u;
    {
        const bool branch_taken_0x1b9b44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b44) {
            ctx->pc = 0x1B9B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B44u;
            // 0x1b9b48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B4Cu;
            goto label_1b9b4c;
        }
    }
    ctx->pc = 0x1B9B4Cu;
label_1b9b4c:
    // 0x1b9b4c: 0x27a60658  addiu       $a2, $sp, 0x658
    ctx->pc = 0x1b9b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1624));
label_1b9b50:
    // 0x1b9b50: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9b50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b9b54:
    // 0x1b9b54: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1b9b58:
    if (ctx->pc == 0x1B9B58u) {
        ctx->pc = 0x1B9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B54u;
        // 0x1b9b58: 0x27a7065c  addiu       $a3, $sp, 0x65C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B5Cu;
        goto label_1b9b5c;
    }
    ctx->pc = 0x1B9B54u;
    {
        const bool branch_taken_0x1b9b54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B54u;
        // 0x1b9b58: 0x27a7065c  addiu       $a3, $sp, 0x65C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b54) {
            ctx->pc = 0x1B9B70u;
            goto label_1b9b70;
        }
    }
    ctx->pc = 0x1B9B5Cu;
label_1b9b5c:
    // 0x1b9b5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9b60:
    // 0x1b9b60: 0x0  nop
    ctx->pc = 0x1b9b60u;
    // NOP
label_1b9b64:
    // 0x1b9b64: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1b9b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b9b68:
    // 0x1b9b68: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b9b6c:
    if (ctx->pc == 0x1B9B6Cu) {
        ctx->pc = 0x1B9B70u;
        goto label_1b9b70;
    }
    ctx->pc = 0x1B9B68u;
    {
        const bool branch_taken_0x1b9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b68) {
            ctx->pc = 0x1B9B8Cu;
            goto label_1b9b8c;
        }
    }
    ctx->pc = 0x1B9B70u;
label_1b9b70:
    // 0x1b9b70: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1b9b74:
    // 0x1b9b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b9b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b9b78:
    // 0x1b9b78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b9b7c:
    // 0x1b9b7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b9b80:
    // 0x1b9b80: 0x0  nop
    ctx->pc = 0x1b9b80u;
    // NOP
label_1b9b84:
    // 0x1b9b84: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1b9b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b9b88:
    // 0x1b9b88: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1b9b88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1b9b8c:
    // 0x1b9b8c: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
label_1b9b90:
    if (ctx->pc == 0x1B9B90u) {
        ctx->pc = 0x1B9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B8Cu;
        // 0x1b9b90: 0x81842  srl         $v1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9B94u;
        goto label_1b9b94;
    }
    ctx->pc = 0x1B9B8Cu;
    {
        const bool branch_taken_0x1b9b8c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1B9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B8Cu;
        // 0x1b9b90: 0x81842  srl         $v1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b8c) {
            ctx->pc = 0x1B9BA8u;
            goto label_1b9ba8;
        }
    }
    ctx->pc = 0x1B9B94u;
label_1b9b94:
    // 0x1b9b94: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x1b9b94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b9b98:
    // 0x1b9b98: 0x0  nop
    ctx->pc = 0x1b9b98u;
    // NOP
label_1b9b9c:
    // 0x1b9b9c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1b9b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_1b9ba0:
    // 0x1b9ba0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b9ba4:
    if (ctx->pc == 0x1B9BA4u) {
        ctx->pc = 0x1B9BA8u;
        goto label_1b9ba8;
    }
    ctx->pc = 0x1B9BA0u;
    {
        const bool branch_taken_0x1b9ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ba0) {
            ctx->pc = 0x1B9BC0u;
            goto label_1b9bc0;
        }
    }
    ctx->pc = 0x1B9BA8u;
label_1b9ba8:
    // 0x1b9ba8: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x1b9ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_1b9bac:
    // 0x1b9bac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b9bb0:
    // 0x1b9bb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b9bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b9bb4:
    // 0x1b9bb4: 0x0  nop
    ctx->pc = 0x1b9bb4u;
    // NOP
label_1b9bb8:
    // 0x1b9bb8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1b9bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_1b9bbc:
    // 0x1b9bbc: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x1b9bbcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_1b9bc0:
    // 0x1b9bc0: 0xc0ce090  jal         func_338240
label_1b9bc4:
    if (ctx->pc == 0x1B9BC4u) {
        ctx->pc = 0x1B9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BC0u;
        // 0x1b9bc4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9BC8u;
        goto label_1b9bc8;
    }
    ctx->pc = 0x1B9BC0u;
    SET_GPR_U32(ctx, 31, 0x1B9BC8u);
    ctx->pc = 0x1B9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BC0u;
    // 0x1b9bc4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338240u, 0x1B9BC0u, 0x1B9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9BC8u;
label_1b9bc8:
    // 0x1b9bc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b9bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9bcc:
    // 0x1b9bcc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9bd0:
    // 0x1b9bd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b9bd4:
    // 0x1b9bd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b9bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b9bd8:
    // 0x1b9bd8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1b9bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1b9bdc:
    // 0x1b9bdc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1b9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1b9be0:
    // 0x1b9be0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1b9be0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_1b9be4:
    // 0x1b9be4: 0x60f809  jalr        $v1
label_1b9be8:
    if (ctx->pc == 0x1B9BE8u) {
        ctx->pc = 0x1B9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BE4u;
        // 0x1b9be8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9BECu;
        goto label_1b9bec;
    }
    ctx->pc = 0x1B9BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9BECu);
        ctx->pc = 0x1B9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BE4u;
        // 0x1b9be8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9BE4u, 0x1B9BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9BECu;
label_1b9bec:
    // 0x1b9bec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b9becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9bf0:
    // 0x1b9bf0: 0x0  nop
    ctx->pc = 0x1b9bf0u;
    // NOP
label_1b9bf4:
    // 0x1b9bf4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_1b9bf8:
    if (ctx->pc == 0x1B9BF8u) {
        ctx->pc = 0x1B9BFCu;
        goto label_1b9bfc;
    }
    ctx->pc = 0x1B9BF4u;
    {
        const bool branch_taken_0x1b9bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9bf4) {
            ctx->pc = 0x1B9C6Cu;
            goto label_1b9c6c;
        }
    }
    ctx->pc = 0x1B9BFCu;
label_1b9bfc:
    // 0x1b9bfc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9c00:
    // 0x1b9c00: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1b9c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1b9c04:
    // 0x1b9c04: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1b9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1b9c08:
    // 0x1b9c08: 0x60f809  jalr        $v1
label_1b9c0c:
    if (ctx->pc == 0x1B9C0Cu) {
        ctx->pc = 0x1B9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C08u;
        // 0x1b9c0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C10u;
        goto label_1b9c10;
    }
    ctx->pc = 0x1B9C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9C10u);
        ctx->pc = 0x1B9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C08u;
        // 0x1b9c0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9C08u, 0x1B9C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9C10u;
label_1b9c10:
    // 0x1b9c10: 0xc6410184  lwc1        $f1, 0x184($s2)
    ctx->pc = 0x1b9c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9c14:
    // 0x1b9c14: 0xc7a40214  lwc1        $f4, 0x214($sp)
    ctx->pc = 0x1b9c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b9c18:
    // 0x1b9c18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b9c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b9c1c:
    // 0x1b9c1c: 0xc7a30238  lwc1        $f3, 0x238($sp)
    ctx->pc = 0x1b9c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b9c20:
    // 0x1b9c20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b9c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b9c24:
    // 0x1b9c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9c28:
    // 0x1b9c28: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x1b9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9c2c:
    // 0x1b9c2c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b9c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b9c30:
    // 0x1b9c30: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b9c30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1b9c34:
    // 0x1b9c34: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1b9c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b9c38:
    // 0x1b9c38: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1b9c38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1b9c3c:
    // 0x1b9c3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b9c3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b9c40:
    // 0x1b9c40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b9c40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b9c44:
    // 0x1b9c44: 0x0  nop
    ctx->pc = 0x1b9c44u;
    // NOP
label_1b9c48:
    // 0x1b9c48: 0x46040d03  div.s       $f20, $f1, $f4
    ctx->pc = 0x1b9c48u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_1b9c4c:
    // 0x1b9c4c: 0x4605a036  c.le.s      $f20, $f5
    ctx->pc = 0x1b9c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9c50:
    // 0x1b9c50: 0x0  nop
    ctx->pc = 0x1b9c50u;
    // NOP
label_1b9c54:
    // 0x1b9c54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1b9c58:
    if (ctx->pc == 0x1B9C58u) {
        ctx->pc = 0x1B9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C54u;
        // 0x1b9c58: 0x46002d06  mov.s       $f20, $f5 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C5Cu;
        goto label_1b9c5c;
    }
    ctx->pc = 0x1B9C54u;
    {
        const bool branch_taken_0x1b9c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9c54) {
            ctx->pc = 0x1B9C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9C54u;
            // 0x1b9c58: 0x46002d06  mov.s       $f20, $f5 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9C5Cu;
            goto label_1b9c5c;
        }
    }
    ctx->pc = 0x1B9C5Cu;
label_1b9c5c:
    // 0x1b9c5c: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1b9c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9c60:
    // 0x1b9c60: 0x0  nop
    ctx->pc = 0x1b9c60u;
    // NOP
label_1b9c64:
    // 0x1b9c64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1b9c68:
    if (ctx->pc == 0x1B9C68u) {
        ctx->pc = 0x1B9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C64u;
        // 0x1b9c68: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C6Cu;
        goto label_1b9c6c;
    }
    ctx->pc = 0x1B9C64u;
    {
        const bool branch_taken_0x1b9c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9c64) {
            ctx->pc = 0x1B9C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9C64u;
            // 0x1b9c68: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9C6Cu;
            goto label_1b9c6c;
        }
    }
    ctx->pc = 0x1B9C6Cu;
label_1b9c6c:
    // 0x1b9c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9c70:
    // 0x1b9c70: 0x0  nop
    ctx->pc = 0x1b9c70u;
    // NOP
label_1b9c74:
    // 0x1b9c74: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b9c74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9c78:
    // 0x1b9c78: 0x0  nop
    ctx->pc = 0x1b9c78u;
    // NOP
label_1b9c7c:
    // 0x1b9c7c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_1b9c80:
    if (ctx->pc == 0x1B9C80u) {
        ctx->pc = 0x1B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C7Cu;
        // 0x1b9c80: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C84u;
        goto label_1b9c84;
    }
    ctx->pc = 0x1B9C7Cu;
    {
        const bool branch_taken_0x1b9c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C7Cu;
        // 0x1b9c80: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c7c) {
            ctx->pc = 0x1B9CD4u;
            goto label_1b9cd4;
        }
    }
    ctx->pc = 0x1B9C84u;
label_1b9c84:
    // 0x1b9c84: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x1b9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_1b9c88:
    // 0x1b9c88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b9c8c:
    if (ctx->pc == 0x1B9C8Cu) {
        ctx->pc = 0x1B9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C88u;
        // 0x1b9c8c: 0x33c700ff  andi        $a3, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C90u;
        goto label_1b9c90;
    }
    ctx->pc = 0x1B9C88u;
    {
        const bool branch_taken_0x1b9c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C88u;
        // 0x1b9c8c: 0x33c700ff  andi        $a3, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c88) {
            ctx->pc = 0x1B9C9Cu;
            goto label_1b9c9c;
        }
    }
    ctx->pc = 0x1B9C90u;
label_1b9c90:
    // 0x1b9c90: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x1b9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_1b9c94:
    // 0x1b9c94: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1b9c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b9c98:
    // 0x1b9c98: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x1b9c98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1b9c9c:
    // 0x1b9c9c: 0x27b00210  addiu       $s0, $sp, 0x210
    ctx->pc = 0x1b9c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1b9ca0:
    // 0x1b9ca0: 0xc7ac0220  lwc1        $f12, 0x220($sp)
    ctx->pc = 0x1b9ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9ca4:
    // 0x1b9ca4: 0xc7ad0228  lwc1        $f13, 0x228($sp)
    ctx->pc = 0x1b9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b9ca8:
    // 0x1b9ca8: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x1b9ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_1b9cac:
    // 0x1b9cac: 0x8e490198  lw          $t1, 0x198($s2)
    ctx->pc = 0x1b9cacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1b9cb0:
    // 0x1b9cb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b9cb4:
    // 0x1b9cb4: 0x924a018c  lbu         $t2, 0x18C($s2)
    ctx->pc = 0x1b9cb4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 396)));
label_1b9cb8:
    // 0x1b9cb8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1b9cb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1b9cbc:
    // 0x1b9cbc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b9cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b9cc0:
    // 0x1b9cc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b9cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9cc4:
    // 0x1b9cc4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b9cc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b9cc8:
    // 0x1b9cc8: 0xc05e70c  jal         func_179C30
label_1b9ccc:
    if (ctx->pc == 0x1B9CCCu) {
        ctx->pc = 0x1B9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CC8u;
        // 0x1b9ccc: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9CD0u;
        goto label_1b9cd0;
    }
    ctx->pc = 0x1B9CC8u;
    SET_GPR_U32(ctx, 31, 0x1B9CD0u);
    ctx->pc = 0x1B9CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CC8u;
    // 0x1b9ccc: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C30u, 0x1B9CC8u, 0x1B9CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CD0u;
label_1b9cd0:
    // 0x1b9cd0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b9cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9cd4:
    // 0x1b9cd4: 0x8fa30690  lw          $v1, 0x690($sp)
    ctx->pc = 0x1b9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_1b9cd8:
    // 0x1b9cd8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b9cdc:
    if (ctx->pc == 0x1B9CDCu) {
        ctx->pc = 0x1B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CD8u;
        // 0x1b9cdc: 0x33d000ff  andi        $s0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9CE0u;
        goto label_1b9ce0;
    }
    ctx->pc = 0x1B9CD8u;
    {
        const bool branch_taken_0x1b9cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CD8u;
        // 0x1b9cdc: 0x33d000ff  andi        $s0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cd8) {
            ctx->pc = 0x1B9CECu;
            goto label_1b9cec;
        }
    }
    ctx->pc = 0x1B9CE0u;
label_1b9ce0:
    // 0x1b9ce0: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_1b9ce4:
    // 0x1b9ce4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1b9ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b9ce8:
    // 0x1b9ce8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1b9ce8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1b9cec:
    // 0x1b9cec: 0xc10c3ac  jal         func_430EB0
label_1b9cf0:
    if (ctx->pc == 0x1B9CF0u) {
        ctx->pc = 0x1B9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CECu;
        // 0x1b9cf0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9CF4u;
        goto label_1b9cf4;
    }
    ctx->pc = 0x1B9CECu;
    SET_GPR_U32(ctx, 31, 0x1B9CF4u);
    ctx->pc = 0x1B9CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CECu;
    // 0x1b9cf0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1B9CECu, 0x1B9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CF4u;
label_1b9cf4:
    // 0x1b9cf4: 0x8e490198  lw          $t1, 0x198($s2)
    ctx->pc = 0x1b9cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1b9cf8:
    // 0x1b9cf8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b9cfc:
    // 0x1b9cfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b9cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d00:
    // 0x1b9d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b9d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d04:
    // 0x1b9d04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d08:
    // 0x1b9d08: 0xc05e656  jal         func_179958
label_1b9d0c:
    if (ctx->pc == 0x1B9D0Cu) {
        ctx->pc = 0x1B9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D08u;
        // 0x1b9d0c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D10u;
        goto label_1b9d10;
    }
    ctx->pc = 0x1B9D08u;
    SET_GPR_U32(ctx, 31, 0x1B9D10u);
    ctx->pc = 0x1B9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D08u;
    // 0x1b9d0c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179958u, 0x1B9D08u, 0x1B9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D10u;
label_1b9d10:
    // 0x1b9d10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b9d10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1b9d14:
    // 0x1b9d14: 0x8fa40694  lw          $a0, 0x694($sp)
    ctx->pc = 0x1b9d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
label_1b9d18:
    // 0x1b9d18: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x1b9d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9d1c:
    // 0x1b9d1c: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x1b9d1cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_1b9d20:
    // 0x1b9d20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b9d24:
    // 0x1b9d24: 0x10800362  beqz        $a0, . + 4 + (0x362 << 2)
label_1b9d28:
    if (ctx->pc == 0x1B9D28u) {
        ctx->pc = 0x1B9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D24u;
        // 0x1b9d28: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D2Cu;
        goto label_1b9d2c;
    }
    ctx->pc = 0x1B9D24u;
    {
        const bool branch_taken_0x1b9d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D24u;
        // 0x1b9d28: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d24) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1B9D2Cu;
label_1b9d2c:
    // 0x1b9d2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b9d30:
    // 0x1b9d30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b9d34:
    // 0x1b9d34: 0xc440e6dc  lwc1        $f0, -0x1924($v0)
    ctx->pc = 0x1b9d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9d38:
    // 0x1b9d38: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b9d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b9d3c:
    // 0x1b9d3c: 0xc462e6e0  lwc1        $f2, -0x1920($v1)
    ctx->pc = 0x1b9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9d40:
    // 0x1b9d40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b9d44:
    // 0x1b9d44: 0x3c013c13  lui         $at, 0x3C13
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15379 << 16));
label_1b9d48:
    // 0x1b9d48: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1b9d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_1b9d4c:
    // 0x1b9d4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9d50:
    // 0x1b9d50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b9d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b9d54:
    // 0x1b9d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b9d58:
    // 0x1b9d58: 0x10000355  b           . + 4 + (0x355 << 2)
label_1b9d5c:
    if (ctx->pc == 0x1B9D5Cu) {
        ctx->pc = 0x1B9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D58u;
        // 0x1b9d5c: 0xe480e6d8  swc1        $f0, -0x1928($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294960856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D60u;
        goto label_1b9d60;
    }
    ctx->pc = 0x1B9D58u;
    {
        const bool branch_taken_0x1b9d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D58u;
        // 0x1b9d5c: 0xe480e6d8  swc1        $f0, -0x1928($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294960856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d58) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1B9D60u;
label_1b9d60:
    // 0x1b9d60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b9d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d64:
    // 0x1b9d64: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b9d64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d68:
    // 0x1b9d68: 0xc10d74c  jal         func_435D30
label_1b9d6c:
    if (ctx->pc == 0x1B9D6Cu) {
        ctx->pc = 0x1B9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D68u;
        // 0x1b9d6c: 0x24a54998  addiu       $a1, $a1, 0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D70u;
        goto label_1b9d70;
    }
    ctx->pc = 0x1B9D68u;
    SET_GPR_U32(ctx, 31, 0x1B9D70u);
    ctx->pc = 0x1B9D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D68u;
    // 0x1b9d6c: 0x24a54998  addiu       $a1, $a1, 0x4998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1B9D68u, 0x1B9D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D70u;
label_1b9d70:
    // 0x1b9d70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b9d74:
    if (ctx->pc == 0x1B9D74u) {
        ctx->pc = 0x1B9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D70u;
        // 0x1b9d74: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D78u;
        goto label_1b9d78;
    }
    ctx->pc = 0x1B9D70u;
    {
        const bool branch_taken_0x1b9d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D70u;
        // 0x1b9d74: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d70) {
            ctx->pc = 0x1B9D94u;
            goto label_1b9d94;
        }
    }
    ctx->pc = 0x1B9D78u;
label_1b9d78:
    // 0x1b9d78: 0x1000034d  b           . + 4 + (0x34D << 2)
label_1b9d7c:
    if (ctx->pc == 0x1B9D7Cu) {
        ctx->pc = 0x1B9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D78u;
        // 0x1b9d7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D80u;
        goto label_1b9d80;
    }
    ctx->pc = 0x1B9D78u;
    {
        const bool branch_taken_0x1b9d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D78u;
        // 0x1b9d7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d78) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1B9D80u;
label_1b9d80:
    // 0x1b9d80: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x1b9d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9d84:
    // 0x1b9d84: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x1b9d84u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_1b9d88:
    // 0x1b9d88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b9d8c:
    // 0x1b9d8c: 0x100002ed  b           . + 4 + (0x2ED << 2)
label_1b9d90:
    if (ctx->pc == 0x1B9D90u) {
        ctx->pc = 0x1B9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D8Cu;
        // 0x1b9d90: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D94u;
        goto label_1b9d94;
    }
    ctx->pc = 0x1B9D8Cu;
    {
        const bool branch_taken_0x1b9d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D8Cu;
        // 0x1b9d90: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d8c) {
            ctx->pc = 0x1BA944u;
            goto label_1ba944;
        }
    }
    ctx->pc = 0x1B9D94u;
label_1b9d94:
    // 0x1b9d94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d98:
    // 0x1b9d98: 0xafa206a8  sw          $v0, 0x6A8($sp)
    ctx->pc = 0x1b9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1704), GPR_U32(ctx, 2));
label_1b9d9c:
    // 0x1b9d9c: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1b9d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1b9da0:
    // 0x1b9da0: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1b9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1b9da4:
    // 0x1b9da4: 0x0  nop
    ctx->pc = 0x1b9da4u;
    // NOP
label_1b9da8:
    // 0x1b9da8: 0x26a3d718  addiu       $v1, $s5, -0x28E8
    ctx->pc = 0x1b9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956824));
label_1b9dac:
    // 0x1b9dac: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1b9dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b9db0:
    // 0x1b9db0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b9db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9db4:
    // 0x1b9db4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1b9db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9db8:
    // 0x1b9db8: 0xc10c3ac  jal         func_430EB0
label_1b9dbc:
    if (ctx->pc == 0x1B9DBCu) {
        ctx->pc = 0x1B9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DB8u;
        // 0x1b9dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DC0u;
        goto label_1b9dc0;
    }
    ctx->pc = 0x1B9DB8u;
    SET_GPR_U32(ctx, 31, 0x1B9DC0u);
    ctx->pc = 0x1B9DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DB8u;
    // 0x1b9dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1B9DB8u, 0x1B9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DC0u;
label_1b9dc0:
    // 0x1b9dc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b9dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9dc4:
    // 0x1b9dc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b9dc8:
    // 0x1b9dc8: 0xc10c46c  jal         func_4311B0
label_1b9dcc:
    if (ctx->pc == 0x1B9DCCu) {
        ctx->pc = 0x1B9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DC8u;
        // 0x1b9dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DD0u;
        goto label_1b9dd0;
    }
    ctx->pc = 0x1B9DC8u;
    SET_GPR_U32(ctx, 31, 0x1B9DD0u);
    ctx->pc = 0x1B9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DC8u;
    // 0x1b9dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1B9DC8u, 0x1B9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DD0u;
label_1b9dd0:
    // 0x1b9dd0: 0x544002d9  bnel        $v0, $zero, . + 4 + (0x2D9 << 2)
label_1b9dd4:
    if (ctx->pc == 0x1B9DD4u) {
        ctx->pc = 0x1B9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DD0u;
        // 0x1b9dd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DD8u;
        goto label_1b9dd8;
    }
    ctx->pc = 0x1B9DD0u;
    {
        const bool branch_taken_0x1b9dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9dd0) {
            ctx->pc = 0x1B9DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9DD0u;
            // 0x1b9dd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA938u;
            goto label_1ba938;
        }
    }
    ctx->pc = 0x1B9DD8u;
label_1b9dd8:
    // 0x1b9dd8: 0xc10c3ac  jal         func_430EB0
label_1b9ddc:
    if (ctx->pc == 0x1B9DDCu) {
        ctx->pc = 0x1B9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DD8u;
        // 0x1b9ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DE0u;
        goto label_1b9de0;
    }
    ctx->pc = 0x1B9DD8u;
    SET_GPR_U32(ctx, 31, 0x1B9DE0u);
    ctx->pc = 0x1B9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DD8u;
    // 0x1b9ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1B9DD8u, 0x1B9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DE0u;
label_1b9de0:
    // 0x1b9de0: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1b9de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b9de4:
    // 0x1b9de4: 0x2e220042  sltiu       $v0, $s1, 0x42
    ctx->pc = 0x1b9de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
label_1b9de8:
    // 0x1b9de8: 0x10400257  beqz        $v0, . + 4 + (0x257 << 2)
label_1b9dec:
    if (ctx->pc == 0x1B9DECu) {
        ctx->pc = 0x1B9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DE8u;
        // 0x1b9dec: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9DF0u;
        goto label_1b9df0;
    }
    ctx->pc = 0x1B9DE8u;
    {
        const bool branch_taken_0x1b9de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DE8u;
        // 0x1b9dec: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9de8) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9DF0u;
label_1b9df0:
    // 0x1b9df0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1b9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1b9df4:
    // 0x1b9df4: 0x244249e0  addiu       $v0, $v0, 0x49E0
    ctx->pc = 0x1b9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
label_1b9df8:
    // 0x1b9df8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b9dfc:
    // 0x1b9dfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b9dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b9e00:
    // 0x1b9e00: 0x600008  jr          $v1
label_1b9e04:
    if (ctx->pc == 0x1B9E04u) {
        ctx->pc = 0x1B9E08u;
        goto label_1b9e08;
    }
    ctx->pc = 0x1B9E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9E08u: goto label_1b9e08;
            case 0x1B9E94u: goto label_1b9e94;
            case 0x1B9EF0u: goto label_1b9ef0;
            case 0x1B9F0Cu: goto label_1b9f0c;
            case 0x1B9F5Cu: goto label_1b9f5c;
            case 0x1B9FBCu: goto label_1b9fbc;
            case 0x1BA008u: goto label_1ba008;
            case 0x1BA014u: goto label_1ba014;
            case 0x1BA044u: goto label_1ba044;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0C8u: goto label_1ba0c8;
            case 0x1BA0D0u: goto label_1ba0d0;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0ECu: goto label_1ba0ec;
            case 0x1BA0F8u: goto label_1ba0f8;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA110u: goto label_1ba110;
            case 0x1BA140u: goto label_1ba140;
            case 0x1BA190u: goto label_1ba190;
            case 0x1BA1E0u: goto label_1ba1e0;
            case 0x1BA23Cu: goto label_1ba23c;
            case 0x1BA244u: goto label_1ba244;
            case 0x1BA24Cu: goto label_1ba24c;
            case 0x1BA254u: goto label_1ba254;
            case 0x1BA25Cu: goto label_1ba25c;
            case 0x1BA264u: goto label_1ba264;
            case 0x1BA26Cu: goto label_1ba26c;
            case 0x1BA274u: goto label_1ba274;
            case 0x1BA27Cu: goto label_1ba27c;
            case 0x1BA284u: goto label_1ba284;
            case 0x1BA28Cu: goto label_1ba28c;
            case 0x1BA294u: goto label_1ba294;
            case 0x1BA29Cu: goto label_1ba29c;
            case 0x1BA2A4u: goto label_1ba2a4;
            case 0x1BA2ACu: goto label_1ba2ac;
            case 0x1BA2B4u: goto label_1ba2b4;
            case 0x1BA2BCu: goto label_1ba2bc;
            case 0x1BA2C4u: goto label_1ba2c4;
            case 0x1BA2CCu: goto label_1ba2cc;
            case 0x1BA2D4u: goto label_1ba2d4;
            case 0x1BA2DCu: goto label_1ba2dc;
            case 0x1BA2E4u: goto label_1ba2e4;
            case 0x1BA2ECu: goto label_1ba2ec;
            case 0x1BA2F4u: goto label_1ba2f4;
            case 0x1BA2FCu: goto label_1ba2fc;
            case 0x1BA304u: goto label_1ba304;
            case 0x1BA30Cu: goto label_1ba30c;
            case 0x1BA314u: goto label_1ba314;
            case 0x1BA31Cu: goto label_1ba31c;
            case 0x1BA400u: goto label_1ba400;
            case 0x1BA4E4u: goto label_1ba4e4;
            case 0x1BA5C8u: goto label_1ba5c8;
            case 0x1BA6D8u: goto label_1ba6d8;
            case 0x1BA710u: goto label_1ba710;
            case 0x1BA718u: goto label_1ba718;
            case 0x1BA728u: goto label_1ba728;
            case 0x1BA730u: goto label_1ba730;
            case 0x1BA748u: goto label_1ba748;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9E00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B9E08u;
label_1b9e08:
    // 0x1b9e08: 0x27b00660  addiu       $s0, $sp, 0x660
    ctx->pc = 0x1b9e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
label_1b9e0c:
    // 0x1b9e0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b9e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e10:
    // 0x1b9e10: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b9e14:
    // 0x1b9e14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b9e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e18:
    // 0x1b9e18: 0xc10ca4a  jal         func_432928
label_1b9e1c:
    if (ctx->pc == 0x1B9E1Cu) {
        ctx->pc = 0x1B9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E18u;
        // 0x1b9e1c: 0x24a549a0  addiu       $a1, $a1, 0x49A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E20u;
        goto label_1b9e20;
    }
    ctx->pc = 0x1B9E18u;
    SET_GPR_U32(ctx, 31, 0x1B9E20u);
    ctx->pc = 0x1B9E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E18u;
    // 0x1b9e1c: 0x24a549a0  addiu       $a1, $a1, 0x49A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x1B9E18u, 0x1B9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E20u;
label_1b9e20:
    // 0x1b9e20: 0x93a30660  lbu         $v1, 0x660($sp)
    ctx->pc = 0x1b9e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1632)));
label_1b9e24:
    // 0x1b9e24: 0x27a50664  addiu       $a1, $sp, 0x664
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1636));
label_1b9e28:
    // 0x1b9e28: 0x8e4401b4  lw          $a0, 0x1B4($s2)
    ctx->pc = 0x1b9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_1b9e2c:
    // 0x1b9e2c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1b9e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1b9e30:
    // 0x1b9e30: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b9e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b9e34:
    // 0x1b9e34: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1b9e34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b9e38:
    // 0x1b9e38: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x1b9e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b9e3c:
    // 0x1b9e3c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1b9e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b9e40:
    // 0x1b9e40: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x1b9e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1b9e44:
    // 0x1b9e44: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_1b9e48:
    if (ctx->pc == 0x1B9E48u) {
        ctx->pc = 0x1B9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E44u;
        // 0x1b9e48: 0xa3a20664  sb          $v0, 0x664($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1636), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E4Cu;
        goto label_1b9e4c;
    }
    ctx->pc = 0x1B9E44u;
    {
        const bool branch_taken_0x1b9e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E44u;
        // 0x1b9e48: 0xa3a20664  sb          $v0, 0x664($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1636), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e44) {
            ctx->pc = 0x1B9E88u;
            goto label_1b9e88;
        }
    }
    ctx->pc = 0x1B9E4Cu;
label_1b9e4c:
    // 0x1b9e4c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1b9e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1b9e50:
    // 0x1b9e50: 0xc7a2068c  lwc1        $f2, 0x68C($sp)
    ctx->pc = 0x1b9e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9e54:
    // 0x1b9e54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b9e58:
    // 0x1b9e58: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_1b9e5c:
    // 0x1b9e5c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x1b9e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_1b9e60:
    // 0x1b9e60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b9e64:
    // 0x1b9e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9e68:
    // 0x1b9e68: 0x0  nop
    ctx->pc = 0x1b9e68u;
    // NOP
label_1b9e6c:
    // 0x1b9e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b9e70:
    // 0x1b9e70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b9e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b9e74:
    // 0x1b9e74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b9e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b9e78:
    // 0x1b9e78: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9e78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b9e7c:
    // 0x1b9e7c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b9e7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b9e80:
    // 0x1b9e80: 0x10000231  b           . + 4 + (0x231 << 2)
label_1b9e84:
    if (ctx->pc == 0x1B9E84u) {
        ctx->pc = 0x1B9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E80u;
        // 0x1b9e84: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E88u;
        goto label_1b9e88;
    }
    ctx->pc = 0x1B9E80u;
    {
        const bool branch_taken_0x1b9e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E80u;
        // 0x1b9e84: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e80) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9E88u;
label_1b9e88:
    // 0x1b9e88: 0x924201b1  lbu         $v0, 0x1B1($s2)
    ctx->pc = 0x1b9e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 433)));
label_1b9e8c:
    // 0x1b9e8c: 0x1000022e  b           . + 4 + (0x22E << 2)
label_1b9e90:
    if (ctx->pc == 0x1B9E90u) {
        ctx->pc = 0x1B9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E8Cu;
        // 0x1b9e90: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E94u;
        goto label_1b9e94;
    }
    ctx->pc = 0x1B9E8Cu;
    {
        const bool branch_taken_0x1b9e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E8Cu;
        // 0x1b9e90: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e8c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9E94u;
label_1b9e94:
    // 0x1b9e94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b9e98:
    // 0x1b9e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9e9c:
    // 0x1b9e9c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ea0:
    // 0x1b9ea0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b9ea4:
    // 0x1b9ea4: 0x27a60668  addiu       $a2, $sp, 0x668
    ctx->pc = 0x1b9ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1640));
label_1b9ea8:
    // 0x1b9ea8: 0x24a549a8  addiu       $a1, $a1, 0x49A8
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18856));
label_1b9eac:
    // 0x1b9eac: 0xc10ca4a  jal         func_432928
label_1b9eb0:
    if (ctx->pc == 0x1B9EB0u) {
        ctx->pc = 0x1B9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EACu;
        // 0x1b9eb0: 0xe7a00668  swc1        $f0, 0x668($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1640), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EB4u;
        goto label_1b9eb4;
    }
    ctx->pc = 0x1B9EACu;
    SET_GPR_U32(ctx, 31, 0x1B9EB4u);
    ctx->pc = 0x1B9EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9EACu;
    // 0x1b9eb0: 0xe7a00668  swc1        $f0, 0x668($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x1B9EACu, 0x1B9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9EB4u;
label_1b9eb4:
    // 0x1b9eb4: 0xc64001d0  lwc1        $f0, 0x1D0($s2)
    ctx->pc = 0x1b9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9eb8:
    // 0x1b9eb8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1b9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1b9ebc:
    // 0x1b9ebc: 0xc7ac0668  lwc1        $f12, 0x668($sp)
    ctx->pc = 0x1b9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9ec0:
    // 0x1b9ec0: 0xc05e602  jal         func_179808
label_1b9ec4:
    if (ctx->pc == 0x1B9EC4u) {
        ctx->pc = 0x1B9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EC0u;
        // 0x1b9ec4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EC8u;
        goto label_1b9ec8;
    }
    ctx->pc = 0x1B9EC0u;
    SET_GPR_U32(ctx, 31, 0x1B9EC8u);
    ctx->pc = 0x1B9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9EC0u;
    // 0x1b9ec4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1B9EC0u, 0x1B9EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9EC8u;
label_1b9ec8:
    // 0x1b9ec8: 0x6ba20247  ldl         $v0, 0x247($sp)
    ctx->pc = 0x1b9ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b9ecc:
    // 0x1b9ecc: 0x6fa20240  ldr         $v0, 0x240($sp)
    ctx->pc = 0x1b9eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b9ed0:
    // 0x1b9ed0: 0x6ba3024f  ldl         $v1, 0x24F($sp)
    ctx->pc = 0x1b9ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b9ed4:
    // 0x1b9ed4: 0x6fa30248  ldr         $v1, 0x248($sp)
    ctx->pc = 0x1b9ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b9ed8:
    // 0x1b9ed8: 0xb3a20217  sdl         $v0, 0x217($sp)
    ctx->pc = 0x1b9ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b9edc:
    // 0x1b9edc: 0xb7a20210  sdr         $v0, 0x210($sp)
    ctx->pc = 0x1b9edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b9ee0:
    // 0x1b9ee0: 0xb3a3021f  sdl         $v1, 0x21F($sp)
    ctx->pc = 0x1b9ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b9ee4:
    // 0x1b9ee4: 0xb7a30218  sdr         $v1, 0x218($sp)
    ctx->pc = 0x1b9ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b9ee8:
    // 0x1b9ee8: 0x10000217  b           . + 4 + (0x217 << 2)
label_1b9eec:
    if (ctx->pc == 0x1B9EECu) {
        ctx->pc = 0x1B9EF0u;
        goto label_1b9ef0;
    }
    ctx->pc = 0x1B9EE8u;
    {
        const bool branch_taken_0x1b9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ee8) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9EF0u;
label_1b9ef0:
    // 0x1b9ef0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b9ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b9ef4:
    // 0x1b9ef4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b9ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ef8:
    // 0x1b9ef8: 0x24a549b0  addiu       $a1, $a1, 0x49B0
    ctx->pc = 0x1b9ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18864));
label_1b9efc:
    // 0x1b9efc: 0xc10ca4a  jal         func_432928
label_1b9f00:
    if (ctx->pc == 0x1B9F00u) {
        ctx->pc = 0x1B9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EFCu;
        // 0x1b9f00: 0x27a6066c  addiu       $a2, $sp, 0x66C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F04u;
        goto label_1b9f04;
    }
    ctx->pc = 0x1B9EFCu;
    SET_GPR_U32(ctx, 31, 0x1B9F04u);
    ctx->pc = 0x1B9F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9EFCu;
    // 0x1b9f00: 0x27a6066c  addiu       $a2, $sp, 0x66C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x1B9EFCu, 0x1B9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F04u;
label_1b9f04:
    // 0x1b9f04: 0x10000210  b           . + 4 + (0x210 << 2)
label_1b9f08:
    if (ctx->pc == 0x1B9F08u) {
        ctx->pc = 0x1B9F0Cu;
        goto label_1b9f0c;
    }
    ctx->pc = 0x1B9F04u;
    {
        const bool branch_taken_0x1b9f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9f04) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9F0Cu;
label_1b9f0c:
    // 0x1b9f0c: 0x8fa60688  lw          $a2, 0x688($sp)
    ctx->pc = 0x1b9f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1672)));
label_1b9f10:
    // 0x1b9f10: 0x10c0020d  beqz        $a2, . + 4 + (0x20D << 2)
label_1b9f14:
    if (ctx->pc == 0x1B9F14u) {
        ctx->pc = 0x1B9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F10u;
        // 0x1b9f14: 0x26c54998  addiu       $a1, $s6, 0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 18840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F18u;
        goto label_1b9f18;
    }
    ctx->pc = 0x1B9F10u;
    {
        const bool branch_taken_0x1b9f10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F10u;
        // 0x1b9f14: 0x26c54998  addiu       $a1, $s6, 0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 18840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f10) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9F18u;
label_1b9f18:
    // 0x1b9f18: 0xc10d74c  jal         func_435D30
label_1b9f1c:
    if (ctx->pc == 0x1B9F1Cu) {
        ctx->pc = 0x1B9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F18u;
        // 0x1b9f1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F20u;
        goto label_1b9f20;
    }
    ctx->pc = 0x1B9F18u;
    SET_GPR_U32(ctx, 31, 0x1B9F20u);
    ctx->pc = 0x1B9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F18u;
    // 0x1b9f1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1B9F18u, 0x1B9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F20u;
label_1b9f20:
    // 0x1b9f20: 0x10400209  beqz        $v0, . + 4 + (0x209 << 2)
label_1b9f24:
    if (ctx->pc == 0x1B9F24u) {
        ctx->pc = 0x1B9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F20u;
        // 0x1b9f24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F28u;
        goto label_1b9f28;
    }
    ctx->pc = 0x1B9F20u;
    {
        const bool branch_taken_0x1b9f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F20u;
        // 0x1b9f24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f20) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9F28u;
label_1b9f28:
    // 0x1b9f28: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1b9f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1b9f2c:
    // 0x1b9f2c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x1b9f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b9f30:
    // 0x1b9f30: 0xc050fc0  jal         func_143F00
label_1b9f34:
    if (ctx->pc == 0x1B9F34u) {
        ctx->pc = 0x1B9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F30u;
        // 0x1b9f34: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F38u;
        goto label_1b9f38;
    }
    ctx->pc = 0x1B9F30u;
    SET_GPR_U32(ctx, 31, 0x1B9F38u);
    ctx->pc = 0x1B9F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F30u;
    // 0x1b9f34: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F00u, 0x1B9F30u, 0x1B9F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F38u;
label_1b9f38:
    // 0x1b9f38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b9f3c:
    // 0x1b9f3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b9f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f40:
    // 0x1b9f40: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1b9f44:
    // 0x1b9f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f48:
    // 0x1b9f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b9f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f4c:
    // 0x1b9f4c: 0xc043f36  jal         func_10FCD8
label_1b9f50:
    if (ctx->pc == 0x1B9F50u) {
        ctx->pc = 0x1B9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F4Cu;
        // 0x1b9f50: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F54u;
        goto label_1b9f54;
    }
    ctx->pc = 0x1B9F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F54u);
    ctx->pc = 0x1B9F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F4Cu;
    // 0x1b9f50: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1B9F4Cu, 0x1B9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F54u;
label_1b9f54:
    // 0x1b9f54: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_1b9f58:
    if (ctx->pc == 0x1B9F58u) {
        ctx->pc = 0x1B9F5Cu;
        goto label_1b9f5c;
    }
    ctx->pc = 0x1B9F54u;
    {
        const bool branch_taken_0x1b9f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9f54) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9F5Cu;
label_1b9f5c:
    // 0x1b9f5c: 0x8fa70688  lw          $a3, 0x688($sp)
    ctx->pc = 0x1b9f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1672)));
label_1b9f60:
    // 0x1b9f60: 0x10e001f9  beqz        $a3, . + 4 + (0x1F9 << 2)
label_1b9f64:
    if (ctx->pc == 0x1B9F64u) {
        ctx->pc = 0x1B9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F60u;
        // 0x1b9f64: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F68u;
        goto label_1b9f68;
    }
    ctx->pc = 0x1B9F60u;
    {
        const bool branch_taken_0x1b9f60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F60u;
        // 0x1b9f64: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f60) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9F68u;
label_1b9f68:
    // 0x1b9f68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b9f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f6c:
    // 0x1b9f6c: 0x27a60670  addiu       $a2, $sp, 0x670
    ctx->pc = 0x1b9f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
label_1b9f70:
    // 0x1b9f70: 0xc10ca4a  jal         func_432928
label_1b9f74:
    if (ctx->pc == 0x1B9F74u) {
        ctx->pc = 0x1B9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F70u;
        // 0x1b9f74: 0x24a549b0  addiu       $a1, $a1, 0x49B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F78u;
        goto label_1b9f78;
    }
    ctx->pc = 0x1B9F70u;
    SET_GPR_U32(ctx, 31, 0x1B9F78u);
    ctx->pc = 0x1B9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F70u;
    // 0x1b9f74: 0x24a549b0  addiu       $a1, $a1, 0x49B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x1B9F70u, 0x1B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F78u;
label_1b9f78:
    // 0x1b9f78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b9f7c:
    // 0x1b9f7c: 0x8c66b8b8  lw          $a2, -0x4748($v1)
    ctx->pc = 0x1b9f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1b9f80:
    // 0x1b9f80: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b9f84:
    // 0x1b9f84: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1b9f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1b9f88:
    // 0x1b9f88: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1b9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1b9f8c:
    // 0x1b9f8c: 0x40f809  jalr        $v0
label_1b9f90:
    if (ctx->pc == 0x1B9F90u) {
        ctx->pc = 0x1B9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F8Cu;
        // 0x1b9f90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F94u;
        goto label_1b9f94;
    }
    ctx->pc = 0x1B9F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9F94u);
        ctx->pc = 0x1B9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F8Cu;
        // 0x1b9f90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9F8Cu, 0x1B9F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9F94u;
label_1b9f94:
    // 0x1b9f94: 0x8fa50670  lw          $a1, 0x670($sp)
    ctx->pc = 0x1b9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
label_1b9f98:
    // 0x1b9f98: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b9f9c:
    // 0x1b9f9c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x1b9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_1b9fa0:
    // 0x1b9fa0: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x1b9fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_1b9fa4:
    // 0x1b9fa4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b9fa8:
    // 0x1b9fa8: 0xc0517aa  jal         func_145EA8
label_1b9fac:
    if (ctx->pc == 0x1B9FACu) {
        ctx->pc = 0x1B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FA8u;
        // 0x1b9fac: 0xae420170  sw          $v0, 0x170($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FB0u;
        goto label_1b9fb0;
    }
    ctx->pc = 0x1B9FA8u;
    SET_GPR_U32(ctx, 31, 0x1B9FB0u);
    ctx->pc = 0x1B9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FA8u;
    // 0x1b9fac: 0xae420170  sw          $v0, 0x170($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145EA8u, 0x1B9FA8u, 0x1B9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9FB0u;
label_1b9fb0:
    // 0x1b9fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9fb4:
    // 0x1b9fb4: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_1b9fb8:
    if (ctx->pc == 0x1B9FB8u) {
        ctx->pc = 0x1B9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FB4u;
        // 0x1b9fb8: 0xae420178  sw          $v0, 0x178($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FBCu;
        goto label_1b9fbc;
    }
    ctx->pc = 0x1B9FB4u;
    {
        const bool branch_taken_0x1b9fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FB4u;
        // 0x1b9fb8: 0xae420178  sw          $v0, 0x178($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fb4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9FBCu;
label_1b9fbc:
    // 0x1b9fbc: 0x8fa80688  lw          $t0, 0x688($sp)
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1672)));
label_1b9fc0:
    // 0x1b9fc0: 0x110001e1  beqz        $t0, . + 4 + (0x1E1 << 2)
label_1b9fc4:
    if (ctx->pc == 0x1B9FC4u) {
        ctx->pc = 0x1B9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FC0u;
        // 0x1b9fc4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FC8u;
        goto label_1b9fc8;
    }
    ctx->pc = 0x1B9FC0u;
    {
        const bool branch_taken_0x1b9fc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FC0u;
        // 0x1b9fc4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fc0) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1B9FC8u;
label_1b9fc8:
    // 0x1b9fc8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b9fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9fcc:
    // 0x1b9fcc: 0x24a549b0  addiu       $a1, $a1, 0x49B0
    ctx->pc = 0x1b9fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18864));
label_1b9fd0:
    // 0x1b9fd0: 0xc10ca4a  jal         func_432928
label_1b9fd4:
    if (ctx->pc == 0x1B9FD4u) {
        ctx->pc = 0x1B9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FD0u;
        // 0x1b9fd4: 0x26460170  addiu       $a2, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FD8u;
        goto label_1b9fd8;
    }
    ctx->pc = 0x1B9FD0u;
    SET_GPR_U32(ctx, 31, 0x1B9FD8u);
    ctx->pc = 0x1B9FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FD0u;
    // 0x1b9fd4: 0x26460170  addiu       $a2, $s2, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x1B9FD0u, 0x1B9FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9FD8u;
label_1b9fd8:
    // 0x1b9fd8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b9fdc:
    // 0x1b9fdc: 0x8c66b8b8  lw          $a2, -0x4748($v1)
    ctx->pc = 0x1b9fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1b9fe0:
    // 0x1b9fe0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b9fe4:
    // 0x1b9fe4: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1b9fe8:
    // 0x1b9fe8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1b9fec:
    // 0x1b9fec: 0x40f809  jalr        $v0
label_1b9ff0:
    if (ctx->pc == 0x1B9FF0u) {
        ctx->pc = 0x1B9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FECu;
        // 0x1b9ff0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FF4u;
        goto label_1b9ff4;
    }
    ctx->pc = 0x1B9FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9FF4u);
        ctx->pc = 0x1B9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FECu;
        // 0x1b9ff0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9FECu, 0x1B9FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9FF4u;
label_1b9ff4:
    // 0x1b9ff4: 0x8e430170  lw          $v1, 0x170($s2)
    ctx->pc = 0x1b9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1b9ff8:
    // 0x1b9ff8: 0xae400178  sw          $zero, 0x178($s2)
    ctx->pc = 0x1b9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
label_1b9ffc:
    // 0x1b9ffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ba000:
    // 0x1ba000: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_1ba004:
    if (ctx->pc == 0x1BA004u) {
        ctx->pc = 0x1BA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA000u;
        // 0x1ba004: 0xae430170  sw          $v1, 0x170($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA008u;
        goto label_1ba008;
    }
    ctx->pc = 0x1BA000u;
    {
        const bool branch_taken_0x1ba000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA000u;
        // 0x1ba004: 0xae430170  sw          $v1, 0x170($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba000) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA008u;
label_1ba008:
    // 0x1ba008: 0xafb70680  sw          $s7, 0x680($sp)
    ctx->pc = 0x1ba008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 23));
label_1ba00c:
    // 0x1ba00c: 0x100001ce  b           . + 4 + (0x1CE << 2)
label_1ba010:
    if (ctx->pc == 0x1BA010u) {
        ctx->pc = 0x1BA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA00Cu;
        // 0x1ba010: 0x24170006  addiu       $s7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA014u;
        goto label_1ba014;
    }
    ctx->pc = 0x1BA00Cu;
    {
        const bool branch_taken_0x1ba00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA00Cu;
        // 0x1ba010: 0x24170006  addiu       $s7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba00c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA014u;
label_1ba014:
    // 0x1ba014: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ba018:
    // 0x1ba018: 0x56e20005  bnel        $s7, $v0, . + 4 + (0x5 << 2)
label_1ba01c:
    if (ctx->pc == 0x1BA01Cu) {
        ctx->pc = 0x1BA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA018u;
        // 0x1ba01c: 0x8e43019c  lw          $v1, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA020u;
        goto label_1ba020;
    }
    ctx->pc = 0x1BA018u;
    {
        const bool branch_taken_0x1ba018 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ba018) {
            ctx->pc = 0x1BA01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA018u;
            // 0x1ba01c: 0x8e43019c  lw          $v1, 0x19C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA030u;
            goto label_1ba030;
        }
    }
    ctx->pc = 0x1BA020u;
label_1ba020:
    // 0x1ba020: 0x3c02000d  lui         $v0, 0xD
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13 << 16));
label_1ba024:
    // 0x1ba024: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1ba024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1ba028:
    // 0x1ba028: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_1ba02c:
    if (ctx->pc == 0x1BA02Cu) {
        ctx->pc = 0x1BA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA028u;
        // 0x1ba02c: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA030u;
        goto label_1ba030;
    }
    ctx->pc = 0x1BA028u;
    {
        const bool branch_taken_0x1ba028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA028u;
        // 0x1ba02c: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba028) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA030u;
label_1ba030:
    // 0x1ba030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ba030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ba034:
    // 0x1ba034: 0x146201c4  bne         $v1, $v0, . + 4 + (0x1C4 << 2)
label_1ba038:
    if (ctx->pc == 0x1BA038u) {
        ctx->pc = 0x1BA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA034u;
        // 0x1ba038: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA03Cu;
        goto label_1ba03c;
    }
    ctx->pc = 0x1BA034u;
    {
        const bool branch_taken_0x1ba034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA034u;
        // 0x1ba038: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba034) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA03Cu;
label_1ba03c:
    // 0x1ba03c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_1ba040:
    if (ctx->pc == 0x1BA040u) {
        ctx->pc = 0x1BA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA03Cu;
        // 0x1ba040: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA044u;
        goto label_1ba044;
    }
    ctx->pc = 0x1BA03Cu;
    {
        const bool branch_taken_0x1ba03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA03Cu;
        // 0x1ba040: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba03c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA044u;
label_1ba044:
    // 0x1ba044: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ba044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1ba048:
    // 0x1ba048: 0x8e430190  lw          $v1, 0x190($s2)
    ctx->pc = 0x1ba048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_1ba04c:
    // 0x1ba04c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ba04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba050:
    // 0x1ba050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ba050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ba054:
    // 0x1ba054: 0x146201bc  bne         $v1, $v0, . + 4 + (0x1BC << 2)
label_1ba058:
    if (ctx->pc == 0x1BA058u) {
        ctx->pc = 0x1BA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA054u;
        // 0x1ba058: 0xafa90694  sw          $t1, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA05Cu;
        goto label_1ba05c;
    }
    ctx->pc = 0x1BA054u;
    {
        const bool branch_taken_0x1ba054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA054u;
        // 0x1ba058: 0xafa90694  sw          $t1, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba054) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA05Cu;
label_1ba05c:
    // 0x1ba05c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ba060:
    // 0x1ba060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba064:
    // 0x1ba064: 0xc060a30  jal         func_1828C0
label_1ba068:
    if (ctx->pc == 0x1BA068u) {
        ctx->pc = 0x1BA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA064u;
        // 0x1ba068: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA06Cu;
        goto label_1ba06c;
    }
    ctx->pc = 0x1BA064u;
    SET_GPR_U32(ctx, 31, 0x1BA06Cu);
    ctx->pc = 0x1BA068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA064u;
    // 0x1ba068: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1BA064u, 0x1BA06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA06Cu;
label_1ba06c:
    // 0x1ba06c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ba070:
    // 0x1ba070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba074:
    // 0x1ba074: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ba074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ba078:
    // 0x1ba078: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ba078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1ba07c:
    // 0x1ba07c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba080:
    // 0x1ba080: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x1ba080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_1ba084:
    // 0x1ba084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ba084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba088:
    // 0x1ba088: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x1ba088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
label_1ba08c:
    // 0x1ba08c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ba08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba090:
    // 0x1ba090: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x1ba090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_1ba094:
    // 0x1ba094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ba094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba098:
    // 0x1ba098: 0xafa00248  sw          $zero, 0x248($sp)
    ctx->pc = 0x1ba098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
label_1ba09c:
    // 0x1ba09c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1ba09cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba0a0:
    // 0x1ba0a0: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1ba0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_1ba0a4:
    // 0x1ba0a4: 0x27ab0240  addiu       $t3, $sp, 0x240
    ctx->pc = 0x1ba0a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1ba0a8:
    // 0x1ba0a8: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1ba0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
label_1ba0ac:
    // 0x1ba0ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ba0b0:
    // 0x1ba0b0: 0xc062bb0  jal         func_18AEC0
label_1ba0b4:
    if (ctx->pc == 0x1BA0B4u) {
        ctx->pc = 0x1BA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0B0u;
        // 0x1ba0b4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0B8u;
        goto label_1ba0b8;
    }
    ctx->pc = 0x1BA0B0u;
    SET_GPR_U32(ctx, 31, 0x1BA0B8u);
    ctx->pc = 0x1BA0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA0B0u;
    // 0x1ba0b4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1BA0B0u, 0x1BA0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0B8u;
label_1ba0b8:
    // 0x1ba0b8: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_1ba0bc:
    if (ctx->pc == 0x1BA0BCu) {
        ctx->pc = 0x1BA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0B8u;
        // 0x1ba0bc: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0C0u;
        goto label_1ba0c0;
    }
    ctx->pc = 0x1BA0B8u;
    {
        const bool branch_taken_0x1ba0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0B8u;
        // 0x1ba0bc: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0b8) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA0C0u;
label_1ba0c0:
    // 0x1ba0c0: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_1ba0c4:
    if (ctx->pc == 0x1BA0C4u) {
        ctx->pc = 0x1BA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0C0u;
        // 0x1ba0c4: 0x2413003d  addiu       $s3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0C8u;
        goto label_1ba0c8;
    }
    ctx->pc = 0x1BA0C0u;
    {
        const bool branch_taken_0x1ba0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0C0u;
        // 0x1ba0c4: 0x2413003d  addiu       $s3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0c0) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA0C8u;
label_1ba0c8:
    // 0x1ba0c8: 0x1000019f  b           . + 4 + (0x19F << 2)
label_1ba0cc:
    if (ctx->pc == 0x1BA0CCu) {
        ctx->pc = 0x1BA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0C8u;
        // 0x1ba0cc: 0x2413003c  addiu       $s3, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0D0u;
        goto label_1ba0d0;
    }
    ctx->pc = 0x1BA0C8u;
    {
        const bool branch_taken_0x1ba0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0C8u;
        // 0x1ba0cc: 0x2413003c  addiu       $s3, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0c8) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA0D0u;
label_1ba0d0:
    // 0x1ba0d0: 0x241e0006  addiu       $fp, $zero, 0x6
    ctx->pc = 0x1ba0d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ba0d4:
    // 0x1ba0d4: 0x1000019c  b           . + 4 + (0x19C << 2)
label_1ba0d8:
    if (ctx->pc == 0x1BA0D8u) {
        ctx->pc = 0x1BA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0D4u;
        // 0x1ba0d8: 0xafa00690  sw          $zero, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0DCu;
        goto label_1ba0dc;
    }
    ctx->pc = 0x1BA0D4u;
    {
        const bool branch_taken_0x1ba0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0D4u;
        // 0x1ba0d8: 0xafa00690  sw          $zero, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0d4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA0DCu;
label_1ba0dc:
    // 0x1ba0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba0e0:
    // 0x1ba0e0: 0x241e0006  addiu       $fp, $zero, 0x6
    ctx->pc = 0x1ba0e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ba0e4:
    // 0x1ba0e4: 0x10000198  b           . + 4 + (0x198 << 2)
label_1ba0e8:
    if (ctx->pc == 0x1BA0E8u) {
        ctx->pc = 0x1BA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0E4u;
        // 0x1ba0e8: 0xafa20690  sw          $v0, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0ECu;
        goto label_1ba0ec;
    }
    ctx->pc = 0x1BA0E4u;
    {
        const bool branch_taken_0x1ba0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0E4u;
        // 0x1ba0e8: 0xafa20690  sw          $v0, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0e4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA0ECu;
label_1ba0ec:
    // 0x1ba0ec: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x1ba0ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ba0f0:
    // 0x1ba0f0: 0x10000195  b           . + 4 + (0x195 << 2)
label_1ba0f4:
    if (ctx->pc == 0x1BA0F4u) {
        ctx->pc = 0x1BA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0F0u;
        // 0x1ba0f4: 0xafa00690  sw          $zero, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0F8u;
        goto label_1ba0f8;
    }
    ctx->pc = 0x1BA0F0u;
    {
        const bool branch_taken_0x1ba0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0F0u;
        // 0x1ba0f4: 0xafa00690  sw          $zero, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0f0) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA0F8u;
label_1ba0f8:
    // 0x1ba0f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba0fc:
    // 0x1ba0fc: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x1ba0fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ba100:
    // 0x1ba100: 0x10000191  b           . + 4 + (0x191 << 2)
label_1ba104:
    if (ctx->pc == 0x1BA104u) {
        ctx->pc = 0x1BA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA100u;
        // 0x1ba104: 0xafa30690  sw          $v1, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA108u;
        goto label_1ba108;
    }
    ctx->pc = 0x1BA100u;
    {
        const bool branch_taken_0x1ba100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA100u;
        // 0x1ba104: 0xafa30690  sw          $v1, 0x690($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba100) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA108u;
label_1ba108:
    // 0x1ba108: 0x1000018f  b           . + 4 + (0x18F << 2)
label_1ba10c:
    if (ctx->pc == 0x1BA10Cu) {
        ctx->pc = 0x1BA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA108u;
        // 0x1ba10c: 0x241e0004  addiu       $fp, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA110u;
        goto label_1ba110;
    }
    ctx->pc = 0x1BA108u;
    {
        const bool branch_taken_0x1ba108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA108u;
        // 0x1ba10c: 0x241e0004  addiu       $fp, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba108) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA110u;
label_1ba110:
    // 0x1ba110: 0xc7a30214  lwc1        $f3, 0x214($sp)
    ctx->pc = 0x1ba110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba114:
    // 0x1ba114: 0xc7a2021c  lwc1        $f2, 0x21C($sp)
    ctx->pc = 0x1ba114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba118:
    // 0x1ba118: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x1ba118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba11c:
    // 0x1ba11c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ba11cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1ba120:
    // 0x1ba120: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ba120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba124:
    // 0x1ba124: 0x8fa4067c  lw          $a0, 0x67C($sp)
    ctx->pc = 0x1ba124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1660)));
label_1ba128:
    // 0x1ba128: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x1ba128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1ba12c:
    // 0x1ba12c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ba12cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ba130:
    // 0x1ba130: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
label_1ba134:
    if (ctx->pc == 0x1BA134u) {
        ctx->pc = 0x1BA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA130u;
        // 0x1ba134: 0xe7a10228  swc1        $f1, 0x228($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA138u;
        goto label_1ba138;
    }
    ctx->pc = 0x1BA130u;
    {
        const bool branch_taken_0x1ba130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA130u;
        // 0x1ba134: 0xe7a10228  swc1        $f1, 0x228($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba130) {
            ctx->pc = 0x1BA22Cu;
            goto label_1ba22c;
        }
    }
    ctx->pc = 0x1BA138u;
label_1ba138:
    // 0x1ba138: 0x10000038  b           . + 4 + (0x38 << 2)
label_1ba13c:
    if (ctx->pc == 0x1BA13Cu) {
        ctx->pc = 0x1BA140u;
        goto label_1ba140;
    }
    ctx->pc = 0x1BA138u;
    {
        const bool branch_taken_0x1ba138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba138) {
            ctx->pc = 0x1BA21Cu;
            goto label_1ba21c;
        }
    }
    ctx->pc = 0x1BA140u;
label_1ba140:
    // 0x1ba140: 0x8e420188  lw          $v0, 0x188($s2)
    ctx->pc = 0x1ba140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_1ba144:
    // 0x1ba144: 0x10400180  beqz        $v0, . + 4 + (0x180 << 2)
label_1ba148:
    if (ctx->pc == 0x1BA148u) {
        ctx->pc = 0x1BA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA144u;
        // 0x1ba148: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA14Cu;
        goto label_1ba14c;
    }
    ctx->pc = 0x1BA144u;
    {
        const bool branch_taken_0x1ba144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA144u;
        // 0x1ba148: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba144) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA14Cu;
label_1ba14c:
    // 0x1ba14c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1ba14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1ba150:
    // 0x1ba150: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x1ba150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_1ba154:
    // 0x1ba154: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1ba154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ba158:
    // 0x1ba158: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1ba158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1ba15c:
    // 0x1ba15c: 0x1460017a  bnez        $v1, . + 4 + (0x17A << 2)
label_1ba160:
    if (ctx->pc == 0x1BA160u) {
        ctx->pc = 0x1BA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA15Cu;
        // 0x1ba160: 0xc7a30214  lwc1        $f3, 0x214($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA164u;
        goto label_1ba164;
    }
    ctx->pc = 0x1BA15Cu;
    {
        const bool branch_taken_0x1ba15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA15Cu;
        // 0x1ba160: 0xc7a30214  lwc1        $f3, 0x214($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba15c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA164u;
label_1ba164:
    // 0x1ba164: 0xc7a2021c  lwc1        $f2, 0x21C($sp)
    ctx->pc = 0x1ba164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba168:
    // 0x1ba168: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x1ba168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba16c:
    // 0x1ba16c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ba16cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1ba170:
    // 0x1ba170: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ba170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba174:
    // 0x1ba174: 0x8fa5067c  lw          $a1, 0x67C($sp)
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1660)));
label_1ba178:
    // 0x1ba178: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x1ba178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1ba17c:
    // 0x1ba17c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ba17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ba180:
    // 0x1ba180: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
label_1ba184:
    if (ctx->pc == 0x1BA184u) {
        ctx->pc = 0x1BA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA180u;
        // 0x1ba184: 0xe7a10228  swc1        $f1, 0x228($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA188u;
        goto label_1ba188;
    }
    ctx->pc = 0x1BA180u;
    {
        const bool branch_taken_0x1ba180 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA180u;
        // 0x1ba184: 0xe7a10228  swc1        $f1, 0x228($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba180) {
            ctx->pc = 0x1BA22Cu;
            goto label_1ba22c;
        }
    }
    ctx->pc = 0x1BA188u;
label_1ba188:
    // 0x1ba188: 0x10000024  b           . + 4 + (0x24 << 2)
label_1ba18c:
    if (ctx->pc == 0x1BA18Cu) {
        ctx->pc = 0x1BA190u;
        goto label_1ba190;
    }
    ctx->pc = 0x1BA188u;
    {
        const bool branch_taken_0x1ba188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba188) {
            ctx->pc = 0x1BA21Cu;
            goto label_1ba21c;
        }
    }
    ctx->pc = 0x1BA190u;
label_1ba190:
    // 0x1ba190: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ba190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ba194:
    // 0x1ba194: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ba194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ba198:
    // 0x1ba198: 0x27a60674  addiu       $a2, $sp, 0x674
    ctx->pc = 0x1ba198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1652));
label_1ba19c:
    // 0x1ba19c: 0x24a549a8  addiu       $a1, $a1, 0x49A8
    ctx->pc = 0x1ba19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18856));
label_1ba1a0:
    // 0x1ba1a0: 0xc10ca4a  jal         func_432928
label_1ba1a4:
    if (ctx->pc == 0x1BA1A4u) {
        ctx->pc = 0x1BA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1A0u;
        // 0x1ba1a4: 0xafa00674  sw          $zero, 0x674($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1A8u;
        goto label_1ba1a8;
    }
    ctx->pc = 0x1BA1A0u;
    SET_GPR_U32(ctx, 31, 0x1BA1A8u);
    ctx->pc = 0x1BA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1A0u;
    // 0x1ba1a4: 0xafa00674  sw          $zero, 0x674($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1652), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432928u, 0x1BA1A0u, 0x1BA1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1A8u;
label_1ba1a8:
    // 0x1ba1a8: 0xc7a2021c  lwc1        $f2, 0x21C($sp)
    ctx->pc = 0x1ba1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba1ac:
    // 0x1ba1ac: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x1ba1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba1b0:
    // 0x1ba1b0: 0xc7a30674  lwc1        $f3, 0x674($sp)
    ctx->pc = 0x1ba1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba1b4:
    // 0x1ba1b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ba1b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1ba1b8:
    // 0x1ba1b8: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x1ba1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba1bc:
    // 0x1ba1bc: 0xc7a20230  lwc1        $f2, 0x230($sp)
    ctx->pc = 0x1ba1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba1c0:
    // 0x1ba1c0: 0x8fa6067c  lw          $a2, 0x67C($sp)
    ctx->pc = 0x1ba1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1660)));
label_1ba1c4:
    // 0x1ba1c4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ba1c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ba1c8:
    // 0x1ba1c8: 0xe7a20220  swc1        $f2, 0x220($sp)
    ctx->pc = 0x1ba1c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1ba1cc:
    // 0x1ba1cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ba1d0:
    // 0x1ba1d0: 0x14c00016  bnez        $a2, . + 4 + (0x16 << 2)
label_1ba1d4:
    if (ctx->pc == 0x1BA1D4u) {
        ctx->pc = 0x1BA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1D0u;
        // 0x1ba1d4: 0xe7a00228  swc1        $f0, 0x228($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1D8u;
        goto label_1ba1d8;
    }
    ctx->pc = 0x1BA1D0u;
    {
        const bool branch_taken_0x1ba1d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1D0u;
        // 0x1ba1d4: 0xe7a00228  swc1        $f0, 0x228($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1d0) {
            ctx->pc = 0x1BA22Cu;
            goto label_1ba22c;
        }
    }
    ctx->pc = 0x1BA1D8u;
label_1ba1d8:
    // 0x1ba1d8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1ba1dc:
    if (ctx->pc == 0x1BA1DCu) {
        ctx->pc = 0x1BA1E0u;
        goto label_1ba1e0;
    }
    ctx->pc = 0x1BA1D8u;
    {
        const bool branch_taken_0x1ba1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1d8) {
            ctx->pc = 0x1BA21Cu;
            goto label_1ba21c;
        }
    }
    ctx->pc = 0x1BA1E0u;
label_1ba1e0:
    // 0x1ba1e0: 0x8e420188  lw          $v0, 0x188($s2)
    ctx->pc = 0x1ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_1ba1e4:
    // 0x1ba1e4: 0x10400158  beqz        $v0, . + 4 + (0x158 << 2)
label_1ba1e8:
    if (ctx->pc == 0x1BA1E8u) {
        ctx->pc = 0x1BA1ECu;
        goto label_1ba1ec;
    }
    ctx->pc = 0x1BA1E4u;
    {
        const bool branch_taken_0x1ba1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1e4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA1ECu;
label_1ba1ec:
    // 0x1ba1ec: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_1ba1f0:
    // 0x1ba1f0: 0x10400155  beqz        $v0, . + 4 + (0x155 << 2)
label_1ba1f4:
    if (ctx->pc == 0x1BA1F4u) {
        ctx->pc = 0x1BA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F0u;
        // 0x1ba1f4: 0xc7a30214  lwc1        $f3, 0x214($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1F8u;
        goto label_1ba1f8;
    }
    ctx->pc = 0x1BA1F0u;
    {
        const bool branch_taken_0x1ba1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F0u;
        // 0x1ba1f4: 0xc7a30214  lwc1        $f3, 0x214($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1f0) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA1F8u;
label_1ba1f8:
    // 0x1ba1f8: 0xc7a2021c  lwc1        $f2, 0x21C($sp)
    ctx->pc = 0x1ba1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba1fc:
    // 0x1ba1fc: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x1ba1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba200:
    // 0x1ba200: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ba200u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1ba204:
    // 0x1ba204: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ba204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba208:
    // 0x1ba208: 0x8fa7067c  lw          $a3, 0x67C($sp)
    ctx->pc = 0x1ba208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1660)));
label_1ba20c:
    // 0x1ba20c: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x1ba20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1ba210:
    // 0x1ba210: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ba210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ba214:
    // 0x1ba214: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1ba218:
    if (ctx->pc == 0x1BA218u) {
        ctx->pc = 0x1BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA214u;
        // 0x1ba218: 0xe7a10228  swc1        $f1, 0x228($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA21Cu;
        goto label_1ba21c;
    }
    ctx->pc = 0x1BA214u;
    {
        const bool branch_taken_0x1ba214 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA214u;
        // 0x1ba218: 0xe7a10228  swc1        $f1, 0x228($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba214) {
            ctx->pc = 0x1BA22Cu;
            goto label_1ba22c;
        }
    }
    ctx->pc = 0x1BA21Cu;
label_1ba21c:
    // 0x1ba21c: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x1ba21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba220:
    // 0x1ba220: 0x0  nop
    ctx->pc = 0x1ba220u;
    // NOP
label_1ba224:
    // 0x1ba224: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ba228:
    if (ctx->pc == 0x1BA228u) {
        ctx->pc = 0x1BA22Cu;
        goto label_1ba22c;
    }
    ctx->pc = 0x1BA224u;
    {
        const bool branch_taken_0x1ba224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba224) {
            ctx->pc = 0x1BA230u;
            goto label_1ba230;
        }
    }
    ctx->pc = 0x1BA22Cu;
label_1ba22c:
    // 0x1ba22c: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x1ba22cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_1ba230:
    // 0x1ba230: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1ba230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1ba234:
    // 0x1ba234: 0x10000144  b           . + 4 + (0x144 << 2)
label_1ba238:
    if (ctx->pc == 0x1BA238u) {
        ctx->pc = 0x1BA23Cu;
        goto label_1ba23c;
    }
    ctx->pc = 0x1BA234u;
    {
        const bool branch_taken_0x1ba234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba234) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA23Cu;
label_1ba23c:
    // 0x1ba23c: 0x10000142  b           . + 4 + (0x142 << 2)
label_1ba240:
    if (ctx->pc == 0x1BA240u) {
        ctx->pc = 0x1BA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA23Cu;
        // 0x1ba240: 0x2413003a  addiu       $s3, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA244u;
        goto label_1ba244;
    }
    ctx->pc = 0x1BA23Cu;
    {
        const bool branch_taken_0x1ba23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA23Cu;
        // 0x1ba240: 0x2413003a  addiu       $s3, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba23c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA244u;
label_1ba244:
    // 0x1ba244: 0x10000140  b           . + 4 + (0x140 << 2)
label_1ba248:
    if (ctx->pc == 0x1BA248u) {
        ctx->pc = 0x1BA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA244u;
        // 0x1ba248: 0x2413003e  addiu       $s3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA24Cu;
        goto label_1ba24c;
    }
    ctx->pc = 0x1BA244u;
    {
        const bool branch_taken_0x1ba244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA244u;
        // 0x1ba248: 0x2413003e  addiu       $s3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba244) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA24Cu;
label_1ba24c:
    // 0x1ba24c: 0x1000013e  b           . + 4 + (0x13E << 2)
label_1ba250:
    if (ctx->pc == 0x1BA250u) {
        ctx->pc = 0x1BA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA24Cu;
        // 0x1ba250: 0x2413003f  addiu       $s3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA254u;
        goto label_1ba254;
    }
    ctx->pc = 0x1BA24Cu;
    {
        const bool branch_taken_0x1ba24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA24Cu;
        // 0x1ba250: 0x2413003f  addiu       $s3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba24c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA254u;
label_1ba254:
    // 0x1ba254: 0x1000013c  b           . + 4 + (0x13C << 2)
label_1ba258:
    if (ctx->pc == 0x1BA258u) {
        ctx->pc = 0x1BA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA254u;
        // 0x1ba258: 0x2413003b  addiu       $s3, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA25Cu;
        goto label_1ba25c;
    }
    ctx->pc = 0x1BA254u;
    {
        const bool branch_taken_0x1ba254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA254u;
        // 0x1ba258: 0x2413003b  addiu       $s3, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba254) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA25Cu;
label_1ba25c:
    // 0x1ba25c: 0x1000013a  b           . + 4 + (0x13A << 2)
label_1ba260:
    if (ctx->pc == 0x1BA260u) {
        ctx->pc = 0x1BA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA25Cu;
        // 0x1ba260: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA264u;
        goto label_1ba264;
    }
    ctx->pc = 0x1BA25Cu;
    {
        const bool branch_taken_0x1ba25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA25Cu;
        // 0x1ba260: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba25c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA264u;
label_1ba264:
    // 0x1ba264: 0x10000138  b           . + 4 + (0x138 << 2)
label_1ba268:
    if (ctx->pc == 0x1BA268u) {
        ctx->pc = 0x1BA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA264u;
        // 0x1ba268: 0x24130041  addiu       $s3, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA26Cu;
        goto label_1ba26c;
    }
    ctx->pc = 0x1BA264u;
    {
        const bool branch_taken_0x1ba264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA264u;
        // 0x1ba268: 0x24130041  addiu       $s3, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba264) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA26Cu;
label_1ba26c:
    // 0x1ba26c: 0x10000136  b           . + 4 + (0x136 << 2)
label_1ba270:
    if (ctx->pc == 0x1BA270u) {
        ctx->pc = 0x1BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA26Cu;
        // 0x1ba270: 0x24130042  addiu       $s3, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA274u;
        goto label_1ba274;
    }
    ctx->pc = 0x1BA26Cu;
    {
        const bool branch_taken_0x1ba26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA26Cu;
        // 0x1ba270: 0x24130042  addiu       $s3, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba26c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA274u;
label_1ba274:
    // 0x1ba274: 0x10000134  b           . + 4 + (0x134 << 2)
label_1ba278:
    if (ctx->pc == 0x1BA278u) {
        ctx->pc = 0x1BA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA274u;
        // 0x1ba278: 0x24130043  addiu       $s3, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA27Cu;
        goto label_1ba27c;
    }
    ctx->pc = 0x1BA274u;
    {
        const bool branch_taken_0x1ba274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA274u;
        // 0x1ba278: 0x24130043  addiu       $s3, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba274) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA27Cu;
label_1ba27c:
    // 0x1ba27c: 0x10000132  b           . + 4 + (0x132 << 2)
label_1ba280:
    if (ctx->pc == 0x1BA280u) {
        ctx->pc = 0x1BA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA27Cu;
        // 0x1ba280: 0x24130045  addiu       $s3, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA284u;
        goto label_1ba284;
    }
    ctx->pc = 0x1BA27Cu;
    {
        const bool branch_taken_0x1ba27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA27Cu;
        // 0x1ba280: 0x24130045  addiu       $s3, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba27c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA284u;
label_1ba284:
    // 0x1ba284: 0x10000130  b           . + 4 + (0x130 << 2)
label_1ba288:
    if (ctx->pc == 0x1BA288u) {
        ctx->pc = 0x1BA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA284u;
        // 0x1ba288: 0x24130046  addiu       $s3, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA28Cu;
        goto label_1ba28c;
    }
    ctx->pc = 0x1BA284u;
    {
        const bool branch_taken_0x1ba284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA284u;
        // 0x1ba288: 0x24130046  addiu       $s3, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba284) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA28Cu;
label_1ba28c:
    // 0x1ba28c: 0x1000012e  b           . + 4 + (0x12E << 2)
label_1ba290:
    if (ctx->pc == 0x1BA290u) {
        ctx->pc = 0x1BA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA28Cu;
        // 0x1ba290: 0x24130079  addiu       $s3, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA294u;
        goto label_1ba294;
    }
    ctx->pc = 0x1BA28Cu;
    {
        const bool branch_taken_0x1ba28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA28Cu;
        // 0x1ba290: 0x24130079  addiu       $s3, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba28c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA294u;
label_1ba294:
    // 0x1ba294: 0x1000012c  b           . + 4 + (0x12C << 2)
label_1ba298:
    if (ctx->pc == 0x1BA298u) {
        ctx->pc = 0x1BA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA294u;
        // 0x1ba298: 0x2413009f  addiu       $s3, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA29Cu;
        goto label_1ba29c;
    }
    ctx->pc = 0x1BA294u;
    {
        const bool branch_taken_0x1ba294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA294u;
        // 0x1ba298: 0x2413009f  addiu       $s3, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba294) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA29Cu;
label_1ba29c:
    // 0x1ba29c: 0x1000012a  b           . + 4 + (0x12A << 2)
label_1ba2a0:
    if (ctx->pc == 0x1BA2A0u) {
        ctx->pc = 0x1BA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA29Cu;
        // 0x1ba2a0: 0x2413009d  addiu       $s3, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2A4u;
        goto label_1ba2a4;
    }
    ctx->pc = 0x1BA29Cu;
    {
        const bool branch_taken_0x1ba29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA29Cu;
        // 0x1ba2a0: 0x2413009d  addiu       $s3, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba29c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2A4u;
label_1ba2a4:
    // 0x1ba2a4: 0x10000128  b           . + 4 + (0x128 << 2)
label_1ba2a8:
    if (ctx->pc == 0x1BA2A8u) {
        ctx->pc = 0x1BA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2A4u;
        // 0x1ba2a8: 0x24130096  addiu       $s3, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2ACu;
        goto label_1ba2ac;
    }
    ctx->pc = 0x1BA2A4u;
    {
        const bool branch_taken_0x1ba2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2A4u;
        // 0x1ba2a8: 0x24130096  addiu       $s3, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2a4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2ACu;
label_1ba2ac:
    // 0x1ba2ac: 0x10000126  b           . + 4 + (0x126 << 2)
label_1ba2b0:
    if (ctx->pc == 0x1BA2B0u) {
        ctx->pc = 0x1BA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2ACu;
        // 0x1ba2b0: 0x2413006e  addiu       $s3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2B4u;
        goto label_1ba2b4;
    }
    ctx->pc = 0x1BA2ACu;
    {
        const bool branch_taken_0x1ba2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2ACu;
        // 0x1ba2b0: 0x2413006e  addiu       $s3, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2ac) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2B4u;
label_1ba2b4:
    // 0x1ba2b4: 0x10000124  b           . + 4 + (0x124 << 2)
label_1ba2b8:
    if (ctx->pc == 0x1BA2B8u) {
        ctx->pc = 0x1BA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2B4u;
        // 0x1ba2b8: 0x2413009e  addiu       $s3, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2BCu;
        goto label_1ba2bc;
    }
    ctx->pc = 0x1BA2B4u;
    {
        const bool branch_taken_0x1ba2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2B4u;
        // 0x1ba2b8: 0x2413009e  addiu       $s3, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2b4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2BCu;
label_1ba2bc:
    // 0x1ba2bc: 0x10000122  b           . + 4 + (0x122 << 2)
label_1ba2c0:
    if (ctx->pc == 0x1BA2C0u) {
        ctx->pc = 0x1BA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2BCu;
        // 0x1ba2c0: 0x2413009b  addiu       $s3, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2C4u;
        goto label_1ba2c4;
    }
    ctx->pc = 0x1BA2BCu;
    {
        const bool branch_taken_0x1ba2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2BCu;
        // 0x1ba2c0: 0x2413009b  addiu       $s3, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2bc) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2C4u;
label_1ba2c4:
    // 0x1ba2c4: 0x10000120  b           . + 4 + (0x120 << 2)
label_1ba2c8:
    if (ctx->pc == 0x1BA2C8u) {
        ctx->pc = 0x1BA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2C4u;
        // 0x1ba2c8: 0x24130099  addiu       $s3, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2CCu;
        goto label_1ba2cc;
    }
    ctx->pc = 0x1BA2C4u;
    {
        const bool branch_taken_0x1ba2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2C4u;
        // 0x1ba2c8: 0x24130099  addiu       $s3, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2c4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2CCu;
label_1ba2cc:
    // 0x1ba2cc: 0x1000011e  b           . + 4 + (0x11E << 2)
label_1ba2d0:
    if (ctx->pc == 0x1BA2D0u) {
        ctx->pc = 0x1BA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2CCu;
        // 0x1ba2d0: 0x2413009a  addiu       $s3, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2D4u;
        goto label_1ba2d4;
    }
    ctx->pc = 0x1BA2CCu;
    {
        const bool branch_taken_0x1ba2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2CCu;
        // 0x1ba2d0: 0x2413009a  addiu       $s3, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2cc) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2D4u;
label_1ba2d4:
    // 0x1ba2d4: 0x1000011c  b           . + 4 + (0x11C << 2)
label_1ba2d8:
    if (ctx->pc == 0x1BA2D8u) {
        ctx->pc = 0x1BA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2D4u;
        // 0x1ba2d8: 0x24130098  addiu       $s3, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2DCu;
        goto label_1ba2dc;
    }
    ctx->pc = 0x1BA2D4u;
    {
        const bool branch_taken_0x1ba2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2D4u;
        // 0x1ba2d8: 0x24130098  addiu       $s3, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2d4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2DCu;
label_1ba2dc:
    // 0x1ba2dc: 0x1000011a  b           . + 4 + (0x11A << 2)
label_1ba2e0:
    if (ctx->pc == 0x1BA2E0u) {
        ctx->pc = 0x1BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2DCu;
        // 0x1ba2e0: 0x2413009c  addiu       $s3, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2E4u;
        goto label_1ba2e4;
    }
    ctx->pc = 0x1BA2DCu;
    {
        const bool branch_taken_0x1ba2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2DCu;
        // 0x1ba2e0: 0x2413009c  addiu       $s3, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2dc) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2E4u;
label_1ba2e4:
    // 0x1ba2e4: 0x10000118  b           . + 4 + (0x118 << 2)
label_1ba2e8:
    if (ctx->pc == 0x1BA2E8u) {
        ctx->pc = 0x1BA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2E4u;
        // 0x1ba2e8: 0x241300a0  addiu       $s3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2ECu;
        goto label_1ba2ec;
    }
    ctx->pc = 0x1BA2E4u;
    {
        const bool branch_taken_0x1ba2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2E4u;
        // 0x1ba2e8: 0x241300a0  addiu       $s3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2e4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2ECu;
label_1ba2ec:
    // 0x1ba2ec: 0x10000116  b           . + 4 + (0x116 << 2)
label_1ba2f0:
    if (ctx->pc == 0x1BA2F0u) {
        ctx->pc = 0x1BA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2ECu;
        // 0x1ba2f0: 0x24130094  addiu       $s3, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2F4u;
        goto label_1ba2f4;
    }
    ctx->pc = 0x1BA2ECu;
    {
        const bool branch_taken_0x1ba2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2ECu;
        // 0x1ba2f0: 0x24130094  addiu       $s3, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2ec) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2F4u;
label_1ba2f4:
    // 0x1ba2f4: 0x10000114  b           . + 4 + (0x114 << 2)
label_1ba2f8:
    if (ctx->pc == 0x1BA2F8u) {
        ctx->pc = 0x1BA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2F4u;
        // 0x1ba2f8: 0x24130095  addiu       $s3, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2FCu;
        goto label_1ba2fc;
    }
    ctx->pc = 0x1BA2F4u;
    {
        const bool branch_taken_0x1ba2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2F4u;
        // 0x1ba2f8: 0x24130095  addiu       $s3, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2f4) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA2FCu;
label_1ba2fc:
    // 0x1ba2fc: 0x10000112  b           . + 4 + (0x112 << 2)
label_1ba300:
    if (ctx->pc == 0x1BA300u) {
        ctx->pc = 0x1BA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2FCu;
        // 0x1ba300: 0x24130092  addiu       $s3, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA304u;
        goto label_1ba304;
    }
    ctx->pc = 0x1BA2FCu;
    {
        const bool branch_taken_0x1ba2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2FCu;
        // 0x1ba300: 0x24130092  addiu       $s3, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2fc) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA304u;
label_1ba304:
    // 0x1ba304: 0x10000110  b           . + 4 + (0x110 << 2)
label_1ba308:
    if (ctx->pc == 0x1BA308u) {
        ctx->pc = 0x1BA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA304u;
        // 0x1ba308: 0x24130091  addiu       $s3, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA30Cu;
        goto label_1ba30c;
    }
    ctx->pc = 0x1BA304u;
    {
        const bool branch_taken_0x1ba304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA304u;
        // 0x1ba308: 0x24130091  addiu       $s3, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba304) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA30Cu;
label_1ba30c:
    // 0x1ba30c: 0x1000010e  b           . + 4 + (0x10E << 2)
label_1ba310:
    if (ctx->pc == 0x1BA310u) {
        ctx->pc = 0x1BA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA30Cu;
        // 0x1ba310: 0x24130097  addiu       $s3, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA314u;
        goto label_1ba314;
    }
    ctx->pc = 0x1BA30Cu;
    {
        const bool branch_taken_0x1ba30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA30Cu;
        // 0x1ba310: 0x24130097  addiu       $s3, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba30c) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA314u;
label_1ba314:
    // 0x1ba314: 0x1000010c  b           . + 4 + (0x10C << 2)
label_1ba318:
    if (ctx->pc == 0x1BA318u) {
        ctx->pc = 0x1BA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA314u;
        // 0x1ba318: 0x24130093  addiu       $s3, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA31Cu;
        goto label_1ba31c;
    }
    ctx->pc = 0x1BA314u;
    {
        const bool branch_taken_0x1ba314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA314u;
        // 0x1ba318: 0x24130093  addiu       $s3, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba314) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA31Cu;
label_1ba31c:
    // 0x1ba31c: 0x8e4201dc  lw          $v0, 0x1DC($s2)
    ctx->pc = 0x1ba31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1ba320:
    // 0x1ba320: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1ba324:
    if (ctx->pc == 0x1BA324u) {
        ctx->pc = 0x1BA328u;
        goto label_1ba328;
    }
    ctx->pc = 0x1BA320u;
    {
        const bool branch_taken_0x1ba320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba320) {
            ctx->pc = 0x1BA34Cu;
            goto label_1ba34c;
        }
    }
    ctx->pc = 0x1BA328u;
label_1ba328:
    // 0x1ba328: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba32c:
    // 0x1ba32c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ba32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ba330:
    // 0x1ba330: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba334:
    // 0x1ba334: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba338:
    // 0x1ba338: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba33c:
    // 0x1ba33c: 0x40f809  jalr        $v0
label_1ba340:
    if (ctx->pc == 0x1BA340u) {
        ctx->pc = 0x1BA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA33Cu;
        // 0x1ba340: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA344u;
        goto label_1ba344;
    }
    ctx->pc = 0x1BA33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA344u);
        ctx->pc = 0x1BA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA33Cu;
        // 0x1ba340: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA33Cu, 0x1BA344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA344u;
label_1ba344:
    // 0x1ba344: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1ba348:
    if (ctx->pc == 0x1BA348u) {
        ctx->pc = 0x1BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA344u;
        // 0x1ba348: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA34Cu;
        goto label_1ba34c;
    }
    ctx->pc = 0x1BA344u;
    {
        const bool branch_taken_0x1ba344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA344u;
        // 0x1ba348: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba344) {
            ctx->pc = 0x1BA5F4u;
            goto label_1ba5f4;
        }
    }
    ctx->pc = 0x1BA34Cu;
label_1ba34c:
    // 0x1ba34c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba350:
    if (ctx->pc == 0x1BA350u) {
        ctx->pc = 0x1BA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA34Cu;
        // 0x1ba350: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA354u;
        goto label_1ba354;
    }
    ctx->pc = 0x1BA34Cu;
    {
        const bool branch_taken_0x1ba34c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA34Cu;
        // 0x1ba350: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba34c) {
            ctx->pc = 0x1BA368u;
            goto label_1ba368;
        }
    }
    ctx->pc = 0x1BA354u;
label_1ba354:
    // 0x1ba354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba358:
    // 0x1ba358: 0x0  nop
    ctx->pc = 0x1ba358u;
    // NOP
label_1ba35c:
    // 0x1ba35c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba35cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba360:
    // 0x1ba360: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ba364:
    if (ctx->pc == 0x1BA364u) {
        ctx->pc = 0x1BA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA360u;
        // 0x1ba364: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA368u;
        goto label_1ba368;
    }
    ctx->pc = 0x1BA360u;
    {
        const bool branch_taken_0x1ba360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA360u;
        // 0x1ba364: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba360) {
            ctx->pc = 0x1BA388u;
            goto label_1ba388;
        }
    }
    ctx->pc = 0x1BA368u;
label_1ba368:
    // 0x1ba368: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ba368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1ba36c:
    // 0x1ba36c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba370:
    // 0x1ba370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba374:
    // 0x1ba374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba378:
    // 0x1ba378: 0x0  nop
    ctx->pc = 0x1ba378u;
    // NOP
label_1ba37c:
    // 0x1ba37c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba37cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba380:
    // 0x1ba380: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ba380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ba384:
    // 0x1ba384: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba388:
    // 0x1ba388: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1ba388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1ba38c:
    // 0x1ba38c: 0xc440e6e4  lwc1        $f0, -0x191C($v0)
    ctx->pc = 0x1ba38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba390:
    // 0x1ba390: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba394:
    // 0x1ba394: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1ba394u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ba398:
    // 0x1ba398: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba39c:
    // 0x1ba39c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba3a0:
    // 0x1ba3a0: 0x40f809  jalr        $v0
label_1ba3a4:
    if (ctx->pc == 0x1BA3A4u) {
        ctx->pc = 0x1BA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3A0u;
        // 0x1ba3a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3A8u;
        goto label_1ba3a8;
    }
    ctx->pc = 0x1BA3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA3A8u);
        ctx->pc = 0x1BA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3A0u;
        // 0x1ba3a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA3A0u, 0x1BA3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA3A8u;
label_1ba3a8:
    // 0x1ba3a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba3ac:
    if (ctx->pc == 0x1BA3ACu) {
        ctx->pc = 0x1BA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3A8u;
        // 0x1ba3ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3B0u;
        goto label_1ba3b0;
    }
    ctx->pc = 0x1BA3A8u;
    {
        const bool branch_taken_0x1ba3a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3A8u;
        // 0x1ba3ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3a8) {
            ctx->pc = 0x1BA3C4u;
            goto label_1ba3c4;
        }
    }
    ctx->pc = 0x1BA3B0u;
label_1ba3b0:
    // 0x1ba3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba3b4:
    // 0x1ba3b4: 0x0  nop
    ctx->pc = 0x1ba3b4u;
    // NOP
label_1ba3b8:
    // 0x1ba3b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba3bc:
    // 0x1ba3bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ba3c0:
    if (ctx->pc == 0x1BA3C0u) {
        ctx->pc = 0x1BA3C4u;
        goto label_1ba3c4;
    }
    ctx->pc = 0x1BA3BCu;
    {
        const bool branch_taken_0x1ba3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba3bc) {
            ctx->pc = 0x1BA3DCu;
            goto label_1ba3dc;
        }
    }
    ctx->pc = 0x1BA3C4u;
label_1ba3c4:
    // 0x1ba3c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba3c8:
    // 0x1ba3c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba3cc:
    // 0x1ba3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba3d0:
    // 0x1ba3d0: 0x0  nop
    ctx->pc = 0x1ba3d0u;
    // NOP
label_1ba3d4:
    // 0x1ba3d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba3d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba3d8:
    // 0x1ba3d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba3dc:
    // 0x1ba3dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ba3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba3e0:
    // 0x1ba3e0: 0x0  nop
    ctx->pc = 0x1ba3e0u;
    // NOP
label_1ba3e4:
    // 0x1ba3e4: 0x450000ba  bc1f        . + 4 + (0xBA << 2)
label_1ba3e8:
    if (ctx->pc == 0x1BA3E8u) {
        ctx->pc = 0x1BA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E4u;
        // 0x1ba3e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3ECu;
        goto label_1ba3ec;
    }
    ctx->pc = 0x1BA3E4u;
    {
        const bool branch_taken_0x1ba3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E4u;
        // 0x1ba3e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3e4) {
            ctx->pc = 0x1BA6D0u;
            goto label_1ba6d0;
        }
    }
    ctx->pc = 0x1BA3ECu;
label_1ba3ec:
    // 0x1ba3ec: 0x924201e0  lbu         $v0, 0x1E0($s2)
    ctx->pc = 0x1ba3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 480)));
label_1ba3f0:
    // 0x1ba3f0: 0x104300af  beq         $v0, $v1, . + 4 + (0xAF << 2)
label_1ba3f4:
    if (ctx->pc == 0x1BA3F4u) {
        ctx->pc = 0x1BA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3F0u;
        // 0x1ba3f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3F8u;
        goto label_1ba3f8;
    }
    ctx->pc = 0x1BA3F0u;
    {
        const bool branch_taken_0x1ba3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3F0u;
        // 0x1ba3f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3f0) {
            ctx->pc = 0x1BA6B0u;
            goto label_1ba6b0;
        }
    }
    ctx->pc = 0x1BA3F8u;
label_1ba3f8:
    // 0x1ba3f8: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1ba3fc:
    if (ctx->pc == 0x1BA3FCu) {
        ctx->pc = 0x1BA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3F8u;
        // 0x1ba3fc: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA400u;
        goto label_1ba400;
    }
    ctx->pc = 0x1BA3F8u;
    {
        const bool branch_taken_0x1ba3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3F8u;
        // 0x1ba3fc: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3f8) {
            ctx->pc = 0x1BA6B4u;
            goto label_1ba6b4;
        }
    }
    ctx->pc = 0x1BA400u;
label_1ba400:
    // 0x1ba400: 0x8e4201dc  lw          $v0, 0x1DC($s2)
    ctx->pc = 0x1ba400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1ba404:
    // 0x1ba404: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1ba408:
    if (ctx->pc == 0x1BA408u) {
        ctx->pc = 0x1BA40Cu;
        goto label_1ba40c;
    }
    ctx->pc = 0x1BA404u;
    {
        const bool branch_taken_0x1ba404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba404) {
            ctx->pc = 0x1BA430u;
            goto label_1ba430;
        }
    }
    ctx->pc = 0x1BA40Cu;
label_1ba40c:
    // 0x1ba40c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba410:
    // 0x1ba410: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ba414:
    // 0x1ba414: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba418:
    // 0x1ba418: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba41c:
    // 0x1ba41c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba420:
    // 0x1ba420: 0x40f809  jalr        $v0
label_1ba424:
    if (ctx->pc == 0x1BA424u) {
        ctx->pc = 0x1BA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA420u;
        // 0x1ba424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA428u;
        goto label_1ba428;
    }
    ctx->pc = 0x1BA420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA428u);
        ctx->pc = 0x1BA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA420u;
        // 0x1ba424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA420u, 0x1BA428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA428u;
label_1ba428:
    // 0x1ba428: 0x10000072  b           . + 4 + (0x72 << 2)
label_1ba42c:
    if (ctx->pc == 0x1BA42Cu) {
        ctx->pc = 0x1BA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA428u;
        // 0x1ba42c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA430u;
        goto label_1ba430;
    }
    ctx->pc = 0x1BA428u;
    {
        const bool branch_taken_0x1ba428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA428u;
        // 0x1ba42c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba428) {
            ctx->pc = 0x1BA5F4u;
            goto label_1ba5f4;
        }
    }
    ctx->pc = 0x1BA430u;
label_1ba430:
    // 0x1ba430: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba434:
    if (ctx->pc == 0x1BA434u) {
        ctx->pc = 0x1BA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA430u;
        // 0x1ba434: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA438u;
        goto label_1ba438;
    }
    ctx->pc = 0x1BA430u;
    {
        const bool branch_taken_0x1ba430 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA430u;
        // 0x1ba434: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba430) {
            ctx->pc = 0x1BA44Cu;
            goto label_1ba44c;
        }
    }
    ctx->pc = 0x1BA438u;
label_1ba438:
    // 0x1ba438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba43c:
    // 0x1ba43c: 0x0  nop
    ctx->pc = 0x1ba43cu;
    // NOP
label_1ba440:
    // 0x1ba440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba444:
    // 0x1ba444: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ba448:
    if (ctx->pc == 0x1BA448u) {
        ctx->pc = 0x1BA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA444u;
        // 0x1ba448: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA44Cu;
        goto label_1ba44c;
    }
    ctx->pc = 0x1BA444u;
    {
        const bool branch_taken_0x1ba444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA444u;
        // 0x1ba448: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba444) {
            ctx->pc = 0x1BA46Cu;
            goto label_1ba46c;
        }
    }
    ctx->pc = 0x1BA44Cu;
label_1ba44c:
    // 0x1ba44c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ba44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1ba450:
    // 0x1ba450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba454:
    // 0x1ba454: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba458:
    // 0x1ba458: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba45c:
    // 0x1ba45c: 0x0  nop
    ctx->pc = 0x1ba45cu;
    // NOP
label_1ba460:
    // 0x1ba460: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba464:
    // 0x1ba464: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ba464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ba468:
    // 0x1ba468: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba46c:
    // 0x1ba46c: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1ba470:
    // 0x1ba470: 0xc440e6e4  lwc1        $f0, -0x191C($v0)
    ctx->pc = 0x1ba470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba474:
    // 0x1ba474: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba478:
    // 0x1ba478: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1ba478u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ba47c:
    // 0x1ba47c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba47cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba480:
    // 0x1ba480: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba484:
    // 0x1ba484: 0x40f809  jalr        $v0
label_1ba488:
    if (ctx->pc == 0x1BA488u) {
        ctx->pc = 0x1BA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA484u;
        // 0x1ba488: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA48Cu;
        goto label_1ba48c;
    }
    ctx->pc = 0x1BA484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA48Cu);
        ctx->pc = 0x1BA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA484u;
        // 0x1ba488: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA484u, 0x1BA48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA48Cu;
label_1ba48c:
    // 0x1ba48c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba490:
    if (ctx->pc == 0x1BA490u) {
        ctx->pc = 0x1BA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA48Cu;
        // 0x1ba490: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA494u;
        goto label_1ba494;
    }
    ctx->pc = 0x1BA48Cu;
    {
        const bool branch_taken_0x1ba48c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA48Cu;
        // 0x1ba490: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba48c) {
            ctx->pc = 0x1BA4A8u;
            goto label_1ba4a8;
        }
    }
    ctx->pc = 0x1BA494u;
label_1ba494:
    // 0x1ba494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba498:
    // 0x1ba498: 0x0  nop
    ctx->pc = 0x1ba498u;
    // NOP
label_1ba49c:
    // 0x1ba49c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba4a0:
    // 0x1ba4a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ba4a4:
    if (ctx->pc == 0x1BA4A4u) {
        ctx->pc = 0x1BA4A8u;
        goto label_1ba4a8;
    }
    ctx->pc = 0x1BA4A0u;
    {
        const bool branch_taken_0x1ba4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4a0) {
            ctx->pc = 0x1BA4C0u;
            goto label_1ba4c0;
        }
    }
    ctx->pc = 0x1BA4A8u;
label_1ba4a8:
    // 0x1ba4a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba4ac:
    // 0x1ba4ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba4b0:
    // 0x1ba4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba4b4:
    // 0x1ba4b4: 0x0  nop
    ctx->pc = 0x1ba4b4u;
    // NOP
label_1ba4b8:
    // 0x1ba4b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba4bc:
    // 0x1ba4bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba4c0:
    // 0x1ba4c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ba4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba4c4:
    // 0x1ba4c4: 0x0  nop
    ctx->pc = 0x1ba4c4u;
    // NOP
label_1ba4c8:
    // 0x1ba4c8: 0x45000081  bc1f        . + 4 + (0x81 << 2)
label_1ba4cc:
    if (ctx->pc == 0x1BA4CCu) {
        ctx->pc = 0x1BA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4C8u;
        // 0x1ba4cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4D0u;
        goto label_1ba4d0;
    }
    ctx->pc = 0x1BA4C8u;
    {
        const bool branch_taken_0x1ba4c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4C8u;
        // 0x1ba4cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4c8) {
            ctx->pc = 0x1BA6D0u;
            goto label_1ba6d0;
        }
    }
    ctx->pc = 0x1BA4D0u;
label_1ba4d0:
    // 0x1ba4d0: 0x924201e0  lbu         $v0, 0x1E0($s2)
    ctx->pc = 0x1ba4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 480)));
label_1ba4d4:
    // 0x1ba4d4: 0x10430076  beq         $v0, $v1, . + 4 + (0x76 << 2)
label_1ba4d8:
    if (ctx->pc == 0x1BA4D8u) {
        ctx->pc = 0x1BA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4D4u;
        // 0x1ba4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4DCu;
        goto label_1ba4dc;
    }
    ctx->pc = 0x1BA4D4u;
    {
        const bool branch_taken_0x1ba4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4D4u;
        // 0x1ba4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4d4) {
            ctx->pc = 0x1BA6B0u;
            goto label_1ba6b0;
        }
    }
    ctx->pc = 0x1BA4DCu;
label_1ba4dc:
    // 0x1ba4dc: 0x10000075  b           . + 4 + (0x75 << 2)
label_1ba4e0:
    if (ctx->pc == 0x1BA4E0u) {
        ctx->pc = 0x1BA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4DCu;
        // 0x1ba4e0: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA4E4u;
        goto label_1ba4e4;
    }
    ctx->pc = 0x1BA4DCu;
    {
        const bool branch_taken_0x1ba4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4DCu;
        // 0x1ba4e0: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4dc) {
            ctx->pc = 0x1BA6B4u;
            goto label_1ba6b4;
        }
    }
    ctx->pc = 0x1BA4E4u;
label_1ba4e4:
    // 0x1ba4e4: 0x8e4201dc  lw          $v0, 0x1DC($s2)
    ctx->pc = 0x1ba4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1ba4e8:
    // 0x1ba4e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1ba4ec:
    if (ctx->pc == 0x1BA4ECu) {
        ctx->pc = 0x1BA4F0u;
        goto label_1ba4f0;
    }
    ctx->pc = 0x1BA4E8u;
    {
        const bool branch_taken_0x1ba4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4e8) {
            ctx->pc = 0x1BA514u;
            goto label_1ba514;
        }
    }
    ctx->pc = 0x1BA4F0u;
label_1ba4f0:
    // 0x1ba4f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba4f4:
    // 0x1ba4f4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ba4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ba4f8:
    // 0x1ba4f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba4fc:
    // 0x1ba4fc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba4fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba500:
    // 0x1ba500: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba504:
    // 0x1ba504: 0x40f809  jalr        $v0
label_1ba508:
    if (ctx->pc == 0x1BA508u) {
        ctx->pc = 0x1BA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA504u;
        // 0x1ba508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA50Cu;
        goto label_1ba50c;
    }
    ctx->pc = 0x1BA504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA50Cu);
        ctx->pc = 0x1BA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA504u;
        // 0x1ba508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA504u, 0x1BA50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA50Cu;
label_1ba50c:
    // 0x1ba50c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1ba510:
    if (ctx->pc == 0x1BA510u) {
        ctx->pc = 0x1BA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA50Cu;
        // 0x1ba510: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA514u;
        goto label_1ba514;
    }
    ctx->pc = 0x1BA50Cu;
    {
        const bool branch_taken_0x1ba50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA50Cu;
        // 0x1ba510: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba50c) {
            ctx->pc = 0x1BA5F4u;
            goto label_1ba5f4;
        }
    }
    ctx->pc = 0x1BA514u;
label_1ba514:
    // 0x1ba514: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba518:
    if (ctx->pc == 0x1BA518u) {
        ctx->pc = 0x1BA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA514u;
        // 0x1ba518: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA51Cu;
        goto label_1ba51c;
    }
    ctx->pc = 0x1BA514u;
    {
        const bool branch_taken_0x1ba514 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA514u;
        // 0x1ba518: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba514) {
            ctx->pc = 0x1BA530u;
            goto label_1ba530;
        }
    }
    ctx->pc = 0x1BA51Cu;
label_1ba51c:
    // 0x1ba51c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba520:
    // 0x1ba520: 0x0  nop
    ctx->pc = 0x1ba520u;
    // NOP
label_1ba524:
    // 0x1ba524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba528:
    // 0x1ba528: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ba52c:
    if (ctx->pc == 0x1BA52Cu) {
        ctx->pc = 0x1BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA528u;
        // 0x1ba52c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA530u;
        goto label_1ba530;
    }
    ctx->pc = 0x1BA528u;
    {
        const bool branch_taken_0x1ba528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA528u;
        // 0x1ba52c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba528) {
            ctx->pc = 0x1BA550u;
            goto label_1ba550;
        }
    }
    ctx->pc = 0x1BA530u;
label_1ba530:
    // 0x1ba530: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ba530u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1ba534:
    // 0x1ba534: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba538:
    // 0x1ba538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba53c:
    // 0x1ba53c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba540:
    // 0x1ba540: 0x0  nop
    ctx->pc = 0x1ba540u;
    // NOP
label_1ba544:
    // 0x1ba544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba548:
    // 0x1ba548: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ba548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ba54c:
    // 0x1ba54c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba550:
    // 0x1ba550: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1ba550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1ba554:
    // 0x1ba554: 0xc440e6e4  lwc1        $f0, -0x191C($v0)
    ctx->pc = 0x1ba554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba558:
    // 0x1ba558: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba55c:
    // 0x1ba55c: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1ba55cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ba560:
    // 0x1ba560: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba564:
    // 0x1ba564: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba568:
    // 0x1ba568: 0x40f809  jalr        $v0
label_1ba56c:
    if (ctx->pc == 0x1BA56Cu) {
        ctx->pc = 0x1BA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA568u;
        // 0x1ba56c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA570u;
        goto label_1ba570;
    }
    ctx->pc = 0x1BA568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA570u);
        ctx->pc = 0x1BA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA568u;
        // 0x1ba56c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA568u, 0x1BA570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA570u;
label_1ba570:
    // 0x1ba570: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba574:
    if (ctx->pc == 0x1BA574u) {
        ctx->pc = 0x1BA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA570u;
        // 0x1ba574: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA578u;
        goto label_1ba578;
    }
    ctx->pc = 0x1BA570u;
    {
        const bool branch_taken_0x1ba570 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA570u;
        // 0x1ba574: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba570) {
            ctx->pc = 0x1BA58Cu;
            goto label_1ba58c;
        }
    }
    ctx->pc = 0x1BA578u;
label_1ba578:
    // 0x1ba578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba57c:
    // 0x1ba57c: 0x0  nop
    ctx->pc = 0x1ba57cu;
    // NOP
label_1ba580:
    // 0x1ba580: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba584:
    // 0x1ba584: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ba588:
    if (ctx->pc == 0x1BA588u) {
        ctx->pc = 0x1BA58Cu;
        goto label_1ba58c;
    }
    ctx->pc = 0x1BA584u;
    {
        const bool branch_taken_0x1ba584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba584) {
            ctx->pc = 0x1BA5A4u;
            goto label_1ba5a4;
        }
    }
    ctx->pc = 0x1BA58Cu;
label_1ba58c:
    // 0x1ba58c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba590:
    // 0x1ba590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba594:
    // 0x1ba594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba598:
    // 0x1ba598: 0x0  nop
    ctx->pc = 0x1ba598u;
    // NOP
label_1ba59c:
    // 0x1ba59c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba5a0:
    // 0x1ba5a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba5a4:
    // 0x1ba5a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ba5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba5a8:
    // 0x1ba5a8: 0x0  nop
    ctx->pc = 0x1ba5a8u;
    // NOP
label_1ba5ac:
    // 0x1ba5ac: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_1ba5b0:
    if (ctx->pc == 0x1BA5B0u) {
        ctx->pc = 0x1BA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5ACu;
        // 0x1ba5b0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5B4u;
        goto label_1ba5b4;
    }
    ctx->pc = 0x1BA5ACu;
    {
        const bool branch_taken_0x1ba5ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5ACu;
        // 0x1ba5b0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5ac) {
            ctx->pc = 0x1BA6D0u;
            goto label_1ba6d0;
        }
    }
    ctx->pc = 0x1BA5B4u;
label_1ba5b4:
    // 0x1ba5b4: 0x924201e0  lbu         $v0, 0x1E0($s2)
    ctx->pc = 0x1ba5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 480)));
label_1ba5b8:
    // 0x1ba5b8: 0x1043003d  beq         $v0, $v1, . + 4 + (0x3D << 2)
label_1ba5bc:
    if (ctx->pc == 0x1BA5BCu) {
        ctx->pc = 0x1BA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5B8u;
        // 0x1ba5bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5C0u;
        goto label_1ba5c0;
    }
    ctx->pc = 0x1BA5B8u;
    {
        const bool branch_taken_0x1ba5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5B8u;
        // 0x1ba5bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5b8) {
            ctx->pc = 0x1BA6B0u;
            goto label_1ba6b0;
        }
    }
    ctx->pc = 0x1BA5C0u;
label_1ba5c0:
    // 0x1ba5c0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1ba5c4:
    if (ctx->pc == 0x1BA5C4u) {
        ctx->pc = 0x1BA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5C0u;
        // 0x1ba5c4: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5C8u;
        goto label_1ba5c8;
    }
    ctx->pc = 0x1BA5C0u;
    {
        const bool branch_taken_0x1ba5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5C0u;
        // 0x1ba5c4: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5c0) {
            ctx->pc = 0x1BA6B4u;
            goto label_1ba6b4;
        }
    }
    ctx->pc = 0x1BA5C8u;
label_1ba5c8:
    // 0x1ba5c8: 0x8e4201dc  lw          $v0, 0x1DC($s2)
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_1ba5cc:
    // 0x1ba5cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1ba5d0:
    if (ctx->pc == 0x1BA5D0u) {
        ctx->pc = 0x1BA5D4u;
        goto label_1ba5d4;
    }
    ctx->pc = 0x1BA5CCu;
    {
        const bool branch_taken_0x1ba5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5cc) {
            ctx->pc = 0x1BA600u;
            goto label_1ba600;
        }
    }
    ctx->pc = 0x1BA5D4u;
label_1ba5d4:
    // 0x1ba5d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba5d8:
    // 0x1ba5d8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ba5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ba5dc:
    // 0x1ba5dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba5e0:
    // 0x1ba5e0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba5e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba5e4:
    // 0x1ba5e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba5e8:
    // 0x1ba5e8: 0x40f809  jalr        $v0
label_1ba5ec:
    if (ctx->pc == 0x1BA5ECu) {
        ctx->pc = 0x1BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5E8u;
        // 0x1ba5ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5F0u;
        goto label_1ba5f0;
    }
    ctx->pc = 0x1BA5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA5F0u);
        ctx->pc = 0x1BA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5E8u;
        // 0x1ba5ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA5E8u, 0x1BA5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA5F0u;
label_1ba5f0:
    // 0x1ba5f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ba5f4:
    // 0x1ba5f4: 0xae4201dc  sw          $v0, 0x1DC($s2)
    ctx->pc = 0x1ba5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 2));
label_1ba5f8:
    // 0x1ba5f8: 0x10000035  b           . + 4 + (0x35 << 2)
label_1ba5fc:
    if (ctx->pc == 0x1BA5FCu) {
        ctx->pc = 0x1BA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5F8u;
        // 0x1ba5fc: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA600u;
        goto label_1ba600;
    }
    ctx->pc = 0x1BA5F8u;
    {
        const bool branch_taken_0x1ba5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5F8u;
        // 0x1ba5fc: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5f8) {
            ctx->pc = 0x1BA6D0u;
            goto label_1ba6d0;
        }
    }
    ctx->pc = 0x1BA600u;
label_1ba600:
    // 0x1ba600: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba604:
    if (ctx->pc == 0x1BA604u) {
        ctx->pc = 0x1BA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA600u;
        // 0x1ba604: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA608u;
        goto label_1ba608;
    }
    ctx->pc = 0x1BA600u;
    {
        const bool branch_taken_0x1ba600 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA600u;
        // 0x1ba604: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba600) {
            ctx->pc = 0x1BA61Cu;
            goto label_1ba61c;
        }
    }
    ctx->pc = 0x1BA608u;
label_1ba608:
    // 0x1ba608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba60c:
    // 0x1ba60c: 0x0  nop
    ctx->pc = 0x1ba60cu;
    // NOP
label_1ba610:
    // 0x1ba610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba614:
    // 0x1ba614: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ba618:
    if (ctx->pc == 0x1BA618u) {
        ctx->pc = 0x1BA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA614u;
        // 0x1ba618: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA61Cu;
        goto label_1ba61c;
    }
    ctx->pc = 0x1BA614u;
    {
        const bool branch_taken_0x1ba614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA614u;
        // 0x1ba618: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba614) {
            ctx->pc = 0x1BA63Cu;
            goto label_1ba63c;
        }
    }
    ctx->pc = 0x1BA61Cu;
label_1ba61c:
    // 0x1ba61c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ba61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1ba620:
    // 0x1ba620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba624:
    // 0x1ba624: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba628:
    // 0x1ba628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba62c:
    // 0x1ba62c: 0x0  nop
    ctx->pc = 0x1ba62cu;
    // NOP
label_1ba630:
    // 0x1ba630: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba634:
    // 0x1ba634: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ba634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ba638:
    // 0x1ba638: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba63c:
    // 0x1ba63c: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1ba63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1ba640:
    // 0x1ba640: 0xc440e6e4  lwc1        $f0, -0x191C($v0)
    ctx->pc = 0x1ba640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba644:
    // 0x1ba644: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba648:
    // 0x1ba648: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1ba648u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ba64c:
    // 0x1ba64c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba650:
    // 0x1ba650: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba654:
    // 0x1ba654: 0x40f809  jalr        $v0
label_1ba658:
    if (ctx->pc == 0x1BA658u) {
        ctx->pc = 0x1BA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA654u;
        // 0x1ba658: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA65Cu;
        goto label_1ba65c;
    }
    ctx->pc = 0x1BA654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA65Cu);
        ctx->pc = 0x1BA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA654u;
        // 0x1ba658: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA654u, 0x1BA65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA65Cu;
label_1ba65c:
    // 0x1ba65c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1ba660:
    if (ctx->pc == 0x1BA660u) {
        ctx->pc = 0x1BA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA65Cu;
        // 0x1ba660: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA664u;
        goto label_1ba664;
    }
    ctx->pc = 0x1BA65Cu;
    {
        const bool branch_taken_0x1ba65c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA65Cu;
        // 0x1ba660: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba65c) {
            ctx->pc = 0x1BA678u;
            goto label_1ba678;
        }
    }
    ctx->pc = 0x1BA664u;
label_1ba664:
    // 0x1ba664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba668:
    // 0x1ba668: 0x0  nop
    ctx->pc = 0x1ba668u;
    // NOP
label_1ba66c:
    // 0x1ba66c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba670:
    // 0x1ba670: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ba674:
    if (ctx->pc == 0x1BA674u) {
        ctx->pc = 0x1BA678u;
        goto label_1ba678;
    }
    ctx->pc = 0x1BA670u;
    {
        const bool branch_taken_0x1ba670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba670) {
            ctx->pc = 0x1BA690u;
            goto label_1ba690;
        }
    }
    ctx->pc = 0x1BA678u;
label_1ba678:
    // 0x1ba678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba67c:
    // 0x1ba67c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ba680:
    // 0x1ba680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba684:
    // 0x1ba684: 0x0  nop
    ctx->pc = 0x1ba684u;
    // NOP
label_1ba688:
    // 0x1ba688: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba68c:
    // 0x1ba68c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba690:
    // 0x1ba690: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ba690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba694:
    // 0x1ba694: 0x0  nop
    ctx->pc = 0x1ba694u;
    // NOP
label_1ba698:
    // 0x1ba698: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1ba69c:
    if (ctx->pc == 0x1BA69Cu) {
        ctx->pc = 0x1BA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA698u;
        // 0x1ba69c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6A0u;
        goto label_1ba6a0;
    }
    ctx->pc = 0x1BA698u;
    {
        const bool branch_taken_0x1ba698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA698u;
        // 0x1ba69c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba698) {
            ctx->pc = 0x1BA6D0u;
            goto label_1ba6d0;
        }
    }
    ctx->pc = 0x1BA6A0u;
label_1ba6a0:
    // 0x1ba6a0: 0x924201e0  lbu         $v0, 0x1E0($s2)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 480)));
label_1ba6a4:
    // 0x1ba6a4: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_1ba6a8:
    if (ctx->pc == 0x1BA6A8u) {
        ctx->pc = 0x1BA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6A4u;
        // 0x1ba6a8: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6ACu;
        goto label_1ba6ac;
    }
    ctx->pc = 0x1BA6A4u;
    {
        const bool branch_taken_0x1ba6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba6a4) {
            ctx->pc = 0x1BA6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA6A4u;
            // 0x1ba6a8: 0xa24301e0  sb          $v1, 0x1E0($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA6B4u;
            goto label_1ba6b4;
        }
    }
    ctx->pc = 0x1BA6ACu;
label_1ba6ac:
    // 0x1ba6ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ba6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba6b0:
    // 0x1ba6b0: 0xa24201e0  sb          $v0, 0x1E0($s2)
    ctx->pc = 0x1ba6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 480), (uint8_t)GPR_U32(ctx, 2));
label_1ba6b4:
    // 0x1ba6b4: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1ba6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1ba6b8:
    // 0x1ba6b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba6bc:
    // 0x1ba6bc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba6c0:
    // 0x1ba6c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba6c4:
    // 0x1ba6c4: 0x40f809  jalr        $v0
label_1ba6c8:
    if (ctx->pc == 0x1BA6C8u) {
        ctx->pc = 0x1BA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6C4u;
        // 0x1ba6c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6CCu;
        goto label_1ba6cc;
    }
    ctx->pc = 0x1BA6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA6CCu);
        ctx->pc = 0x1BA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6C4u;
        // 0x1ba6c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA6C4u, 0x1BA6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA6CCu;
label_1ba6cc:
    // 0x1ba6cc: 0xae4201dc  sw          $v0, 0x1DC($s2)
    ctx->pc = 0x1ba6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 2));
label_1ba6d0:
    // 0x1ba6d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1ba6d4:
    if (ctx->pc == 0x1BA6D4u) {
        ctx->pc = 0x1BA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6D0u;
        // 0x1ba6d4: 0x925301e0  lbu         $s3, 0x1E0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6D8u;
        goto label_1ba6d8;
    }
    ctx->pc = 0x1BA6D0u;
    {
        const bool branch_taken_0x1ba6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6D0u;
        // 0x1ba6d4: 0x925301e0  lbu         $s3, 0x1E0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6d0) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA6D8u;
label_1ba6d8:
    // 0x1ba6d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ba6dc:
    // 0x1ba6dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ba6e0:
    // 0x1ba6e0: 0xc05e602  jal         func_179808
label_1ba6e4:
    if (ctx->pc == 0x1BA6E4u) {
        ctx->pc = 0x1BA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6E0u;
        // 0x1ba6e4: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6E8u;
        goto label_1ba6e8;
    }
    ctx->pc = 0x1BA6E0u;
    SET_GPR_U32(ctx, 31, 0x1BA6E8u);
    ctx->pc = 0x1BA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6E0u;
    // 0x1ba6e4: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1BA6E0u, 0x1BA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6E8u;
label_1ba6e8:
    // 0x1ba6e8: 0x6ba80247  ldl         $t0, 0x247($sp)
    ctx->pc = 0x1ba6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ba6ec:
    // 0x1ba6ec: 0x6fa80240  ldr         $t0, 0x240($sp)
    ctx->pc = 0x1ba6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ba6f0:
    // 0x1ba6f0: 0x6ba9024f  ldl         $t1, 0x24F($sp)
    ctx->pc = 0x1ba6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1ba6f4:
    // 0x1ba6f4: 0x6fa90248  ldr         $t1, 0x248($sp)
    ctx->pc = 0x1ba6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1ba6f8:
    // 0x1ba6f8: 0xb3a80217  sdl         $t0, 0x217($sp)
    ctx->pc = 0x1ba6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba6fc:
    // 0x1ba6fc: 0xb7a80210  sdr         $t0, 0x210($sp)
    ctx->pc = 0x1ba6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba700:
    // 0x1ba700: 0xb3a9021f  sdl         $t1, 0x21F($sp)
    ctx->pc = 0x1ba700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba704:
    // 0x1ba704: 0xb7a90218  sdr         $t1, 0x218($sp)
    ctx->pc = 0x1ba704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ba708:
    // 0x1ba708: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ba70c:
    if (ctx->pc == 0x1BA70Cu) {
        ctx->pc = 0x1BA710u;
        goto label_1ba710;
    }
    ctx->pc = 0x1BA708u;
    {
        const bool branch_taken_0x1ba708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba708) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA710u;
label_1ba710:
    // 0x1ba710: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ba714:
    if (ctx->pc == 0x1BA714u) {
        ctx->pc = 0x1BA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA710u;
        // 0x1ba714: 0x8fb70680  lw          $s7, 0x680($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA718u;
        goto label_1ba718;
    }
    ctx->pc = 0x1BA710u;
    {
        const bool branch_taken_0x1ba710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA710u;
        // 0x1ba714: 0x8fb70680  lw          $s7, 0x680($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba710) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA718u;
label_1ba718:
    // 0x1ba718: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ba718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1ba71c:
    // 0x1ba71c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ba71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ba720:
    // 0x1ba720: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ba724:
    if (ctx->pc == 0x1BA724u) {
        ctx->pc = 0x1BA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA720u;
        // 0x1ba724: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA728u;
        goto label_1ba728;
    }
    ctx->pc = 0x1BA720u;
    {
        const bool branch_taken_0x1ba720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA720u;
        // 0x1ba724: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba720) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA728u;
label_1ba728:
    // 0x1ba728: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ba72c:
    if (ctx->pc == 0x1BA72Cu) {
        ctx->pc = 0x1BA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA728u;
        // 0x1ba72c: 0xafa00694  sw          $zero, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA730u;
        goto label_1ba730;
    }
    ctx->pc = 0x1BA728u;
    {
        const bool branch_taken_0x1ba728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA728u;
        // 0x1ba72c: 0xafa00694  sw          $zero, 0x694($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba728) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA730u;
label_1ba730:
    // 0x1ba730: 0x8fa4069c  lw          $a0, 0x69C($sp)
    ctx->pc = 0x1ba730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1692)));
label_1ba734:
    // 0x1ba734: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1ba734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_1ba738:
    // 0x1ba738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ba73c:
    if (ctx->pc == 0x1BA73Cu) {
        ctx->pc = 0x1BA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA738u;
        // 0x1ba73c: 0xafa40664  sw          $a0, 0x664($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1636), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA740u;
        goto label_1ba740;
    }
    ctx->pc = 0x1BA738u;
    {
        const bool branch_taken_0x1ba738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA738u;
        // 0x1ba73c: 0xafa40664  sw          $a0, 0x664($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1636), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba738) {
            ctx->pc = 0x1BA748u;
            goto label_1ba748;
        }
    }
    ctx->pc = 0x1BA740u;
label_1ba740:
    // 0x1ba740: 0x924201b1  lbu         $v0, 0x1B1($s2)
    ctx->pc = 0x1ba740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 433)));
label_1ba744:
    // 0x1ba744: 0xa3a20667  sb          $v0, 0x667($sp)
    ctx->pc = 0x1ba744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1639), (uint8_t)GPR_U32(ctx, 2));
label_1ba748:
    // 0x1ba748: 0x1260007e  beqz        $s3, . + 4 + (0x7E << 2)
label_1ba74c:
    if (ctx->pc == 0x1BA74Cu) {
        ctx->pc = 0x1BA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA748u;
        // 0x1ba74c: 0x8fa50694  lw          $a1, 0x694($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA750u;
        goto label_1ba750;
    }
    ctx->pc = 0x1BA748u;
    {
        const bool branch_taken_0x1ba748 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA748u;
        // 0x1ba74c: 0x8fa50694  lw          $a1, 0x694($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba748) {
            ctx->pc = 0x1BA944u;
            goto label_1ba944;
        }
    }
    ctx->pc = 0x1BA750u;
label_1ba750:
    // 0x1ba750: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1ba754:
    if (ctx->pc == 0x1BA754u) {
        ctx->pc = 0x1BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA750u;
        // 0x1ba754: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA758u;
        goto label_1ba758;
    }
    ctx->pc = 0x1BA750u;
    {
        const bool branch_taken_0x1ba750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA750u;
        // 0x1ba754: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba750) {
            ctx->pc = 0x1BA75Cu;
            goto label_1ba75c;
        }
    }
    ctx->pc = 0x1BA758u;
label_1ba758:
    // 0x1ba758: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x1ba758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
label_1ba75c:
    // 0x1ba75c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ba75cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1ba760:
    // 0x1ba760: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ba760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba764:
    // 0x1ba764: 0x24c649b8  addiu       $a2, $a2, 0x49B8
    ctx->pc = 0x1ba764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18872));
label_1ba768:
    // 0x1ba768: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ba768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ba76c:
    // 0x1ba76c: 0xc10ca04  jal         func_432810
label_1ba770:
    if (ctx->pc == 0x1BA770u) {
        ctx->pc = 0x1BA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA76Cu;
        // 0x1ba770: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA774u;
        goto label_1ba774;
    }
    ctx->pc = 0x1BA76Cu;
    SET_GPR_U32(ctx, 31, 0x1BA774u);
    ctx->pc = 0x1BA770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA76Cu;
    // 0x1ba770: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1BA76Cu, 0x1BA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA774u;
label_1ba774:
    // 0x1ba774: 0x8fa60698  lw          $a2, 0x698($sp)
    ctx->pc = 0x1ba774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1688)));
label_1ba778:
    // 0x1ba778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba77c:
    // 0x1ba77c: 0x14c30058  bne         $a2, $v1, . + 4 + (0x58 << 2)
label_1ba780:
    if (ctx->pc == 0x1BA780u) {
        ctx->pc = 0x1BA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA77Cu;
        // 0x1ba780: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA784u;
        goto label_1ba784;
    }
    ctx->pc = 0x1BA77Cu;
    {
        const bool branch_taken_0x1ba77c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA77Cu;
        // 0x1ba780: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba77c) {
            ctx->pc = 0x1BA8E0u;
            goto label_1ba8e0;
        }
    }
    ctx->pc = 0x1BA784u;
label_1ba784:
    // 0x1ba784: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ba784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ba788:
    // 0x1ba788: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ba78c:
    // 0x1ba78c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ba78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ba790:
    // 0x1ba790: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1ba794:
    // 0x1ba794: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1ba794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1ba798:
    // 0x1ba798: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1ba798u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_1ba79c:
    // 0x1ba79c: 0x60f809  jalr        $v1
label_1ba7a0:
    if (ctx->pc == 0x1BA7A0u) {
        ctx->pc = 0x1BA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA79Cu;
        // 0x1ba7a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7A4u;
        goto label_1ba7a4;
    }
    ctx->pc = 0x1BA79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BA7A4u);
        ctx->pc = 0x1BA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA79Cu;
        // 0x1ba7a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA79Cu, 0x1BA7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA7A4u;
label_1ba7a4:
    // 0x1ba7a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1ba7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba7a8:
    // 0x1ba7a8: 0x0  nop
    ctx->pc = 0x1ba7a8u;
    // NOP
label_1ba7ac:
    // 0x1ba7ac: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_1ba7b0:
    if (ctx->pc == 0x1BA7B0u) {
        ctx->pc = 0x1BA7B4u;
        goto label_1ba7b4;
    }
    ctx->pc = 0x1BA7ACu;
    {
        const bool branch_taken_0x1ba7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba7ac) {
            ctx->pc = 0x1BA820u;
            goto label_1ba820;
        }
    }
    ctx->pc = 0x1BA7B4u;
label_1ba7b4:
    // 0x1ba7b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ba7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ba7b8:
    // 0x1ba7b8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1ba7bc:
    // 0x1ba7bc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1ba7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1ba7c0:
    // 0x1ba7c0: 0x60f809  jalr        $v1
label_1ba7c4:
    if (ctx->pc == 0x1BA7C4u) {
        ctx->pc = 0x1BA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7C0u;
        // 0x1ba7c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7C8u;
        goto label_1ba7c8;
    }
    ctx->pc = 0x1BA7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BA7C8u);
        ctx->pc = 0x1BA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7C0u;
        // 0x1ba7c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA7C0u, 0x1BA7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA7C8u;
label_1ba7c8:
    // 0x1ba7c8: 0xc7a30214  lwc1        $f3, 0x214($sp)
    ctx->pc = 0x1ba7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba7cc:
    // 0x1ba7cc: 0xc7a40238  lwc1        $f4, 0x238($sp)
    ctx->pc = 0x1ba7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ba7d0:
    // 0x1ba7d0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1ba7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1ba7d4:
    // 0x1ba7d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ba7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ba7d8:
    // 0x1ba7d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba7dc:
    // 0x1ba7dc: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x1ba7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba7e0:
    // 0x1ba7e0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1ba7e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1ba7e4:
    // 0x1ba7e4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1ba7e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1ba7e8:
    // 0x1ba7e8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1ba7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ba7ec:
    // 0x1ba7ec: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1ba7ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ba7f0:
    // 0x1ba7f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ba7f4:
    // 0x1ba7f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ba7f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1ba7f8:
    // 0x1ba7f8: 0x0  nop
    ctx->pc = 0x1ba7f8u;
    // NOP
label_1ba7fc:
    // 0x1ba7fc: 0x46030503  div.s       $f20, $f0, $f3
    ctx->pc = 0x1ba7fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_1ba800:
    // 0x1ba800: 0x4605a036  c.le.s      $f20, $f5
    ctx->pc = 0x1ba800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba804:
    // 0x1ba804: 0x0  nop
    ctx->pc = 0x1ba804u;
    // NOP
label_1ba808:
    // 0x1ba808: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1ba80c:
    if (ctx->pc == 0x1BA80Cu) {
        ctx->pc = 0x1BA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA808u;
        // 0x1ba80c: 0x46002d06  mov.s       $f20, $f5 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA810u;
        goto label_1ba810;
    }
    ctx->pc = 0x1BA808u;
    {
        const bool branch_taken_0x1ba808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba808) {
            ctx->pc = 0x1BA80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA808u;
            // 0x1ba80c: 0x46002d06  mov.s       $f20, $f5 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA810u;
            goto label_1ba810;
        }
    }
    ctx->pc = 0x1BA810u;
label_1ba810:
    // 0x1ba810: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1ba810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba814:
    // 0x1ba814: 0x0  nop
    ctx->pc = 0x1ba814u;
    // NOP
label_1ba818:
    // 0x1ba818: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1ba81c:
    if (ctx->pc == 0x1BA81Cu) {
        ctx->pc = 0x1BA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA818u;
        // 0x1ba81c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA820u;
        goto label_1ba820;
    }
    ctx->pc = 0x1BA818u;
    {
        const bool branch_taken_0x1ba818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba818) {
            ctx->pc = 0x1BA81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA818u;
            // 0x1ba81c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA820u;
            goto label_1ba820;
        }
    }
    ctx->pc = 0x1BA820u;
label_1ba820:
    // 0x1ba820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ba820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba824:
    // 0x1ba824: 0x0  nop
    ctx->pc = 0x1ba824u;
    // NOP
label_1ba828:
    // 0x1ba828: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1ba828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ba82c:
    // 0x1ba82c: 0x0  nop
    ctx->pc = 0x1ba82cu;
    // NOP
label_1ba830:
    // 0x1ba830: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_1ba834:
    if (ctx->pc == 0x1BA834u) {
        ctx->pc = 0x1BA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA830u;
        // 0x1ba834: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA838u;
        goto label_1ba838;
    }
    ctx->pc = 0x1BA830u;
    {
        const bool branch_taken_0x1ba830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA830u;
        // 0x1ba834: 0x27b10210  addiu       $s1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba830) {
            ctx->pc = 0x1BA8E0u;
            goto label_1ba8e0;
        }
    }
    ctx->pc = 0x1BA838u;
label_1ba838:
    // 0x1ba838: 0x8fa70690  lw          $a3, 0x690($sp)
    ctx->pc = 0x1ba838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_1ba83c:
    // 0x1ba83c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_1ba840:
    if (ctx->pc == 0x1BA840u) {
        ctx->pc = 0x1BA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA83Cu;
        // 0x1ba840: 0x33c700ff  andi        $a3, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA844u;
        goto label_1ba844;
    }
    ctx->pc = 0x1BA83Cu;
    {
        const bool branch_taken_0x1ba83c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA83Cu;
        // 0x1ba840: 0x33c700ff  andi        $a3, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba83c) {
            ctx->pc = 0x1BA850u;
            goto label_1ba850;
        }
    }
    ctx->pc = 0x1BA844u;
label_1ba844:
    // 0x1ba844: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x1ba844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_1ba848:
    // 0x1ba848: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ba84c:
    // 0x1ba84c: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x1ba84cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1ba850:
    // 0x1ba850: 0x8fa80694  lw          $t0, 0x694($sp)
    ctx->pc = 0x1ba850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
label_1ba854:
    // 0x1ba854: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_1ba858:
    if (ctx->pc == 0x1BA858u) {
        ctx->pc = 0x1BA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA854u;
        // 0x1ba858: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA85Cu;
        goto label_1ba85c;
    }
    ctx->pc = 0x1BA854u;
    {
        const bool branch_taken_0x1ba854 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA854u;
        // 0x1ba858: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba854) {
            ctx->pc = 0x1BA874u;
            goto label_1ba874;
        }
    }
    ctx->pc = 0x1BA85Cu;
label_1ba85c:
    // 0x1ba85c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba860:
    // 0x1ba860: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x1ba860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba864:
    // 0x1ba864: 0xc441e6d4  lwc1        $f1, -0x192C($v0)
    ctx->pc = 0x1ba864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba868:
    // 0x1ba868: 0x8e570190  lw          $s7, 0x190($s2)
    ctx->pc = 0x1ba868u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_1ba86c:
    // 0x1ba86c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ba870:
    // 0x1ba870: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x1ba870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_1ba874:
    // 0x1ba874: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x1ba874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1ba878:
    // 0x1ba878: 0x8e490198  lw          $t1, 0x198($s2)
    ctx->pc = 0x1ba878u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1ba87c:
    // 0x1ba87c: 0x8fa40664  lw          $a0, 0x664($sp)
    ctx->pc = 0x1ba87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1636)));
label_1ba880:
    // 0x1ba880: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x1ba880u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_1ba884:
    // 0x1ba884: 0xc7ac0220  lwc1        $f12, 0x220($sp)
    ctx->pc = 0x1ba884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ba888:
    // 0x1ba888: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ba888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba88c:
    // 0x1ba88c: 0xc7ad0228  lwc1        $f13, 0x228($sp)
    ctx->pc = 0x1ba88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ba890:
    // 0x1ba890: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1ba890u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1ba894:
    // 0x1ba894: 0x924a018c  lbu         $t2, 0x18C($s2)
    ctx->pc = 0x1ba894u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 396)));
label_1ba898:
    // 0x1ba898: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1ba898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ba89c:
    // 0x1ba89c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ba89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8a0:
    // 0x1ba8a0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x1ba8a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_1ba8a4:
    // 0x1ba8a4: 0xc05e70c  jal         func_179C30
label_1ba8a8:
    if (ctx->pc == 0x1BA8A8u) {
        ctx->pc = 0x1BA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8A4u;
        // 0x1ba8a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8ACu;
        goto label_1ba8ac;
    }
    ctx->pc = 0x1BA8A4u;
    SET_GPR_U32(ctx, 31, 0x1BA8ACu);
    ctx->pc = 0x1BA8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8A4u;
    // 0x1ba8a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C30u, 0x1BA8A4u, 0x1BA8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8ACu;
label_1ba8ac:
    // 0x1ba8ac: 0x8fa90694  lw          $t1, 0x694($sp)
    ctx->pc = 0x1ba8acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
label_1ba8b0:
    // 0x1ba8b0: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
label_1ba8b4:
    if (ctx->pc == 0x1BA8B4u) {
        ctx->pc = 0x1BA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8B0u;
        // 0x1ba8b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8B8u;
        goto label_1ba8b8;
    }
    ctx->pc = 0x1BA8B0u;
    {
        const bool branch_taken_0x1ba8b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8B0u;
        // 0x1ba8b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8b0) {
            ctx->pc = 0x1BA8DCu;
            goto label_1ba8dc;
        }
    }
    ctx->pc = 0x1BA8B8u;
label_1ba8b8:
    // 0x1ba8b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ba8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ba8bc:
    // 0x1ba8bc: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x1ba8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba8c0:
    // 0x1ba8c0: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x1ba8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ba8c4:
    // 0x1ba8c4: 0xc442e6d8  lwc1        $f2, -0x1928($v0)
    ctx->pc = 0x1ba8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ba8c8:
    // 0x1ba8c8: 0xc463e6d4  lwc1        $f3, -0x192C($v1)
    ctx->pc = 0x1ba8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ba8cc:
    // 0x1ba8cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ba8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ba8d0:
    // 0x1ba8d0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1ba8d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1ba8d4:
    // 0x1ba8d4: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x1ba8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1ba8d8:
    // 0x1ba8d8: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x1ba8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_1ba8dc:
    // 0x1ba8dc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1ba8dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba8e0:
    // 0x1ba8e0: 0x8fa20690  lw          $v0, 0x690($sp)
    ctx->pc = 0x1ba8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1680)));
label_1ba8e4:
    // 0x1ba8e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ba8e8:
    if (ctx->pc == 0x1BA8E8u) {
        ctx->pc = 0x1BA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8E4u;
        // 0x1ba8e8: 0x33d000ff  andi        $s0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8ECu;
        goto label_1ba8ec;
    }
    ctx->pc = 0x1BA8E4u;
    {
        const bool branch_taken_0x1ba8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8E4u;
        // 0x1ba8e8: 0x33d000ff  andi        $s0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8e4) {
            ctx->pc = 0x1BA8F8u;
            goto label_1ba8f8;
        }
    }
    ctx->pc = 0x1BA8ECu;
label_1ba8ec:
    // 0x1ba8ec: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x1ba8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_1ba8f0:
    // 0x1ba8f0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1ba8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ba8f4:
    // 0x1ba8f4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1ba8f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1ba8f8:
    // 0x1ba8f8: 0xc10c3ac  jal         func_430EB0
label_1ba8fc:
    if (ctx->pc == 0x1BA8FCu) {
        ctx->pc = 0x1BA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8F8u;
        // 0x1ba8fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA900u;
        goto label_1ba900;
    }
    ctx->pc = 0x1BA8F8u;
    SET_GPR_U32(ctx, 31, 0x1BA900u);
    ctx->pc = 0x1BA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8F8u;
    // 0x1ba8fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BA8F8u, 0x1BA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA900u;
label_1ba900:
    // 0x1ba900: 0x8e490198  lw          $t1, 0x198($s2)
    ctx->pc = 0x1ba900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_1ba904:
    // 0x1ba904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ba904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba908:
    // 0x1ba908: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ba908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba90c:
    // 0x1ba90c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ba90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba910:
    // 0x1ba910: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ba914:
    // 0x1ba914: 0xc05e656  jal         func_179958
label_1ba918:
    if (ctx->pc == 0x1BA918u) {
        ctx->pc = 0x1BA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA914u;
        // 0x1ba918: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA91Cu;
        goto label_1ba91c;
    }
    ctx->pc = 0x1BA914u;
    SET_GPR_U32(ctx, 31, 0x1BA91Cu);
    ctx->pc = 0x1BA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA914u;
    // 0x1ba918: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179958u, 0x1BA914u, 0x1BA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA91Cu;
label_1ba91c:
    // 0x1ba91c: 0x8fa30694  lw          $v1, 0x694($sp)
    ctx->pc = 0x1ba91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1684)));
label_1ba920:
    // 0x1ba920: 0x1060fd17  beqz        $v1, . + 4 + (-0x2E9 << 2)
label_1ba924:
    if (ctx->pc == 0x1BA924u) {
        ctx->pc = 0x1BA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA920u;
        // 0x1ba924: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA928u;
        goto label_1ba928;
    }
    ctx->pc = 0x1BA920u;
    {
        const bool branch_taken_0x1ba920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA920u;
        // 0x1ba924: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba920) {
            ctx->pc = 0x1B9D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9d80;
        }
    }
    ctx->pc = 0x1BA928u;
label_1ba928:
    // 0x1ba928: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ba928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1ba92c:
    // 0x1ba92c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ba92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ba930:
    // 0x1ba930: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ba934:
    if (ctx->pc == 0x1BA934u) {
        ctx->pc = 0x1BA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA930u;
        // 0x1ba934: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA938u;
        goto label_1ba938;
    }
    ctx->pc = 0x1BA930u;
    {
        const bool branch_taken_0x1ba930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA930u;
        // 0x1ba934: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba930) {
            ctx->pc = 0x1BA944u;
            goto label_1ba944;
        }
    }
    ctx->pc = 0x1BA938u;
label_1ba938:
    // 0x1ba938: 0x2e220042  sltiu       $v0, $s1, 0x42
    ctx->pc = 0x1ba938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
label_1ba93c:
    // 0x1ba93c: 0x1440fd1a  bnez        $v0, . + 4 + (-0x2E6 << 2)
label_1ba940:
    if (ctx->pc == 0x1BA940u) {
        ctx->pc = 0x1BA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA93Cu;
        // 0x1ba940: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA944u;
        goto label_1ba944;
    }
    ctx->pc = 0x1BA93Cu;
    {
        const bool branch_taken_0x1ba93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA93Cu;
        // 0x1ba940: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba93c) {
            ctx->pc = 0x1B9DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9da8;
        }
    }
    ctx->pc = 0x1BA944u;
label_1ba944:
    // 0x1ba944: 0x8fb406a8  lw          $s4, 0x6A8($sp)
    ctx->pc = 0x1ba944u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1704)));
label_1ba948:
    // 0x1ba948: 0x8fa406a0  lw          $a0, 0x6A0($sp)
    ctx->pc = 0x1ba948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1696)));
label_1ba94c:
    // 0x1ba94c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1ba94cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba950:
    // 0x1ba950: 0x8e430178  lw          $v1, 0x178($s2)
    ctx->pc = 0x1ba950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_1ba954:
    // 0x1ba954: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1ba954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1ba958:
    // 0x1ba958: 0x3842003c  xori        $v0, $v0, 0x3C
    ctx->pc = 0x1ba958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)60);
label_1ba95c:
    // 0x1ba95c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1ba95cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1ba960:
    // 0x1ba960: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_1ba964:
    if (ctx->pc == 0x1BA964u) {
        ctx->pc = 0x1BA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA960u;
        // 0x1ba964: 0xafa406a0  sw          $a0, 0x6A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA968u;
        goto label_1ba968;
    }
    ctx->pc = 0x1BA960u;
    {
        const bool branch_taken_0x1ba960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA960u;
        // 0x1ba964: 0xafa406a0  sw          $a0, 0x6A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba960) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1BA968u;
label_1ba968:
    // 0x1ba968: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ba968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ba96c:
    // 0x1ba96c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ba96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ba970:
    // 0x1ba970: 0xc10d74c  jal         func_435D30
label_1ba974:
    if (ctx->pc == 0x1BA974u) {
        ctx->pc = 0x1BA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA970u;
        // 0x1ba974: 0x24a549c0  addiu       $a1, $a1, 0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA978u;
        goto label_1ba978;
    }
    ctx->pc = 0x1BA970u;
    SET_GPR_U32(ctx, 31, 0x1BA978u);
    ctx->pc = 0x1BA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA970u;
    // 0x1ba974: 0x24a549c0  addiu       $a1, $a1, 0x49C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1BA970u, 0x1BA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA978u;
label_1ba978:
    // 0x1ba978: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_1ba97c:
    if (ctx->pc == 0x1BA97Cu) {
        ctx->pc = 0x1BA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA978u;
        // 0x1ba97c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA980u;
        goto label_1ba980;
    }
    ctx->pc = 0x1BA978u;
    {
        const bool branch_taken_0x1ba978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA978u;
        // 0x1ba97c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba978) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1BA980u;
label_1ba980:
    // 0x1ba980: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ba980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ba984:
    // 0x1ba984: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1ba984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1ba988:
    // 0x1ba988: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x1ba988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1ba98c:
    // 0x1ba98c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ba98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ba990:
    // 0x1ba990: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x1ba990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_1ba994:
    // 0x1ba994: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ba994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba998:
    // 0x1ba998: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba99c:
    // 0x1ba99c: 0x40f809  jalr        $v0
label_1ba9a0:
    if (ctx->pc == 0x1BA9A0u) {
        ctx->pc = 0x1BA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA99Cu;
        // 0x1ba9a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9A4u;
        goto label_1ba9a4;
    }
    ctx->pc = 0x1BA99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA9A4u);
        ctx->pc = 0x1BA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA99Cu;
        // 0x1ba9a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA99Cu, 0x1BA9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA9A4u;
label_1ba9a4:
    // 0x1ba9a4: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1ba9a4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ba9a8:
    // 0x1ba9a8: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_1ba9ac:
    if (ctx->pc == 0x1BA9ACu) {
        ctx->pc = 0x1BA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9A8u;
        // 0x1ba9ac: 0x8e24b8b8  lw          $a0, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9B0u;
        goto label_1ba9b0;
    }
    ctx->pc = 0x1BA9A8u;
    {
        const bool branch_taken_0x1ba9a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9A8u;
        // 0x1ba9ac: 0x8e24b8b8  lw          $a0, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9a8) {
            ctx->pc = 0x1BA9F8u;
            goto label_1ba9f8;
        }
    }
    ctx->pc = 0x1BA9B0u;
label_1ba9b0:
    // 0x1ba9b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ba9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ba9b4:
    // 0x1ba9b4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1ba9b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ba9b8:
    // 0x1ba9b8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ba9bc:
    // 0x1ba9bc: 0x40f809  jalr        $v0
label_1ba9c0:
    if (ctx->pc == 0x1BA9C0u) {
        ctx->pc = 0x1BA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9BCu;
        // 0x1ba9c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9C4u;
        goto label_1ba9c4;
    }
    ctx->pc = 0x1BA9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA9C4u);
        ctx->pc = 0x1BA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9BCu;
        // 0x1ba9c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA9BCu, 0x1BA9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA9C4u;
label_1ba9c4:
    // 0x1ba9c4: 0x2442014e  addiu       $v0, $v0, 0x14E
    ctx->pc = 0x1ba9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 334));
label_1ba9c8:
    // 0x1ba9c8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ba9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ba9cc:
    // 0x1ba9cc: 0xae420174  sw          $v0, 0x174($s2)
    ctx->pc = 0x1ba9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 2));
label_1ba9d0:
    // 0x1ba9d0: 0x24a549c8  addiu       $a1, $a1, 0x49C8
    ctx->pc = 0x1ba9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18888));
label_1ba9d4:
    // 0x1ba9d4: 0xc10d74c  jal         func_435D30
label_1ba9d8:
    if (ctx->pc == 0x1BA9D8u) {
        ctx->pc = 0x1BA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9D4u;
        // 0x1ba9d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9DCu;
        goto label_1ba9dc;
    }
    ctx->pc = 0x1BA9D4u;
    SET_GPR_U32(ctx, 31, 0x1BA9DCu);
    ctx->pc = 0x1BA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9D4u;
    // 0x1ba9d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1BA9D4u, 0x1BA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9DCu;
label_1ba9dc:
    // 0x1ba9dc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1ba9e0:
    if (ctx->pc == 0x1BA9E0u) {
        ctx->pc = 0x1BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9DCu;
        // 0x1ba9e0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9E4u;
        goto label_1ba9e4;
    }
    ctx->pc = 0x1BA9DCu;
    {
        const bool branch_taken_0x1ba9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9DCu;
        // 0x1ba9e0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9dc) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1BA9E4u;
label_1ba9e4:
    // 0x1ba9e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ba9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ba9e8:
    // 0x1ba9e8: 0xc10d74c  jal         func_435D30
label_1ba9ec:
    if (ctx->pc == 0x1BA9ECu) {
        ctx->pc = 0x1BA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9E8u;
        // 0x1ba9ec: 0x24a549d0  addiu       $a1, $a1, 0x49D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9F0u;
        goto label_1ba9f0;
    }
    ctx->pc = 0x1BA9E8u;
    SET_GPR_U32(ctx, 31, 0x1BA9F0u);
    ctx->pc = 0x1BA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9E8u;
    // 0x1ba9ec: 0x24a549d0  addiu       $a1, $a1, 0x49D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1BA9E8u, 0x1BA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9F0u;
label_1ba9f0:
    // 0x1ba9f0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1ba9f4:
    if (ctx->pc == 0x1BA9F4u) {
        ctx->pc = 0x1BA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9F0u;
        // 0x1ba9f4: 0x2a80b  movn        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA9F8u;
        goto label_1ba9f8;
    }
    ctx->pc = 0x1BA9F0u;
    {
        const bool branch_taken_0x1ba9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9F0u;
        // 0x1ba9f4: 0x2a80b  movn        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9f0) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1BA9F8u;
label_1ba9f8:
    // 0x1ba9f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ba9fc:
    // 0x1ba9fc: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1ba9fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1baa00:
    // 0x1baa00: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1baa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1baa04:
    // 0x1baa04: 0x40f809  jalr        $v0
label_1baa08:
    if (ctx->pc == 0x1BAA08u) {
        ctx->pc = 0x1BAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA04u;
        // 0x1baa08: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA0Cu;
        goto label_1baa0c;
    }
    ctx->pc = 0x1BAA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAA0Cu);
        ctx->pc = 0x1BAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA04u;
        // 0x1baa08: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAA04u, 0x1BAA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAA0Cu;
label_1baa0c:
    // 0x1baa0c: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1baa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1baa10:
    // 0x1baa10: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1baa10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1baa14:
    // 0x1baa14: 0x2c63014f  sltiu       $v1, $v1, 0x14F
    ctx->pc = 0x1baa14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)335) ? 1 : 0);
label_1baa18:
    // 0x1baa18: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_1baa1c:
    if (ctx->pc == 0x1BAA1Cu) {
        ctx->pc = 0x1BAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA18u;
        // 0x1baa1c: 0x8e24b8b8  lw          $a0, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA20u;
        goto label_1baa20;
    }
    ctx->pc = 0x1BAA18u;
    {
        const bool branch_taken_0x1baa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA18u;
        // 0x1baa1c: 0x8e24b8b8  lw          $a0, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa18) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1BAA20u;
label_1baa20:
    // 0x1baa20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1baa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1baa24:
    // 0x1baa24: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1baa28:
    // 0x1baa28: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1baa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1baa2c:
    // 0x1baa2c: 0x40f809  jalr        $v0
label_1baa30:
    if (ctx->pc == 0x1BAA30u) {
        ctx->pc = 0x1BAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA2Cu;
        // 0x1baa30: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA34u;
        goto label_1baa34;
    }
    ctx->pc = 0x1BAA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAA34u);
        ctx->pc = 0x1BAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA2Cu;
        // 0x1baa30: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAA2Cu, 0x1BAA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAA34u;
label_1baa34:
    // 0x1baa34: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1baa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1baa38:
    // 0x1baa38: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1baa38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1baa3c:
    // 0x1baa3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1baa40:
    if (ctx->pc == 0x1BAA40u) {
        ctx->pc = 0x1BAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA3Cu;
        // 0x1baa40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA44u;
        goto label_1baa44;
    }
    ctx->pc = 0x1BAA3Cu;
    {
        const bool branch_taken_0x1baa3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA3Cu;
        // 0x1baa40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa3c) {
            ctx->pc = 0x1BAA58u;
            goto label_1baa58;
        }
    }
    ctx->pc = 0x1BAA44u;
label_1baa44:
    // 0x1baa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baa48:
    // 0x1baa48: 0x0  nop
    ctx->pc = 0x1baa48u;
    // NOP
label_1baa4c:
    // 0x1baa4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1baa50:
    // 0x1baa50: 0x10000007  b           . + 4 + (0x7 << 2)
label_1baa54:
    if (ctx->pc == 0x1BAA54u) {
        ctx->pc = 0x1BAA58u;
        goto label_1baa58;
    }
    ctx->pc = 0x1BAA50u;
    {
        const bool branch_taken_0x1baa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa50) {
            ctx->pc = 0x1BAA70u;
            goto label_1baa70;
        }
    }
    ctx->pc = 0x1BAA58u;
label_1baa58:
    // 0x1baa58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1baa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1baa5c:
    // 0x1baa5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1baa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1baa60:
    // 0x1baa60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baa64:
    // 0x1baa64: 0x0  nop
    ctx->pc = 0x1baa64u;
    // NOP
label_1baa68:
    // 0x1baa68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baa68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1baa6c:
    // 0x1baa6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1baa6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1baa70:
    // 0x1baa70: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x1baa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_1baa74:
    // 0x1baa74: 0x34213730  ori         $at, $at, 0x3730
    ctx->pc = 0x1baa74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14128);
label_1baa78:
    // 0x1baa78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1baa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1baa7c:
    // 0x1baa7c: 0x27a30664  addiu       $v1, $sp, 0x664
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1636));
label_1baa80:
    // 0x1baa80: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1baa80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1baa84:
    // 0x1baa84: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1baa84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1baa88:
    // 0x1baa88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1baa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1baa8c:
    // 0x1baa8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1baa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1baa90:
    // 0x1baa90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1baa90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1baa94:
    // 0x1baa94: 0x0  nop
    ctx->pc = 0x1baa94u;
    // NOP
label_1baa98:
    // 0x1baa98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1baa98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1baa9c:
    // 0x1baa9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1baa9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1baaa0:
    // 0x1baaa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1baaa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1baaa4:
    // 0x1baaa4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1baaa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1baaa8:
    // 0x1baaa8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1baaa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1baaac:
    // 0x1baaac: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1baaacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1baab0:
    // 0x1baab0: 0x16a0fb9f  bnez        $s5, . + 4 + (-0x461 << 2)
label_1baab4:
    if (ctx->pc == 0x1BAAB4u) {
        ctx->pc = 0x1BAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAB0u;
        // 0x1baab4: 0x8fa506a0  lw          $a1, 0x6A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAB8u;
        goto label_1baab8;
    }
    ctx->pc = 0x1BAAB0u;
    {
        const bool branch_taken_0x1baab0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAB0u;
        // 0x1baab4: 0x8fa506a0  lw          $a1, 0x6A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baab0) {
            ctx->pc = 0x1B9930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9930;
        }
    }
    ctx->pc = 0x1BAAB8u;
label_1baab8:
    // 0x1baab8: 0x8fa206a4  lw          $v0, 0x6A4($sp)
    ctx->pc = 0x1baab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1700)));
label_1baabc:
    // 0x1baabc: 0x8fa30684  lw          $v1, 0x684($sp)
    ctx->pc = 0x1baabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1668)));
label_1baac0:
    // 0x1baac0: 0xafa20698  sw          $v0, 0x698($sp)
    ctx->pc = 0x1baac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1688), GPR_U32(ctx, 2));
label_1baac4:
    // 0x1baac4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1baac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1baac8:
    // 0x1baac8: 0x1440fb37  bnez        $v0, . + 4 + (-0x4C9 << 2)
label_1baacc:
    if (ctx->pc == 0x1BAACCu) {
        ctx->pc = 0x1BAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAC8u;
        // 0x1baacc: 0xafa00688  sw          $zero, 0x688($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAD0u;
        goto label_1baad0;
    }
    ctx->pc = 0x1BAAC8u;
    {
        const bool branch_taken_0x1baac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAC8u;
        // 0x1baacc: 0xafa00688  sw          $zero, 0x688($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baac8) {
            ctx->pc = 0x1B97A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b97a8;
        }
    }
    ctx->pc = 0x1BAAD0u;
label_1baad0:
    // 0x1baad0: 0x8fa4067c  lw          $a0, 0x67C($sp)
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1660)));
label_1baad4:
    // 0x1baad4: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_1baad8:
    if (ctx->pc == 0x1BAAD8u) {
        ctx->pc = 0x1BAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAD4u;
        // 0x1baad8: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAADCu;
        goto label_1baadc;
    }
    ctx->pc = 0x1BAAD4u;
    {
        const bool branch_taken_0x1baad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baad4) {
            ctx->pc = 0x1BAAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAAD4u;
            // 0x1baad8: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAAF0u;
            goto label_1baaf0;
        }
    }
    ctx->pc = 0x1BAADCu;
label_1baadc:
    // 0x1baadc: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x1baadcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1baae0:
    // 0x1baae0: 0x0  nop
    ctx->pc = 0x1baae0u;
    // NOP
label_1baae4:
    // 0x1baae4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1baae8:
    if (ctx->pc == 0x1BAAE8u) {
        ctx->pc = 0x1BAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAE4u;
        // 0x1baae8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAECu;
        goto label_1baaec;
    }
    ctx->pc = 0x1BAAE4u;
    {
        const bool branch_taken_0x1baae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1baae4) {
            ctx->pc = 0x1BAAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAAE4u;
            // 0x1baae8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAAF4u;
            goto label_1baaf4;
        }
    }
    ctx->pc = 0x1BAAECu;
label_1baaec:
    // 0x1baaec: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x1baaecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_1baaf0:
    // 0x1baaf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1baaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1baaf4:
    // 0x1baaf4: 0x8fa406ac  lw          $a0, 0x6AC($sp)
    ctx->pc = 0x1baaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
label_1baaf8:
    // 0x1baaf8: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1baafc:
    // 0x1baafc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1baafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1bab00:
    // 0x1bab00: 0x60f809  jalr        $v1
label_1bab04:
    if (ctx->pc == 0x1BAB04u) {
        ctx->pc = 0x1BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB00u;
        // 0x1bab04: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB08u;
        goto label_1bab08;
    }
    ctx->pc = 0x1BAB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BAB08u);
        ctx->pc = 0x1BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB00u;
        // 0x1bab04: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAB00u, 0x1BAB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAB08u;
label_1bab08:
    // 0x1bab08: 0xc7a20214  lwc1        $f2, 0x214($sp)
    ctx->pc = 0x1bab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bab0c:
    // 0x1bab0c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1bab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_1bab10:
    // 0x1bab10: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x1bab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1bab14:
    // 0x1bab14: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x1bab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bab18:
    // 0x1bab18: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1bab18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1bab1c:
    // 0x1bab1c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x1bab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bab20:
    // 0x1bab20: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x1bab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_1bab24:
    // 0x1bab24: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bab24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1bab28:
    // 0x1bab28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1bab2c:
    if (ctx->pc == 0x1BAB2Cu) {
        ctx->pc = 0x1BAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB28u;
        // 0x1bab2c: 0xe7a1023c  swc1        $f1, 0x23C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB30u;
        goto label_1bab30;
    }
    ctx->pc = 0x1BAB28u;
    {
        const bool branch_taken_0x1bab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB28u;
        // 0x1bab2c: 0xe7a1023c  swc1        $f1, 0x23C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab28) {
            ctx->pc = 0x1BAB44u;
            goto label_1bab44;
        }
    }
    ctx->pc = 0x1BAB30u;
label_1bab30:
    // 0x1bab30: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1bab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bab34:
    // 0x1bab34: 0x46160041  sub.s       $f1, $f0, $f22
    ctx->pc = 0x1bab34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_1bab38:
    // 0x1bab38: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x1bab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_1bab3c:
    // 0x1bab3c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1bab40:
    if (ctx->pc == 0x1BAB40u) {
        ctx->pc = 0x1BAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB3Cu;
        // 0x1bab40: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB44u;
        goto label_1bab44;
    }
    ctx->pc = 0x1BAB3Cu;
    {
        const bool branch_taken_0x1bab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB3Cu;
        // 0x1bab40: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab3c) {
            ctx->pc = 0x1BAB80u;
            goto label_1bab80;
        }
    }
    ctx->pc = 0x1BAB44u;
label_1bab44:
    // 0x1bab44: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x1bab44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
label_1bab48:
    // 0x1bab48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bab4c:
    if (ctx->pc == 0x1BAB4Cu) {
        ctx->pc = 0x1BAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB48u;
        // 0x1bab4c: 0xc7a10230  lwc1        $f1, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB50u;
        goto label_1bab50;
    }
    ctx->pc = 0x1BAB48u;
    {
        const bool branch_taken_0x1bab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB48u;
        // 0x1bab4c: 0xc7a10230  lwc1        $f1, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab48) {
            ctx->pc = 0x1BAB74u;
            goto label_1bab74;
        }
    }
    ctx->pc = 0x1BAB50u;
label_1bab50:
    // 0x1bab50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1bab54:
    // 0x1bab54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bab54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bab58:
    // 0x1bab58: 0x0  nop
    ctx->pc = 0x1bab58u;
    // NOP
label_1bab5c:
    // 0x1bab5c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1bab5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_1bab60:
    // 0x1bab60: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1bab60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bab64:
    // 0x1bab64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bab64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bab68:
    // 0x1bab68: 0xe7a20238  swc1        $f2, 0x238($sp)
    ctx->pc = 0x1bab68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_1bab6c:
    // 0x1bab6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bab70:
    if (ctx->pc == 0x1BAB70u) {
        ctx->pc = 0x1BAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB6Cu;
        // 0x1bab70: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB74u;
        goto label_1bab74;
    }
    ctx->pc = 0x1BAB6Cu;
    {
        const bool branch_taken_0x1bab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB6Cu;
        // 0x1bab70: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab6c) {
            ctx->pc = 0x1BAB80u;
            goto label_1bab80;
        }
    }
    ctx->pc = 0x1BAB74u;
label_1bab74:
    // 0x1bab74: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1bab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bab78:
    // 0x1bab78: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x1bab78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1bab7c:
    // 0x1bab7c: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x1bab7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_1bab80:
    // 0x1bab80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bab84:
    // 0x1bab84: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1bab84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1bab88:
    // 0x1bab88: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1bab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1bab8c:
    // 0x1bab8c: 0x60f809  jalr        $v1
label_1bab90:
    if (ctx->pc == 0x1BAB90u) {
        ctx->pc = 0x1BAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB8Cu;
        // 0x1bab90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB94u;
        goto label_1bab94;
    }
    ctx->pc = 0x1BAB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BAB94u);
        ctx->pc = 0x1BAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB8Cu;
        // 0x1bab90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAB8Cu, 0x1BAB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAB94u;
label_1bab94:
    // 0x1bab94: 0xc6410184  lwc1        $f1, 0x184($s2)
    ctx->pc = 0x1bab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bab98:
    // 0x1bab98: 0xc7a20238  lwc1        $f2, 0x238($sp)
    ctx->pc = 0x1bab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bab9c:
    // 0x1bab9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1bab9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1baba0:
    // 0x1baba0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1baba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1baba4:
    // 0x1baba4: 0x0  nop
    ctx->pc = 0x1baba4u;
    // NOP
label_1baba8:
    // 0x1baba8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1babac:
    if (ctx->pc == 0x1BABACu) {
        ctx->pc = 0x1BABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABA8u;
        // 0x1babac: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABB0u;
        goto label_1babb0;
    }
    ctx->pc = 0x1BABA8u;
    {
        const bool branch_taken_0x1baba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABA8u;
        // 0x1babac: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baba8) {
            ctx->pc = 0x1BABCCu;
            goto label_1babcc;
        }
    }
    ctx->pc = 0x1BABB0u;
label_1babb0:
    // 0x1babb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1babb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1babb4:
    // 0x1babb4: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1babb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1babb8:
    // 0x1babb8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1babb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1babbc:
    // 0x1babbc: 0x60f809  jalr        $v1
label_1babc0:
    if (ctx->pc == 0x1BABC0u) {
        ctx->pc = 0x1BABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABBCu;
        // 0x1babc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABC4u;
        goto label_1babc4;
    }
    ctx->pc = 0x1BABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BABC4u);
        ctx->pc = 0x1BABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABBCu;
        // 0x1babc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BABBCu, 0x1BABC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BABC4u;
label_1babc4:
    // 0x1babc4: 0xc6410184  lwc1        $f1, 0x184($s2)
    ctx->pc = 0x1babc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1babc8:
    // 0x1babc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1babc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1babcc:
    // 0x1babcc: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x1babccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_1babd0:
    // 0x1babd0: 0x8fa50678  lw          $a1, 0x678($sp)
    ctx->pc = 0x1babd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
label_1babd4:
    // 0x1babd4: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x1babd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1babd8:
    // 0x1babd8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1babd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1babdc:
    // 0x1babdc: 0x8fa20678  lw          $v0, 0x678($sp)
    ctx->pc = 0x1babdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1656)));
label_1babe0:
    // 0x1babe0: 0x7bb00740  lq          $s0, 0x740($sp)
    ctx->pc = 0x1babe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1856)));
label_1babe4:
    // 0x1babe4: 0x7bb10730  lq          $s1, 0x730($sp)
    ctx->pc = 0x1babe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1840)));
label_1babe8:
    // 0x1babe8: 0x7bb20720  lq          $s2, 0x720($sp)
    ctx->pc = 0x1babe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1824)));
label_1babec:
    // 0x1babec: 0x7bb30710  lq          $s3, 0x710($sp)
    ctx->pc = 0x1babecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1808)));
label_1babf0:
    // 0x1babf0: 0x7bb40700  lq          $s4, 0x700($sp)
    ctx->pc = 0x1babf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
label_1babf4:
    // 0x1babf4: 0x7bb506f0  lq          $s5, 0x6F0($sp)
    ctx->pc = 0x1babf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
label_1babf8:
    // 0x1babf8: 0x7bb606e0  lq          $s6, 0x6E0($sp)
    ctx->pc = 0x1babf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
label_1babfc:
    // 0x1babfc: 0x7bb706d0  lq          $s7, 0x6D0($sp)
    ctx->pc = 0x1babfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
label_1bac00:
    // 0x1bac00: 0x7bbe06c0  lq          $fp, 0x6C0($sp)
    ctx->pc = 0x1bac00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1728)));
label_1bac04:
    // 0x1bac04: 0xdfbf06b0  ld          $ra, 0x6B0($sp)
    ctx->pc = 0x1bac04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1712)));
label_1bac08:
    // 0x1bac08: 0xc7b70768  lwc1        $f23, 0x768($sp)
    ctx->pc = 0x1bac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1bac0c:
    // 0x1bac0c: 0xc7b60760  lwc1        $f22, 0x760($sp)
    ctx->pc = 0x1bac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1bac10:
    // 0x1bac10: 0xc7b50758  lwc1        $f21, 0x758($sp)
    ctx->pc = 0x1bac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bac14:
    // 0x1bac14: 0xc7b40750  lwc1        $f20, 0x750($sp)
    ctx->pc = 0x1bac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bac18:
    // 0x1bac18: 0x3e00008  jr          $ra
label_1bac1c:
    if (ctx->pc == 0x1BAC1Cu) {
        ctx->pc = 0x1BAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC18u;
        // 0x1bac1c: 0x27bd0770  addiu       $sp, $sp, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC20u;
        goto label_fallthrough_0x1bac18;
    }
    ctx->pc = 0x1BAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC18u;
        // 0x1bac1c: 0x27bd0770  addiu       $sp, $sp, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bac18:
    ctx->pc = 0x1BAC20u;
}
