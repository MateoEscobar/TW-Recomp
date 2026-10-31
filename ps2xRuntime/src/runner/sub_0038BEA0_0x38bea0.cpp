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

// Function: sub_0038BEA0
// Address: 0x38bea0 - 0x38c7d8
void sub_0038BEA0_0x38bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BEA0_0x38bea0");
#endif

    switch (ctx->pc) {
        case 0x38bea0u: goto label_38bea0;
        case 0x38bea4u: goto label_38bea4;
        case 0x38bea8u: goto label_38bea8;
        case 0x38beacu: goto label_38beac;
        case 0x38beb0u: goto label_38beb0;
        case 0x38beb4u: goto label_38beb4;
        case 0x38beb8u: goto label_38beb8;
        case 0x38bebcu: goto label_38bebc;
        case 0x38bec0u: goto label_38bec0;
        case 0x38bec4u: goto label_38bec4;
        case 0x38bec8u: goto label_38bec8;
        case 0x38beccu: goto label_38becc;
        case 0x38bed0u: goto label_38bed0;
        case 0x38bed4u: goto label_38bed4;
        case 0x38bed8u: goto label_38bed8;
        case 0x38bedcu: goto label_38bedc;
        case 0x38bee0u: goto label_38bee0;
        case 0x38bee4u: goto label_38bee4;
        case 0x38bee8u: goto label_38bee8;
        case 0x38beecu: goto label_38beec;
        case 0x38bef0u: goto label_38bef0;
        case 0x38bef4u: goto label_38bef4;
        case 0x38bef8u: goto label_38bef8;
        case 0x38befcu: goto label_38befc;
        case 0x38bf00u: goto label_38bf00;
        case 0x38bf04u: goto label_38bf04;
        case 0x38bf08u: goto label_38bf08;
        case 0x38bf0cu: goto label_38bf0c;
        case 0x38bf10u: goto label_38bf10;
        case 0x38bf14u: goto label_38bf14;
        case 0x38bf18u: goto label_38bf18;
        case 0x38bf1cu: goto label_38bf1c;
        case 0x38bf20u: goto label_38bf20;
        case 0x38bf24u: goto label_38bf24;
        case 0x38bf28u: goto label_38bf28;
        case 0x38bf2cu: goto label_38bf2c;
        case 0x38bf30u: goto label_38bf30;
        case 0x38bf34u: goto label_38bf34;
        case 0x38bf38u: goto label_38bf38;
        case 0x38bf3cu: goto label_38bf3c;
        case 0x38bf40u: goto label_38bf40;
        case 0x38bf44u: goto label_38bf44;
        case 0x38bf48u: goto label_38bf48;
        case 0x38bf4cu: goto label_38bf4c;
        case 0x38bf50u: goto label_38bf50;
        case 0x38bf54u: goto label_38bf54;
        case 0x38bf58u: goto label_38bf58;
        case 0x38bf5cu: goto label_38bf5c;
        case 0x38bf60u: goto label_38bf60;
        case 0x38bf64u: goto label_38bf64;
        case 0x38bf68u: goto label_38bf68;
        case 0x38bf6cu: goto label_38bf6c;
        case 0x38bf70u: goto label_38bf70;
        case 0x38bf74u: goto label_38bf74;
        case 0x38bf78u: goto label_38bf78;
        case 0x38bf7cu: goto label_38bf7c;
        case 0x38bf80u: goto label_38bf80;
        case 0x38bf84u: goto label_38bf84;
        case 0x38bf88u: goto label_38bf88;
        case 0x38bf8cu: goto label_38bf8c;
        case 0x38bf90u: goto label_38bf90;
        case 0x38bf94u: goto label_38bf94;
        case 0x38bf98u: goto label_38bf98;
        case 0x38bf9cu: goto label_38bf9c;
        case 0x38bfa0u: goto label_38bfa0;
        case 0x38bfa4u: goto label_38bfa4;
        case 0x38bfa8u: goto label_38bfa8;
        case 0x38bfacu: goto label_38bfac;
        case 0x38bfb0u: goto label_38bfb0;
        case 0x38bfb4u: goto label_38bfb4;
        case 0x38bfb8u: goto label_38bfb8;
        case 0x38bfbcu: goto label_38bfbc;
        case 0x38bfc0u: goto label_38bfc0;
        case 0x38bfc4u: goto label_38bfc4;
        case 0x38bfc8u: goto label_38bfc8;
        case 0x38bfccu: goto label_38bfcc;
        case 0x38bfd0u: goto label_38bfd0;
        case 0x38bfd4u: goto label_38bfd4;
        case 0x38bfd8u: goto label_38bfd8;
        case 0x38bfdcu: goto label_38bfdc;
        case 0x38bfe0u: goto label_38bfe0;
        case 0x38bfe4u: goto label_38bfe4;
        case 0x38bfe8u: goto label_38bfe8;
        case 0x38bfecu: goto label_38bfec;
        case 0x38bff0u: goto label_38bff0;
        case 0x38bff4u: goto label_38bff4;
        case 0x38bff8u: goto label_38bff8;
        case 0x38bffcu: goto label_38bffc;
        case 0x38c000u: goto label_38c000;
        case 0x38c004u: goto label_38c004;
        case 0x38c008u: goto label_38c008;
        case 0x38c00cu: goto label_38c00c;
        case 0x38c010u: goto label_38c010;
        case 0x38c014u: goto label_38c014;
        case 0x38c018u: goto label_38c018;
        case 0x38c01cu: goto label_38c01c;
        case 0x38c020u: goto label_38c020;
        case 0x38c024u: goto label_38c024;
        case 0x38c028u: goto label_38c028;
        case 0x38c02cu: goto label_38c02c;
        case 0x38c030u: goto label_38c030;
        case 0x38c034u: goto label_38c034;
        case 0x38c038u: goto label_38c038;
        case 0x38c03cu: goto label_38c03c;
        case 0x38c040u: goto label_38c040;
        case 0x38c044u: goto label_38c044;
        case 0x38c048u: goto label_38c048;
        case 0x38c04cu: goto label_38c04c;
        case 0x38c050u: goto label_38c050;
        case 0x38c054u: goto label_38c054;
        case 0x38c058u: goto label_38c058;
        case 0x38c05cu: goto label_38c05c;
        case 0x38c060u: goto label_38c060;
        case 0x38c064u: goto label_38c064;
        case 0x38c068u: goto label_38c068;
        case 0x38c06cu: goto label_38c06c;
        case 0x38c070u: goto label_38c070;
        case 0x38c074u: goto label_38c074;
        case 0x38c078u: goto label_38c078;
        case 0x38c07cu: goto label_38c07c;
        case 0x38c080u: goto label_38c080;
        case 0x38c084u: goto label_38c084;
        case 0x38c088u: goto label_38c088;
        case 0x38c08cu: goto label_38c08c;
        case 0x38c090u: goto label_38c090;
        case 0x38c094u: goto label_38c094;
        case 0x38c098u: goto label_38c098;
        case 0x38c09cu: goto label_38c09c;
        case 0x38c0a0u: goto label_38c0a0;
        case 0x38c0a4u: goto label_38c0a4;
        case 0x38c0a8u: goto label_38c0a8;
        case 0x38c0acu: goto label_38c0ac;
        case 0x38c0b0u: goto label_38c0b0;
        case 0x38c0b4u: goto label_38c0b4;
        case 0x38c0b8u: goto label_38c0b8;
        case 0x38c0bcu: goto label_38c0bc;
        case 0x38c0c0u: goto label_38c0c0;
        case 0x38c0c4u: goto label_38c0c4;
        case 0x38c0c8u: goto label_38c0c8;
        case 0x38c0ccu: goto label_38c0cc;
        case 0x38c0d0u: goto label_38c0d0;
        case 0x38c0d4u: goto label_38c0d4;
        case 0x38c0d8u: goto label_38c0d8;
        case 0x38c0dcu: goto label_38c0dc;
        case 0x38c0e0u: goto label_38c0e0;
        case 0x38c0e4u: goto label_38c0e4;
        case 0x38c0e8u: goto label_38c0e8;
        case 0x38c0ecu: goto label_38c0ec;
        case 0x38c0f0u: goto label_38c0f0;
        case 0x38c0f4u: goto label_38c0f4;
        case 0x38c0f8u: goto label_38c0f8;
        case 0x38c0fcu: goto label_38c0fc;
        case 0x38c100u: goto label_38c100;
        case 0x38c104u: goto label_38c104;
        case 0x38c108u: goto label_38c108;
        case 0x38c10cu: goto label_38c10c;
        case 0x38c110u: goto label_38c110;
        case 0x38c114u: goto label_38c114;
        case 0x38c118u: goto label_38c118;
        case 0x38c11cu: goto label_38c11c;
        case 0x38c120u: goto label_38c120;
        case 0x38c124u: goto label_38c124;
        case 0x38c128u: goto label_38c128;
        case 0x38c12cu: goto label_38c12c;
        case 0x38c130u: goto label_38c130;
        case 0x38c134u: goto label_38c134;
        case 0x38c138u: goto label_38c138;
        case 0x38c13cu: goto label_38c13c;
        case 0x38c140u: goto label_38c140;
        case 0x38c144u: goto label_38c144;
        case 0x38c148u: goto label_38c148;
        case 0x38c14cu: goto label_38c14c;
        case 0x38c150u: goto label_38c150;
        case 0x38c154u: goto label_38c154;
        case 0x38c158u: goto label_38c158;
        case 0x38c15cu: goto label_38c15c;
        case 0x38c160u: goto label_38c160;
        case 0x38c164u: goto label_38c164;
        case 0x38c168u: goto label_38c168;
        case 0x38c16cu: goto label_38c16c;
        case 0x38c170u: goto label_38c170;
        case 0x38c174u: goto label_38c174;
        case 0x38c178u: goto label_38c178;
        case 0x38c17cu: goto label_38c17c;
        case 0x38c180u: goto label_38c180;
        case 0x38c184u: goto label_38c184;
        case 0x38c188u: goto label_38c188;
        case 0x38c18cu: goto label_38c18c;
        case 0x38c190u: goto label_38c190;
        case 0x38c194u: goto label_38c194;
        case 0x38c198u: goto label_38c198;
        case 0x38c19cu: goto label_38c19c;
        case 0x38c1a0u: goto label_38c1a0;
        case 0x38c1a4u: goto label_38c1a4;
        case 0x38c1a8u: goto label_38c1a8;
        case 0x38c1acu: goto label_38c1ac;
        case 0x38c1b0u: goto label_38c1b0;
        case 0x38c1b4u: goto label_38c1b4;
        case 0x38c1b8u: goto label_38c1b8;
        case 0x38c1bcu: goto label_38c1bc;
        case 0x38c1c0u: goto label_38c1c0;
        case 0x38c1c4u: goto label_38c1c4;
        case 0x38c1c8u: goto label_38c1c8;
        case 0x38c1ccu: goto label_38c1cc;
        case 0x38c1d0u: goto label_38c1d0;
        case 0x38c1d4u: goto label_38c1d4;
        case 0x38c1d8u: goto label_38c1d8;
        case 0x38c1dcu: goto label_38c1dc;
        case 0x38c1e0u: goto label_38c1e0;
        case 0x38c1e4u: goto label_38c1e4;
        case 0x38c1e8u: goto label_38c1e8;
        case 0x38c1ecu: goto label_38c1ec;
        case 0x38c1f0u: goto label_38c1f0;
        case 0x38c1f4u: goto label_38c1f4;
        case 0x38c1f8u: goto label_38c1f8;
        case 0x38c1fcu: goto label_38c1fc;
        case 0x38c200u: goto label_38c200;
        case 0x38c204u: goto label_38c204;
        case 0x38c208u: goto label_38c208;
        case 0x38c20cu: goto label_38c20c;
        case 0x38c210u: goto label_38c210;
        case 0x38c214u: goto label_38c214;
        case 0x38c218u: goto label_38c218;
        case 0x38c21cu: goto label_38c21c;
        case 0x38c220u: goto label_38c220;
        case 0x38c224u: goto label_38c224;
        case 0x38c228u: goto label_38c228;
        case 0x38c22cu: goto label_38c22c;
        case 0x38c230u: goto label_38c230;
        case 0x38c234u: goto label_38c234;
        case 0x38c238u: goto label_38c238;
        case 0x38c23cu: goto label_38c23c;
        case 0x38c240u: goto label_38c240;
        case 0x38c244u: goto label_38c244;
        case 0x38c248u: goto label_38c248;
        case 0x38c24cu: goto label_38c24c;
        case 0x38c250u: goto label_38c250;
        case 0x38c254u: goto label_38c254;
        case 0x38c258u: goto label_38c258;
        case 0x38c25cu: goto label_38c25c;
        case 0x38c260u: goto label_38c260;
        case 0x38c264u: goto label_38c264;
        case 0x38c268u: goto label_38c268;
        case 0x38c26cu: goto label_38c26c;
        case 0x38c270u: goto label_38c270;
        case 0x38c274u: goto label_38c274;
        case 0x38c278u: goto label_38c278;
        case 0x38c27cu: goto label_38c27c;
        case 0x38c280u: goto label_38c280;
        case 0x38c284u: goto label_38c284;
        case 0x38c288u: goto label_38c288;
        case 0x38c28cu: goto label_38c28c;
        case 0x38c290u: goto label_38c290;
        case 0x38c294u: goto label_38c294;
        case 0x38c298u: goto label_38c298;
        case 0x38c29cu: goto label_38c29c;
        case 0x38c2a0u: goto label_38c2a0;
        case 0x38c2a4u: goto label_38c2a4;
        case 0x38c2a8u: goto label_38c2a8;
        case 0x38c2acu: goto label_38c2ac;
        case 0x38c2b0u: goto label_38c2b0;
        case 0x38c2b4u: goto label_38c2b4;
        case 0x38c2b8u: goto label_38c2b8;
        case 0x38c2bcu: goto label_38c2bc;
        case 0x38c2c0u: goto label_38c2c0;
        case 0x38c2c4u: goto label_38c2c4;
        case 0x38c2c8u: goto label_38c2c8;
        case 0x38c2ccu: goto label_38c2cc;
        case 0x38c2d0u: goto label_38c2d0;
        case 0x38c2d4u: goto label_38c2d4;
        case 0x38c2d8u: goto label_38c2d8;
        case 0x38c2dcu: goto label_38c2dc;
        case 0x38c2e0u: goto label_38c2e0;
        case 0x38c2e4u: goto label_38c2e4;
        case 0x38c2e8u: goto label_38c2e8;
        case 0x38c2ecu: goto label_38c2ec;
        case 0x38c2f0u: goto label_38c2f0;
        case 0x38c2f4u: goto label_38c2f4;
        case 0x38c2f8u: goto label_38c2f8;
        case 0x38c2fcu: goto label_38c2fc;
        case 0x38c300u: goto label_38c300;
        case 0x38c304u: goto label_38c304;
        case 0x38c308u: goto label_38c308;
        case 0x38c30cu: goto label_38c30c;
        case 0x38c310u: goto label_38c310;
        case 0x38c314u: goto label_38c314;
        case 0x38c318u: goto label_38c318;
        case 0x38c31cu: goto label_38c31c;
        case 0x38c320u: goto label_38c320;
        case 0x38c324u: goto label_38c324;
        case 0x38c328u: goto label_38c328;
        case 0x38c32cu: goto label_38c32c;
        case 0x38c330u: goto label_38c330;
        case 0x38c334u: goto label_38c334;
        case 0x38c338u: goto label_38c338;
        case 0x38c33cu: goto label_38c33c;
        case 0x38c340u: goto label_38c340;
        case 0x38c344u: goto label_38c344;
        case 0x38c348u: goto label_38c348;
        case 0x38c34cu: goto label_38c34c;
        case 0x38c350u: goto label_38c350;
        case 0x38c354u: goto label_38c354;
        case 0x38c358u: goto label_38c358;
        case 0x38c35cu: goto label_38c35c;
        case 0x38c360u: goto label_38c360;
        case 0x38c364u: goto label_38c364;
        case 0x38c368u: goto label_38c368;
        case 0x38c36cu: goto label_38c36c;
        case 0x38c370u: goto label_38c370;
        case 0x38c374u: goto label_38c374;
        case 0x38c378u: goto label_38c378;
        case 0x38c37cu: goto label_38c37c;
        case 0x38c380u: goto label_38c380;
        case 0x38c384u: goto label_38c384;
        case 0x38c388u: goto label_38c388;
        case 0x38c38cu: goto label_38c38c;
        case 0x38c390u: goto label_38c390;
        case 0x38c394u: goto label_38c394;
        case 0x38c398u: goto label_38c398;
        case 0x38c39cu: goto label_38c39c;
        case 0x38c3a0u: goto label_38c3a0;
        case 0x38c3a4u: goto label_38c3a4;
        case 0x38c3a8u: goto label_38c3a8;
        case 0x38c3acu: goto label_38c3ac;
        case 0x38c3b0u: goto label_38c3b0;
        case 0x38c3b4u: goto label_38c3b4;
        case 0x38c3b8u: goto label_38c3b8;
        case 0x38c3bcu: goto label_38c3bc;
        case 0x38c3c0u: goto label_38c3c0;
        case 0x38c3c4u: goto label_38c3c4;
        case 0x38c3c8u: goto label_38c3c8;
        case 0x38c3ccu: goto label_38c3cc;
        case 0x38c3d0u: goto label_38c3d0;
        case 0x38c3d4u: goto label_38c3d4;
        case 0x38c3d8u: goto label_38c3d8;
        case 0x38c3dcu: goto label_38c3dc;
        case 0x38c3e0u: goto label_38c3e0;
        case 0x38c3e4u: goto label_38c3e4;
        case 0x38c3e8u: goto label_38c3e8;
        case 0x38c3ecu: goto label_38c3ec;
        case 0x38c3f0u: goto label_38c3f0;
        case 0x38c3f4u: goto label_38c3f4;
        case 0x38c3f8u: goto label_38c3f8;
        case 0x38c3fcu: goto label_38c3fc;
        case 0x38c400u: goto label_38c400;
        case 0x38c404u: goto label_38c404;
        case 0x38c408u: goto label_38c408;
        case 0x38c40cu: goto label_38c40c;
        case 0x38c410u: goto label_38c410;
        case 0x38c414u: goto label_38c414;
        case 0x38c418u: goto label_38c418;
        case 0x38c41cu: goto label_38c41c;
        case 0x38c420u: goto label_38c420;
        case 0x38c424u: goto label_38c424;
        case 0x38c428u: goto label_38c428;
        case 0x38c42cu: goto label_38c42c;
        case 0x38c430u: goto label_38c430;
        case 0x38c434u: goto label_38c434;
        case 0x38c438u: goto label_38c438;
        case 0x38c43cu: goto label_38c43c;
        case 0x38c440u: goto label_38c440;
        case 0x38c444u: goto label_38c444;
        case 0x38c448u: goto label_38c448;
        case 0x38c44cu: goto label_38c44c;
        case 0x38c450u: goto label_38c450;
        case 0x38c454u: goto label_38c454;
        case 0x38c458u: goto label_38c458;
        case 0x38c45cu: goto label_38c45c;
        case 0x38c460u: goto label_38c460;
        case 0x38c464u: goto label_38c464;
        case 0x38c468u: goto label_38c468;
        case 0x38c46cu: goto label_38c46c;
        case 0x38c470u: goto label_38c470;
        case 0x38c474u: goto label_38c474;
        case 0x38c478u: goto label_38c478;
        case 0x38c47cu: goto label_38c47c;
        case 0x38c480u: goto label_38c480;
        case 0x38c484u: goto label_38c484;
        case 0x38c488u: goto label_38c488;
        case 0x38c48cu: goto label_38c48c;
        case 0x38c490u: goto label_38c490;
        case 0x38c494u: goto label_38c494;
        case 0x38c498u: goto label_38c498;
        case 0x38c49cu: goto label_38c49c;
        case 0x38c4a0u: goto label_38c4a0;
        case 0x38c4a4u: goto label_38c4a4;
        case 0x38c4a8u: goto label_38c4a8;
        case 0x38c4acu: goto label_38c4ac;
        case 0x38c4b0u: goto label_38c4b0;
        case 0x38c4b4u: goto label_38c4b4;
        case 0x38c4b8u: goto label_38c4b8;
        case 0x38c4bcu: goto label_38c4bc;
        case 0x38c4c0u: goto label_38c4c0;
        case 0x38c4c4u: goto label_38c4c4;
        case 0x38c4c8u: goto label_38c4c8;
        case 0x38c4ccu: goto label_38c4cc;
        case 0x38c4d0u: goto label_38c4d0;
        case 0x38c4d4u: goto label_38c4d4;
        case 0x38c4d8u: goto label_38c4d8;
        case 0x38c4dcu: goto label_38c4dc;
        case 0x38c4e0u: goto label_38c4e0;
        case 0x38c4e4u: goto label_38c4e4;
        case 0x38c4e8u: goto label_38c4e8;
        case 0x38c4ecu: goto label_38c4ec;
        case 0x38c4f0u: goto label_38c4f0;
        case 0x38c4f4u: goto label_38c4f4;
        case 0x38c4f8u: goto label_38c4f8;
        case 0x38c4fcu: goto label_38c4fc;
        case 0x38c500u: goto label_38c500;
        case 0x38c504u: goto label_38c504;
        case 0x38c508u: goto label_38c508;
        case 0x38c50cu: goto label_38c50c;
        case 0x38c510u: goto label_38c510;
        case 0x38c514u: goto label_38c514;
        case 0x38c518u: goto label_38c518;
        case 0x38c51cu: goto label_38c51c;
        case 0x38c520u: goto label_38c520;
        case 0x38c524u: goto label_38c524;
        case 0x38c528u: goto label_38c528;
        case 0x38c52cu: goto label_38c52c;
        case 0x38c530u: goto label_38c530;
        case 0x38c534u: goto label_38c534;
        case 0x38c538u: goto label_38c538;
        case 0x38c53cu: goto label_38c53c;
        case 0x38c540u: goto label_38c540;
        case 0x38c544u: goto label_38c544;
        case 0x38c548u: goto label_38c548;
        case 0x38c54cu: goto label_38c54c;
        case 0x38c550u: goto label_38c550;
        case 0x38c554u: goto label_38c554;
        case 0x38c558u: goto label_38c558;
        case 0x38c55cu: goto label_38c55c;
        case 0x38c560u: goto label_38c560;
        case 0x38c564u: goto label_38c564;
        case 0x38c568u: goto label_38c568;
        case 0x38c56cu: goto label_38c56c;
        case 0x38c570u: goto label_38c570;
        case 0x38c574u: goto label_38c574;
        case 0x38c578u: goto label_38c578;
        case 0x38c57cu: goto label_38c57c;
        case 0x38c580u: goto label_38c580;
        case 0x38c584u: goto label_38c584;
        case 0x38c588u: goto label_38c588;
        case 0x38c58cu: goto label_38c58c;
        case 0x38c590u: goto label_38c590;
        case 0x38c594u: goto label_38c594;
        case 0x38c598u: goto label_38c598;
        case 0x38c59cu: goto label_38c59c;
        case 0x38c5a0u: goto label_38c5a0;
        case 0x38c5a4u: goto label_38c5a4;
        case 0x38c5a8u: goto label_38c5a8;
        case 0x38c5acu: goto label_38c5ac;
        case 0x38c5b0u: goto label_38c5b0;
        case 0x38c5b4u: goto label_38c5b4;
        case 0x38c5b8u: goto label_38c5b8;
        case 0x38c5bcu: goto label_38c5bc;
        case 0x38c5c0u: goto label_38c5c0;
        case 0x38c5c4u: goto label_38c5c4;
        case 0x38c5c8u: goto label_38c5c8;
        case 0x38c5ccu: goto label_38c5cc;
        case 0x38c5d0u: goto label_38c5d0;
        case 0x38c5d4u: goto label_38c5d4;
        case 0x38c5d8u: goto label_38c5d8;
        case 0x38c5dcu: goto label_38c5dc;
        case 0x38c5e0u: goto label_38c5e0;
        case 0x38c5e4u: goto label_38c5e4;
        case 0x38c5e8u: goto label_38c5e8;
        case 0x38c5ecu: goto label_38c5ec;
        case 0x38c5f0u: goto label_38c5f0;
        case 0x38c5f4u: goto label_38c5f4;
        case 0x38c5f8u: goto label_38c5f8;
        case 0x38c5fcu: goto label_38c5fc;
        case 0x38c600u: goto label_38c600;
        case 0x38c604u: goto label_38c604;
        case 0x38c608u: goto label_38c608;
        case 0x38c60cu: goto label_38c60c;
        case 0x38c610u: goto label_38c610;
        case 0x38c614u: goto label_38c614;
        case 0x38c618u: goto label_38c618;
        case 0x38c61cu: goto label_38c61c;
        case 0x38c620u: goto label_38c620;
        case 0x38c624u: goto label_38c624;
        case 0x38c628u: goto label_38c628;
        case 0x38c62cu: goto label_38c62c;
        case 0x38c630u: goto label_38c630;
        case 0x38c634u: goto label_38c634;
        case 0x38c638u: goto label_38c638;
        case 0x38c63cu: goto label_38c63c;
        case 0x38c640u: goto label_38c640;
        case 0x38c644u: goto label_38c644;
        case 0x38c648u: goto label_38c648;
        case 0x38c64cu: goto label_38c64c;
        case 0x38c650u: goto label_38c650;
        case 0x38c654u: goto label_38c654;
        case 0x38c658u: goto label_38c658;
        case 0x38c65cu: goto label_38c65c;
        case 0x38c660u: goto label_38c660;
        case 0x38c664u: goto label_38c664;
        case 0x38c668u: goto label_38c668;
        case 0x38c66cu: goto label_38c66c;
        case 0x38c670u: goto label_38c670;
        case 0x38c674u: goto label_38c674;
        case 0x38c678u: goto label_38c678;
        case 0x38c67cu: goto label_38c67c;
        case 0x38c680u: goto label_38c680;
        case 0x38c684u: goto label_38c684;
        case 0x38c688u: goto label_38c688;
        case 0x38c68cu: goto label_38c68c;
        case 0x38c690u: goto label_38c690;
        case 0x38c694u: goto label_38c694;
        case 0x38c698u: goto label_38c698;
        case 0x38c69cu: goto label_38c69c;
        case 0x38c6a0u: goto label_38c6a0;
        case 0x38c6a4u: goto label_38c6a4;
        case 0x38c6a8u: goto label_38c6a8;
        case 0x38c6acu: goto label_38c6ac;
        case 0x38c6b0u: goto label_38c6b0;
        case 0x38c6b4u: goto label_38c6b4;
        case 0x38c6b8u: goto label_38c6b8;
        case 0x38c6bcu: goto label_38c6bc;
        case 0x38c6c0u: goto label_38c6c0;
        case 0x38c6c4u: goto label_38c6c4;
        case 0x38c6c8u: goto label_38c6c8;
        case 0x38c6ccu: goto label_38c6cc;
        case 0x38c6d0u: goto label_38c6d0;
        case 0x38c6d4u: goto label_38c6d4;
        case 0x38c6d8u: goto label_38c6d8;
        case 0x38c6dcu: goto label_38c6dc;
        case 0x38c6e0u: goto label_38c6e0;
        case 0x38c6e4u: goto label_38c6e4;
        case 0x38c6e8u: goto label_38c6e8;
        case 0x38c6ecu: goto label_38c6ec;
        case 0x38c6f0u: goto label_38c6f0;
        case 0x38c6f4u: goto label_38c6f4;
        case 0x38c6f8u: goto label_38c6f8;
        case 0x38c6fcu: goto label_38c6fc;
        case 0x38c700u: goto label_38c700;
        case 0x38c704u: goto label_38c704;
        case 0x38c708u: goto label_38c708;
        case 0x38c70cu: goto label_38c70c;
        case 0x38c710u: goto label_38c710;
        case 0x38c714u: goto label_38c714;
        case 0x38c718u: goto label_38c718;
        case 0x38c71cu: goto label_38c71c;
        case 0x38c720u: goto label_38c720;
        case 0x38c724u: goto label_38c724;
        case 0x38c728u: goto label_38c728;
        case 0x38c72cu: goto label_38c72c;
        case 0x38c730u: goto label_38c730;
        case 0x38c734u: goto label_38c734;
        case 0x38c738u: goto label_38c738;
        case 0x38c73cu: goto label_38c73c;
        case 0x38c740u: goto label_38c740;
        case 0x38c744u: goto label_38c744;
        case 0x38c748u: goto label_38c748;
        case 0x38c74cu: goto label_38c74c;
        case 0x38c750u: goto label_38c750;
        case 0x38c754u: goto label_38c754;
        case 0x38c758u: goto label_38c758;
        case 0x38c75cu: goto label_38c75c;
        case 0x38c760u: goto label_38c760;
        case 0x38c764u: goto label_38c764;
        case 0x38c768u: goto label_38c768;
        case 0x38c76cu: goto label_38c76c;
        case 0x38c770u: goto label_38c770;
        case 0x38c774u: goto label_38c774;
        case 0x38c778u: goto label_38c778;
        case 0x38c77cu: goto label_38c77c;
        case 0x38c780u: goto label_38c780;
        case 0x38c784u: goto label_38c784;
        case 0x38c788u: goto label_38c788;
        case 0x38c78cu: goto label_38c78c;
        case 0x38c790u: goto label_38c790;
        case 0x38c794u: goto label_38c794;
        case 0x38c798u: goto label_38c798;
        case 0x38c79cu: goto label_38c79c;
        case 0x38c7a0u: goto label_38c7a0;
        case 0x38c7a4u: goto label_38c7a4;
        case 0x38c7a8u: goto label_38c7a8;
        case 0x38c7acu: goto label_38c7ac;
        case 0x38c7b0u: goto label_38c7b0;
        case 0x38c7b4u: goto label_38c7b4;
        case 0x38c7b8u: goto label_38c7b8;
        case 0x38c7bcu: goto label_38c7bc;
        case 0x38c7c0u: goto label_38c7c0;
        case 0x38c7c4u: goto label_38c7c4;
        case 0x38c7c8u: goto label_38c7c8;
        case 0x38c7ccu: goto label_38c7cc;
        case 0x38c7d0u: goto label_38c7d0;
        case 0x38c7d4u: goto label_38c7d4;
        default: break;
    }

    ctx->pc = 0x38bea0u;

