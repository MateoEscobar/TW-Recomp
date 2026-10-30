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

// Function: sub_002906B8
// Address: 0x2906b8 - 0x290e30
void sub_002906B8_0x2906b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002906B8_0x2906b8");
#endif

    switch (ctx->pc) {
        case 0x2906b8u: goto label_2906b8;
        case 0x2906bcu: goto label_2906bc;
        case 0x2906c0u: goto label_2906c0;
        case 0x2906c4u: goto label_2906c4;
        case 0x2906c8u: goto label_2906c8;
        case 0x2906ccu: goto label_2906cc;
        case 0x2906d0u: goto label_2906d0;
        case 0x2906d4u: goto label_2906d4;
        case 0x2906d8u: goto label_2906d8;
        case 0x2906dcu: goto label_2906dc;
        case 0x2906e0u: goto label_2906e0;
        case 0x2906e4u: goto label_2906e4;
        case 0x2906e8u: goto label_2906e8;
        case 0x2906ecu: goto label_2906ec;
        case 0x2906f0u: goto label_2906f0;
        case 0x2906f4u: goto label_2906f4;
        case 0x2906f8u: goto label_2906f8;
        case 0x2906fcu: goto label_2906fc;
        case 0x290700u: goto label_290700;
        case 0x290704u: goto label_290704;
        case 0x290708u: goto label_290708;
        case 0x29070cu: goto label_29070c;
        case 0x290710u: goto label_290710;
        case 0x290714u: goto label_290714;
        case 0x290718u: goto label_290718;
        case 0x29071cu: goto label_29071c;
        case 0x290720u: goto label_290720;
        case 0x290724u: goto label_290724;
        case 0x290728u: goto label_290728;
        case 0x29072cu: goto label_29072c;
        case 0x290730u: goto label_290730;
        case 0x290734u: goto label_290734;
        case 0x290738u: goto label_290738;
        case 0x29073cu: goto label_29073c;
        case 0x290740u: goto label_290740;
        case 0x290744u: goto label_290744;
        case 0x290748u: goto label_290748;
        case 0x29074cu: goto label_29074c;
        case 0x290750u: goto label_290750;
        case 0x290754u: goto label_290754;
        case 0x290758u: goto label_290758;
        case 0x29075cu: goto label_29075c;
        case 0x290760u: goto label_290760;
        case 0x290764u: goto label_290764;
        case 0x290768u: goto label_290768;
        case 0x29076cu: goto label_29076c;
        case 0x290770u: goto label_290770;
        case 0x290774u: goto label_290774;
        case 0x290778u: goto label_290778;
        case 0x29077cu: goto label_29077c;
        case 0x290780u: goto label_290780;
        case 0x290784u: goto label_290784;
        case 0x290788u: goto label_290788;
        case 0x29078cu: goto label_29078c;
        case 0x290790u: goto label_290790;
        case 0x290794u: goto label_290794;
        case 0x290798u: goto label_290798;
        case 0x29079cu: goto label_29079c;
        case 0x2907a0u: goto label_2907a0;
        case 0x2907a4u: goto label_2907a4;
        case 0x2907a8u: goto label_2907a8;
        case 0x2907acu: goto label_2907ac;
        case 0x2907b0u: goto label_2907b0;
        case 0x2907b4u: goto label_2907b4;
        case 0x2907b8u: goto label_2907b8;
        case 0x2907bcu: goto label_2907bc;
        case 0x2907c0u: goto label_2907c0;
        case 0x2907c4u: goto label_2907c4;
        case 0x2907c8u: goto label_2907c8;
        case 0x2907ccu: goto label_2907cc;
        case 0x2907d0u: goto label_2907d0;
        case 0x2907d4u: goto label_2907d4;
        case 0x2907d8u: goto label_2907d8;
        case 0x2907dcu: goto label_2907dc;
        case 0x2907e0u: goto label_2907e0;
        case 0x2907e4u: goto label_2907e4;
        case 0x2907e8u: goto label_2907e8;
        case 0x2907ecu: goto label_2907ec;
        case 0x2907f0u: goto label_2907f0;
        case 0x2907f4u: goto label_2907f4;
        case 0x2907f8u: goto label_2907f8;
        case 0x2907fcu: goto label_2907fc;
        case 0x290800u: goto label_290800;
        case 0x290804u: goto label_290804;
        case 0x290808u: goto label_290808;
        case 0x29080cu: goto label_29080c;
        case 0x290810u: goto label_290810;
        case 0x290814u: goto label_290814;
        case 0x290818u: goto label_290818;
        case 0x29081cu: goto label_29081c;
        case 0x290820u: goto label_290820;
        case 0x290824u: goto label_290824;
        case 0x290828u: goto label_290828;
        case 0x29082cu: goto label_29082c;
        case 0x290830u: goto label_290830;
        case 0x290834u: goto label_290834;
        case 0x290838u: goto label_290838;
        case 0x29083cu: goto label_29083c;
        case 0x290840u: goto label_290840;
        case 0x290844u: goto label_290844;
        case 0x290848u: goto label_290848;
        case 0x29084cu: goto label_29084c;
        case 0x290850u: goto label_290850;
        case 0x290854u: goto label_290854;
        case 0x290858u: goto label_290858;
        case 0x29085cu: goto label_29085c;
        case 0x290860u: goto label_290860;
        case 0x290864u: goto label_290864;
        case 0x290868u: goto label_290868;
        case 0x29086cu: goto label_29086c;
        case 0x290870u: goto label_290870;
        case 0x290874u: goto label_290874;
        case 0x290878u: goto label_290878;
        case 0x29087cu: goto label_29087c;
        case 0x290880u: goto label_290880;
        case 0x290884u: goto label_290884;
        case 0x290888u: goto label_290888;
        case 0x29088cu: goto label_29088c;
        case 0x290890u: goto label_290890;
        case 0x290894u: goto label_290894;
        case 0x290898u: goto label_290898;
        case 0x29089cu: goto label_29089c;
        case 0x2908a0u: goto label_2908a0;
        case 0x2908a4u: goto label_2908a4;
        case 0x2908a8u: goto label_2908a8;
        case 0x2908acu: goto label_2908ac;
        case 0x2908b0u: goto label_2908b0;
        case 0x2908b4u: goto label_2908b4;
        case 0x2908b8u: goto label_2908b8;
        case 0x2908bcu: goto label_2908bc;
        case 0x2908c0u: goto label_2908c0;
        case 0x2908c4u: goto label_2908c4;
        case 0x2908c8u: goto label_2908c8;
        case 0x2908ccu: goto label_2908cc;
        case 0x2908d0u: goto label_2908d0;
        case 0x2908d4u: goto label_2908d4;
        case 0x2908d8u: goto label_2908d8;
        case 0x2908dcu: goto label_2908dc;
        case 0x2908e0u: goto label_2908e0;
        case 0x2908e4u: goto label_2908e4;
        case 0x2908e8u: goto label_2908e8;
        case 0x2908ecu: goto label_2908ec;
        case 0x2908f0u: goto label_2908f0;
        case 0x2908f4u: goto label_2908f4;
        case 0x2908f8u: goto label_2908f8;
        case 0x2908fcu: goto label_2908fc;
        case 0x290900u: goto label_290900;
        case 0x290904u: goto label_290904;
        case 0x290908u: goto label_290908;
        case 0x29090cu: goto label_29090c;
        case 0x290910u: goto label_290910;
        case 0x290914u: goto label_290914;
        case 0x290918u: goto label_290918;
        case 0x29091cu: goto label_29091c;
        case 0x290920u: goto label_290920;
        case 0x290924u: goto label_290924;
        case 0x290928u: goto label_290928;
        case 0x29092cu: goto label_29092c;
        case 0x290930u: goto label_290930;
        case 0x290934u: goto label_290934;
        case 0x290938u: goto label_290938;
        case 0x29093cu: goto label_29093c;
        case 0x290940u: goto label_290940;
        case 0x290944u: goto label_290944;
        case 0x290948u: goto label_290948;
        case 0x29094cu: goto label_29094c;
        case 0x290950u: goto label_290950;
        case 0x290954u: goto label_290954;
        case 0x290958u: goto label_290958;
        case 0x29095cu: goto label_29095c;
        case 0x290960u: goto label_290960;
        case 0x290964u: goto label_290964;
        case 0x290968u: goto label_290968;
        case 0x29096cu: goto label_29096c;
        case 0x290970u: goto label_290970;
        case 0x290974u: goto label_290974;
        case 0x290978u: goto label_290978;
        case 0x29097cu: goto label_29097c;
        case 0x290980u: goto label_290980;
        case 0x290984u: goto label_290984;
        case 0x290988u: goto label_290988;
        case 0x29098cu: goto label_29098c;
        case 0x290990u: goto label_290990;
        case 0x290994u: goto label_290994;
        case 0x290998u: goto label_290998;
        case 0x29099cu: goto label_29099c;
        case 0x2909a0u: goto label_2909a0;
        case 0x2909a4u: goto label_2909a4;
        case 0x2909a8u: goto label_2909a8;
        case 0x2909acu: goto label_2909ac;
        case 0x2909b0u: goto label_2909b0;
        case 0x2909b4u: goto label_2909b4;
        case 0x2909b8u: goto label_2909b8;
        case 0x2909bcu: goto label_2909bc;
        case 0x2909c0u: goto label_2909c0;
        case 0x2909c4u: goto label_2909c4;
        case 0x2909c8u: goto label_2909c8;
        case 0x2909ccu: goto label_2909cc;
        case 0x2909d0u: goto label_2909d0;
        case 0x2909d4u: goto label_2909d4;
        case 0x2909d8u: goto label_2909d8;
        case 0x2909dcu: goto label_2909dc;
        case 0x2909e0u: goto label_2909e0;
        case 0x2909e4u: goto label_2909e4;
        case 0x2909e8u: goto label_2909e8;
        case 0x2909ecu: goto label_2909ec;
        case 0x2909f0u: goto label_2909f0;
        case 0x2909f4u: goto label_2909f4;
        case 0x2909f8u: goto label_2909f8;
        case 0x2909fcu: goto label_2909fc;
        case 0x290a00u: goto label_290a00;
        case 0x290a04u: goto label_290a04;
        case 0x290a08u: goto label_290a08;
        case 0x290a0cu: goto label_290a0c;
        case 0x290a10u: goto label_290a10;
        case 0x290a14u: goto label_290a14;
        case 0x290a18u: goto label_290a18;
        case 0x290a1cu: goto label_290a1c;
        case 0x290a20u: goto label_290a20;
        case 0x290a24u: goto label_290a24;
        case 0x290a28u: goto label_290a28;
        case 0x290a2cu: goto label_290a2c;
        case 0x290a30u: goto label_290a30;
        case 0x290a34u: goto label_290a34;
        case 0x290a38u: goto label_290a38;
        case 0x290a3cu: goto label_290a3c;
        case 0x290a40u: goto label_290a40;
        case 0x290a44u: goto label_290a44;
        case 0x290a48u: goto label_290a48;
        case 0x290a4cu: goto label_290a4c;
        case 0x290a50u: goto label_290a50;
        case 0x290a54u: goto label_290a54;
        case 0x290a58u: goto label_290a58;
        case 0x290a5cu: goto label_290a5c;
        case 0x290a60u: goto label_290a60;
        case 0x290a64u: goto label_290a64;
        case 0x290a68u: goto label_290a68;
        case 0x290a6cu: goto label_290a6c;
        case 0x290a70u: goto label_290a70;
        case 0x290a74u: goto label_290a74;
        case 0x290a78u: goto label_290a78;
        case 0x290a7cu: goto label_290a7c;
        case 0x290a80u: goto label_290a80;
        case 0x290a84u: goto label_290a84;
        case 0x290a88u: goto label_290a88;
        case 0x290a8cu: goto label_290a8c;
        case 0x290a90u: goto label_290a90;
        case 0x290a94u: goto label_290a94;
        case 0x290a98u: goto label_290a98;
        case 0x290a9cu: goto label_290a9c;
        case 0x290aa0u: goto label_290aa0;
        case 0x290aa4u: goto label_290aa4;
        case 0x290aa8u: goto label_290aa8;
        case 0x290aacu: goto label_290aac;
        case 0x290ab0u: goto label_290ab0;
        case 0x290ab4u: goto label_290ab4;
        case 0x290ab8u: goto label_290ab8;
        case 0x290abcu: goto label_290abc;
        case 0x290ac0u: goto label_290ac0;
        case 0x290ac4u: goto label_290ac4;
        case 0x290ac8u: goto label_290ac8;
        case 0x290accu: goto label_290acc;
        case 0x290ad0u: goto label_290ad0;
        case 0x290ad4u: goto label_290ad4;
        case 0x290ad8u: goto label_290ad8;
        case 0x290adcu: goto label_290adc;
        case 0x290ae0u: goto label_290ae0;
        case 0x290ae4u: goto label_290ae4;
        case 0x290ae8u: goto label_290ae8;
        case 0x290aecu: goto label_290aec;
        case 0x290af0u: goto label_290af0;
        case 0x290af4u: goto label_290af4;
        case 0x290af8u: goto label_290af8;
        case 0x290afcu: goto label_290afc;
        case 0x290b00u: goto label_290b00;
        case 0x290b04u: goto label_290b04;
        case 0x290b08u: goto label_290b08;
        case 0x290b0cu: goto label_290b0c;
        case 0x290b10u: goto label_290b10;
        case 0x290b14u: goto label_290b14;
        case 0x290b18u: goto label_290b18;
        case 0x290b1cu: goto label_290b1c;
        case 0x290b20u: goto label_290b20;
        case 0x290b24u: goto label_290b24;
        case 0x290b28u: goto label_290b28;
        case 0x290b2cu: goto label_290b2c;
        case 0x290b30u: goto label_290b30;
        case 0x290b34u: goto label_290b34;
        case 0x290b38u: goto label_290b38;
        case 0x290b3cu: goto label_290b3c;
        case 0x290b40u: goto label_290b40;
        case 0x290b44u: goto label_290b44;
        case 0x290b48u: goto label_290b48;
        case 0x290b4cu: goto label_290b4c;
        case 0x290b50u: goto label_290b50;
        case 0x290b54u: goto label_290b54;
        case 0x290b58u: goto label_290b58;
        case 0x290b5cu: goto label_290b5c;
        case 0x290b60u: goto label_290b60;
        case 0x290b64u: goto label_290b64;
        case 0x290b68u: goto label_290b68;
        case 0x290b6cu: goto label_290b6c;
        case 0x290b70u: goto label_290b70;
        case 0x290b74u: goto label_290b74;
        case 0x290b78u: goto label_290b78;
        case 0x290b7cu: goto label_290b7c;
        case 0x290b80u: goto label_290b80;
        case 0x290b84u: goto label_290b84;
        case 0x290b88u: goto label_290b88;
        case 0x290b8cu: goto label_290b8c;
        case 0x290b90u: goto label_290b90;
        case 0x290b94u: goto label_290b94;
        case 0x290b98u: goto label_290b98;
        case 0x290b9cu: goto label_290b9c;
        case 0x290ba0u: goto label_290ba0;
        case 0x290ba4u: goto label_290ba4;
        case 0x290ba8u: goto label_290ba8;
        case 0x290bacu: goto label_290bac;
        case 0x290bb0u: goto label_290bb0;
        case 0x290bb4u: goto label_290bb4;
        case 0x290bb8u: goto label_290bb8;
        case 0x290bbcu: goto label_290bbc;
        case 0x290bc0u: goto label_290bc0;
        case 0x290bc4u: goto label_290bc4;
        case 0x290bc8u: goto label_290bc8;
        case 0x290bccu: goto label_290bcc;
        case 0x290bd0u: goto label_290bd0;
        case 0x290bd4u: goto label_290bd4;
        case 0x290bd8u: goto label_290bd8;
        case 0x290bdcu: goto label_290bdc;
        case 0x290be0u: goto label_290be0;
        case 0x290be4u: goto label_290be4;
        case 0x290be8u: goto label_290be8;
        case 0x290becu: goto label_290bec;
        case 0x290bf0u: goto label_290bf0;
        case 0x290bf4u: goto label_290bf4;
        case 0x290bf8u: goto label_290bf8;
        case 0x290bfcu: goto label_290bfc;
        case 0x290c00u: goto label_290c00;
        case 0x290c04u: goto label_290c04;
        case 0x290c08u: goto label_290c08;
        case 0x290c0cu: goto label_290c0c;
        case 0x290c10u: goto label_290c10;
        case 0x290c14u: goto label_290c14;
        case 0x290c18u: goto label_290c18;
        case 0x290c1cu: goto label_290c1c;
        case 0x290c20u: goto label_290c20;
        case 0x290c24u: goto label_290c24;
        case 0x290c28u: goto label_290c28;
        case 0x290c2cu: goto label_290c2c;
        case 0x290c30u: goto label_290c30;
        case 0x290c34u: goto label_290c34;
        case 0x290c38u: goto label_290c38;
        case 0x290c3cu: goto label_290c3c;
        case 0x290c40u: goto label_290c40;
        case 0x290c44u: goto label_290c44;
        case 0x290c48u: goto label_290c48;
        case 0x290c4cu: goto label_290c4c;
        case 0x290c50u: goto label_290c50;
        case 0x290c54u: goto label_290c54;
        case 0x290c58u: goto label_290c58;
        case 0x290c5cu: goto label_290c5c;
        case 0x290c60u: goto label_290c60;
        case 0x290c64u: goto label_290c64;
        case 0x290c68u: goto label_290c68;
        case 0x290c6cu: goto label_290c6c;
        case 0x290c70u: goto label_290c70;
        case 0x290c74u: goto label_290c74;
        case 0x290c78u: goto label_290c78;
        case 0x290c7cu: goto label_290c7c;
        case 0x290c80u: goto label_290c80;
        case 0x290c84u: goto label_290c84;
        case 0x290c88u: goto label_290c88;
        case 0x290c8cu: goto label_290c8c;
        case 0x290c90u: goto label_290c90;
        case 0x290c94u: goto label_290c94;
        case 0x290c98u: goto label_290c98;
        case 0x290c9cu: goto label_290c9c;
        case 0x290ca0u: goto label_290ca0;
        case 0x290ca4u: goto label_290ca4;
        case 0x290ca8u: goto label_290ca8;
        case 0x290cacu: goto label_290cac;
        case 0x290cb0u: goto label_290cb0;
        case 0x290cb4u: goto label_290cb4;
        case 0x290cb8u: goto label_290cb8;
        case 0x290cbcu: goto label_290cbc;
        case 0x290cc0u: goto label_290cc0;
        case 0x290cc4u: goto label_290cc4;
        case 0x290cc8u: goto label_290cc8;
        case 0x290cccu: goto label_290ccc;
        case 0x290cd0u: goto label_290cd0;
        case 0x290cd4u: goto label_290cd4;
        case 0x290cd8u: goto label_290cd8;
        case 0x290cdcu: goto label_290cdc;
        case 0x290ce0u: goto label_290ce0;
        case 0x290ce4u: goto label_290ce4;
        case 0x290ce8u: goto label_290ce8;
        case 0x290cecu: goto label_290cec;
        case 0x290cf0u: goto label_290cf0;
        case 0x290cf4u: goto label_290cf4;
        case 0x290cf8u: goto label_290cf8;
        case 0x290cfcu: goto label_290cfc;
        case 0x290d00u: goto label_290d00;
        case 0x290d04u: goto label_290d04;
        case 0x290d08u: goto label_290d08;
        case 0x290d0cu: goto label_290d0c;
        case 0x290d10u: goto label_290d10;
        case 0x290d14u: goto label_290d14;
        case 0x290d18u: goto label_290d18;
        case 0x290d1cu: goto label_290d1c;
        case 0x290d20u: goto label_290d20;
        case 0x290d24u: goto label_290d24;
        case 0x290d28u: goto label_290d28;
        case 0x290d2cu: goto label_290d2c;
        case 0x290d30u: goto label_290d30;
        case 0x290d34u: goto label_290d34;
        case 0x290d38u: goto label_290d38;
        case 0x290d3cu: goto label_290d3c;
        case 0x290d40u: goto label_290d40;
        case 0x290d44u: goto label_290d44;
        case 0x290d48u: goto label_290d48;
        case 0x290d4cu: goto label_290d4c;
        case 0x290d50u: goto label_290d50;
        case 0x290d54u: goto label_290d54;
        case 0x290d58u: goto label_290d58;
        case 0x290d5cu: goto label_290d5c;
        case 0x290d60u: goto label_290d60;
        case 0x290d64u: goto label_290d64;
        case 0x290d68u: goto label_290d68;
        case 0x290d6cu: goto label_290d6c;
        case 0x290d70u: goto label_290d70;
        case 0x290d74u: goto label_290d74;
        case 0x290d78u: goto label_290d78;
        case 0x290d7cu: goto label_290d7c;
        case 0x290d80u: goto label_290d80;
        case 0x290d84u: goto label_290d84;
        case 0x290d88u: goto label_290d88;
        case 0x290d8cu: goto label_290d8c;
        case 0x290d90u: goto label_290d90;
        case 0x290d94u: goto label_290d94;
        case 0x290d98u: goto label_290d98;
        case 0x290d9cu: goto label_290d9c;
        case 0x290da0u: goto label_290da0;
        case 0x290da4u: goto label_290da4;
        case 0x290da8u: goto label_290da8;
        case 0x290dacu: goto label_290dac;
        case 0x290db0u: goto label_290db0;
        case 0x290db4u: goto label_290db4;
        case 0x290db8u: goto label_290db8;
        case 0x290dbcu: goto label_290dbc;
        case 0x290dc0u: goto label_290dc0;
        case 0x290dc4u: goto label_290dc4;
        case 0x290dc8u: goto label_290dc8;
        case 0x290dccu: goto label_290dcc;
        case 0x290dd0u: goto label_290dd0;
        case 0x290dd4u: goto label_290dd4;
        case 0x290dd8u: goto label_290dd8;
        case 0x290ddcu: goto label_290ddc;
        case 0x290de0u: goto label_290de0;
        case 0x290de4u: goto label_290de4;
        case 0x290de8u: goto label_290de8;
        case 0x290decu: goto label_290dec;
        case 0x290df0u: goto label_290df0;
        case 0x290df4u: goto label_290df4;
        case 0x290df8u: goto label_290df8;
        case 0x290dfcu: goto label_290dfc;
        case 0x290e00u: goto label_290e00;
        case 0x290e04u: goto label_290e04;
        case 0x290e08u: goto label_290e08;
        case 0x290e0cu: goto label_290e0c;
        case 0x290e10u: goto label_290e10;
        case 0x290e14u: goto label_290e14;
        case 0x290e18u: goto label_290e18;
        case 0x290e1cu: goto label_290e1c;
        case 0x290e20u: goto label_290e20;
        case 0x290e24u: goto label_290e24;
        case 0x290e28u: goto label_290e28;
        case 0x290e2cu: goto label_290e2c;
        default: break;
    }

    ctx->pc = 0x2906b8u;

