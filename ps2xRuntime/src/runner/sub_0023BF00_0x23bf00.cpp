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

// Function: sub_0023BF00
// Address: 0x23bf00 - 0x23cd00
void sub_0023BF00_0x23bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BF00_0x23bf00");
#endif

    switch (ctx->pc) {
        case 0x23bf00u: goto label_23bf00;
        case 0x23bf04u: goto label_23bf04;
        case 0x23bf08u: goto label_23bf08;
        case 0x23bf0cu: goto label_23bf0c;
        case 0x23bf10u: goto label_23bf10;
        case 0x23bf14u: goto label_23bf14;
        case 0x23bf18u: goto label_23bf18;
        case 0x23bf1cu: goto label_23bf1c;
        case 0x23bf20u: goto label_23bf20;
        case 0x23bf24u: goto label_23bf24;
        case 0x23bf28u: goto label_23bf28;
        case 0x23bf2cu: goto label_23bf2c;
        case 0x23bf30u: goto label_23bf30;
        case 0x23bf34u: goto label_23bf34;
        case 0x23bf38u: goto label_23bf38;
        case 0x23bf3cu: goto label_23bf3c;
        case 0x23bf40u: goto label_23bf40;
        case 0x23bf44u: goto label_23bf44;
        case 0x23bf48u: goto label_23bf48;
        case 0x23bf4cu: goto label_23bf4c;
        case 0x23bf50u: goto label_23bf50;
        case 0x23bf54u: goto label_23bf54;
        case 0x23bf58u: goto label_23bf58;
        case 0x23bf5cu: goto label_23bf5c;
        case 0x23bf60u: goto label_23bf60;
        case 0x23bf64u: goto label_23bf64;
        case 0x23bf68u: goto label_23bf68;
        case 0x23bf6cu: goto label_23bf6c;
        case 0x23bf70u: goto label_23bf70;
        case 0x23bf74u: goto label_23bf74;
        case 0x23bf78u: goto label_23bf78;
        case 0x23bf7cu: goto label_23bf7c;
        case 0x23bf80u: goto label_23bf80;
        case 0x23bf84u: goto label_23bf84;
        case 0x23bf88u: goto label_23bf88;
        case 0x23bf8cu: goto label_23bf8c;
        case 0x23bf90u: goto label_23bf90;
        case 0x23bf94u: goto label_23bf94;
        case 0x23bf98u: goto label_23bf98;
        case 0x23bf9cu: goto label_23bf9c;
        case 0x23bfa0u: goto label_23bfa0;
        case 0x23bfa4u: goto label_23bfa4;
        case 0x23bfa8u: goto label_23bfa8;
        case 0x23bfacu: goto label_23bfac;
        case 0x23bfb0u: goto label_23bfb0;
        case 0x23bfb4u: goto label_23bfb4;
        case 0x23bfb8u: goto label_23bfb8;
        case 0x23bfbcu: goto label_23bfbc;
        case 0x23bfc0u: goto label_23bfc0;
        case 0x23bfc4u: goto label_23bfc4;
        case 0x23bfc8u: goto label_23bfc8;
        case 0x23bfccu: goto label_23bfcc;
        case 0x23bfd0u: goto label_23bfd0;
        case 0x23bfd4u: goto label_23bfd4;
        case 0x23bfd8u: goto label_23bfd8;
        case 0x23bfdcu: goto label_23bfdc;
        case 0x23bfe0u: goto label_23bfe0;
        case 0x23bfe4u: goto label_23bfe4;
        case 0x23bfe8u: goto label_23bfe8;
        case 0x23bfecu: goto label_23bfec;
        case 0x23bff0u: goto label_23bff0;
        case 0x23bff4u: goto label_23bff4;
        case 0x23bff8u: goto label_23bff8;
        case 0x23bffcu: goto label_23bffc;
        case 0x23c000u: goto label_23c000;
        case 0x23c004u: goto label_23c004;
        case 0x23c008u: goto label_23c008;
        case 0x23c00cu: goto label_23c00c;
        case 0x23c010u: goto label_23c010;
        case 0x23c014u: goto label_23c014;
        case 0x23c018u: goto label_23c018;
        case 0x23c01cu: goto label_23c01c;
        case 0x23c020u: goto label_23c020;
        case 0x23c024u: goto label_23c024;
        case 0x23c028u: goto label_23c028;
        case 0x23c02cu: goto label_23c02c;
        case 0x23c030u: goto label_23c030;
        case 0x23c034u: goto label_23c034;
        case 0x23c038u: goto label_23c038;
        case 0x23c03cu: goto label_23c03c;
        case 0x23c040u: goto label_23c040;
        case 0x23c044u: goto label_23c044;
        case 0x23c048u: goto label_23c048;
        case 0x23c04cu: goto label_23c04c;
        case 0x23c050u: goto label_23c050;
        case 0x23c054u: goto label_23c054;
        case 0x23c058u: goto label_23c058;
        case 0x23c05cu: goto label_23c05c;
        case 0x23c060u: goto label_23c060;
        case 0x23c064u: goto label_23c064;
        case 0x23c068u: goto label_23c068;
        case 0x23c06cu: goto label_23c06c;
        case 0x23c070u: goto label_23c070;
        case 0x23c074u: goto label_23c074;
        case 0x23c078u: goto label_23c078;
        case 0x23c07cu: goto label_23c07c;
        case 0x23c080u: goto label_23c080;
        case 0x23c084u: goto label_23c084;
        case 0x23c088u: goto label_23c088;
        case 0x23c08cu: goto label_23c08c;
        case 0x23c090u: goto label_23c090;
        case 0x23c094u: goto label_23c094;
        case 0x23c098u: goto label_23c098;
        case 0x23c09cu: goto label_23c09c;
        case 0x23c0a0u: goto label_23c0a0;
        case 0x23c0a4u: goto label_23c0a4;
        case 0x23c0a8u: goto label_23c0a8;
        case 0x23c0acu: goto label_23c0ac;
        case 0x23c0b0u: goto label_23c0b0;
        case 0x23c0b4u: goto label_23c0b4;
        case 0x23c0b8u: goto label_23c0b8;
        case 0x23c0bcu: goto label_23c0bc;
        case 0x23c0c0u: goto label_23c0c0;
        case 0x23c0c4u: goto label_23c0c4;
        case 0x23c0c8u: goto label_23c0c8;
        case 0x23c0ccu: goto label_23c0cc;
        case 0x23c0d0u: goto label_23c0d0;
        case 0x23c0d4u: goto label_23c0d4;
        case 0x23c0d8u: goto label_23c0d8;
        case 0x23c0dcu: goto label_23c0dc;
        case 0x23c0e0u: goto label_23c0e0;
        case 0x23c0e4u: goto label_23c0e4;
        case 0x23c0e8u: goto label_23c0e8;
        case 0x23c0ecu: goto label_23c0ec;
        case 0x23c0f0u: goto label_23c0f0;
        case 0x23c0f4u: goto label_23c0f4;
        case 0x23c0f8u: goto label_23c0f8;
        case 0x23c0fcu: goto label_23c0fc;
        case 0x23c100u: goto label_23c100;
        case 0x23c104u: goto label_23c104;
        case 0x23c108u: goto label_23c108;
        case 0x23c10cu: goto label_23c10c;
        case 0x23c110u: goto label_23c110;
        case 0x23c114u: goto label_23c114;
        case 0x23c118u: goto label_23c118;
        case 0x23c11cu: goto label_23c11c;
        case 0x23c120u: goto label_23c120;
        case 0x23c124u: goto label_23c124;
        case 0x23c128u: goto label_23c128;
        case 0x23c12cu: goto label_23c12c;
        case 0x23c130u: goto label_23c130;
        case 0x23c134u: goto label_23c134;
        case 0x23c138u: goto label_23c138;
        case 0x23c13cu: goto label_23c13c;
        case 0x23c140u: goto label_23c140;
        case 0x23c144u: goto label_23c144;
        case 0x23c148u: goto label_23c148;
        case 0x23c14cu: goto label_23c14c;
        case 0x23c150u: goto label_23c150;
        case 0x23c154u: goto label_23c154;
        case 0x23c158u: goto label_23c158;
        case 0x23c15cu: goto label_23c15c;
        case 0x23c160u: goto label_23c160;
        case 0x23c164u: goto label_23c164;
        case 0x23c168u: goto label_23c168;
        case 0x23c16cu: goto label_23c16c;
        case 0x23c170u: goto label_23c170;
        case 0x23c174u: goto label_23c174;
        case 0x23c178u: goto label_23c178;
        case 0x23c17cu: goto label_23c17c;
        case 0x23c180u: goto label_23c180;
        case 0x23c184u: goto label_23c184;
        case 0x23c188u: goto label_23c188;
        case 0x23c18cu: goto label_23c18c;
        case 0x23c190u: goto label_23c190;
        case 0x23c194u: goto label_23c194;
        case 0x23c198u: goto label_23c198;
        case 0x23c19cu: goto label_23c19c;
        case 0x23c1a0u: goto label_23c1a0;
        case 0x23c1a4u: goto label_23c1a4;
        case 0x23c1a8u: goto label_23c1a8;
        case 0x23c1acu: goto label_23c1ac;
        case 0x23c1b0u: goto label_23c1b0;
        case 0x23c1b4u: goto label_23c1b4;
        case 0x23c1b8u: goto label_23c1b8;
        case 0x23c1bcu: goto label_23c1bc;
        case 0x23c1c0u: goto label_23c1c0;
        case 0x23c1c4u: goto label_23c1c4;
        case 0x23c1c8u: goto label_23c1c8;
        case 0x23c1ccu: goto label_23c1cc;
        case 0x23c1d0u: goto label_23c1d0;
        case 0x23c1d4u: goto label_23c1d4;
        case 0x23c1d8u: goto label_23c1d8;
        case 0x23c1dcu: goto label_23c1dc;
        case 0x23c1e0u: goto label_23c1e0;
        case 0x23c1e4u: goto label_23c1e4;
        case 0x23c1e8u: goto label_23c1e8;
        case 0x23c1ecu: goto label_23c1ec;
        case 0x23c1f0u: goto label_23c1f0;
        case 0x23c1f4u: goto label_23c1f4;
        case 0x23c1f8u: goto label_23c1f8;
        case 0x23c1fcu: goto label_23c1fc;
        case 0x23c200u: goto label_23c200;
        case 0x23c204u: goto label_23c204;
        case 0x23c208u: goto label_23c208;
        case 0x23c20cu: goto label_23c20c;
        case 0x23c210u: goto label_23c210;
        case 0x23c214u: goto label_23c214;
        case 0x23c218u: goto label_23c218;
        case 0x23c21cu: goto label_23c21c;
        case 0x23c220u: goto label_23c220;
        case 0x23c224u: goto label_23c224;
        case 0x23c228u: goto label_23c228;
        case 0x23c22cu: goto label_23c22c;
        case 0x23c230u: goto label_23c230;
        case 0x23c234u: goto label_23c234;
        case 0x23c238u: goto label_23c238;
        case 0x23c23cu: goto label_23c23c;
        case 0x23c240u: goto label_23c240;
        case 0x23c244u: goto label_23c244;
        case 0x23c248u: goto label_23c248;
        case 0x23c24cu: goto label_23c24c;
        case 0x23c250u: goto label_23c250;
        case 0x23c254u: goto label_23c254;
        case 0x23c258u: goto label_23c258;
        case 0x23c25cu: goto label_23c25c;
        case 0x23c260u: goto label_23c260;
        case 0x23c264u: goto label_23c264;
        case 0x23c268u: goto label_23c268;
        case 0x23c26cu: goto label_23c26c;
        case 0x23c270u: goto label_23c270;
        case 0x23c274u: goto label_23c274;
        case 0x23c278u: goto label_23c278;
        case 0x23c27cu: goto label_23c27c;
        case 0x23c280u: goto label_23c280;
        case 0x23c284u: goto label_23c284;
        case 0x23c288u: goto label_23c288;
        case 0x23c28cu: goto label_23c28c;
        case 0x23c290u: goto label_23c290;
        case 0x23c294u: goto label_23c294;
        case 0x23c298u: goto label_23c298;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a0u: goto label_23c2a0;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2a8u: goto label_23c2a8;
        case 0x23c2acu: goto label_23c2ac;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2b4u: goto label_23c2b4;
        case 0x23c2b8u: goto label_23c2b8;
        case 0x23c2bcu: goto label_23c2bc;
        case 0x23c2c0u: goto label_23c2c0;
        case 0x23c2c4u: goto label_23c2c4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2ccu: goto label_23c2cc;
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        case 0x23c360u: goto label_23c360;
        case 0x23c364u: goto label_23c364;
        case 0x23c368u: goto label_23c368;
        case 0x23c36cu: goto label_23c36c;
        case 0x23c370u: goto label_23c370;
        case 0x23c374u: goto label_23c374;
        case 0x23c378u: goto label_23c378;
        case 0x23c37cu: goto label_23c37c;
        case 0x23c380u: goto label_23c380;
        case 0x23c384u: goto label_23c384;
        case 0x23c388u: goto label_23c388;
        case 0x23c38cu: goto label_23c38c;
        case 0x23c390u: goto label_23c390;
        case 0x23c394u: goto label_23c394;
        case 0x23c398u: goto label_23c398;
        case 0x23c39cu: goto label_23c39c;
        case 0x23c3a0u: goto label_23c3a0;
        case 0x23c3a4u: goto label_23c3a4;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3acu: goto label_23c3ac;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3b4u: goto label_23c3b4;
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3bcu: goto label_23c3bc;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3c4u: goto label_23c3c4;
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3ccu: goto label_23c3cc;
        case 0x23c3d0u: goto label_23c3d0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c3d8u: goto label_23c3d8;
        case 0x23c3dcu: goto label_23c3dc;
        case 0x23c3e0u: goto label_23c3e0;
        case 0x23c3e4u: goto label_23c3e4;
        case 0x23c3e8u: goto label_23c3e8;
        case 0x23c3ecu: goto label_23c3ec;
        case 0x23c3f0u: goto label_23c3f0;
        case 0x23c3f4u: goto label_23c3f4;
        case 0x23c3f8u: goto label_23c3f8;
        case 0x23c3fcu: goto label_23c3fc;
        case 0x23c400u: goto label_23c400;
        case 0x23c404u: goto label_23c404;
        case 0x23c408u: goto label_23c408;
        case 0x23c40cu: goto label_23c40c;
        case 0x23c410u: goto label_23c410;
        case 0x23c414u: goto label_23c414;
        case 0x23c418u: goto label_23c418;
        case 0x23c41cu: goto label_23c41c;
        case 0x23c420u: goto label_23c420;
        case 0x23c424u: goto label_23c424;
        case 0x23c428u: goto label_23c428;
        case 0x23c42cu: goto label_23c42c;
        case 0x23c430u: goto label_23c430;
        case 0x23c434u: goto label_23c434;
        case 0x23c438u: goto label_23c438;
        case 0x23c43cu: goto label_23c43c;
        case 0x23c440u: goto label_23c440;
        case 0x23c444u: goto label_23c444;
        case 0x23c448u: goto label_23c448;
        case 0x23c44cu: goto label_23c44c;
        case 0x23c450u: goto label_23c450;
        case 0x23c454u: goto label_23c454;
        case 0x23c458u: goto label_23c458;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c460u: goto label_23c460;
        case 0x23c464u: goto label_23c464;
        case 0x23c468u: goto label_23c468;
        case 0x23c46cu: goto label_23c46c;
        case 0x23c470u: goto label_23c470;
        case 0x23c474u: goto label_23c474;
        case 0x23c478u: goto label_23c478;
        case 0x23c47cu: goto label_23c47c;
        case 0x23c480u: goto label_23c480;
        case 0x23c484u: goto label_23c484;
        case 0x23c488u: goto label_23c488;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c490u: goto label_23c490;
        case 0x23c494u: goto label_23c494;
        case 0x23c498u: goto label_23c498;
        case 0x23c49cu: goto label_23c49c;
        case 0x23c4a0u: goto label_23c4a0;
        case 0x23c4a4u: goto label_23c4a4;
        case 0x23c4a8u: goto label_23c4a8;
        case 0x23c4acu: goto label_23c4ac;
        case 0x23c4b0u: goto label_23c4b0;
        case 0x23c4b4u: goto label_23c4b4;
        case 0x23c4b8u: goto label_23c4b8;
        case 0x23c4bcu: goto label_23c4bc;
        case 0x23c4c0u: goto label_23c4c0;
        case 0x23c4c4u: goto label_23c4c4;
        case 0x23c4c8u: goto label_23c4c8;
        case 0x23c4ccu: goto label_23c4cc;
        case 0x23c4d0u: goto label_23c4d0;
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4d8u: goto label_23c4d8;
        case 0x23c4dcu: goto label_23c4dc;
        case 0x23c4e0u: goto label_23c4e0;
        case 0x23c4e4u: goto label_23c4e4;
        case 0x23c4e8u: goto label_23c4e8;
        case 0x23c4ecu: goto label_23c4ec;
        case 0x23c4f0u: goto label_23c4f0;
        case 0x23c4f4u: goto label_23c4f4;
        case 0x23c4f8u: goto label_23c4f8;
        case 0x23c4fcu: goto label_23c4fc;
        case 0x23c500u: goto label_23c500;
        case 0x23c504u: goto label_23c504;
        case 0x23c508u: goto label_23c508;
        case 0x23c50cu: goto label_23c50c;
        case 0x23c510u: goto label_23c510;
        case 0x23c514u: goto label_23c514;
        case 0x23c518u: goto label_23c518;
        case 0x23c51cu: goto label_23c51c;
        case 0x23c520u: goto label_23c520;
        case 0x23c524u: goto label_23c524;
        case 0x23c528u: goto label_23c528;
        case 0x23c52cu: goto label_23c52c;
        case 0x23c530u: goto label_23c530;
        case 0x23c534u: goto label_23c534;
        case 0x23c538u: goto label_23c538;
        case 0x23c53cu: goto label_23c53c;
        case 0x23c540u: goto label_23c540;
        case 0x23c544u: goto label_23c544;
        case 0x23c548u: goto label_23c548;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c550u: goto label_23c550;
        case 0x23c554u: goto label_23c554;
        case 0x23c558u: goto label_23c558;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c560u: goto label_23c560;
        case 0x23c564u: goto label_23c564;
        case 0x23c568u: goto label_23c568;
        case 0x23c56cu: goto label_23c56c;
        case 0x23c570u: goto label_23c570;
        case 0x23c574u: goto label_23c574;
        case 0x23c578u: goto label_23c578;
        case 0x23c57cu: goto label_23c57c;
        case 0x23c580u: goto label_23c580;
        case 0x23c584u: goto label_23c584;
        case 0x23c588u: goto label_23c588;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c590u: goto label_23c590;
        case 0x23c594u: goto label_23c594;
        case 0x23c598u: goto label_23c598;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5a8u: goto label_23c5a8;
        case 0x23c5acu: goto label_23c5ac;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5b8u: goto label_23c5b8;
        case 0x23c5bcu: goto label_23c5bc;
        case 0x23c5c0u: goto label_23c5c0;
        case 0x23c5c4u: goto label_23c5c4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5ccu: goto label_23c5cc;
        case 0x23c5d0u: goto label_23c5d0;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5d8u: goto label_23c5d8;
        case 0x23c5dcu: goto label_23c5dc;
        case 0x23c5e0u: goto label_23c5e0;
        case 0x23c5e4u: goto label_23c5e4;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c5ecu: goto label_23c5ec;
        case 0x23c5f0u: goto label_23c5f0;
        case 0x23c5f4u: goto label_23c5f4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c5fcu: goto label_23c5fc;
        case 0x23c600u: goto label_23c600;
        case 0x23c604u: goto label_23c604;
        case 0x23c608u: goto label_23c608;
        case 0x23c60cu: goto label_23c60c;
        case 0x23c610u: goto label_23c610;
        case 0x23c614u: goto label_23c614;
        case 0x23c618u: goto label_23c618;
        case 0x23c61cu: goto label_23c61c;
        case 0x23c620u: goto label_23c620;
        case 0x23c624u: goto label_23c624;
        case 0x23c628u: goto label_23c628;
        case 0x23c62cu: goto label_23c62c;
        case 0x23c630u: goto label_23c630;
        case 0x23c634u: goto label_23c634;
        case 0x23c638u: goto label_23c638;
        case 0x23c63cu: goto label_23c63c;
        case 0x23c640u: goto label_23c640;
        case 0x23c644u: goto label_23c644;
        case 0x23c648u: goto label_23c648;
        case 0x23c64cu: goto label_23c64c;
        case 0x23c650u: goto label_23c650;
        case 0x23c654u: goto label_23c654;
        case 0x23c658u: goto label_23c658;
        case 0x23c65cu: goto label_23c65c;
        case 0x23c660u: goto label_23c660;
        case 0x23c664u: goto label_23c664;
        case 0x23c668u: goto label_23c668;
        case 0x23c66cu: goto label_23c66c;
        case 0x23c670u: goto label_23c670;
        case 0x23c674u: goto label_23c674;
        case 0x23c678u: goto label_23c678;
        case 0x23c67cu: goto label_23c67c;
        case 0x23c680u: goto label_23c680;
        case 0x23c684u: goto label_23c684;
        case 0x23c688u: goto label_23c688;
        case 0x23c68cu: goto label_23c68c;
        case 0x23c690u: goto label_23c690;
        case 0x23c694u: goto label_23c694;
        case 0x23c698u: goto label_23c698;
        case 0x23c69cu: goto label_23c69c;
        case 0x23c6a0u: goto label_23c6a0;
        case 0x23c6a4u: goto label_23c6a4;
        case 0x23c6a8u: goto label_23c6a8;
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c6b0u: goto label_23c6b0;
        case 0x23c6b4u: goto label_23c6b4;
        case 0x23c6b8u: goto label_23c6b8;
        case 0x23c6bcu: goto label_23c6bc;
        case 0x23c6c0u: goto label_23c6c0;
        case 0x23c6c4u: goto label_23c6c4;
        case 0x23c6c8u: goto label_23c6c8;
        case 0x23c6ccu: goto label_23c6cc;
        case 0x23c6d0u: goto label_23c6d0;
        case 0x23c6d4u: goto label_23c6d4;
        case 0x23c6d8u: goto label_23c6d8;
        case 0x23c6dcu: goto label_23c6dc;
        case 0x23c6e0u: goto label_23c6e0;
        case 0x23c6e4u: goto label_23c6e4;
        case 0x23c6e8u: goto label_23c6e8;
        case 0x23c6ecu: goto label_23c6ec;
        case 0x23c6f0u: goto label_23c6f0;
        case 0x23c6f4u: goto label_23c6f4;
        case 0x23c6f8u: goto label_23c6f8;
        case 0x23c6fcu: goto label_23c6fc;
        case 0x23c700u: goto label_23c700;
        case 0x23c704u: goto label_23c704;
        case 0x23c708u: goto label_23c708;
        case 0x23c70cu: goto label_23c70c;
        case 0x23c710u: goto label_23c710;
        case 0x23c714u: goto label_23c714;
        case 0x23c718u: goto label_23c718;
        case 0x23c71cu: goto label_23c71c;
        case 0x23c720u: goto label_23c720;
        case 0x23c724u: goto label_23c724;
        case 0x23c728u: goto label_23c728;
        case 0x23c72cu: goto label_23c72c;
        case 0x23c730u: goto label_23c730;
        case 0x23c734u: goto label_23c734;
        case 0x23c738u: goto label_23c738;
        case 0x23c73cu: goto label_23c73c;
        case 0x23c740u: goto label_23c740;
        case 0x23c744u: goto label_23c744;
        case 0x23c748u: goto label_23c748;
        case 0x23c74cu: goto label_23c74c;
        case 0x23c750u: goto label_23c750;
        case 0x23c754u: goto label_23c754;
        case 0x23c758u: goto label_23c758;
        case 0x23c75cu: goto label_23c75c;
        case 0x23c760u: goto label_23c760;
        case 0x23c764u: goto label_23c764;
        case 0x23c768u: goto label_23c768;
        case 0x23c76cu: goto label_23c76c;
        case 0x23c770u: goto label_23c770;
        case 0x23c774u: goto label_23c774;
        case 0x23c778u: goto label_23c778;
        case 0x23c77cu: goto label_23c77c;
        case 0x23c780u: goto label_23c780;
        case 0x23c784u: goto label_23c784;
        case 0x23c788u: goto label_23c788;
        case 0x23c78cu: goto label_23c78c;
        case 0x23c790u: goto label_23c790;
        case 0x23c794u: goto label_23c794;
        case 0x23c798u: goto label_23c798;
        case 0x23c79cu: goto label_23c79c;
        case 0x23c7a0u: goto label_23c7a0;
        case 0x23c7a4u: goto label_23c7a4;
        case 0x23c7a8u: goto label_23c7a8;
        case 0x23c7acu: goto label_23c7ac;
        case 0x23c7b0u: goto label_23c7b0;
        case 0x23c7b4u: goto label_23c7b4;
        case 0x23c7b8u: goto label_23c7b8;
        case 0x23c7bcu: goto label_23c7bc;
        case 0x23c7c0u: goto label_23c7c0;
        case 0x23c7c4u: goto label_23c7c4;
        case 0x23c7c8u: goto label_23c7c8;
        case 0x23c7ccu: goto label_23c7cc;
        case 0x23c7d0u: goto label_23c7d0;
        case 0x23c7d4u: goto label_23c7d4;
        case 0x23c7d8u: goto label_23c7d8;
        case 0x23c7dcu: goto label_23c7dc;
        case 0x23c7e0u: goto label_23c7e0;
        case 0x23c7e4u: goto label_23c7e4;
        case 0x23c7e8u: goto label_23c7e8;
        case 0x23c7ecu: goto label_23c7ec;
        case 0x23c7f0u: goto label_23c7f0;
        case 0x23c7f4u: goto label_23c7f4;
        case 0x23c7f8u: goto label_23c7f8;
        case 0x23c7fcu: goto label_23c7fc;
        case 0x23c800u: goto label_23c800;
        case 0x23c804u: goto label_23c804;
        case 0x23c808u: goto label_23c808;
        case 0x23c80cu: goto label_23c80c;
        case 0x23c810u: goto label_23c810;
        case 0x23c814u: goto label_23c814;
        case 0x23c818u: goto label_23c818;
        case 0x23c81cu: goto label_23c81c;
        case 0x23c820u: goto label_23c820;
        case 0x23c824u: goto label_23c824;
        case 0x23c828u: goto label_23c828;
        case 0x23c82cu: goto label_23c82c;
        case 0x23c830u: goto label_23c830;
        case 0x23c834u: goto label_23c834;
        case 0x23c838u: goto label_23c838;
        case 0x23c83cu: goto label_23c83c;
        case 0x23c840u: goto label_23c840;
        case 0x23c844u: goto label_23c844;
        case 0x23c848u: goto label_23c848;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c850u: goto label_23c850;
        case 0x23c854u: goto label_23c854;
        case 0x23c858u: goto label_23c858;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c860u: goto label_23c860;
        case 0x23c864u: goto label_23c864;
        case 0x23c868u: goto label_23c868;
        case 0x23c86cu: goto label_23c86c;
        case 0x23c870u: goto label_23c870;
        case 0x23c874u: goto label_23c874;
        case 0x23c878u: goto label_23c878;
        case 0x23c87cu: goto label_23c87c;
        case 0x23c880u: goto label_23c880;
        case 0x23c884u: goto label_23c884;
        case 0x23c888u: goto label_23c888;
        case 0x23c88cu: goto label_23c88c;
        case 0x23c890u: goto label_23c890;
        case 0x23c894u: goto label_23c894;
        case 0x23c898u: goto label_23c898;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8a0u: goto label_23c8a0;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8a8u: goto label_23c8a8;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b0u: goto label_23c8b0;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8bcu: goto label_23c8bc;
        case 0x23c8c0u: goto label_23c8c0;
        case 0x23c8c4u: goto label_23c8c4;
        case 0x23c8c8u: goto label_23c8c8;
        case 0x23c8ccu: goto label_23c8cc;
        case 0x23c8d0u: goto label_23c8d0;
        case 0x23c8d4u: goto label_23c8d4;
        case 0x23c8d8u: goto label_23c8d8;
        case 0x23c8dcu: goto label_23c8dc;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23c8e4u: goto label_23c8e4;
        case 0x23c8e8u: goto label_23c8e8;
        case 0x23c8ecu: goto label_23c8ec;
        case 0x23c8f0u: goto label_23c8f0;
        case 0x23c8f4u: goto label_23c8f4;
        case 0x23c8f8u: goto label_23c8f8;
        case 0x23c8fcu: goto label_23c8fc;
        case 0x23c900u: goto label_23c900;
        case 0x23c904u: goto label_23c904;
        case 0x23c908u: goto label_23c908;
        case 0x23c90cu: goto label_23c90c;
        case 0x23c910u: goto label_23c910;
        case 0x23c914u: goto label_23c914;
        case 0x23c918u: goto label_23c918;
        case 0x23c91cu: goto label_23c91c;
        case 0x23c920u: goto label_23c920;
        case 0x23c924u: goto label_23c924;
        case 0x23c928u: goto label_23c928;
        case 0x23c92cu: goto label_23c92c;
        case 0x23c930u: goto label_23c930;
        case 0x23c934u: goto label_23c934;
        case 0x23c938u: goto label_23c938;
        case 0x23c93cu: goto label_23c93c;
        case 0x23c940u: goto label_23c940;
        case 0x23c944u: goto label_23c944;
        case 0x23c948u: goto label_23c948;
        case 0x23c94cu: goto label_23c94c;
        case 0x23c950u: goto label_23c950;
        case 0x23c954u: goto label_23c954;
        case 0x23c958u: goto label_23c958;
        case 0x23c95cu: goto label_23c95c;
        case 0x23c960u: goto label_23c960;
        case 0x23c964u: goto label_23c964;
        case 0x23c968u: goto label_23c968;
        case 0x23c96cu: goto label_23c96c;
        case 0x23c970u: goto label_23c970;
        case 0x23c974u: goto label_23c974;
        case 0x23c978u: goto label_23c978;
        case 0x23c97cu: goto label_23c97c;
        case 0x23c980u: goto label_23c980;
        case 0x23c984u: goto label_23c984;
        case 0x23c988u: goto label_23c988;
        case 0x23c98cu: goto label_23c98c;
        case 0x23c990u: goto label_23c990;
        case 0x23c994u: goto label_23c994;
        case 0x23c998u: goto label_23c998;
        case 0x23c99cu: goto label_23c99c;
        case 0x23c9a0u: goto label_23c9a0;
        case 0x23c9a4u: goto label_23c9a4;
        case 0x23c9a8u: goto label_23c9a8;
        case 0x23c9acu: goto label_23c9ac;
        case 0x23c9b0u: goto label_23c9b0;
        case 0x23c9b4u: goto label_23c9b4;
        case 0x23c9b8u: goto label_23c9b8;
        case 0x23c9bcu: goto label_23c9bc;
        case 0x23c9c0u: goto label_23c9c0;
        case 0x23c9c4u: goto label_23c9c4;
        case 0x23c9c8u: goto label_23c9c8;
        case 0x23c9ccu: goto label_23c9cc;
        case 0x23c9d0u: goto label_23c9d0;
        case 0x23c9d4u: goto label_23c9d4;
        case 0x23c9d8u: goto label_23c9d8;
        case 0x23c9dcu: goto label_23c9dc;
        case 0x23c9e0u: goto label_23c9e0;
        case 0x23c9e4u: goto label_23c9e4;
        case 0x23c9e8u: goto label_23c9e8;
        case 0x23c9ecu: goto label_23c9ec;
        case 0x23c9f0u: goto label_23c9f0;
        case 0x23c9f4u: goto label_23c9f4;
        case 0x23c9f8u: goto label_23c9f8;
        case 0x23c9fcu: goto label_23c9fc;
        case 0x23ca00u: goto label_23ca00;
        case 0x23ca04u: goto label_23ca04;
        case 0x23ca08u: goto label_23ca08;
        case 0x23ca0cu: goto label_23ca0c;
        case 0x23ca10u: goto label_23ca10;
        case 0x23ca14u: goto label_23ca14;
        case 0x23ca18u: goto label_23ca18;
        case 0x23ca1cu: goto label_23ca1c;
        case 0x23ca20u: goto label_23ca20;
        case 0x23ca24u: goto label_23ca24;
        case 0x23ca28u: goto label_23ca28;
        case 0x23ca2cu: goto label_23ca2c;
        case 0x23ca30u: goto label_23ca30;
        case 0x23ca34u: goto label_23ca34;
        case 0x23ca38u: goto label_23ca38;
        case 0x23ca3cu: goto label_23ca3c;
        case 0x23ca40u: goto label_23ca40;
        case 0x23ca44u: goto label_23ca44;
        case 0x23ca48u: goto label_23ca48;
        case 0x23ca4cu: goto label_23ca4c;
        case 0x23ca50u: goto label_23ca50;
        case 0x23ca54u: goto label_23ca54;
        case 0x23ca58u: goto label_23ca58;
        case 0x23ca5cu: goto label_23ca5c;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca64u: goto label_23ca64;
        case 0x23ca68u: goto label_23ca68;
        case 0x23ca6cu: goto label_23ca6c;
        case 0x23ca70u: goto label_23ca70;
        case 0x23ca74u: goto label_23ca74;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca7cu: goto label_23ca7c;
        case 0x23ca80u: goto label_23ca80;
        case 0x23ca84u: goto label_23ca84;
        case 0x23ca88u: goto label_23ca88;
        case 0x23ca8cu: goto label_23ca8c;
        case 0x23ca90u: goto label_23ca90;
        case 0x23ca94u: goto label_23ca94;
        case 0x23ca98u: goto label_23ca98;
        case 0x23ca9cu: goto label_23ca9c;
        case 0x23caa0u: goto label_23caa0;
        case 0x23caa4u: goto label_23caa4;
        case 0x23caa8u: goto label_23caa8;
        case 0x23caacu: goto label_23caac;
        case 0x23cab0u: goto label_23cab0;
        case 0x23cab4u: goto label_23cab4;
        case 0x23cab8u: goto label_23cab8;
        case 0x23cabcu: goto label_23cabc;
        case 0x23cac0u: goto label_23cac0;
        case 0x23cac4u: goto label_23cac4;
        case 0x23cac8u: goto label_23cac8;
        case 0x23caccu: goto label_23cacc;
        case 0x23cad0u: goto label_23cad0;
        case 0x23cad4u: goto label_23cad4;
        case 0x23cad8u: goto label_23cad8;
        case 0x23cadcu: goto label_23cadc;
        case 0x23cae0u: goto label_23cae0;
        case 0x23cae4u: goto label_23cae4;
        case 0x23cae8u: goto label_23cae8;
        case 0x23caecu: goto label_23caec;
        case 0x23caf0u: goto label_23caf0;
        case 0x23caf4u: goto label_23caf4;
        case 0x23caf8u: goto label_23caf8;
        case 0x23cafcu: goto label_23cafc;
        case 0x23cb00u: goto label_23cb00;
        case 0x23cb04u: goto label_23cb04;
        case 0x23cb08u: goto label_23cb08;
        case 0x23cb0cu: goto label_23cb0c;
        case 0x23cb10u: goto label_23cb10;
        case 0x23cb14u: goto label_23cb14;
        case 0x23cb18u: goto label_23cb18;
        case 0x23cb1cu: goto label_23cb1c;
        case 0x23cb20u: goto label_23cb20;
        case 0x23cb24u: goto label_23cb24;
        case 0x23cb28u: goto label_23cb28;
        case 0x23cb2cu: goto label_23cb2c;
        case 0x23cb30u: goto label_23cb30;
        case 0x23cb34u: goto label_23cb34;
        case 0x23cb38u: goto label_23cb38;
        case 0x23cb3cu: goto label_23cb3c;
        case 0x23cb40u: goto label_23cb40;
        case 0x23cb44u: goto label_23cb44;
        case 0x23cb48u: goto label_23cb48;
        case 0x23cb4cu: goto label_23cb4c;
        case 0x23cb50u: goto label_23cb50;
        case 0x23cb54u: goto label_23cb54;
        case 0x23cb58u: goto label_23cb58;
        case 0x23cb5cu: goto label_23cb5c;
        case 0x23cb60u: goto label_23cb60;
        case 0x23cb64u: goto label_23cb64;
        case 0x23cb68u: goto label_23cb68;
        case 0x23cb6cu: goto label_23cb6c;
        case 0x23cb70u: goto label_23cb70;
        case 0x23cb74u: goto label_23cb74;
        case 0x23cb78u: goto label_23cb78;
        case 0x23cb7cu: goto label_23cb7c;
        case 0x23cb80u: goto label_23cb80;
        case 0x23cb84u: goto label_23cb84;
        case 0x23cb88u: goto label_23cb88;
        case 0x23cb8cu: goto label_23cb8c;
        case 0x23cb90u: goto label_23cb90;
        case 0x23cb94u: goto label_23cb94;
        case 0x23cb98u: goto label_23cb98;
        case 0x23cb9cu: goto label_23cb9c;
        case 0x23cba0u: goto label_23cba0;
        case 0x23cba4u: goto label_23cba4;
        case 0x23cba8u: goto label_23cba8;
        case 0x23cbacu: goto label_23cbac;
        case 0x23cbb0u: goto label_23cbb0;
        case 0x23cbb4u: goto label_23cbb4;
        case 0x23cbb8u: goto label_23cbb8;
        case 0x23cbbcu: goto label_23cbbc;
        case 0x23cbc0u: goto label_23cbc0;
        case 0x23cbc4u: goto label_23cbc4;
        case 0x23cbc8u: goto label_23cbc8;
        case 0x23cbccu: goto label_23cbcc;
        case 0x23cbd0u: goto label_23cbd0;
        case 0x23cbd4u: goto label_23cbd4;
        case 0x23cbd8u: goto label_23cbd8;
        case 0x23cbdcu: goto label_23cbdc;
        case 0x23cbe0u: goto label_23cbe0;
        case 0x23cbe4u: goto label_23cbe4;
        case 0x23cbe8u: goto label_23cbe8;
        case 0x23cbecu: goto label_23cbec;
        case 0x23cbf0u: goto label_23cbf0;
        case 0x23cbf4u: goto label_23cbf4;
        case 0x23cbf8u: goto label_23cbf8;
        case 0x23cbfcu: goto label_23cbfc;
        case 0x23cc00u: goto label_23cc00;
        case 0x23cc04u: goto label_23cc04;
        case 0x23cc08u: goto label_23cc08;
        case 0x23cc0cu: goto label_23cc0c;
        case 0x23cc10u: goto label_23cc10;
        case 0x23cc14u: goto label_23cc14;
        case 0x23cc18u: goto label_23cc18;
        case 0x23cc1cu: goto label_23cc1c;
        case 0x23cc20u: goto label_23cc20;
        case 0x23cc24u: goto label_23cc24;
        case 0x23cc28u: goto label_23cc28;
        case 0x23cc2cu: goto label_23cc2c;
        case 0x23cc30u: goto label_23cc30;
        case 0x23cc34u: goto label_23cc34;
        case 0x23cc38u: goto label_23cc38;
        case 0x23cc3cu: goto label_23cc3c;
        case 0x23cc40u: goto label_23cc40;
        case 0x23cc44u: goto label_23cc44;
        case 0x23cc48u: goto label_23cc48;
        case 0x23cc4cu: goto label_23cc4c;
        case 0x23cc50u: goto label_23cc50;
        case 0x23cc54u: goto label_23cc54;
        case 0x23cc58u: goto label_23cc58;
        case 0x23cc5cu: goto label_23cc5c;
        case 0x23cc60u: goto label_23cc60;
        case 0x23cc64u: goto label_23cc64;
        case 0x23cc68u: goto label_23cc68;
        case 0x23cc6cu: goto label_23cc6c;
        case 0x23cc70u: goto label_23cc70;
        case 0x23cc74u: goto label_23cc74;
        case 0x23cc78u: goto label_23cc78;
        case 0x23cc7cu: goto label_23cc7c;
        case 0x23cc80u: goto label_23cc80;
        case 0x23cc84u: goto label_23cc84;
        case 0x23cc88u: goto label_23cc88;
        case 0x23cc8cu: goto label_23cc8c;
        case 0x23cc90u: goto label_23cc90;
        case 0x23cc94u: goto label_23cc94;
        case 0x23cc98u: goto label_23cc98;
        case 0x23cc9cu: goto label_23cc9c;
        case 0x23cca0u: goto label_23cca0;
        case 0x23cca4u: goto label_23cca4;
        case 0x23cca8u: goto label_23cca8;
        case 0x23ccacu: goto label_23ccac;
        case 0x23ccb0u: goto label_23ccb0;
        case 0x23ccb4u: goto label_23ccb4;
        case 0x23ccb8u: goto label_23ccb8;
        case 0x23ccbcu: goto label_23ccbc;
        case 0x23ccc0u: goto label_23ccc0;
        case 0x23ccc4u: goto label_23ccc4;
        case 0x23ccc8u: goto label_23ccc8;
        case 0x23ccccu: goto label_23cccc;
        case 0x23ccd0u: goto label_23ccd0;
        case 0x23ccd4u: goto label_23ccd4;
        case 0x23ccd8u: goto label_23ccd8;
        case 0x23ccdcu: goto label_23ccdc;
        case 0x23cce0u: goto label_23cce0;
        case 0x23cce4u: goto label_23cce4;
        case 0x23cce8u: goto label_23cce8;
        case 0x23ccecu: goto label_23ccec;
        case 0x23ccf0u: goto label_23ccf0;
        case 0x23ccf4u: goto label_23ccf4;
        case 0x23ccf8u: goto label_23ccf8;
        case 0x23ccfcu: goto label_23ccfc;
        default: break;
    }

    ctx->pc = 0x23bf00u;