label_38bea0:
    // 0x38bea0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x38bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_38bea4:
    // 0x38bea4: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x38bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_38bea8:
    // 0x38bea8: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x38bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_38beac:
    // 0x38beac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38beacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38beb0:
    // 0x38beb0: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x38beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_38beb4:
    // 0x38beb4: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x38beb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_38beb8:
    // 0x38beb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38beb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38bebc:
    // 0x38bebc: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x38bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_38bec0:
    // 0x38bec0: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x38bec0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_38bec4:
    // 0x38bec4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x38bec4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38bec8:
    // 0x38bec8: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x38bec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_38becc:
    // 0x38becc: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x38beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_38bed0:
    // 0x38bed0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x38bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_38bed4:
    // 0x38bed4: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x38bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_38bed8:
    // 0x38bed8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x38bed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_38bedc:
    // 0x38bedc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x38bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_38bee0:
    // 0x38bee0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x38bee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38bee4:
    // 0x38bee4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x38bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_38bee8:
    // 0x38bee8: 0xc0e57ce  jal         func_395F38
label_38beec:
    if (ctx->pc == 0x38BEECu) {
        ctx->pc = 0x38BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEE8u;
        // 0x38beec: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BEF0u;
        goto label_38bef0;
    }
    ctx->pc = 0x38BEE8u;
    SET_GPR_U32(ctx, 31, 0x38BEF0u);
    ctx->pc = 0x38BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BEE8u;
    // 0x38beec: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38BEE8u, 0x38BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BEF0u;
