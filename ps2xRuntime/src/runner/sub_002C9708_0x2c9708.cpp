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

// Function: sub_002C9708
// Address: 0x2c9708 - 0x2c9d58
void sub_002C9708_0x2c9708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9708_0x2c9708");
#endif

    switch (ctx->pc) {
        case 0x2c9708u: goto label_2c9708;
        case 0x2c970cu: goto label_2c970c;
        case 0x2c9710u: goto label_2c9710;
        case 0x2c9714u: goto label_2c9714;
        case 0x2c9718u: goto label_2c9718;
        case 0x2c971cu: goto label_2c971c;
        case 0x2c9720u: goto label_2c9720;
        case 0x2c9724u: goto label_2c9724;
        case 0x2c9728u: goto label_2c9728;
        case 0x2c972cu: goto label_2c972c;
        case 0x2c9730u: goto label_2c9730;
        case 0x2c9734u: goto label_2c9734;
        case 0x2c9738u: goto label_2c9738;
        case 0x2c973cu: goto label_2c973c;
        case 0x2c9740u: goto label_2c9740;
        case 0x2c9744u: goto label_2c9744;
        case 0x2c9748u: goto label_2c9748;
        case 0x2c974cu: goto label_2c974c;
        case 0x2c9750u: goto label_2c9750;
        case 0x2c9754u: goto label_2c9754;
        case 0x2c9758u: goto label_2c9758;
        case 0x2c975cu: goto label_2c975c;
        case 0x2c9760u: goto label_2c9760;
        case 0x2c9764u: goto label_2c9764;
        case 0x2c9768u: goto label_2c9768;
        case 0x2c976cu: goto label_2c976c;
        case 0x2c9770u: goto label_2c9770;
        case 0x2c9774u: goto label_2c9774;
        case 0x2c9778u: goto label_2c9778;
        case 0x2c977cu: goto label_2c977c;
        case 0x2c9780u: goto label_2c9780;
        case 0x2c9784u: goto label_2c9784;
        case 0x2c9788u: goto label_2c9788;
        case 0x2c978cu: goto label_2c978c;
        case 0x2c9790u: goto label_2c9790;
        case 0x2c9794u: goto label_2c9794;
        case 0x2c9798u: goto label_2c9798;
        case 0x2c979cu: goto label_2c979c;
        case 0x2c97a0u: goto label_2c97a0;
        case 0x2c97a4u: goto label_2c97a4;
        case 0x2c97a8u: goto label_2c97a8;
        case 0x2c97acu: goto label_2c97ac;
        case 0x2c97b0u: goto label_2c97b0;
        case 0x2c97b4u: goto label_2c97b4;
        case 0x2c97b8u: goto label_2c97b8;
        case 0x2c97bcu: goto label_2c97bc;
        case 0x2c97c0u: goto label_2c97c0;
        case 0x2c97c4u: goto label_2c97c4;
        case 0x2c97c8u: goto label_2c97c8;
        case 0x2c97ccu: goto label_2c97cc;
        case 0x2c97d0u: goto label_2c97d0;
        case 0x2c97d4u: goto label_2c97d4;
        case 0x2c97d8u: goto label_2c97d8;
        case 0x2c97dcu: goto label_2c97dc;
        case 0x2c97e0u: goto label_2c97e0;
        case 0x2c97e4u: goto label_2c97e4;
        case 0x2c97e8u: goto label_2c97e8;
        case 0x2c97ecu: goto label_2c97ec;
        case 0x2c97f0u: goto label_2c97f0;
        case 0x2c97f4u: goto label_2c97f4;
        case 0x2c97f8u: goto label_2c97f8;
        case 0x2c97fcu: goto label_2c97fc;
        case 0x2c9800u: goto label_2c9800;
        case 0x2c9804u: goto label_2c9804;
        case 0x2c9808u: goto label_2c9808;
        case 0x2c980cu: goto label_2c980c;
        case 0x2c9810u: goto label_2c9810;
        case 0x2c9814u: goto label_2c9814;
        case 0x2c9818u: goto label_2c9818;
        case 0x2c981cu: goto label_2c981c;
        case 0x2c9820u: goto label_2c9820;
        case 0x2c9824u: goto label_2c9824;
        case 0x2c9828u: goto label_2c9828;
        case 0x2c982cu: goto label_2c982c;
        case 0x2c9830u: goto label_2c9830;
        case 0x2c9834u: goto label_2c9834;
        case 0x2c9838u: goto label_2c9838;
        case 0x2c983cu: goto label_2c983c;
        case 0x2c9840u: goto label_2c9840;
        case 0x2c9844u: goto label_2c9844;
        case 0x2c9848u: goto label_2c9848;
        case 0x2c984cu: goto label_2c984c;
        case 0x2c9850u: goto label_2c9850;
        case 0x2c9854u: goto label_2c9854;
        case 0x2c9858u: goto label_2c9858;
        case 0x2c985cu: goto label_2c985c;
        case 0x2c9860u: goto label_2c9860;
        case 0x2c9864u: goto label_2c9864;
        case 0x2c9868u: goto label_2c9868;
        case 0x2c986cu: goto label_2c986c;
        case 0x2c9870u: goto label_2c9870;
        case 0x2c9874u: goto label_2c9874;
        case 0x2c9878u: goto label_2c9878;
        case 0x2c987cu: goto label_2c987c;
        case 0x2c9880u: goto label_2c9880;
        case 0x2c9884u: goto label_2c9884;
        case 0x2c9888u: goto label_2c9888;
        case 0x2c988cu: goto label_2c988c;
        case 0x2c9890u: goto label_2c9890;
        case 0x2c9894u: goto label_2c9894;
        case 0x2c9898u: goto label_2c9898;
        case 0x2c989cu: goto label_2c989c;
        case 0x2c98a0u: goto label_2c98a0;
        case 0x2c98a4u: goto label_2c98a4;
        case 0x2c98a8u: goto label_2c98a8;
        case 0x2c98acu: goto label_2c98ac;
        case 0x2c98b0u: goto label_2c98b0;
        case 0x2c98b4u: goto label_2c98b4;
        case 0x2c98b8u: goto label_2c98b8;
        case 0x2c98bcu: goto label_2c98bc;
        case 0x2c98c0u: goto label_2c98c0;
        case 0x2c98c4u: goto label_2c98c4;
        case 0x2c98c8u: goto label_2c98c8;
        case 0x2c98ccu: goto label_2c98cc;
        case 0x2c98d0u: goto label_2c98d0;
        case 0x2c98d4u: goto label_2c98d4;
        case 0x2c98d8u: goto label_2c98d8;
        case 0x2c98dcu: goto label_2c98dc;
        case 0x2c98e0u: goto label_2c98e0;
        case 0x2c98e4u: goto label_2c98e4;
        case 0x2c98e8u: goto label_2c98e8;
        case 0x2c98ecu: goto label_2c98ec;
        case 0x2c98f0u: goto label_2c98f0;
        case 0x2c98f4u: goto label_2c98f4;
        case 0x2c98f8u: goto label_2c98f8;
        case 0x2c98fcu: goto label_2c98fc;
        case 0x2c9900u: goto label_2c9900;
        case 0x2c9904u: goto label_2c9904;
        case 0x2c9908u: goto label_2c9908;
        case 0x2c990cu: goto label_2c990c;
        case 0x2c9910u: goto label_2c9910;
        case 0x2c9914u: goto label_2c9914;
        case 0x2c9918u: goto label_2c9918;
        case 0x2c991cu: goto label_2c991c;
        case 0x2c9920u: goto label_2c9920;
        case 0x2c9924u: goto label_2c9924;
        case 0x2c9928u: goto label_2c9928;
        case 0x2c992cu: goto label_2c992c;
        case 0x2c9930u: goto label_2c9930;
        case 0x2c9934u: goto label_2c9934;
        case 0x2c9938u: goto label_2c9938;
        case 0x2c993cu: goto label_2c993c;
        case 0x2c9940u: goto label_2c9940;
        case 0x2c9944u: goto label_2c9944;
        case 0x2c9948u: goto label_2c9948;
        case 0x2c994cu: goto label_2c994c;
        case 0x2c9950u: goto label_2c9950;
        case 0x2c9954u: goto label_2c9954;
        case 0x2c9958u: goto label_2c9958;
        case 0x2c995cu: goto label_2c995c;
        case 0x2c9960u: goto label_2c9960;
        case 0x2c9964u: goto label_2c9964;
        case 0x2c9968u: goto label_2c9968;
        case 0x2c996cu: goto label_2c996c;
        case 0x2c9970u: goto label_2c9970;
        case 0x2c9974u: goto label_2c9974;
        case 0x2c9978u: goto label_2c9978;
        case 0x2c997cu: goto label_2c997c;
        case 0x2c9980u: goto label_2c9980;
        case 0x2c9984u: goto label_2c9984;
        case 0x2c9988u: goto label_2c9988;
        case 0x2c998cu: goto label_2c998c;
        case 0x2c9990u: goto label_2c9990;
        case 0x2c9994u: goto label_2c9994;
        case 0x2c9998u: goto label_2c9998;
        case 0x2c999cu: goto label_2c999c;
        case 0x2c99a0u: goto label_2c99a0;
        case 0x2c99a4u: goto label_2c99a4;
        case 0x2c99a8u: goto label_2c99a8;
        case 0x2c99acu: goto label_2c99ac;
        case 0x2c99b0u: goto label_2c99b0;
        case 0x2c99b4u: goto label_2c99b4;
        case 0x2c99b8u: goto label_2c99b8;
        case 0x2c99bcu: goto label_2c99bc;
        case 0x2c99c0u: goto label_2c99c0;
        case 0x2c99c4u: goto label_2c99c4;
        case 0x2c99c8u: goto label_2c99c8;
        case 0x2c99ccu: goto label_2c99cc;
        case 0x2c99d0u: goto label_2c99d0;
        case 0x2c99d4u: goto label_2c99d4;
        case 0x2c99d8u: goto label_2c99d8;
        case 0x2c99dcu: goto label_2c99dc;
        case 0x2c99e0u: goto label_2c99e0;
        case 0x2c99e4u: goto label_2c99e4;
        case 0x2c99e8u: goto label_2c99e8;
        case 0x2c99ecu: goto label_2c99ec;
        case 0x2c99f0u: goto label_2c99f0;
        case 0x2c99f4u: goto label_2c99f4;
        case 0x2c99f8u: goto label_2c99f8;
        case 0x2c99fcu: goto label_2c99fc;
        case 0x2c9a00u: goto label_2c9a00;
        case 0x2c9a04u: goto label_2c9a04;
        case 0x2c9a08u: goto label_2c9a08;
        case 0x2c9a0cu: goto label_2c9a0c;
        case 0x2c9a10u: goto label_2c9a10;
        case 0x2c9a14u: goto label_2c9a14;
        case 0x2c9a18u: goto label_2c9a18;
        case 0x2c9a1cu: goto label_2c9a1c;
        case 0x2c9a20u: goto label_2c9a20;
        case 0x2c9a24u: goto label_2c9a24;
        case 0x2c9a28u: goto label_2c9a28;
        case 0x2c9a2cu: goto label_2c9a2c;
        case 0x2c9a30u: goto label_2c9a30;
        case 0x2c9a34u: goto label_2c9a34;
        case 0x2c9a38u: goto label_2c9a38;
        case 0x2c9a3cu: goto label_2c9a3c;
        case 0x2c9a40u: goto label_2c9a40;
        case 0x2c9a44u: goto label_2c9a44;
        case 0x2c9a48u: goto label_2c9a48;
        case 0x2c9a4cu: goto label_2c9a4c;
        case 0x2c9a50u: goto label_2c9a50;
        case 0x2c9a54u: goto label_2c9a54;
        case 0x2c9a58u: goto label_2c9a58;
        case 0x2c9a5cu: goto label_2c9a5c;
        case 0x2c9a60u: goto label_2c9a60;
        case 0x2c9a64u: goto label_2c9a64;
        case 0x2c9a68u: goto label_2c9a68;
        case 0x2c9a6cu: goto label_2c9a6c;
        case 0x2c9a70u: goto label_2c9a70;
        case 0x2c9a74u: goto label_2c9a74;
        case 0x2c9a78u: goto label_2c9a78;
        case 0x2c9a7cu: goto label_2c9a7c;
        case 0x2c9a80u: goto label_2c9a80;
        case 0x2c9a84u: goto label_2c9a84;
        case 0x2c9a88u: goto label_2c9a88;
        case 0x2c9a8cu: goto label_2c9a8c;
        case 0x2c9a90u: goto label_2c9a90;
        case 0x2c9a94u: goto label_2c9a94;
        case 0x2c9a98u: goto label_2c9a98;
        case 0x2c9a9cu: goto label_2c9a9c;
        case 0x2c9aa0u: goto label_2c9aa0;
        case 0x2c9aa4u: goto label_2c9aa4;
        case 0x2c9aa8u: goto label_2c9aa8;
        case 0x2c9aacu: goto label_2c9aac;
        case 0x2c9ab0u: goto label_2c9ab0;
        case 0x2c9ab4u: goto label_2c9ab4;
        case 0x2c9ab8u: goto label_2c9ab8;
        case 0x2c9abcu: goto label_2c9abc;
        case 0x2c9ac0u: goto label_2c9ac0;
        case 0x2c9ac4u: goto label_2c9ac4;
        case 0x2c9ac8u: goto label_2c9ac8;
        case 0x2c9accu: goto label_2c9acc;
        case 0x2c9ad0u: goto label_2c9ad0;
        case 0x2c9ad4u: goto label_2c9ad4;
        case 0x2c9ad8u: goto label_2c9ad8;
        case 0x2c9adcu: goto label_2c9adc;
        case 0x2c9ae0u: goto label_2c9ae0;
        case 0x2c9ae4u: goto label_2c9ae4;
        case 0x2c9ae8u: goto label_2c9ae8;
        case 0x2c9aecu: goto label_2c9aec;
        case 0x2c9af0u: goto label_2c9af0;
        case 0x2c9af4u: goto label_2c9af4;
        case 0x2c9af8u: goto label_2c9af8;
        case 0x2c9afcu: goto label_2c9afc;
        case 0x2c9b00u: goto label_2c9b00;
        case 0x2c9b04u: goto label_2c9b04;
        case 0x2c9b08u: goto label_2c9b08;
        case 0x2c9b0cu: goto label_2c9b0c;
        case 0x2c9b10u: goto label_2c9b10;
        case 0x2c9b14u: goto label_2c9b14;
        case 0x2c9b18u: goto label_2c9b18;
        case 0x2c9b1cu: goto label_2c9b1c;
        case 0x2c9b20u: goto label_2c9b20;
        case 0x2c9b24u: goto label_2c9b24;
        case 0x2c9b28u: goto label_2c9b28;
        case 0x2c9b2cu: goto label_2c9b2c;
        case 0x2c9b30u: goto label_2c9b30;
        case 0x2c9b34u: goto label_2c9b34;
        case 0x2c9b38u: goto label_2c9b38;
        case 0x2c9b3cu: goto label_2c9b3c;
        case 0x2c9b40u: goto label_2c9b40;
        case 0x2c9b44u: goto label_2c9b44;
        case 0x2c9b48u: goto label_2c9b48;
        case 0x2c9b4cu: goto label_2c9b4c;
        case 0x2c9b50u: goto label_2c9b50;
        case 0x2c9b54u: goto label_2c9b54;
        case 0x2c9b58u: goto label_2c9b58;
        case 0x2c9b5cu: goto label_2c9b5c;
        case 0x2c9b60u: goto label_2c9b60;
        case 0x2c9b64u: goto label_2c9b64;
        case 0x2c9b68u: goto label_2c9b68;
        case 0x2c9b6cu: goto label_2c9b6c;
        case 0x2c9b70u: goto label_2c9b70;
        case 0x2c9b74u: goto label_2c9b74;
        case 0x2c9b78u: goto label_2c9b78;
        case 0x2c9b7cu: goto label_2c9b7c;
        case 0x2c9b80u: goto label_2c9b80;
        case 0x2c9b84u: goto label_2c9b84;
        case 0x2c9b88u: goto label_2c9b88;
        case 0x2c9b8cu: goto label_2c9b8c;
        case 0x2c9b90u: goto label_2c9b90;
        case 0x2c9b94u: goto label_2c9b94;
        case 0x2c9b98u: goto label_2c9b98;
        case 0x2c9b9cu: goto label_2c9b9c;
        case 0x2c9ba0u: goto label_2c9ba0;
        case 0x2c9ba4u: goto label_2c9ba4;
        case 0x2c9ba8u: goto label_2c9ba8;
        case 0x2c9bacu: goto label_2c9bac;
        case 0x2c9bb0u: goto label_2c9bb0;
        case 0x2c9bb4u: goto label_2c9bb4;
        case 0x2c9bb8u: goto label_2c9bb8;
        case 0x2c9bbcu: goto label_2c9bbc;
        case 0x2c9bc0u: goto label_2c9bc0;
        case 0x2c9bc4u: goto label_2c9bc4;
        case 0x2c9bc8u: goto label_2c9bc8;
        case 0x2c9bccu: goto label_2c9bcc;
        case 0x2c9bd0u: goto label_2c9bd0;
        case 0x2c9bd4u: goto label_2c9bd4;
        case 0x2c9bd8u: goto label_2c9bd8;
        case 0x2c9bdcu: goto label_2c9bdc;
        case 0x2c9be0u: goto label_2c9be0;
        case 0x2c9be4u: goto label_2c9be4;
        case 0x2c9be8u: goto label_2c9be8;
        case 0x2c9becu: goto label_2c9bec;
        case 0x2c9bf0u: goto label_2c9bf0;
        case 0x2c9bf4u: goto label_2c9bf4;
        case 0x2c9bf8u: goto label_2c9bf8;
        case 0x2c9bfcu: goto label_2c9bfc;
        case 0x2c9c00u: goto label_2c9c00;
        case 0x2c9c04u: goto label_2c9c04;
        case 0x2c9c08u: goto label_2c9c08;
        case 0x2c9c0cu: goto label_2c9c0c;
        case 0x2c9c10u: goto label_2c9c10;
        case 0x2c9c14u: goto label_2c9c14;
        case 0x2c9c18u: goto label_2c9c18;
        case 0x2c9c1cu: goto label_2c9c1c;
        case 0x2c9c20u: goto label_2c9c20;
        case 0x2c9c24u: goto label_2c9c24;
        case 0x2c9c28u: goto label_2c9c28;
        case 0x2c9c2cu: goto label_2c9c2c;
        case 0x2c9c30u: goto label_2c9c30;
        case 0x2c9c34u: goto label_2c9c34;
        case 0x2c9c38u: goto label_2c9c38;
        case 0x2c9c3cu: goto label_2c9c3c;
        case 0x2c9c40u: goto label_2c9c40;
        case 0x2c9c44u: goto label_2c9c44;
        case 0x2c9c48u: goto label_2c9c48;
        case 0x2c9c4cu: goto label_2c9c4c;
        case 0x2c9c50u: goto label_2c9c50;
        case 0x2c9c54u: goto label_2c9c54;
        case 0x2c9c58u: goto label_2c9c58;
        case 0x2c9c5cu: goto label_2c9c5c;
        case 0x2c9c60u: goto label_2c9c60;
        case 0x2c9c64u: goto label_2c9c64;
        case 0x2c9c68u: goto label_2c9c68;
        case 0x2c9c6cu: goto label_2c9c6c;
        case 0x2c9c70u: goto label_2c9c70;
        case 0x2c9c74u: goto label_2c9c74;
        case 0x2c9c78u: goto label_2c9c78;
        case 0x2c9c7cu: goto label_2c9c7c;
        case 0x2c9c80u: goto label_2c9c80;
        case 0x2c9c84u: goto label_2c9c84;
        case 0x2c9c88u: goto label_2c9c88;
        case 0x2c9c8cu: goto label_2c9c8c;
        case 0x2c9c90u: goto label_2c9c90;
        case 0x2c9c94u: goto label_2c9c94;
        case 0x2c9c98u: goto label_2c9c98;
        case 0x2c9c9cu: goto label_2c9c9c;
        case 0x2c9ca0u: goto label_2c9ca0;
        case 0x2c9ca4u: goto label_2c9ca4;
        case 0x2c9ca8u: goto label_2c9ca8;
        case 0x2c9cacu: goto label_2c9cac;
        case 0x2c9cb0u: goto label_2c9cb0;
        case 0x2c9cb4u: goto label_2c9cb4;
        case 0x2c9cb8u: goto label_2c9cb8;
        case 0x2c9cbcu: goto label_2c9cbc;
        case 0x2c9cc0u: goto label_2c9cc0;
        case 0x2c9cc4u: goto label_2c9cc4;
        case 0x2c9cc8u: goto label_2c9cc8;
        case 0x2c9cccu: goto label_2c9ccc;
        case 0x2c9cd0u: goto label_2c9cd0;
        case 0x2c9cd4u: goto label_2c9cd4;
        case 0x2c9cd8u: goto label_2c9cd8;
        case 0x2c9cdcu: goto label_2c9cdc;
        case 0x2c9ce0u: goto label_2c9ce0;
        case 0x2c9ce4u: goto label_2c9ce4;
        case 0x2c9ce8u: goto label_2c9ce8;
        case 0x2c9cecu: goto label_2c9cec;
        case 0x2c9cf0u: goto label_2c9cf0;
        case 0x2c9cf4u: goto label_2c9cf4;
        case 0x2c9cf8u: goto label_2c9cf8;
        case 0x2c9cfcu: goto label_2c9cfc;
        case 0x2c9d00u: goto label_2c9d00;
        case 0x2c9d04u: goto label_2c9d04;
        case 0x2c9d08u: goto label_2c9d08;
        case 0x2c9d0cu: goto label_2c9d0c;
        case 0x2c9d10u: goto label_2c9d10;
        case 0x2c9d14u: goto label_2c9d14;
        case 0x2c9d18u: goto label_2c9d18;
        case 0x2c9d1cu: goto label_2c9d1c;
        case 0x2c9d20u: goto label_2c9d20;
        case 0x2c9d24u: goto label_2c9d24;
        case 0x2c9d28u: goto label_2c9d28;
        case 0x2c9d2cu: goto label_2c9d2c;
        case 0x2c9d30u: goto label_2c9d30;
        case 0x2c9d34u: goto label_2c9d34;
        case 0x2c9d38u: goto label_2c9d38;
        case 0x2c9d3cu: goto label_2c9d3c;
        case 0x2c9d40u: goto label_2c9d40;
        case 0x2c9d44u: goto label_2c9d44;
        case 0x2c9d48u: goto label_2c9d48;
        case 0x2c9d4cu: goto label_2c9d4c;
        case 0x2c9d50u: goto label_2c9d50;
        case 0x2c9d54u: goto label_2c9d54;
        default: break;
    }

    ctx->pc = 0x2c9708u;