label_23bf00:
    // 0x23bf00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_23bf04:
    // 0x23bf04: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x23bf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_23bf08:
    // 0x23bf08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_23bf0c:
    // 0x23bf0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23bf0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23bf10:
    // 0x23bf10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23bf10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23bf14:
    // 0x23bf14: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x23bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_23bf18:
    // 0x23bf18: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x23bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_23bf1c:
    // 0x23bf1c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x23bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_23bf20:
    // 0x23bf20: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x23bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_23bf24:
    // 0x23bf24: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x23bf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_23bf28:
    // 0x23bf28: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x23bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_23bf2c:
    // 0x23bf2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23bf30:
    // 0x23bf30: 0xc0e57ce  jal         func_395F38
label_23bf34:
    if (ctx->pc == 0x23BF34u) {
        ctx->pc = 0x23BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF30u;
        // 0x23bf34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF38u;
        goto label_23bf38;
    }
    ctx->pc = 0x23BF30u;
    SET_GPR_U32(ctx, 31, 0x23BF38u);
    ctx->pc = 0x23BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF30u;
    // 0x23bf34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x23BF30u, 0x23BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF38u;
label_23bf38:
    // 0x23bf38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23bf38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bf3c:
    // 0x23bf3c: 0x12600364  beqz        $s3, . + 4 + (0x364 << 2)
label_23bf40:
    if (ctx->pc == 0x23BF40u) {
        ctx->pc = 0x23BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF3Cu;
        // 0x23bf40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF44u;
        goto label_23bf44;
    }
    ctx->pc = 0x23BF3Cu;
    {
        const bool branch_taken_0x23bf3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF3Cu;
        // 0x23bf40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf3c) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23BF44u;
label_23bf44:
    // 0x23bf44: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23bf48:
    // 0x23bf48: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x23bf48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_23bf4c:
    // 0x23bf4c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x23bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_23bf50:
    // 0x23bf50: 0x40f809  jalr        $v0
label_23bf54:
    if (ctx->pc == 0x23BF54u) {
        ctx->pc = 0x23BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF50u;
        // 0x23bf54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF58u;
        goto label_23bf58;
    }
    ctx->pc = 0x23BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23BF58u);
        ctx->pc = 0x23BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF50u;
        // 0x23bf54: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF50u, 0x23BF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BF58u;
label_23bf58:
    // 0x23bf58: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x23bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_23bf5c:
    // 0x23bf5c: 0x1040035b  beqz        $v0, . + 4 + (0x35B << 2)