label_2906b8:
    // 0x2906b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2906b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2906bc:
    // 0x2906bc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2906bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2906c0:
    // 0x2906c0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2906c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2906c4:
    // 0x2906c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2906c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2906c8:
    // 0x2906c8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2906c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2906cc:
    // 0x2906cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2906ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2906d0:
    // 0x2906d0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2906d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2906d4:
    // 0x2906d4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2906d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2906d8:
    // 0x2906d8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2906d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2906dc:
    // 0x2906dc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2906dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2906e0:
    // 0x2906e0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2906e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2906e4:
    // 0x2906e4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2906e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2906e8:
    // 0x2906e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2906e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2906ec:
    // 0x2906ec: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2906ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2906f0:
    // 0x2906f0: 0xc0a41a6  jal         func_290698
label_2906f4:
    if (ctx->pc == 0x2906F4u) {
        ctx->pc = 0x2906F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906F0u;
        // 0x2906f4: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906F8u;
        goto label_2906f8;
    }
    ctx->pc = 0x2906F0u;
    SET_GPR_U32(ctx, 31, 0x2906F8u);
    ctx->pc = 0x2906F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2906F0u;
    // 0x2906f4: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290698u, 0x2906F0u, 0x2906F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906F8u;
label_2906f8:
    // 0x2906f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2906fc:
    if (ctx->pc == 0x2906FCu) {
        ctx->pc = 0x2906FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906F8u;
        // 0x2906fc: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290700u;
        goto label_290700;
    }
    ctx->pc = 0x2906F8u;
    {
        const bool branch_taken_0x2906f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2906FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906F8u;
        // 0x2906fc: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906f8) {
            ctx->pc = 0x290708u;
            goto label_290708;
        }
    }
    ctx->pc = 0x290700u;
label_290700:
    // 0x290700: 0x100001be  b           . + 4 + (0x1BE << 2)