label_38bef0:
    // 0x38bef0: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x38bef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_38bef4:
    // 0x38bef4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x38bef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_38bef8:
    // 0x38bef8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38bef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38befc:
    // 0x38befc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38bf00:
    // 0x38bf00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x38bf00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bf04:
    // 0x38bf04: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x38bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_38bf08:
    // 0x38bf08: 0xc08a61a  jal         func_229868
label_38bf0c:
    if (ctx->pc == 0x38BF0Cu) {
        ctx->pc = 0x38BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF08u;
        // 0x38bf0c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF10u;
        goto label_38bf10;
    }
    ctx->pc = 0x38BF08u;
    SET_GPR_U32(ctx, 31, 0x38BF10u);
    ctx->pc = 0x38BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF08u;
    // 0x38bf0c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x38BF08u, 0x38BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF10u;
label_38bf10:
    // 0x38bf10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38bf10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bf14:
    // 0x38bf14: 0x7bc20060  lq          $v0, 0x60($fp)
    ctx->pc = 0x38bf14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 96)));
label_38bf18:
    // 0x38bf18: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_38bf1c:
    if (ctx->pc == 0x38BF1Cu) {
        ctx->pc = 0x38BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF18u;
        // 0x38bf1c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF20u;
        goto label_38bf20;
    }
    ctx->pc = 0x38BF18u;
    {
        const bool branch_taken_0x38bf18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF18u;
        // 0x38bf1c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf18) {
            ctx->pc = 0x38BF50u;
            goto label_38bf50;
        }
    }
    ctx->pc = 0x38BF20u;
label_38bf20:
    // 0x38bf20: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x38bf20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38bf24:
    // 0x38bf24: 0xc08a0fa  jal         func_2283E8
label_38bf28:
    if (ctx->pc == 0x38BF28u) {
        ctx->pc = 0x38BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF24u;
        // 0x38bf28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF2Cu;
        goto label_38bf2c;
    }
    ctx->pc = 0x38BF24u;
    SET_GPR_U32(ctx, 31, 0x38BF2Cu);
    ctx->pc = 0x38BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF24u;
    // 0x38bf28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283E8u, 0x38BF24u, 0x38BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF2Cu;
label_38bf2c:
    // 0x38bf2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38bf30:
    if (ctx->pc == 0x38BF30u) {
        ctx->pc = 0x38BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF2Cu;
        // 0x38bf30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF34u;
        goto label_38bf34;
    }
    ctx->pc = 0x38BF2Cu;
    {
        const bool branch_taken_0x38bf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF2Cu;
        // 0x38bf30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf2c) {
            ctx->pc = 0x38BF40u;
            goto label_38bf40;
        }
    }
    ctx->pc = 0x38BF34u;
label_38bf34:
    // 0x38bf34: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x38bf34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38bf38:
    // 0x38bf38: 0x10000011  b           . + 4 + (0x11 << 2)
label_38bf3c:
    if (ctx->pc == 0x38BF3Cu) {
        ctx->pc = 0x38BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF38u;
        // 0x38bf3c: 0xc4542b74  lwc1        $f20, 0x2B74($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF40u;
        goto label_38bf40;
    }
    ctx->pc = 0x38BF38u;
    {
        const bool branch_taken_0x38bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF38u;
        // 0x38bf3c: 0xc4542b74  lwc1        $f20, 0x2B74($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf38) {
            ctx->pc = 0x38BF80u;
            goto label_38bf80;
        }
    }
    ctx->pc = 0x38BF40u;
label_38bf40:
    // 0x38bf40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38bf44:
    // 0x38bf44: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x38bf44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38bf48:
    // 0x38bf48: 0x1000000d  b           . + 4 + (0xD << 2)
label_38bf4c:
    if (ctx->pc == 0x38BF4Cu) {
        ctx->pc = 0x38BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF48u;
        // 0x38bf4c: 0xc4542b78  lwc1        $f20, 0x2B78($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF50u;
        goto label_38bf50;
    }
    ctx->pc = 0x38BF48u;
    {
        const bool branch_taken_0x38bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF48u;
        // 0x38bf4c: 0xc4542b78  lwc1        $f20, 0x2B78($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf48) {
            ctx->pc = 0x38BF80u;
            goto label_38bf80;
        }
    }
    ctx->pc = 0x38BF50u;
label_38bf50:
    // 0x38bf50: 0x12e00213  beqz        $s7, . + 4 + (0x213 << 2)
label_38bf54:
    if (ctx->pc == 0x38BF54u) {
        ctx->pc = 0x38BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF50u;
        // 0x38bf54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF58u;
        goto label_38bf58;
    }
    ctx->pc = 0x38BF50u;
    {
        const bool branch_taken_0x38bf50 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF50u;
        // 0x38bf54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf50) {
            ctx->pc = 0x38C7A0u;
            goto label_38c7a0;
        }
    }
    ctx->pc = 0x38BF58u;
label_38bf58:
    // 0x38bf58: 0xc0e5476  jal         func_3951D8
label_38bf5c:
    if (ctx->pc == 0x38BF5Cu) {
        ctx->pc = 0x38BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF58u;
        // 0x38bf5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF60u;
        goto label_38bf60;
    }
    ctx->pc = 0x38BF58u;
    SET_GPR_U32(ctx, 31, 0x38BF60u);
    ctx->pc = 0x38BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF58u;
    // 0x38bf5c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x38BF58u, 0x38BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF60u;
label_38bf60:
    // 0x38bf60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x38bf60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bf64:
    // 0x38bf64: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_38bf68:
    if (ctx->pc == 0x38BF68u) {
        ctx->pc = 0x38BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF64u;
        // 0x38bf68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF6Cu;
        goto label_38bf6c;
    }
    ctx->pc = 0x38BF64u;
    {
        const bool branch_taken_0x38bf64 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF64u;
        // 0x38bf68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf64) {
            ctx->pc = 0x38BF78u;
            goto label_38bf78;
        }
    }
    ctx->pc = 0x38BF6Cu;
label_38bf6c:
    // 0x38bf6c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x38bf6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38bf70:
    // 0x38bf70: 0x10000003  b           . + 4 + (0x3 << 2)
label_38bf74:
    if (ctx->pc == 0x38BF74u) {
        ctx->pc = 0x38BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF70u;
        // 0x38bf74: 0xc4542b7c  lwc1        $f20, 0x2B7C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF78u;
        goto label_38bf78;
    }
    ctx->pc = 0x38BF70u;
    {
        const bool branch_taken_0x38bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF70u;
        // 0x38bf74: 0xc4542b7c  lwc1        $f20, 0x2B7C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf70) {
            ctx->pc = 0x38BF80u;
            goto label_38bf80;
        }
    }
    ctx->pc = 0x38BF78u;
label_38bf78:
    // 0x38bf78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x38bf78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38bf7c:
    // 0x38bf7c: 0x8ef4011c  lw          $s4, 0x11C($s7)
    ctx->pc = 0x38bf7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
label_38bf80:
    // 0x38bf80: 0x924212d5  lbu         $v0, 0x12D5($s2)
    ctx->pc = 0x38bf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4821)));
label_38bf84:
    // 0x38bf84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_38bf88:
    if (ctx->pc == 0x38BF88u) {
        ctx->pc = 0x38BF8Cu;
        goto label_38bf8c;
    }
    ctx->pc = 0x38BF84u;
    {
        const bool branch_taken_0x38bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38bf84) {
            ctx->pc = 0x38BF98u;
            goto label_38bf98;
        }
    }
    ctx->pc = 0x38BF8Cu;
label_38bf8c:
    // 0x38bf8c: 0x8e421200  lw          $v0, 0x1200($s2)
    ctx->pc = 0x38bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4608)));
label_38bf90:
    // 0x38bf90: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_38bf94:
    if (ctx->pc == 0x38BF94u) {
        ctx->pc = 0x38BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF90u;
        // 0x38bf94: 0x864312d8  lh          $v1, 0x12D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BF98u;
        goto label_38bf98;
    }
    ctx->pc = 0x38BF90u;
    {
        const bool branch_taken_0x38bf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bf90) {
            ctx->pc = 0x38BF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BF90u;
            // 0x38bf94: 0x864312d8  lh          $v1, 0x12D8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BFB8u;
            goto label_38bfb8;
        }
    }
    ctx->pc = 0x38BF98u;
label_38bf98:
    // 0x38bf98: 0xc0e2ed2  jal         func_38BB48
label_38bf9c:
    if (ctx->pc == 0x38BF9Cu) {
        ctx->pc = 0x38BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF98u;
        // 0x38bf9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BFA0u;
        goto label_38bfa0;
    }
    ctx->pc = 0x38BF98u;
    SET_GPR_U32(ctx, 31, 0x38BFA0u);
    ctx->pc = 0x38BF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF98u;
    // 0x38bf9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BB48u, 0x38BF98u, 0x38BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BFA0u;
label_38bfa0:
    // 0x38bfa0: 0x128001ff  beqz        $s4, . + 4 + (0x1FF << 2)
label_38bfa4:
    if (ctx->pc == 0x38BFA4u) {
        ctx->pc = 0x38BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFA0u;
        // 0x38bfa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BFA8u;
        goto label_38bfa8;
    }
    ctx->pc = 0x38BFA0u;
    {
        const bool branch_taken_0x38bfa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFA0u;
        // 0x38bfa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bfa0) {
            ctx->pc = 0x38C7A0u;
            goto label_38c7a0;
        }
    }
    ctx->pc = 0x38BFA8u;
label_38bfa8:
    // 0x38bfa8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_38bfac:
    // 0x38bfac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_38bfb0:
    // 0x38bfb0: 0x10000143  b           . + 4 + (0x143 << 2)
label_38bfb4:
    if (ctx->pc == 0x38BFB4u) {
        ctx->pc = 0x38BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFB0u;
        // 0x38bfb4: 0xae820568  sw          $v0, 0x568($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BFB8u;
        goto label_38bfb8;
    }
    ctx->pc = 0x38BFB0u;
    {
        const bool branch_taken_0x38bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFB0u;
        // 0x38bfb4: 0xae820568  sw          $v0, 0x568($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bfb0) {
            ctx->pc = 0x38C4C0u;
            goto label_38c4c0;
        }
    }
    ctx->pc = 0x38BFB8u;
label_38bfb8:
    // 0x38bfb8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x38bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38bfbc:
    // 0x38bfbc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_38bfc0:
    if (ctx->pc == 0x38BFC0u) {
        ctx->pc = 0x38BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFBCu;
        // 0x38bfc0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BFC4u;
        goto label_38bfc4;
    }
    ctx->pc = 0x38BFBCu;
    {
        const bool branch_taken_0x38bfbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFBCu;
        // 0x38bfc0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bfbc) {
            ctx->pc = 0x38BFECu;
            goto label_38bfec;
        }
    }
    ctx->pc = 0x38BFC4u;
label_38bfc4:
    // 0x38bfc4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_38bfc8:
    if (ctx->pc == 0x38BFC8u) {
        ctx->pc = 0x38BFCCu;
        goto label_38bfcc;
    }
    ctx->pc = 0x38BFC4u;
    {
        const bool branch_taken_0x38bfc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bfc4) {
            ctx->pc = 0x38BFECu;
            goto label_38bfec;
        }
    }
    ctx->pc = 0x38BFCCu;
label_38bfcc:
    // 0x38bfcc: 0xc087502  jal         func_21D408