label_23bf60:
    if (ctx->pc == 0x23BF60u) {
        ctx->pc = 0x23BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF5Cu;
        // 0x23bf60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF64u;
        goto label_23bf64;
    }
    ctx->pc = 0x23BF5Cu;
    {
        const bool branch_taken_0x23bf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF5Cu;
        // 0x23bf60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf5c) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23BF64u;
label_23bf64:
    // 0x23bf64: 0x96750112  lhu         $s5, 0x112($s3)
    ctx->pc = 0x23bf64u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_23bf68:
    // 0x23bf68: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x23bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_23bf6c:
    // 0x23bf6c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x23bf6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bf70:
    // 0x23bf70: 0xc0e44cc  jal         func_391330
label_23bf74:
    if (ctx->pc == 0x23BF74u) {
        ctx->pc = 0x23BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF70u;
        // 0x23bf74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF78u;
        goto label_23bf78;
    }
    ctx->pc = 0x23BF70u;
    SET_GPR_U32(ctx, 31, 0x23BF78u);
    ctx->pc = 0x23BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF70u;
    // 0x23bf74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23BF70u, 0x23BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF78u;
label_23bf78:
    // 0x23bf78: 0x80510086  lb          $s1, 0x86($v0)
    ctx->pc = 0x23bf78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_23bf7c:
    // 0x23bf7c: 0xc087502  jal         func_21D408
label_23bf80:
    if (ctx->pc == 0x23BF80u) {
        ctx->pc = 0x23BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF7Cu;
        // 0x23bf80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF84u;
        goto label_23bf84;
    }
    ctx->pc = 0x23BF7Cu;
    SET_GPR_U32(ctx, 31, 0x23BF84u);
    ctx->pc = 0x23BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF7Cu;
    // 0x23bf80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23BF7Cu, 0x23BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF84u;
label_23bf84:
    // 0x23bf84: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23bf84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bf88:
    // 0x23bf88: 0x8ed00004  lw          $s0, 0x4($s6)
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_23bf8c:
    // 0x23bf8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23bf90:
    // 0x23bf90: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_23bf94:
    if (ctx->pc == 0x23BF94u) {
        ctx->pc = 0x23BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF90u;
        // 0x23bf94: 0x2623fff4  addiu       $v1, $s1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BF98u;
        goto label_23bf98;
    }
    ctx->pc = 0x23BF90u;
    {
        const bool branch_taken_0x23bf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF90u;
        // 0x23bf94: 0x2623fff4  addiu       $v1, $s1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf90) {
            ctx->pc = 0x23BFB4u;
            goto label_23bfb4;
        }
    }
    ctx->pc = 0x23BF98u;
label_23bf98:
    // 0x23bf98: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_23bf9c:
    if (ctx->pc == 0x23BF9Cu) {
        ctx->pc = 0x23BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF98u;
        // 0x23bf9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFA0u;
        goto label_23bfa0;
    }
    ctx->pc = 0x23BF98u;
    {
        const bool branch_taken_0x23bf98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF98u;
        // 0x23bf9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf98) {
            ctx->pc = 0x23BFB4u;
            goto label_23bfb4;
        }
    }
    ctx->pc = 0x23BFA0u;
label_23bfa0:
    // 0x23bfa0: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_23bfa4:
    if (ctx->pc == 0x23BFA4u) {
        ctx->pc = 0x23BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFA0u;
        // 0x23bfa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFA8u;
        goto label_23bfa8;
    }
    ctx->pc = 0x23BFA0u;
    {
        const bool branch_taken_0x23bfa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFA0u;
        // 0x23bfa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfa0) {
            ctx->pc = 0x23BFB4u;
            goto label_23bfb4;
        }
    }
    ctx->pc = 0x23BFA8u;
label_23bfa8:
    // 0x23bfa8: 0x16020349  bne         $s0, $v0, . + 4 + (0x349 << 2)
label_23bfac:
    if (ctx->pc == 0x23BFACu) {
        ctx->pc = 0x23BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFA8u;
        // 0x23bfac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFB0u;
        goto label_23bfb0;
    }
    ctx->pc = 0x23BFA8u;
    {
        const bool branch_taken_0x23bfa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFA8u;
        // 0x23bfac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfa8) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23BFB0u;
label_23bfb0:
    // 0x23bfb0: 0x2623fff4  addiu       $v1, $s1, -0xC
    ctx->pc = 0x23bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
label_23bfb4:
    // 0x23bfb4: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x23bfb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_23bfb8:
    // 0x23bfb8: 0x10400344  beqz        $v0, . + 4 + (0x344 << 2)
label_23bfbc:
    if (ctx->pc == 0x23BFBCu) {
        ctx->pc = 0x23BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFB8u;
        // 0x23bfbc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFC0u;
        goto label_23bfc0;
    }
    ctx->pc = 0x23BFB8u;
    {
        const bool branch_taken_0x23bfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFB8u;
        // 0x23bfbc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfb8) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23BFC0u;
label_23bfc0:
    // 0x23bfc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23bfc4:
    // 0x23bfc4: 0x2442c850  addiu       $v0, $v0, -0x37B0
    ctx->pc = 0x23bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953040));
label_23bfc8:
    // 0x23bfc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23bfcc:
    // 0x23bfcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23bfd0:
    // 0x23bfd0: 0x800008  jr          $a0
label_23bfd4:
    if (ctx->pc == 0x23BFD4u) {
        ctx->pc = 0x23BFD8u;
        goto label_23bfd8;
    }
    ctx->pc = 0x23BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BFD8u: goto label_23bfd8;
            case 0x23C94Cu: goto label_23c94c;
            case 0x23CA3Cu: goto label_23ca3c;
            case 0x23CB2Cu: goto label_23cb2c;
            case 0x23CC60u: goto label_23cc60;
            case 0x23CCCCu: goto label_23cccc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BFD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23BFD8u;
label_23bfd8:
    // 0x23bfd8: 0x3c02693d  lui         $v0, 0x693D
    ctx->pc = 0x23bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26941 << 16));
label_23bfdc:
    // 0x23bfdc: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x23bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_23bfe0:
    // 0x23bfe0: 0x3442812f  ori         $v0, $v0, 0x812F
    ctx->pc = 0x23bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33071);
label_23bfe4:
    // 0x23bfe4: 0x1062014a  beq         $v1, $v0, . + 4 + (0x14A << 2)
label_23bfe8:
    if (ctx->pc == 0x23BFE8u) {
        ctx->pc = 0x23BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFE4u;
        // 0x23bfe8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFECu;
        goto label_23bfec;
    }
    ctx->pc = 0x23BFE4u;
    {
        const bool branch_taken_0x23bfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFE4u;
        // 0x23bfe8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfe4) {
            ctx->pc = 0x23C510u;
            goto label_23c510;
        }
    }
    ctx->pc = 0x23BFECu;
label_23bfec:
    // 0x23bfec: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_23bff0:
    if (ctx->pc == 0x23BFF0u) {
        ctx->pc = 0x23BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFECu;
        // 0x23bff0: 0x3c022fd6  lui         $v0, 0x2FD6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12246 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BFF4u;
        goto label_23bff4;
    }
    ctx->pc = 0x23BFECu;
    {
        const bool branch_taken_0x23bfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFECu;
        // 0x23bff0: 0x3c022fd6  lui         $v0, 0x2FD6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12246 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfec) {
            ctx->pc = 0x23C08Cu;
            goto label_23c08c;
        }
    }
    ctx->pc = 0x23BFF4u;
label_23bff4:
    // 0x23bff4: 0x344290d6  ori         $v0, $v0, 0x90D6
    ctx->pc = 0x23bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37078);
label_23bff8:
    // 0x23bff8: 0x10620334  beq         $v1, $v0, . + 4 + (0x334 << 2)
label_23bffc:
    if (ctx->pc == 0x23BFFCu) {
        ctx->pc = 0x23BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF8u;
        // 0x23bffc: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C000u;
        goto label_23c000;
    }
    ctx->pc = 0x23BFF8u;
    {
        const bool branch_taken_0x23bff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF8u;
        // 0x23bffc: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bff8) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C000u;
label_23c000:
    // 0x23c000: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_23c004:
    if (ctx->pc == 0x23C004u) {
        ctx->pc = 0x23C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C000u;
        // 0x23c004: 0x3c023453  lui         $v0, 0x3453 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13395 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C008u;
        goto label_23c008;
    }
    ctx->pc = 0x23C000u;
    {
        const bool branch_taken_0x23c000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C000u;
        // 0x23c004: 0x3c023453  lui         $v0, 0x3453 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c000) {
            ctx->pc = 0x23C04Cu;
            goto label_23c04c;
        }
    }
    ctx->pc = 0x23C008u;
label_23c008:
    // 0x23c008: 0x3c021e3a  lui         $v0, 0x1E3A
    ctx->pc = 0x23c008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7738 << 16));
label_23c00c:
    // 0x23c00c: 0x3442b1b9  ori         $v0, $v0, 0xB1B9
    ctx->pc = 0x23c00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45497);
label_23c010:
    // 0x23c010: 0x1062012d  beq         $v1, $v0, . + 4 + (0x12D << 2)
label_23c014:
    if (ctx->pc == 0x23C014u) {
        ctx->pc = 0x23C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C010u;
        // 0x23c014: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C018u;
        goto label_23c018;
    }
    ctx->pc = 0x23C010u;
    {
        const bool branch_taken_0x23c010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C010u;
        // 0x23c014: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c010) {
            ctx->pc = 0x23C4C8u;
            goto label_23c4c8;
        }
    }
    ctx->pc = 0x23C018u;
label_23c018:
    // 0x23c018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23c01c:
    if (ctx->pc == 0x23C01Cu) {
        ctx->pc = 0x23C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C018u;
        // 0x23c01c: 0x3c022b6e  lui         $v0, 0x2B6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11118 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C020u;
        goto label_23c020;
    }
    ctx->pc = 0x23C018u;
    {
        const bool branch_taken_0x23c018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C018u;
        // 0x23c01c: 0x3c022b6e  lui         $v0, 0x2B6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c018) {
            ctx->pc = 0x23C038u;
            goto label_23c038;
        }
    }
    ctx->pc = 0x23C020u;
label_23c020:
    // 0x23c020: 0x3c0206c3  lui         $v0, 0x6C3
    ctx->pc = 0x23c020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1731 << 16));
label_23c024:
    // 0x23c024: 0x3442973a  ori         $v0, $v0, 0x973A
    ctx->pc = 0x23c024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38714);
label_23c028:
    // 0x23c028: 0x10620099  beq         $v1, $v0, . + 4 + (0x99 << 2)
label_23c02c:
    if (ctx->pc == 0x23C02Cu) {
        ctx->pc = 0x23C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C028u;
        // 0x23c02c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C030u;
        goto label_23c030;
    }
    ctx->pc = 0x23C028u;
    {
        const bool branch_taken_0x23c028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C028u;
        // 0x23c02c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c028) {
            ctx->pc = 0x23C290u;
            goto label_23c290;
        }
    }
    ctx->pc = 0x23C030u;
label_23c030:
    // 0x23c030: 0x10000197  b           . + 4 + (0x197 << 2)
label_23c034:
    if (ctx->pc == 0x23C034u) {
        ctx->pc = 0x23C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C030u;
        // 0x23c034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C038u;
        goto label_23c038;
    }
    ctx->pc = 0x23C030u;
    {
        const bool branch_taken_0x23c030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C030u;
        // 0x23c034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c030) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C038u;
label_23c038:
    // 0x23c038: 0x34420387  ori         $v0, $v0, 0x387
    ctx->pc = 0x23c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)903);
label_23c03c:
    // 0x23c03c: 0x106200c9  beq         $v1, $v0, . + 4 + (0xC9 << 2)
label_23c040:
    if (ctx->pc == 0x23C040u) {
        ctx->pc = 0x23C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C03Cu;
        // 0x23c040: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C044u;
        goto label_23c044;
    }
    ctx->pc = 0x23C03Cu;
    {
        const bool branch_taken_0x23c03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C03Cu;
        // 0x23c040: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c03c) {
            ctx->pc = 0x23C364u;
            goto label_23c364;
        }
    }
    ctx->pc = 0x23C044u;
label_23c044:
    // 0x23c044: 0x10000192  b           . + 4 + (0x192 << 2)
label_23c048:
    if (ctx->pc == 0x23C048u) {
        ctx->pc = 0x23C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C044u;
        // 0x23c048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C04Cu;
        goto label_23c04c;
    }
    ctx->pc = 0x23C044u;
    {
        const bool branch_taken_0x23c044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C044u;
        // 0x23c048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c044) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C04Cu;
label_23c04c:
    // 0x23c04c: 0x34422867  ori         $v0, $v0, 0x2867
    ctx->pc = 0x23c04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10343);
label_23c050:
    // 0x23c050: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_23c054:
    if (ctx->pc == 0x23C054u) {
        ctx->pc = 0x23C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C050u;
        // 0x23c054: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C058u;
        goto label_23c058;
    }
    ctx->pc = 0x23C050u;
    {
        const bool branch_taken_0x23c050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C050u;
        // 0x23c054: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c050) {
            ctx->pc = 0x23C140u;
            goto label_23c140;
        }
    }
    ctx->pc = 0x23C058u;
label_23c058:
    // 0x23c058: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23c05c:
    if (ctx->pc == 0x23C05Cu) {
        ctx->pc = 0x23C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C058u;
        // 0x23c05c: 0x3c025fb0  lui         $v0, 0x5FB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24496 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C060u;
        goto label_23c060;
    }
    ctx->pc = 0x23C058u;
    {
        const bool branch_taken_0x23c058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C058u;
        // 0x23c05c: 0x3c025fb0  lui         $v0, 0x5FB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c058) {
            ctx->pc = 0x23C078u;
            goto label_23c078;
        }
    }
    ctx->pc = 0x23C060u;
label_23c060:
    // 0x23c060: 0x3c022ffa  lui         $v0, 0x2FFA
    ctx->pc = 0x23c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12282 << 16));
label_23c064:
    // 0x23c064: 0x3442d9d8  ori         $v0, $v0, 0xD9D8
    ctx->pc = 0x23c064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55768);
label_23c068:
    // 0x23c068: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
label_23c06c:
    if (ctx->pc == 0x23C06Cu) {
        ctx->pc = 0x23C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C068u;
        // 0x23c06c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C070u;
        goto label_23c070;
    }
    ctx->pc = 0x23C068u;
    {
        const bool branch_taken_0x23c068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C068u;
        // 0x23c06c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c068) {
            ctx->pc = 0x23C200u;
            goto label_23c200;
        }
    }
    ctx->pc = 0x23C070u;
label_23c070:
    // 0x23c070: 0x10000187  b           . + 4 + (0x187 << 2)
label_23c074:
    if (ctx->pc == 0x23C074u) {
        ctx->pc = 0x23C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C070u;
        // 0x23c074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C078u;
        goto label_23c078;
    }
    ctx->pc = 0x23C070u;
    {
        const bool branch_taken_0x23c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C070u;
        // 0x23c074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c070) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C078u;
label_23c078:
    // 0x23c078: 0x34428ce2  ori         $v0, $v0, 0x8CE2
    ctx->pc = 0x23c078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36066);
label_23c07c:
    // 0x23c07c: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
label_23c080:
    if (ctx->pc == 0x23C080u) {
        ctx->pc = 0x23C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C07Cu;
        // 0x23c080: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C084u;
        goto label_23c084;
    }
    ctx->pc = 0x23C07Cu;
    {
        const bool branch_taken_0x23c07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C07Cu;
        // 0x23c080: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c07c) {
            ctx->pc = 0x23C248u;
            goto label_23c248;
        }
    }
    ctx->pc = 0x23C084u;
label_23c084:
    // 0x23c084: 0x10000182  b           . + 4 + (0x182 << 2)
label_23c088:
    if (ctx->pc == 0x23C088u) {
        ctx->pc = 0x23C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C084u;
        // 0x23c088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C08Cu;
        goto label_23c08c;
    }
    ctx->pc = 0x23C084u;
    {
        const bool branch_taken_0x23c084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C084u;
        // 0x23c088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c084) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C08Cu;
label_23c08c:
    // 0x23c08c: 0x3c02babc  lui         $v0, 0xBABC
    ctx->pc = 0x23c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47804 << 16));
label_23c090:
    // 0x23c090: 0x3442d9ed  ori         $v0, $v0, 0xD9ED
    ctx->pc = 0x23c090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55789);
label_23c094:
    // 0x23c094: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
label_23c098:
    if (ctx->pc == 0x23C098u) {
        ctx->pc = 0x23C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C094u;
        // 0x23c098: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C09Cu;
        goto label_23c09c;
    }
    ctx->pc = 0x23C094u;
    {
        const bool branch_taken_0x23c094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C094u;
        // 0x23c098: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c094) {
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C09Cu;
label_23c09c:
    // 0x23c09c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_23c0a0:
    if (ctx->pc == 0x23C0A0u) {
        ctx->pc = 0x23C0A4u;
        goto label_23c0a4;
    }
    ctx->pc = 0x23C09Cu;
    {
        const bool branch_taken_0x23c09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c09c) {
            ctx->pc = 0x23C0E8u;
            goto label_23c0e8;
        }
    }
    ctx->pc = 0x23C0A4u;
label_23c0a4:
    // 0x23c0a4: 0x3c028733  lui         $v0, 0x8733
    ctx->pc = 0x23c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34611 << 16));
label_23c0a8:
    // 0x23c0a8: 0x3442e003  ori         $v0, $v0, 0xE003
    ctx->pc = 0x23c0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57347);
label_23c0ac:
    // 0x23c0ac: 0x106200f4  beq         $v1, $v0, . + 4 + (0xF4 << 2)
label_23c0b0:
    if (ctx->pc == 0x23C0B0u) {
        ctx->pc = 0x23C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0ACu;
        // 0x23c0b0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0B4u;
        goto label_23c0b4;
    }
    ctx->pc = 0x23C0ACu;
    {
        const bool branch_taken_0x23c0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0ACu;
        // 0x23c0b0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0ac) {
            ctx->pc = 0x23C480u;
            goto label_23c480;
        }
    }
    ctx->pc = 0x23C0B4u;
label_23c0b4:
    // 0x23c0b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23c0b8:
    if (ctx->pc == 0x23C0B8u) {
        ctx->pc = 0x23C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B4u;
        // 0x23c0b8: 0x3c027056  lui         $v0, 0x7056 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28758 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0BCu;
        goto label_23c0bc;
    }
    ctx->pc = 0x23C0B4u;
    {
        const bool branch_taken_0x23c0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B4u;
        // 0x23c0b8: 0x3c027056  lui         $v0, 0x7056 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28758 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0b4) {
            ctx->pc = 0x23C0D0u;
            goto label_23c0d0;
        }
    }
    ctx->pc = 0x23C0BCu;
label_23c0bc:
    // 0x23c0bc: 0x3442d232  ori         $v0, $v0, 0xD232
    ctx->pc = 0x23c0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53810);
label_23c0c0:
    // 0x23c0c0: 0x10620149  beq         $v1, $v0, . + 4 + (0x149 << 2)
label_23c0c4:
    if (ctx->pc == 0x23C0C4u) {
        ctx->pc = 0x23C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C0u;
        // 0x23c0c4: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0C8u;
        goto label_23c0c8;
    }
    ctx->pc = 0x23C0C0u;
    {
        const bool branch_taken_0x23c0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C0u;
        // 0x23c0c4: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0c0) {
            ctx->pc = 0x23C5E8u;
            goto label_23c5e8;
        }
    }
    ctx->pc = 0x23C0C8u;
label_23c0c8:
    // 0x23c0c8: 0x10000171  b           . + 4 + (0x171 << 2)
label_23c0cc:
    if (ctx->pc == 0x23C0CCu) {
        ctx->pc = 0x23C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C8u;
        // 0x23c0cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0D0u;
        goto label_23c0d0;
    }
    ctx->pc = 0x23C0C8u;
    {
        const bool branch_taken_0x23c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0C8u;
        // 0x23c0cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0c8) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C0D0u;
label_23c0d0:
    // 0x23c0d0: 0x3c02b239  lui         $v0, 0xB239
    ctx->pc = 0x23c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45625 << 16));
label_23c0d4:
    // 0x23c0d4: 0x3442f45d  ori         $v0, $v0, 0xF45D
    ctx->pc = 0x23c0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62557);
label_23c0d8:
    // 0x23c0d8: 0x10620155  beq         $v1, $v0, . + 4 + (0x155 << 2)
label_23c0dc:
    if (ctx->pc == 0x23C0DCu) {
        ctx->pc = 0x23C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D8u;
        // 0x23c0dc: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0E0u;
        goto label_23c0e0;
    }
    ctx->pc = 0x23C0D8u;
    {
        const bool branch_taken_0x23c0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0D8u;
        // 0x23c0dc: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0d8) {
            ctx->pc = 0x23C630u;
            goto label_23c630;
        }
    }
    ctx->pc = 0x23C0E0u;
label_23c0e0:
    // 0x23c0e0: 0x1000016b  b           . + 4 + (0x16B << 2)
label_23c0e4:
    if (ctx->pc == 0x23C0E4u) {
        ctx->pc = 0x23C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0E0u;
        // 0x23c0e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0E8u;
        goto label_23c0e8;
    }
    ctx->pc = 0x23C0E0u;
    {
        const bool branch_taken_0x23c0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0E0u;
        // 0x23c0e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0e0) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C0E8u;
label_23c0e8:
    // 0x23c0e8: 0x3c02d3d8  lui         $v0, 0xD3D8
    ctx->pc = 0x23c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54232 << 16));
label_23c0ec:
    // 0x23c0ec: 0x344291fd  ori         $v0, $v0, 0x91FD
    ctx->pc = 0x23c0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37373);
label_23c0f0:
    // 0x23c0f0: 0x106200d1  beq         $v1, $v0, . + 4 + (0xD1 << 2)
label_23c0f4:
    if (ctx->pc == 0x23C0F4u) {
        ctx->pc = 0x23C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0F0u;
        // 0x23c0f4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C0F8u;
        goto label_23c0f8;
    }
    ctx->pc = 0x23C0F0u;
    {
        const bool branch_taken_0x23c0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0F0u;
        // 0x23c0f4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0f0) {
            ctx->pc = 0x23C438u;
            goto label_23c438;
        }
    }
    ctx->pc = 0x23C0F8u;
label_23c0f8:
    // 0x23c0f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23c0fc:
    if (ctx->pc == 0x23C0FCu) {
        ctx->pc = 0x23C100u;
        goto label_23c100;
    }
    ctx->pc = 0x23C0F8u;
    {
        const bool branch_taken_0x23c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c0f8) {
            ctx->pc = 0x23C118u;
            goto label_23c118;
        }
    }
    ctx->pc = 0x23C100u;
label_23c100:
    // 0x23c100: 0x3c02c57a  lui         $v0, 0xC57A
    ctx->pc = 0x23c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50554 << 16));
label_23c104:
    // 0x23c104: 0x3442b00a  ori         $v0, $v0, 0xB00A
    ctx->pc = 0x23c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45066);
label_23c108:
    // 0x23c108: 0x10620125  beq         $v1, $v0, . + 4 + (0x125 << 2)