label_290704:
    if (ctx->pc == 0x290704u) {
        ctx->pc = 0x290704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290700u;
        // 0x290704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290708u;
        goto label_290708;
    }
    ctx->pc = 0x290700u;
    {
        const bool branch_taken_0x290700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290700u;
        // 0x290704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290700) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290708u;
label_290708:
    // 0x290708: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x290708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_29070c:
    // 0x29070c: 0x106201bb  beq         $v1, $v0, . + 4 + (0x1BB << 2)
label_290710:
    if (ctx->pc == 0x290710u) {
        ctx->pc = 0x290710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29070Cu;
        // 0x290710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290714u;
        goto label_290714;
    }
    ctx->pc = 0x29070Cu;
    {
        const bool branch_taken_0x29070c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x290710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29070Cu;
        // 0x290710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29070c) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290714u;
label_290714:
    // 0x290714: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x290714u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_290718:
    // 0x290718: 0xc0e409a  jal         func_390268
label_29071c:
    if (ctx->pc == 0x29071Cu) {
        ctx->pc = 0x29071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290718u;
        // 0x29071c: 0x26a40124  addiu       $a0, $s5, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290720u;
        goto label_290720;
    }
    ctx->pc = 0x290718u;
    SET_GPR_U32(ctx, 31, 0x290720u);
    ctx->pc = 0x29071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290718u;
    // 0x29071c: 0x26a40124  addiu       $a0, $s5, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290718u, 0x290720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290720u;
label_290720:
    // 0x290720: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x290720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290724:
    // 0x290724: 0xc087502  jal         func_21D408
label_290728:
    if (ctx->pc == 0x290728u) {
        ctx->pc = 0x290728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290724u;
        // 0x290728: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29072Cu;
        goto label_29072c;
    }
    ctx->pc = 0x290724u;
    SET_GPR_U32(ctx, 31, 0x29072Cu);
    ctx->pc = 0x290728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290724u;
    // 0x290728: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290724u, 0x29072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29072Cu;
label_29072c:
    // 0x29072c: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x29072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_290730:
    // 0x290730: 0xc08a200  jal         func_228800
label_290734:
    if (ctx->pc == 0x290734u) {
        ctx->pc = 0x290734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290730u;
        // 0x290734: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290738u;
        goto label_290738;
    }
    ctx->pc = 0x290730u;
    SET_GPR_U32(ctx, 31, 0x290738u);
    ctx->pc = 0x290734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290730u;
    // 0x290734: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x290730u, 0x290738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290738u;
label_290738:
    // 0x290738: 0x8e8400cc  lw          $a0, 0xCC($s4)
    ctx->pc = 0x290738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_29073c:
    // 0x29073c: 0xc08a200  jal         func_228800
label_290740:
    if (ctx->pc == 0x290740u) {
        ctx->pc = 0x290740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29073Cu;
        // 0x290740: 0x9050011b  lbu         $s0, 0x11B($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290744u;
        goto label_290744;
    }
    ctx->pc = 0x29073Cu;
    SET_GPR_U32(ctx, 31, 0x290744u);
    ctx->pc = 0x290740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29073Cu;
    // 0x290740: 0x9050011b  lbu         $s0, 0x11B($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x29073Cu, 0x290744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290744u;
label_290744:
    // 0x290744: 0x9042011b  lbu         $v0, 0x11B($v0)
    ctx->pc = 0x290744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_290748:
    // 0x290748: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x290748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29074c:
    // 0x29074c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29074cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290750:
    // 0x290750: 0xc0a43aa  jal         func_290EA8
label_290754:
    if (ctx->pc == 0x290754u) {
        ctx->pc = 0x290754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290750u;
        // 0x290754: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290758u;
        goto label_290758;
    }
    ctx->pc = 0x290750u;
    SET_GPR_U32(ctx, 31, 0x290758u);
    ctx->pc = 0x290754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290750u;
    // 0x290754: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EA8u, 0x290750u, 0x290758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290758u;
label_290758:
    // 0x290758: 0x104001a8  beqz        $v0, . + 4 + (0x1A8 << 2)
label_29075c:
    if (ctx->pc == 0x29075Cu) {
        ctx->pc = 0x29075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290758u;
        // 0x29075c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290760u;
        goto label_290760;
    }
    ctx->pc = 0x290758u;
    {
        const bool branch_taken_0x290758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290758u;
        // 0x29075c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290758) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290760u;
label_290760:
    // 0x290760: 0xc08a6d8  jal         func_229B60
label_290764:
    if (ctx->pc == 0x290764u) {
        ctx->pc = 0x290764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290760u;
        // 0x290764: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290768u;
        goto label_290768;
    }
    ctx->pc = 0x290760u;
    SET_GPR_U32(ctx, 31, 0x290768u);
    ctx->pc = 0x290764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290760u;
    // 0x290764: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B60u, 0x290760u, 0x290768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290768u;
label_290768:
    // 0x290768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29076c:
    // 0x29076c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_290770:
    if (ctx->pc == 0x290770u) {
        ctx->pc = 0x290770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29076Cu;
        // 0x290770: 0x3a02000d  xori        $v0, $s0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290774u;
        goto label_290774;
    }
    ctx->pc = 0x29076Cu;
    {
        const bool branch_taken_0x29076c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x290770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29076Cu;
        // 0x290770: 0x3a02000d  xori        $v0, $s0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29076c) {
            ctx->pc = 0x290784u;
            goto label_290784;
        }
    }
    ctx->pc = 0x290774u;
label_290774:
    // 0x290774: 0xc08a0d0  jal         func_228340
label_290778:
    if (ctx->pc == 0x290778u) {
        ctx->pc = 0x290778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290774u;
        // 0x290778: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29077Cu;
        goto label_29077c;
    }
    ctx->pc = 0x290774u;
    SET_GPR_U32(ctx, 31, 0x29077Cu);
    ctx->pc = 0x290778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290774u;
    // 0x290778: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x290774u, 0x29077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29077Cu;
label_29077c:
    // 0x29077c: 0x10400184  beqz        $v0, . + 4 + (0x184 << 2)
label_290780:
    if (ctx->pc == 0x290780u) {
        ctx->pc = 0x290780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29077Cu;
        // 0x290780: 0x3a02000d  xori        $v0, $s0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290784u;
        goto label_290784;
    }
    ctx->pc = 0x29077Cu;
    {
        const bool branch_taken_0x29077c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29077Cu;
        // 0x290780: 0x3a02000d  xori        $v0, $s0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29077c) {
            ctx->pc = 0x290D90u;
            goto label_290d90;
        }
    }
    ctx->pc = 0x290784u;
label_290784:
    // 0x290784: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_290788:
    if (ctx->pc == 0x290788u) {
        ctx->pc = 0x290788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290784u;
        // 0x290788: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29078Cu;
        goto label_29078c;
    }
    ctx->pc = 0x290784u;
    {
        const bool branch_taken_0x290784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290784u;
        // 0x290788: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290784) {
            ctx->pc = 0x290794u;
            goto label_290794;
        }
    }
    ctx->pc = 0x29078Cu;
label_29078c:
    // 0x29078c: 0x3a020006  xori        $v0, $s0, 0x6
    ctx->pc = 0x29078cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)6);
label_290790:
    // 0x290790: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x290790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_290794:
    // 0x290794: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
label_290798:
    if (ctx->pc == 0x290798u) {
        ctx->pc = 0x290798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290794u;
        // 0x290798: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29079Cu;
        goto label_29079c;
    }
    ctx->pc = 0x290794u;
    {
        const bool branch_taken_0x290794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290794u;
        // 0x290798: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290794) {
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x29079Cu;
label_29079c:
    // 0x29079c: 0xc089018  jal         func_224060
label_2907a0:
    if (ctx->pc == 0x2907A0u) {
        ctx->pc = 0x2907A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29079Cu;
        // 0x2907a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907A4u;
        goto label_2907a4;
    }
    ctx->pc = 0x29079Cu;
    SET_GPR_U32(ctx, 31, 0x2907A4u);
    ctx->pc = 0x2907A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29079Cu;
    // 0x2907a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x29079Cu, 0x2907A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907A4u;
label_2907a4:
    // 0x2907a4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2907a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2907a8:
    // 0x2907a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2907a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2907ac:
    // 0x2907ac: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x2907acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2907b0:
    // 0x2907b0: 0xc136ad6  jal         func_4DAB58
label_2907b4:
    if (ctx->pc == 0x2907B4u) {
        ctx->pc = 0x2907B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907B0u;
        // 0x2907b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907B8u;
        goto label_2907b8;
    }
    ctx->pc = 0x2907B0u;
    SET_GPR_U32(ctx, 31, 0x2907B8u);
    ctx->pc = 0x2907B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907B0u;
    // 0x2907b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x2907B0u, 0x2907B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907B8u;
label_2907b8:
    // 0x2907b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2907b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2907bc:
    // 0x2907bc: 0xc136ad4  jal         func_4DAB50
label_2907c0:
    if (ctx->pc == 0x2907C0u) {
        ctx->pc = 0x2907C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907BCu;
        // 0x2907c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907C4u;
        goto label_2907c4;
    }
    ctx->pc = 0x2907BCu;
    SET_GPR_U32(ctx, 31, 0x2907C4u);
    ctx->pc = 0x2907C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907BCu;
    // 0x2907c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x2907BCu, 0x2907C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907C4u;
label_2907c4:
    // 0x2907c4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2907c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2907c8:
    // 0x2907c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2907cc:
    // 0x2907cc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2907ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2907d0:
    // 0x2907d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2907d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2907d4:
    // 0x2907d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2907d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2907d8:
    // 0x2907d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2907dc:
    // 0x2907dc: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x2907dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
label_2907e0:
    // 0x2907e0: 0x16440005  bne         $s2, $a0, . + 4 + (0x5 << 2)
label_2907e4:
    if (ctx->pc == 0x2907E4u) {
        ctx->pc = 0x2907E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907E0u;
        // 0x2907e4: 0x2c430005  sltiu       $v1, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2907E8u;
        goto label_2907e8;
    }
    ctx->pc = 0x2907E0u;
    {
        const bool branch_taken_0x2907e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x2907E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907E0u;
        // 0x2907e4: 0x2c430005  sltiu       $v1, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907e0) {
            ctx->pc = 0x2907F8u;
            goto label_2907f8;
        }
    }
    ctx->pc = 0x2907E8u;
label_2907e8:
    // 0x2907e8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2907e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2907ec:
    // 0x2907ec: 0x3900b  movn        $s2, $zero, $v1
    ctx->pc = 0x2907ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_2907f0:
    // 0x2907f0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2907f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2907f4:
    // 0x2907f4: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x2907f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_2907f8:
    // 0x2907f8: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
label_2907fc:
    if (ctx->pc == 0x2907FCu) {
        ctx->pc = 0x290800u;
        goto label_290800;
    }
    ctx->pc = 0x2907F8u;
    {
        const bool branch_taken_0x2907f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2907f8) {
            ctx->pc = 0x29090Cu;
            goto label_29090c;
        }
    }
    ctx->pc = 0x290800u;
label_290800:
    // 0x290800: 0xc08a08a  jal         func_228228
label_290804:
    if (ctx->pc == 0x290804u) {
        ctx->pc = 0x290804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290800u;
        // 0x290804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290808u;
        goto label_290808;
    }
    ctx->pc = 0x290800u;
    SET_GPR_U32(ctx, 31, 0x290808u);
    ctx->pc = 0x290804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290800u;
    // 0x290804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x290800u, 0x290808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290808u;
label_290808:
    // 0x290808: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_29080c:
    if (ctx->pc == 0x29080Cu) {
        ctx->pc = 0x290810u;
        goto label_290810;
    }
    ctx->pc = 0x290808u;
    {
        const bool branch_taken_0x290808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290808) {
            ctx->pc = 0x29090Cu;
            goto label_29090c;
        }
    }
    ctx->pc = 0x290810u;
label_290810:
    // 0x290810: 0xc0e409a  jal         func_390268
label_290814:
    if (ctx->pc == 0x290814u) {
        ctx->pc = 0x290814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290810u;
        // 0x290814: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290818u;
        goto label_290818;
    }
    ctx->pc = 0x290810u;
    SET_GPR_U32(ctx, 31, 0x290818u);
    ctx->pc = 0x290814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290810u;
    // 0x290814: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290810u, 0x290818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290818u;
label_290818:
    // 0x290818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29081c:
    if (ctx->pc == 0x29081Cu) {
        ctx->pc = 0x290820u;
        goto label_290820;
    }
    ctx->pc = 0x290818u;
    {
        const bool branch_taken_0x290818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290818) {
            ctx->pc = 0x290830u;
            goto label_290830;
        }
    }
    ctx->pc = 0x290820u;
label_290820:
    // 0x290820: 0xc08a08a  jal         func_228228