label_2c9708:
    // 0x2c9708: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c9708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2c970c:
    // 0x2c970c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2c9710:
    // 0x2c9710: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c9710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2c9714:
    // 0x2c9714: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c9714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2c9718:
    // 0x2c9718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c9718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c971c:
    // 0x2c971c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2c9720:
    // 0x2c9720: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c9724:
    // 0x2c9724: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2c9728:
    // 0x2c9728: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2c9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2c972c:
    // 0x2c972c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c9730:
    // 0x2c9730: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2c9730u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2c9734:
    // 0x2c9734: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c9734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2c9738:
    // 0x2c9738: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c9738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2c973c:
    // 0x2c973c: 0xc0a3678  jal         func_28D9E0
label_2c9740:
    if (ctx->pc == 0x2C9740u) {
        ctx->pc = 0x2C9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C973Cu;
        // 0x2c9740: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9744u;
        goto label_2c9744;
    }
    ctx->pc = 0x2C973Cu;
    SET_GPR_U32(ctx, 31, 0x2C9744u);
    ctx->pc = 0x2C9740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C973Cu;
    // 0x2c9740: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2C973Cu, 0x2C9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9744u;
label_2c9744:
    // 0x2c9744: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c9744u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9748:
    // 0x2c9748: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c9748u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c974c:
    // 0x2c974c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2c974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c9750:
    // 0x2c9750: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2c9750u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c9754:
    // 0x2c9754: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2c9754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2c9758:
    // 0x2c9758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c9758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c975c:
    // 0x2c975c: 0xc0e409a  jal         func_390268