label_23c10c:
    if (ctx->pc == 0x23C10Cu) {
        ctx->pc = 0x23C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C108u;
        // 0x23c10c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C110u;
        goto label_23c110;
    }
    ctx->pc = 0x23C108u;
    {
        const bool branch_taken_0x23c108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C108u;
        // 0x23c10c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c108) {
            ctx->pc = 0x23C5A0u;
            goto label_23c5a0;
        }
    }
    ctx->pc = 0x23C110u;
label_23c110:
    // 0x23c110: 0x1000015f  b           . + 4 + (0x15F << 2)
label_23c114:
    if (ctx->pc == 0x23C114u) {
        ctx->pc = 0x23C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C110u;
        // 0x23c114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C118u;
        goto label_23c118;
    }
    ctx->pc = 0x23C110u;
    {
        const bool branch_taken_0x23c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C110u;
        // 0x23c114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c110) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C118u;
label_23c118:
    // 0x23c118: 0x3c02d576  lui         $v0, 0xD576
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54646 << 16));
label_23c11c:
    // 0x23c11c: 0x3442e4b7  ori         $v0, $v0, 0xE4B7
    ctx->pc = 0x23c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58551);
label_23c120:
    // 0x23c120: 0x5062007f  beql        $v1, $v0, . + 4 + (0x7F << 2)
label_23c124:
    if (ctx->pc == 0x23C124u) {
        ctx->pc = 0x23C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C120u;
        // 0x23c124: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C128u;
        goto label_23c128;
    }
    ctx->pc = 0x23C120u;
    {
        const bool branch_taken_0x23c120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c120) {
            ctx->pc = 0x23C124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C120u;
            // 0x23c124: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C320u;
            goto label_23c320;
        }
    }
    ctx->pc = 0x23C128u;
label_23c128:
    // 0x23c128: 0x3c02e09f  lui         $v0, 0xE09F
    ctx->pc = 0x23c128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57503 << 16));
label_23c12c:
    // 0x23c12c: 0x34426c15  ori         $v0, $v0, 0x6C15
    ctx->pc = 0x23c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27669);
label_23c130:
    // 0x23c130: 0x10620109  beq         $v1, $v0, . + 4 + (0x109 << 2)
label_23c134:
    if (ctx->pc == 0x23C134u) {
        ctx->pc = 0x23C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C130u;
        // 0x23c134: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C138u;
        goto label_23c138;
    }
    ctx->pc = 0x23C130u;
    {
        const bool branch_taken_0x23c130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C130u;
        // 0x23c134: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c130) {
            ctx->pc = 0x23C558u;
            goto label_23c558;
        }
    }
    ctx->pc = 0x23C138u;
label_23c138:
    // 0x23c138: 0x10000155  b           . + 4 + (0x155 << 2)
label_23c13c:
    if (ctx->pc == 0x23C13Cu) {
        ctx->pc = 0x23C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C138u;
        // 0x23c13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C140u;
        goto label_23c140;
    }
    ctx->pc = 0x23C138u;
    {
        const bool branch_taken_0x23c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C138u;
        // 0x23c13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c138) {
            ctx->pc = 0x23C690u;
            goto label_23c690;
        }
    }
    ctx->pc = 0x23C140u;
label_23c140:
    // 0x23c140: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c144:
    // 0x23c144: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c144u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c148:
    // 0x23c148: 0x104002e0  beqz        $v0, . + 4 + (0x2E0 << 2)
label_23c14c:
    if (ctx->pc == 0x23C14Cu) {
        ctx->pc = 0x23C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C148u;
        // 0x23c14c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C150u;
        goto label_23c150;
    }
    ctx->pc = 0x23C148u;
    {
        const bool branch_taken_0x23c148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C148u;
        // 0x23c14c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c148) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C150u;
label_23c150:
    // 0x23c150: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23c154:
    // 0x23c154: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c158:
    // 0x23c158: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c15c:
    // 0x23c15c: 0xc1078c8  jal         func_41E320
label_23c160:
    if (ctx->pc == 0x23C160u) {
        ctx->pc = 0x23C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C15Cu;
        // 0x23c160: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C164u;
        goto label_23c164;
    }
    ctx->pc = 0x23C15Cu;
    SET_GPR_U32(ctx, 31, 0x23C164u);
    ctx->pc = 0x23C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C15Cu;
    // 0x23c160: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C15Cu, 0x23C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C164u;
label_23c164:
    // 0x23c164: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c168:
    // 0x23c168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c16c:
    // 0x23c16c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c170:
    // 0x23c170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c174:
    // 0x23c174: 0xc043f36  jal         func_10FCD8
label_23c178:
    if (ctx->pc == 0x23C178u) {
        ctx->pc = 0x23C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C174u;
        // 0x23c178: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C17Cu;
        goto label_23c17c;
    }
    ctx->pc = 0x23C174u;
    SET_GPR_U32(ctx, 31, 0x23C17Cu);
    ctx->pc = 0x23C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C174u;
    // 0x23c178: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C174u, 0x23C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C17Cu;
label_23c17c:
    // 0x23c17c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c180:
    // 0x23c180: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x23c180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23c184:
    // 0x23c184: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23c184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23c188:
    // 0x23c188: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c18c:
    // 0x23c18c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23c190:
    // 0x23c190: 0xc10796c  jal         func_41E5B0
label_23c194:
    if (ctx->pc == 0x23C194u) {
        ctx->pc = 0x23C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C190u;
        // 0x23c194: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C198u;
        goto label_23c198;
    }
    ctx->pc = 0x23C190u;
    SET_GPR_U32(ctx, 31, 0x23C198u);
    ctx->pc = 0x23C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C190u;
    // 0x23c194: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23C190u, 0x23C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C198u;
label_23c198:
    // 0x23c198: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c19c:
    // 0x23c19c: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x23c19cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_23c1a0:
    // 0x23c1a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23c1a4:
    if (ctx->pc == 0x23C1A4u) {
        ctx->pc = 0x23C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1A0u;
        // 0x23c1a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1A8u;
        goto label_23c1a8;
    }
    ctx->pc = 0x23C1A0u;
    {
        const bool branch_taken_0x23c1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1A0u;
        // 0x23c1a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1a0) {
            ctx->pc = 0x23C1B4u;
            goto label_23c1b4;
        }
    }
    ctx->pc = 0x23C1A8u;
label_23c1a8:
    // 0x23c1a8: 0xc107444  jal         func_41D110
label_23c1ac:
    if (ctx->pc == 0x23C1ACu) {
        ctx->pc = 0x23C1B0u;
        goto label_23c1b0;
    }
    ctx->pc = 0x23C1A8u;
    SET_GPR_U32(ctx, 31, 0x23C1B0u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x23C1A8u, 0x23C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1B0u;
label_23c1b0:
    // 0x23c1b0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23c1b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c1b4:
    // 0x23c1b4: 0x106002c1  beqz        $v1, . + 4 + (0x2C1 << 2)
label_23c1b8:
    if (ctx->pc == 0x23C1B8u) {
        ctx->pc = 0x23C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B4u;
        // 0x23c1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1BCu;
        goto label_23c1bc;
    }
    ctx->pc = 0x23C1B4u;
    {
        const bool branch_taken_0x23c1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B4u;
        // 0x23c1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1b4) {
            ctx->pc = 0x23CCBCu;
            goto label_23ccbc;
        }
    }
    ctx->pc = 0x23C1BCu;
label_23c1bc:
    // 0x23c1bc: 0xc073a8e  jal         func_1CEA38
label_23c1c0:
    if (ctx->pc == 0x23C1C0u) {
        ctx->pc = 0x23C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1BCu;
        // 0x23c1c0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1C4u;
        goto label_23c1c4;
    }
    ctx->pc = 0x23C1BCu;
    SET_GPR_U32(ctx, 31, 0x23C1C4u);
    ctx->pc = 0x23C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C1BCu;
    // 0x23c1c0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x23C1BCu, 0x23C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1C4u;
label_23c1c4:
    // 0x23c1c4: 0x104002bc  beqz        $v0, . + 4 + (0x2BC << 2)
label_23c1c8:
    if (ctx->pc == 0x23C1C8u) {
        ctx->pc = 0x23C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1C4u;
        // 0x23c1c8: 0x8e25489c  lw          $a1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1CCu;
        goto label_23c1cc;
    }
    ctx->pc = 0x23C1C4u;
    {
        const bool branch_taken_0x23c1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1C4u;
        // 0x23c1c8: 0x8e25489c  lw          $a1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1c4) {
            ctx->pc = 0x23CCB8u;
            goto label_23ccb8;
        }
    }
    ctx->pc = 0x23C1CCu;
label_23c1cc:
    // 0x23c1cc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23c1ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23c1d0:
    // 0x23c1d0: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x23c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_23c1d4:
    // 0x23c1d4: 0x144002b9  bnez        $v0, . + 4 + (0x2B9 << 2)
label_23c1d8:
    if (ctx->pc == 0x23C1D8u) {
        ctx->pc = 0x23C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1D4u;
        // 0x23c1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1DCu;
        goto label_23c1dc;
    }
    ctx->pc = 0x23C1D4u;
    {
        const bool branch_taken_0x23c1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1D4u;
        // 0x23c1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1d4) {
            ctx->pc = 0x23CCBCu;
            goto label_23ccbc;
        }
    }
    ctx->pc = 0x23C1DCu;
label_23c1dc:
    // 0x23c1dc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x23c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_23c1e0:
    // 0x23c1e0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x23c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_23c1e4:
    // 0x23c1e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x23c1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23c1e8:
    // 0x23c1e8: 0x24849250  addiu       $a0, $a0, -0x6DB0
    ctx->pc = 0x23c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
label_23c1ec:
    // 0x23c1ec: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x23c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_23c1f0:
    // 0x23c1f0: 0xc07387a  jal         func_1CE1E8
label_23c1f4:
    if (ctx->pc == 0x23C1F4u) {
        ctx->pc = 0x23C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1F0u;
        // 0x23c1f4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C1F8u;
        goto label_23c1f8;
    }
    ctx->pc = 0x23C1F0u;
    SET_GPR_U32(ctx, 31, 0x23C1F8u);
    ctx->pc = 0x23C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C1F0u;
    // 0x23c1f4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x23C1F0u, 0x23C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1F8u;
label_23c1f8:
    // 0x23c1f8: 0x100002b0  b           . + 4 + (0x2B0 << 2)
label_23c1fc:
    if (ctx->pc == 0x23C1FCu) {
        ctx->pc = 0x23C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1F8u;
        // 0x23c1fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C200u;
        goto label_23c200;
    }
    ctx->pc = 0x23C1F8u;
    {
        const bool branch_taken_0x23c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1F8u;
        // 0x23c1fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1f8) {
            ctx->pc = 0x23CCBCu;
            goto label_23ccbc;
        }
    }
    ctx->pc = 0x23C200u;
label_23c200:
    // 0x23c200: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c204:
    // 0x23c204: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c204u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c208:
    // 0x23c208: 0x104002b0  beqz        $v0, . + 4 + (0x2B0 << 2)