label_290824:
    if (ctx->pc == 0x290824u) {
        ctx->pc = 0x290824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290820u;
        // 0x290824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290828u;
        goto label_290828;
    }
    ctx->pc = 0x290820u;
    SET_GPR_U32(ctx, 31, 0x290828u);
    ctx->pc = 0x290824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290820u;
    // 0x290824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x290820u, 0x290828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290828u;
label_290828:
    // 0x290828: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_29082c:
    if (ctx->pc == 0x29082Cu) {
        ctx->pc = 0x290830u;
        goto label_290830;
    }
    ctx->pc = 0x290828u;
    {
        const bool branch_taken_0x290828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290828) {
            ctx->pc = 0x29090Cu;
            goto label_29090c;
        }
    }
    ctx->pc = 0x290830u;
label_290830:
    // 0x290830: 0x56e00061  bnel        $s7, $zero, . + 4 + (0x61 << 2)
label_290834:
    if (ctx->pc == 0x290834u) {
        ctx->pc = 0x290834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290830u;
        // 0x290834: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290838u;
        goto label_290838;
    }
    ctx->pc = 0x290830u;
    {
        const bool branch_taken_0x290830 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x290830) {
            ctx->pc = 0x290834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290830u;
            // 0x290834: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x290838u;
label_290838:
    // 0x290838: 0x82a2000b  lb          $v0, 0xB($s5)
    ctx->pc = 0x290838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
label_29083c:
    // 0x29083c: 0x1c400033  bgtz        $v0, . + 4 + (0x33 << 2)
label_290840:
    if (ctx->pc == 0x290840u) {
        ctx->pc = 0x290840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29083Cu;
        // 0x290840: 0x26720090  addiu       $s2, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290844u;
        goto label_290844;
    }
    ctx->pc = 0x29083Cu;
    {
        const bool branch_taken_0x29083c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x290840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29083Cu;
        // 0x290840: 0x26720090  addiu       $s2, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29083c) {
            ctx->pc = 0x29090Cu;
            goto label_29090c;
        }
    }
    ctx->pc = 0x290844u;
label_290844:
    // 0x290844: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x290844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_290848:
    // 0x290848: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x290848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_29084c:
    // 0x29084c: 0x24514b00  addiu       $s1, $v0, 0x4B00
    ctx->pc = 0x29084cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_290850:
    // 0x290850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290854:
    // 0x290854: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x290854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_290858:
    // 0x290858: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x290858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_29085c:
    // 0x29085c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x29085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_290860:
    // 0x290860: 0xc0cd8ec  jal         func_3363B0
label_290864:
    if (ctx->pc == 0x290864u) {
        ctx->pc = 0x290864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290860u;
        // 0x290864: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290868u;
        goto label_290868;
    }
    ctx->pc = 0x290860u;
    SET_GPR_U32(ctx, 31, 0x290868u);
    ctx->pc = 0x290864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290860u;
    // 0x290864: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x290860u, 0x290868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290868u;
label_290868:
    // 0x290868: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x290868u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_29086c:
    // 0x29086c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_290870:
    // 0x290870: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x290870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_290874:
    // 0x290874: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x290874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_290878:
    // 0x290878: 0xc0cd8ec  jal         func_3363B0
label_29087c:
    if (ctx->pc == 0x29087Cu) {
        ctx->pc = 0x29087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290878u;
        // 0x29087c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290880u;
        goto label_290880;
    }
    ctx->pc = 0x290878u;
    SET_GPR_U32(ctx, 31, 0x290880u);
    ctx->pc = 0x29087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290878u;
    // 0x29087c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x290878u, 0x290880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290880u;
label_290880:
    // 0x290880: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x290880u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_290884:
    // 0x290884: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x290884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_290888:
    // 0x290888: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x290888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29088c:
    // 0x29088c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29088cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_290890:
    // 0x290890: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x290890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_290894:
    // 0x290894: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x290894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_290898:
    // 0x290898: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x290898u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_29089c:
    // 0x29089c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x29089cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2908a0:
    // 0x2908a0: 0x0  nop
    ctx->pc = 0x2908a0u;
    // NOP
label_2908a4:
    // 0x2908a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2908a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2908a8:
    // 0x2908a8: 0x0  nop
    ctx->pc = 0x2908a8u;
    // NOP
label_2908ac:
    // 0x2908ac: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2908b0:
    if (ctx->pc == 0x2908B0u) {
        ctx->pc = 0x2908B4u;
        goto label_2908b4;
    }
    ctx->pc = 0x2908ACu;
    {
        const bool branch_taken_0x2908ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2908ac) {
            ctx->pc = 0x29090Cu;
            goto label_29090c;
        }
    }
    ctx->pc = 0x2908B4u;
label_2908b4:
    // 0x2908b4: 0xc05959e  jal         func_165678
label_2908b8:
    if (ctx->pc == 0x2908B8u) {
        ctx->pc = 0x2908B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908B4u;
        // 0x2908b8: 0x8ea4020c  lw          $a0, 0x20C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908BCu;
        goto label_2908bc;
    }
    ctx->pc = 0x2908B4u;
    SET_GPR_U32(ctx, 31, 0x2908BCu);
    ctx->pc = 0x2908B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2908B4u;
    // 0x2908b8: 0x8ea4020c  lw          $a0, 0x20C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2908B4u, 0x2908BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908BCu;
label_2908bc:
    // 0x2908bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2908bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2908c0:
    // 0x2908c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2908c4:
    if (ctx->pc == 0x2908C4u) {
        ctx->pc = 0x2908C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908C0u;
        // 0x2908c4: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908C8u;
        goto label_2908c8;
    }
    ctx->pc = 0x2908C0u;
    {
        const bool branch_taken_0x2908c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908C0u;
        // 0x2908c4: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908c0) {
            ctx->pc = 0x2908E8u;
            goto label_2908e8;
        }
    }
    ctx->pc = 0x2908C8u;
label_2908c8:
    // 0x2908c8: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2908c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2908cc:
    // 0x2908cc: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2908ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2908d0:
    // 0x2908d0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2908d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2908d4:
    // 0x2908d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2908d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2908d8:
    // 0x2908d8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2908d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2908dc:
    // 0x2908dc: 0xc0cdb38  jal         func_336CE0
label_2908e0:
    if (ctx->pc == 0x2908E0u) {
        ctx->pc = 0x2908E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908DCu;
        // 0x2908e0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908E4u;
        goto label_2908e4;
    }
    ctx->pc = 0x2908DCu;
    SET_GPR_U32(ctx, 31, 0x2908E4u);
    ctx->pc = 0x2908E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2908DCu;
    // 0x2908e0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2908DCu, 0x2908E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908E4u;
label_2908e4:
    // 0x2908e4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2908e4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2908e8:
    // 0x2908e8: 0x12700144  beq         $s3, $s0, . + 4 + (0x144 << 2)
label_2908ec:
    if (ctx->pc == 0x2908ECu) {
        ctx->pc = 0x2908ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908E8u;
        // 0x2908ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908F0u;
        goto label_2908f0;
    }
    ctx->pc = 0x2908E8u;
    {
        const bool branch_taken_0x2908e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x2908ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908E8u;
        // 0x2908ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908e8) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x2908F0u;
label_2908f0:
    // 0x2908f0: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2908f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_2908f4:
    // 0x2908f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2908f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2908f8:
    // 0x2908f8: 0x0  nop
    ctx->pc = 0x2908f8u;
    // NOP
label_2908fc:
    // 0x2908fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2908fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290900:
    // 0x290900: 0x0  nop
    ctx->pc = 0x290900u;
    // NOP
label_290904:
    // 0x290904: 0x4501013e  bc1t        . + 4 + (0x13E << 2)
label_290908:
    if (ctx->pc == 0x290908u) {
        ctx->pc = 0x290908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290904u;
        // 0x290908: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29090Cu;
        goto label_29090c;
    }
    ctx->pc = 0x290904u;
    {
        const bool branch_taken_0x290904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290904u;
        // 0x290908: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290904) {
            ctx->pc = 0x290E00u;
            goto label_290e00;
        }
    }
    ctx->pc = 0x29090Cu;
label_29090c:
    // 0x29090c: 0x16e0002a  bnez        $s7, . + 4 + (0x2A << 2)
label_290910:
    if (ctx->pc == 0x290910u) {
        ctx->pc = 0x290910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29090Cu;
        // 0x290910: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290914u;
        goto label_290914;
    }
    ctx->pc = 0x29090Cu;
    {
        const bool branch_taken_0x29090c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x290910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29090Cu;
        // 0x290910: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29090c) {
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x290914u;
label_290914:
    // 0x290914: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x290914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_290918:
    // 0x290918: 0xc0a446a  jal         func_2911A8
label_29091c:
    if (ctx->pc == 0x29091Cu) {
        ctx->pc = 0x29091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290918u;
        // 0x29091c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290920u;
        goto label_290920;
    }
    ctx->pc = 0x290918u;
    SET_GPR_U32(ctx, 31, 0x290920u);
    ctx->pc = 0x29091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290918u;
    // 0x29091c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911A8u, 0x290918u, 0x290920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290920u;
label_290920:
    // 0x290920: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_290924:
    if (ctx->pc == 0x290924u) {
        ctx->pc = 0x290924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290920u;
        // 0x290924: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290928u;
        goto label_290928;
    }
    ctx->pc = 0x290920u;
    {
        const bool branch_taken_0x290920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290920) {
            ctx->pc = 0x290924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290920u;
            // 0x290924: 0x26c40124  addiu       $a0, $s6, 0x124 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x290928u;
label_290928:
    // 0x290928: 0x26d701a4  addiu       $s7, $s6, 0x1A4
    ctx->pc = 0x290928u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 420));
label_29092c:
    // 0x29092c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29092cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290930:
    // 0x290930: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x290930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_290934:
    // 0x290934: 0x0  nop
    ctx->pc = 0x290934u;
    // NOP
label_290938:
    // 0x290938: 0xc137866  jal         func_4DE198
label_29093c:
    if (ctx->pc == 0x29093Cu) {
        ctx->pc = 0x29093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290938u;
        // 0x29093c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290940u;
        goto label_290940;
    }
    ctx->pc = 0x290938u;
    SET_GPR_U32(ctx, 31, 0x290940u);
    ctx->pc = 0x29093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290938u;
    // 0x29093c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x290938u, 0x290940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290940u;
label_290940:
    // 0x290940: 0xc0e409a  jal         func_390268
label_290944:
    if (ctx->pc == 0x290944u) {
        ctx->pc = 0x290944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290940u;
        // 0x290944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290948u;
        goto label_290948;
    }
    ctx->pc = 0x290940u;
    SET_GPR_U32(ctx, 31, 0x290948u);
    ctx->pc = 0x290944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290940u;
    // 0x290944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290940u, 0x290948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290948u;
label_290948:
    // 0x290948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29094c:
    // 0x29094c: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