label_2c9760:
    if (ctx->pc == 0x2C9760u) {
        ctx->pc = 0x2C9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C975Cu;
        // 0x2c9760: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9764u;
        goto label_2c9764;
    }
    ctx->pc = 0x2C975Cu;
    SET_GPR_U32(ctx, 31, 0x2C9764u);
    ctx->pc = 0x2C9760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C975Cu;
    // 0x2c9760: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C975Cu, 0x2C9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9764u;
label_2c9764:
    // 0x2c9764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9768:
    // 0x2c9768: 0xc0a34d6  jal         func_28D358
label_2c976c:
    if (ctx->pc == 0x2C976Cu) {
        ctx->pc = 0x2C976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9768u;
        // 0x2c976c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9770u;
        goto label_2c9770;
    }
    ctx->pc = 0x2C9768u;
    SET_GPR_U32(ctx, 31, 0x2C9770u);
    ctx->pc = 0x2C976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9768u;
    // 0x2c976c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C9768u, 0x2C9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9770u;
label_2c9770:
    // 0x2c9770: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9774:
    // 0x2c9774: 0x1260016a  beqz        $s3, . + 4 + (0x16A << 2)
label_2c9778:
    if (ctx->pc == 0x2C9778u) {
        ctx->pc = 0x2C9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9774u;
        // 0x2c9778: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C977Cu;
        goto label_2c977c;
    }
    ctx->pc = 0x2C9774u;
    {
        const bool branch_taken_0x2c9774 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9774u;
        // 0x2c9778: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9774) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C977Cu;
label_2c977c:
    // 0x2c977c: 0xc087502  jal         func_21D408
label_2c9780:
    if (ctx->pc == 0x2C9780u) {
        ctx->pc = 0x2C9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C977Cu;
        // 0x2c9780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9784u;
        goto label_2c9784;
    }
    ctx->pc = 0x2C977Cu;
    SET_GPR_U32(ctx, 31, 0x2C9784u);
    ctx->pc = 0x2C9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C977Cu;
    // 0x2c9780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C977Cu, 0x2C9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9784u;
label_2c9784:
    // 0x2c9784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9788:
    // 0x2c9788: 0xc0a3792  jal         func_28DE48
label_2c978c:
    if (ctx->pc == 0x2C978Cu) {
        ctx->pc = 0x2C978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9788u;
        // 0x2c978c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9790u;
        goto label_2c9790;
    }
    ctx->pc = 0x2C9788u;
    SET_GPR_U32(ctx, 31, 0x2C9790u);
    ctx->pc = 0x2C978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9788u;
    // 0x2c978c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2C9788u, 0x2C9790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9790u;
label_2c9790:
    // 0x2c9790: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
label_2c9794:
    if (ctx->pc == 0x2C9794u) {
        ctx->pc = 0x2C9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9790u;
        // 0x2c9794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9798u;
        goto label_2c9798;
    }
    ctx->pc = 0x2C9790u;
    {
        const bool branch_taken_0x2c9790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9790u;
        // 0x2c9794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9790) {
            ctx->pc = 0x2C9C0Cu;
            goto label_2c9c0c;
        }
    }
    ctx->pc = 0x2C9798u;
label_2c9798:
    // 0x2c9798: 0xc088e60  jal         func_223980
label_2c979c:
    if (ctx->pc == 0x2C979Cu) {
        ctx->pc = 0x2C979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9798u;
        // 0x2c979c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97A0u;
        goto label_2c97a0;
    }
    ctx->pc = 0x2C9798u;
    SET_GPR_U32(ctx, 31, 0x2C97A0u);
    ctx->pc = 0x2C979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9798u;
    // 0x2c979c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2C9798u, 0x2C97A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97A0u;
label_2c97a0:
    // 0x2c97a0: 0x1450000f  bne         $v0, $s0, . + 4 + (0xF << 2)
label_2c97a4:
    if (ctx->pc == 0x2C97A4u) {
        ctx->pc = 0x2C97A8u;
        goto label_2c97a8;
    }
    ctx->pc = 0x2C97A0u;
    {
        const bool branch_taken_0x2c97a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c97a0) {
            ctx->pc = 0x2C97E0u;
            goto label_2c97e0;
        }
    }
    ctx->pc = 0x2C97A8u;
label_2c97a8:
    // 0x2c97a8: 0xc0a4e54  jal         func_293950
label_2c97ac:
    if (ctx->pc == 0x2C97ACu) {
        ctx->pc = 0x2C97B0u;
        goto label_2c97b0;
    }
    ctx->pc = 0x2C97A8u;
    SET_GPR_U32(ctx, 31, 0x2C97B0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C97A8u, 0x2C97B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97B0u;
label_2c97b0:
    // 0x2c97b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c97b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c97b4:
    // 0x2c97b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2c97b8:
    if (ctx->pc == 0x2C97B8u) {
        ctx->pc = 0x2C97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97B4u;
        // 0x2c97b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97BCu;
        goto label_2c97bc;
    }
    ctx->pc = 0x2C97B4u;
    {
        const bool branch_taken_0x2c97b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97B4u;
        // 0x2c97b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97b4) {
            ctx->pc = 0x2C97CCu;
            goto label_2c97cc;
        }
    }
    ctx->pc = 0x2C97BCu;
label_2c97bc:
    // 0x2c97bc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c97bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2c97c0:
    // 0x2c97c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c97c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c97c4:
    // 0x2c97c4: 0xc0b2b78  jal         func_2CADE0
label_2c97c8:
    if (ctx->pc == 0x2C97C8u) {
        ctx->pc = 0x2C97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97C4u;
        // 0x2c97c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97CCu;
        goto label_2c97cc;
    }
    ctx->pc = 0x2C97C4u;
    SET_GPR_U32(ctx, 31, 0x2C97CCu);
    ctx->pc = 0x2C97C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C97C4u;
    // 0x2c97c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADE0u, 0x2C97C4u, 0x2C97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97CCu;
label_2c97cc:
    // 0x2c97cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c97d0:
    // 0x2c97d0: 0xc0a35d6  jal         func_28D758
label_2c97d4:
    if (ctx->pc == 0x2C97D4u) {
        ctx->pc = 0x2C97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97D0u;
        // 0x2c97d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97D8u;
        goto label_2c97d8;
    }
    ctx->pc = 0x2C97D0u;
    SET_GPR_U32(ctx, 31, 0x2C97D8u);
    ctx->pc = 0x2C97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C97D0u;
    // 0x2c97d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C97D0u, 0x2C97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97D8u;
label_2c97d8:
    // 0x2c97d8: 0x10000151  b           . + 4 + (0x151 << 2)
label_2c97dc:
    if (ctx->pc == 0x2C97DCu) {
        ctx->pc = 0x2C97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97D8u;
        // 0x2c97dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97E0u;
        goto label_2c97e0;
    }
    ctx->pc = 0x2C97D8u;
    {
        const bool branch_taken_0x2c97d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97D8u;
        // 0x2c97dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97d8) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C97E0u;
label_2c97e0:
    // 0x2c97e0: 0xc088e40  jal         func_223900
label_2c97e4:
    if (ctx->pc == 0x2C97E4u) {
        ctx->pc = 0x2C97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97E0u;
        // 0x2c97e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C97E8u;
        goto label_2c97e8;
    }
    ctx->pc = 0x2C97E0u;
    SET_GPR_U32(ctx, 31, 0x2C97E8u);
    ctx->pc = 0x2C97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C97E0u;
    // 0x2c97e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2C97E0u, 0x2C97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97E8u;
label_2c97e8:
    // 0x2c97e8: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2c97ec:
    if (ctx->pc == 0x2C97ECu) {
        ctx->pc = 0x2C97F0u;
        goto label_2c97f0;
    }
    ctx->pc = 0x2C97E8u;
    {
        const bool branch_taken_0x2c97e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c97e8) {
            ctx->pc = 0x2C9818u;
            goto label_2c9818;
        }
    }
    ctx->pc = 0x2C97F0u;
label_2c97f0:
    // 0x2c97f0: 0xc0a4e54  jal         func_293950