label_23c20c:
    if (ctx->pc == 0x23C20Cu) {
        ctx->pc = 0x23C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C208u;
        // 0x23c20c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C210u;
        goto label_23c210;
    }
    ctx->pc = 0x23C208u;
    {
        const bool branch_taken_0x23c208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C208u;
        // 0x23c20c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c208) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C210u;
label_23c210:
    // 0x23c210: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23c210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23c214:
    // 0x23c214: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c218:
    // 0x23c218: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c21c:
    // 0x23c21c: 0xc1078c8  jal         func_41E320
label_23c220:
    if (ctx->pc == 0x23C220u) {
        ctx->pc = 0x23C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C21Cu;
        // 0x23c220: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C224u;
        goto label_23c224;
    }
    ctx->pc = 0x23C21Cu;
    SET_GPR_U32(ctx, 31, 0x23C224u);
    ctx->pc = 0x23C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C21Cu;
    // 0x23c220: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C21Cu, 0x23C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C224u;
label_23c224:
    // 0x23c224: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c228:
    // 0x23c228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c22c:
    // 0x23c22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c230:
    // 0x23c230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c234:
    // 0x23c234: 0xc043f36  jal         func_10FCD8
label_23c238:
    if (ctx->pc == 0x23C238u) {
        ctx->pc = 0x23C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C234u;
        // 0x23c238: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C23Cu;
        goto label_23c23c;
    }
    ctx->pc = 0x23C234u;
    SET_GPR_U32(ctx, 31, 0x23C23Cu);
    ctx->pc = 0x23C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C234u;
    // 0x23c238: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C234u, 0x23C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C23Cu;
label_23c23c:
    // 0x23c23c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c240:
    // 0x23c240: 0x1000010c  b           . + 4 + (0x10C << 2)
label_23c244:
    if (ctx->pc == 0x23C244u) {
        ctx->pc = 0x23C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C240u;
        // 0x23c244: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C248u;
        goto label_23c248;
    }
    ctx->pc = 0x23C240u;
    {
        const bool branch_taken_0x23c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C240u;
        // 0x23c244: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c240) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C248u;
label_23c248:
    // 0x23c248: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c248u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c24c:
    // 0x23c24c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c24cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c250:
    // 0x23c250: 0x1040029e  beqz        $v0, . + 4 + (0x29E << 2)
label_23c254:
    if (ctx->pc == 0x23C254u) {
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C258u;
        goto label_23c258;
    }
    ctx->pc = 0x23C250u;
    {
        const bool branch_taken_0x23c250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c250) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C258u;
label_23c258:
    // 0x23c258: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x23c258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23c25c:
    // 0x23c25c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c260:
    // 0x23c260: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c260u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c264:
    // 0x23c264: 0xc1078c8  jal         func_41E320
label_23c268:
    if (ctx->pc == 0x23C268u) {
        ctx->pc = 0x23C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C264u;
        // 0x23c268: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C26Cu;
        goto label_23c26c;
    }
    ctx->pc = 0x23C264u;
    SET_GPR_U32(ctx, 31, 0x23C26Cu);
    ctx->pc = 0x23C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C264u;
    // 0x23c268: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C264u, 0x23C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C26Cu;
label_23c26c:
    // 0x23c26c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c270:
    // 0x23c270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c274:
    // 0x23c274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c278:
    // 0x23c278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c27c:
    // 0x23c27c: 0xc043f36  jal         func_10FCD8
label_23c280:
    if (ctx->pc == 0x23C280u) {
        ctx->pc = 0x23C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C27Cu;
        // 0x23c280: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C284u;
        goto label_23c284;
    }
    ctx->pc = 0x23C27Cu;
    SET_GPR_U32(ctx, 31, 0x23C284u);
    ctx->pc = 0x23C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C27Cu;
    // 0x23c280: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C27Cu, 0x23C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C284u;
label_23c284:
    // 0x23c284: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c288:
    // 0x23c288: 0x100000fa  b           . + 4 + (0xFA << 2)
label_23c28c:
    if (ctx->pc == 0x23C28Cu) {
        ctx->pc = 0x23C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C288u;
        // 0x23c28c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C290u;
        goto label_23c290;
    }
    ctx->pc = 0x23C288u;
    {
        const bool branch_taken_0x23c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C288u;
        // 0x23c28c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c288) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C290u;
label_23c290:
    // 0x23c290: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c294:
    // 0x23c294: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c294u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c298:
    // 0x23c298: 0x1040028c  beqz        $v0, . + 4 + (0x28C << 2)
label_23c29c:
    if (ctx->pc == 0x23C29Cu) {
        ctx->pc = 0x23C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C298u;
        // 0x23c29c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2A0u;
        goto label_23c2a0;
    }
    ctx->pc = 0x23C298u;
    {
        const bool branch_taken_0x23c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C298u;
        // 0x23c29c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c298) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C2A0u;
label_23c2a0:
    // 0x23c2a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c2a4:
    // 0x23c2a4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c2a8:
    // 0x23c2a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c2ac:
    // 0x23c2ac: 0xc1078c8  jal         func_41E320
label_23c2b0:
    if (ctx->pc == 0x23C2B0u) {
        ctx->pc = 0x23C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2ACu;
        // 0x23c2b0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2B4u;
        goto label_23c2b4;
    }
    ctx->pc = 0x23C2ACu;
    SET_GPR_U32(ctx, 31, 0x23C2B4u);
    ctx->pc = 0x23C2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2ACu;
    // 0x23c2b0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C2ACu, 0x23C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2B4u;
label_23c2b4:
    // 0x23c2b4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c2b8:
    // 0x23c2b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c2bc:
    // 0x23c2bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c2c0:
    // 0x23c2c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c2c4:
    // 0x23c2c4: 0xc043f36  jal         func_10FCD8
label_23c2c8:
    if (ctx->pc == 0x23C2C8u) {
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2CCu;
        goto label_23c2cc;
    }
    ctx->pc = 0x23C2C4u;
    SET_GPR_U32(ctx, 31, 0x23C2CCu);
    ctx->pc = 0x23C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2C4u;
    // 0x23c2c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C2C4u, 0x23C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2CCu;
label_23c2cc:
    // 0x23c2cc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c2d0:
    // 0x23c2d0: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_23c2d4:
    if (ctx->pc == 0x23C2D4u) {
        ctx->pc = 0x23C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2D0u;
        // 0x23c2d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2D8u;
        goto label_23c2d8;
    }
    ctx->pc = 0x23C2D0u;
    {
        const bool branch_taken_0x23c2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2D0u;
        // 0x23c2d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2d0) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C2D8u;
label_23c2d8:
    // 0x23c2d8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c2d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c2dc:
    // 0x23c2dc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c2dcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c2e0:
    // 0x23c2e0: 0x1040027a  beqz        $v0, . + 4 + (0x27A << 2)
label_23c2e4:
    if (ctx->pc == 0x23C2E4u) {
        ctx->pc = 0x23C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E0u;
        // 0x23c2e4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2E8u;
        goto label_23c2e8;
    }
    ctx->pc = 0x23C2E0u;
    {
        const bool branch_taken_0x23c2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E0u;
        // 0x23c2e4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2e0) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C2E8u;
label_23c2e8:
    // 0x23c2e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c2ec:
    // 0x23c2ec: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c2f0:
    // 0x23c2f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c2f4:
    // 0x23c2f4: 0xc1078c8  jal         func_41E320
label_23c2f8:
    if (ctx->pc == 0x23C2F8u) {
        ctx->pc = 0x23C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2F4u;
        // 0x23c2f8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2FCu;
        goto label_23c2fc;
    }
    ctx->pc = 0x23C2F4u;
    SET_GPR_U32(ctx, 31, 0x23C2FCu);
    ctx->pc = 0x23C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C2F4u;
    // 0x23c2f8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C2F4u, 0x23C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C2FCu;
label_23c2fc:
    // 0x23c2fc: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c300:
    // 0x23c300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c304:
    // 0x23c304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c308:
    // 0x23c308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c30c:
    // 0x23c30c: 0xc043f36  jal         func_10FCD8
label_23c310:
    if (ctx->pc == 0x23C310u) {
        ctx->pc = 0x23C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C30Cu;
        // 0x23c310: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C314u;
        goto label_23c314;
    }
    ctx->pc = 0x23C30Cu;
    SET_GPR_U32(ctx, 31, 0x23C314u);
    ctx->pc = 0x23C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C30Cu;
    // 0x23c310: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C30Cu, 0x23C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C314u;
label_23c314:
    // 0x23c314: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c318:
    // 0x23c318: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_23c31c:
    if (ctx->pc == 0x23C31Cu) {
        ctx->pc = 0x23C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C318u;
        // 0x23c31c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C320u;
        goto label_23c320;
    }
    ctx->pc = 0x23C318u;
    {
        const bool branch_taken_0x23c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C318u;
        // 0x23c31c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c318) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C320u;
label_23c320:
    // 0x23c320: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c320u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c324:
    // 0x23c324: 0x10400269  beqz        $v0, . + 4 + (0x269 << 2)
label_23c328:
    if (ctx->pc == 0x23C328u) {
        ctx->pc = 0x23C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C324u;
        // 0x23c328: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C32Cu;
        goto label_23c32c;
    }
    ctx->pc = 0x23C324u;
    {
        const bool branch_taken_0x23c324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C324u;
        // 0x23c328: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c324) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C32Cu;
label_23c32c:
    // 0x23c32c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c330:
    // 0x23c330: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c334:
    // 0x23c334: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c338:
    // 0x23c338: 0xc1078c8  jal         func_41E320
label_23c33c:
    if (ctx->pc == 0x23C33Cu) {
        ctx->pc = 0x23C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C338u;
        // 0x23c33c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C340u;
        goto label_23c340;
    }
    ctx->pc = 0x23C338u;
    SET_GPR_U32(ctx, 31, 0x23C340u);
    ctx->pc = 0x23C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C338u;
    // 0x23c33c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C338u, 0x23C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C340u;
label_23c340:
    // 0x23c340: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c344:
    // 0x23c344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c348:
    // 0x23c348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c34c:
    // 0x23c34c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c350:
    // 0x23c350: 0xc043f36  jal         func_10FCD8
label_23c354:
    if (ctx->pc == 0x23C354u) {
        ctx->pc = 0x23C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C350u;
        // 0x23c354: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C358u;
        goto label_23c358;
    }
    ctx->pc = 0x23C350u;
    SET_GPR_U32(ctx, 31, 0x23C358u);
    ctx->pc = 0x23C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C350u;
    // 0x23c354: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C350u, 0x23C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C358u;
label_23c358:
    // 0x23c358: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c35c:
    // 0x23c35c: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_23c360:
    if (ctx->pc == 0x23C360u) {
        ctx->pc = 0x23C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C35Cu;
        // 0x23c360: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C364u;
        goto label_23c364;
    }
    ctx->pc = 0x23C35Cu;
    {
        const bool branch_taken_0x23c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C35Cu;
        // 0x23c360: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c35c) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C364u;
label_23c364:
    // 0x23c364: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c368:
    // 0x23c368: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c368u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c36c:
    // 0x23c36c: 0x10400257  beqz        $v0, . + 4 + (0x257 << 2)
label_23c370:
    if (ctx->pc == 0x23C370u) {
        ctx->pc = 0x23C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C36Cu;
        // 0x23c370: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C374u;
        goto label_23c374;
    }
    ctx->pc = 0x23C36Cu;
    {
        const bool branch_taken_0x23c36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C36Cu;
        // 0x23c370: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c36c) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C374u;
label_23c374:
    // 0x23c374: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23c378:
    // 0x23c378: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c37c:
    // 0x23c37c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x23c37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23c380:
    // 0x23c380: 0xc107908  jal         func_41E420
label_23c384:
    if (ctx->pc == 0x23C384u) {
        ctx->pc = 0x23C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C380u;
        // 0x23c384: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C388u;
        goto label_23c388;
    }
    ctx->pc = 0x23C380u;
    SET_GPR_U32(ctx, 31, 0x23C388u);
    ctx->pc = 0x23C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C380u;
    // 0x23c384: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x23C380u, 0x23C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C388u;
label_23c388:
    // 0x23c388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23c388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c38c:
    // 0x23c38c: 0xc1077b4  jal         func_41DED0
label_23c390:
    if (ctx->pc == 0x23C390u) {
        ctx->pc = 0x23C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C38Cu;
        // 0x23c390: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C394u;
        goto label_23c394;
    }
    ctx->pc = 0x23C38Cu;
    SET_GPR_U32(ctx, 31, 0x23C394u);
    ctx->pc = 0x23C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C38Cu;
    // 0x23c390: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DED0u, 0x23C38Cu, 0x23C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C394u;
label_23c394:
    // 0x23c394: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x23c394u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23c398:
    // 0x23c398: 0x1200024c  beqz        $s0, . + 4 + (0x24C << 2)
label_23c39c:
    if (ctx->pc == 0x23C39Cu) {
        ctx->pc = 0x23C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C398u;
        // 0x23c39c: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3A0u;
        goto label_23c3a0;
    }
    ctx->pc = 0x23C398u;
    {
        const bool branch_taken_0x23c398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C398u;
        // 0x23c39c: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c398) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C3A0u;
label_23c3a0:
    // 0x23c3a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23c3a4:
    // 0x23c3a4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c3a8:
    // 0x23c3a8: 0xc1078c8  jal         func_41E320
label_23c3ac:
    if (ctx->pc == 0x23C3ACu) {
        ctx->pc = 0x23C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3A8u;
        // 0x23c3ac: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3B0u;
        goto label_23c3b0;
    }
    ctx->pc = 0x23C3A8u;
    SET_GPR_U32(ctx, 31, 0x23C3B0u);
    ctx->pc = 0x23C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3A8u;
    // 0x23c3ac: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C3A8u, 0x23C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3B0u;
label_23c3b0:
    // 0x23c3b0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c3b4:
    // 0x23c3b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c3b8:
    // 0x23c3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c3bc:
    // 0x23c3bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c3c0:
    // 0x23c3c0: 0xc043f36  jal         func_10FCD8
label_23c3c4:
    if (ctx->pc == 0x23C3C4u) {
        ctx->pc = 0x23C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3C0u;
        // 0x23c3c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3C8u;
        goto label_23c3c8;
    }
    ctx->pc = 0x23C3C0u;
    SET_GPR_U32(ctx, 31, 0x23C3C8u);
    ctx->pc = 0x23C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3C0u;
    // 0x23c3c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C3C0u, 0x23C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3C8u;
label_23c3c8:
    // 0x23c3c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c3cc:
    // 0x23c3cc: 0xc088a60  jal         func_222980
label_23c3d0:
    if (ctx->pc == 0x23C3D0u) {
        ctx->pc = 0x23C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3CCu;
        // 0x23c3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3D4u;
        goto label_23c3d4;
    }
    ctx->pc = 0x23C3CCu;
    SET_GPR_U32(ctx, 31, 0x23C3D4u);
    ctx->pc = 0x23C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3CCu;
    // 0x23c3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222980u, 0x23C3CCu, 0x23C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3D4u;
label_23c3d4:
    // 0x23c3d4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c3d8:
    // 0x23c3d8: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x23c3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_23c3dc:
    // 0x23c3dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23c3e0:
    if (ctx->pc == 0x23C3E0u) {
        ctx->pc = 0x23C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3DCu;
        // 0x23c3e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3E4u;
        goto label_23c3e4;
    }
    ctx->pc = 0x23C3DCu;
    {
        const bool branch_taken_0x23c3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3DCu;
        // 0x23c3e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3dc) {
            ctx->pc = 0x23C3F0u;
            goto label_23c3f0;
        }
    }
    ctx->pc = 0x23C3E4u;
label_23c3e4:
    // 0x23c3e4: 0xc107444  jal         func_41D110
label_23c3e8:
    if (ctx->pc == 0x23C3E8u) {
        ctx->pc = 0x23C3ECu;
        goto label_23c3ec;
    }
    ctx->pc = 0x23C3E4u;
    SET_GPR_U32(ctx, 31, 0x23C3ECu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x23C3E4u, 0x23C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3ECu;
label_23c3ec:
    // 0x23c3ec: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23c3ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c3f0:
    // 0x23c3f0: 0x10600232  beqz        $v1, . + 4 + (0x232 << 2)
label_23c3f4:
    if (ctx->pc == 0x23C3F4u) {
        ctx->pc = 0x23C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F0u;
        // 0x23c3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3F8u;
        goto label_23c3f8;
    }
    ctx->pc = 0x23C3F0u;
    {
        const bool branch_taken_0x23c3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F0u;
        // 0x23c3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3f0) {
            ctx->pc = 0x23CCBCu;
            goto label_23ccbc;
        }
    }
    ctx->pc = 0x23C3F8u;
label_23c3f8:
    // 0x23c3f8: 0xc073a8e  jal         func_1CEA38
label_23c3fc:
    if (ctx->pc == 0x23C3FCu) {
        ctx->pc = 0x23C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F8u;
        // 0x23c3fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C400u;
        goto label_23c400;
    }
    ctx->pc = 0x23C3F8u;
    SET_GPR_U32(ctx, 31, 0x23C400u);
    ctx->pc = 0x23C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3F8u;
    // 0x23c3fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x23C3F8u, 0x23C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C400u;
label_23c400:
    // 0x23c400: 0x1040022d  beqz        $v0, . + 4 + (0x22D << 2)
label_23c404:
    if (ctx->pc == 0x23C404u) {
        ctx->pc = 0x23C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C400u;
        // 0x23c404: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C408u;
        goto label_23c408;
    }
    ctx->pc = 0x23C400u;
    {
        const bool branch_taken_0x23c400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C400u;
        // 0x23c404: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c400) {
            ctx->pc = 0x23CCB8u;
            goto label_23ccb8;
        }
    }
    ctx->pc = 0x23C408u;
label_23c408:
    // 0x23c408: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x23c408u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_23c40c:
    // 0x23c40c: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x23c40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_23c410:
    // 0x23c410: 0x5440022a  bnel        $v0, $zero, . + 4 + (0x22A << 2)
label_23c414:
    if (ctx->pc == 0x23C414u) {
        ctx->pc = 0x23C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C410u;
        // 0x23c414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C418u;
        goto label_23c418;
    }
    ctx->pc = 0x23C410u;
    {
        const bool branch_taken_0x23c410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c410) {
            ctx->pc = 0x23C414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C410u;
            // 0x23c414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCBCu;
            goto label_23ccbc;
        }
    }
    ctx->pc = 0x23C418u;
label_23c418:
    // 0x23c418: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23c41c:
    // 0x23c41c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23c420:
    // 0x23c420: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23c420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23c424:
    // 0x23c424: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x23c424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_23c428:
    // 0x23c428: 0xc107948  jal         func_41E520
label_23c42c:
    if (ctx->pc == 0x23C42Cu) {
        ctx->pc = 0x23C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C428u;
        // 0x23c42c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C430u;
        goto label_23c430;
    }
    ctx->pc = 0x23C428u;
    SET_GPR_U32(ctx, 31, 0x23C430u);
    ctx->pc = 0x23C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C428u;
    // 0x23c42c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E520u, 0x23C428u, 0x23C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C430u;
label_23c430:
    // 0x23c430: 0x10000222  b           . + 4 + (0x222 << 2)
label_23c434:
    if (ctx->pc == 0x23C434u) {
        ctx->pc = 0x23C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C430u;
        // 0x23c434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C438u;
        goto label_23c438;
    }
    ctx->pc = 0x23C430u;
    {
        const bool branch_taken_0x23c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C430u;
        // 0x23c434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c430) {
            ctx->pc = 0x23CCBCu;
            goto label_23ccbc;
        }
    }
    ctx->pc = 0x23C438u;
label_23c438:
    // 0x23c438: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c438u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c43c:
    // 0x23c43c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c43cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c440:
    // 0x23c440: 0x10400222  beqz        $v0, . + 4 + (0x222 << 2)
label_23c444:
    if (ctx->pc == 0x23C444u) {
        ctx->pc = 0x23C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C440u;
        // 0x23c444: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C448u;
        goto label_23c448;
    }
    ctx->pc = 0x23C440u;
    {
        const bool branch_taken_0x23c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C440u;
        // 0x23c444: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c440) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C448u;
label_23c448:
    // 0x23c448: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c44c:
    // 0x23c44c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c450:
    // 0x23c450: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c454:
    // 0x23c454: 0xc1078c8  jal         func_41E320
label_23c458:
    if (ctx->pc == 0x23C458u) {
        ctx->pc = 0x23C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C454u;
        // 0x23c458: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C45Cu;
        goto label_23c45c;
    }
    ctx->pc = 0x23C454u;
    SET_GPR_U32(ctx, 31, 0x23C45Cu);
    ctx->pc = 0x23C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C454u;
    // 0x23c458: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C454u, 0x23C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C45Cu;
label_23c45c:
    // 0x23c45c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c460:
    // 0x23c460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c464:
    // 0x23c464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c468:
    // 0x23c468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c46c:
    // 0x23c46c: 0xc043f36  jal         func_10FCD8
label_23c470:
    if (ctx->pc == 0x23C470u) {
        ctx->pc = 0x23C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C46Cu;
        // 0x23c470: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C474u;
        goto label_23c474;
    }
    ctx->pc = 0x23C46Cu;
    SET_GPR_U32(ctx, 31, 0x23C474u);
    ctx->pc = 0x23C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C46Cu;
    // 0x23c470: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C46Cu, 0x23C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C474u;
label_23c474:
    // 0x23c474: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c478:
    // 0x23c478: 0x1000007e  b           . + 4 + (0x7E << 2)
label_23c47c:
    if (ctx->pc == 0x23C47Cu) {
        ctx->pc = 0x23C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C478u;
        // 0x23c47c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C480u;
        goto label_23c480;
    }
    ctx->pc = 0x23C478u;
    {
        const bool branch_taken_0x23c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C478u;
        // 0x23c47c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c478) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C480u;
label_23c480:
    // 0x23c480: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c484:
    // 0x23c484: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c484u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c488:
    // 0x23c488: 0x10400210  beqz        $v0, . + 4 + (0x210 << 2)
label_23c48c:
    if (ctx->pc == 0x23C48Cu) {
        ctx->pc = 0x23C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C488u;
        // 0x23c48c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C490u;
        goto label_23c490;
    }
    ctx->pc = 0x23C488u;
    {
        const bool branch_taken_0x23c488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C488u;
        // 0x23c48c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c488) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C490u;
label_23c490:
    // 0x23c490: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c494:
    // 0x23c494: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c498:
    // 0x23c498: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c49c:
    // 0x23c49c: 0xc1078c8  jal         func_41E320
label_23c4a0:
    if (ctx->pc == 0x23C4A0u) {
        ctx->pc = 0x23C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C49Cu;
        // 0x23c4a0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4A4u;
        goto label_23c4a4;
    }
    ctx->pc = 0x23C49Cu;
    SET_GPR_U32(ctx, 31, 0x23C4A4u);
    ctx->pc = 0x23C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C49Cu;
    // 0x23c4a0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C49Cu, 0x23C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4A4u;
label_23c4a4:
    // 0x23c4a4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c4a8:
    // 0x23c4a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c4ac:
    // 0x23c4ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c4b0:
    // 0x23c4b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c4b4:
    // 0x23c4b4: 0xc043f36  jal         func_10FCD8
label_23c4b8:
    if (ctx->pc == 0x23C4B8u) {
        ctx->pc = 0x23C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B4u;
        // 0x23c4b8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4BCu;
        goto label_23c4bc;
    }
    ctx->pc = 0x23C4B4u;
    SET_GPR_U32(ctx, 31, 0x23C4BCu);
    ctx->pc = 0x23C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4B4u;
    // 0x23c4b8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C4B4u, 0x23C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4BCu;
label_23c4bc:
    // 0x23c4bc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c4c0:
    // 0x23c4c0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_23c4c4:
    if (ctx->pc == 0x23C4C4u) {
        ctx->pc = 0x23C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4C0u;
        // 0x23c4c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4C8u;
        goto label_23c4c8;
    }
    ctx->pc = 0x23C4C0u;
    {
        const bool branch_taken_0x23c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4C0u;
        // 0x23c4c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4c0) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C4C8u;
label_23c4c8:
    // 0x23c4c8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c4c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c4cc:
    // 0x23c4cc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c4ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c4d0:
    // 0x23c4d0: 0x104001fe  beqz        $v0, . + 4 + (0x1FE << 2)
label_23c4d4:
    if (ctx->pc == 0x23C4D4u) {
        ctx->pc = 0x23C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4D0u;
        // 0x23c4d4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4D8u;
        goto label_23c4d8;
    }
    ctx->pc = 0x23C4D0u;
    {
        const bool branch_taken_0x23c4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4D0u;
        // 0x23c4d4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4d0) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C4D8u;
label_23c4d8:
    // 0x23c4d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c4dc:
    // 0x23c4dc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c4e0:
    // 0x23c4e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c4e4:
    // 0x23c4e4: 0xc1078c8  jal         func_41E320
label_23c4e8:
    if (ctx->pc == 0x23C4E8u) {
        ctx->pc = 0x23C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E4u;
        // 0x23c4e8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4ECu;
        goto label_23c4ec;
    }
    ctx->pc = 0x23C4E4u;
    SET_GPR_U32(ctx, 31, 0x23C4ECu);
    ctx->pc = 0x23C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4E4u;
    // 0x23c4e8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C4E4u, 0x23C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4ECu;
label_23c4ec:
    // 0x23c4ec: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c4f0:
    // 0x23c4f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c4f4:
    // 0x23c4f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c4f8:
    // 0x23c4f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c4fc:
    // 0x23c4fc: 0xc043f36  jal         func_10FCD8
label_23c500:
    if (ctx->pc == 0x23C500u) {
        ctx->pc = 0x23C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4FCu;
        // 0x23c500: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C504u;
        goto label_23c504;
    }
    ctx->pc = 0x23C4FCu;
    SET_GPR_U32(ctx, 31, 0x23C504u);
    ctx->pc = 0x23C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4FCu;
    // 0x23c500: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C4FCu, 0x23C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C504u;
label_23c504:
    // 0x23c504: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c508:
    // 0x23c508: 0x1000005a  b           . + 4 + (0x5A << 2)
label_23c50c:
    if (ctx->pc == 0x23C50Cu) {
        ctx->pc = 0x23C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C508u;
        // 0x23c50c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C510u;
        goto label_23c510;
    }
    ctx->pc = 0x23C508u;
    {
        const bool branch_taken_0x23c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C508u;
        // 0x23c50c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c508) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C510u;
label_23c510:
    // 0x23c510: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c514:
    // 0x23c514: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c514u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c518:
    // 0x23c518: 0x104001ec  beqz        $v0, . + 4 + (0x1EC << 2)
label_23c51c:
    if (ctx->pc == 0x23C51Cu) {
        ctx->pc = 0x23C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C518u;
        // 0x23c51c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C520u;
        goto label_23c520;
    }
    ctx->pc = 0x23C518u;
    {
        const bool branch_taken_0x23c518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C518u;
        // 0x23c51c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c518) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C520u;
label_23c520:
    // 0x23c520: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c524:
    // 0x23c524: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c528:
    // 0x23c528: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c528u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c52c:
    // 0x23c52c: 0xc1078c8  jal         func_41E320
label_23c530:
    if (ctx->pc == 0x23C530u) {
        ctx->pc = 0x23C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C52Cu;
        // 0x23c530: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C534u;
        goto label_23c534;
    }
    ctx->pc = 0x23C52Cu;
    SET_GPR_U32(ctx, 31, 0x23C534u);
    ctx->pc = 0x23C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C52Cu;
    // 0x23c530: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C52Cu, 0x23C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C534u;
label_23c534:
    // 0x23c534: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c538:
    // 0x23c538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c53c:
    // 0x23c53c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c540:
    // 0x23c540: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c544:
    // 0x23c544: 0xc043f36  jal         func_10FCD8
label_23c548:
    if (ctx->pc == 0x23C548u) {
        ctx->pc = 0x23C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C544u;
        // 0x23c548: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C54Cu;
        goto label_23c54c;
    }
    ctx->pc = 0x23C544u;
    SET_GPR_U32(ctx, 31, 0x23C54Cu);
    ctx->pc = 0x23C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C544u;
    // 0x23c548: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C544u, 0x23C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C54Cu;
label_23c54c:
    // 0x23c54c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c550:
    // 0x23c550: 0x10000048  b           . + 4 + (0x48 << 2)
label_23c554:
    if (ctx->pc == 0x23C554u) {
        ctx->pc = 0x23C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C550u;
        // 0x23c554: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C558u;
        goto label_23c558;
    }
    ctx->pc = 0x23C550u;
    {
        const bool branch_taken_0x23c550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C550u;
        // 0x23c554: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c550) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C558u;
label_23c558:
    // 0x23c558: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c55c:
    // 0x23c55c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c55cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c560:
    // 0x23c560: 0x104001da  beqz        $v0, . + 4 + (0x1DA << 2)
label_23c564:
    if (ctx->pc == 0x23C564u) {
        ctx->pc = 0x23C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C560u;
        // 0x23c564: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C568u;
        goto label_23c568;
    }
    ctx->pc = 0x23C560u;
    {
        const bool branch_taken_0x23c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C560u;
        // 0x23c564: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c560) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C568u;
label_23c568:
    // 0x23c568: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c56c:
    // 0x23c56c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c570:
    // 0x23c570: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c574:
    // 0x23c574: 0xc1078c8  jal         func_41E320
label_23c578:
    if (ctx->pc == 0x23C578u) {
        ctx->pc = 0x23C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C574u;
        // 0x23c578: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C57Cu;
        goto label_23c57c;
    }
    ctx->pc = 0x23C574u;
    SET_GPR_U32(ctx, 31, 0x23C57Cu);
    ctx->pc = 0x23C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C574u;
    // 0x23c578: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C574u, 0x23C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C57Cu;
label_23c57c:
    // 0x23c57c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c580:
    // 0x23c580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c584:
    // 0x23c584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c588:
    // 0x23c588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c58c:
    // 0x23c58c: 0xc043f36  jal         func_10FCD8
label_23c590:
    if (ctx->pc == 0x23C590u) {
        ctx->pc = 0x23C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C58Cu;
        // 0x23c590: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C594u;
        goto label_23c594;
    }
    ctx->pc = 0x23C58Cu;
    SET_GPR_U32(ctx, 31, 0x23C594u);
    ctx->pc = 0x23C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C58Cu;
    // 0x23c590: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C58Cu, 0x23C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C594u;
label_23c594:
    // 0x23c594: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c598:
    // 0x23c598: 0x10000036  b           . + 4 + (0x36 << 2)
label_23c59c:
    if (ctx->pc == 0x23C59Cu) {
        ctx->pc = 0x23C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C598u;
        // 0x23c59c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5A0u;
        goto label_23c5a0;
    }
    ctx->pc = 0x23C598u;
    {
        const bool branch_taken_0x23c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C598u;
        // 0x23c59c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c598) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C5A0u;
label_23c5a0:
    // 0x23c5a0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c5a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c5a4:
    // 0x23c5a4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c5a4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c5a8:
    // 0x23c5a8: 0x104001c8  beqz        $v0, . + 4 + (0x1C8 << 2)
label_23c5ac:
    if (ctx->pc == 0x23C5ACu) {
        ctx->pc = 0x23C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A8u;
        // 0x23c5ac: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5B0u;
        goto label_23c5b0;
    }
    ctx->pc = 0x23C5A8u;
    {
        const bool branch_taken_0x23c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A8u;
        // 0x23c5ac: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5a8) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C5B0u;
label_23c5b0:
    // 0x23c5b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c5b4:
    // 0x23c5b4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c5b8:
    // 0x23c5b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c5bc:
    // 0x23c5bc: 0xc1078c8  jal         func_41E320
label_23c5c0:
    if (ctx->pc == 0x23C5C0u) {
        ctx->pc = 0x23C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5BCu;
        // 0x23c5c0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5C4u;
        goto label_23c5c4;
    }
    ctx->pc = 0x23C5BCu;
    SET_GPR_U32(ctx, 31, 0x23C5C4u);
    ctx->pc = 0x23C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5BCu;
    // 0x23c5c0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C5BCu, 0x23C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5C4u;
label_23c5c4:
    // 0x23c5c4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c5c8:
    // 0x23c5c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c5cc:
    // 0x23c5cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c5d0:
    // 0x23c5d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c5d4:
    // 0x23c5d4: 0xc043f36  jal         func_10FCD8
label_23c5d8:
    if (ctx->pc == 0x23C5D8u) {
        ctx->pc = 0x23C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5D4u;
        // 0x23c5d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5DCu;
        goto label_23c5dc;
    }
    ctx->pc = 0x23C5D4u;
    SET_GPR_U32(ctx, 31, 0x23C5DCu);
    ctx->pc = 0x23C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5D4u;
    // 0x23c5d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C5D4u, 0x23C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5DCu;
label_23c5dc:
    // 0x23c5dc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c5e0:
    // 0x23c5e0: 0x10000024  b           . + 4 + (0x24 << 2)
label_23c5e4:
    if (ctx->pc == 0x23C5E4u) {
        ctx->pc = 0x23C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5E0u;
        // 0x23c5e4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5E8u;
        goto label_23c5e8;
    }
    ctx->pc = 0x23C5E0u;
    {
        const bool branch_taken_0x23c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5E0u;
        // 0x23c5e4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5e0) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C5E8u;
label_23c5e8:
    // 0x23c5e8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c5ec:
    // 0x23c5ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c5ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c5f0:
    // 0x23c5f0: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
label_23c5f4:
    if (ctx->pc == 0x23C5F4u) {
        ctx->pc = 0x23C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F0u;
        // 0x23c5f4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5F8u;
        goto label_23c5f8;
    }
    ctx->pc = 0x23C5F0u;
    {
        const bool branch_taken_0x23c5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F0u;
        // 0x23c5f4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5f0) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C5F8u;
label_23c5f8:
    // 0x23c5f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c5fc:
    // 0x23c5fc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c600:
    // 0x23c600: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c600u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c604:
    // 0x23c604: 0xc1078c8  jal         func_41E320
label_23c608:
    if (ctx->pc == 0x23C608u) {
        ctx->pc = 0x23C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C604u;
        // 0x23c608: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C60Cu;
        goto label_23c60c;
    }
    ctx->pc = 0x23C604u;
    SET_GPR_U32(ctx, 31, 0x23C60Cu);
    ctx->pc = 0x23C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C604u;
    // 0x23c608: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C604u, 0x23C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C60Cu;
label_23c60c:
    // 0x23c60c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c610:
    // 0x23c610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c614:
    // 0x23c614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c618:
    // 0x23c618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c61c:
    // 0x23c61c: 0xc043f36  jal         func_10FCD8
label_23c620:
    if (ctx->pc == 0x23C620u) {
        ctx->pc = 0x23C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C61Cu;
        // 0x23c620: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C624u;
        goto label_23c624;
    }
    ctx->pc = 0x23C61Cu;
    SET_GPR_U32(ctx, 31, 0x23C624u);
    ctx->pc = 0x23C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C61Cu;
    // 0x23c620: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C61Cu, 0x23C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C624u;
label_23c624:
    // 0x23c624: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c628:
    // 0x23c628: 0x10000012  b           . + 4 + (0x12 << 2)
label_23c62c:
    if (ctx->pc == 0x23C62Cu) {
        ctx->pc = 0x23C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C628u;
        // 0x23c62c: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C630u;
        goto label_23c630;
    }
    ctx->pc = 0x23C628u;
    {
        const bool branch_taken_0x23c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C628u;
        // 0x23c62c: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c628) {
            ctx->pc = 0x23C674u;
            goto label_23c674;
        }
    }
    ctx->pc = 0x23C630u;
label_23c630:
    // 0x23c630: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c634:
    // 0x23c634: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c634u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c638:
    // 0x23c638: 0x104001a4  beqz        $v0, . + 4 + (0x1A4 << 2)
label_23c63c:
    if (ctx->pc == 0x23C63Cu) {
        ctx->pc = 0x23C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C638u;
        // 0x23c63c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C640u;
        goto label_23c640;
    }
    ctx->pc = 0x23C638u;
    {
        const bool branch_taken_0x23c638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C638u;
        // 0x23c63c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c638) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C640u;
label_23c640:
    // 0x23c640: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c644:
    // 0x23c644: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c648:
    // 0x23c648: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c64c:
    // 0x23c64c: 0xc1078c8  jal         func_41E320
label_23c650:
    if (ctx->pc == 0x23C650u) {
        ctx->pc = 0x23C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C64Cu;
        // 0x23c650: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C654u;
        goto label_23c654;
    }
    ctx->pc = 0x23C64Cu;
    SET_GPR_U32(ctx, 31, 0x23C654u);
    ctx->pc = 0x23C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C64Cu;
    // 0x23c650: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C64Cu, 0x23C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C654u;
label_23c654:
    // 0x23c654: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c658:
    // 0x23c658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c65c:
    // 0x23c65c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c660:
    // 0x23c660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c664:
    // 0x23c664: 0xc043f36  jal         func_10FCD8
label_23c668:
    if (ctx->pc == 0x23C668u) {
        ctx->pc = 0x23C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C664u;
        // 0x23c668: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C66Cu;
        goto label_23c66c;
    }
    ctx->pc = 0x23C664u;
    SET_GPR_U32(ctx, 31, 0x23C66Cu);
    ctx->pc = 0x23C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C664u;
    // 0x23c668: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C664u, 0x23C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C66Cu;
label_23c66c:
    // 0x23c66c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c670:
    // 0x23c670: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x23c670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23c674:
    // 0x23c674: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23c678:
    // 0x23c678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c67c:
    // 0x23c67c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23c680:
    // 0x23c680: 0xc10796c  jal         func_41E5B0
label_23c684:
    if (ctx->pc == 0x23C684u) {
        ctx->pc = 0x23C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C680u;
        // 0x23c684: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C688u;
        goto label_23c688;
    }
    ctx->pc = 0x23C680u;
    SET_GPR_U32(ctx, 31, 0x23C688u);
    ctx->pc = 0x23C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C680u;
    // 0x23c684: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23C680u, 0x23C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C688u;
label_23c688:
    // 0x23c688: 0x1000018c  b           . + 4 + (0x18C << 2)
label_23c68c:
    if (ctx->pc == 0x23C68Cu) {
        ctx->pc = 0x23C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C688u;
        // 0x23c68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C690u;
        goto label_23c690;
    }
    ctx->pc = 0x23C688u;
    {
        const bool branch_taken_0x23c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C688u;
        // 0x23c68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c688) {
            ctx->pc = 0x23CCBCu;
            goto label_23ccbc;
        }
    }
    ctx->pc = 0x23C690u;
label_23c690:
    // 0x23c690: 0xc089998  jal         func_226660
label_23c694:
    if (ctx->pc == 0x23C694u) {
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C698u;
        goto label_23c698;
    }
    ctx->pc = 0x23C690u;
    SET_GPR_U32(ctx, 31, 0x23C698u);
    ctx->pc = 0x23C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C690u;
    // 0x23c694: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x23C690u, 0x23C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C698u;
label_23c698:
    // 0x23c698: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_23c69c:
    if (ctx->pc == 0x23C69Cu) {
        ctx->pc = 0x23C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C698u;
        // 0x23c69c: 0x8ee42c04  lw          $a0, 0x2C04($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6A0u;
        goto label_23c6a0;
    }
    ctx->pc = 0x23C698u;
    {
        const bool branch_taken_0x23c698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C698u;
        // 0x23c69c: 0x8ee42c04  lw          $a0, 0x2C04($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c698) {
            ctx->pc = 0x23C7C4u;
            goto label_23c7c4;
        }
    }
    ctx->pc = 0x23C6A0u;
label_23c6a0:
    // 0x23c6a0: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x23c6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
label_23c6a4:
    // 0x23c6a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23c6a8:
    if (ctx->pc == 0x23C6A8u) {
        ctx->pc = 0x23C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6A4u;
        // 0x23c6a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6ACu;
        goto label_23c6ac;
    }
    ctx->pc = 0x23C6A4u;
    {
        const bool branch_taken_0x23c6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6A4u;
        // 0x23c6a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6a4) {
            ctx->pc = 0x23C6B4u;
            goto label_23c6b4;
        }
    }
    ctx->pc = 0x23C6ACu;
label_23c6ac:
    // 0x23c6ac: 0x3a020004  xori        $v0, $s0, 0x4
    ctx->pc = 0x23c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
label_23c6b0:
    // 0x23c6b0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x23c6b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23c6b4:
    // 0x23c6b4: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
label_23c6b8:
    if (ctx->pc == 0x23C6B8u) {
        ctx->pc = 0x23C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6B4u;
        // 0x23c6b8: 0x92620109  lbu         $v0, 0x109($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 265)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6BCu;
        goto label_23c6bc;
    }
    ctx->pc = 0x23C6B4u;
    {
        const bool branch_taken_0x23c6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6b4) {
            ctx->pc = 0x23C6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C6B4u;
            // 0x23c6b8: 0x92620109  lbu         $v0, 0x109($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 265)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C778u;
            goto label_23c778;
        }
    }
    ctx->pc = 0x23C6BCu;
label_23c6bc:
    // 0x23c6bc: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c6bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c6c0:
    // 0x23c6c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c6c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c6c4:
    // 0x23c6c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23c6c8:
    if (ctx->pc == 0x23C6C8u) {
        ctx->pc = 0x23C6CCu;
        goto label_23c6cc;
    }
    ctx->pc = 0x23C6C4u;
    {
        const bool branch_taken_0x23c6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6c4) {
            ctx->pc = 0x23C6D4u;
            goto label_23c6d4;
        }
    }
    ctx->pc = 0x23C6CCu;
label_23c6cc:
    // 0x23c6cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_23c6d0:
    if (ctx->pc == 0x23C6D0u) {
        ctx->pc = 0x23C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6CCu;
        // 0x23c6d0: 0x8e540380  lw          $s4, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6D4u;
        goto label_23c6d4;
    }
    ctx->pc = 0x23C6CCu;
    {
        const bool branch_taken_0x23c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6CCu;
        // 0x23c6d0: 0x8e540380  lw          $s4, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6cc) {
            ctx->pc = 0x23C6E0u;
            goto label_23c6e0;
        }
    }
    ctx->pc = 0x23C6D4u;
label_23c6d4:
    // 0x23c6d4: 0xc05959e  jal         func_165678
label_23c6d8:
    if (ctx->pc == 0x23C6D8u) {
        ctx->pc = 0x23C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6D4u;
        // 0x23c6d8: 0x8ec4020c  lw          $a0, 0x20C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6DCu;
        goto label_23c6dc;
    }
    ctx->pc = 0x23C6D4u;
    SET_GPR_U32(ctx, 31, 0x23C6DCu);
    ctx->pc = 0x23C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6D4u;
    // 0x23c6d8: 0x8ec4020c  lw          $a0, 0x20C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x23C6D4u, 0x23C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6DCu;
label_23c6dc:
    // 0x23c6dc: 0x8c540380  lw          $s4, 0x380($v0)
    ctx->pc = 0x23c6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_23c6e0:
    // 0x23c6e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c6e4:
    // 0x23c6e4: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23c6e8:
    // 0x23c6e8: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c6ec:
    // 0x23c6ec: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23c6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c6f0:
    // 0x23c6f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c6f4:
    // 0x23c6f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23c6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c6f8:
    // 0x23c6f8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23c6fc:
    // 0x23c6fc: 0xc10796c  jal         func_41E5B0
label_23c700:
    if (ctx->pc == 0x23C700u) {
        ctx->pc = 0x23C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6FCu;
        // 0x23c700: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C704u;
        goto label_23c704;
    }
    ctx->pc = 0x23C6FCu;
    SET_GPR_U32(ctx, 31, 0x23C704u);
    ctx->pc = 0x23C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6FCu;
    // 0x23c700: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23C6FCu, 0x23C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C704u;
label_23c704:
    // 0x23c704: 0x8ee42c04  lw          $a0, 0x2C04($s7)
    ctx->pc = 0x23c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
label_23c708:
    // 0x23c708: 0xc0e44cc  jal         func_391330
label_23c70c:
    if (ctx->pc == 0x23C70Cu) {
        ctx->pc = 0x23C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C708u;
        // 0x23c70c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C710u;
        goto label_23c710;
    }
    ctx->pc = 0x23C708u;
    SET_GPR_U32(ctx, 31, 0x23C710u);
    ctx->pc = 0x23C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C708u;
    // 0x23c70c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23C708u, 0x23C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C710u;
label_23c710:
    // 0x23c710: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x23c710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_23c714:
    // 0x23c714: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x23c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c718:
    // 0x23c718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23c71c:
    // 0x23c71c: 0x0  nop
    ctx->pc = 0x23c71cu;
    // NOP
label_23c720:
    // 0x23c720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23c720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23c724:
    // 0x23c724: 0xc44c0380  lwc1        $f12, 0x380($v0)
    ctx->pc = 0x23c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23c728:
    // 0x23c728: 0xc10b1c6  jal         func_42C718
label_23c72c:
    if (ctx->pc == 0x23C72Cu) {
        ctx->pc = 0x23C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C728u;
        // 0x23c72c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C730u;
        goto label_23c730;
    }
    ctx->pc = 0x23C728u;
    SET_GPR_U32(ctx, 31, 0x23C730u);
    ctx->pc = 0x23C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C728u;
    // 0x23c72c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x23C728u, 0x23C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C730u;
label_23c730:
    // 0x23c730: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c734:
    // 0x23c734: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c738:
    // 0x23c738: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c73c:
    // 0x23c73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23c73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c740:
    // 0x23c740: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23c740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23c744:
    // 0x23c744: 0xc10796c  jal         func_41E5B0
label_23c748:
    if (ctx->pc == 0x23C748u) {
        ctx->pc = 0x23C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C744u;
        // 0x23c748: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C74Cu;
        goto label_23c74c;
    }
    ctx->pc = 0x23C744u;
    SET_GPR_U32(ctx, 31, 0x23C74Cu);
    ctx->pc = 0x23C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C744u;
    // 0x23c748: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23C744u, 0x23C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C74Cu;
label_23c74c:
    // 0x23c74c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c750:
    // 0x23c750: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c754:
    // 0x23c754: 0xc1078c8  jal         func_41E320
label_23c758:
    if (ctx->pc == 0x23C758u) {
        ctx->pc = 0x23C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C754u;
        // 0x23c758: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C75Cu;
        goto label_23c75c;
    }
    ctx->pc = 0x23C754u;
    SET_GPR_U32(ctx, 31, 0x23C75Cu);
    ctx->pc = 0x23C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C754u;
    // 0x23c758: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C754u, 0x23C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C75Cu;
label_23c75c:
    // 0x23c75c: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x23c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_23c760:
    // 0x23c760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c764:
    // 0x23c764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c768:
    // 0x23c768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c76c:
    // 0x23c76c: 0xc043f36  jal         func_10FCD8
label_23c770:
    if (ctx->pc == 0x23C770u) {
        ctx->pc = 0x23C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C76Cu;
        // 0x23c770: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C774u;
        goto label_23c774;
    }
    ctx->pc = 0x23C76Cu;
    SET_GPR_U32(ctx, 31, 0x23C774u);
    ctx->pc = 0x23C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C76Cu;
    // 0x23c770: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C76Cu, 0x23C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C774u;
label_23c774:
    // 0x23c774: 0x92620109  lbu         $v0, 0x109($s3)
    ctx->pc = 0x23c774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 265)));
label_23c778:
    // 0x23c778: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
label_23c77c:
    if (ctx->pc == 0x23C77Cu) {
        ctx->pc = 0x23C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C778u;
        // 0x23c77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C780u;
        goto label_23c780;
    }
    ctx->pc = 0x23C778u;
    {
        const bool branch_taken_0x23c778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C778u;
        // 0x23c77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c778) {
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23C780u;
label_23c780:
    // 0x23c780: 0xc104b72  jal         func_412DC8
label_23c784:
    if (ctx->pc == 0x23C784u) {
        ctx->pc = 0x23C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C780u;
        // 0x23c784: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C788u;
        goto label_23c788;
    }
    ctx->pc = 0x23C780u;
    SET_GPR_U32(ctx, 31, 0x23C788u);
    ctx->pc = 0x23C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C780u;
    // 0x23c784: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x23C780u, 0x23C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C788u;
label_23c788:
    // 0x23c788: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x23c788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_23c78c:
    // 0x23c78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c790:
    // 0x23c790: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x23c790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_23c794:
    // 0x23c794: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x23c794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_23c798:
    // 0x23c798: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23c79c:
    // 0x23c79c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c7a0:
    // 0x23c7a0: 0xc088708  jal         func_221C20
label_23c7a4:
    if (ctx->pc == 0x23C7A4u) {
        ctx->pc = 0x23C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7A0u;
        // 0x23c7a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7A8u;
        goto label_23c7a8;
    }
    ctx->pc = 0x23C7A0u;
    SET_GPR_U32(ctx, 31, 0x23C7A8u);
    ctx->pc = 0x23C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7A0u;
    // 0x23c7a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x23C7A0u, 0x23C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7A8u;
label_23c7a8:
    // 0x23c7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c7ac:
    // 0x23c7ac: 0x2405029b  addiu       $a1, $zero, 0x29B
    ctx->pc = 0x23c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 667));
label_23c7b0:
    // 0x23c7b0: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x23c7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_23c7b4:
    // 0x23c7b4: 0xc096b7a  jal         func_25ADE8
label_23c7b8:
    if (ctx->pc == 0x23C7B8u) {
        ctx->pc = 0x23C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7B4u;
        // 0x23c7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7BCu;
        goto label_23c7bc;
    }
    ctx->pc = 0x23C7B4u;
    SET_GPR_U32(ctx, 31, 0x23C7BCu);
    ctx->pc = 0x23C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7B4u;
    // 0x23c7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADE8u, 0x23C7B4u, 0x23C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7BCu;
label_23c7bc:
    // 0x23c7bc: 0x10000144  b           . + 4 + (0x144 << 2)
label_23c7c0:
    if (ctx->pc == 0x23C7C0u) {
        ctx->pc = 0x23C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7BCu;
        // 0x23c7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7C4u;
        goto label_23c7c4;
    }
    ctx->pc = 0x23C7BCu;
    {
        const bool branch_taken_0x23c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7BCu;
        // 0x23c7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7bc) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23C7C4u;
label_23c7c4:
    // 0x23c7c4: 0xc0e44cc  jal         func_391330
label_23c7c8:
    if (ctx->pc == 0x23C7C8u) {
        ctx->pc = 0x23C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7C4u;
        // 0x23c7c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7CCu;
        goto label_23c7cc;
    }
    ctx->pc = 0x23C7C4u;
    SET_GPR_U32(ctx, 31, 0x23C7CCu);
    ctx->pc = 0x23C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7C4u;
    // 0x23c7c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23C7C4u, 0x23C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7CCu;
label_23c7cc:
    // 0x23c7cc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x23c7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_23c7d0:
    // 0x23c7d0: 0x24440043  addiu       $a0, $v0, 0x43
    ctx->pc = 0x23c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 67));
label_23c7d4:
    // 0x23c7d4: 0xc10c313  jal         func_430C4C
label_23c7d8:
    if (ctx->pc == 0x23C7D8u) {
        ctx->pc = 0x23C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7D4u;
        // 0x23c7d8: 0x24a5c830  addiu       $a1, $a1, -0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7DCu;
        goto label_23c7dc;
    }
    ctx->pc = 0x23C7D4u;
    SET_GPR_U32(ctx, 31, 0x23C7DCu);
    ctx->pc = 0x23C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7D4u;
    // 0x23c7d8: 0x24a5c830  addiu       $a1, $a1, -0x37D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x23C7D4u, 0x23C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7DCu;
label_23c7dc:
    // 0x23c7dc: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
label_23c7e0:
    if (ctx->pc == 0x23C7E0u) {
        ctx->pc = 0x23C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7DCu;
        // 0x23c7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7E4u;
        goto label_23c7e4;
    }
    ctx->pc = 0x23C7DCu;
    {
        const bool branch_taken_0x23c7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7DCu;
        // 0x23c7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7dc) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23C7E4u;
label_23c7e4:
    // 0x23c7e4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c7e8:
    // 0x23c7e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c7e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c7ec:
    // 0x23c7ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_23c7f0:
    if (ctx->pc == 0x23C7F0u) {
        ctx->pc = 0x23C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7ECu;
        // 0x23c7f0: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7F4u;
        goto label_23c7f4;
    }
    ctx->pc = 0x23C7ECu;
    {
        const bool branch_taken_0x23c7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7ECu;
        // 0x23c7f0: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7ec) {
            ctx->pc = 0x23C820u;
            goto label_23c820;
        }
    }
    ctx->pc = 0x23C7F4u;
label_23c7f4:
    // 0x23c7f4: 0x26440257  addiu       $a0, $s2, 0x257
    ctx->pc = 0x23c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 599));
label_23c7f8:
    // 0x23c7f8: 0xc10c313  jal         func_430C4C
label_23c7fc:
    if (ctx->pc == 0x23C7FCu) {
        ctx->pc = 0x23C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7F8u;
        // 0x23c7fc: 0x24a5c840  addiu       $a1, $a1, -0x37C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C800u;
        goto label_23c800;
    }
    ctx->pc = 0x23C7F8u;
    SET_GPR_U32(ctx, 31, 0x23C800u);
    ctx->pc = 0x23C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7F8u;
    // 0x23c7fc: 0x24a5c840  addiu       $a1, $a1, -0x37C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x23C7F8u, 0x23C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C800u;
label_23c800:
    // 0x23c800: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c804:
    if (ctx->pc == 0x23C804u) {
        ctx->pc = 0x23C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C800u;
        // 0x23c804: 0x3a020002  xori        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C808u;
        goto label_23c808;
    }
    ctx->pc = 0x23C800u;
    {
        const bool branch_taken_0x23c800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C800u;
        // 0x23c804: 0x3a020002  xori        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c800) {
            ctx->pc = 0x23C824u;
            goto label_23c824;
        }
    }
    ctx->pc = 0x23C808u;
label_23c808:
    // 0x23c808: 0x8ee42c04  lw          $a0, 0x2C04($s7)
    ctx->pc = 0x23c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
label_23c80c:
    // 0x23c80c: 0xc0e44cc  jal         func_391330
label_23c810:
    if (ctx->pc == 0x23C810u) {
        ctx->pc = 0x23C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C80Cu;
        // 0x23c810: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C814u;
        goto label_23c814;
    }
    ctx->pc = 0x23C80Cu;
    SET_GPR_U32(ctx, 31, 0x23C814u);
    ctx->pc = 0x23C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C80Cu;
    // 0x23c810: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23C80Cu, 0x23C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C814u;
label_23c814:
    // 0x23c814: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x23c814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_23c818:
    // 0x23c818: 0xc0897f2  jal         func_225FC8
label_23c81c:
    if (ctx->pc == 0x23C81Cu) {
        ctx->pc = 0x23C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C818u;
        // 0x23c81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C820u;
        goto label_23c820;
    }
    ctx->pc = 0x23C818u;
    SET_GPR_U32(ctx, 31, 0x23C820u);
    ctx->pc = 0x23C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C818u;
    // 0x23c81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x23C818u, 0x23C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C820u;
label_23c820:
    // 0x23c820: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x23c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
label_23c824:
    // 0x23c824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23c828:
    if (ctx->pc == 0x23C828u) {
        ctx->pc = 0x23C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C824u;
        // 0x23c828: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C82Cu;
        goto label_23c82c;
    }
    ctx->pc = 0x23C824u;
    {
        const bool branch_taken_0x23c824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C824u;
        // 0x23c828: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c824) {
            ctx->pc = 0x23C834u;
            goto label_23c834;
        }
    }
    ctx->pc = 0x23C82Cu;
label_23c82c:
    // 0x23c82c: 0x3a020004  xori        $v0, $s0, 0x4
    ctx->pc = 0x23c82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
label_23c830:
    // 0x23c830: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x23c830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23c834:
    // 0x23c834: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
label_23c838:
    if (ctx->pc == 0x23C838u) {
        ctx->pc = 0x23C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C834u;
        // 0x23c838: 0x92620109  lbu         $v0, 0x109($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 265)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C83Cu;
        goto label_23c83c;
    }
    ctx->pc = 0x23C834u;
    {
        const bool branch_taken_0x23c834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c834) {
            ctx->pc = 0x23C838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C834u;
            // 0x23c838: 0x92620109  lbu         $v0, 0x109($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 265)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C8F8u;
            goto label_23c8f8;
        }
    }
    ctx->pc = 0x23C83Cu;
label_23c83c:
    // 0x23c83c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c840:
    // 0x23c840: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c840u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c844:
    // 0x23c844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23c848:
    if (ctx->pc == 0x23C848u) {
        ctx->pc = 0x23C84Cu;
        goto label_23c84c;
    }
    ctx->pc = 0x23C844u;
    {
        const bool branch_taken_0x23c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c844) {
            ctx->pc = 0x23C854u;
            goto label_23c854;
        }
    }
    ctx->pc = 0x23C84Cu;
label_23c84c:
    // 0x23c84c: 0x10000004  b           . + 4 + (0x4 << 2)
label_23c850:
    if (ctx->pc == 0x23C850u) {
        ctx->pc = 0x23C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C84Cu;
        // 0x23c850: 0x8e540380  lw          $s4, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C854u;
        goto label_23c854;
    }
    ctx->pc = 0x23C84Cu;
    {
        const bool branch_taken_0x23c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C84Cu;
        // 0x23c850: 0x8e540380  lw          $s4, 0x380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c84c) {
            ctx->pc = 0x23C860u;
            goto label_23c860;
        }
    }
    ctx->pc = 0x23C854u;
label_23c854:
    // 0x23c854: 0xc05959e  jal         func_165678
label_23c858:
    if (ctx->pc == 0x23C858u) {
        ctx->pc = 0x23C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C854u;
        // 0x23c858: 0x8ec4020c  lw          $a0, 0x20C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C85Cu;
        goto label_23c85c;
    }
    ctx->pc = 0x23C854u;
    SET_GPR_U32(ctx, 31, 0x23C85Cu);
    ctx->pc = 0x23C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C854u;
    // 0x23c858: 0x8ec4020c  lw          $a0, 0x20C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x23C854u, 0x23C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C85Cu;
label_23c85c:
    // 0x23c85c: 0x8c540380  lw          $s4, 0x380($v0)
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_23c860:
    // 0x23c860: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c864:
    // 0x23c864: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23c864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23c868:
    // 0x23c868: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c86c:
    // 0x23c86c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23c86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c870:
    // 0x23c870: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c874:
    // 0x23c874: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23c874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c878:
    // 0x23c878: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23c878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23c87c:
    // 0x23c87c: 0xc10796c  jal         func_41E5B0
label_23c880:
    if (ctx->pc == 0x23C880u) {
        ctx->pc = 0x23C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C87Cu;
        // 0x23c880: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C884u;
        goto label_23c884;
    }
    ctx->pc = 0x23C87Cu;
    SET_GPR_U32(ctx, 31, 0x23C884u);
    ctx->pc = 0x23C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C87Cu;
    // 0x23c880: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23C87Cu, 0x23C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C884u;
label_23c884:
    // 0x23c884: 0x8ee42c04  lw          $a0, 0x2C04($s7)
    ctx->pc = 0x23c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
label_23c888:
    // 0x23c888: 0xc0e44cc  jal         func_391330
label_23c88c:
    if (ctx->pc == 0x23C88Cu) {
        ctx->pc = 0x23C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C888u;
        // 0x23c88c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C890u;
        goto label_23c890;
    }
    ctx->pc = 0x23C888u;
    SET_GPR_U32(ctx, 31, 0x23C890u);
    ctx->pc = 0x23C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C888u;
    // 0x23c88c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23C888u, 0x23C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C890u;
label_23c890:
    // 0x23c890: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x23c890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_23c894:
    // 0x23c894: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x23c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c898:
    // 0x23c898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23c89c:
    // 0x23c89c: 0x0  nop
    ctx->pc = 0x23c89cu;
    // NOP
label_23c8a0:
    // 0x23c8a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23c8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23c8a4:
    // 0x23c8a4: 0xc44c0380  lwc1        $f12, 0x380($v0)
    ctx->pc = 0x23c8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23c8a8:
    // 0x23c8a8: 0xc10b1c6  jal         func_42C718
label_23c8ac:
    if (ctx->pc == 0x23C8ACu) {
        ctx->pc = 0x23C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8A8u;
        // 0x23c8ac: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8B0u;
        goto label_23c8b0;
    }
    ctx->pc = 0x23C8A8u;
    SET_GPR_U32(ctx, 31, 0x23C8B0u);
    ctx->pc = 0x23C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8A8u;
    // 0x23c8ac: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x23C8A8u, 0x23C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8B0u;
label_23c8b0:
    // 0x23c8b0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c8b4:
    // 0x23c8b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c8b8:
    // 0x23c8b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23c8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c8bc:
    // 0x23c8bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23c8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c8c0:
    // 0x23c8c0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23c8c4:
    // 0x23c8c4: 0xc10796c  jal         func_41E5B0
label_23c8c8:
    if (ctx->pc == 0x23C8C8u) {
        ctx->pc = 0x23C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C4u;
        // 0x23c8c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8CCu;
        goto label_23c8cc;
    }
    ctx->pc = 0x23C8C4u;
    SET_GPR_U32(ctx, 31, 0x23C8CCu);
    ctx->pc = 0x23C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8C4u;
    // 0x23c8c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23C8C4u, 0x23C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8CCu;
label_23c8cc:
    // 0x23c8cc: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23c8d0:
    // 0x23c8d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23c8d4:
    // 0x23c8d4: 0xc1078c8  jal         func_41E320
label_23c8d8:
    if (ctx->pc == 0x23C8D8u) {
        ctx->pc = 0x23C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8D4u;
        // 0x23c8d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8DCu;
        goto label_23c8dc;
    }
    ctx->pc = 0x23C8D4u;
    SET_GPR_U32(ctx, 31, 0x23C8DCu);
    ctx->pc = 0x23C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8D4u;
    // 0x23c8d8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C8D4u, 0x23C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8DCu;
label_23c8dc:
    // 0x23c8dc: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x23c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_23c8e0:
    // 0x23c8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c8e4:
    // 0x23c8e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c8e8:
    // 0x23c8e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c8e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c8ec:
    // 0x23c8ec: 0xc043f36  jal         func_10FCD8
label_23c8f0:
    if (ctx->pc == 0x23C8F0u) {
        ctx->pc = 0x23C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ECu;
        // 0x23c8f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8F4u;
        goto label_23c8f4;
    }
    ctx->pc = 0x23C8ECu;
    SET_GPR_U32(ctx, 31, 0x23C8F4u);
    ctx->pc = 0x23C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8ECu;
    // 0x23c8f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C8ECu, 0x23C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8F4u;
label_23c8f4:
    // 0x23c8f4: 0x92620109  lbu         $v0, 0x109($s3)
    ctx->pc = 0x23c8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 265)));