label_290950:
    if (ctx->pc == 0x290950u) {
        ctx->pc = 0x290950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29094Cu;
        // 0x290950: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290954u;
        goto label_290954;
    }
    ctx->pc = 0x29094Cu;
    {
        const bool branch_taken_0x29094c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29094c) {
            ctx->pc = 0x290950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29094Cu;
            // 0x290950: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x290954u;
label_290954:
    // 0x290954: 0x52130014  beql        $s0, $s3, . + 4 + (0x14 << 2)
label_290958:
    if (ctx->pc == 0x290958u) {
        ctx->pc = 0x290958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290954u;
        // 0x290958: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29095Cu;
        goto label_29095c;
    }
    ctx->pc = 0x290954u;
    {
        const bool branch_taken_0x290954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x290954) {
            ctx->pc = 0x290958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290954u;
            // 0x290958: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x29095Cu;
label_29095c:
    // 0x29095c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290960:
    // 0x290960: 0xc08a08a  jal         func_228228
label_290964:
    if (ctx->pc == 0x290964u) {
        ctx->pc = 0x290964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290960u;
        // 0x290964: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290968u;
        goto label_290968;
    }
    ctx->pc = 0x290960u;
    SET_GPR_U32(ctx, 31, 0x290968u);
    ctx->pc = 0x290964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290960u;
    // 0x290964: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x290960u, 0x290968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290968u;
label_290968:
    // 0x290968: 0x5051000f  beql        $v0, $s1, . + 4 + (0xF << 2)
label_29096c:
    if (ctx->pc == 0x29096Cu) {
        ctx->pc = 0x29096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290968u;
        // 0x29096c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290970u;
        goto label_290970;
    }
    ctx->pc = 0x290968u;
    {
        const bool branch_taken_0x290968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x290968) {
            ctx->pc = 0x29096Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290968u;
            // 0x29096c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x290970u;
label_290970:
    // 0x290970: 0xc088f0c  jal         func_223C30
label_290974:
    if (ctx->pc == 0x290974u) {
        ctx->pc = 0x290974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290970u;
        // 0x290974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290978u;
        goto label_290978;
    }
    ctx->pc = 0x290970u;
    SET_GPR_U32(ctx, 31, 0x290978u);
    ctx->pc = 0x290974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290970u;
    // 0x290974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x290970u, 0x290978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290978u;
label_290978:
    // 0x290978: 0x5051000b  beql        $v0, $s1, . + 4 + (0xB << 2)
label_29097c:
    if (ctx->pc == 0x29097Cu) {
        ctx->pc = 0x29097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290978u;
        // 0x29097c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290980u;
        goto label_290980;
    }
    ctx->pc = 0x290978u;
    {
        const bool branch_taken_0x290978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x290978) {
            ctx->pc = 0x29097Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290978u;
            // 0x29097c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x290980u;
label_290980:
    // 0x290980: 0xc089020  jal         func_224080
label_290984:
    if (ctx->pc == 0x290984u) {
        ctx->pc = 0x290984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290980u;
        // 0x290984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290988u;
        goto label_290988;
    }
    ctx->pc = 0x290980u;
    SET_GPR_U32(ctx, 31, 0x290988u);
    ctx->pc = 0x290984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290980u;
    // 0x290984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224080u, 0x290980u, 0x290988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290988u;
label_290988:
    // 0x290988: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_29098c:
    if (ctx->pc == 0x29098Cu) {
        ctx->pc = 0x29098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290988u;
        // 0x29098c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290990u;
        goto label_290990;
    }
    ctx->pc = 0x290988u;
    {
        const bool branch_taken_0x290988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290988) {
            ctx->pc = 0x29098Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290988u;
            // 0x29098c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x290990u;
label_290990:
    // 0x290990: 0xc087502  jal         func_21D408
label_290994:
    if (ctx->pc == 0x290994u) {
        ctx->pc = 0x290994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290990u;
        // 0x290994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290998u;
        goto label_290998;
    }
    ctx->pc = 0x290990u;
    SET_GPR_U32(ctx, 31, 0x290998u);
    ctx->pc = 0x290994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290990u;
    // 0x290994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290990u, 0x290998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290998u;
label_290998:
    // 0x290998: 0xc0a41a6  jal         func_290698
label_29099c:
    if (ctx->pc == 0x29099Cu) {
        ctx->pc = 0x29099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290998u;
        // 0x29099c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2909A0u;
        goto label_2909a0;
    }
    ctx->pc = 0x290998u;
    SET_GPR_U32(ctx, 31, 0x2909A0u);
    ctx->pc = 0x29099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290998u;
    // 0x29099c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290698u, 0x290998u, 0x2909A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909A0u;
label_2909a0:
    // 0x2909a0: 0x105100f7  beq         $v0, $s1, . + 4 + (0xF7 << 2)
label_2909a4:
    if (ctx->pc == 0x2909A4u) {
        ctx->pc = 0x2909A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909A0u;
        // 0x2909a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2909A8u;
        goto label_2909a8;
    }
    ctx->pc = 0x2909A0u;
    {
        const bool branch_taken_0x2909a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2909A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909A0u;
        // 0x2909a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909a0) {
            ctx->pc = 0x290D80u;
            goto label_290d80;
        }
    }
    ctx->pc = 0x2909A8u;
label_2909a8:
    // 0x2909a8: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x2909a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2909ac:
    // 0x2909ac: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2909b0:
    if (ctx->pc == 0x2909B0u) {
        ctx->pc = 0x2909B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909ACu;
        // 0x2909b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2909B4u;
        goto label_2909b4;
    }
    ctx->pc = 0x2909ACu;
    {
        const bool branch_taken_0x2909ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2909B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909ACu;
        // 0x2909b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909ac) {
            ctx->pc = 0x290938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290938;
        }
    }
    ctx->pc = 0x2909B4u;
label_2909b4:
    // 0x2909b4: 0x26c40124  addiu       $a0, $s6, 0x124
    ctx->pc = 0x2909b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
label_2909b8:
    // 0x2909b8: 0xc0e409a  jal         func_390268
label_2909bc:
    if (ctx->pc == 0x2909BCu) {
        ctx->pc = 0x2909BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909B8u;
        // 0x2909bc: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2909C0u;
        goto label_2909c0;
    }
    ctx->pc = 0x2909B8u;
    SET_GPR_U32(ctx, 31, 0x2909C0u);
    ctx->pc = 0x2909BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2909B8u;
    // 0x2909bc: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2909B8u, 0x2909C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909C0u;
label_2909c0:
    // 0x2909c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2909c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2909c4:
    // 0x2909c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2909c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2909c8:
    // 0x2909c8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2909c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2909cc:
    // 0x2909cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2909ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2909d0:
    // 0x2909d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2909d4:
    if (ctx->pc == 0x2909D4u) {
        ctx->pc = 0x2909D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909D0u;
        // 0x2909d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2909D8u;
        goto label_2909d8;
    }
    ctx->pc = 0x2909D0u;
    {
        const bool branch_taken_0x2909d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909D0u;
        // 0x2909d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909d0) {
            ctx->pc = 0x2909E4u;
            goto label_2909e4;
        }
    }
    ctx->pc = 0x2909D8u;
label_2909d8:
    // 0x2909d8: 0x2331026  xor         $v0, $s1, $s3
    ctx->pc = 0x2909d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 19));
label_2909dc:
    // 0x2909dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2909dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2909e0:
    // 0x2909e0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2909e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2909e4:
    // 0x2909e4: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
label_2909e8:
    if (ctx->pc == 0x2909E8u) {
        ctx->pc = 0x2909E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909E4u;
        // 0x2909e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2909ECu;
        goto label_2909ec;
    }
    ctx->pc = 0x2909E4u;
    {
        const bool branch_taken_0x2909e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909e4) {
            ctx->pc = 0x2909E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2909E4u;
            // 0x2909e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290A68u;
            goto label_290a68;
        }
    }
    ctx->pc = 0x2909ECu;
label_2909ec:
    // 0x2909ec: 0x8ec2020c  lw          $v0, 0x20C($s6)
    ctx->pc = 0x2909ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
label_2909f0:
    // 0x2909f0: 0x8c4305e8  lw          $v1, 0x5E8($v0)
    ctx->pc = 0x2909f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
label_2909f4:
    // 0x2909f4: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x2909f4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2909f8:
    // 0x2909f8: 0x5604000f  bnel        $s0, $a0, . + 4 + (0xF << 2)
label_2909fc:
    if (ctx->pc == 0x2909FCu) {
        ctx->pc = 0x2909FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909F8u;
        // 0x2909fc: 0x8ed00004  lw          $s0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A00u;
        goto label_290a00;
    }
    ctx->pc = 0x2909F8u;
    {
        const bool branch_taken_0x2909f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x2909f8) {
            ctx->pc = 0x2909FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2909F8u;
            // 0x2909fc: 0x8ed00004  lw          $s0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290A38u;
            goto label_290a38;
        }
    }
    ctx->pc = 0x290A00u;
label_290a00:
    // 0x290a00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x290a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_290a04:
    // 0x290a04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290a08:
    // 0x290a08: 0xc0a37a6  jal         func_28DE98
label_290a0c:
    if (ctx->pc == 0x290A0Cu) {
        ctx->pc = 0x290A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A08u;
        // 0x290a0c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A10u;
        goto label_290a10;
    }
    ctx->pc = 0x290A08u;
    SET_GPR_U32(ctx, 31, 0x290A10u);
    ctx->pc = 0x290A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A08u;
    // 0x290a0c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE98u, 0x290A08u, 0x290A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A10u;
label_290a10:
    // 0x290a10: 0x105000fa  beq         $v0, $s0, . + 4 + (0xFA << 2)
label_290a14:
    if (ctx->pc == 0x290A14u) {
        ctx->pc = 0x290A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A10u;
        // 0x290a14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A18u;
        goto label_290a18;
    }
    ctx->pc = 0x290A10u;
    {
        const bool branch_taken_0x290a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x290A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A10u;
        // 0x290a14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a10) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290A18u;
label_290a18:
    // 0x290a18: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_290a1c:
    if (ctx->pc == 0x290A1Cu) {
        ctx->pc = 0x290A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A18u;
        // 0x290a1c: 0x8ed00004  lw          $s0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A20u;
        goto label_290a20;
    }
    ctx->pc = 0x290A18u;
    {
        const bool branch_taken_0x290a18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x290a18) {
            ctx->pc = 0x290A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290A18u;
            // 0x290a1c: 0x8ed00004  lw          $s0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290A38u;
            goto label_290a38;
        }
    }
    ctx->pc = 0x290A20u;
label_290a20:
    // 0x290a20: 0xc087502  jal         func_21D408
label_290a24:
    if (ctx->pc == 0x290A24u) {
        ctx->pc = 0x290A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A20u;
        // 0x290a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A28u;
        goto label_290a28;
    }
    ctx->pc = 0x290A20u;
    SET_GPR_U32(ctx, 31, 0x290A28u);
    ctx->pc = 0x290A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A20u;
    // 0x290a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290A20u, 0x290A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A28u;
label_290a28:
    // 0x290a28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x290a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_290a2c:
    // 0x290a2c: 0x107000f3  beq         $v1, $s0, . + 4 + (0xF3 << 2)
label_290a30:
    if (ctx->pc == 0x290A30u) {
        ctx->pc = 0x290A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A2Cu;
        // 0x290a30: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A34u;
        goto label_290a34;
    }
    ctx->pc = 0x290A2Cu;
    {
        const bool branch_taken_0x290a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x290A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A2Cu;
        // 0x290a30: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a2c) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290A34u;
label_290a34:
    // 0x290a34: 0x8ed00004  lw          $s0, 0x4($s6)
    ctx->pc = 0x290a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_290a38:
    // 0x290a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290a3c:
    // 0x290a3c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_290a40:
    if (ctx->pc == 0x290A40u) {
        ctx->pc = 0x290A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A3Cu;
        // 0x290a40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A44u;
        goto label_290a44;
    }
    ctx->pc = 0x290A3Cu;
    {
        const bool branch_taken_0x290a3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x290A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A3Cu;
        // 0x290a40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a3c) {
            ctx->pc = 0x290A68u;
            goto label_290a68;
        }
    }
    ctx->pc = 0x290A44u;
label_290a44:
    // 0x290a44: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_290a48:
    if (ctx->pc == 0x290A48u) {
        ctx->pc = 0x290A4Cu;
        goto label_290a4c;
    }
    ctx->pc = 0x290A44u;
    {
        const bool branch_taken_0x290a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x290a44) {
            ctx->pc = 0x290A68u;
            goto label_290a68;
        }
    }
    ctx->pc = 0x290A4Cu;
label_290a4c:
    // 0x290a4c: 0xc087502  jal         func_21D408
label_290a50:
    if (ctx->pc == 0x290A50u) {
        ctx->pc = 0x290A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A4Cu;
        // 0x290a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A54u;
        goto label_290a54;
    }
    ctx->pc = 0x290A4Cu;
    SET_GPR_U32(ctx, 31, 0x290A54u);
    ctx->pc = 0x290A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A4Cu;
    // 0x290a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290A4Cu, 0x290A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A54u;
label_290a54:
    // 0x290a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290a58:
    // 0x290a58: 0xc0a404e  jal         func_290138
label_290a5c:
    if (ctx->pc == 0x290A5Cu) {
        ctx->pc = 0x290A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A58u;
        // 0x290a5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A60u;
        goto label_290a60;
    }
    ctx->pc = 0x290A58u;
    SET_GPR_U32(ctx, 31, 0x290A60u);
    ctx->pc = 0x290A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A58u;
    // 0x290a5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x290A58u, 0x290A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A60u;
label_290a60:
    // 0x290a60: 0x105000b9  beq         $v0, $s0, . + 4 + (0xB9 << 2)
label_290a64:
    if (ctx->pc == 0x290A64u) {
        ctx->pc = 0x290A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A60u;
        // 0x290a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A68u;
        goto label_290a68;
    }
    ctx->pc = 0x290A60u;
    {
        const bool branch_taken_0x290a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x290A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A60u;
        // 0x290a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a60) {
            ctx->pc = 0x290D48u;
            goto label_290d48;
        }
    }
    ctx->pc = 0x290A68u;
label_290a68:
    // 0x290a68: 0xc088fa8  jal         func_223EA0