label_38bfd0:
    if (ctx->pc == 0x38BFD0u) {
        ctx->pc = 0x38BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFCCu;
        // 0x38bfd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BFD4u;
        goto label_38bfd4;
    }
    ctx->pc = 0x38BFCCu;
    SET_GPR_U32(ctx, 31, 0x38BFD4u);
    ctx->pc = 0x38BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BFCCu;
    // 0x38bfd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x38BFCCu, 0x38BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BFD4u;
label_38bfd4:
    // 0x38bfd4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x38bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_38bfd8:
    // 0x38bfd8: 0x864412d8  lh          $a0, 0x12D8($s2)
    ctx->pc = 0x38bfd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4824)));
label_38bfdc:
    // 0x38bfdc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38bfe0:
    // 0x38bfe0: 0x144401ef  bne         $v0, $a0, . + 4 + (0x1EF << 2)
label_38bfe4:
    if (ctx->pc == 0x38BFE4u) {
        ctx->pc = 0x38BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFE0u;
        // 0x38bfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BFE8u;
        goto label_38bfe8;
    }
    ctx->pc = 0x38BFE0u;
    {
        const bool branch_taken_0x38bfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x38BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFE0u;
        // 0x38bfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bfe0) {
            ctx->pc = 0x38C7A0u;
            goto label_38c7a0;
        }
    }
    ctx->pc = 0x38BFE8u;
label_38bfe8:
    // 0x38bfe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x38bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38bfec:
    // 0x38bfec: 0xc0cd940  jal         func_336500
label_38bff0:
    if (ctx->pc == 0x38BFF0u) {
        ctx->pc = 0x38BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFECu;
        // 0x38bff0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BFF4u;
        goto label_38bff4;
    }
    ctx->pc = 0x38BFECu;
    SET_GPR_U32(ctx, 31, 0x38BFF4u);
    ctx->pc = 0x38BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BFECu;
    // 0x38bff0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38BFECu, 0x38BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BFF4u;
label_38bff4:
    // 0x38bff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38bff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38bff8:
    // 0x38bff8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x38bff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_38bffc:
    // 0x38bffc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x38bffcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c000:
    // 0x38c000: 0x0  nop
    ctx->pc = 0x38c000u;
    // NOP
label_38c004:
    // 0x38c004: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_38c008:
    if (ctx->pc == 0x38C008u) {
        ctx->pc = 0x38C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C004u;
        // 0x38c008: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C00Cu;
        goto label_38c00c;
    }
    ctx->pc = 0x38C004u;
    {
        const bool branch_taken_0x38c004 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C004u;
        // 0x38c008: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c004) {
            ctx->pc = 0x38C024u;
            goto label_38c024;
        }
    }
    ctx->pc = 0x38C00Cu;
label_38c00c:
    // 0x38c00c: 0x8e820568  lw          $v0, 0x568($s4)
    ctx->pc = 0x38c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1384)));
label_38c010:
    // 0x38c010: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_38c014:
    if (ctx->pc == 0x38C014u) {
        ctx->pc = 0x38C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C010u;
        // 0x38c014: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C018u;
        goto label_38c018;
    }
    ctx->pc = 0x38C010u;
    {
        const bool branch_taken_0x38c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C010u;
        // 0x38c014: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c010) {
            ctx->pc = 0x38C024u;
            goto label_38c024;
        }
    }
    ctx->pc = 0x38C018u;
label_38c018:
    // 0x38c018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c01c:
    // 0x38c01c: 0xc0e2c7e  jal         func_38B1F8
label_38c020:
    if (ctx->pc == 0x38C020u) {
        ctx->pc = 0x38C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C01Cu;
        // 0x38c020: 0x27c50090  addiu       $a1, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C024u;
        goto label_38c024;
    }
    ctx->pc = 0x38C01Cu;
    SET_GPR_U32(ctx, 31, 0x38C024u);
    ctx->pc = 0x38C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C01Cu;
    // 0x38c020: 0x27c50090  addiu       $a1, $fp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B1F8u, 0x38C01Cu, 0x38C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C024u;
label_38c024:
    // 0x38c024: 0x12e00063  beqz        $s7, . + 4 + (0x63 << 2)
label_38c028:
    if (ctx->pc == 0x38C028u) {
        ctx->pc = 0x38C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C024u;
        // 0x38c028: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C02Cu;
        goto label_38c02c;
    }
    ctx->pc = 0x38C024u;
    {
        const bool branch_taken_0x38c024 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C024u;
        // 0x38c028: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c024) {
            ctx->pc = 0x38C1B4u;
            goto label_38c1b4;
        }
    }
    ctx->pc = 0x38C02Cu;
label_38c02c:
    // 0x38c02c: 0x96e50112  lhu         $a1, 0x112($s7)
    ctx->pc = 0x38c02cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 274)));
label_38c030:
    // 0x38c030: 0xc0e44cc  jal         func_391330
label_38c034:
    if (ctx->pc == 0x38C034u) {
        ctx->pc = 0x38C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C030u;
        // 0x38c034: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C038u;
        goto label_38c038;
    }
    ctx->pc = 0x38C030u;
    SET_GPR_U32(ctx, 31, 0x38C038u);
    ctx->pc = 0x38C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C030u;
    // 0x38c034: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x38C030u, 0x38C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C038u;
label_38c038:
    // 0x38c038: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x38c038u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_38c03c:
    // 0x38c03c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38c040:
    // 0x38c040: 0x5462005d  bnel        $v1, $v0, . + 4 + (0x5D << 2)
label_38c044:
    if (ctx->pc == 0x38C044u) {
        ctx->pc = 0x38C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C040u;
        // 0x38c044: 0x8fc20044  lw          $v0, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C048u;
        goto label_38c048;
    }
    ctx->pc = 0x38C040u;
    {
        const bool branch_taken_0x38c040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38c040) {
            ctx->pc = 0x38C044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C040u;
            // 0x38c044: 0x8fc20044  lw          $v0, 0x44($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C1B8u;
            goto label_38c1b8;
        }
    }
    ctx->pc = 0x38C048u;
label_38c048:
    // 0x38c048: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38c048u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38c04c:
    // 0x38c04c: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x38c04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_38c050:
    // 0x38c050: 0xc0e8b48  jal         func_3A2D20
label_38c054:
    if (ctx->pc == 0x38C054u) {
        ctx->pc = 0x38C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C050u;
        // 0x38c054: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C058u;
        goto label_38c058;
    }
    ctx->pc = 0x38C050u;
    SET_GPR_U32(ctx, 31, 0x38C058u);
    ctx->pc = 0x38C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C050u;
    // 0x38c054: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38C050u, 0x38C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C058u;
label_38c058:
    // 0x38c058: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38c05c:
    // 0x38c05c: 0xc0e8b58  jal         func_3A2D60
label_38c060:
    if (ctx->pc == 0x38C060u) {
        ctx->pc = 0x38C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C05Cu;
        // 0x38c060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C064u;
        goto label_38c064;
    }
    ctx->pc = 0x38C05Cu;
    SET_GPR_U32(ctx, 31, 0x38C064u);
    ctx->pc = 0x38C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C05Cu;
    // 0x38c060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38C05Cu, 0x38C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C064u;
label_38c064:
    // 0x38c064: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38c068:
    // 0x38c068: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x38c068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_38c06c:
    // 0x38c06c: 0xc0e8b58  jal         func_3A2D60
label_38c070:
    if (ctx->pc == 0x38C070u) {
        ctx->pc = 0x38C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C06Cu;
        // 0x38c070: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C074u;
        goto label_38c074;
    }
    ctx->pc = 0x38C06Cu;
    SET_GPR_U32(ctx, 31, 0x38C074u);
    ctx->pc = 0x38C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C06Cu;
    // 0x38c070: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38C06Cu, 0x38C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C074u;
label_38c074:
    // 0x38c074: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38c078:
    // 0x38c078: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x38c078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_38c07c:
    // 0x38c07c: 0xc0e8b90  jal         func_3A2E40
label_38c080:
    if (ctx->pc == 0x38C080u) {
        ctx->pc = 0x38C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C07Cu;
        // 0x38c080: 0x24a5e350  addiu       $a1, $a1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C084u;
        goto label_38c084;
    }
    ctx->pc = 0x38C07Cu;
    SET_GPR_U32(ctx, 31, 0x38C084u);
    ctx->pc = 0x38C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C07Cu;
    // 0x38c080: 0x24a5e350  addiu       $a1, $a1, -0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x38C07Cu, 0x38C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C084u;
label_38c084:
    // 0x38c084: 0xc0e8b50  jal         func_3A2D40
label_38c088:
    if (ctx->pc == 0x38C088u) {
        ctx->pc = 0x38C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C084u;
        // 0x38c088: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C08Cu;
        goto label_38c08c;
    }
    ctx->pc = 0x38C084u;
    SET_GPR_U32(ctx, 31, 0x38C08Cu);
    ctx->pc = 0x38C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C084u;
    // 0x38c088: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38C084u, 0x38C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C08Cu;
label_38c08c:
    // 0x38c08c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x38c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_38c090:
    // 0x38c090: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x38c090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_38c094:
    // 0x38c094: 0xae421200  sw          $v0, 0x1200($s2)
    ctx->pc = 0x38c094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4608), GPR_U32(ctx, 2));
label_38c098:
    // 0x38c098: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x38c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_38c09c:
    // 0x38c09c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x38c09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38c0a0:
    // 0x38c0a0: 0x2462e368  addiu       $v0, $v1, -0x1C98
    ctx->pc = 0x38c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959976));
label_38c0a4:
    // 0x38c0a4: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x38c0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_38c0a8:
    // 0x38c0a8: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x38c0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_38c0ac:
    // 0x38c0ac: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x38c0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_38c0b0:
    // 0x38c0b0: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x38c0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_38c0b4:
    // 0x38c0b4: 0x68490017  ldl         $t1, 0x17($v0)
    ctx->pc = 0x38c0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_38c0b8:
    // 0x38c0b8: 0x6c490010  ldr         $t1, 0x10($v0)
    ctx->pc = 0x38c0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_38c0bc:
    // 0x38c0bc: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x38c0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c0c0:
    // 0x38c0c0: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x38c0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c0c4:
    // 0x38c0c4: 0xb3a8005f  sdl         $t0, 0x5F($sp)
    ctx->pc = 0x38c0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c0c8:
    // 0x38c0c8: 0xb7a80058  sdr         $t0, 0x58($sp)
    ctx->pc = 0x38c0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c0cc:
    // 0x38c0cc: 0xb3a90067  sdl         $t1, 0x67($sp)
    ctx->pc = 0x38c0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c0d0:
    // 0x38c0d0: 0xb7a90060  sdr         $t1, 0x60($sp)
    ctx->pc = 0x38c0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38c0d4:
    // 0x38c0d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x38c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38c0d8:
    // 0x38c0d8: 0xc10c1fa  jal         func_4307E8
label_38c0dc:
    if (ctx->pc == 0x38C0DCu) {
        ctx->pc = 0x38C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0D8u;
        // 0x38c0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C0E0u;
        goto label_38c0e0;
    }
    ctx->pc = 0x38C0D8u;
    SET_GPR_U32(ctx, 31, 0x38C0E0u);
    ctx->pc = 0x38C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0D8u;
    // 0x38c0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x38C0D8u, 0x38C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0E0u;
label_38c0e0:
    // 0x38c0e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38c0e4:
    // 0x38c0e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x38c0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38c0e8:
    // 0x38c0e8: 0xc0cd526  jal         func_335498
label_38c0ec:
    if (ctx->pc == 0x38C0ECu) {
        ctx->pc = 0x38C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0E8u;
        // 0x38c0ec: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C0F0u;
        goto label_38c0f0;
    }
    ctx->pc = 0x38C0E8u;
    SET_GPR_U32(ctx, 31, 0x38C0F0u);
    ctx->pc = 0x38C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0E8u;
    // 0x38c0ec: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x38C0E8u, 0x38C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0F0u;
label_38c0f0:
    // 0x38c0f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_38c0f4:
    // 0x38c0f4: 0x24420031  addiu       $v0, $v0, 0x31
    ctx->pc = 0x38c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 49));
label_38c0f8:
    // 0x38c0f8: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x38c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_38c0fc:
    // 0x38c0fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38c0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c100:
    // 0x38c100: 0xa3a20066  sb          $v0, 0x66($sp)
    ctx->pc = 0x38c100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 2));
label_38c104:
    // 0x38c104: 0xc044084  jal         func_110210
label_38c108:
    if (ctx->pc == 0x38C108u) {
        ctx->pc = 0x38C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C104u;
        // 0x38c108: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C10Cu;
        goto label_38c10c;
    }
    ctx->pc = 0x38C104u;
    SET_GPR_U32(ctx, 31, 0x38C10Cu);
    ctx->pc = 0x38C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C104u;
    // 0x38c108: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x38C104u, 0x38C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C10Cu;
label_38c10c:
    // 0x38c10c: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
label_38c110:
    if (ctx->pc == 0x38C110u) {
        ctx->pc = 0x38C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C10Cu;
        // 0x38c110: 0xae4212fc  sw          $v0, 0x12FC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C114u;
        goto label_38c114;
    }
    ctx->pc = 0x38C10Cu;
    {
        const bool branch_taken_0x38c10c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C10Cu;
        // 0x38c110: 0xae4212fc  sw          $v0, 0x12FC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c10c) {
            ctx->pc = 0x38C188u;
            goto label_38c188;
        }
    }
    ctx->pc = 0x38C114u;
label_38c114:
    // 0x38c114: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x38c114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38c118:
    // 0x38c118: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x38c118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38c11c:
    // 0x38c11c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x38c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_38c120:
    // 0x38c120: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38c124:
    // 0x38c124: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x38c124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
label_38c128:
    // 0x38c128: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x38c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_38c12c:
    // 0x38c12c: 0xa7a00076  sh          $zero, 0x76($sp)
    ctx->pc = 0x38c12cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 0));
label_38c130:
    // 0x38c130: 0xa7a30074  sh          $v1, 0x74($sp)
    ctx->pc = 0x38c130u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 3));
label_38c134:
    // 0x38c134: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38c134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38c138:
    // 0x38c138: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x38c138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_38c13c:
    // 0x38c13c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x38c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_38c140:
    // 0x38c140: 0x40f809  jalr        $v0
label_38c144:
    if (ctx->pc == 0x38C144u) {
        ctx->pc = 0x38C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C140u;
        // 0x38c144: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C148u;
        goto label_38c148;
    }
    ctx->pc = 0x38C140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C148u);
        ctx->pc = 0x38C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C140u;
        // 0x38c144: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C140u, 0x38C148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C148u;