label_23c8f8:
    // 0x23c8f8: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
label_23c8fc:
    if (ctx->pc == 0x23C8FCu) {
        ctx->pc = 0x23C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F8u;
        // 0x23c8fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C900u;
        goto label_23c900;
    }
    ctx->pc = 0x23C8F8u;
    {
        const bool branch_taken_0x23c8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F8u;
        // 0x23c8fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f8) {
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23C900u;
label_23c900:
    // 0x23c900: 0xc0a3658  jal         func_28D960
label_23c904:
    if (ctx->pc == 0x23C904u) {
        ctx->pc = 0x23C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C900u;
        // 0x23c904: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C908u;
        goto label_23c908;
    }
    ctx->pc = 0x23C900u;
    SET_GPR_U32(ctx, 31, 0x23C908u);
    ctx->pc = 0x23C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C900u;
    // 0x23c904: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x23C900u, 0x23C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C908u;
label_23c908:
    // 0x23c908: 0x44000ee  bltz        $v0, . + 4 + (0xEE << 2)
label_23c90c:
    if (ctx->pc == 0x23C90Cu) {
        ctx->pc = 0x23C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C908u;
        // 0x23c90c: 0x8ee42c04  lw          $a0, 0x2C04($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C910u;
        goto label_23c910;
    }
    ctx->pc = 0x23C908u;
    {
        const bool branch_taken_0x23c908 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C908u;
        // 0x23c90c: 0x8ee42c04  lw          $a0, 0x2C04($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c908) {
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23C910u;
label_23c910:
    // 0x23c910: 0xc0e44cc  jal         func_391330
label_23c914:
    if (ctx->pc == 0x23C914u) {
        ctx->pc = 0x23C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C910u;
        // 0x23c914: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C918u;
        goto label_23c918;
    }
    ctx->pc = 0x23C910u;
    SET_GPR_U32(ctx, 31, 0x23C918u);
    ctx->pc = 0x23C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C910u;
    // 0x23c914: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23C910u, 0x23C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C918u;
label_23c918:
    // 0x23c918: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x23c918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_23c91c:
    // 0x23c91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23c91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c920:
    // 0x23c920: 0x24a5c840  addiu       $a1, $a1, -0x37C0
    ctx->pc = 0x23c920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953024));