label_290a6c:
    if (ctx->pc == 0x290A6Cu) {
        ctx->pc = 0x290A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A68u;
        // 0x290a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A70u;
        goto label_290a70;
    }
    ctx->pc = 0x290A68u;
    SET_GPR_U32(ctx, 31, 0x290A70u);
    ctx->pc = 0x290A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A68u;
    // 0x290a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x290A68u, 0x290A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A70u;
label_290a70:
    // 0x290a70: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x290a70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290a74:
    // 0x290a74: 0x10570006  beq         $v0, $s7, . + 4 + (0x6 << 2)
label_290a78:
    if (ctx->pc == 0x290A78u) {
        ctx->pc = 0x290A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A74u;
        // 0x290a78: 0x269e0090  addiu       $fp, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A7Cu;
        goto label_290a7c;
    }
    ctx->pc = 0x290A74u;
    {
        const bool branch_taken_0x290a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x290A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A74u;
        // 0x290a78: 0x269e0090  addiu       $fp, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a74) {
            ctx->pc = 0x290A90u;
            goto label_290a90;
        }
    }
    ctx->pc = 0x290A7Cu;
label_290a7c:
    // 0x290a7c: 0xc089000  jal         func_224000
label_290a80:
    if (ctx->pc == 0x290A80u) {
        ctx->pc = 0x290A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A7Cu;
        // 0x290a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A84u;
        goto label_290a84;
    }
    ctx->pc = 0x290A7Cu;
    SET_GPR_U32(ctx, 31, 0x290A84u);
    ctx->pc = 0x290A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A7Cu;
    // 0x290a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x290A7Cu, 0x290A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A84u;
label_290a84:
    // 0x290a84: 0x54570052  bnel        $v0, $s7, . + 4 + (0x52 << 2)
label_290a88:
    if (ctx->pc == 0x290A88u) {
        ctx->pc = 0x290A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A84u;
        // 0x290a88: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A8Cu;
        goto label_290a8c;
    }
    ctx->pc = 0x290A84u;
    {
        const bool branch_taken_0x290a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x290a84) {
            ctx->pc = 0x290A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290A84u;
            // 0x290a88: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BD0u;
            goto label_290bd0;
        }
    }
    ctx->pc = 0x290A8Cu;
label_290a8c:
    // 0x290a8c: 0x269e0090  addiu       $fp, $s4, 0x90
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_290a90:
    // 0x290a90: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x290a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_290a94:
    // 0x290a94: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x290a94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_290a98:
    // 0x290a98: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x290a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_290a9c:
    // 0x290a9c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x290a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_290aa0:
    // 0x290aa0: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x290aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_290aa4:
    // 0x290aa4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x290aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_290aa8:
    // 0x290aa8: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x290aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_290aac:
    // 0x290aac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x290aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_290ab0:
    // 0x290ab0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x290ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_290ab4:
    // 0x290ab4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x290ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_290ab8:
    // 0x290ab8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x290ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_290abc:
    // 0x290abc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x290abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_290ac0:
    // 0x290ac0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x290ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_290ac4:
    // 0x290ac4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x290ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290ac8:
    // 0x290ac8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x290ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_290acc:
    // 0x290acc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x290accu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_290ad0:
    // 0x290ad0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x290ad0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_290ad4:
    // 0x290ad4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x290ad4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_290ad8:
    // 0x290ad8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x290ad8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_290adc:
    // 0x290adc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290ae0:
    // 0x290ae0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x290ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_290ae4:
    // 0x290ae4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x290ae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_290ae8:
    // 0x290ae8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x290ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_290aec:
    // 0x290aec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x290aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_290af0:
    // 0x290af0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x290af0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_290af4:
    // 0x290af4: 0x4a0003bf  vwaitq
    ctx->pc = 0x290af4u;
    // VWAITQ (Q already resolved in this runtime)
label_290af8:
    // 0x290af8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x290af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_290afc:
    // 0x290afc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x290afcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_290b00:
    // 0x290b00: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x290b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_290b04:
    // 0x290b04: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x290b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_290b08:
    // 0x290b08: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x290b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_290b0c:
    // 0x290b0c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x290b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_290b10:
    // 0x290b10: 0xc0a77de  jal         func_29DF78
label_290b14:
    if (ctx->pc == 0x290B14u) {
        ctx->pc = 0x290B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B10u;
        // 0x290b14: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B18u;
        goto label_290b18;
    }
    ctx->pc = 0x290B10u;
    SET_GPR_U32(ctx, 31, 0x290B18u);
    ctx->pc = 0x290B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B10u;
    // 0x290b14: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DF78u, 0x290B10u, 0x290B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B18u;
label_290b18:
    // 0x290b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290b1c:
    // 0x290b1c: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
label_290b20:
    if (ctx->pc == 0x290B20u) {
        ctx->pc = 0x290B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B1Cu;
        // 0x290b20: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B24u;
        goto label_290b24;
    }
    ctx->pc = 0x290B1Cu;
    {
        const bool branch_taken_0x290b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b1c) {
            ctx->pc = 0x290B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B1Cu;
            // 0x290b20: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BD0u;
            goto label_290bd0;
        }
    }
    ctx->pc = 0x290B24u;
label_290b24:
    // 0x290b24: 0x5214002a  beql        $s0, $s4, . + 4 + (0x2A << 2)
label_290b28:
    if (ctx->pc == 0x290B28u) {
        ctx->pc = 0x290B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B24u;
        // 0x290b28: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B2Cu;
        goto label_290b2c;
    }
    ctx->pc = 0x290B24u;
    {
        const bool branch_taken_0x290b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x290b24) {
            ctx->pc = 0x290B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B24u;
            // 0x290b28: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BD0u;
            goto label_290bd0;
        }
    }
    ctx->pc = 0x290B2Cu;
label_290b2c:
    // 0x290b2c: 0xc088e40  jal         func_223900
label_290b30:
    if (ctx->pc == 0x290B30u) {
        ctx->pc = 0x290B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B2Cu;
        // 0x290b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B34u;
        goto label_290b34;
    }
    ctx->pc = 0x290B2Cu;
    SET_GPR_U32(ctx, 31, 0x290B34u);
    ctx->pc = 0x290B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B2Cu;
    // 0x290b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x290B2Cu, 0x290B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B34u;
label_290b34:
    // 0x290b34: 0x10570014  beq         $v0, $s7, . + 4 + (0x14 << 2)
label_290b38:
    if (ctx->pc == 0x290B38u) {
        ctx->pc = 0x290B3Cu;
        goto label_290b3c;
    }
    ctx->pc = 0x290B34u;
    {
        const bool branch_taken_0x290b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x290b34) {
            ctx->pc = 0x290B88u;
            goto label_290b88;
        }
    }
    ctx->pc = 0x290B3Cu;
label_290b3c:
    // 0x290b3c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x290b3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_290b40:
    // 0x290b40: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x290b40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_290b44:
    // 0x290b44: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x290b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_290b48:
    // 0x290b48: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x290b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_290b4c:
    // 0x290b4c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x290b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_290b50:
    // 0x290b50: 0xc0cdb38  jal         func_336CE0
label_290b54:
    if (ctx->pc == 0x290B54u) {
        ctx->pc = 0x290B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B50u;
        // 0x290b54: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B58u;
        goto label_290b58;
    }
    ctx->pc = 0x290B50u;
    SET_GPR_U32(ctx, 31, 0x290B58u);
    ctx->pc = 0x290B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B50u;
    // 0x290b54: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x290B50u, 0x290B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B58u;
label_290b58:
    // 0x290b58: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x290b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_290b5c:
    // 0x290b5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x290b5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_290b60:
    // 0x290b60: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x290b60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_290b64:
    // 0x290b64: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x290b64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_290b68:
    // 0x290b68: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x290b68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_290b6c:
    // 0x290b6c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x290b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_290b70:
    // 0x290b70: 0xc0cdb38  jal         func_336CE0
label_290b74:
    if (ctx->pc == 0x290B74u) {
        ctx->pc = 0x290B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B70u;
        // 0x290b74: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B78u;
        goto label_290b78;
    }
    ctx->pc = 0x290B70u;
    SET_GPR_U32(ctx, 31, 0x290B78u);
    ctx->pc = 0x290B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B70u;
    // 0x290b74: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x290B70u, 0x290B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B78u;
label_290b78:
    // 0x290b78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x290b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290b7c:
    // 0x290b7c: 0x0  nop
    ctx->pc = 0x290b7cu;
    // NOP
label_290b80:
    // 0x290b80: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_290b84:
    if (ctx->pc == 0x290B84u) {
        ctx->pc = 0x290B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B80u;
        // 0x290b84: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B88u;
        goto label_290b88;
    }
    ctx->pc = 0x290B80u;
    {
        const bool branch_taken_0x290b80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290b80) {
            ctx->pc = 0x290B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B80u;
            // 0x290b84: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BD0u;
            goto label_290bd0;
        }
    }
    ctx->pc = 0x290B88u;
label_290b88:
    // 0x290b88: 0xc0a367c  jal         func_28D9F0
label_290b8c:
    if (ctx->pc == 0x290B8Cu) {
        ctx->pc = 0x290B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B88u;
        // 0x290b8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B90u;
        goto label_290b90;
    }
    ctx->pc = 0x290B88u;
    SET_GPR_U32(ctx, 31, 0x290B90u);
    ctx->pc = 0x290B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B88u;
    // 0x290b8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x290B88u, 0x290B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B90u;
label_290b90:
    // 0x290b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290b94:
    // 0x290b94: 0x52000099  beql        $s0, $zero, . + 4 + (0x99 << 2)
label_290b98:
    if (ctx->pc == 0x290B98u) {
        ctx->pc = 0x290B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B94u;
        // 0x290b98: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B9Cu;
        goto label_290b9c;
    }
    ctx->pc = 0x290B94u;
    {
        const bool branch_taken_0x290b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b94) {
            ctx->pc = 0x290B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B94u;
            // 0x290b98: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290B9Cu;
label_290b9c:
    // 0x290b9c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x290b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_290ba0:
    // 0x290ba0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x290ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_290ba4:
    // 0x290ba4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x290ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_290ba8:
    // 0x290ba8: 0x40f809  jalr        $v0
label_290bac:
    if (ctx->pc == 0x290BACu) {
        ctx->pc = 0x290BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA8u;
        // 0x290bac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BB0u;
        goto label_290bb0;
    }
    ctx->pc = 0x290BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290BB0u);
        ctx->pc = 0x290BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA8u;
        // 0x290bac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290BA8u, 0x290BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290BB0u;
label_290bb0:
    // 0x290bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290bb4:
    // 0x290bb4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x290bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_290bb8:
    // 0x290bb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x290bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290bbc:
    // 0x290bbc: 0x240705dc  addiu       $a3, $zero, 0x5DC
    ctx->pc = 0x290bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_290bc0:
    // 0x290bc0: 0xc0bfabe  jal         func_2FEAF8
label_290bc4:
    if (ctx->pc == 0x290BC4u) {
        ctx->pc = 0x290BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BC0u;
        // 0x290bc4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BC8u;
        goto label_290bc8;
    }
    ctx->pc = 0x290BC0u;
    SET_GPR_U32(ctx, 31, 0x290BC8u);
    ctx->pc = 0x290BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BC0u;
    // 0x290bc4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x290BC0u, 0x290BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BC8u;
label_290bc8:
    // 0x290bc8: 0x1000008c  b           . + 4 + (0x8C << 2)
label_290bcc:
    if (ctx->pc == 0x290BCCu) {
        ctx->pc = 0x290BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BC8u;
        // 0x290bcc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BD0u;
        goto label_290bd0;
    }
    ctx->pc = 0x290BC8u;
    {
        const bool branch_taken_0x290bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BC8u;
        // 0x290bcc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bc8) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290BD0u;
label_290bd0:
    // 0x290bd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x290bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_290bd4:
    // 0x290bd4: 0x54620049  bnel        $v1, $v0, . + 4 + (0x49 << 2)
label_290bd8:
    if (ctx->pc == 0x290BD8u) {
        ctx->pc = 0x290BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD4u;
        // 0x290bd8: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BDCu;
        goto label_290bdc;
    }
    ctx->pc = 0x290BD4u;
    {
        const bool branch_taken_0x290bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290bd4) {
            ctx->pc = 0x290BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BD4u;
            // 0x290bd8: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CFCu;
            goto label_290cfc;
        }
    }
    ctx->pc = 0x290BDCu;
label_290bdc:
    // 0x290bdc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x290bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_290be0:
    // 0x290be0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x290be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_290be4:
    // 0x290be4: 0x54620045  bnel        $v1, $v0, . + 4 + (0x45 << 2)