label_2c97f4:
    if (ctx->pc == 0x2C97F4u) {
        ctx->pc = 0x2C97F8u;
        goto label_2c97f8;
    }
    ctx->pc = 0x2C97F0u;
    SET_GPR_U32(ctx, 31, 0x2C97F8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C97F0u, 0x2C97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97F8u;
label_2c97f8:
    // 0x2c97f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c97f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c97fc:
    // 0x2c97fc: 0x5200fff4  beql        $s0, $zero, . + 4 + (-0xC << 2)
label_2c9800:
    if (ctx->pc == 0x2C9800u) {
        ctx->pc = 0x2C9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97FCu;
        // 0x2c9800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9804u;
        goto label_2c9804;
    }
    ctx->pc = 0x2C97FCu;
    {
        const bool branch_taken_0x2c97fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c97fc) {
            ctx->pc = 0x2C9800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C97FCu;
            // 0x2c9800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C9804u;
label_2c9804:
    // 0x2c9804: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c9804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9808:
    // 0x2c9808: 0xc0ad97e  jal         func_2B65F8
label_2c980c:
    if (ctx->pc == 0x2C980Cu) {
        ctx->pc = 0x2C980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9808u;
        // 0x2c980c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9810u;
        goto label_2c9810;
    }
    ctx->pc = 0x2C9808u;
    SET_GPR_U32(ctx, 31, 0x2C9810u);
    ctx->pc = 0x2C980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9808u;
    // 0x2c980c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65F8u, 0x2C9808u, 0x2C9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9810u;
label_2c9810:
    // 0x2c9810: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_2c9814:
    if (ctx->pc == 0x2C9814u) {
        ctx->pc = 0x2C9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9810u;
        // 0x2c9814: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9818u;
        goto label_2c9818;
    }
    ctx->pc = 0x2C9810u;
    {
        const bool branch_taken_0x2c9810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9810u;
        // 0x2c9814: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9810) {
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C9818u;
label_2c9818:
    // 0x2c9818: 0xc088e48  jal         func_223920
label_2c981c:
    if (ctx->pc == 0x2C981Cu) {
        ctx->pc = 0x2C981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9818u;
        // 0x2c981c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9820u;
        goto label_2c9820;
    }
    ctx->pc = 0x2C9818u;
    SET_GPR_U32(ctx, 31, 0x2C9820u);
    ctx->pc = 0x2C981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9818u;
    // 0x2c981c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x2C9818u, 0x2C9820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9820u;
label_2c9820:
    // 0x2c9820: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2c9824:
    if (ctx->pc == 0x2C9824u) {
        ctx->pc = 0x2C9828u;
        goto label_2c9828;
    }
    ctx->pc = 0x2C9820u;
    {
        const bool branch_taken_0x2c9820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c9820) {
            ctx->pc = 0x2C9850u;
            goto label_2c9850;
        }
    }
    ctx->pc = 0x2C9828u;
label_2c9828:
    // 0x2c9828: 0xc0a4e54  jal         func_293950
label_2c982c:
    if (ctx->pc == 0x2C982Cu) {
        ctx->pc = 0x2C9830u;
        goto label_2c9830;
    }
    ctx->pc = 0x2C9828u;
    SET_GPR_U32(ctx, 31, 0x2C9830u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C9828u, 0x2C9830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9830u;
label_2c9830:
    // 0x2c9830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9834:
    // 0x2c9834: 0x5200ffe6  beql        $s0, $zero, . + 4 + (-0x1A << 2)
label_2c9838:
    if (ctx->pc == 0x2C9838u) {
        ctx->pc = 0x2C9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9834u;
        // 0x2c9838: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C983Cu;
        goto label_2c983c;
    }
    ctx->pc = 0x2C9834u;
    {
        const bool branch_taken_0x2c9834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9834) {
            ctx->pc = 0x2C9838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9834u;
            // 0x2c9838: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C983Cu;
label_2c983c:
    // 0x2c983c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c983cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9840:
    // 0x2c9840: 0xc0ada06  jal         func_2B6818
label_2c9844:
    if (ctx->pc == 0x2C9844u) {
        ctx->pc = 0x2C9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9840u;
        // 0x2c9844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9848u;
        goto label_2c9848;
    }
    ctx->pc = 0x2C9840u;
    SET_GPR_U32(ctx, 31, 0x2C9848u);
    ctx->pc = 0x2C9844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9840u;
    // 0x2c9844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6818u, 0x2C9840u, 0x2C9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9848u;
label_2c9848:
    // 0x2c9848: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_2c984c:
    if (ctx->pc == 0x2C984Cu) {
        ctx->pc = 0x2C984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9848u;
        // 0x2c984c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9850u;
        goto label_2c9850;
    }
    ctx->pc = 0x2C9848u;
    {
        const bool branch_taken_0x2c9848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9848u;
        // 0x2c984c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9848) {
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C9850u;
label_2c9850:
    // 0x2c9850: 0xc088e38  jal         func_2238E0
label_2c9854:
    if (ctx->pc == 0x2C9854u) {
        ctx->pc = 0x2C9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9850u;
        // 0x2c9854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9858u;
        goto label_2c9858;
    }
    ctx->pc = 0x2C9850u;
    SET_GPR_U32(ctx, 31, 0x2C9858u);
    ctx->pc = 0x2C9854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9850u;
    // 0x2c9854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x2C9850u, 0x2C9858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9858u;
label_2c9858:
    // 0x2c9858: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2c985c:
    if (ctx->pc == 0x2C985Cu) {
        ctx->pc = 0x2C9860u;
        goto label_2c9860;
    }
    ctx->pc = 0x2C9858u;
    {
        const bool branch_taken_0x2c9858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c9858) {
            ctx->pc = 0x2C9888u;
            goto label_2c9888;
        }
    }
    ctx->pc = 0x2C9860u;
label_2c9860:
    // 0x2c9860: 0xc0a4e54  jal         func_293950
label_2c9864:
    if (ctx->pc == 0x2C9864u) {
        ctx->pc = 0x2C9868u;
        goto label_2c9868;
    }
    ctx->pc = 0x2C9860u;
    SET_GPR_U32(ctx, 31, 0x2C9868u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C9860u, 0x2C9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9868u;
label_2c9868:
    // 0x2c9868: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c986c:
    // 0x2c986c: 0x5200ffd8  beql        $s0, $zero, . + 4 + (-0x28 << 2)
label_2c9870:
    if (ctx->pc == 0x2C9870u) {
        ctx->pc = 0x2C9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C986Cu;
        // 0x2c9870: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9874u;
        goto label_2c9874;
    }
    ctx->pc = 0x2C986Cu;
    {
        const bool branch_taken_0x2c986c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c986c) {
            ctx->pc = 0x2C9870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C986Cu;
            // 0x2c9870: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C9874u;
label_2c9874:
    // 0x2c9874: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c9874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9878:
    // 0x2c9878: 0xc0adae2  jal         func_2B6B88
label_2c987c:
    if (ctx->pc == 0x2C987Cu) {
        ctx->pc = 0x2C987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9878u;
        // 0x2c987c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9880u;
        goto label_2c9880;
    }
    ctx->pc = 0x2C9878u;
    SET_GPR_U32(ctx, 31, 0x2C9880u);
    ctx->pc = 0x2C987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9878u;
    // 0x2c987c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6B88u, 0x2C9878u, 0x2C9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9880u;
label_2c9880:
    // 0x2c9880: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_2c9884:
    if (ctx->pc == 0x2C9884u) {
        ctx->pc = 0x2C9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9880u;
        // 0x2c9884: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9888u;
        goto label_2c9888;
    }
    ctx->pc = 0x2C9880u;
    {
        const bool branch_taken_0x2c9880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9880u;
        // 0x2c9884: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9880) {
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C9888u;
label_2c9888:
    // 0x2c9888: 0xc088edc  jal         func_223B70
label_2c988c:
    if (ctx->pc == 0x2C988Cu) {
        ctx->pc = 0x2C988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9888u;
        // 0x2c988c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9890u;
        goto label_2c9890;
    }
    ctx->pc = 0x2C9888u;
    SET_GPR_U32(ctx, 31, 0x2C9890u);
    ctx->pc = 0x2C988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9888u;
    // 0x2c988c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2C9888u, 0x2C9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9890u;
label_2c9890:
    // 0x2c9890: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2c9894:
    if (ctx->pc == 0x2C9894u) {
        ctx->pc = 0x2C9898u;
        goto label_2c9898;
    }
    ctx->pc = 0x2C9890u;
    {
        const bool branch_taken_0x2c9890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c9890) {
            ctx->pc = 0x2C98C0u;
            goto label_2c98c0;
        }
    }
    ctx->pc = 0x2C9898u;
label_2c9898:
    // 0x2c9898: 0xc0a4e54  jal         func_293950
label_2c989c:
    if (ctx->pc == 0x2C989Cu) {
        ctx->pc = 0x2C98A0u;
        goto label_2c98a0;
    }
    ctx->pc = 0x2C9898u;
    SET_GPR_U32(ctx, 31, 0x2C98A0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C9898u, 0x2C98A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98A0u;
label_2c98a0:
    // 0x2c98a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c98a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c98a4:
    // 0x2c98a4: 0x5200ffca  beql        $s0, $zero, . + 4 + (-0x36 << 2)
label_2c98a8:
    if (ctx->pc == 0x2C98A8u) {
        ctx->pc = 0x2C98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98A4u;
        // 0x2c98a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C98ACu;
        goto label_2c98ac;
    }
    ctx->pc = 0x2C98A4u;
    {
        const bool branch_taken_0x2c98a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c98a4) {
            ctx->pc = 0x2C98A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C98A4u;
            // 0x2c98a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C98ACu;
label_2c98ac:
    // 0x2c98ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c98acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c98b0:
    // 0x2c98b0: 0xc0adb70  jal         func_2B6DC0
label_2c98b4:
    if (ctx->pc == 0x2C98B4u) {
        ctx->pc = 0x2C98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98B0u;
        // 0x2c98b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C98B8u;
        goto label_2c98b8;
    }
    ctx->pc = 0x2C98B0u;
    SET_GPR_U32(ctx, 31, 0x2C98B8u);
    ctx->pc = 0x2C98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98B0u;
    // 0x2c98b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DC0u, 0x2C98B0u, 0x2C98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98B8u;
label_2c98b8:
    // 0x2c98b8: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
label_2c98bc:
    if (ctx->pc == 0x2C98BCu) {
        ctx->pc = 0x2C98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98B8u;
        // 0x2c98bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C98C0u;
        goto label_2c98c0;
    }
    ctx->pc = 0x2C98B8u;
    {
        const bool branch_taken_0x2c98b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98B8u;
        // 0x2c98bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98b8) {
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C98C0u;
label_2c98c0:
    // 0x2c98c0: 0xc088ee6  jal         func_223B98
label_2c98c4:
    if (ctx->pc == 0x2C98C4u) {
        ctx->pc = 0x2C98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98C0u;
        // 0x2c98c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C98C8u;
        goto label_2c98c8;
    }
    ctx->pc = 0x2C98C0u;
    SET_GPR_U32(ctx, 31, 0x2C98C8u);
    ctx->pc = 0x2C98C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98C0u;
    // 0x2c98c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2C98C0u, 0x2C98C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98C8u;
label_2c98c8:
    // 0x2c98c8: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2c98cc:
    if (ctx->pc == 0x2C98CCu) {
        ctx->pc = 0x2C98D0u;
        goto label_2c98d0;
    }
    ctx->pc = 0x2C98C8u;
    {
        const bool branch_taken_0x2c98c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c98c8) {
            ctx->pc = 0x2C98F8u;
            goto label_2c98f8;
        }
    }
    ctx->pc = 0x2C98D0u;
label_2c98d0:
    // 0x2c98d0: 0xc0a4e54  jal         func_293950
label_2c98d4:
    if (ctx->pc == 0x2C98D4u) {
        ctx->pc = 0x2C98D8u;
        goto label_2c98d8;
    }
    ctx->pc = 0x2C98D0u;
    SET_GPR_U32(ctx, 31, 0x2C98D8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C98D0u, 0x2C98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98D8u;
label_2c98d8:
    // 0x2c98d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c98d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c98dc:
    // 0x2c98dc: 0x5200ffbc  beql        $s0, $zero, . + 4 + (-0x44 << 2)
label_2c98e0:
    if (ctx->pc == 0x2C98E0u) {
        ctx->pc = 0x2C98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98DCu;
        // 0x2c98e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C98E4u;
        goto label_2c98e4;
    }
    ctx->pc = 0x2C98DCu;
    {
        const bool branch_taken_0x2c98dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c98dc) {
            ctx->pc = 0x2C98E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C98DCu;
            // 0x2c98e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C98E4u;
label_2c98e4:
    // 0x2c98e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c98e8:
    // 0x2c98e8: 0xc0ad27e  jal         func_2B49F8
label_2c98ec:
    if (ctx->pc == 0x2C98ECu) {
        ctx->pc = 0x2C98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98E8u;
        // 0x2c98ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C98F0u;
        goto label_2c98f0;
    }
    ctx->pc = 0x2C98E8u;
    SET_GPR_U32(ctx, 31, 0x2C98F0u);
    ctx->pc = 0x2C98ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98E8u;
    // 0x2c98ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x2C98E8u, 0x2C98F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98F0u;
label_2c98f0:
    // 0x2c98f0: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
label_2c98f4:
    if (ctx->pc == 0x2C98F4u) {
        ctx->pc = 0x2C98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98F0u;
        // 0x2c98f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C98F8u;
        goto label_2c98f8;
    }
    ctx->pc = 0x2C98F0u;
    {
        const bool branch_taken_0x2c98f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98F0u;
        // 0x2c98f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98f0) {
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C98F8u;
label_2c98f8:
    // 0x2c98f8: 0xc088ef0  jal         func_223BC0
label_2c98fc:
    if (ctx->pc == 0x2C98FCu) {
        ctx->pc = 0x2C98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98F8u;
        // 0x2c98fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9900u;
        goto label_2c9900;
    }
    ctx->pc = 0x2C98F8u;
    SET_GPR_U32(ctx, 31, 0x2C9900u);
    ctx->pc = 0x2C98FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98F8u;
    // 0x2c98fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2C98F8u, 0x2C9900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9900u;
label_2c9900:
    // 0x2c9900: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
label_2c9904:
    if (ctx->pc == 0x2C9904u) {
        ctx->pc = 0x2C9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9900u;
        // 0x2c9904: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9908u;
        goto label_2c9908;
    }
    ctx->pc = 0x2C9900u;
    {
        const bool branch_taken_0x2c9900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c9900) {
            ctx->pc = 0x2C9904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9900u;
            // 0x2c9904: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9930u;
            goto label_2c9930;
        }
    }
    ctx->pc = 0x2C9908u;
label_2c9908:
    // 0x2c9908: 0xc0a4e54  jal         func_293950
label_2c990c:
    if (ctx->pc == 0x2C990Cu) {
        ctx->pc = 0x2C9910u;
        goto label_2c9910;
    }
    ctx->pc = 0x2C9908u;
    SET_GPR_U32(ctx, 31, 0x2C9910u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C9908u, 0x2C9910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9910u;
label_2c9910:
    // 0x2c9910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9914:
    // 0x2c9914: 0x5200ffae  beql        $s0, $zero, . + 4 + (-0x52 << 2)
label_2c9918:
    if (ctx->pc == 0x2C9918u) {
        ctx->pc = 0x2C9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9914u;
        // 0x2c9918: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C991Cu;
        goto label_2c991c;
    }
    ctx->pc = 0x2C9914u;
    {
        const bool branch_taken_0x2c9914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9914) {
            ctx->pc = 0x2C9918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9914u;
            // 0x2c9918: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C991Cu;
label_2c991c:
    // 0x2c991c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c991cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9920:
    // 0x2c9920: 0xc0ad2e2  jal         func_2B4B88
label_2c9924:
    if (ctx->pc == 0x2C9924u) {
        ctx->pc = 0x2C9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9920u;
        // 0x2c9924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9928u;
        goto label_2c9928;
    }
    ctx->pc = 0x2C9920u;
    SET_GPR_U32(ctx, 31, 0x2C9928u);
    ctx->pc = 0x2C9924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9920u;
    // 0x2c9924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B88u, 0x2C9920u, 0x2C9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9928u;
label_2c9928:
    // 0x2c9928: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
label_2c992c:
    if (ctx->pc == 0x2C992Cu) {
        ctx->pc = 0x2C992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9928u;
        // 0x2c992c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9930u;
        goto label_2c9930;
    }
    ctx->pc = 0x2C9928u;
    {
        const bool branch_taken_0x2c9928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9928u;
        // 0x2c992c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9928) {
            ctx->pc = 0x2C97D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97d0;
        }
    }
    ctx->pc = 0x2C9930u;
label_2c9930:
    // 0x2c9930: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2c9930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2c9934:
    // 0x2c9934: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2c9934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2c9938:
    // 0x2c9938: 0x7a860040  lq          $a2, 0x40($s4)
    ctx->pc = 0x2c9938u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 20), 64)));
label_2c993c:
    // 0x2c993c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c993cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c9940:
    // 0x2c9940: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2c9940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c9944:
    // 0x2c9944: 0x45a821  addu        $s5, $v0, $a1
    ctx->pc = 0x2c9944u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c9948:
    // 0x2c9948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c994c:
    // 0x2c994c: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x2c994cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2c9950:
    // 0x2c9950: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c9950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c9954:
    // 0x2c9954: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c9954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c9958:
    // 0x2c9958: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2c9958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2c995c:
    // 0x2c995c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c995cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2c9960:
    // 0x2c9960: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c9960u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2c9964:
    // 0x2c9964: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2c9964u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2c9968:
    // 0x2c9968: 0x85b021  addu        $s6, $a0, $a1
    ctx->pc = 0x2c9968u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2c996c:
    // 0x2c996c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2c996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2c9970:
    // 0x2c9970: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2c9970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2c9974:
    // 0x2c9974: 0x7a820050  lq          $v0, 0x50($s4)
    ctx->pc = 0x2c9974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
label_2c9978:
    // 0x2c9978: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c9978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2c997c:
    // 0x2c997c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2c997cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c9980:
    // 0x2c9980: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2c9980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c9984:
    // 0x2c9984: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c9984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c9988:
    // 0x2c9988: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c9988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c998c:
    // 0x2c998c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2c998cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c9990:
    // 0x2c9990: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x2c9990u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2c9994:
    // 0x2c9994: 0x0  nop
    ctx->pc = 0x2c9994u;
    // NOP
label_2c9998:
    // 0x2c9998: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2c9998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c999c:
    // 0x2c999c: 0x0  nop
    ctx->pc = 0x2c999cu;
    // NOP
label_2c99a0:
    // 0x2c99a0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2c99a4:
    if (ctx->pc == 0x2C99A4u) {
        ctx->pc = 0x2C99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99A0u;
        // 0x2c99a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99A8u;
        goto label_2c99a8;
    }
    ctx->pc = 0x2C99A0u;
    {
        const bool branch_taken_0x2c99a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99A0u;
        // 0x2c99a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99a0) {
            ctx->pc = 0x2C99FCu;
            goto label_2c99fc;
        }
    }
    ctx->pc = 0x2C99A8u;
label_2c99a8:
    // 0x2c99a8: 0xc0cdb38  jal         func_336CE0
label_2c99ac:
    if (ctx->pc == 0x2C99ACu) {
        ctx->pc = 0x2C99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99A8u;
        // 0x2c99ac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99B0u;
        goto label_2c99b0;
    }
    ctx->pc = 0x2C99A8u;
    SET_GPR_U32(ctx, 31, 0x2C99B0u);
    ctx->pc = 0x2C99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99A8u;
    // 0x2c99ac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C99A8u, 0x2C99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99B0u;
label_2c99b0:
    // 0x2c99b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c99b4:
    // 0x2c99b4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2c99b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2c99b8:
    // 0x2c99b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c99b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c99bc:
    // 0x2c99bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c99bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2c99c0:
    // 0x2c99c0: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2c99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c99c4:
    // 0x2c99c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c99c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2c99c8:
    // 0x2c99c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c99c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2c99cc:
    // 0x2c99cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c99ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c99d0:
    // 0x2c99d0: 0x0  nop
    ctx->pc = 0x2c99d0u;
    // NOP
label_2c99d4:
    // 0x2c99d4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2c99d8:
    if (ctx->pc == 0x2C99D8u) {
        ctx->pc = 0x2C99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99D4u;
        // 0x2c99d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99DCu;
        goto label_2c99dc;
    }
    ctx->pc = 0x2C99D4u;
    {
        const bool branch_taken_0x2c99d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99D4u;
        // 0x2c99d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99d4) {
            ctx->pc = 0x2C99FCu;
            goto label_2c99fc;
        }
    }
    ctx->pc = 0x2C99DCu;
label_2c99dc:
    // 0x2c99dc: 0xc088fa8  jal         func_223EA0
label_2c99e0:
    if (ctx->pc == 0x2C99E0u) {
        ctx->pc = 0x2C99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99DCu;
        // 0x2c99e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99E4u;
        goto label_2c99e4;
    }
    ctx->pc = 0x2C99DCu;
    SET_GPR_U32(ctx, 31, 0x2C99E4u);
    ctx->pc = 0x2C99E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99DCu;
    // 0x2c99e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2C99DCu, 0x2C99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99E4u;
label_2c99e4:
    // 0x2c99e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2c99e8:
    if (ctx->pc == 0x2C99E8u) {
        ctx->pc = 0x2C99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99E4u;
        // 0x2c99e8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99ECu;
        goto label_2c99ec;
    }
    ctx->pc = 0x2C99E4u;
    {
        const bool branch_taken_0x2c99e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c99e4) {
            ctx->pc = 0x2C99E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C99E4u;
            // 0x2c99e8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9A00u;
            goto label_2c9a00;
        }
    }
    ctx->pc = 0x2C99ECu;
label_2c99ec:
    // 0x2c99ec: 0xc089000  jal         func_224000
label_2c99f0:
    if (ctx->pc == 0x2C99F0u) {
        ctx->pc = 0x2C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99ECu;
        // 0x2c99f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99F4u;
        goto label_2c99f4;
    }
    ctx->pc = 0x2C99ECu;
    SET_GPR_U32(ctx, 31, 0x2C99F4u);
    ctx->pc = 0x2C99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C99ECu;
    // 0x2c99f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2C99ECu, 0x2C99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99F4u;
label_2c99f4:
    // 0x2c99f4: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
label_2c99f8:
    if (ctx->pc == 0x2C99F8u) {
        ctx->pc = 0x2C99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99F4u;
        // 0x2c99f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C99FCu;
        goto label_2c99fc;
    }
    ctx->pc = 0x2C99F4u;
    {
        const bool branch_taken_0x2c99f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c99f4) {
            ctx->pc = 0x2C99F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C99F4u;
            // 0x2c99f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C00u;
            goto label_2c9c00;
        }
    }
    ctx->pc = 0x2C99FCu;
label_2c99fc:
    // 0x2c99fc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2c99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c9a00:
    // 0x2c9a00: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2c9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2c9a04:
    // 0x2c9a04: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2c9a08:
    if (ctx->pc == 0x2C9A08u) {
        ctx->pc = 0x2C9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A04u;
        // 0x2c9a08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A0Cu;
        goto label_2c9a0c;
    }
    ctx->pc = 0x2C9A04u;
    {
        const bool branch_taken_0x2c9a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a04) {
            ctx->pc = 0x2C9A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9A04u;
            // 0x2c9a08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9A0Cu;
            goto label_2c9a0c;
        }
    }
    ctx->pc = 0x2C9A0Cu;
label_2c9a0c:
    // 0x2c9a0c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2c9a0cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2c9a10:
    // 0x2c9a10: 0x1810  mfhi        $v1
    ctx->pc = 0x2c9a10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2c9a14:
    // 0x2c9a14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2c9a18:
    if (ctx->pc == 0x2C9A18u) {
        ctx->pc = 0x2C9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A14u;
        // 0x2c9a18: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A1Cu;
        goto label_2c9a1c;
    }
    ctx->pc = 0x2C9A14u;
    {
        const bool branch_taken_0x2c9a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A14u;
        // 0x2c9a18: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a14) {
            ctx->pc = 0x2C9A38u;
            goto label_2c9a38;
        }
    }
    ctx->pc = 0x2C9A1Cu;
label_2c9a1c:
    // 0x2c9a1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9a20:
    // 0x2c9a20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c9a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c9a24:
    // 0x2c9a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9a28:
    // 0x2c9a28: 0xc0888a2  jal         func_222288
label_2c9a2c:
    if (ctx->pc == 0x2C9A2Cu) {
        ctx->pc = 0x2C9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A28u;
        // 0x2c9a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A30u;
        goto label_2c9a30;
    }
    ctx->pc = 0x2C9A28u;
    SET_GPR_U32(ctx, 31, 0x2C9A30u);
    ctx->pc = 0x2C9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A28u;
    // 0x2c9a2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2C9A28u, 0x2C9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A30u;
label_2c9a30:
    // 0x2c9a30: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_2c9a34:
    if (ctx->pc == 0x2C9A34u) {
        ctx->pc = 0x2C9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A30u;
        // 0x2c9a34: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A38u;
        goto label_2c9a38;
    }
    ctx->pc = 0x2C9A30u;
    {
        const bool branch_taken_0x2c9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A30u;
        // 0x2c9a34: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a30) {
            ctx->pc = 0x2C9C0Cu;
            goto label_2c9c0c;
        }
    }
    ctx->pc = 0x2C9A38u;