label_23c924:
    // 0x23c924: 0xc10c313  jal         func_430C4C
label_23c928:
    if (ctx->pc == 0x23C928u) {
        ctx->pc = 0x23C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C924u;
        // 0x23c928: 0x26440257  addiu       $a0, $s2, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 599));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C92Cu;
        goto label_23c92c;
    }
    ctx->pc = 0x23C924u;
    SET_GPR_U32(ctx, 31, 0x23C92Cu);
    ctx->pc = 0x23C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C924u;
    // 0x23c928: 0x26440257  addiu       $a0, $s2, 0x257 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 599));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x23C924u, 0x23C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C92Cu;
label_23c92c:
    // 0x23c92c: 0x144000e8  bnez        $v0, . + 4 + (0xE8 << 2)
label_23c930:
    if (ctx->pc == 0x23C930u) {
        ctx->pc = 0x23C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C92Cu;
        // 0x23c930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C934u;
        goto label_23c934;
    }
    ctx->pc = 0x23C92Cu;
    {
        const bool branch_taken_0x23c92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C92Cu;
        // 0x23c930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c92c) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23C934u;
label_23c934:
    // 0x23c934: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x23c934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_23c938:
    // 0x23c938: 0xc0897f2  jal         func_225FC8
label_23c93c:
    if (ctx->pc == 0x23C93Cu) {
        ctx->pc = 0x23C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C938u;
        // 0x23c93c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C940u;
        goto label_23c940;
    }
    ctx->pc = 0x23C938u;
    SET_GPR_U32(ctx, 31, 0x23C940u);
    ctx->pc = 0x23C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C938u;
    // 0x23c93c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x23C938u, 0x23C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C940u;
label_23c940:
    // 0x23c940: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x23c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_23c944:
    // 0x23c944: 0x100000df  b           . + 4 + (0xDF << 2)
label_23c948:
    if (ctx->pc == 0x23C948u) {
        ctx->pc = 0x23C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C944u;
        // 0x23c948: 0xae420278  sw          $v0, 0x278($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C94Cu;
        goto label_23c94c;
    }
    ctx->pc = 0x23C944u;
    {
        const bool branch_taken_0x23c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C944u;
        // 0x23c948: 0xae420278  sw          $v0, 0x278($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c944) {
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23C94Cu;
label_23c94c:
    // 0x23c94c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23c950:
    // 0x23c950: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23c950u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23c954:
    // 0x23c954: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_23c958:
    if (ctx->pc == 0x23C958u) {
        ctx->pc = 0x23C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C954u;
        // 0x23c958: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C95Cu;
        goto label_23c95c;
    }
    ctx->pc = 0x23C954u;
    {
        const bool branch_taken_0x23c954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C954u;
        // 0x23c958: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c954) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C95Cu;
label_23c95c:
    // 0x23c95c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23c960:
    // 0x23c960: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c964:
    // 0x23c964: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23c968:
    // 0x23c968: 0xc107908  jal         func_41E420
label_23c96c:
    if (ctx->pc == 0x23C96Cu) {
        ctx->pc = 0x23C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C968u;
        // 0x23c96c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C970u;
        goto label_23c970;
    }
    ctx->pc = 0x23C968u;
    SET_GPR_U32(ctx, 31, 0x23C970u);
    ctx->pc = 0x23C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C968u;
    // 0x23c96c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x23C968u, 0x23C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C970u;
label_23c970:
    // 0x23c970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23c970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c974:
    // 0x23c974: 0xc1077b4  jal         func_41DED0
label_23c978:
    if (ctx->pc == 0x23C978u) {
        ctx->pc = 0x23C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C974u;
        // 0x23c978: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C97Cu;
        goto label_23c97c;
    }
    ctx->pc = 0x23C974u;
    SET_GPR_U32(ctx, 31, 0x23C97Cu);
    ctx->pc = 0x23C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C974u;
    // 0x23c978: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DED0u, 0x23C974u, 0x23C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C97Cu;
label_23c97c:
    // 0x23c97c: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x23c97cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23c980:
    // 0x23c980: 0x120000d2  beqz        $s0, . + 4 + (0xD2 << 2)
label_23c984:
    if (ctx->pc == 0x23C984u) {
        ctx->pc = 0x23C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C980u;
        // 0x23c984: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C988u;
        goto label_23c988;
    }
    ctx->pc = 0x23C980u;
    {
        const bool branch_taken_0x23c980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C980u;
        // 0x23c984: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c980) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23C988u;
label_23c988:
    // 0x23c988: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23c988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23c98c:
    // 0x23c98c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23c990:
    // 0x23c990: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c994:
    // 0x23c994: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23c994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23c998:
    // 0x23c998: 0xc10796c  jal         func_41E5B0
label_23c99c:
    if (ctx->pc == 0x23C99Cu) {
        ctx->pc = 0x23C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C998u;
        // 0x23c99c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9A0u;
        goto label_23c9a0;
    }
    ctx->pc = 0x23C998u;
    SET_GPR_U32(ctx, 31, 0x23C9A0u);
    ctx->pc = 0x23C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C998u;
    // 0x23c99c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23C998u, 0x23C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9A0u;
label_23c9a0:
    // 0x23c9a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23c9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23c9a4:
    // 0x23c9a4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c9a8:
    // 0x23c9a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x23c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23c9ac:
    // 0x23c9ac: 0xc1078c8  jal         func_41E320
label_23c9b0:
    if (ctx->pc == 0x23C9B0u) {
        ctx->pc = 0x23C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9ACu;
        // 0x23c9b0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9B4u;
        goto label_23c9b4;
    }
    ctx->pc = 0x23C9ACu;
    SET_GPR_U32(ctx, 31, 0x23C9B4u);
    ctx->pc = 0x23C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9ACu;
    // 0x23c9b0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23C9ACu, 0x23C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9B4u;
label_23c9b4:
    // 0x23c9b4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23c9b8:
    // 0x23c9b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c9bc:
    // 0x23c9bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c9c0:
    // 0x23c9c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c9c4:
    // 0x23c9c4: 0xc043f36  jal         func_10FCD8
label_23c9c8:
    if (ctx->pc == 0x23C9C8u) {
        ctx->pc = 0x23C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9C4u;
        // 0x23c9c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9CCu;
        goto label_23c9cc;
    }
    ctx->pc = 0x23C9C4u;
    SET_GPR_U32(ctx, 31, 0x23C9CCu);
    ctx->pc = 0x23C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9C4u;
    // 0x23c9c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23C9C4u, 0x23C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9CCu;
label_23c9cc:
    // 0x23c9cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c9d0:
    // 0x23c9d0: 0xc08efa6  jal         func_23BE98
label_23c9d4:
    if (ctx->pc == 0x23C9D4u) {
        ctx->pc = 0x23C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9D0u;
        // 0x23c9d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9D8u;
        goto label_23c9d8;
    }
    ctx->pc = 0x23C9D0u;
    SET_GPR_U32(ctx, 31, 0x23C9D8u);
    ctx->pc = 0x23C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9D0u;
    // 0x23c9d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE98u, 0x23C9D0u, 0x23C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9D8u;
label_23c9d8:
    // 0x23c9d8: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23c9dc:
    // 0x23c9dc: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x23c9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_23c9e0:
    // 0x23c9e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23c9e4:
    if (ctx->pc == 0x23C9E4u) {
        ctx->pc = 0x23C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E0u;
        // 0x23c9e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9E8u;
        goto label_23c9e8;
    }
    ctx->pc = 0x23C9E0u;
    {
        const bool branch_taken_0x23c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E0u;
        // 0x23c9e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9e0) {
            ctx->pc = 0x23C9F4u;
            goto label_23c9f4;
        }
    }
    ctx->pc = 0x23C9E8u;
label_23c9e8:
    // 0x23c9e8: 0xc107444  jal         func_41D110
label_23c9ec:
    if (ctx->pc == 0x23C9ECu) {
        ctx->pc = 0x23C9F0u;
        goto label_23c9f0;
    }
    ctx->pc = 0x23C9E8u;
    SET_GPR_U32(ctx, 31, 0x23C9F0u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x23C9E8u, 0x23C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9F0u;
label_23c9f0:
    // 0x23c9f0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23c9f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c9f4:
    // 0x23c9f4: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
label_23c9f8:
    if (ctx->pc == 0x23C9F8u) {
        ctx->pc = 0x23C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9F4u;
        // 0x23c9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9FCu;
        goto label_23c9fc;
    }
    ctx->pc = 0x23C9F4u;
    {
        const bool branch_taken_0x23c9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9F4u;
        // 0x23c9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9f4) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23C9FCu;
label_23c9fc:
    // 0x23c9fc: 0xc073a8e  jal         func_1CEA38
label_23ca00:
    if (ctx->pc == 0x23CA00u) {
        ctx->pc = 0x23CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9FCu;
        // 0x23ca00: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA04u;
        goto label_23ca04;
    }
    ctx->pc = 0x23C9FCu;
    SET_GPR_U32(ctx, 31, 0x23CA04u);
    ctx->pc = 0x23CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9FCu;
    // 0x23ca00: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x23C9FCu, 0x23CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA04u;
label_23ca04:
    // 0x23ca04: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_23ca08:
    if (ctx->pc == 0x23CA08u) {
        ctx->pc = 0x23CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA04u;
        // 0x23ca08: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA0Cu;
        goto label_23ca0c;
    }
    ctx->pc = 0x23CA04u;
    {
        const bool branch_taken_0x23ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA04u;
        // 0x23ca08: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca04) {
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23CA0Cu;
label_23ca0c:
    // 0x23ca0c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x23ca0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_23ca10:
    // 0x23ca10: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x23ca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_23ca14:
    // 0x23ca14: 0x144000ae  bnez        $v0, . + 4 + (0xAE << 2)
label_23ca18:
    if (ctx->pc == 0x23CA18u) {
        ctx->pc = 0x23CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA14u;
        // 0x23ca18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA1Cu;
        goto label_23ca1c;
    }
    ctx->pc = 0x23CA14u;
    {
        const bool branch_taken_0x23ca14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA14u;
        // 0x23ca18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca14) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CA1Cu;
label_23ca1c:
    // 0x23ca1c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x23ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_23ca20:
    // 0x23ca20: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23ca24:
    // 0x23ca24: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23ca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23ca28:
    // 0x23ca28: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x23ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_23ca2c:
    // 0x23ca2c: 0xc107948  jal         func_41E520
label_23ca30:
    if (ctx->pc == 0x23CA30u) {
        ctx->pc = 0x23CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA2Cu;
        // 0x23ca30: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA34u;
        goto label_23ca34;
    }
    ctx->pc = 0x23CA2Cu;
    SET_GPR_U32(ctx, 31, 0x23CA34u);
    ctx->pc = 0x23CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA2Cu;
    // 0x23ca30: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E520u, 0x23CA2Cu, 0x23CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA34u;
label_23ca34:
    // 0x23ca34: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_23ca38:
    if (ctx->pc == 0x23CA38u) {
        ctx->pc = 0x23CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA34u;
        // 0x23ca38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA3Cu;
        goto label_23ca3c;
    }
    ctx->pc = 0x23CA34u;
    {
        const bool branch_taken_0x23ca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA34u;
        // 0x23ca38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca34) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CA3Cu;
label_23ca3c:
    // 0x23ca3c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23ca3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23ca40:
    // 0x23ca40: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23ca44:
    // 0x23ca44: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
label_23ca48:
    if (ctx->pc == 0x23CA48u) {
        ctx->pc = 0x23CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA44u;
        // 0x23ca48: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA4Cu;
        goto label_23ca4c;
    }
    ctx->pc = 0x23CA44u;
    {
        const bool branch_taken_0x23ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA44u;
        // 0x23ca48: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca44) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23CA4Cu;
label_23ca4c:
    // 0x23ca4c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23ca50:
    // 0x23ca50: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23ca54:
    // 0x23ca54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23ca54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ca58:
    // 0x23ca58: 0xc107908  jal         func_41E420
label_23ca5c:
    if (ctx->pc == 0x23CA5Cu) {
        ctx->pc = 0x23CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA58u;
        // 0x23ca5c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA60u;
        goto label_23ca60;
    }
    ctx->pc = 0x23CA58u;
    SET_GPR_U32(ctx, 31, 0x23CA60u);
    ctx->pc = 0x23CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA58u;
    // 0x23ca5c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x23CA58u, 0x23CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA60u;
label_23ca60:
    // 0x23ca60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23ca60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ca64:
    // 0x23ca64: 0xc1077b4  jal         func_41DED0
label_23ca68:
    if (ctx->pc == 0x23CA68u) {
        ctx->pc = 0x23CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA64u;
        // 0x23ca68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA6Cu;
        goto label_23ca6c;
    }
    ctx->pc = 0x23CA64u;
    SET_GPR_U32(ctx, 31, 0x23CA6Cu);
    ctx->pc = 0x23CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA64u;
    // 0x23ca68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DED0u, 0x23CA64u, 0x23CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA6Cu;
label_23ca6c:
    // 0x23ca6c: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x23ca6cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23ca70:
    // 0x23ca70: 0x12000096  beqz        $s0, . + 4 + (0x96 << 2)
label_23ca74:
    if (ctx->pc == 0x23CA74u) {
        ctx->pc = 0x23CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA70u;
        // 0x23ca74: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA78u;
        goto label_23ca78;
    }
    ctx->pc = 0x23CA70u;
    {
        const bool branch_taken_0x23ca70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA70u;
        // 0x23ca74: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca70) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23CA78u;
label_23ca78:
    // 0x23ca78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ca7c:
    // 0x23ca7c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23ca80:
    // 0x23ca80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23ca80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ca84:
    // 0x23ca84: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23ca88:
    // 0x23ca88: 0xc10796c  jal         func_41E5B0
label_23ca8c:
    if (ctx->pc == 0x23CA8Cu) {
        ctx->pc = 0x23CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA88u;
        // 0x23ca8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA90u;
        goto label_23ca90;
    }
    ctx->pc = 0x23CA88u;
    SET_GPR_U32(ctx, 31, 0x23CA90u);
    ctx->pc = 0x23CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA88u;
    // 0x23ca8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23CA88u, 0x23CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA90u;
label_23ca90:
    // 0x23ca90: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x23ca90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_23ca94:
    // 0x23ca94: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23ca98:
    // 0x23ca98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ca9c:
    // 0x23ca9c: 0xc1078c8  jal         func_41E320
label_23caa0:
    if (ctx->pc == 0x23CAA0u) {
        ctx->pc = 0x23CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA9Cu;
        // 0x23caa0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAA4u;
        goto label_23caa4;
    }
    ctx->pc = 0x23CA9Cu;
    SET_GPR_U32(ctx, 31, 0x23CAA4u);
    ctx->pc = 0x23CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA9Cu;
    // 0x23caa0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23CA9Cu, 0x23CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAA4u;
label_23caa4:
    // 0x23caa4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23caa8:
    // 0x23caa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23caa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23caac:
    // 0x23caac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23caacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cab0:
    // 0x23cab0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23cab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cab4:
    // 0x23cab4: 0xc043f36  jal         func_10FCD8
label_23cab8:
    if (ctx->pc == 0x23CAB8u) {
        ctx->pc = 0x23CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAB4u;
        // 0x23cab8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CABCu;
        goto label_23cabc;
    }
    ctx->pc = 0x23CAB4u;
    SET_GPR_U32(ctx, 31, 0x23CABCu);
    ctx->pc = 0x23CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAB4u;
    // 0x23cab8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23CAB4u, 0x23CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CABCu;
label_23cabc:
    // 0x23cabc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23cac0:
    // 0x23cac0: 0xc08efa6  jal         func_23BE98
label_23cac4:
    if (ctx->pc == 0x23CAC4u) {
        ctx->pc = 0x23CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAC0u;
        // 0x23cac4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAC8u;
        goto label_23cac8;
    }
    ctx->pc = 0x23CAC0u;
    SET_GPR_U32(ctx, 31, 0x23CAC8u);
    ctx->pc = 0x23CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAC0u;
    // 0x23cac4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE98u, 0x23CAC0u, 0x23CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAC8u;
label_23cac8:
    // 0x23cac8: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23cacc:
    // 0x23cacc: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x23caccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_23cad0:
    // 0x23cad0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23cad4:
    if (ctx->pc == 0x23CAD4u) {
        ctx->pc = 0x23CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAD0u;
        // 0x23cad4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAD8u;
        goto label_23cad8;
    }
    ctx->pc = 0x23CAD0u;
    {
        const bool branch_taken_0x23cad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAD0u;
        // 0x23cad4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cad0) {
            ctx->pc = 0x23CAE4u;
            goto label_23cae4;
        }
    }
    ctx->pc = 0x23CAD8u;
label_23cad8:
    // 0x23cad8: 0xc107444  jal         func_41D110
label_23cadc:
    if (ctx->pc == 0x23CADCu) {
        ctx->pc = 0x23CAE0u;
        goto label_23cae0;
    }
    ctx->pc = 0x23CAD8u;
    SET_GPR_U32(ctx, 31, 0x23CAE0u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x23CAD8u, 0x23CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAE0u;
label_23cae0:
    // 0x23cae0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23cae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23cae4:
    // 0x23cae4: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
label_23cae8:
    if (ctx->pc == 0x23CAE8u) {
        ctx->pc = 0x23CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAE4u;
        // 0x23cae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAECu;
        goto label_23caec;
    }
    ctx->pc = 0x23CAE4u;
    {
        const bool branch_taken_0x23cae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAE4u;
        // 0x23cae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cae4) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CAECu;
label_23caec:
    // 0x23caec: 0xc073a8e  jal         func_1CEA38
label_23caf0:
    if (ctx->pc == 0x23CAF0u) {
        ctx->pc = 0x23CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAECu;
        // 0x23caf0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAF4u;
        goto label_23caf4;
    }
    ctx->pc = 0x23CAECu;
    SET_GPR_U32(ctx, 31, 0x23CAF4u);
    ctx->pc = 0x23CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAECu;
    // 0x23caf0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x23CAECu, 0x23CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAF4u;
label_23caf4:
    // 0x23caf4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_23caf8:
    if (ctx->pc == 0x23CAF8u) {
        ctx->pc = 0x23CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAF4u;
        // 0x23caf8: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAFCu;
        goto label_23cafc;
    }
    ctx->pc = 0x23CAF4u;
    {
        const bool branch_taken_0x23caf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAF4u;
        // 0x23caf8: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23caf4) {
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23CAFCu;
label_23cafc:
    // 0x23cafc: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x23cafcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_23cb00:
    // 0x23cb00: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x23cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
label_23cb04:
    // 0x23cb04: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_23cb08:
    if (ctx->pc == 0x23CB08u) {
        ctx->pc = 0x23CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB04u;
        // 0x23cb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB0Cu;
        goto label_23cb0c;
    }
    ctx->pc = 0x23CB04u;
    {
        const bool branch_taken_0x23cb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB04u;
        // 0x23cb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb04) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CB0Cu;
label_23cb0c:
    // 0x23cb0c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x23cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23cb10:
    // 0x23cb10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cb14:
    // 0x23cb14: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23cb18:
    // 0x23cb18: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x23cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_23cb1c:
    // 0x23cb1c: 0xc107948  jal         func_41E520
label_23cb20:
    if (ctx->pc == 0x23CB20u) {
        ctx->pc = 0x23CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB1Cu;
        // 0x23cb20: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB24u;
        goto label_23cb24;
    }
    ctx->pc = 0x23CB1Cu;
    SET_GPR_U32(ctx, 31, 0x23CB24u);
    ctx->pc = 0x23CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB1Cu;
    // 0x23cb20: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E520u, 0x23CB1Cu, 0x23CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB24u;
label_23cb24:
    // 0x23cb24: 0x1000006a  b           . + 4 + (0x6A << 2)
label_23cb28:
    if (ctx->pc == 0x23CB28u) {
        ctx->pc = 0x23CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB24u;
        // 0x23cb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB2Cu;
        goto label_23cb2c;
    }
    ctx->pc = 0x23CB24u;
    {
        const bool branch_taken_0x23cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB24u;
        // 0x23cb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb24) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CB2Cu;
label_23cb2c:
    // 0x23cb2c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23cb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23cb30:
    // 0x23cb30: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23cb30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23cb34:
    // 0x23cb34: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_23cb38:
    if (ctx->pc == 0x23CB38u) {
        ctx->pc = 0x23CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB34u;
        // 0x23cb38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB3Cu;
        goto label_23cb3c;
    }
    ctx->pc = 0x23CB34u;
    {
        const bool branch_taken_0x23cb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB34u;
        // 0x23cb38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb34) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23CB3Cu;
label_23cb3c:
    // 0x23cb3c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23cb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23cb40:
    // 0x23cb40: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x23cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_23cb44:
    // 0x23cb44: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23cb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23cb48:
    // 0x23cb48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23cb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23cb4c:
    // 0x23cb4c: 0xc107908  jal         func_41E420
label_23cb50:
    if (ctx->pc == 0x23CB50u) {
        ctx->pc = 0x23CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB4Cu;
        // 0x23cb50: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB54u;
        goto label_23cb54;
    }
    ctx->pc = 0x23CB4Cu;
    SET_GPR_U32(ctx, 31, 0x23CB54u);
    ctx->pc = 0x23CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB4Cu;
    // 0x23cb50: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x23CB4Cu, 0x23CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB54u;
label_23cb54:
    // 0x23cb54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23cb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23cb58:
    // 0x23cb58: 0xc1077b4  jal         func_41DED0
label_23cb5c:
    if (ctx->pc == 0x23CB5Cu) {
        ctx->pc = 0x23CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB58u;
        // 0x23cb5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB60u;
        goto label_23cb60;
    }
    ctx->pc = 0x23CB58u;
    SET_GPR_U32(ctx, 31, 0x23CB60u);
    ctx->pc = 0x23CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB58u;
    // 0x23cb5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DED0u, 0x23CB58u, 0x23CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB60u;
label_23cb60:
    // 0x23cb60: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x23cb60u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23cb64:
    // 0x23cb64: 0x12000059  beqz        $s0, . + 4 + (0x59 << 2)
label_23cb68:
    if (ctx->pc == 0x23CB68u) {
        ctx->pc = 0x23CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB64u;
        // 0x23cb68: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB6Cu;
        goto label_23cb6c;
    }
    ctx->pc = 0x23CB64u;
    {
        const bool branch_taken_0x23cb64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB64u;
        // 0x23cb68: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb64) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23CB6Cu;
label_23cb6c:
    // 0x23cb6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23cb70:
    // 0x23cb70: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23cb74:
    // 0x23cb74: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23cb78:
    // 0x23cb78: 0xc107908  jal         func_41E420
label_23cb7c:
    if (ctx->pc == 0x23CB7Cu) {
        ctx->pc = 0x23CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB78u;
        // 0x23cb7c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB80u;
        goto label_23cb80;
    }
    ctx->pc = 0x23CB78u;
    SET_GPR_U32(ctx, 31, 0x23CB80u);
    ctx->pc = 0x23CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB78u;
    // 0x23cb7c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x23CB78u, 0x23CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB80u;
label_23cb80:
    // 0x23cb80: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x23cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23cb84:
    // 0x23cb84: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23cb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23cb88:
    // 0x23cb88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23cb8c:
    if (ctx->pc == 0x23CB8Cu) {
        ctx->pc = 0x23CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB88u;
        // 0x23cb8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB90u;
        goto label_23cb90;
    }
    ctx->pc = 0x23CB88u;
    {
        const bool branch_taken_0x23cb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB88u;
        // 0x23cb8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb88) {
            ctx->pc = 0x23CBA8u;
            goto label_23cba8;
        }
    }
    ctx->pc = 0x23CB90u;
label_23cb90:
    // 0x23cb90: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23cb94:
    // 0x23cb94: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23cb98:
    // 0x23cb98: 0xc107908  jal         func_41E420
label_23cb9c:
    if (ctx->pc == 0x23CB9Cu) {
        ctx->pc = 0x23CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB98u;
        // 0x23cb9c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBA0u;
        goto label_23cba0;
    }
    ctx->pc = 0x23CB98u;
    SET_GPR_U32(ctx, 31, 0x23CBA0u);
    ctx->pc = 0x23CB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB98u;
    // 0x23cb9c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x23CB98u, 0x23CBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBA0u;
label_23cba0:
    // 0x23cba0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23cba4:
    if (ctx->pc == 0x23CBA4u) {
        ctx->pc = 0x23CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBA0u;
        // 0x23cba4: 0x2023823  subu        $a3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBA8u;
        goto label_23cba8;
    }
    ctx->pc = 0x23CBA0u;
    {
        const bool branch_taken_0x23cba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBA0u;
        // 0x23cba4: 0x2023823  subu        $a3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cba0) {
            ctx->pc = 0x23CBACu;
            goto label_23cbac;
        }
    }
    ctx->pc = 0x23CBA8u;
label_23cba8:
    // 0x23cba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23cba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cbac:
    // 0x23cbac: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23cbb0:
    // 0x23cbb0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23cbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23cbb4:
    // 0x23cbb4: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23cbb8:
    // 0x23cbb8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23cbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cbbc:
    // 0x23cbbc: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23cbc0:
    // 0x23cbc0: 0xc10796c  jal         func_41E5B0
label_23cbc4:
    if (ctx->pc == 0x23CBC4u) {
        ctx->pc = 0x23CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBC0u;
        // 0x23cbc4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBC8u;
        goto label_23cbc8;
    }
    ctx->pc = 0x23CBC0u;
    SET_GPR_U32(ctx, 31, 0x23CBC8u);
    ctx->pc = 0x23CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBC0u;
    // 0x23cbc4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23CBC0u, 0x23CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBC8u;
label_23cbc8:
    // 0x23cbc8: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23cbcc:
    // 0x23cbcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23cbd0:
    // 0x23cbd0: 0xc1078c8  jal         func_41E320
label_23cbd4:
    if (ctx->pc == 0x23CBD4u) {
        ctx->pc = 0x23CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBD0u;
        // 0x23cbd4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBD8u;
        goto label_23cbd8;
    }
    ctx->pc = 0x23CBD0u;
    SET_GPR_U32(ctx, 31, 0x23CBD8u);
    ctx->pc = 0x23CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBD0u;
    // 0x23cbd4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23CBD0u, 0x23CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBD8u;
label_23cbd8:
    // 0x23cbd8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x23cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_23cbdc:
    // 0x23cbdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23cbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23cbe0:
    // 0x23cbe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23cbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cbe4:
    // 0x23cbe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23cbe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cbe8:
    // 0x23cbe8: 0xc043f36  jal         func_10FCD8
label_23cbec:
    if (ctx->pc == 0x23CBECu) {
        ctx->pc = 0x23CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBE8u;
        // 0x23cbec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBF0u;
        goto label_23cbf0;
    }
    ctx->pc = 0x23CBE8u;
    SET_GPR_U32(ctx, 31, 0x23CBF0u);
    ctx->pc = 0x23CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBE8u;
    // 0x23cbec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23CBE8u, 0x23CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBF0u;
label_23cbf0:
    // 0x23cbf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23cbf4:
    // 0x23cbf4: 0xc08efa6  jal         func_23BE98
label_23cbf8:
    if (ctx->pc == 0x23CBF8u) {
        ctx->pc = 0x23CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBF4u;
        // 0x23cbf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBFCu;
        goto label_23cbfc;
    }
    ctx->pc = 0x23CBF4u;
    SET_GPR_U32(ctx, 31, 0x23CBFCu);
    ctx->pc = 0x23CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CBF4u;
    // 0x23cbf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE98u, 0x23CBF4u, 0x23CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBFCu;
label_23cbfc:
    // 0x23cbfc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_23cc00:
    // 0x23cc00: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x23cc00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_23cc04:
    // 0x23cc04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23cc08:
    if (ctx->pc == 0x23CC08u) {
        ctx->pc = 0x23CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC04u;
        // 0x23cc08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC0Cu;
        goto label_23cc0c;
    }
    ctx->pc = 0x23CC04u;
    {
        const bool branch_taken_0x23cc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC04u;
        // 0x23cc08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc04) {
            ctx->pc = 0x23CC18u;
            goto label_23cc18;
        }
    }
    ctx->pc = 0x23CC0Cu;
label_23cc0c:
    // 0x23cc0c: 0xc107444  jal         func_41D110
label_23cc10:
    if (ctx->pc == 0x23CC10u) {
        ctx->pc = 0x23CC14u;
        goto label_23cc14;
    }
    ctx->pc = 0x23CC0Cu;
    SET_GPR_U32(ctx, 31, 0x23CC14u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x23CC0Cu, 0x23CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC14u;
label_23cc14:
    // 0x23cc14: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23cc14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23cc18:
    // 0x23cc18: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_23cc1c:
    if (ctx->pc == 0x23CC1Cu) {
        ctx->pc = 0x23CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC18u;
        // 0x23cc1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC20u;
        goto label_23cc20;
    }
    ctx->pc = 0x23CC18u;
    {
        const bool branch_taken_0x23cc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC18u;
        // 0x23cc1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc18) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CC20u;
label_23cc20:
    // 0x23cc20: 0xc073a8e  jal         func_1CEA38
label_23cc24:
    if (ctx->pc == 0x23CC24u) {
        ctx->pc = 0x23CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC20u;
        // 0x23cc24: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC28u;
        goto label_23cc28;
    }
    ctx->pc = 0x23CC20u;
    SET_GPR_U32(ctx, 31, 0x23CC28u);
    ctx->pc = 0x23CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC20u;
    // 0x23cc24: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x23CC20u, 0x23CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC28u;
label_23cc28:
    // 0x23cc28: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_23cc2c:
    if (ctx->pc == 0x23CC2Cu) {
        ctx->pc = 0x23CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC28u;
        // 0x23cc2c: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC30u;
        goto label_23cc30;
    }
    ctx->pc = 0x23CC28u;
    {
        const bool branch_taken_0x23cc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC28u;
        // 0x23cc2c: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc28) {
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23CC30u;
label_23cc30:
    // 0x23cc30: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x23cc30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_23cc34:
    // 0x23cc34: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x23cc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_23cc38:
    // 0x23cc38: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_23cc3c:
    if (ctx->pc == 0x23CC3Cu) {
        ctx->pc = 0x23CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC38u;
        // 0x23cc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC40u;
        goto label_23cc40;
    }
    ctx->pc = 0x23CC38u;
    {
        const bool branch_taken_0x23cc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC38u;
        // 0x23cc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc38) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CC40u;
label_23cc40:
    // 0x23cc40: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x23cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_23cc44:
    // 0x23cc44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23cc48:
    // 0x23cc48: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23cc4c:
    // 0x23cc4c: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x23cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_23cc50:
    // 0x23cc50: 0xc107948  jal         func_41E520
label_23cc54:
    if (ctx->pc == 0x23CC54u) {
        ctx->pc = 0x23CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC50u;
        // 0x23cc54: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC58u;
        goto label_23cc58;
    }
    ctx->pc = 0x23CC50u;
    SET_GPR_U32(ctx, 31, 0x23CC58u);
    ctx->pc = 0x23CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC50u;
    // 0x23cc54: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E520u, 0x23CC50u, 0x23CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC58u;
label_23cc58:
    // 0x23cc58: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23cc5c:
    if (ctx->pc == 0x23CC5Cu) {
        ctx->pc = 0x23CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC58u;
        // 0x23cc5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC60u;
        goto label_23cc60;
    }
    ctx->pc = 0x23CC58u;
    {
        const bool branch_taken_0x23cc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC58u;
        // 0x23cc5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc58) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CC60u;
label_23cc60:
    // 0x23cc60: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23cc60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23cc64:
    // 0x23cc64: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23cc64u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23cc68:
    // 0x23cc68: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23cc6c:
    if (ctx->pc == 0x23CC6Cu) {
        ctx->pc = 0x23CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC68u;
        // 0x23cc6c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC70u;
        goto label_23cc70;
    }
    ctx->pc = 0x23CC68u;
    {
        const bool branch_taken_0x23cc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC68u;
        // 0x23cc6c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc68) {
            ctx->pc = 0x23CCCCu;
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23CC70u;
label_23cc70:
    // 0x23cc70: 0x8e670124  lw          $a3, 0x124($s3)
    ctx->pc = 0x23cc70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
label_23cc74:
    // 0x23cc74: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23cc78:
    // 0x23cc78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23cc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23cc7c:
    // 0x23cc7c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_23cc80:
    // 0x23cc80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23cc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cc84:
    // 0x23cc84: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x23cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_23cc88:
    // 0x23cc88: 0xc10796c  jal         func_41E5B0
label_23cc8c:
    if (ctx->pc == 0x23CC8Cu) {
        ctx->pc = 0x23CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC88u;
        // 0x23cc8c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC90u;
        goto label_23cc90;
    }
    ctx->pc = 0x23CC88u;
    SET_GPR_U32(ctx, 31, 0x23CC90u);
    ctx->pc = 0x23CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC88u;
    // 0x23cc8c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x23CC88u, 0x23CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC90u;
label_23cc90:
    // 0x23cc90: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x23cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_23cc94:
    // 0x23cc94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23cc98:
    // 0x23cc98: 0xc1078c8  jal         func_41E320
label_23cc9c:
    if (ctx->pc == 0x23CC9Cu) {
        ctx->pc = 0x23CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC98u;
        // 0x23cc9c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCA0u;
        goto label_23cca0;
    }
    ctx->pc = 0x23CC98u;
    SET_GPR_U32(ctx, 31, 0x23CCA0u);
    ctx->pc = 0x23CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC98u;
    // 0x23cc9c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E320u, 0x23CC98u, 0x23CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCA0u;
label_23cca0:
    // 0x23cca0: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x23cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_23cca4:
    // 0x23cca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23cca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23cca8:
    // 0x23cca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23cca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ccac:
    // 0x23ccac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23ccacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ccb0:
    // 0x23ccb0: 0xc043f36  jal         func_10FCD8
label_23ccb4:
    if (ctx->pc == 0x23CCB4u) {
        ctx->pc = 0x23CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCB0u;
        // 0x23ccb4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCB8u;
        goto label_23ccb8;
    }
    ctx->pc = 0x23CCB0u;
    SET_GPR_U32(ctx, 31, 0x23CCB8u);
    ctx->pc = 0x23CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCB0u;
    // 0x23ccb4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x23CCB0u, 0x23CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCB8u;
label_23ccb8:
    // 0x23ccb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ccbc:
    // 0x23ccbc: 0xc08efa6  jal         func_23BE98
label_23ccc0:
    if (ctx->pc == 0x23CCC0u) {
        ctx->pc = 0x23CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCBCu;
        // 0x23ccc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCC4u;
        goto label_23ccc4;
    }
    ctx->pc = 0x23CCBCu;
    SET_GPR_U32(ctx, 31, 0x23CCC4u);
    ctx->pc = 0x23CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCBCu;
    // 0x23ccc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE98u, 0x23CCBCu, 0x23CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCC4u;
label_23ccc4:
    // 0x23ccc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ccc8:
    if (ctx->pc == 0x23CCC8u) {
        ctx->pc = 0x23CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC4u;
        // 0x23ccc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCCCu;
        goto label_23cccc;
    }
    ctx->pc = 0x23CCC4u;
    {
        const bool branch_taken_0x23ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC4u;
        // 0x23ccc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccc4) {
            ctx->pc = 0x23CCD0u;
            goto label_23ccd0;
        }
    }
    ctx->pc = 0x23CCCCu;
label_23cccc:
    // 0x23cccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23ccccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ccd0:
    // 0x23ccd0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x23ccd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23ccd4:
    // 0x23ccd4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23ccd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23ccd8:
    // 0x23ccd8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x23ccd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23ccdc:
    // 0x23ccdc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23ccdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23cce0:
    // 0x23cce0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23cce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23cce4:
    // 0x23cce4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23cce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23cce8:
    // 0x23cce8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x23cce8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23ccec:
    // 0x23ccec: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x23ccecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ccf0:
    // 0x23ccf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ccf4:
    // 0x23ccf4: 0x3e00008  jr          $ra
label_23ccf8:
    if (ctx->pc == 0x23CCF8u) {
        ctx->pc = 0x23CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF4u;
        // 0x23ccf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCFCu;
        goto label_23ccfc;
    }
    ctx->pc = 0x23CCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF4u;
        // 0x23ccf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CCFCu;
label_23ccfc:
    // 0x23ccfc: 0x0  nop
    ctx->pc = 0x23ccfcu;
    // NOP
    ctx->pc = 0x23cd00u;
}