label_38c148:
    // 0x38c148: 0x828301b0  lb          $v1, 0x1B0($s4)
    ctx->pc = 0x38c148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_38c14c:
    // 0x38c14c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x38c14cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_38c150:
    // 0x38c150: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_38c154:
    if (ctx->pc == 0x38C154u) {
        ctx->pc = 0x38C158u;
        goto label_38c158;
    }
    ctx->pc = 0x38C150u;
    {
        const bool branch_taken_0x38c150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c150) {
            ctx->pc = 0x38C188u;
            goto label_38c188;
        }
    }
    ctx->pc = 0x38C158u;
label_38c158:
    // 0x38c158: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x38c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38c15c:
    // 0x38c15c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38c15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38c160:
    // 0x38c160: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38c164:
    // 0x38c164: 0x40f809  jalr        $v0
label_38c168:
    if (ctx->pc == 0x38C168u) {
        ctx->pc = 0x38C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C164u;
        // 0x38c168: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C16Cu;
        goto label_38c16c;
    }
    ctx->pc = 0x38C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C16Cu);
        ctx->pc = 0x38C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C164u;
        // 0x38c168: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C164u, 0x38C16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C16Cu;
label_38c16c:
    // 0x38c16c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x38c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_38c170:
    // 0x38c170: 0xae421208  sw          $v0, 0x1208($s2)
    ctx->pc = 0x38c170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4616), GPR_U32(ctx, 2));
label_38c174:
    // 0x38c174: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x38c174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_38c178:
    // 0x38c178: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38c178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c17c:
    // 0x38c17c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x38c17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_38c180:
    // 0x38c180: 0xc13b652  jal         func_4ED948
label_38c184:
    if (ctx->pc == 0x38C184u) {
        ctx->pc = 0x38C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C180u;
        // 0x38c184: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C188u;
        goto label_38c188;
    }
    ctx->pc = 0x38C180u;
    SET_GPR_U32(ctx, 31, 0x38C188u);
    ctx->pc = 0x38C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C180u;
    // 0x38c184: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x38C180u, 0x38C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C188u;
label_38c188:
    // 0x38c188: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x38c188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_38c18c:
    // 0x38c18c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38c18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38c190:
    // 0x38c190: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c194:
    // 0x38c194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38c194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c198:
    // 0x38c198: 0xc0a4daa  jal         func_2936A8
label_38c19c:
    if (ctx->pc == 0x38C19Cu) {
        ctx->pc = 0x38C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C198u;
        // 0x38c19c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1A0u;
        goto label_38c1a0;
    }
    ctx->pc = 0x38C198u;
    SET_GPR_U32(ctx, 31, 0x38C1A0u);
    ctx->pc = 0x38C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C198u;
    // 0x38c19c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x38C198u, 0x38C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1A0u;
label_38c1a0:
    // 0x38c1a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c1a4:
    // 0x38c1a4: 0xc104c06  jal         func_413018
label_38c1a8:
    if (ctx->pc == 0x38C1A8u) {
        ctx->pc = 0x38C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1A4u;
        // 0x38c1a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1ACu;
        goto label_38c1ac;
    }
    ctx->pc = 0x38C1A4u;
    SET_GPR_U32(ctx, 31, 0x38C1ACu);
    ctx->pc = 0x38C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C1A4u;
    // 0x38c1a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413018u, 0x38C1A4u, 0x38C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1ACu;
label_38c1ac:
    // 0x38c1ac: 0x10000179  b           . + 4 + (0x179 << 2)
label_38c1b0:
    if (ctx->pc == 0x38C1B0u) {
        ctx->pc = 0x38C1B4u;
        goto label_38c1b4;
    }
    ctx->pc = 0x38C1ACu;
    {
        const bool branch_taken_0x38c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c1ac) {
            ctx->pc = 0x38C794u;
            goto label_38c794;
        }
    }
    ctx->pc = 0x38C1B4u;
label_38c1b4:
    // 0x38c1b4: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x38c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_38c1b8:
    // 0x38c1b8: 0x26c3fffe  addiu       $v1, $s6, -0x2
    ctx->pc = 0x38c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
label_38c1bc:
    // 0x38c1bc: 0x8e4411e4  lw          $a0, 0x11E4($s2)
    ctx->pc = 0x38c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_38c1c0:
    // 0x38c1c0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x38c1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_38c1c4:
    // 0x38c1c4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x38c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_38c1c8:
    // 0x38c1c8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_38c1cc:
    if (ctx->pc == 0x38C1CCu) {
        ctx->pc = 0x38C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1C8u;
        // 0x38c1cc: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1D0u;
        goto label_38c1d0;
    }
    ctx->pc = 0x38C1C8u;
    {
        const bool branch_taken_0x38c1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1C8u;
        // 0x38c1cc: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1c8) {
            ctx->pc = 0x38C224u;
            goto label_38c224;
        }
    }
    ctx->pc = 0x38C1D0u;
label_38c1d0:
    // 0x38c1d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38c1d4:
    // 0x38c1d4: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
label_38c1d8:
    if (ctx->pc == 0x38C1D8u) {
        ctx->pc = 0x38C1DCu;
        goto label_38c1dc;
    }
    ctx->pc = 0x38C1D4u;
    {
        const bool branch_taken_0x38c1d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x38c1d4) {
            ctx->pc = 0x38C1F4u;
            goto label_38c1f4;
        }
    }
    ctx->pc = 0x38C1DCu;
label_38c1dc:
    // 0x38c1dc: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x38c1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_38c1e0:
    // 0x38c1e0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x38c1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_38c1e4:
    // 0x38c1e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38c1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38c1e8:
    // 0x38c1e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38c1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c1ec:
    // 0x38c1ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_38c1f0:
    if (ctx->pc == 0x38C1F0u) {
        ctx->pc = 0x38C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1ECu;
        // 0x38c1f0: 0xafa000a8  sw          $zero, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C1F4u;
        goto label_38c1f4;
    }
    ctx->pc = 0x38C1ECu;
    {
        const bool branch_taken_0x38c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1ECu;
        // 0x38c1f0: 0xafa000a8  sw          $zero, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1ec) {
            ctx->pc = 0x38C200u;
            goto label_38c200;
        }
    }
    ctx->pc = 0x38C1F4u;
label_38c1f4:
    // 0x38c1f4: 0x3c013deb  lui         $at, 0x3DEB
    ctx->pc = 0x38c1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15851 << 16));
label_38c1f8:
    // 0x38c1f8: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x38c1f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_38c1fc:
    // 0x38c1fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x38c1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38c200:
    // 0x38c200: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x38c200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_38c204:
    // 0x38c204: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38c204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38c208:
    // 0x38c208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c20c:
    // 0x38c20c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38c20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c210:
    // 0x38c210: 0xc0a4daa  jal         func_2936A8
label_38c214:
    if (ctx->pc == 0x38C214u) {
        ctx->pc = 0x38C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C210u;
        // 0x38c214: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C218u;
        goto label_38c218;
    }
    ctx->pc = 0x38C210u;
    SET_GPR_U32(ctx, 31, 0x38C218u);
    ctx->pc = 0x38C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C210u;
    // 0x38c214: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x38C210u, 0x38C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C218u;
label_38c218:
    // 0x38c218: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c21c:
    // 0x38c21c: 0xc104c06  jal         func_413018
label_38c220:
    if (ctx->pc == 0x38C220u) {
        ctx->pc = 0x38C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C21Cu;
        // 0x38c220: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C224u;
        goto label_38c224;
    }
    ctx->pc = 0x38C21Cu;
    SET_GPR_U32(ctx, 31, 0x38C224u);
    ctx->pc = 0x38C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C21Cu;
    // 0x38c220: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413018u, 0x38C21Cu, 0x38C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C224u;
label_38c224:
    // 0x38c224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38c228:
    // 0x38c228: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
label_38c22c:
    if (ctx->pc == 0x38C22Cu) {
        ctx->pc = 0x38C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C228u;
        // 0x38c22c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C230u;
        goto label_38c230;
    }
    ctx->pc = 0x38C228u;
    {
        const bool branch_taken_0x38c228 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C228u;
        // 0x38c22c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c228) {
            ctx->pc = 0x38C240u;
            goto label_38c240;
        }
    }
    ctx->pc = 0x38C230u;
label_38c230:
    // 0x38c230: 0xc0e2e34  jal         func_38B8D0
label_38c234:
    if (ctx->pc == 0x38C234u) {
        ctx->pc = 0x38C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C230u;
        // 0x38c234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C238u;
        goto label_38c238;
    }
    ctx->pc = 0x38C230u;
    SET_GPR_U32(ctx, 31, 0x38C238u);
    ctx->pc = 0x38C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C230u;
    // 0x38c234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B8D0u, 0x38C230u, 0x38C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C238u;
label_38c238:
    // 0x38c238: 0x10000040  b           . + 4 + (0x40 << 2)
label_38c23c:
    if (ctx->pc == 0x38C23Cu) {
        ctx->pc = 0x38C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C238u;
        // 0x38c23c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C240u;
        goto label_38c240;
    }
    ctx->pc = 0x38C238u;
    {
        const bool branch_taken_0x38c238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C238u;
        // 0x38c23c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c238) {
            ctx->pc = 0x38C33Cu;
            goto label_38c33c;
        }
    }
    ctx->pc = 0x38C240u;
label_38c240:
    // 0x38c240: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_38c244:
    if (ctx->pc == 0x38C244u) {
        ctx->pc = 0x38C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C240u;
        // 0x38c244: 0x241105f0  addiu       $s1, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C248u;
        goto label_38c248;
    }
    ctx->pc = 0x38C240u;
    {
        const bool branch_taken_0x38c240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C240u;
        // 0x38c244: 0x241105f0  addiu       $s1, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c240) {
            ctx->pc = 0x38C2C4u;
            goto label_38c2c4;
        }
    }
    ctx->pc = 0x38C248u;
label_38c248:
    // 0x38c248: 0x8e4511e0  lw          $a1, 0x11E0($s2)
    ctx->pc = 0x38c248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c24c:
    // 0x38c24c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38c24cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_38c250:
    // 0x38c250: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x38c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38c254:
    // 0x38c254: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x38c254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38c258:
    // 0x38c258: 0x2610e514  addiu       $s0, $s0, -0x1AEC
    ctx->pc = 0x38c258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960404));
label_38c25c:
    // 0x38c25c: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x38c25cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_38c260:
    // 0x38c260: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x38c260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38c264:
    // 0x38c264: 0xc0e27ea  jal         func_389FA8
label_38c268:
    if (ctx->pc == 0x38C268u) {
        ctx->pc = 0x38C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C264u;
        // 0x38c268: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C26Cu;
        goto label_38c26c;
    }
    ctx->pc = 0x38C264u;
    SET_GPR_U32(ctx, 31, 0x38C26Cu);
    ctx->pc = 0x38C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C264u;
    // 0x38c268: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389FA8u, 0x38C264u, 0x38C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C26Cu;
label_38c26c:
    // 0x38c26c: 0x8e4511e0  lw          $a1, 0x11E0($s2)
    ctx->pc = 0x38c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c270:
    // 0x38c270: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x38c270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_38c274:
    // 0x38c274: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x38c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38c278:
    // 0x38c278: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38c278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38c27c:
    // 0x38c27c: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x38c27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38c280:
    // 0x38c280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c284:
    // 0x38c284: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38c284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38c288:
    // 0x38c288: 0xc0e27d0  jal         func_389F40
label_38c28c:
    if (ctx->pc == 0x38C28Cu) {
        ctx->pc = 0x38C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C288u;
        // 0x38c28c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C290u;
        goto label_38c290;
    }
    ctx->pc = 0x38C288u;
    SET_GPR_U32(ctx, 31, 0x38C290u);
    ctx->pc = 0x38C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C288u;
    // 0x38c28c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F40u, 0x38C288u, 0x38C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C290u;
label_38c290:
    // 0x38c290: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x38c290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38c294:
    // 0x38c294: 0x8e4411e0  lw          $a0, 0x11E0($s2)
    ctx->pc = 0x38c294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c298:
    // 0x38c298: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x38c298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38c29c:
    // 0x38c29c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x38c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_38c2a0:
    // 0x38c2a0: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x38c2a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38c2a4:
    // 0x38c2a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38c2a8:
    // 0x38c2a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38c2ac:
    // 0x38c2ac: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x38c2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_38c2b0:
    // 0x38c2b0: 0x16c00022  bnez        $s6, . + 4 + (0x22 << 2)
label_38c2b4:
    if (ctx->pc == 0x38C2B4u) {
        ctx->pc = 0x38C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2B0u;
        // 0x38c2b4: 0x8e150020  lw          $s5, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2B8u;
        goto label_38c2b8;
    }
    ctx->pc = 0x38C2B0u;
    {
        const bool branch_taken_0x38c2b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2B0u;
        // 0x38c2b4: 0x8e150020  lw          $s5, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2b0) {
            ctx->pc = 0x38C33Cu;
            goto label_38c33c;
        }
    }
    ctx->pc = 0x38C2B8u;
label_38c2b8:
    // 0x38c2b8: 0x3c02ffd5  lui         $v0, 0xFFD5
    ctx->pc = 0x38c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65493 << 16));
label_38c2bc:
    // 0x38c2bc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_38c2c0:
    if (ctx->pc == 0x38C2C0u) {
        ctx->pc = 0x38C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2BCu;
        // 0x38c2c0: 0x34427fff  ori         $v0, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2C4u;
        goto label_38c2c4;
    }
    ctx->pc = 0x38C2BCu;
    {
        const bool branch_taken_0x38c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2BCu;
        // 0x38c2c0: 0x34427fff  ori         $v0, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2bc) {
            ctx->pc = 0x38C338u;
            goto label_38c338;
        }
    }
    ctx->pc = 0x38C2C4u;
label_38c2c4:
    // 0x38c2c4: 0x8e4511e0  lw          $a1, 0x11E0($s2)
    ctx->pc = 0x38c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c2c8:
    // 0x38c2c8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38c2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_38c2cc:
    // 0x38c2cc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x38c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38c2d0:
    // 0x38c2d0: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x38c2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38c2d4:
    // 0x38c2d4: 0x2610e530  addiu       $s0, $s0, -0x1AD0
    ctx->pc = 0x38c2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960432));