label_2c9a38:
    // 0x2c9a38: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2c9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c9a3c:
    // 0x2c9a3c: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2c9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2c9a40:
    // 0x2c9a40: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2c9a44:
    // 0x2c9a44: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2c9a44u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c9a48:
    // 0x2c9a48: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_2c9a4c:
    if (ctx->pc == 0x2C9A4Cu) {
        ctx->pc = 0x2C9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A48u;
        // 0x2c9a4c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A50u;
        goto label_2c9a50;
    }
    ctx->pc = 0x2C9A48u;
    {
        const bool branch_taken_0x2c9a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A48u;
        // 0x2c9a4c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a48) {
            ctx->pc = 0x2C9ABCu;
            goto label_2c9abc;
        }
    }
    ctx->pc = 0x2C9A50u;
label_2c9a50:
    // 0x2c9a50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9a54:
    // 0x2c9a54: 0xc0a3fa4  jal         func_28FE90
label_2c9a58:
    if (ctx->pc == 0x2C9A58u) {
        ctx->pc = 0x2C9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A54u;
        // 0x2c9a58: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A5Cu;
        goto label_2c9a5c;
    }
    ctx->pc = 0x2C9A54u;
    SET_GPR_U32(ctx, 31, 0x2C9A5Cu);
    ctx->pc = 0x2C9A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A54u;
    // 0x2c9a58: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2C9A54u, 0x2C9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A5Cu;