label_290be8:
    if (ctx->pc == 0x290BE8u) {
        ctx->pc = 0x290BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BE4u;
        // 0x290be8: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BECu;
        goto label_290bec;
    }
    ctx->pc = 0x290BE4u;
    {
        const bool branch_taken_0x290be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290be4) {
            ctx->pc = 0x290BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BE4u;
            // 0x290be8: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CFCu;
            goto label_290cfc;
        }
    }
    ctx->pc = 0x290BECu;
label_290bec:
    // 0x290bec: 0xc0e409a  jal         func_390268
label_290bf0:
    if (ctx->pc == 0x290BF0u) {
        ctx->pc = 0x290BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BECu;
        // 0x290bf0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BF4u;
        goto label_290bf4;
    }
    ctx->pc = 0x290BECu;
    SET_GPR_U32(ctx, 31, 0x290BF4u);
    ctx->pc = 0x290BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BECu;
    // 0x290bf0: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290BECu, 0x290BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BF4u;
label_290bf4:
    // 0x290bf4: 0x10530040  beq         $v0, $s3, . + 4 + (0x40 << 2)
label_290bf8:
    if (ctx->pc == 0x290BF8u) {
        ctx->pc = 0x290BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BF4u;
        // 0x290bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BFCu;
        goto label_290bfc;
    }
    ctx->pc = 0x290BF4u;
    {
        const bool branch_taken_0x290bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x290BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BF4u;
        // 0x290bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bf4) {
            ctx->pc = 0x290CF8u;
            goto label_290cf8;
        }
    }
    ctx->pc = 0x290BFCu;
label_290bfc:
    // 0x290bfc: 0xc088fa8  jal         func_223EA0
label_290c00:
    if (ctx->pc == 0x290C00u) {
        ctx->pc = 0x290C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BFCu;
        // 0x290c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C04u;
        goto label_290c04;
    }
    ctx->pc = 0x290BFCu;
    SET_GPR_U32(ctx, 31, 0x290C04u);
    ctx->pc = 0x290C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BFCu;
    // 0x290c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x290BFCu, 0x290C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C04u;
label_290c04:
    // 0x290c04: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_290c08:
    if (ctx->pc == 0x290C08u) {
        ctx->pc = 0x290C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C04u;
        // 0x290c08: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C0Cu;
        goto label_290c0c;
    }
    ctx->pc = 0x290C04u;
    {
        const bool branch_taken_0x290c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290c04) {
            ctx->pc = 0x290C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C04u;
            // 0x290c08: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CFCu;
            goto label_290cfc;
        }
    }
    ctx->pc = 0x290C0Cu;
label_290c0c:
    // 0x290c0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x290c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_290c10:
    // 0x290c10: 0xc0a446a  jal         func_2911A8
label_290c14:
    if (ctx->pc == 0x290C14u) {
        ctx->pc = 0x290C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C10u;
        // 0x290c14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C18u;
        goto label_290c18;
    }
    ctx->pc = 0x290C10u;
    SET_GPR_U32(ctx, 31, 0x290C18u);
    ctx->pc = 0x290C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C10u;
    // 0x290c14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911A8u, 0x290C10u, 0x290C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C18u;
label_290c18:
    // 0x290c18: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_290c1c:
    if (ctx->pc == 0x290C1Cu) {
        ctx->pc = 0x290C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C18u;
        // 0x290c1c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C20u;
        goto label_290c20;
    }
    ctx->pc = 0x290C18u;
    {
        const bool branch_taken_0x290c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290c18) {
            ctx->pc = 0x290C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C18u;
            // 0x290c1c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CFCu;
            goto label_290cfc;
        }
    }
    ctx->pc = 0x290C20u;
label_290c20:
    // 0x290c20: 0xc6a0013c  lwc1        $f0, 0x13C($s5)
    ctx->pc = 0x290c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290c24:
    // 0x290c24: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x290c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_290c28:
    // 0x290c28: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x290c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_290c2c:
    // 0x290c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x290c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_290c30:
    // 0x290c30: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_290c34:
    // 0x290c34: 0x26de01a4  addiu       $fp, $s6, 0x1A4
    ctx->pc = 0x290c34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 420));
label_290c38:
    // 0x290c38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x290c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290c3c:
    // 0x290c3c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x290c3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_290c40:
    // 0x290c40: 0x26970090  addiu       $s7, $s4, 0x90
    ctx->pc = 0x290c40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_290c44:
    // 0x290c44: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x290c44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_290c48:
    // 0x290c48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x290c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_290c4c:
    // 0x290c4c: 0x0  nop
    ctx->pc = 0x290c4cu;
    // NOP
label_290c50:
    // 0x290c50: 0xc137866  jal         func_4DE198
label_290c54:
    if (ctx->pc == 0x290C54u) {
        ctx->pc = 0x290C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C50u;
        // 0x290c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C58u;
        goto label_290c58;
    }
    ctx->pc = 0x290C50u;
    SET_GPR_U32(ctx, 31, 0x290C58u);
    ctx->pc = 0x290C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C50u;
    // 0x290c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x290C50u, 0x290C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C58u;
label_290c58:
    // 0x290c58: 0xc0e409a  jal         func_390268
label_290c5c:
    if (ctx->pc == 0x290C5Cu) {
        ctx->pc = 0x290C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C58u;
        // 0x290c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C60u;
        goto label_290c60;
    }
    ctx->pc = 0x290C58u;
    SET_GPR_U32(ctx, 31, 0x290C60u);
    ctx->pc = 0x290C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C58u;
    // 0x290c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290C58u, 0x290C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C60u;
label_290c60:
    // 0x290c60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290c64:
    // 0x290c64: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
label_290c68:
    if (ctx->pc == 0x290C68u) {
        ctx->pc = 0x290C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C64u;
        // 0x290c68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C6Cu;
        goto label_290c6c;
    }
    ctx->pc = 0x290C64u;
    {
        const bool branch_taken_0x290c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c64) {
            ctx->pc = 0x290C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C64u;
            // 0x290c68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CECu;
            goto label_290cec;
        }
    }
    ctx->pc = 0x290C6Cu;
label_290c6c:
    // 0x290c6c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x290c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_290c70:
    // 0x290c70: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x290c70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_290c74:
    // 0x290c74: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_290c78:
    if (ctx->pc == 0x290C78u) {
        ctx->pc = 0x290C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C74u;
        // 0x290c78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C7Cu;
        goto label_290c7c;
    }
    ctx->pc = 0x290C74u;
    {
        const bool branch_taken_0x290c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c74) {
            ctx->pc = 0x290C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C74u;
            // 0x290c78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CECu;
            goto label_290cec;
        }
    }
    ctx->pc = 0x290C7Cu;
label_290c7c:
    // 0x290c7c: 0xc08a08a  jal         func_228228
label_290c80:
    if (ctx->pc == 0x290C80u) {
        ctx->pc = 0x290C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C7Cu;
        // 0x290c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C84u;
        goto label_290c84;
    }
    ctx->pc = 0x290C7Cu;
    SET_GPR_U32(ctx, 31, 0x290C84u);
    ctx->pc = 0x290C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C7Cu;
    // 0x290c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x290C7Cu, 0x290C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C84u;
label_290c84:
    // 0x290c84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x290c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290c88:
    // 0x290c88: 0x5444000e  bnel        $v0, $a0, . + 4 + (0xE << 2)
label_290c8c:
    if (ctx->pc == 0x290C8Cu) {
        ctx->pc = 0x290C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C88u;
        // 0x290c8c: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C90u;
        goto label_290c90;
    }
    ctx->pc = 0x290C88u;
    {
        const bool branch_taken_0x290c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x290c88) {
            ctx->pc = 0x290C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C88u;
            // 0x290c8c: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CC4u;
            goto label_290cc4;
        }
    }
    ctx->pc = 0x290C90u;
label_290c90:
    // 0x290c90: 0xc088e40  jal         func_223900
label_290c94:
    if (ctx->pc == 0x290C94u) {
        ctx->pc = 0x290C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C90u;
        // 0x290c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C98u;
        goto label_290c98;
    }
    ctx->pc = 0x290C90u;
    SET_GPR_U32(ctx, 31, 0x290C98u);
    ctx->pc = 0x290C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C90u;
    // 0x290c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x290C90u, 0x290C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C98u;
label_290c98:
    // 0x290c98: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_290c9c:
    if (ctx->pc == 0x290C9Cu) {
        ctx->pc = 0x290C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C98u;
        // 0x290c9c: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CA0u;
        goto label_290ca0;
    }
    ctx->pc = 0x290C98u;
    {
        const bool branch_taken_0x290c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290c98) {
            ctx->pc = 0x290C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C98u;
            // 0x290c9c: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CC4u;
            goto label_290cc4;
        }
    }
    ctx->pc = 0x290CA0u;
label_290ca0:
    // 0x290ca0: 0xc088e78  jal         func_2239E0
label_290ca4:
    if (ctx->pc == 0x290CA4u) {
        ctx->pc = 0x290CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CA0u;
        // 0x290ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CA8u;
        goto label_290ca8;
    }
    ctx->pc = 0x290CA0u;
    SET_GPR_U32(ctx, 31, 0x290CA8u);
    ctx->pc = 0x290CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CA0u;
    // 0x290ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x290CA0u, 0x290CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CA8u;
label_290ca8:
    // 0x290ca8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_290cac:
    if (ctx->pc == 0x290CACu) {
        ctx->pc = 0x290CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CA8u;
        // 0x290cac: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CB0u;
        goto label_290cb0;
    }
    ctx->pc = 0x290CA8u;
    {
        const bool branch_taken_0x290ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290ca8) {
            ctx->pc = 0x290CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290CA8u;
            // 0x290cac: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CC4u;
            goto label_290cc4;
        }
    }
    ctx->pc = 0x290CB0u;
label_290cb0:
    // 0x290cb0: 0xc088e68  jal         func_2239A0
label_290cb4:
    if (ctx->pc == 0x290CB4u) {
        ctx->pc = 0x290CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CB0u;
        // 0x290cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CB8u;
        goto label_290cb8;
    }
    ctx->pc = 0x290CB0u;
    SET_GPR_U32(ctx, 31, 0x290CB8u);
    ctx->pc = 0x290CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CB0u;
    // 0x290cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x290CB0u, 0x290CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CB8u;
label_290cb8:
    // 0x290cb8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_290cbc:
    if (ctx->pc == 0x290CBCu) {
        ctx->pc = 0x290CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CB8u;
        // 0x290cbc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CC0u;
        goto label_290cc0;
    }
    ctx->pc = 0x290CB8u;
    {
        const bool branch_taken_0x290cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290cb8) {
            ctx->pc = 0x290CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290CB8u;
            // 0x290cbc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CECu;
            goto label_290cec;
        }
    }
    ctx->pc = 0x290CC0u;
label_290cc0:
    // 0x290cc0: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x290cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_290cc4:
    // 0x290cc4: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x290cc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_290cc8:
    // 0x290cc8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x290cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_290ccc:
    // 0x290ccc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x290cccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_290cd0:
    // 0x290cd0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_290cd4:
    // 0x290cd4: 0xc0cdb38  jal         func_336CE0
label_290cd8:
    if (ctx->pc == 0x290CD8u) {
        ctx->pc = 0x290CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CD4u;
        // 0x290cd8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CDCu;
        goto label_290cdc;
    }
    ctx->pc = 0x290CD4u;
    SET_GPR_U32(ctx, 31, 0x290CDCu);
    ctx->pc = 0x290CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CD4u;
    // 0x290cd8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x290CD4u, 0x290CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CDCu;
label_290cdc:
    // 0x290cdc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x290cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290ce0:
    // 0x290ce0: 0x0  nop
    ctx->pc = 0x290ce0u;
    // NOP
label_290ce4:
    // 0x290ce4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_290ce8:
    if (ctx->pc == 0x290CE8u) {
        ctx->pc = 0x290CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CE4u;
        // 0x290ce8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CECu;
        goto label_290cec;
    }
    ctx->pc = 0x290CE4u;
    {
        const bool branch_taken_0x290ce4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CE4u;
        // 0x290ce8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ce4) {
            ctx->pc = 0x290D88u;
            goto label_290d88;
        }
    }
    ctx->pc = 0x290CECu;
label_290cec:
    // 0x290cec: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x290cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_290cf0:
    // 0x290cf0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_290cf4:
    if (ctx->pc == 0x290CF4u) {
        ctx->pc = 0x290CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CF0u;
        // 0x290cf4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CF8u;
        goto label_290cf8;
    }
    ctx->pc = 0x290CF0u;
    {
        const bool branch_taken_0x290cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CF0u;
        // 0x290cf4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cf0) {
            ctx->pc = 0x290C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290c50;
        }
    }
    ctx->pc = 0x290CF8u;