label_38c2d8:
    // 0x38c2d8: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x38c2d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_38c2dc:
    // 0x38c2dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38c2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c2e0:
    // 0x38c2e0: 0xc0e27ea  jal         func_389FA8
label_38c2e4:
    if (ctx->pc == 0x38C2E4u) {
        ctx->pc = 0x38C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2E0u;
        // 0x38c2e4: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C2E8u;
        goto label_38c2e8;
    }
    ctx->pc = 0x38C2E0u;
    SET_GPR_U32(ctx, 31, 0x38C2E8u);
    ctx->pc = 0x38C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C2E0u;
    // 0x38c2e4: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389FA8u, 0x38C2E0u, 0x38C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C2E8u;
label_38c2e8:
    // 0x38c2e8: 0x8e4511e0  lw          $a1, 0x11E0($s2)
    ctx->pc = 0x38c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c2ec:
    // 0x38c2ec: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x38c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_38c2f0:
    // 0x38c2f0: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x38c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38c2f4:
    // 0x38c2f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38c2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38c2f8:
    // 0x38c2f8: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x38c2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38c2fc:
    // 0x38c2fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38c2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c300:
    // 0x38c300: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38c300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38c304:
    // 0x38c304: 0xc0e27d0  jal         func_389F40
label_38c308:
    if (ctx->pc == 0x38C308u) {
        ctx->pc = 0x38C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C304u;
        // 0x38c308: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C30Cu;
        goto label_38c30c;
    }
    ctx->pc = 0x38C304u;
    SET_GPR_U32(ctx, 31, 0x38C30Cu);
    ctx->pc = 0x38C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C304u;
    // 0x38c308: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F40u, 0x38C304u, 0x38C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C30Cu;
label_38c30c:
    // 0x38c30c: 0x8e4411e0  lw          $a0, 0x11E0($s2)
    ctx->pc = 0x38c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c310:
    // 0x38c310: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x38c310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_38c314:
    // 0x38c314: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38c314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_38c318:
    // 0x38c318: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x38c318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38c31c:
    // 0x38c31c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38c320:
    // 0x38c320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38c324:
    // 0x38c324: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x38c324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_38c328:
    // 0x38c328: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_38c32c:
    if (ctx->pc == 0x38C32Cu) {
        ctx->pc = 0x38C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C328u;
        // 0x38c32c: 0x8e15004c  lw          $s5, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C330u;
        goto label_38c330;
    }
    ctx->pc = 0x38C328u;
    {
        const bool branch_taken_0x38c328 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C328u;
        // 0x38c32c: 0x8e15004c  lw          $s5, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c328) {
            ctx->pc = 0x38C33Cu;
            goto label_38c33c;
        }
    }
    ctx->pc = 0x38C330u;
label_38c330:
    // 0x38c330: 0x3c02ffea  lui         $v0, 0xFFEA
    ctx->pc = 0x38c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65514 << 16));
label_38c334:
    // 0x38c334: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x38c334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
label_38c338:
    // 0x38c338: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x38c338u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c33c:
    // 0x38c33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c340:
    // 0x38c340: 0x16c20033  bne         $s6, $v0, . + 4 + (0x33 << 2)
label_38c344:
    if (ctx->pc == 0x38C344u) {
        ctx->pc = 0x38C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C340u;
        // 0x38c344: 0x8fa900a8  lw          $t1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C348u;
        goto label_38c348;
    }
    ctx->pc = 0x38C340u;
    {
        const bool branch_taken_0x38c340 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C340u;
        // 0x38c344: 0x8fa900a8  lw          $t1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c340) {
            ctx->pc = 0x38C410u;
            goto label_38c410;
        }
    }
    ctx->pc = 0x38C348u;
label_38c348:
    // 0x38c348: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x38c348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_38c34c:
    // 0x38c34c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x38c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_38c350:
    // 0x38c350: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x38c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_38c354:
    // 0x38c354: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x38c354u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38c358:
    // 0x38c358: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x38c358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_38c35c:
    // 0x38c35c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x38c35cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38c360:
    // 0x38c360: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38c360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38c364:
    // 0x38c364: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x38c364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_38c368:
    // 0x38c368: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38c368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38c36c:
    // 0x38c36c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38c36cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38c370:
    // 0x38c370: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38c370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38c374:
    // 0x38c374: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38c374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38c378:
    // 0x38c378: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x38c378u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_38c37c:
    // 0x38c37c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x38c37cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_38c380:
    // 0x38c380: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x38c380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_38c384:
    // 0x38c384: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38c384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38c388:
    // 0x38c388: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38c388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38c38c:
    // 0x38c38c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38c38cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38c390:
    // 0x38c390: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38c390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38c394:
    // 0x38c394: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x38c394u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_38c398:
    // 0x38c398: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x38c398u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c39c:
    // 0x38c39c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x38c39cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c3a0:
    // 0x38c3a0: 0x8e830568  lw          $v1, 0x568($s4)
    ctx->pc = 0x38c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1384)));
label_38c3a4:
    // 0x38c3a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x38c3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c3a8:
    // 0x38c3a8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x38c3a8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_38c3ac:
    // 0x38c3ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_38c3b0:
    if (ctx->pc == 0x38C3B0u) {
        ctx->pc = 0x38C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3ACu;
        // 0x38c3b0: 0x2a3a824  and         $s5, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3B4u;
        goto label_38c3b4;
    }
    ctx->pc = 0x38C3ACu;
    {
        const bool branch_taken_0x38c3ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3ACu;
        // 0x38c3b0: 0x2a3a824  and         $s5, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3ac) {
            ctx->pc = 0x38C3C0u;
            goto label_38c3c0;
        }
    }
    ctx->pc = 0x38C3B4u;
label_38c3b4:
    // 0x38c3b4: 0x3c02d7cc  lui         $v0, 0xD7CC
    ctx->pc = 0x38c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55244 << 16));
label_38c3b8:
    // 0x38c3b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_38c3bc:
    if (ctx->pc == 0x38C3BCu) {
        ctx->pc = 0x38C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3B8u;
        // 0x38c3bc: 0x3442d5ff  ori         $v0, $v0, 0xD5FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54783);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3C0u;
        goto label_38c3c0;
    }
    ctx->pc = 0x38C3B8u;
    {
        const bool branch_taken_0x38c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3B8u;
        // 0x38c3bc: 0x3442d5ff  ori         $v0, $v0, 0xD5FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54783);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3b8) {
            ctx->pc = 0x38C3C8u;
            goto label_38c3c8;
        }
    }
    ctx->pc = 0x38C3C0u;
label_38c3c0:
    // 0x38c3c0: 0x3c02ebf3  lui         $v0, 0xEBF3
    ctx->pc = 0x38c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60403 << 16));
label_38c3c4:
    // 0x38c3c4: 0x34422aff  ori         $v0, $v0, 0x2AFF
    ctx->pc = 0x38c3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11007);
label_38c3c8:
    // 0x38c3c8: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x38c3c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c3cc:
    // 0x38c3cc: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_38c3d0:
    if (ctx->pc == 0x38C3D0u) {
        ctx->pc = 0x38C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3CCu;
        // 0x38c3d0: 0x8e820568  lw          $v0, 0x568($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3D4u;
        goto label_38c3d4;
    }
    ctx->pc = 0x38C3CCu;
    {
        const bool branch_taken_0x38c3cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3CCu;
        // 0x38c3d0: 0x8e820568  lw          $v0, 0x568($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3cc) {
            ctx->pc = 0x38C404u;
            goto label_38c404;
        }
    }
    ctx->pc = 0x38C3D4u;
label_38c3d4:
    // 0x38c3d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_38c3d8:
    if (ctx->pc == 0x38C3D8u) {
        ctx->pc = 0x38C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3D4u;
        // 0x38c3d8: 0x551025  or          $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3DCu;
        goto label_38c3dc;
    }
    ctx->pc = 0x38C3D4u;
    {
        const bool branch_taken_0x38c3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3D4u;
        // 0x38c3d8: 0x551025  or          $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3d4) {
            ctx->pc = 0x38C408u;
            goto label_38c408;
        }
    }
    ctx->pc = 0x38C3DCu;
label_38c3dc:
    // 0x38c3dc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x38c3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_38c3e0:
    // 0x38c3e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38c3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38c3e4:
    // 0x38c3e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c3e8:
    // 0x38c3e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38c3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c3ec:
    // 0x38c3ec: 0xc0a4daa  jal         func_2936A8
label_38c3f0:
    if (ctx->pc == 0x38C3F0u) {
        ctx->pc = 0x38C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3ECu;
        // 0x38c3f0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C3F4u;
        goto label_38c3f4;
    }
    ctx->pc = 0x38C3ECu;
    SET_GPR_U32(ctx, 31, 0x38C3F4u);
    ctx->pc = 0x38C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3ECu;
    // 0x38c3f0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x38C3ECu, 0x38C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3F4u;
label_38c3f4:
    // 0x38c3f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c3f8:
    // 0x38c3f8: 0xc104c06  jal         func_413018
label_38c3fc:
    if (ctx->pc == 0x38C3FCu) {
        ctx->pc = 0x38C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3F8u;
        // 0x38c3fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C400u;
        goto label_38c400;
    }
    ctx->pc = 0x38C3F8u;
    SET_GPR_U32(ctx, 31, 0x38C400u);
    ctx->pc = 0x38C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3F8u;
    // 0x38c3fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413018u, 0x38C3F8u, 0x38C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C400u;
label_38c400:
    // 0x38c400: 0x8e820568  lw          $v0, 0x568($s4)
    ctx->pc = 0x38c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1384)));
label_38c404:
    // 0x38c404: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x38c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_38c408:
    // 0x38c408: 0xae820568  sw          $v0, 0x568($s4)
    ctx->pc = 0x38c408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1384), GPR_U32(ctx, 2));
label_38c40c:
    // 0x38c40c: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x38c40cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_38c410:
    // 0x38c410: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
label_38c414:
    if (ctx->pc == 0x38C414u) {
        ctx->pc = 0x38C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C410u;
        // 0x38c414: 0x32a28000  andi        $v0, $s5, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C418u;
        goto label_38c418;
    }
    ctx->pc = 0x38C410u;
    {
        const bool branch_taken_0x38c410 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C410u;
        // 0x38c414: 0x32a28000  andi        $v0, $s5, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c410) {
            ctx->pc = 0x38C4B8u;
            goto label_38c4b8;
        }
    }
    ctx->pc = 0x38C418u;
label_38c418:
    // 0x38c418: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38c41c:
    if (ctx->pc == 0x38C41Cu) {
        ctx->pc = 0x38C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C418u;
        // 0x38c41c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C420u;
        goto label_38c420;
    }
    ctx->pc = 0x38C418u;
    {
        const bool branch_taken_0x38c418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C418u;
        // 0x38c41c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c418) {
            ctx->pc = 0x38C440u;
            goto label_38c440;
        }
    }
    ctx->pc = 0x38C420u;
label_38c420:
    // 0x38c420: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x38c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38c424:
    // 0x38c424: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x38c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_38c428:
    // 0x38c428: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_38c42c:
    if (ctx->pc == 0x38C42Cu) {
        ctx->pc = 0x38C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C428u;
        // 0x38c42c: 0x2a31024  and         $v0, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C430u;
        goto label_38c430;
    }
    ctx->pc = 0x38C428u;
    {
        const bool branch_taken_0x38c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C428u;
        // 0x38c42c: 0x2a31024  and         $v0, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c428) {
            ctx->pc = 0x38C444u;
            goto label_38c444;
        }
    }
    ctx->pc = 0x38C430u;
label_38c430:
    // 0x38c430: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38c430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_38c434:
    // 0x38c434: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x38c434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
label_38c438:
    // 0x38c438: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x38c438u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c43c:
    // 0x38c43c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x38c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_38c440:
    // 0x38c440: 0x2a31024  and         $v0, $s5, $v1
    ctx->pc = 0x38c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_38c444:
    // 0x38c444: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_38c448:
    if (ctx->pc == 0x38C448u) {
        ctx->pc = 0x38C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C444u;
        // 0x38c448: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C44Cu;
        goto label_38c44c;
    }
    ctx->pc = 0x38C444u;
    {
        const bool branch_taken_0x38c444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c444) {
            ctx->pc = 0x38C448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C444u;
            // 0x38c448: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C468u;
            goto label_38c468;
        }
    }
    ctx->pc = 0x38C44Cu;
label_38c44c:
    // 0x38c44c: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x38c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38c450:
    // 0x38c450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38c454:
    // 0x38c454: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_38c458:
    if (ctx->pc == 0x38C458u) {
        ctx->pc = 0x38C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C454u;
        // 0x38c458: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C45Cu;
        goto label_38c45c;
    }
    ctx->pc = 0x38C454u;
    {
        const bool branch_taken_0x38c454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C454u;
        // 0x38c458: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c454) {
            ctx->pc = 0x38C468u;
            goto label_38c468;
        }
    }
    ctx->pc = 0x38C45Cu;
label_38c45c:
    // 0x38c45c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x38c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_38c460:
    // 0x38c460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38c460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_38c464:
    // 0x38c464: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x38c464u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c468:
    // 0x38c468: 0x2a31024  and         $v0, $s5, $v1
    ctx->pc = 0x38c468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_38c46c:
    // 0x38c46c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_38c470:
    if (ctx->pc == 0x38C470u) {
        ctx->pc = 0x38C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C46Cu;
        // 0x38c470: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C474u;
        goto label_38c474;
    }
    ctx->pc = 0x38C46Cu;
    {
        const bool branch_taken_0x38c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c46c) {
            ctx->pc = 0x38C470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C46Cu;
            // 0x38c470: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C490u;
            goto label_38c490;
        }
    }
    ctx->pc = 0x38C474u;
label_38c474:
    // 0x38c474: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x38c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38c478:
    // 0x38c478: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38c478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38c47c:
    // 0x38c47c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_38c480:
    if (ctx->pc == 0x38C480u) {
        ctx->pc = 0x38C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C47Cu;
        // 0x38c480: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C484u;
        goto label_38c484;
    }
    ctx->pc = 0x38C47Cu;
    {
        const bool branch_taken_0x38c47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C47Cu;
        // 0x38c480: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c47c) {
            ctx->pc = 0x38C490u;
            goto label_38c490;
        }
    }
    ctx->pc = 0x38C484u;