label_2c9a5c:
    // 0x2c9a5c: 0xc0e409a  jal         func_390268
label_2c9a60:
    if (ctx->pc == 0x2C9A60u) {
        ctx->pc = 0x2C9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A5Cu;
        // 0x2c9a60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A64u;
        goto label_2c9a64;
    }
    ctx->pc = 0x2C9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A64u);
    ctx->pc = 0x2C9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A5Cu;
    // 0x2c9a60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C9A5Cu, 0x2C9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A64u;
label_2c9a64:
    // 0x2c9a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9a68:
    // 0x2c9a68: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2c9a6c:
    if (ctx->pc == 0x2C9A6Cu) {
        ctx->pc = 0x2C9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A68u;
        // 0x2c9a6c: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A70u;
        goto label_2c9a70;
    }
    ctx->pc = 0x2C9A68u;
    {
        const bool branch_taken_0x2c9a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A68u;
        // 0x2c9a6c: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a68) {
            ctx->pc = 0x2C9AB0u;
            goto label_2c9ab0;
        }
    }
    ctx->pc = 0x2C9A70u;
label_2c9a70:
    // 0x2c9a70: 0x52130010  beql        $s0, $s3, . + 4 + (0x10 << 2)
label_2c9a74:
    if (ctx->pc == 0x2C9A74u) {
        ctx->pc = 0x2C9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A70u;
        // 0x2c9a74: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A78u;
        goto label_2c9a78;
    }
    ctx->pc = 0x2C9A70u;
    {
        const bool branch_taken_0x2c9a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c9a70) {
            ctx->pc = 0x2C9A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9A70u;
            // 0x2c9a74: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9AB4u;
            goto label_2c9ab4;
        }
    }
    ctx->pc = 0x2C9A78u;
label_2c9a78:
    // 0x2c9a78: 0xc087502  jal         func_21D408
label_2c9a7c:
    if (ctx->pc == 0x2C9A7Cu) {
        ctx->pc = 0x2C9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A78u;
        // 0x2c9a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A80u;
        goto label_2c9a80;
    }
    ctx->pc = 0x2C9A78u;
    SET_GPR_U32(ctx, 31, 0x2C9A80u);
    ctx->pc = 0x2C9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A78u;
    // 0x2c9a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C9A78u, 0x2C9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A80u;
label_2c9a80:
    // 0x2c9a80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9a84:
    // 0x2c9a84: 0xc0a404e  jal         func_290138
label_2c9a88:
    if (ctx->pc == 0x2C9A88u) {
        ctx->pc = 0x2C9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A84u;
        // 0x2c9a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A8Cu;
        goto label_2c9a8c;
    }
    ctx->pc = 0x2C9A84u;
    SET_GPR_U32(ctx, 31, 0x2C9A8Cu);
    ctx->pc = 0x2C9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9A84u;
    // 0x2c9a88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2C9A84u, 0x2C9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A8Cu;
label_2c9a8c:
    // 0x2c9a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9a90:
    // 0x2c9a90: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2c9a94:
    if (ctx->pc == 0x2C9A94u) {
        ctx->pc = 0x2C9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A90u;
        // 0x2c9a94: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A98u;
        goto label_2c9a98;
    }
    ctx->pc = 0x2C9A90u;
    {
        const bool branch_taken_0x2c9a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A90u;
        // 0x2c9a94: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a90) {
            ctx->pc = 0x2C9AB0u;
            goto label_2c9ab0;
        }
    }
    ctx->pc = 0x2C9A98u;
label_2c9a98:
    // 0x2c9a98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9a9c:
    // 0x2c9a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9aa0:
    // 0x2c9aa0: 0xc0a33f8  jal         func_28CFE0
label_2c9aa4:
    if (ctx->pc == 0x2C9AA4u) {
        ctx->pc = 0x2C9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AA0u;
        // 0x2c9aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9AA8u;
        goto label_2c9aa8;
    }
    ctx->pc = 0x2C9AA0u;
    SET_GPR_U32(ctx, 31, 0x2C9AA8u);
    ctx->pc = 0x2C9AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AA0u;
    // 0x2c9aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2C9AA0u, 0x2C9AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AA8u;
label_2c9aa8:
    // 0x2c9aa8: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2c9aac:
    if (ctx->pc == 0x2C9AACu) {
        ctx->pc = 0x2C9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AA8u;
        // 0x2c9aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9AB0u;
        goto label_2c9ab0;
    }
    ctx->pc = 0x2C9AA8u;
    {
        const bool branch_taken_0x2c9aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AA8u;
        // 0x2c9aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9aa8) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9AB0u;
label_2c9ab0:
    // 0x2c9ab0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c9ab4:
    // 0x2c9ab4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2c9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
label_2c9ab8:
    // 0x2c9ab8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2c9ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2c9abc:
    // 0x2c9abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9ac0:
    // 0x2c9ac0: 0xc0a7c26  jal         func_29F098
label_2c9ac4:
    if (ctx->pc == 0x2C9AC4u) {
        ctx->pc = 0x2C9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AC0u;
        // 0x2c9ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9AC8u;
        goto label_2c9ac8;
    }
    ctx->pc = 0x2C9AC0u;
    SET_GPR_U32(ctx, 31, 0x2C9AC8u);
    ctx->pc = 0x2C9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AC0u;
    // 0x2c9ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F098u, 0x2C9AC0u, 0x2C9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AC8u;
label_2c9ac8:
    // 0x2c9ac8: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
label_2c9acc:
    if (ctx->pc == 0x2C9ACCu) {
        ctx->pc = 0x2C9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AC8u;
        // 0x2c9acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9AD0u;
        goto label_2c9ad0;
    }
    ctx->pc = 0x2C9AC8u;
    {
        const bool branch_taken_0x2c9ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AC8u;
        // 0x2c9acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ac8) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9AD0u;
label_2c9ad0:
    // 0x2c9ad0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9ad4:
    // 0x2c9ad4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c9ad4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c9ad8:
    // 0x2c9ad8: 0x1c600091  bgtz        $v1, . + 4 + (0x91 << 2)
label_2c9adc:
    if (ctx->pc == 0x2C9ADCu) {
        ctx->pc = 0x2C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AD8u;
        // 0x2c9adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9AE0u;
        goto label_2c9ae0;
    }
    ctx->pc = 0x2C9AD8u;
    {
        const bool branch_taken_0x2c9ad8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AD8u;
        // 0x2c9adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ad8) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9AE0u;
label_2c9ae0:
    // 0x2c9ae0: 0xc087502  jal         func_21D408
label_2c9ae4:
    if (ctx->pc == 0x2C9AE4u) {
        ctx->pc = 0x2C9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AE0u;
        // 0x2c9ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9AE8u;
        goto label_2c9ae8;
    }
    ctx->pc = 0x2C9AE0u;
    SET_GPR_U32(ctx, 31, 0x2C9AE8u);
    ctx->pc = 0x2C9AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AE0u;
    // 0x2c9ae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C9AE0u, 0x2C9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AE8u;
label_2c9ae8:
    // 0x2c9ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9aec:
    // 0x2c9aec: 0xc0a445e  jal         func_291178
label_2c9af0:
    if (ctx->pc == 0x2C9AF0u) {
        ctx->pc = 0x2C9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AECu;
        // 0x2c9af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9AF4u;
        goto label_2c9af4;
    }
    ctx->pc = 0x2C9AECu;
    SET_GPR_U32(ctx, 31, 0x2C9AF4u);
    ctx->pc = 0x2C9AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AECu;
    // 0x2c9af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2C9AECu, 0x2C9AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AF4u;
label_2c9af4:
    // 0x2c9af4: 0x8e82b734  lw          $v0, -0x48CC($s4)
    ctx->pc = 0x2c9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
label_2c9af8:
    // 0x2c9af8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2c9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2c9afc:
    // 0x2c9afc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2c9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2c9b00:
    // 0x2c9b00: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2c9b00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c9b04:
    // 0x2c9b04: 0x14600086  bnez        $v1, . + 4 + (0x86 << 2)
label_2c9b08:
    if (ctx->pc == 0x2C9B08u) {
        ctx->pc = 0x2C9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B04u;
        // 0x2c9b08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B0Cu;
        goto label_2c9b0c;
    }
    ctx->pc = 0x2C9B04u;
    {
        const bool branch_taken_0x2c9b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B04u;
        // 0x2c9b08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b04) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9B0Cu;
label_2c9b0c:
    // 0x2c9b0c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2c9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c9b10:
    // 0x2c9b10: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2c9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2c9b14:
    // 0x2c9b14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2c9b18:
    if (ctx->pc == 0x2C9B18u) {
        ctx->pc = 0x2C9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B14u;
        // 0x2c9b18: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B1Cu;
        goto label_2c9b1c;
    }
    ctx->pc = 0x2C9B14u;
    {
        const bool branch_taken_0x2c9b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B14u;
        // 0x2c9b18: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b14) {
            ctx->pc = 0x2C9B34u;
            goto label_2c9b34;
        }
    }
    ctx->pc = 0x2C9B1Cu;
label_2c9b1c:
    // 0x2c9b1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9b20:
    // 0x2c9b20: 0x68465b17  ldl         $a2, 0x5B17($v0)
    ctx->pc = 0x2c9b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2c9b24:
    // 0x2c9b24: 0x6c465b10  ldr         $a2, 0x5B10($v0)
    ctx->pc = 0x2c9b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c9b28:
    // 0x2c9b28: 0xc0a39c2  jal         func_28E708
label_2c9b2c:
    if (ctx->pc == 0x2C9B2Cu) {
        ctx->pc = 0x2C9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B28u;
        // 0x2c9b2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B30u;
        goto label_2c9b30;
    }
    ctx->pc = 0x2C9B28u;
    SET_GPR_U32(ctx, 31, 0x2C9B30u);
    ctx->pc = 0x2C9B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B28u;
    // 0x2c9b2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2C9B28u, 0x2C9B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B30u;
label_2c9b30:
    // 0x2c9b30: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2c9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2c9b34:
    // 0x2c9b34: 0xc08a6d8  jal         func_229B60
label_2c9b38:
    if (ctx->pc == 0x2C9B38u) {
        ctx->pc = 0x2C9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B34u;
        // 0x2c9b38: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B3Cu;
        goto label_2c9b3c;
    }
    ctx->pc = 0x2C9B34u;
    SET_GPR_U32(ctx, 31, 0x2C9B3Cu);
    ctx->pc = 0x2C9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B34u;
    // 0x2c9b38: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B60u, 0x2C9B34u, 0x2C9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B3Cu;
label_2c9b3c:
    // 0x2c9b3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9b40:
    // 0x2c9b40: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2c9b44:
    if (ctx->pc == 0x2C9B44u) {
        ctx->pc = 0x2C9B48u;
        goto label_2c9b48;
    }
    ctx->pc = 0x2C9B40u;
    {
        const bool branch_taken_0x2c9b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9b40) {
            ctx->pc = 0x2C9B64u;
            goto label_2c9b64;
        }
    }
    ctx->pc = 0x2C9B48u;
label_2c9b48:
    // 0x2c9b48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c9b4c:
    // 0x2c9b4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c9b50:
    if (ctx->pc == 0x2C9B50u) {
        ctx->pc = 0x2C9B54u;
        goto label_2c9b54;
    }
    ctx->pc = 0x2C9B4Cu;
    {
        const bool branch_taken_0x2c9b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b4c) {
            ctx->pc = 0x2C9B64u;
            goto label_2c9b64;
        }
    }
    ctx->pc = 0x2C9B54u;
label_2c9b54:
    // 0x2c9b54: 0xc08bfbc  jal         func_22FEF0
label_2c9b58:
    if (ctx->pc == 0x2C9B58u) {
        ctx->pc = 0x2C9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B54u;
        // 0x2c9b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B5Cu;
        goto label_2c9b5c;
    }
    ctx->pc = 0x2C9B54u;
    SET_GPR_U32(ctx, 31, 0x2C9B5Cu);
    ctx->pc = 0x2C9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B54u;
    // 0x2c9b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2C9B54u, 0x2C9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B5Cu;
label_2c9b5c:
    // 0x2c9b5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c9b60:
    if (ctx->pc == 0x2C9B60u) {
        ctx->pc = 0x2C9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B5Cu;
        // 0x2c9b60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B64u;
        goto label_2c9b64;
    }
    ctx->pc = 0x2C9B5Cu;
    {
        const bool branch_taken_0x2c9b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B5Cu;
        // 0x2c9b60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b5c) {
            ctx->pc = 0x2C9B70u;
            goto label_2c9b70;
        }
    }
    ctx->pc = 0x2C9B64u;