label_290cf8:
    // 0x290cf8: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x290cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_290cfc:
    // 0x290cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290d00:
    // 0x290d00: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_290d04:
    if (ctx->pc == 0x290D04u) {
        ctx->pc = 0x290D08u;
        goto label_290d08;
    }
    ctx->pc = 0x290D00u;
    {
        const bool branch_taken_0x290d00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x290d00) {
            ctx->pc = 0x290D50u;
            goto label_290d50;
        }
    }
    ctx->pc = 0x290D08u;
label_290d08:
    // 0x290d08: 0xc088e38  jal         func_2238E0
label_290d0c:
    if (ctx->pc == 0x290D0Cu) {
        ctx->pc = 0x290D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D08u;
        // 0x290d0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D10u;
        goto label_290d10;
    }
    ctx->pc = 0x290D08u;
    SET_GPR_U32(ctx, 31, 0x290D10u);
    ctx->pc = 0x290D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D08u;
    // 0x290d0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x290D08u, 0x290D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D10u;
label_290d10:
    // 0x290d10: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_290d14:
    if (ctx->pc == 0x290D14u) {
        ctx->pc = 0x290D18u;
        goto label_290d18;
    }
    ctx->pc = 0x290D10u;
    {
        const bool branch_taken_0x290d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x290d10) {
            ctx->pc = 0x290D38u;
            goto label_290d38;
        }
    }
    ctx->pc = 0x290D18u;
label_290d18:
    // 0x290d18: 0xc08a034  jal         func_2280D0
label_290d1c:
    if (ctx->pc == 0x290D1Cu) {
        ctx->pc = 0x290D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D18u;
        // 0x290d1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D20u;
        goto label_290d20;
    }
    ctx->pc = 0x290D18u;
    SET_GPR_U32(ctx, 31, 0x290D20u);
    ctx->pc = 0x290D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D18u;
    // 0x290d1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280D0u, 0x290D18u, 0x290D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D20u;
label_290d20:
    // 0x290d20: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_290d24:
    if (ctx->pc == 0x290D24u) {
        ctx->pc = 0x290D28u;
        goto label_290d28;
    }
    ctx->pc = 0x290D20u;
    {
        const bool branch_taken_0x290d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x290d20) {
            ctx->pc = 0x290D38u;
            goto label_290d38;
        }
    }
    ctx->pc = 0x290D28u;
label_290d28:
    // 0x290d28: 0xc08a050  jal         func_228140
label_290d2c:
    if (ctx->pc == 0x290D2Cu) {
        ctx->pc = 0x290D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D28u;
        // 0x290d2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D30u;
        goto label_290d30;
    }
    ctx->pc = 0x290D28u;
    SET_GPR_U32(ctx, 31, 0x290D30u);
    ctx->pc = 0x290D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D28u;
    // 0x290d2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228140u, 0x290D28u, 0x290D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D30u;
label_290d30:
    // 0x290d30: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_290d34:
    if (ctx->pc == 0x290D34u) {
        ctx->pc = 0x290D38u;
        goto label_290d38;
    }
    ctx->pc = 0x290D30u;
    {
        const bool branch_taken_0x290d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x290d30) {
            ctx->pc = 0x290D50u;
            goto label_290d50;
        }
    }
    ctx->pc = 0x290D38u;
label_290d38:
    // 0x290d38: 0xc0e409a  jal         func_390268
label_290d3c:
    if (ctx->pc == 0x290D3Cu) {
        ctx->pc = 0x290D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D38u;
        // 0x290d3c: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D40u;
        goto label_290d40;
    }
    ctx->pc = 0x290D38u;
    SET_GPR_U32(ctx, 31, 0x290D40u);
    ctx->pc = 0x290D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D38u;
    // 0x290d3c: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290D38u, 0x290D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D40u;
label_290d40:
    // 0x290d40: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
label_290d44:
    if (ctx->pc == 0x290D44u) {
        ctx->pc = 0x290D48u;
        goto label_290d48;
    }
    ctx->pc = 0x290D40u;
    {
        const bool branch_taken_0x290d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x290d40) {
            ctx->pc = 0x290D50u;
            goto label_290d50;
        }
    }
    ctx->pc = 0x290D48u;
label_290d48:
    // 0x290d48: 0x1000002c  b           . + 4 + (0x2C << 2)
label_290d4c:
    if (ctx->pc == 0x290D4Cu) {
        ctx->pc = 0x290D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D48u;
        // 0x290d4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D50u;
        goto label_290d50;
    }
    ctx->pc = 0x290D48u;
    {
        const bool branch_taken_0x290d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D48u;
        // 0x290d4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d48) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290D50u;
label_290d50:
    // 0x290d50: 0xc0e409a  jal         func_390268
label_290d54:
    if (ctx->pc == 0x290D54u) {
        ctx->pc = 0x290D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D50u;
        // 0x290d54: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D58u;
        goto label_290d58;
    }
    ctx->pc = 0x290D50u;
    SET_GPR_U32(ctx, 31, 0x290D58u);
    ctx->pc = 0x290D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D50u;
    // 0x290d54: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290D50u, 0x290D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D58u;
label_290d58:
    // 0x290d58: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x290d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_290d5c:
    // 0x290d5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x290d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_290d60:
    // 0x290d60: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x290d60u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_290d64:
    // 0x290d64: 0xc0a4402  jal         func_291008
label_290d68:
    if (ctx->pc == 0x290D68u) {
        ctx->pc = 0x290D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D64u;
        // 0x290d68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D6Cu;
        goto label_290d6c;
    }
    ctx->pc = 0x290D64u;
    SET_GPR_U32(ctx, 31, 0x290D6Cu);
    ctx->pc = 0x290D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D64u;
    // 0x290d68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291008u, 0x290D64u, 0x290D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D6Cu;
label_290d6c:
    // 0x290d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290d70:
    // 0x290d70: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_290d74:
    if (ctx->pc == 0x290D74u) {
        ctx->pc = 0x290D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D70u;
        // 0x290d74: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D78u;
        goto label_290d78;
    }
    ctx->pc = 0x290D70u;
    {
        const bool branch_taken_0x290d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x290D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D70u;
        // 0x290d74: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d70) {
            ctx->pc = 0x290D98u;
            goto label_290d98;
        }
    }
    ctx->pc = 0x290D78u;
label_290d78:
    // 0x290d78: 0x10000020  b           . + 4 + (0x20 << 2)
label_290d7c:
    if (ctx->pc == 0x290D7Cu) {
        ctx->pc = 0x290D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D78u;
        // 0x290d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D80u;
        goto label_290d80;
    }
    ctx->pc = 0x290D78u;
    {
        const bool branch_taken_0x290d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D78u;
        // 0x290d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d78) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290D80u;
label_290d80:
    // 0x290d80: 0x1000001e  b           . + 4 + (0x1E << 2)
label_290d84:
    if (ctx->pc == 0x290D84u) {
        ctx->pc = 0x290D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D80u;
        // 0x290d84: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D88u;
        goto label_290d88;
    }
    ctx->pc = 0x290D80u;
    {
        const bool branch_taken_0x290d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D80u;
        // 0x290d84: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d80) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290D88u;
label_290d88:
    // 0x290d88: 0x1000001c  b           . + 4 + (0x1C << 2)
label_290d8c:
    if (ctx->pc == 0x290D8Cu) {
        ctx->pc = 0x290D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D88u;
        // 0x290d8c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D90u;
        goto label_290d90;
    }
    ctx->pc = 0x290D88u;
    {
        const bool branch_taken_0x290d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D88u;
        // 0x290d8c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d88) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290D90u;
label_290d90:
    // 0x290d90: 0x1000001a  b           . + 4 + (0x1A << 2)
label_290d94:
    if (ctx->pc == 0x290D94u) {
        ctx->pc = 0x290D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D90u;
        // 0x290d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D98u;
        goto label_290d98;
    }
    ctx->pc = 0x290D90u;
    {
        const bool branch_taken_0x290d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D90u;
        // 0x290d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d90) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290D98u;
label_290d98:
    // 0x290d98: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x290d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_290d9c:
    // 0x290d9c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_290da0:
    if (ctx->pc == 0x290DA0u) {
        ctx->pc = 0x290DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D9Cu;
        // 0x290da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DA4u;
        goto label_290da4;
    }
    ctx->pc = 0x290D9Cu;
    {
        const bool branch_taken_0x290d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D9Cu;
        // 0x290da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d9c) {
            ctx->pc = 0x290DFCu;
            goto label_290dfc;
        }
    }
    ctx->pc = 0x290DA4u;
label_290da4:
    // 0x290da4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x290da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_290da8:
    // 0x290da8: 0xc0a3fa4  jal         func_28FE90
label_290dac:
    if (ctx->pc == 0x290DACu) {
        ctx->pc = 0x290DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DA8u;
        // 0x290dac: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DB0u;
        goto label_290db0;
    }
    ctx->pc = 0x290DA8u;
    SET_GPR_U32(ctx, 31, 0x290DB0u);
    ctx->pc = 0x290DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DA8u;
    // 0x290dac: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x290DA8u, 0x290DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DB0u;
label_290db0:
    // 0x290db0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x290db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_290db4:
    // 0x290db4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x290db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_290db8:
    // 0x290db8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x290db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290dbc:
    // 0x290dbc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x290dbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290dc0:
    // 0x290dc0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x290dc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_290dc4:
    // 0x290dc4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x290dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_290dc8:
    // 0x290dc8: 0x40f809  jalr        $v0
label_290dcc:
    if (ctx->pc == 0x290DCCu) {
        ctx->pc = 0x290DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DC8u;
        // 0x290dcc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DD0u;
        goto label_290dd0;
    }
    ctx->pc = 0x290DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290DD0u);
        ctx->pc = 0x290DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DC8u;
        // 0x290dcc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290DC8u, 0x290DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290DD0u;
label_290dd0:
    // 0x290dd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x290dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290dd4:
    // 0x290dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290dd8:
    // 0x290dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290ddc:
    // 0x290ddc: 0xc0a7ab6  jal         func_29EAD8
label_290de0:
    if (ctx->pc == 0x290DE0u) {
        ctx->pc = 0x290DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DDCu;
        // 0x290de0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DE4u;
        goto label_290de4;
    }
    ctx->pc = 0x290DDCu;
    SET_GPR_U32(ctx, 31, 0x290DE4u);
    ctx->pc = 0x290DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DDCu;
    // 0x290de0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD8u, 0x290DDCu, 0x290DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DE4u;
label_290de4:
    // 0x290de4: 0x1054ffea  beq         $v0, $s4, . + 4 + (-0x16 << 2)
label_290de8:
    if (ctx->pc == 0x290DE8u) {
        ctx->pc = 0x290DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DE4u;
        // 0x290de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DECu;
        goto label_290dec;
    }
    ctx->pc = 0x290DE4u;
    {
        const bool branch_taken_0x290de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x290DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DE4u;
        // 0x290de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290de4) {
            ctx->pc = 0x290D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290d90;
        }
    }
    ctx->pc = 0x290DECu;
label_290dec:
    // 0x290dec: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x290decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_290df0:
    // 0x290df0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_290df4:
    if (ctx->pc == 0x290DF4u) {
        ctx->pc = 0x290DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DF0u;
        // 0x290df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DF8u;
        goto label_290df8;
    }
    ctx->pc = 0x290DF0u;
    {
        const bool branch_taken_0x290df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DF0u;
        // 0x290df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290df0) {
            ctx->pc = 0x290DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290dd8;
        }
    }
    ctx->pc = 0x290DF8u;
label_290df8:
    // 0x290df8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290dfc:
    // 0x290dfc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x290dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_290e00:
    // 0x290e00: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x290e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_290e04:
    // 0x290e04: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x290e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_290e08:
    // 0x290e08: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x290e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_290e0c:
    // 0x290e0c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x290e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_290e10:
    // 0x290e10: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x290e10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_290e14:
    // 0x290e14: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x290e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_290e18:
    // 0x290e18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x290e18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_290e1c:
    // 0x290e1c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x290e1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_290e20:
    // 0x290e20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x290e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_290e24:
    // 0x290e24: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x290e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_290e28:
    // 0x290e28: 0x3e00008  jr          $ra
label_290e2c:
    if (ctx->pc == 0x290E2Cu) {
        ctx->pc = 0x290E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E28u;
        // 0x290e2c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E30u;
        goto label_fallthrough_0x290e28;
    }
    ctx->pc = 0x290E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E28u;
        // 0x290e2c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x290e28:
    ctx->pc = 0x290E30u;
}