label_38c484:
    // 0x38c484: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x38c484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_38c488:
    // 0x38c488: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_38c48c:
    // 0x38c48c: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x38c48cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c490:
    // 0x38c490: 0x2a31024  and         $v0, $s5, $v1
    ctx->pc = 0x38c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_38c494:
    // 0x38c494: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38c498:
    if (ctx->pc == 0x38C498u) {
        ctx->pc = 0x38C49Cu;
        goto label_38c49c;
    }
    ctx->pc = 0x38C494u;
    {
        const bool branch_taken_0x38c494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c494) {
            ctx->pc = 0x38C4B8u;
            goto label_38c4b8;
        }
    }
    ctx->pc = 0x38C49Cu;
label_38c49c:
    // 0x38c49c: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x38c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38c4a0:
    // 0x38c4a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38c4a4:
    // 0x38c4a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_38c4a8:
    if (ctx->pc == 0x38C4A8u) {
        ctx->pc = 0x38C4ACu;
        goto label_38c4ac;
    }
    ctx->pc = 0x38C4A4u;
    {
        const bool branch_taken_0x38c4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c4a4) {
            ctx->pc = 0x38C4B8u;
            goto label_38c4b8;
        }
    }
    ctx->pc = 0x38C4ACu;
label_38c4ac:
    // 0x38c4ac: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x38c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_38c4b0:
    // 0x38c4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_38c4b4:
    // 0x38c4b4: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x38c4b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c4b8:
    // 0x38c4b8: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_38c4bc:
    if (ctx->pc == 0x38C4BCu) {
        ctx->pc = 0x38C4C0u;
        goto label_38c4c0;
    }
    ctx->pc = 0x38C4B8u;
    {
        const bool branch_taken_0x38c4b8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c4b8) {
            ctx->pc = 0x38C4C8u;
            goto label_38c4c8;
        }
    }
    ctx->pc = 0x38C4C0u;
label_38c4c0:
    // 0x38c4c0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_38c4c4:
    if (ctx->pc == 0x38C4C4u) {
        ctx->pc = 0x38C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4C0u;
        // 0x38c4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4C8u;
        goto label_38c4c8;
    }
    ctx->pc = 0x38C4C0u;
    {
        const bool branch_taken_0x38c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4C0u;
        // 0x38c4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4c0) {
            ctx->pc = 0x38C7A0u;
            goto label_38c7a0;
        }
    }
    ctx->pc = 0x38C4C8u;
label_38c4c8:
    // 0x38c4c8: 0x3c02ffd5  lui         $v0, 0xFFD5
    ctx->pc = 0x38c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65493 << 16));
label_38c4cc:
    // 0x38c4cc: 0x34427f3f  ori         $v0, $v0, 0x7F3F
    ctx->pc = 0x38c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32575);
label_38c4d0:
    // 0x38c4d0: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x38c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c4d4:
    // 0x38c4d4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_38c4d8:
    if (ctx->pc == 0x38C4D8u) {
        ctx->pc = 0x38C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4D4u;
        // 0x38c4d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4DCu;
        goto label_38c4dc;
    }
    ctx->pc = 0x38C4D4u;
    {
        const bool branch_taken_0x38c4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4D4u;
        // 0x38c4d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4d4) {
            ctx->pc = 0x38C548u;
            goto label_38c548;
        }
    }
    ctx->pc = 0x38C4DCu;
label_38c4dc:
    // 0x38c4dc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38c4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38c4e0:
    // 0x38c4e0: 0xc0e8b48  jal         func_3A2D20
label_38c4e4:
    if (ctx->pc == 0x38C4E4u) {
        ctx->pc = 0x38C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4E0u;
        // 0x38c4e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4E8u;
        goto label_38c4e8;
    }
    ctx->pc = 0x38C4E0u;
    SET_GPR_U32(ctx, 31, 0x38C4E8u);
    ctx->pc = 0x38C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4E0u;
    // 0x38c4e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38C4E0u, 0x38C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4E8u;
label_38c4e8:
    // 0x38c4e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38c4ec:
    // 0x38c4ec: 0xc0e8b58  jal         func_3A2D60
label_38c4f0:
    if (ctx->pc == 0x38C4F0u) {
        ctx->pc = 0x38C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4ECu;
        // 0x38c4f0: 0x27c50090  addiu       $a1, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C4F4u;
        goto label_38c4f4;
    }
    ctx->pc = 0x38C4ECu;
    SET_GPR_U32(ctx, 31, 0x38C4F4u);
    ctx->pc = 0x38C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4ECu;
    // 0x38c4f0: 0x27c50090  addiu       $a1, $fp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38C4ECu, 0x38C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4F4u;
label_38c4f4:
    // 0x38c4f4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38c4f8:
    // 0x38c4f8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x38c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_38c4fc:
    // 0x38c4fc: 0xc0e8b58  jal         func_3A2D60
label_38c500:
    if (ctx->pc == 0x38C500u) {
        ctx->pc = 0x38C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4FCu;
        // 0x38c500: 0x24a51730  addiu       $a1, $a1, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C504u;
        goto label_38c504;
    }
    ctx->pc = 0x38C4FCu;
    SET_GPR_U32(ctx, 31, 0x38C504u);
    ctx->pc = 0x38C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4FCu;
    // 0x38c500: 0x24a51730  addiu       $a1, $a1, 0x1730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38C4FCu, 0x38C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C504u;
label_38c504:
    // 0x38c504: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38c508:
    // 0x38c508: 0xc0e8b68  jal         func_3A2DA0
label_38c50c:
    if (ctx->pc == 0x38C50Cu) {
        ctx->pc = 0x38C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C508u;
        // 0x38c50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C510u;
        goto label_38c510;
    }
    ctx->pc = 0x38C508u;
    SET_GPR_U32(ctx, 31, 0x38C510u);
    ctx->pc = 0x38C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C508u;
    // 0x38c50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x38C508u, 0x38C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C510u;
label_38c510:
    // 0x38c510: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x38c510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_38c514:
    // 0x38c514: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x38c514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_38c518:
    // 0x38c518: 0x8ca271b4  lw          $v0, 0x71B4($a1)
    ctx->pc = 0x38c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29108)));
label_38c51c:
    // 0x38c51c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x38c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_38c520:
    // 0x38c520: 0xc0e4060  jal         func_390180
label_38c524:
    if (ctx->pc == 0x38C524u) {
        ctx->pc = 0x38C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C520u;
        // 0x38c524: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C528u;
        goto label_38c528;
    }
    ctx->pc = 0x38C520u;
    SET_GPR_U32(ctx, 31, 0x38C528u);
    ctx->pc = 0x38C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C520u;
    // 0x38c524: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38C520u, 0x38C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C528u;
label_38c528:
    // 0x38c528: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38c528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38c52c:
    // 0x38c52c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38c52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38c530:
    // 0x38c530: 0xc0e8b80  jal         func_3A2E00
label_38c534:
    if (ctx->pc == 0x38C534u) {
        ctx->pc = 0x38C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C530u;
        // 0x38c534: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C538u;
        goto label_38c538;
    }
    ctx->pc = 0x38C530u;
    SET_GPR_U32(ctx, 31, 0x38C538u);
    ctx->pc = 0x38C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C530u;
    // 0x38c534: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x38C530u, 0x38C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C538u;
label_38c538:
    // 0x38c538: 0xc0e8b50  jal         func_3A2D40
label_38c53c:
    if (ctx->pc == 0x38C53Cu) {
        ctx->pc = 0x38C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C538u;
        // 0x38c53c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C540u;
        goto label_38c540;
    }
    ctx->pc = 0x38C538u;
    SET_GPR_U32(ctx, 31, 0x38C540u);
    ctx->pc = 0x38C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C538u;
    // 0x38c53c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38C538u, 0x38C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C540u;
label_38c540:
    // 0x38c540: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x38c540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c544:
    // 0x38c544: 0x0  nop
    ctx->pc = 0x38c544u;
    // NOP
label_38c548:
    // 0x38c548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c54c:
    // 0x38c54c: 0x2222004  sllv        $a0, $v0, $s1
    ctx->pc = 0x38c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_38c550:
    // 0x38c550: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x38c550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
label_38c554:
    // 0x38c554: 0x5060008c  beql        $v1, $zero, . + 4 + (0x8C << 2)
label_38c558:
    if (ctx->pc == 0x38C558u) {
        ctx->pc = 0x38C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C554u;
        // 0x38c558: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C55Cu;
        goto label_38c55c;
    }
    ctx->pc = 0x38C554u;
    {
        const bool branch_taken_0x38c554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c554) {
            ctx->pc = 0x38C558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C554u;
            // 0x38c558: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C788u;
            goto label_38c788;
        }
    }
    ctx->pc = 0x38C55Cu;
label_38c55c:
    // 0x38c55c: 0x8e4511f0  lw          $a1, 0x11F0($s2)
    ctx->pc = 0x38c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4592)));
label_38c560:
    // 0x38c560: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x38c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_38c564:
    // 0x38c564: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
label_38c568:
    if (ctx->pc == 0x38C568u) {
        ctx->pc = 0x38C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C564u;
        // 0x38c568: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C56Cu;
        goto label_38c56c;
    }
    ctx->pc = 0x38C564u;
    {
        const bool branch_taken_0x38c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c564) {
            ctx->pc = 0x38C568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C564u;
            // 0x38c568: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C788u;
            goto label_38c788;
        }
    }
    ctx->pc = 0x38C56Cu;
label_38c56c:
    // 0x38c56c: 0x8e4211f4  lw          $v0, 0x11F4($s2)
    ctx->pc = 0x38c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4596)));
label_38c570:
    // 0x38c570: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x38c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_38c574:
    // 0x38c574: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_38c578:
    if (ctx->pc == 0x38C578u) {
        ctx->pc = 0x38C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C574u;
        // 0x38c578: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C57Cu;
        goto label_38c57c;
    }
    ctx->pc = 0x38C574u;
    {
        const bool branch_taken_0x38c574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c574) {
            ctx->pc = 0x38C578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C574u;
            // 0x38c578: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C788u;
            goto label_38c788;
        }
    }
    ctx->pc = 0x38C57Cu;
label_38c57c:
    // 0x38c57c: 0x8e4311f8  lw          $v1, 0x11F8($s2)
    ctx->pc = 0x38c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38c580:
    // 0x38c580: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x38c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_38c584:
    // 0x38c584: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
label_38c588:
    if (ctx->pc == 0x38C588u) {
        ctx->pc = 0x38C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C584u;
        // 0x38c588: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C58Cu;
        goto label_38c58c;
    }
    ctx->pc = 0x38C584u;
    {
        const bool branch_taken_0x38c584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c584) {
            ctx->pc = 0x38C588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C584u;
            // 0x38c588: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C788u;
            goto label_38c788;
        }
    }
    ctx->pc = 0x38C58Cu;
label_38c58c:
    // 0x38c58c: 0x2e22001a  sltiu       $v0, $s1, 0x1A
    ctx->pc = 0x38c58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_38c590:
    // 0x38c590: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_38c594:
    if (ctx->pc == 0x38C594u) {
        ctx->pc = 0x38C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C590u;
        // 0x38c594: 0x240205f0  addiu       $v0, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C598u;
        goto label_38c598;
    }
    ctx->pc = 0x38C590u;
    {
        const bool branch_taken_0x38c590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C590u;
        // 0x38c594: 0x240205f0  addiu       $v0, $zero, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c590) {
            ctx->pc = 0x38C72Cu;
            goto label_38c72c;
        }
    }
    ctx->pc = 0x38C598u;
label_38c598:
    // 0x38c598: 0x8e4511e0  lw          $a1, 0x11E0($s2)
    ctx->pc = 0x38c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c59c:
    // 0x38c59c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x38c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_38c5a0:
    // 0x38c5a0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x38c5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38c5a4:
    // 0x38c5a4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x38c5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38c5a8:
    // 0x38c5a8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x38c5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38c5ac:
    // 0x38c5ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_38c5b0:
    // 0x38c5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c5b4:
    // 0x38c5b4: 0x2273818  mult        $a3, $s1, $a3
    ctx->pc = 0x38c5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_38c5b8:
    // 0x38c5b8: 0x2442e5b0  addiu       $v0, $v0, -0x1A50
    ctx->pc = 0x38c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
label_38c5bc:
    // 0x38c5bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38c5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c5c0:
    // 0x38c5c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x38c5c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_38c5c4:
    // 0x38c5c4: 0x246301a0  addiu       $v1, $v1, 0x1A0
    ctx->pc = 0x38c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
label_38c5c8:
    // 0x38c5c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38c5cc:
    // 0x38c5cc: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x38c5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_38c5d0:
    // 0x38c5d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38c5d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c5d4:
    // 0x38c5d4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x38c5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_38c5d8:
    // 0x38c5d8: 0xc6140090  lwc1        $f20, 0x90($s0)
    ctx->pc = 0x38c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c5dc:
    // 0x38c5dc: 0xc0e2936  jal         func_38A4D8
label_38c5e0:
    if (ctx->pc == 0x38C5E0u) {
        ctx->pc = 0x38C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5DCu;
        // 0x38c5e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5E4u;
        goto label_38c5e4;
    }
    ctx->pc = 0x38C5DCu;
    SET_GPR_U32(ctx, 31, 0x38C5E4u);
    ctx->pc = 0x38C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C5DCu;
    // 0x38c5e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4D8u, 0x38C5DCu, 0x38C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C5E4u;
label_38c5e4:
    // 0x38c5e4: 0x2623fffc  addiu       $v1, $s1, -0x4
    ctx->pc = 0x38c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_38c5e8:
    // 0x38c5e8: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x38c5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_38c5ec:
    // 0x38c5ec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_38c5f0:
    if (ctx->pc == 0x38C5F0u) {
        ctx->pc = 0x38C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5ECu;
        // 0x38c5f0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5F4u;
        goto label_38c5f4;
    }
    ctx->pc = 0x38C5ECu;
    {
        const bool branch_taken_0x38c5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5ECu;
        // 0x38c5f0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c5ec) {
            ctx->pc = 0x38C65Cu;
            goto label_38c65c;
        }
    }
    ctx->pc = 0x38C5F4u;
label_38c5f4:
    // 0x38c5f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38c5f8:
    // 0x38c5f8: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x38c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
label_38c5fc:
    // 0x38c5fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38c600:
    // 0x38c600: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38c600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38c604:
    // 0x38c604: 0x800008  jr          $a0
label_38c608:
    if (ctx->pc == 0x38C608u) {
        ctx->pc = 0x38C60Cu;
        goto label_38c60c;
    }
    ctx->pc = 0x38C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38C60Cu: goto label_38c60c;
            case 0x38C65Cu: goto label_38c65c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C604u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38C60Cu;