label_2c9b64:
    // 0x2c9b64: 0xc08bfa0  jal         func_22FE80
label_2c9b68:
    if (ctx->pc == 0x2C9B68u) {
        ctx->pc = 0x2C9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B64u;
        // 0x2c9b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B6Cu;
        goto label_2c9b6c;
    }
    ctx->pc = 0x2C9B64u;
    SET_GPR_U32(ctx, 31, 0x2C9B6Cu);
    ctx->pc = 0x2C9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B64u;
    // 0x2c9b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2C9B64u, 0x2C9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B6Cu;
label_2c9b6c:
    // 0x2c9b6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9b70:
    // 0x2c9b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b74:
    // 0x2c9b74: 0xc0a41ae  jal         func_2906B8
label_2c9b78:
    if (ctx->pc == 0x2C9B78u) {
        ctx->pc = 0x2C9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B74u;
        // 0x2c9b78: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B7Cu;
        goto label_2c9b7c;
    }
    ctx->pc = 0x2C9B74u;
    SET_GPR_U32(ctx, 31, 0x2C9B7Cu);
    ctx->pc = 0x2C9B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B74u;
    // 0x2c9b78: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2C9B74u, 0x2C9B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B7Cu;
label_2c9b7c:
    // 0x2c9b7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c9b7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b80:
    // 0x2c9b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9b84:
    // 0x2c9b84: 0x16820066  bne         $s4, $v0, . + 4 + (0x66 << 2)
label_2c9b88:
    if (ctx->pc == 0x2C9B88u) {
        ctx->pc = 0x2C9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B84u;
        // 0x2c9b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B8Cu;
        goto label_2c9b8c;
    }
    ctx->pc = 0x2C9B84u;
    {
        const bool branch_taken_0x2c9b84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B84u;
        // 0x2c9b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b84) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9B8Cu;
label_2c9b8c:
    // 0x2c9b8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b90:
    // 0x2c9b90: 0xc0cdb38  jal         func_336CE0
label_2c9b94:
    if (ctx->pc == 0x2C9B94u) {
        ctx->pc = 0x2C9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B90u;
        // 0x2c9b94: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B98u;
        goto label_2c9b98;
    }
    ctx->pc = 0x2C9B90u;
    SET_GPR_U32(ctx, 31, 0x2C9B98u);
    ctx->pc = 0x2C9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B90u;
    // 0x2c9b94: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C9B90u, 0x2C9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B98u;
label_2c9b98:
    // 0x2c9b98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c9b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c9b9c:
    // 0x2c9b9c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2c9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c9ba0:
    // 0x2c9ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9ba4:
    // 0x2c9ba4: 0xc08c24c  jal         func_230930
label_2c9ba8:
    if (ctx->pc == 0x2C9BA8u) {
        ctx->pc = 0x2C9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BA4u;
        // 0x2c9ba8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9BACu;
        goto label_2c9bac;
    }
    ctx->pc = 0x2C9BA4u;
    SET_GPR_U32(ctx, 31, 0x2C9BACu);
    ctx->pc = 0x2C9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9BA4u;
    // 0x2c9ba8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230930u, 0x2C9BA4u, 0x2C9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BACu;
label_2c9bac:
    // 0x2c9bac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c9bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c9bb0:
    // 0x2c9bb0: 0x0  nop
    ctx->pc = 0x2c9bb0u;
    // NOP
label_2c9bb4:
    // 0x2c9bb4: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_2c9bb8:
    if (ctx->pc == 0x2C9BB8u) {
        ctx->pc = 0x2C9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BB4u;
        // 0x2c9bb8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9BBCu;
        goto label_2c9bbc;
    }
    ctx->pc = 0x2C9BB4u;
    {
        const bool branch_taken_0x2c9bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9bb4) {
            ctx->pc = 0x2C9BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9BB4u;
            // 0x2c9bb8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C48u;
            goto label_2c9c48;
        }
    }
    ctx->pc = 0x2C9BBCu;
label_2c9bbc:
    // 0x2c9bbc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2c9bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2c9bc0:
    // 0x2c9bc0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2c9bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2c9bc4:
    // 0x2c9bc4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c9bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2c9bc8:
    // 0x2c9bc8: 0x0  nop
    ctx->pc = 0x2c9bc8u;
    // NOP
label_2c9bcc:
    // 0x2c9bcc: 0x0  nop
    ctx->pc = 0x2c9bccu;
    // NOP
label_2c9bd0:
    // 0x2c9bd0: 0x46000504  c1          0x504
    ctx->pc = 0x2c9bd0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2c9bd4:
    // 0x2c9bd4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2c9bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c9bd8:
    // 0x2c9bd8: 0x0  nop
    ctx->pc = 0x2c9bd8u;
    // NOP
label_2c9bdc:
    // 0x2c9bdc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2c9be0:
    if (ctx->pc == 0x2C9BE0u) {
        ctx->pc = 0x2C9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BDCu;
        // 0x2c9be0: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9BE4u;
        goto label_2c9be4;
    }
    ctx->pc = 0x2C9BDCu;
    {
        const bool branch_taken_0x2c9bdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9bdc) {
            ctx->pc = 0x2C9BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9BDCu;
            // 0x2c9be0: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9BE4u;
            goto label_2c9be4;
        }
    }
    ctx->pc = 0x2C9BE4u;
label_2c9be4:
    // 0x2c9be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9be8:
    // 0x2c9be8: 0x0  nop
    ctx->pc = 0x2c9be8u;
    // NOP
label_2c9bec:
    // 0x2c9bec: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2c9becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c9bf0:
    // 0x2c9bf0: 0x0  nop
    ctx->pc = 0x2c9bf0u;
    // NOP
label_2c9bf4:
    // 0x2c9bf4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2c9bf8:
    if (ctx->pc == 0x2C9BF8u) {
        ctx->pc = 0x2C9BFCu;
        goto label_2c9bfc;
    }
    ctx->pc = 0x2C9BF4u;
    {
        const bool branch_taken_0x2c9bf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9bf4) {
            ctx->pc = 0x2C9C14u;
            goto label_2c9c14;
        }
    }
    ctx->pc = 0x2C9BFCu;
label_2c9bfc:
    // 0x2c9bfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9c00:
    // 0x2c9c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c9c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c04:
    // 0x2c9c04: 0xc0a33f8  jal         func_28CFE0
label_2c9c08:
    if (ctx->pc == 0x2C9C08u) {
        ctx->pc = 0x2C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C04u;
        // 0x2c9c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C0Cu;
        goto label_2c9c0c;
    }
    ctx->pc = 0x2C9C04u;
    SET_GPR_U32(ctx, 31, 0x2C9C0Cu);
    ctx->pc = 0x2C9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C04u;
    // 0x2c9c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2C9C04u, 0x2C9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C0Cu;
label_2c9c0c:
    // 0x2c9c0c: 0x10000044  b           . + 4 + (0x44 << 2)
label_2c9c10:
    if (ctx->pc == 0x2C9C10u) {
        ctx->pc = 0x2C9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C0Cu;
        // 0x2c9c10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C14u;
        goto label_2c9c14;
    }
    ctx->pc = 0x2C9C0Cu;
    {
        const bool branch_taken_0x2c9c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C0Cu;
        // 0x2c9c10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c0c) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9C14u;
label_2c9c14:
    // 0x2c9c14: 0xc0a367c  jal         func_28D9F0
label_2c9c18:
    if (ctx->pc == 0x2C9C18u) {
        ctx->pc = 0x2C9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C14u;
        // 0x2c9c18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C1Cu;
        goto label_2c9c1c;
    }
    ctx->pc = 0x2C9C14u;
    SET_GPR_U32(ctx, 31, 0x2C9C1Cu);
    ctx->pc = 0x2C9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C14u;
    // 0x2c9c18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C9C14u, 0x2C9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C1Cu;
label_2c9c1c:
    // 0x2c9c1c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_2c9c20:
    if (ctx->pc == 0x2C9C20u) {
        ctx->pc = 0x2C9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C1Cu;
        // 0x2c9c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C24u;
        goto label_2c9c24;
    }
    ctx->pc = 0x2C9C1Cu;
    {
        const bool branch_taken_0x2c9c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C1Cu;
        // 0x2c9c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c1c) {
            ctx->pc = 0x2C9D1Cu;
            goto label_2c9d1c;
        }
    }
    ctx->pc = 0x2C9C24u;
label_2c9c24:
    // 0x2c9c24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9c28:
    // 0x2c9c28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c9c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c2c:
    // 0x2c9c2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c9c2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2c9c30:
    // 0x2c9c30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2c9c30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2c9c34:
    // 0x2c9c34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c9c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c38:
    // 0x2c9c38: 0xc0bf3d4  jal         func_2FCF50
label_2c9c3c:
    if (ctx->pc == 0x2C9C3Cu) {
        ctx->pc = 0x2C9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C38u;
        // 0x2c9c3c: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C40u;
        goto label_2c9c40;
    }
    ctx->pc = 0x2C9C38u;
    SET_GPR_U32(ctx, 31, 0x2C9C40u);
    ctx->pc = 0x2C9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C38u;
    // 0x2c9c3c: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2C9C38u, 0x2C9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C40u;