label_38c60c:
    // 0x38c60c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38c60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_38c610:
    // 0x38c610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38c610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c614:
    // 0x38c614: 0x0  nop
    ctx->pc = 0x38c614u;
    // NOP
label_38c618:
    // 0x38c618: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x38c618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c61c:
    // 0x38c61c: 0x0  nop
    ctx->pc = 0x38c61cu;
    // NOP
label_38c620:
    // 0x38c620: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_38c624:
    if (ctx->pc == 0x38C624u) {
        ctx->pc = 0x38C628u;
        goto label_38c628;
    }
    ctx->pc = 0x38C620u;
    {
        const bool branch_taken_0x38c620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38c620) {
            ctx->pc = 0x38C65Cu;
            goto label_38c65c;
        }
    }
    ctx->pc = 0x38C628u;
label_38c628:
    // 0x38c628: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x38c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c62c:
    // 0x38c62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38c62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c630:
    // 0x38c630: 0x0  nop
    ctx->pc = 0x38c630u;
    // NOP
label_38c634:
    // 0x38c634: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_38c638:
    if (ctx->pc == 0x38C638u) {
        ctx->pc = 0x38C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C634u;
        // 0x38c638: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C63Cu;
        goto label_38c63c;
    }
    ctx->pc = 0x38C634u;
    {
        const bool branch_taken_0x38c634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C634u;
        // 0x38c638: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c634) {
            ctx->pc = 0x38C65Cu;
            goto label_38c65c;
        }
    }
    ctx->pc = 0x38C63Cu;
label_38c63c:
    // 0x38c63c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38c63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38c640:
    // 0x38c640: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38c640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38c644:
    // 0x38c644: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x38c644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_38c648:
    // 0x38c648: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x38c648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_38c64c:
    // 0x38c64c: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x38c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_38c650:
    // 0x38c650: 0x27c70090  addiu       $a3, $fp, 0x90
    ctx->pc = 0x38c650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
label_38c654:
    // 0x38c654: 0xc04420c  jal         func_110830
label_38c658:
    if (ctx->pc == 0x38C658u) {
        ctx->pc = 0x38C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C654u;
        // 0x38c658: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C65Cu;
        goto label_38c65c;
    }
    ctx->pc = 0x38C654u;
    SET_GPR_U32(ctx, 31, 0x38C65Cu);
    ctx->pc = 0x38C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C654u;
    // 0x38c658: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x38C654u, 0x38C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C65Cu;
label_38c65c:
    // 0x38c65c: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
label_38c660:
    if (ctx->pc == 0x38C660u) {
        ctx->pc = 0x38C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C65Cu;
        // 0x38c660: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C664u;
        goto label_38c664;
    }
    ctx->pc = 0x38C65Cu;
    {
        const bool branch_taken_0x38c65c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C65Cu;
        // 0x38c660: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c65c) {
            ctx->pc = 0x38C73Cu;
            goto label_38c73c;
        }
    }
    ctx->pc = 0x38C664u;
label_38c664:
    // 0x38c664: 0x8e4311f8  lw          $v1, 0x11F8($s2)
    ctx->pc = 0x38c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38c668:
    // 0x38c668: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x38c668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38c66c:
    // 0x38c66c: 0x2332004  sllv        $a0, $s3, $s1
    ctx->pc = 0x38c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 17) & 0x1F));
label_38c670:
    // 0x38c670: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x38c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_38c674:
    // 0x38c674: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x38c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_38c678:
    // 0x38c678: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x38c678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_38c67c:
    // 0x38c67c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x38c67cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38c680:
    // 0x38c680: 0xafb20074  sw          $s2, 0x74($sp)
    ctx->pc = 0x38c680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 18));
label_38c684:
    // 0x38c684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38c684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c688:
    // 0x38c688: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x38c688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
label_38c68c:
    // 0x38c68c: 0xa7b10054  sh          $s1, 0x54($sp)
    ctx->pc = 0x38c68cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 17));
label_38c690:
    // 0x38c690: 0xa7a30056  sh          $v1, 0x56($sp)
    ctx->pc = 0x38c690u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 3));
label_38c694:
    // 0x38c694: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38c694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38c698:
    // 0x38c698: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x38c698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_38c69c:
    // 0x38c69c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x38c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_38c6a0:
    // 0x38c6a0: 0x40f809  jalr        $v0
label_38c6a4:
    if (ctx->pc == 0x38C6A4u) {
        ctx->pc = 0x38C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6A0u;
        // 0x38c6a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6A8u;
        goto label_38c6a8;
    }
    ctx->pc = 0x38C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C6A8u);
        ctx->pc = 0x38C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6A0u;
        // 0x38c6a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C6A0u, 0x38C6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C6A8u;
label_38c6a8:
    // 0x38c6a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38c6ac:
    // 0x38c6ac: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x38c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_38c6b0:
    // 0x38c6b0: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x38c6b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_38c6b4:
    // 0x38c6b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38c6b8:
    // 0x38c6b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_38c6bc:
    if (ctx->pc == 0x38C6BCu) {
        ctx->pc = 0x38C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B8u;
        // 0x38c6bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6C0u;
        goto label_38c6c0;
    }
    ctx->pc = 0x38C6B8u;
    {
        const bool branch_taken_0x38c6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B8u;
        // 0x38c6bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6b8) {
            ctx->pc = 0x38C73Cu;
            goto label_38c73c;
        }
    }
    ctx->pc = 0x38C6C0u;
label_38c6c0:
    // 0x38c6c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x38c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_38c6c4:
    // 0x38c6c4: 0x8e4311e0  lw          $v1, 0x11E0($s2)
    ctx->pc = 0x38c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_38c6c8:
    // 0x38c6c8: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
label_38c6cc:
    if (ctx->pc == 0x38C6CCu) {
        ctx->pc = 0x38C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6C8u;
        // 0x38c6cc: 0x3484fffe  ori         $a0, $a0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6D0u;
        goto label_38c6d0;
    }
    ctx->pc = 0x38C6C8u;
    {
        const bool branch_taken_0x38c6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x38C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6C8u;
        // 0x38c6cc: 0x3484fffe  ori         $a0, $a0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6c8) {
            ctx->pc = 0x38C6DCu;
            goto label_38c6dc;
        }
    }
    ctx->pc = 0x38C6D0u;
label_38c6d0:
    // 0x38c6d0: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x38c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_38c6d4:
    // 0x38c6d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_38c6d8:
    if (ctx->pc == 0x38C6D8u) {
        ctx->pc = 0x38C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6D4u;
        // 0x38c6d8: 0x3484fffe  ori         $a0, $a0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6DCu;
        goto label_38c6dc;
    }
    ctx->pc = 0x38C6D4u;
    {
        const bool branch_taken_0x38c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6D4u;
        // 0x38c6d8: 0x3484fffe  ori         $a0, $a0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6d4) {
            ctx->pc = 0x38C6ECu;
            goto label_38c6ec;
        }
    }
    ctx->pc = 0x38C6DCu;
label_38c6dc:
    // 0x38c6dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38c6e0:
    // 0x38c6e0: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x38c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_38c6e4:
    // 0x38c6e4: 0x3442ff7e  ori         $v0, $v0, 0xFF7E
    ctx->pc = 0x38c6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65406);
label_38c6e8:
    // 0x38c6e8: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x38c6e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_38c6ec:
    // 0x38c6ec: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x38c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_38c6f0:
    // 0x38c6f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x38c6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_38c6f4:
    // 0x38c6f4: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
label_38c6f8:
    if (ctx->pc == 0x38C6F8u) {
        ctx->pc = 0x38C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6F4u;
        // 0x38c6f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6FCu;
        goto label_38c6fc;
    }
    ctx->pc = 0x38C6F4u;
    {
        const bool branch_taken_0x38c6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x38C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6F4u;
        // 0x38c6f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6f4) {
            ctx->pc = 0x38C740u;
            goto label_38c740;
        }
    }
    ctx->pc = 0x38C6FCu;
label_38c6fc:
    // 0x38c6fc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x38c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_38c700:
    // 0x38c700: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x38c700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
label_38c704:
    // 0x38c704: 0xa7a20054  sh          $v0, 0x54($sp)
    ctx->pc = 0x38c704u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
label_38c708:
    // 0x38c708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c70c:
    // 0x38c70c: 0xa7a30056  sh          $v1, 0x56($sp)
    ctx->pc = 0x38c70cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 3));
label_38c710:
    // 0x38c710: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38c714:
    // 0x38c714: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x38c714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_38c718:
    // 0x38c718: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x38c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_38c71c:
    // 0x38c71c: 0x40f809  jalr        $v0
label_38c720:
    if (ctx->pc == 0x38C720u) {
        ctx->pc = 0x38C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C71Cu;
        // 0x38c720: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C724u;
        goto label_38c724;
    }
    ctx->pc = 0x38C71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C724u);
        ctx->pc = 0x38C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C71Cu;
        // 0x38c720: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C71Cu, 0x38C724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C724u;
label_38c724:
    // 0x38c724: 0x10000006  b           . + 4 + (0x6 << 2)
label_38c728:
    if (ctx->pc == 0x38C728u) {
        ctx->pc = 0x38C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C724u;
        // 0x38c728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C72Cu;
        goto label_38c72c;
    }
    ctx->pc = 0x38C724u;
    {
        const bool branch_taken_0x38c724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C724u;
        // 0x38c728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c724) {
            ctx->pc = 0x38C740u;
            goto label_38c740;
        }
    }
    ctx->pc = 0x38C72Cu;
label_38c72c:
    // 0x38c72c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38c730:
    // 0x38c730: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x38c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_38c734:
    // 0x38c734: 0xae4211f0  sw          $v0, 0x11F0($s2)
    ctx->pc = 0x38c734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4592), GPR_U32(ctx, 2));
label_38c738:
    // 0x38c738: 0xae4311f8  sw          $v1, 0x11F8($s2)
    ctx->pc = 0x38c738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4600), GPR_U32(ctx, 3));
label_38c73c:
    // 0x38c73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c740:
    // 0x38c740: 0x2222004  sllv        $a0, $v0, $s1
    ctx->pc = 0x38c740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_38c744:
    // 0x38c744: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x38c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_38c748:
    // 0x38c748: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x38c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_38c74c:
    // 0x38c74c: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_38c750:
    if (ctx->pc == 0x38C750u) {
        ctx->pc = 0x38C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C74Cu;
        // 0x38c750: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C754u;
        goto label_38c754;
    }
    ctx->pc = 0x38C74Cu;
    {
        const bool branch_taken_0x38c74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c74c) {
            ctx->pc = 0x38C750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C74Cu;
            // 0x38c750: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C788u;
            goto label_38c788;
        }
    }
    ctx->pc = 0x38C754u;
label_38c754:
    // 0x38c754: 0x8e4311ec  lw          $v1, 0x11EC($s2)
    ctx->pc = 0x38c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4588)));
label_38c758:
    // 0x38c758: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x38c758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_38c75c:
    // 0x38c75c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x38c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_38c760:
    // 0x38c760: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x38c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_38c764:
    // 0x38c764: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_38c768:
    if (ctx->pc == 0x38C768u) {
        ctx->pc = 0x38C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C764u;
        // 0x38c768: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C76Cu;
        goto label_38c76c;
    }
    ctx->pc = 0x38C764u;
    {
        const bool branch_taken_0x38c764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c764) {
            ctx->pc = 0x38C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C764u;
            // 0x38c768: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C788u;
            goto label_38c788;
        }
    }
    ctx->pc = 0x38C76Cu;
label_38c76c:
    // 0x38c76c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x38c76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38c770:
    // 0x38c770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38c774:
    // 0x38c774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c778:
    // 0x38c778: 0xae4211ec  sw          $v0, 0x11EC($s2)
    ctx->pc = 0x38c778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4588), GPR_U32(ctx, 2));
label_38c77c:
    // 0x38c77c: 0xc0e2a0c  jal         func_38A830
label_38c780:
    if (ctx->pc == 0x38C780u) {
        ctx->pc = 0x38C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C77Cu;
        // 0x38c780: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C784u;
        goto label_38c784;
    }
    ctx->pc = 0x38C77Cu;
    SET_GPR_U32(ctx, 31, 0x38C784u);
    ctx->pc = 0x38C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C77Cu;
    // 0x38c780: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A830u, 0x38C77Cu, 0x38C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C784u;
label_38c784:
    // 0x38c784: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38c784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_38c788:
    // 0x38c788: 0x2e22001e  sltiu       $v0, $s1, 0x1E
    ctx->pc = 0x38c788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_38c78c:
    // 0x38c78c: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
label_38c790:
    if (ctx->pc == 0x38C790u) {
        ctx->pc = 0x38C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C78Cu;
        // 0x38c790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C794u;
        goto label_38c794;
    }
    ctx->pc = 0x38C78Cu;
    {
        const bool branch_taken_0x38c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C78Cu;
        // 0x38c790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c78c) {
            ctx->pc = 0x38C54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c54c;
        }
    }
    ctx->pc = 0x38C794u;
label_38c794:
    // 0x38c794: 0x3c02ffd5  lui         $v0, 0xFFD5
    ctx->pc = 0x38c794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65493 << 16));
label_38c798:
    // 0x38c798: 0x34427f3f  ori         $v0, $v0, 0x7F3F
    ctx->pc = 0x38c798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32575);
label_38c79c:
    // 0x38c79c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x38c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_38c7a0:
    // 0x38c7a0: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x38c7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_38c7a4:
    // 0x38c7a4: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x38c7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_38c7a8:
    // 0x38c7a8: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x38c7a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_38c7ac:
    // 0x38c7ac: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x38c7acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_38c7b0:
    // 0x38c7b0: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x38c7b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_38c7b4:
    // 0x38c7b4: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x38c7b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_38c7b8:
    // 0x38c7b8: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x38c7b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_38c7bc:
    // 0x38c7bc: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x38c7bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38c7c0:
    // 0x38c7c0: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x38c7c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38c7c4:
    // 0x38c7c4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x38c7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_38c7c8:
    // 0x38c7c8: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x38c7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38c7cc:
    // 0x38c7cc: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x38c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c7d0:
    // 0x38c7d0: 0x3e00008  jr          $ra
label_38c7d4:
    if (ctx->pc == 0x38C7D4u) {
        ctx->pc = 0x38C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7D0u;
        // 0x38c7d4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7D8u;
        goto label_fallthrough_0x38c7d0;
    }
    ctx->pc = 0x38C7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7D0u;
        // 0x38c7d4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38c7d0:
    ctx->pc = 0x38C7D8u;
}