label_2c9c40:
    // 0x2c9c40: 0x10000037  b           . + 4 + (0x37 << 2)
label_2c9c44:
    if (ctx->pc == 0x2C9C44u) {
        ctx->pc = 0x2C9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C40u;
        // 0x2c9c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C48u;
        goto label_2c9c48;
    }
    ctx->pc = 0x2C9C40u;
    {
        const bool branch_taken_0x2c9c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C40u;
        // 0x2c9c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c40) {
            ctx->pc = 0x2C9D20u;
            goto label_2c9d20;
        }
    }
    ctx->pc = 0x2C9C48u;
label_2c9c48:
    // 0x2c9c48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c9c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c9c4c:
    // 0x2c9c4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c9c50:
    // 0x2c9c50: 0x40f809  jalr        $v0
label_2c9c54:
    if (ctx->pc == 0x2C9C54u) {
        ctx->pc = 0x2C9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C50u;
        // 0x2c9c54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C58u;
        goto label_2c9c58;
    }
    ctx->pc = 0x2C9C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C9C58u);
        ctx->pc = 0x2C9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C50u;
        // 0x2c9c54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9C50u, 0x2C9C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C9C58u;
label_2c9c58:
    // 0x2c9c58: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x2c9c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_2c9c5c:
    // 0x2c9c5c: 0xc08a200  jal         func_228800
label_2c9c60:
    if (ctx->pc == 0x2C9C60u) {
        ctx->pc = 0x2C9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C5Cu;
        // 0x2c9c60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C64u;
        goto label_2c9c64;
    }
    ctx->pc = 0x2C9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C64u);
    ctx->pc = 0x2C9C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C5Cu;
    // 0x2c9c60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2C9C5Cu, 0x2C9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C64u;
label_2c9c64:
    // 0x2c9c64: 0x90430134  lbu         $v1, 0x134($v0)
    ctx->pc = 0x2c9c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 308)));
label_2c9c68:
    // 0x2c9c68: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_2c9c6c:
    if (ctx->pc == 0x2C9C6Cu) {
        ctx->pc = 0x2C9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C68u;
        // 0x2c9c6c: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C70u;
        goto label_2c9c70;
    }
    ctx->pc = 0x2C9C68u;
    {
        const bool branch_taken_0x2c9c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c68) {
            ctx->pc = 0x2C9C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9C68u;
            // 0x2c9c6c: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CC4u;
            goto label_2c9cc4;
        }
    }
    ctx->pc = 0x2C9C70u;
label_2c9c70:
    // 0x2c9c70: 0xc087502  jal         func_21D408
label_2c9c74:
    if (ctx->pc == 0x2C9C74u) {
        ctx->pc = 0x2C9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C70u;
        // 0x2c9c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C78u;
        goto label_2c9c78;
    }
    ctx->pc = 0x2C9C70u;
    SET_GPR_U32(ctx, 31, 0x2C9C78u);
    ctx->pc = 0x2C9C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C70u;
    // 0x2c9c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C9C70u, 0x2C9C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C78u;
label_2c9c78:
    // 0x2c9c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c7c:
    // 0x2c9c7c: 0xc0a3fa4  jal         func_28FE90
label_2c9c80:
    if (ctx->pc == 0x2C9C80u) {
        ctx->pc = 0x2C9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C7Cu;
        // 0x2c9c80: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C84u;
        goto label_2c9c84;
    }
    ctx->pc = 0x2C9C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C84u);
    ctx->pc = 0x2C9C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C7Cu;
    // 0x2c9c80: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2C9C7Cu, 0x2C9C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C84u;
label_2c9c84:
    // 0x2c9c84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c9c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c88:
    // 0x2c9c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c8c:
    // 0x2c9c8c: 0xc0a7ab6  jal         func_29EAD8
label_2c9c90:
    if (ctx->pc == 0x2C9C90u) {
        ctx->pc = 0x2C9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C8Cu;
        // 0x2c9c90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C94u;
        goto label_2c9c94;
    }
    ctx->pc = 0x2C9C8Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C94u);
    ctx->pc = 0x2C9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C8Cu;
    // 0x2c9c90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x2C9C8Cu, 0x2C9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C94u;
label_2c9c94:
    // 0x2c9c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c98:
    // 0x2c9c98: 0x5614000a  bnel        $s0, $s4, . + 4 + (0xA << 2)
label_2c9c9c:
    if (ctx->pc == 0x2C9C9Cu) {
        ctx->pc = 0x2C9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C98u;
        // 0x2c9c9c: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CA0u;
        goto label_2c9ca0;
    }
    ctx->pc = 0x2C9C98u;
    {
        const bool branch_taken_0x2c9c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x2c9c98) {
            ctx->pc = 0x2C9C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9C98u;
            // 0x2c9c9c: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CC4u;
            goto label_2c9cc4;
        }
    }
    ctx->pc = 0x2C9CA0u;
label_2c9ca0:
    // 0x2c9ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9ca4:
    // 0x2c9ca4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c9ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c9ca8:
    // 0x2c9ca8: 0xc0891de  jal         func_224778
label_2c9cac:
    if (ctx->pc == 0x2C9CACu) {
        ctx->pc = 0x2C9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CA8u;
        // 0x2c9cac: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CB0u;
        goto label_2c9cb0;
    }
    ctx->pc = 0x2C9CA8u;
    SET_GPR_U32(ctx, 31, 0x2C9CB0u);
    ctx->pc = 0x2C9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9CA8u;
    // 0x2c9cac: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2C9CA8u, 0x2C9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CB0u;
label_2c9cb0:
    // 0x2c9cb0: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2c9cb4:
    if (ctx->pc == 0x2C9CB4u) {
        ctx->pc = 0x2C9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CB0u;
        // 0x2c9cb4: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CB8u;
        goto label_2c9cb8;
    }
    ctx->pc = 0x2C9CB0u;
    {
        const bool branch_taken_0x2c9cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c9cb0) {
            ctx->pc = 0x2C9CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9CB0u;
            // 0x2c9cb4: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CC4u;
            goto label_2c9cc4;
        }
    }
    ctx->pc = 0x2C9CB8u;
label_2c9cb8:
    // 0x2c9cb8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2c9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c9cbc:
    // 0x2c9cbc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2c9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2c9cc0:
    // 0x2c9cc0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2c9cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c9cc4:
    // 0x2c9cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9cc8:
    // 0x2c9cc8: 0xc0891de  jal         func_224778
label_2c9ccc:
    if (ctx->pc == 0x2C9CCCu) {
        ctx->pc = 0x2C9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CC8u;
        // 0x2c9ccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CD0u;
        goto label_2c9cd0;
    }
    ctx->pc = 0x2C9CC8u;
    SET_GPR_U32(ctx, 31, 0x2C9CD0u);
    ctx->pc = 0x2C9CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9CC8u;
    // 0x2c9ccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2C9CC8u, 0x2C9CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CD0u;
label_2c9cd0:
    // 0x2c9cd0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2c9cd4:
    if (ctx->pc == 0x2C9CD4u) {
        ctx->pc = 0x2C9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CD0u;
        // 0x2c9cd4: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CD8u;
        goto label_2c9cd8;
    }
    ctx->pc = 0x2C9CD0u;
    {
        const bool branch_taken_0x2c9cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cd0) {
            ctx->pc = 0x2C9CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9CD0u;
            // 0x2c9cd4: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CF8u;
            goto label_2c9cf8;
        }
    }
    ctx->pc = 0x2C9CD8u;
label_2c9cd8:
    // 0x2c9cd8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2c9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2c9cdc:
    // 0x2c9cdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9ce0:
    // 0x2c9ce0: 0x68465b1f  ldl         $a2, 0x5B1F($v0)
    ctx->pc = 0x2c9ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2c9ce4:
    // 0x2c9ce4: 0x6c465b18  ldr         $a2, 0x5B18($v0)
    ctx->pc = 0x2c9ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c9ce8:
    // 0x2c9ce8: 0xc0a39c2  jal         func_28E708
label_2c9cec:
    if (ctx->pc == 0x2C9CECu) {
        ctx->pc = 0x2C9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CE8u;
        // 0x2c9cec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CF0u;
        goto label_2c9cf0;
    }
    ctx->pc = 0x2C9CE8u;
    SET_GPR_U32(ctx, 31, 0x2C9CF0u);
    ctx->pc = 0x2C9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9CE8u;
    // 0x2c9cec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2C9CE8u, 0x2C9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CF0u;
label_2c9cf0:
    // 0x2c9cf0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2c9cf4:
    if (ctx->pc == 0x2C9CF4u) {
        ctx->pc = 0x2C9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CF0u;
        // 0x2c9cf4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CF8u;
        goto label_2c9cf8;
    }
    ctx->pc = 0x2C9CF0u;
    {
        const bool branch_taken_0x2c9cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CF0u;
        // 0x2c9cf4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cf0) {
            ctx->pc = 0x2C9D1Cu;
            goto label_2c9d1c;
        }
    }
    ctx->pc = 0x2C9CF8u;
label_2c9cf8:
    // 0x2c9cf8: 0x2410002d  addiu       $s0, $zero, 0x2D
    ctx->pc = 0x2c9cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2c9cfc:
    // 0x2c9cfc: 0x10d00007  beq         $a2, $s0, . + 4 + (0x7 << 2)
label_2c9d00:
    if (ctx->pc == 0x2C9D00u) {
        ctx->pc = 0x2C9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CFCu;
        // 0x2c9d00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9D04u;
        goto label_2c9d04;
    }
    ctx->pc = 0x2C9CFCu;
    {
        const bool branch_taken_0x2c9cfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CFCu;
        // 0x2c9d00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cfc) {
            ctx->pc = 0x2C9D1Cu;
            goto label_2c9d1c;
        }
    }
    ctx->pc = 0x2C9D04u;
label_2c9d04:
    // 0x2c9d04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9d08:
    // 0x2c9d08: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c9d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2c9d0c:
    // 0x2c9d0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c9d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c9d10:
    // 0x2c9d10: 0xc0a3892  jal         func_28E248
label_2c9d14:
    if (ctx->pc == 0x2C9D14u) {
        ctx->pc = 0x2C9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D10u;
        // 0x2c9d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9D18u;
        goto label_2c9d18;
    }
    ctx->pc = 0x2C9D10u;
    SET_GPR_U32(ctx, 31, 0x2C9D18u);
    ctx->pc = 0x2C9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D10u;
    // 0x2c9d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2C9D10u, 0x2C9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D18u;
label_2c9d18:
    // 0x2c9d18: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2c9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_2c9d1c:
    // 0x2c9d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9d20:
    // 0x2c9d20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c9d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c9d24:
    // 0x2c9d24: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c9d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c9d28:
    // 0x2c9d28: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c9d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c9d2c:
    // 0x2c9d2c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c9d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c9d30:
    // 0x2c9d30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c9d30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c9d34:
    // 0x2c9d34: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c9d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c9d38:
    // 0x2c9d38: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2c9d38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c9d3c:
    // 0x2c9d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9d40:
    // 0x2c9d40: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2c9d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2c9d44:
    // 0x2c9d44: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c9d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c9d48:
    // 0x2c9d48: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c9d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c9d4c:
    // 0x2c9d4c: 0x3e00008  jr          $ra
label_2c9d50:
    if (ctx->pc == 0x2C9D50u) {
        ctx->pc = 0x2C9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D4Cu;
        // 0x2c9d50: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9D54u;
        goto label_2c9d54;
    }
    ctx->pc = 0x2C9D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D4Cu;
        // 0x2c9d50: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9D54u;
label_2c9d54:
    // 0x2c9d54: 0x0  nop
    ctx->pc = 0x2c9d54u;
    // NOP
    ctx->pc = 0x2c9d58u;
}
