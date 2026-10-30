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

// Function: sub_001AF010
// Address: 0x1af010 - 0x1b0024
void sub_001AF010_0x1af010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF010_0x1af010");
#endif

    switch (ctx->pc) {
        case 0x1af010u: goto label_1af010;
        case 0x1af014u: goto label_1af014;
        case 0x1af018u: goto label_1af018;
        case 0x1af01cu: goto label_1af01c;
        case 0x1af020u: goto label_1af020;
        case 0x1af024u: goto label_1af024;
        case 0x1af028u: goto label_1af028;
        case 0x1af02cu: goto label_1af02c;
        case 0x1af030u: goto label_1af030;
        case 0x1af034u: goto label_1af034;
        case 0x1af038u: goto label_1af038;
        case 0x1af03cu: goto label_1af03c;
        case 0x1af040u: goto label_1af040;
        case 0x1af044u: goto label_1af044;
        case 0x1af048u: goto label_1af048;
        case 0x1af04cu: goto label_1af04c;
        case 0x1af050u: goto label_1af050;
        case 0x1af054u: goto label_1af054;
        case 0x1af058u: goto label_1af058;
        case 0x1af05cu: goto label_1af05c;
        case 0x1af060u: goto label_1af060;
        case 0x1af064u: goto label_1af064;
        case 0x1af068u: goto label_1af068;
        case 0x1af06cu: goto label_1af06c;
        case 0x1af070u: goto label_1af070;
        case 0x1af074u: goto label_1af074;
        case 0x1af078u: goto label_1af078;
        case 0x1af07cu: goto label_1af07c;
        case 0x1af080u: goto label_1af080;
        case 0x1af084u: goto label_1af084;
        case 0x1af088u: goto label_1af088;
        case 0x1af08cu: goto label_1af08c;
        case 0x1af090u: goto label_1af090;
        case 0x1af094u: goto label_1af094;
        case 0x1af098u: goto label_1af098;
        case 0x1af09cu: goto label_1af09c;
        case 0x1af0a0u: goto label_1af0a0;
        case 0x1af0a4u: goto label_1af0a4;
        case 0x1af0a8u: goto label_1af0a8;
        case 0x1af0acu: goto label_1af0ac;
        case 0x1af0b0u: goto label_1af0b0;
        case 0x1af0b4u: goto label_1af0b4;
        case 0x1af0b8u: goto label_1af0b8;
        case 0x1af0bcu: goto label_1af0bc;
        case 0x1af0c0u: goto label_1af0c0;
        case 0x1af0c4u: goto label_1af0c4;
        case 0x1af0c8u: goto label_1af0c8;
        case 0x1af0ccu: goto label_1af0cc;
        case 0x1af0d0u: goto label_1af0d0;
        case 0x1af0d4u: goto label_1af0d4;
        case 0x1af0d8u: goto label_1af0d8;
        case 0x1af0dcu: goto label_1af0dc;
        case 0x1af0e0u: goto label_1af0e0;
        case 0x1af0e4u: goto label_1af0e4;
        case 0x1af0e8u: goto label_1af0e8;
        case 0x1af0ecu: goto label_1af0ec;
        case 0x1af0f0u: goto label_1af0f0;
        case 0x1af0f4u: goto label_1af0f4;
        case 0x1af0f8u: goto label_1af0f8;
        case 0x1af0fcu: goto label_1af0fc;
        case 0x1af100u: goto label_1af100;
        case 0x1af104u: goto label_1af104;
        case 0x1af108u: goto label_1af108;
        case 0x1af10cu: goto label_1af10c;
        case 0x1af110u: goto label_1af110;
        case 0x1af114u: goto label_1af114;
        case 0x1af118u: goto label_1af118;
        case 0x1af11cu: goto label_1af11c;
        case 0x1af120u: goto label_1af120;
        case 0x1af124u: goto label_1af124;
        case 0x1af128u: goto label_1af128;
        case 0x1af12cu: goto label_1af12c;
        case 0x1af130u: goto label_1af130;
        case 0x1af134u: goto label_1af134;
        case 0x1af138u: goto label_1af138;
        case 0x1af13cu: goto label_1af13c;
        case 0x1af140u: goto label_1af140;
        case 0x1af144u: goto label_1af144;
        case 0x1af148u: goto label_1af148;
        case 0x1af14cu: goto label_1af14c;
        case 0x1af150u: goto label_1af150;
        case 0x1af154u: goto label_1af154;
        case 0x1af158u: goto label_1af158;
        case 0x1af15cu: goto label_1af15c;
        case 0x1af160u: goto label_1af160;
        case 0x1af164u: goto label_1af164;
        case 0x1af168u: goto label_1af168;
        case 0x1af16cu: goto label_1af16c;
        case 0x1af170u: goto label_1af170;
        case 0x1af174u: goto label_1af174;
        case 0x1af178u: goto label_1af178;
        case 0x1af17cu: goto label_1af17c;
        case 0x1af180u: goto label_1af180;
        case 0x1af184u: goto label_1af184;
        case 0x1af188u: goto label_1af188;
        case 0x1af18cu: goto label_1af18c;
        case 0x1af190u: goto label_1af190;
        case 0x1af194u: goto label_1af194;
        case 0x1af198u: goto label_1af198;
        case 0x1af19cu: goto label_1af19c;
        case 0x1af1a0u: goto label_1af1a0;
        case 0x1af1a4u: goto label_1af1a4;
        case 0x1af1a8u: goto label_1af1a8;
        case 0x1af1acu: goto label_1af1ac;
        case 0x1af1b0u: goto label_1af1b0;
        case 0x1af1b4u: goto label_1af1b4;
        case 0x1af1b8u: goto label_1af1b8;
        case 0x1af1bcu: goto label_1af1bc;
        case 0x1af1c0u: goto label_1af1c0;
        case 0x1af1c4u: goto label_1af1c4;
        case 0x1af1c8u: goto label_1af1c8;
        case 0x1af1ccu: goto label_1af1cc;
        case 0x1af1d0u: goto label_1af1d0;
        case 0x1af1d4u: goto label_1af1d4;
        case 0x1af1d8u: goto label_1af1d8;
        case 0x1af1dcu: goto label_1af1dc;
        case 0x1af1e0u: goto label_1af1e0;
        case 0x1af1e4u: goto label_1af1e4;
        case 0x1af1e8u: goto label_1af1e8;
        case 0x1af1ecu: goto label_1af1ec;
        case 0x1af1f0u: goto label_1af1f0;
        case 0x1af1f4u: goto label_1af1f4;
        case 0x1af1f8u: goto label_1af1f8;
        case 0x1af1fcu: goto label_1af1fc;
        case 0x1af200u: goto label_1af200;
        case 0x1af204u: goto label_1af204;
        case 0x1af208u: goto label_1af208;
        case 0x1af20cu: goto label_1af20c;
        case 0x1af210u: goto label_1af210;
        case 0x1af214u: goto label_1af214;
        case 0x1af218u: goto label_1af218;
        case 0x1af21cu: goto label_1af21c;
        case 0x1af220u: goto label_1af220;
        case 0x1af224u: goto label_1af224;
        case 0x1af228u: goto label_1af228;
        case 0x1af22cu: goto label_1af22c;
        case 0x1af230u: goto label_1af230;
        case 0x1af234u: goto label_1af234;
        case 0x1af238u: goto label_1af238;
        case 0x1af23cu: goto label_1af23c;
        case 0x1af240u: goto label_1af240;
        case 0x1af244u: goto label_1af244;
        case 0x1af248u: goto label_1af248;
        case 0x1af24cu: goto label_1af24c;
        case 0x1af250u: goto label_1af250;
        case 0x1af254u: goto label_1af254;
        case 0x1af258u: goto label_1af258;
        case 0x1af25cu: goto label_1af25c;
        case 0x1af260u: goto label_1af260;
        case 0x1af264u: goto label_1af264;
        case 0x1af268u: goto label_1af268;
        case 0x1af26cu: goto label_1af26c;
        case 0x1af270u: goto label_1af270;
        case 0x1af274u: goto label_1af274;
        case 0x1af278u: goto label_1af278;
        case 0x1af27cu: goto label_1af27c;
        case 0x1af280u: goto label_1af280;
        case 0x1af284u: goto label_1af284;
        case 0x1af288u: goto label_1af288;
        case 0x1af28cu: goto label_1af28c;
        case 0x1af290u: goto label_1af290;
        case 0x1af294u: goto label_1af294;
        case 0x1af298u: goto label_1af298;
        case 0x1af29cu: goto label_1af29c;
        case 0x1af2a0u: goto label_1af2a0;
        case 0x1af2a4u: goto label_1af2a4;
        case 0x1af2a8u: goto label_1af2a8;
        case 0x1af2acu: goto label_1af2ac;
        case 0x1af2b0u: goto label_1af2b0;
        case 0x1af2b4u: goto label_1af2b4;
        case 0x1af2b8u: goto label_1af2b8;
        case 0x1af2bcu: goto label_1af2bc;
        case 0x1af2c0u: goto label_1af2c0;
        case 0x1af2c4u: goto label_1af2c4;
        case 0x1af2c8u: goto label_1af2c8;
        case 0x1af2ccu: goto label_1af2cc;
        case 0x1af2d0u: goto label_1af2d0;
        case 0x1af2d4u: goto label_1af2d4;
        case 0x1af2d8u: goto label_1af2d8;
        case 0x1af2dcu: goto label_1af2dc;
        case 0x1af2e0u: goto label_1af2e0;
        case 0x1af2e4u: goto label_1af2e4;
        case 0x1af2e8u: goto label_1af2e8;
        case 0x1af2ecu: goto label_1af2ec;
        case 0x1af2f0u: goto label_1af2f0;
        case 0x1af2f4u: goto label_1af2f4;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af2fcu: goto label_1af2fc;
        case 0x1af300u: goto label_1af300;
        case 0x1af304u: goto label_1af304;
        case 0x1af308u: goto label_1af308;
        case 0x1af30cu: goto label_1af30c;
        case 0x1af310u: goto label_1af310;
        case 0x1af314u: goto label_1af314;
        case 0x1af318u: goto label_1af318;
        case 0x1af31cu: goto label_1af31c;
        case 0x1af320u: goto label_1af320;
        case 0x1af324u: goto label_1af324;
        case 0x1af328u: goto label_1af328;
        case 0x1af32cu: goto label_1af32c;
        case 0x1af330u: goto label_1af330;
        case 0x1af334u: goto label_1af334;
        case 0x1af338u: goto label_1af338;
        case 0x1af33cu: goto label_1af33c;
        case 0x1af340u: goto label_1af340;
        case 0x1af344u: goto label_1af344;
        case 0x1af348u: goto label_1af348;
        case 0x1af34cu: goto label_1af34c;
        case 0x1af350u: goto label_1af350;
        case 0x1af354u: goto label_1af354;
        case 0x1af358u: goto label_1af358;
        case 0x1af35cu: goto label_1af35c;
        case 0x1af360u: goto label_1af360;
        case 0x1af364u: goto label_1af364;
        case 0x1af368u: goto label_1af368;
        case 0x1af36cu: goto label_1af36c;
        case 0x1af370u: goto label_1af370;
        case 0x1af374u: goto label_1af374;
        case 0x1af378u: goto label_1af378;
        case 0x1af37cu: goto label_1af37c;
        case 0x1af380u: goto label_1af380;
        case 0x1af384u: goto label_1af384;
        case 0x1af388u: goto label_1af388;
        case 0x1af38cu: goto label_1af38c;
        case 0x1af390u: goto label_1af390;
        case 0x1af394u: goto label_1af394;
        case 0x1af398u: goto label_1af398;
        case 0x1af39cu: goto label_1af39c;
        case 0x1af3a0u: goto label_1af3a0;
        case 0x1af3a4u: goto label_1af3a4;
        case 0x1af3a8u: goto label_1af3a8;
        case 0x1af3acu: goto label_1af3ac;
        case 0x1af3b0u: goto label_1af3b0;
        case 0x1af3b4u: goto label_1af3b4;
        case 0x1af3b8u: goto label_1af3b8;
        case 0x1af3bcu: goto label_1af3bc;
        case 0x1af3c0u: goto label_1af3c0;
        case 0x1af3c4u: goto label_1af3c4;
        case 0x1af3c8u: goto label_1af3c8;
        case 0x1af3ccu: goto label_1af3cc;
        case 0x1af3d0u: goto label_1af3d0;
        case 0x1af3d4u: goto label_1af3d4;
        case 0x1af3d8u: goto label_1af3d8;
        case 0x1af3dcu: goto label_1af3dc;
        case 0x1af3e0u: goto label_1af3e0;
        case 0x1af3e4u: goto label_1af3e4;
        case 0x1af3e8u: goto label_1af3e8;
        case 0x1af3ecu: goto label_1af3ec;
        case 0x1af3f0u: goto label_1af3f0;
        case 0x1af3f4u: goto label_1af3f4;
        case 0x1af3f8u: goto label_1af3f8;
        case 0x1af3fcu: goto label_1af3fc;
        case 0x1af400u: goto label_1af400;
        case 0x1af404u: goto label_1af404;
        case 0x1af408u: goto label_1af408;
        case 0x1af40cu: goto label_1af40c;
        case 0x1af410u: goto label_1af410;
        case 0x1af414u: goto label_1af414;
        case 0x1af418u: goto label_1af418;
        case 0x1af41cu: goto label_1af41c;
        case 0x1af420u: goto label_1af420;
        case 0x1af424u: goto label_1af424;
        case 0x1af428u: goto label_1af428;
        case 0x1af42cu: goto label_1af42c;
        case 0x1af430u: goto label_1af430;
        case 0x1af434u: goto label_1af434;
        case 0x1af438u: goto label_1af438;
        case 0x1af43cu: goto label_1af43c;
        case 0x1af440u: goto label_1af440;
        case 0x1af444u: goto label_1af444;
        case 0x1af448u: goto label_1af448;
        case 0x1af44cu: goto label_1af44c;
        case 0x1af450u: goto label_1af450;
        case 0x1af454u: goto label_1af454;
        case 0x1af458u: goto label_1af458;
        case 0x1af45cu: goto label_1af45c;
        case 0x1af460u: goto label_1af460;
        case 0x1af464u: goto label_1af464;
        case 0x1af468u: goto label_1af468;
        case 0x1af46cu: goto label_1af46c;
        case 0x1af470u: goto label_1af470;
        case 0x1af474u: goto label_1af474;
        case 0x1af478u: goto label_1af478;
        case 0x1af47cu: goto label_1af47c;
        case 0x1af480u: goto label_1af480;
        case 0x1af484u: goto label_1af484;
        case 0x1af488u: goto label_1af488;
        case 0x1af48cu: goto label_1af48c;
        case 0x1af490u: goto label_1af490;
        case 0x1af494u: goto label_1af494;
        case 0x1af498u: goto label_1af498;
        case 0x1af49cu: goto label_1af49c;
        case 0x1af4a0u: goto label_1af4a0;
        case 0x1af4a4u: goto label_1af4a4;
        case 0x1af4a8u: goto label_1af4a8;
        case 0x1af4acu: goto label_1af4ac;
        case 0x1af4b0u: goto label_1af4b0;
        case 0x1af4b4u: goto label_1af4b4;
        case 0x1af4b8u: goto label_1af4b8;
        case 0x1af4bcu: goto label_1af4bc;
        case 0x1af4c0u: goto label_1af4c0;
        case 0x1af4c4u: goto label_1af4c4;
        case 0x1af4c8u: goto label_1af4c8;
        case 0x1af4ccu: goto label_1af4cc;
        case 0x1af4d0u: goto label_1af4d0;
        case 0x1af4d4u: goto label_1af4d4;
        case 0x1af4d8u: goto label_1af4d8;
        case 0x1af4dcu: goto label_1af4dc;
        case 0x1af4e0u: goto label_1af4e0;
        case 0x1af4e4u: goto label_1af4e4;
        case 0x1af4e8u: goto label_1af4e8;
        case 0x1af4ecu: goto label_1af4ec;
        case 0x1af4f0u: goto label_1af4f0;
        case 0x1af4f4u: goto label_1af4f4;
        case 0x1af4f8u: goto label_1af4f8;
        case 0x1af4fcu: goto label_1af4fc;
        case 0x1af500u: goto label_1af500;
        case 0x1af504u: goto label_1af504;
        case 0x1af508u: goto label_1af508;
        case 0x1af50cu: goto label_1af50c;
        case 0x1af510u: goto label_1af510;
        case 0x1af514u: goto label_1af514;
        case 0x1af518u: goto label_1af518;
        case 0x1af51cu: goto label_1af51c;
        case 0x1af520u: goto label_1af520;
        case 0x1af524u: goto label_1af524;
        case 0x1af528u: goto label_1af528;
        case 0x1af52cu: goto label_1af52c;
        case 0x1af530u: goto label_1af530;
        case 0x1af534u: goto label_1af534;
        case 0x1af538u: goto label_1af538;
        case 0x1af53cu: goto label_1af53c;
        case 0x1af540u: goto label_1af540;
        case 0x1af544u: goto label_1af544;
        case 0x1af548u: goto label_1af548;
        case 0x1af54cu: goto label_1af54c;
        case 0x1af550u: goto label_1af550;
        case 0x1af554u: goto label_1af554;
        case 0x1af558u: goto label_1af558;
        case 0x1af55cu: goto label_1af55c;
        case 0x1af560u: goto label_1af560;
        case 0x1af564u: goto label_1af564;
        case 0x1af568u: goto label_1af568;
        case 0x1af56cu: goto label_1af56c;
        case 0x1af570u: goto label_1af570;
        case 0x1af574u: goto label_1af574;
        case 0x1af578u: goto label_1af578;
        case 0x1af57cu: goto label_1af57c;
        case 0x1af580u: goto label_1af580;
        case 0x1af584u: goto label_1af584;
        case 0x1af588u: goto label_1af588;
        case 0x1af58cu: goto label_1af58c;
        case 0x1af590u: goto label_1af590;
        case 0x1af594u: goto label_1af594;
        case 0x1af598u: goto label_1af598;
        case 0x1af59cu: goto label_1af59c;
        case 0x1af5a0u: goto label_1af5a0;
        case 0x1af5a4u: goto label_1af5a4;
        case 0x1af5a8u: goto label_1af5a8;
        case 0x1af5acu: goto label_1af5ac;
        case 0x1af5b0u: goto label_1af5b0;
        case 0x1af5b4u: goto label_1af5b4;
        case 0x1af5b8u: goto label_1af5b8;
        case 0x1af5bcu: goto label_1af5bc;
        case 0x1af5c0u: goto label_1af5c0;
        case 0x1af5c4u: goto label_1af5c4;
        case 0x1af5c8u: goto label_1af5c8;
        case 0x1af5ccu: goto label_1af5cc;
        case 0x1af5d0u: goto label_1af5d0;
        case 0x1af5d4u: goto label_1af5d4;
        case 0x1af5d8u: goto label_1af5d8;
        case 0x1af5dcu: goto label_1af5dc;
        case 0x1af5e0u: goto label_1af5e0;
        case 0x1af5e4u: goto label_1af5e4;
        case 0x1af5e8u: goto label_1af5e8;
        case 0x1af5ecu: goto label_1af5ec;
        case 0x1af5f0u: goto label_1af5f0;
        case 0x1af5f4u: goto label_1af5f4;
        case 0x1af5f8u: goto label_1af5f8;
        case 0x1af5fcu: goto label_1af5fc;
        case 0x1af600u: goto label_1af600;
        case 0x1af604u: goto label_1af604;
        case 0x1af608u: goto label_1af608;
        case 0x1af60cu: goto label_1af60c;
        case 0x1af610u: goto label_1af610;
        case 0x1af614u: goto label_1af614;
        case 0x1af618u: goto label_1af618;
        case 0x1af61cu: goto label_1af61c;
        case 0x1af620u: goto label_1af620;
        case 0x1af624u: goto label_1af624;
        case 0x1af628u: goto label_1af628;
        case 0x1af62cu: goto label_1af62c;
        case 0x1af630u: goto label_1af630;
        case 0x1af634u: goto label_1af634;
        case 0x1af638u: goto label_1af638;
        case 0x1af63cu: goto label_1af63c;
        case 0x1af640u: goto label_1af640;
        case 0x1af644u: goto label_1af644;
        case 0x1af648u: goto label_1af648;
        case 0x1af64cu: goto label_1af64c;
        case 0x1af650u: goto label_1af650;
        case 0x1af654u: goto label_1af654;
        case 0x1af658u: goto label_1af658;
        case 0x1af65cu: goto label_1af65c;
        case 0x1af660u: goto label_1af660;
        case 0x1af664u: goto label_1af664;
        case 0x1af668u: goto label_1af668;
        case 0x1af66cu: goto label_1af66c;
        case 0x1af670u: goto label_1af670;
        case 0x1af674u: goto label_1af674;
        case 0x1af678u: goto label_1af678;
        case 0x1af67cu: goto label_1af67c;
        case 0x1af680u: goto label_1af680;
        case 0x1af684u: goto label_1af684;
        case 0x1af688u: goto label_1af688;
        case 0x1af68cu: goto label_1af68c;
        case 0x1af690u: goto label_1af690;
        case 0x1af694u: goto label_1af694;
        case 0x1af698u: goto label_1af698;
        case 0x1af69cu: goto label_1af69c;
        case 0x1af6a0u: goto label_1af6a0;
        case 0x1af6a4u: goto label_1af6a4;
        case 0x1af6a8u: goto label_1af6a8;
        case 0x1af6acu: goto label_1af6ac;
        case 0x1af6b0u: goto label_1af6b0;
        case 0x1af6b4u: goto label_1af6b4;
        case 0x1af6b8u: goto label_1af6b8;
        case 0x1af6bcu: goto label_1af6bc;
        case 0x1af6c0u: goto label_1af6c0;
        case 0x1af6c4u: goto label_1af6c4;
        case 0x1af6c8u: goto label_1af6c8;
        case 0x1af6ccu: goto label_1af6cc;
        case 0x1af6d0u: goto label_1af6d0;
        case 0x1af6d4u: goto label_1af6d4;
        case 0x1af6d8u: goto label_1af6d8;
        case 0x1af6dcu: goto label_1af6dc;
        case 0x1af6e0u: goto label_1af6e0;
        case 0x1af6e4u: goto label_1af6e4;
        case 0x1af6e8u: goto label_1af6e8;
        case 0x1af6ecu: goto label_1af6ec;
        case 0x1af6f0u: goto label_1af6f0;
        case 0x1af6f4u: goto label_1af6f4;
        case 0x1af6f8u: goto label_1af6f8;
        case 0x1af6fcu: goto label_1af6fc;
        case 0x1af700u: goto label_1af700;
        case 0x1af704u: goto label_1af704;
        case 0x1af708u: goto label_1af708;
        case 0x1af70cu: goto label_1af70c;
        case 0x1af710u: goto label_1af710;
        case 0x1af714u: goto label_1af714;
        case 0x1af718u: goto label_1af718;
        case 0x1af71cu: goto label_1af71c;
        case 0x1af720u: goto label_1af720;
        case 0x1af724u: goto label_1af724;
        case 0x1af728u: goto label_1af728;
        case 0x1af72cu: goto label_1af72c;
        case 0x1af730u: goto label_1af730;
        case 0x1af734u: goto label_1af734;
        case 0x1af738u: goto label_1af738;
        case 0x1af73cu: goto label_1af73c;
        case 0x1af740u: goto label_1af740;
        case 0x1af744u: goto label_1af744;
        case 0x1af748u: goto label_1af748;
        case 0x1af74cu: goto label_1af74c;
        case 0x1af750u: goto label_1af750;
        case 0x1af754u: goto label_1af754;
        case 0x1af758u: goto label_1af758;
        case 0x1af75cu: goto label_1af75c;
        case 0x1af760u: goto label_1af760;
        case 0x1af764u: goto label_1af764;
        case 0x1af768u: goto label_1af768;
        case 0x1af76cu: goto label_1af76c;
        case 0x1af770u: goto label_1af770;
        case 0x1af774u: goto label_1af774;
        case 0x1af778u: goto label_1af778;
        case 0x1af77cu: goto label_1af77c;
        case 0x1af780u: goto label_1af780;
        case 0x1af784u: goto label_1af784;
        case 0x1af788u: goto label_1af788;
        case 0x1af78cu: goto label_1af78c;
        case 0x1af790u: goto label_1af790;
        case 0x1af794u: goto label_1af794;
        case 0x1af798u: goto label_1af798;
        case 0x1af79cu: goto label_1af79c;
        case 0x1af7a0u: goto label_1af7a0;
        case 0x1af7a4u: goto label_1af7a4;
        case 0x1af7a8u: goto label_1af7a8;
        case 0x1af7acu: goto label_1af7ac;
        case 0x1af7b0u: goto label_1af7b0;
        case 0x1af7b4u: goto label_1af7b4;
        case 0x1af7b8u: goto label_1af7b8;
        case 0x1af7bcu: goto label_1af7bc;
        case 0x1af7c0u: goto label_1af7c0;
        case 0x1af7c4u: goto label_1af7c4;
        case 0x1af7c8u: goto label_1af7c8;
        case 0x1af7ccu: goto label_1af7cc;
        case 0x1af7d0u: goto label_1af7d0;
        case 0x1af7d4u: goto label_1af7d4;
        case 0x1af7d8u: goto label_1af7d8;
        case 0x1af7dcu: goto label_1af7dc;
        case 0x1af7e0u: goto label_1af7e0;
        case 0x1af7e4u: goto label_1af7e4;
        case 0x1af7e8u: goto label_1af7e8;
        case 0x1af7ecu: goto label_1af7ec;
        case 0x1af7f0u: goto label_1af7f0;
        case 0x1af7f4u: goto label_1af7f4;
        case 0x1af7f8u: goto label_1af7f8;
        case 0x1af7fcu: goto label_1af7fc;
        case 0x1af800u: goto label_1af800;
        case 0x1af804u: goto label_1af804;
        case 0x1af808u: goto label_1af808;
        case 0x1af80cu: goto label_1af80c;
        case 0x1af810u: goto label_1af810;
        case 0x1af814u: goto label_1af814;
        case 0x1af818u: goto label_1af818;
        case 0x1af81cu: goto label_1af81c;
        case 0x1af820u: goto label_1af820;
        case 0x1af824u: goto label_1af824;
        case 0x1af828u: goto label_1af828;
        case 0x1af82cu: goto label_1af82c;
        case 0x1af830u: goto label_1af830;
        case 0x1af834u: goto label_1af834;
        case 0x1af838u: goto label_1af838;
        case 0x1af83cu: goto label_1af83c;
        case 0x1af840u: goto label_1af840;
        case 0x1af844u: goto label_1af844;
        case 0x1af848u: goto label_1af848;
        case 0x1af84cu: goto label_1af84c;
        case 0x1af850u: goto label_1af850;
        case 0x1af854u: goto label_1af854;
        case 0x1af858u: goto label_1af858;
        case 0x1af85cu: goto label_1af85c;
        case 0x1af860u: goto label_1af860;
        case 0x1af864u: goto label_1af864;
        case 0x1af868u: goto label_1af868;
        case 0x1af86cu: goto label_1af86c;
        case 0x1af870u: goto label_1af870;
        case 0x1af874u: goto label_1af874;
        case 0x1af878u: goto label_1af878;
        case 0x1af87cu: goto label_1af87c;
        case 0x1af880u: goto label_1af880;
        case 0x1af884u: goto label_1af884;
        case 0x1af888u: goto label_1af888;
        case 0x1af88cu: goto label_1af88c;
        case 0x1af890u: goto label_1af890;
        case 0x1af894u: goto label_1af894;
        case 0x1af898u: goto label_1af898;
        case 0x1af89cu: goto label_1af89c;
        case 0x1af8a0u: goto label_1af8a0;
        case 0x1af8a4u: goto label_1af8a4;
        case 0x1af8a8u: goto label_1af8a8;
        case 0x1af8acu: goto label_1af8ac;
        case 0x1af8b0u: goto label_1af8b0;
        case 0x1af8b4u: goto label_1af8b4;
        case 0x1af8b8u: goto label_1af8b8;
        case 0x1af8bcu: goto label_1af8bc;
        case 0x1af8c0u: goto label_1af8c0;
        case 0x1af8c4u: goto label_1af8c4;
        case 0x1af8c8u: goto label_1af8c8;
        case 0x1af8ccu: goto label_1af8cc;
        case 0x1af8d0u: goto label_1af8d0;
        case 0x1af8d4u: goto label_1af8d4;
        case 0x1af8d8u: goto label_1af8d8;
        case 0x1af8dcu: goto label_1af8dc;
        case 0x1af8e0u: goto label_1af8e0;
        case 0x1af8e4u: goto label_1af8e4;
        case 0x1af8e8u: goto label_1af8e8;
        case 0x1af8ecu: goto label_1af8ec;
        case 0x1af8f0u: goto label_1af8f0;
        case 0x1af8f4u: goto label_1af8f4;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af8fcu: goto label_1af8fc;
        case 0x1af900u: goto label_1af900;
        case 0x1af904u: goto label_1af904;
        case 0x1af908u: goto label_1af908;
        case 0x1af90cu: goto label_1af90c;
        case 0x1af910u: goto label_1af910;
        case 0x1af914u: goto label_1af914;
        case 0x1af918u: goto label_1af918;
        case 0x1af91cu: goto label_1af91c;
        case 0x1af920u: goto label_1af920;
        case 0x1af924u: goto label_1af924;
        case 0x1af928u: goto label_1af928;
        case 0x1af92cu: goto label_1af92c;
        case 0x1af930u: goto label_1af930;
        case 0x1af934u: goto label_1af934;
        case 0x1af938u: goto label_1af938;
        case 0x1af93cu: goto label_1af93c;
        case 0x1af940u: goto label_1af940;
        case 0x1af944u: goto label_1af944;
        case 0x1af948u: goto label_1af948;
        case 0x1af94cu: goto label_1af94c;
        case 0x1af950u: goto label_1af950;
        case 0x1af954u: goto label_1af954;
        case 0x1af958u: goto label_1af958;
        case 0x1af95cu: goto label_1af95c;
        case 0x1af960u: goto label_1af960;
        case 0x1af964u: goto label_1af964;
        case 0x1af968u: goto label_1af968;
        case 0x1af96cu: goto label_1af96c;
        case 0x1af970u: goto label_1af970;
        case 0x1af974u: goto label_1af974;
        case 0x1af978u: goto label_1af978;
        case 0x1af97cu: goto label_1af97c;
        case 0x1af980u: goto label_1af980;
        case 0x1af984u: goto label_1af984;
        case 0x1af988u: goto label_1af988;
        case 0x1af98cu: goto label_1af98c;
        case 0x1af990u: goto label_1af990;
        case 0x1af994u: goto label_1af994;
        case 0x1af998u: goto label_1af998;
        case 0x1af99cu: goto label_1af99c;
        case 0x1af9a0u: goto label_1af9a0;
        case 0x1af9a4u: goto label_1af9a4;
        case 0x1af9a8u: goto label_1af9a8;
        case 0x1af9acu: goto label_1af9ac;
        case 0x1af9b0u: goto label_1af9b0;
        case 0x1af9b4u: goto label_1af9b4;
        case 0x1af9b8u: goto label_1af9b8;
        case 0x1af9bcu: goto label_1af9bc;
        case 0x1af9c0u: goto label_1af9c0;
        case 0x1af9c4u: goto label_1af9c4;
        case 0x1af9c8u: goto label_1af9c8;
        case 0x1af9ccu: goto label_1af9cc;
        case 0x1af9d0u: goto label_1af9d0;
        case 0x1af9d4u: goto label_1af9d4;
        case 0x1af9d8u: goto label_1af9d8;
        case 0x1af9dcu: goto label_1af9dc;
        case 0x1af9e0u: goto label_1af9e0;
        case 0x1af9e4u: goto label_1af9e4;
        case 0x1af9e8u: goto label_1af9e8;
        case 0x1af9ecu: goto label_1af9ec;
        case 0x1af9f0u: goto label_1af9f0;
        case 0x1af9f4u: goto label_1af9f4;
        case 0x1af9f8u: goto label_1af9f8;
        case 0x1af9fcu: goto label_1af9fc;
        case 0x1afa00u: goto label_1afa00;
        case 0x1afa04u: goto label_1afa04;
        case 0x1afa08u: goto label_1afa08;
        case 0x1afa0cu: goto label_1afa0c;
        case 0x1afa10u: goto label_1afa10;
        case 0x1afa14u: goto label_1afa14;
        case 0x1afa18u: goto label_1afa18;
        case 0x1afa1cu: goto label_1afa1c;
        case 0x1afa20u: goto label_1afa20;
        case 0x1afa24u: goto label_1afa24;
        case 0x1afa28u: goto label_1afa28;
        case 0x1afa2cu: goto label_1afa2c;
        case 0x1afa30u: goto label_1afa30;
        case 0x1afa34u: goto label_1afa34;
        case 0x1afa38u: goto label_1afa38;
        case 0x1afa3cu: goto label_1afa3c;
        case 0x1afa40u: goto label_1afa40;
        case 0x1afa44u: goto label_1afa44;
        case 0x1afa48u: goto label_1afa48;
        case 0x1afa4cu: goto label_1afa4c;
        case 0x1afa50u: goto label_1afa50;
        case 0x1afa54u: goto label_1afa54;
        case 0x1afa58u: goto label_1afa58;
        case 0x1afa5cu: goto label_1afa5c;
        case 0x1afa60u: goto label_1afa60;
        case 0x1afa64u: goto label_1afa64;
        case 0x1afa68u: goto label_1afa68;
        case 0x1afa6cu: goto label_1afa6c;
        case 0x1afa70u: goto label_1afa70;
        case 0x1afa74u: goto label_1afa74;
        case 0x1afa78u: goto label_1afa78;
        case 0x1afa7cu: goto label_1afa7c;
        case 0x1afa80u: goto label_1afa80;
        case 0x1afa84u: goto label_1afa84;
        case 0x1afa88u: goto label_1afa88;
        case 0x1afa8cu: goto label_1afa8c;
        case 0x1afa90u: goto label_1afa90;
        case 0x1afa94u: goto label_1afa94;
        case 0x1afa98u: goto label_1afa98;
        case 0x1afa9cu: goto label_1afa9c;
        case 0x1afaa0u: goto label_1afaa0;
        case 0x1afaa4u: goto label_1afaa4;
        case 0x1afaa8u: goto label_1afaa8;
        case 0x1afaacu: goto label_1afaac;
        case 0x1afab0u: goto label_1afab0;
        case 0x1afab4u: goto label_1afab4;
        case 0x1afab8u: goto label_1afab8;
        case 0x1afabcu: goto label_1afabc;
        case 0x1afac0u: goto label_1afac0;
        case 0x1afac4u: goto label_1afac4;
        case 0x1afac8u: goto label_1afac8;
        case 0x1afaccu: goto label_1afacc;
        case 0x1afad0u: goto label_1afad0;
        case 0x1afad4u: goto label_1afad4;
        case 0x1afad8u: goto label_1afad8;
        case 0x1afadcu: goto label_1afadc;
        case 0x1afae0u: goto label_1afae0;
        case 0x1afae4u: goto label_1afae4;
        case 0x1afae8u: goto label_1afae8;
        case 0x1afaecu: goto label_1afaec;
        case 0x1afaf0u: goto label_1afaf0;
        case 0x1afaf4u: goto label_1afaf4;
        case 0x1afaf8u: goto label_1afaf8;
        case 0x1afafcu: goto label_1afafc;
        case 0x1afb00u: goto label_1afb00;
        case 0x1afb04u: goto label_1afb04;
        case 0x1afb08u: goto label_1afb08;
        case 0x1afb0cu: goto label_1afb0c;
        case 0x1afb10u: goto label_1afb10;
        case 0x1afb14u: goto label_1afb14;
        case 0x1afb18u: goto label_1afb18;
        case 0x1afb1cu: goto label_1afb1c;
        case 0x1afb20u: goto label_1afb20;
        case 0x1afb24u: goto label_1afb24;
        case 0x1afb28u: goto label_1afb28;
        case 0x1afb2cu: goto label_1afb2c;
        case 0x1afb30u: goto label_1afb30;
        case 0x1afb34u: goto label_1afb34;
        case 0x1afb38u: goto label_1afb38;
        case 0x1afb3cu: goto label_1afb3c;
        case 0x1afb40u: goto label_1afb40;
        case 0x1afb44u: goto label_1afb44;
        case 0x1afb48u: goto label_1afb48;
        case 0x1afb4cu: goto label_1afb4c;
        case 0x1afb50u: goto label_1afb50;
        case 0x1afb54u: goto label_1afb54;
        case 0x1afb58u: goto label_1afb58;
        case 0x1afb5cu: goto label_1afb5c;
        case 0x1afb60u: goto label_1afb60;
        case 0x1afb64u: goto label_1afb64;
        case 0x1afb68u: goto label_1afb68;
        case 0x1afb6cu: goto label_1afb6c;
        case 0x1afb70u: goto label_1afb70;
        case 0x1afb74u: goto label_1afb74;
        case 0x1afb78u: goto label_1afb78;
        case 0x1afb7cu: goto label_1afb7c;
        case 0x1afb80u: goto label_1afb80;
        case 0x1afb84u: goto label_1afb84;
        case 0x1afb88u: goto label_1afb88;
        case 0x1afb8cu: goto label_1afb8c;
        case 0x1afb90u: goto label_1afb90;
        case 0x1afb94u: goto label_1afb94;
        case 0x1afb98u: goto label_1afb98;
        case 0x1afb9cu: goto label_1afb9c;
        case 0x1afba0u: goto label_1afba0;
        case 0x1afba4u: goto label_1afba4;
        case 0x1afba8u: goto label_1afba8;
        case 0x1afbacu: goto label_1afbac;
        case 0x1afbb0u: goto label_1afbb0;
        case 0x1afbb4u: goto label_1afbb4;
        case 0x1afbb8u: goto label_1afbb8;
        case 0x1afbbcu: goto label_1afbbc;
        case 0x1afbc0u: goto label_1afbc0;
        case 0x1afbc4u: goto label_1afbc4;
        case 0x1afbc8u: goto label_1afbc8;
        case 0x1afbccu: goto label_1afbcc;
        case 0x1afbd0u: goto label_1afbd0;
        case 0x1afbd4u: goto label_1afbd4;
        case 0x1afbd8u: goto label_1afbd8;
        case 0x1afbdcu: goto label_1afbdc;
        case 0x1afbe0u: goto label_1afbe0;
        case 0x1afbe4u: goto label_1afbe4;
        case 0x1afbe8u: goto label_1afbe8;
        case 0x1afbecu: goto label_1afbec;
        case 0x1afbf0u: goto label_1afbf0;
        case 0x1afbf4u: goto label_1afbf4;
        case 0x1afbf8u: goto label_1afbf8;
        case 0x1afbfcu: goto label_1afbfc;
        case 0x1afc00u: goto label_1afc00;
        case 0x1afc04u: goto label_1afc04;
        case 0x1afc08u: goto label_1afc08;
        case 0x1afc0cu: goto label_1afc0c;
        case 0x1afc10u: goto label_1afc10;
        case 0x1afc14u: goto label_1afc14;
        case 0x1afc18u: goto label_1afc18;
        case 0x1afc1cu: goto label_1afc1c;
        case 0x1afc20u: goto label_1afc20;
        case 0x1afc24u: goto label_1afc24;
        case 0x1afc28u: goto label_1afc28;
        case 0x1afc2cu: goto label_1afc2c;
        case 0x1afc30u: goto label_1afc30;
        case 0x1afc34u: goto label_1afc34;
        case 0x1afc38u: goto label_1afc38;
        case 0x1afc3cu: goto label_1afc3c;
        case 0x1afc40u: goto label_1afc40;
        case 0x1afc44u: goto label_1afc44;
        case 0x1afc48u: goto label_1afc48;
        case 0x1afc4cu: goto label_1afc4c;
        case 0x1afc50u: goto label_1afc50;
        case 0x1afc54u: goto label_1afc54;
        case 0x1afc58u: goto label_1afc58;
        case 0x1afc5cu: goto label_1afc5c;
        case 0x1afc60u: goto label_1afc60;
        case 0x1afc64u: goto label_1afc64;
        case 0x1afc68u: goto label_1afc68;
        case 0x1afc6cu: goto label_1afc6c;
        case 0x1afc70u: goto label_1afc70;
        case 0x1afc74u: goto label_1afc74;
        case 0x1afc78u: goto label_1afc78;
        case 0x1afc7cu: goto label_1afc7c;
        case 0x1afc80u: goto label_1afc80;
        case 0x1afc84u: goto label_1afc84;
        case 0x1afc88u: goto label_1afc88;
        case 0x1afc8cu: goto label_1afc8c;
        case 0x1afc90u: goto label_1afc90;
        case 0x1afc94u: goto label_1afc94;
        case 0x1afc98u: goto label_1afc98;
        case 0x1afc9cu: goto label_1afc9c;
        case 0x1afca0u: goto label_1afca0;
        case 0x1afca4u: goto label_1afca4;
        case 0x1afca8u: goto label_1afca8;
        case 0x1afcacu: goto label_1afcac;
        case 0x1afcb0u: goto label_1afcb0;
        case 0x1afcb4u: goto label_1afcb4;
        case 0x1afcb8u: goto label_1afcb8;
        case 0x1afcbcu: goto label_1afcbc;
        case 0x1afcc0u: goto label_1afcc0;
        case 0x1afcc4u: goto label_1afcc4;
        case 0x1afcc8u: goto label_1afcc8;
        case 0x1afcccu: goto label_1afccc;
        case 0x1afcd0u: goto label_1afcd0;
        case 0x1afcd4u: goto label_1afcd4;
        case 0x1afcd8u: goto label_1afcd8;
        case 0x1afcdcu: goto label_1afcdc;
        case 0x1afce0u: goto label_1afce0;
        case 0x1afce4u: goto label_1afce4;
        case 0x1afce8u: goto label_1afce8;
        case 0x1afcecu: goto label_1afcec;
        case 0x1afcf0u: goto label_1afcf0;
        case 0x1afcf4u: goto label_1afcf4;
        case 0x1afcf8u: goto label_1afcf8;
        case 0x1afcfcu: goto label_1afcfc;
        case 0x1afd00u: goto label_1afd00;
        case 0x1afd04u: goto label_1afd04;
        case 0x1afd08u: goto label_1afd08;
        case 0x1afd0cu: goto label_1afd0c;
        case 0x1afd10u: goto label_1afd10;
        case 0x1afd14u: goto label_1afd14;
        case 0x1afd18u: goto label_1afd18;
        case 0x1afd1cu: goto label_1afd1c;
        case 0x1afd20u: goto label_1afd20;
        case 0x1afd24u: goto label_1afd24;
        case 0x1afd28u: goto label_1afd28;
        case 0x1afd2cu: goto label_1afd2c;
        case 0x1afd30u: goto label_1afd30;
        case 0x1afd34u: goto label_1afd34;
        case 0x1afd38u: goto label_1afd38;
        case 0x1afd3cu: goto label_1afd3c;
        case 0x1afd40u: goto label_1afd40;
        case 0x1afd44u: goto label_1afd44;
        case 0x1afd48u: goto label_1afd48;
        case 0x1afd4cu: goto label_1afd4c;
        case 0x1afd50u: goto label_1afd50;
        case 0x1afd54u: goto label_1afd54;
        case 0x1afd58u: goto label_1afd58;
        case 0x1afd5cu: goto label_1afd5c;
        case 0x1afd60u: goto label_1afd60;
        case 0x1afd64u: goto label_1afd64;
        case 0x1afd68u: goto label_1afd68;
        case 0x1afd6cu: goto label_1afd6c;
        case 0x1afd70u: goto label_1afd70;
        case 0x1afd74u: goto label_1afd74;
        case 0x1afd78u: goto label_1afd78;
        case 0x1afd7cu: goto label_1afd7c;
        case 0x1afd80u: goto label_1afd80;
        case 0x1afd84u: goto label_1afd84;
        case 0x1afd88u: goto label_1afd88;
        case 0x1afd8cu: goto label_1afd8c;
        case 0x1afd90u: goto label_1afd90;
        case 0x1afd94u: goto label_1afd94;
        case 0x1afd98u: goto label_1afd98;
        case 0x1afd9cu: goto label_1afd9c;
        case 0x1afda0u: goto label_1afda0;
        case 0x1afda4u: goto label_1afda4;
        case 0x1afda8u: goto label_1afda8;
        case 0x1afdacu: goto label_1afdac;
        case 0x1afdb0u: goto label_1afdb0;
        case 0x1afdb4u: goto label_1afdb4;
        case 0x1afdb8u: goto label_1afdb8;
        case 0x1afdbcu: goto label_1afdbc;
        case 0x1afdc0u: goto label_1afdc0;
        case 0x1afdc4u: goto label_1afdc4;
        case 0x1afdc8u: goto label_1afdc8;
        case 0x1afdccu: goto label_1afdcc;
        case 0x1afdd0u: goto label_1afdd0;
        case 0x1afdd4u: goto label_1afdd4;
        case 0x1afdd8u: goto label_1afdd8;
        case 0x1afddcu: goto label_1afddc;
        case 0x1afde0u: goto label_1afde0;
        case 0x1afde4u: goto label_1afde4;
        case 0x1afde8u: goto label_1afde8;
        case 0x1afdecu: goto label_1afdec;
        case 0x1afdf0u: goto label_1afdf0;
        case 0x1afdf4u: goto label_1afdf4;
        case 0x1afdf8u: goto label_1afdf8;
        case 0x1afdfcu: goto label_1afdfc;
        case 0x1afe00u: goto label_1afe00;
        case 0x1afe04u: goto label_1afe04;
        case 0x1afe08u: goto label_1afe08;
        case 0x1afe0cu: goto label_1afe0c;
        case 0x1afe10u: goto label_1afe10;
        case 0x1afe14u: goto label_1afe14;
        case 0x1afe18u: goto label_1afe18;
        case 0x1afe1cu: goto label_1afe1c;
        case 0x1afe20u: goto label_1afe20;
        case 0x1afe24u: goto label_1afe24;
        case 0x1afe28u: goto label_1afe28;
        case 0x1afe2cu: goto label_1afe2c;
        case 0x1afe30u: goto label_1afe30;
        case 0x1afe34u: goto label_1afe34;
        case 0x1afe38u: goto label_1afe38;
        case 0x1afe3cu: goto label_1afe3c;
        case 0x1afe40u: goto label_1afe40;
        case 0x1afe44u: goto label_1afe44;
        case 0x1afe48u: goto label_1afe48;
        case 0x1afe4cu: goto label_1afe4c;
        case 0x1afe50u: goto label_1afe50;
        case 0x1afe54u: goto label_1afe54;
        case 0x1afe58u: goto label_1afe58;
        case 0x1afe5cu: goto label_1afe5c;
        case 0x1afe60u: goto label_1afe60;
        case 0x1afe64u: goto label_1afe64;
        case 0x1afe68u: goto label_1afe68;
        case 0x1afe6cu: goto label_1afe6c;
        case 0x1afe70u: goto label_1afe70;
        case 0x1afe74u: goto label_1afe74;
        case 0x1afe78u: goto label_1afe78;
        case 0x1afe7cu: goto label_1afe7c;
        case 0x1afe80u: goto label_1afe80;
        case 0x1afe84u: goto label_1afe84;
        case 0x1afe88u: goto label_1afe88;
        case 0x1afe8cu: goto label_1afe8c;
        case 0x1afe90u: goto label_1afe90;
        case 0x1afe94u: goto label_1afe94;
        case 0x1afe98u: goto label_1afe98;
        case 0x1afe9cu: goto label_1afe9c;
        case 0x1afea0u: goto label_1afea0;
        case 0x1afea4u: goto label_1afea4;
        case 0x1afea8u: goto label_1afea8;
        case 0x1afeacu: goto label_1afeac;
        case 0x1afeb0u: goto label_1afeb0;
        case 0x1afeb4u: goto label_1afeb4;
        case 0x1afeb8u: goto label_1afeb8;
        case 0x1afebcu: goto label_1afebc;
        case 0x1afec0u: goto label_1afec0;
        case 0x1afec4u: goto label_1afec4;
        case 0x1afec8u: goto label_1afec8;
        case 0x1afeccu: goto label_1afecc;
        case 0x1afed0u: goto label_1afed0;
        case 0x1afed4u: goto label_1afed4;
        case 0x1afed8u: goto label_1afed8;
        case 0x1afedcu: goto label_1afedc;
        case 0x1afee0u: goto label_1afee0;
        case 0x1afee4u: goto label_1afee4;
        case 0x1afee8u: goto label_1afee8;
        case 0x1afeecu: goto label_1afeec;
        case 0x1afef0u: goto label_1afef0;
        case 0x1afef4u: goto label_1afef4;
        case 0x1afef8u: goto label_1afef8;
        case 0x1afefcu: goto label_1afefc;
        case 0x1aff00u: goto label_1aff00;
        case 0x1aff04u: goto label_1aff04;
        case 0x1aff08u: goto label_1aff08;
        case 0x1aff0cu: goto label_1aff0c;
        case 0x1aff10u: goto label_1aff10;
        case 0x1aff14u: goto label_1aff14;
        case 0x1aff18u: goto label_1aff18;
        case 0x1aff1cu: goto label_1aff1c;
        case 0x1aff20u: goto label_1aff20;
        case 0x1aff24u: goto label_1aff24;
        case 0x1aff28u: goto label_1aff28;
        case 0x1aff2cu: goto label_1aff2c;
        case 0x1aff30u: goto label_1aff30;
        case 0x1aff34u: goto label_1aff34;
        case 0x1aff38u: goto label_1aff38;
        case 0x1aff3cu: goto label_1aff3c;
        case 0x1aff40u: goto label_1aff40;
        case 0x1aff44u: goto label_1aff44;
        case 0x1aff48u: goto label_1aff48;
        case 0x1aff4cu: goto label_1aff4c;
        case 0x1aff50u: goto label_1aff50;
        case 0x1aff54u: goto label_1aff54;
        case 0x1aff58u: goto label_1aff58;
        case 0x1aff5cu: goto label_1aff5c;
        case 0x1aff60u: goto label_1aff60;
        case 0x1aff64u: goto label_1aff64;
        case 0x1aff68u: goto label_1aff68;
        case 0x1aff6cu: goto label_1aff6c;
        case 0x1aff70u: goto label_1aff70;
        case 0x1aff74u: goto label_1aff74;
        case 0x1aff78u: goto label_1aff78;
        case 0x1aff7cu: goto label_1aff7c;
        case 0x1aff80u: goto label_1aff80;
        case 0x1aff84u: goto label_1aff84;
        case 0x1aff88u: goto label_1aff88;
        case 0x1aff8cu: goto label_1aff8c;
        case 0x1aff90u: goto label_1aff90;
        case 0x1aff94u: goto label_1aff94;
        case 0x1aff98u: goto label_1aff98;
        case 0x1aff9cu: goto label_1aff9c;
        case 0x1affa0u: goto label_1affa0;
        case 0x1affa4u: goto label_1affa4;
        case 0x1affa8u: goto label_1affa8;
        case 0x1affacu: goto label_1affac;
        case 0x1affb0u: goto label_1affb0;
        case 0x1affb4u: goto label_1affb4;
        case 0x1affb8u: goto label_1affb8;
        case 0x1affbcu: goto label_1affbc;
        case 0x1affc0u: goto label_1affc0;
        case 0x1affc4u: goto label_1affc4;
        case 0x1affc8u: goto label_1affc8;
        case 0x1affccu: goto label_1affcc;
        case 0x1affd0u: goto label_1affd0;
        case 0x1affd4u: goto label_1affd4;
        case 0x1affd8u: goto label_1affd8;
        case 0x1affdcu: goto label_1affdc;
        case 0x1affe0u: goto label_1affe0;
        case 0x1affe4u: goto label_1affe4;
        case 0x1affe8u: goto label_1affe8;
        case 0x1affecu: goto label_1affec;
        case 0x1afff0u: goto label_1afff0;
        case 0x1afff4u: goto label_1afff4;
        case 0x1afff8u: goto label_1afff8;
        case 0x1afffcu: goto label_1afffc;
        case 0x1b0000u: goto label_1b0000;
        case 0x1b0004u: goto label_1b0004;
        case 0x1b0008u: goto label_1b0008;
        case 0x1b000cu: goto label_1b000c;
        case 0x1b0010u: goto label_1b0010;
        case 0x1b0014u: goto label_1b0014;
        case 0x1b0018u: goto label_1b0018;
        case 0x1b001cu: goto label_1b001c;
        case 0x1b0020u: goto label_1b0020;
        default: break;
    }

    ctx->pc = 0x1af010u;

label_1af010:
    // 0x1af010: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1af010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1af014:
    // 0x1af014: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1af014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1af018:
    // 0x1af018: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1af018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1af01c:
    // 0x1af01c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1af01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1af020:
    // 0x1af020: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1af020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af024:
    // 0x1af024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af028:
    // 0x1af028: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1af028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1af02c:
    // 0x1af02c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1af02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1af030:
    // 0x1af030: 0x2825821  addu        $t3, $s4, $v0
    ctx->pc = 0x1af030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1af034:
    // 0x1af034: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1af034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1af038:
    // 0x1af038: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af03c:
    // 0x1af03c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1af03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1af040:
    // 0x1af040: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af044:
    // 0x1af044: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1af044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1af048:
    // 0x1af048: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1af048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1af04c:
    // 0x1af04c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1af04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1af050:
    // 0x1af050: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1af050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1af054:
    // 0x1af054: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1af054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1af058:
    // 0x1af058: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1af058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1af05c:
    // 0x1af05c: 0xe7b90138  swc1        $f25, 0x138($sp)
    ctx->pc = 0x1af05cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1af060:
    // 0x1af060: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x1af060u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1af064:
    // 0x1af064: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x1af064u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1af068:
    // 0x1af068: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x1af068u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1af06c:
    // 0x1af06c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1af06cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1af070:
    // 0x1af070: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1af070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1af074:
    // 0x1af074: 0xe5681124  swc1        $f8, 0x1124($t3)
    ctx->pc = 0x1af074u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4388), bits); }
label_1af078:
    // 0x1af078: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_1af07c:
    // 0x1af07c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1af07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1af080:
    // 0x1af080: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af084:
    // 0x1af084: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af088:
    // 0x1af088: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1af088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1af08c:
    // 0x1af08c: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x1af08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
label_1af090:
    // 0x1af090: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1af090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1af094:
    // 0x1af094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af098:
    // 0x1af098: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1af098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1af09c:
    // 0x1af09c: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x1af09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_1af0a0:
    // 0x1af0a0: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x1af0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_1af0a4:
    // 0x1af0a4: 0xe481d4bc  swc1        $f1, -0x2B44($a0)
    ctx->pc = 0x1af0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956220), bits); }
label_1af0a8:
    // 0x1af0a8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_1af0ac:
    if (ctx->pc == 0x1AF0ACu) {
        ctx->pc = 0x1AF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0A8u;
        // 0x1af0ac: 0xe460d4c0  swc1        $f0, -0x2B40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0B0u;
        goto label_1af0b0;
    }
    ctx->pc = 0x1AF0A8u;
    {
        const bool branch_taken_0x1af0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0A8u;
        // 0x1af0ac: 0xe460d4c0  swc1        $f0, -0x2B40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0a8) {
            ctx->pc = 0x1AF1D8u;
            goto label_1af1d8;
        }
    }
    ctx->pc = 0x1AF0B0u;
label_1af0b0:
    // 0x1af0b0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1af0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1af0b4:
    // 0x1af0b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af0b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1af0b8:
    // 0x1af0b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af0bc:
    // 0x1af0bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af0c0:
    // 0x1af0c0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x1af0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_1af0c4:
    // 0x1af0c4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1af0c8:
    if (ctx->pc == 0x1AF0C8u) {
        ctx->pc = 0x1AF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0C4u;
        // 0x1af0c8: 0xe440d508  swc1        $f0, -0x2AF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956296), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0CCu;
        goto label_1af0cc;
    }
    ctx->pc = 0x1AF0C4u;
    {
        const bool branch_taken_0x1af0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0C4u;
        // 0x1af0c8: 0xe440d508  swc1        $f0, -0x2AF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0c4) {
            ctx->pc = 0x1AF0F4u;
            goto label_1af0f4;
        }
    }
    ctx->pc = 0x1AF0CCu;
label_1af0cc:
    // 0x1af0cc: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x1af0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
label_1af0d0:
    // 0x1af0d0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1af0d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1af0d4:
    // 0x1af0d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af0d8:
    // 0x1af0d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af0dc:
    // 0x1af0dc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1af0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1af0e0:
    // 0x1af0e0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1af0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1af0e4:
    // 0x1af0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af0e8:
    // 0x1af0e8: 0xe440d4c0  swc1        $f0, -0x2B40($v0)
    ctx->pc = 0x1af0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), bits); }
label_1af0ec:
    // 0x1af0ec: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1af0f0:
    if (ctx->pc == 0x1AF0F0u) {
        ctx->pc = 0x1AF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0ECu;
        // 0x1af0f0: 0xe481d4bc  swc1        $f1, -0x2B44($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0F4u;
        goto label_1af0f4;
    }
    ctx->pc = 0x1AF0ECu;
    {
        const bool branch_taken_0x1af0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0ECu;
        // 0x1af0f0: 0xe481d4bc  swc1        $f1, -0x2B44($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0ec) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF0F4u;
label_1af0f4:
    // 0x1af0f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1af0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1af0f8:
    // 0x1af0f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af0fc:
    // 0x1af0fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1af0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1af100:
    // 0x1af100: 0x24a2d4e0  addiu       $v0, $a1, -0x2B20
    ctx->pc = 0x1af100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
label_1af104:
    // 0x1af104: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1af104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_1af108:
    // 0x1af108: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1af108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1af10c:
    // 0x1af10c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1af10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1af110:
    // 0x1af110: 0xe4a0d4e0  swc1        $f0, -0x2B20($a1)
    ctx->pc = 0x1af110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956256), bits); }
label_1af114:
    // 0x1af114: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1af118:
    // 0x1af118: 0xe448000c  swc1        $f8, 0xC($v0)
    ctx->pc = 0x1af118u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1af11c:
    // 0x1af11c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af120:
    // 0x1af120: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_1af124:
    // 0x1af124: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1af124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1af128:
    // 0x1af128: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1af128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af12c:
    // 0x1af12c: 0x24c3d4d0  addiu       $v1, $a2, -0x2B30
    ctx->pc = 0x1af12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956240));
label_1af130:
    // 0x1af130: 0xe4c0d4d0  swc1        $f0, -0x2B30($a2)
    ctx->pc = 0x1af130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956240), bits); }
label_1af134:
    // 0x1af134: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1af134u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1af138:
    // 0x1af138: 0xe485d4f8  swc1        $f5, -0x2B08($a0)
    ctx->pc = 0x1af138u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956280), bits); }
label_1af13c:
    // 0x1af13c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1af13cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1af140:
    // 0x1af140: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1af140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1af144:
    // 0x1af144: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af148:
    // 0x1af148: 0x3c013f63  lui         $at, 0x3F63
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16227 << 16));
label_1af14c:
    // 0x1af14c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1af14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1af150:
    // 0x1af150: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1af150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1af154:
    // 0x1af154: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1af154u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1af158:
    // 0x1af158: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x1af158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1af15c:
    // 0x1af15c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1af15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1af160:
    // 0x1af160: 0xe468000c  swc1        $f8, 0xC($v1)
    ctx->pc = 0x1af160u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1af164:
    // 0x1af164: 0xe4470004  swc1        $f7, 0x4($v0)
    ctx->pc = 0x1af164u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1af168:
    // 0x1af168: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x1af168u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1af16c:
    // 0x1af16c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1af16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1af170:
    // 0x1af170: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1af170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1af174:
    // 0x1af174: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1af174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1af178:
    // 0x1af178: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af17c:
    // 0x1af17c: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x1af17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_1af180:
    // 0x1af180: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1af180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1af184:
    // 0x1af184: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af188:
    // 0x1af188: 0xe483d4bc  swc1        $f3, -0x2B44($a0)
    ctx->pc = 0x1af188u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956220), bits); }
label_1af18c:
    // 0x1af18c: 0xe441d4c0  swc1        $f1, -0x2B40($v0)
    ctx->pc = 0x1af18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), bits); }
label_1af190:
    // 0x1af190: 0xe525d4f0  swc1        $f5, -0x2B10($t1)
    ctx->pc = 0x1af190u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956272), bits); }
label_1af194:
    // 0x1af194: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_1af198:
    // 0x1af198: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1af198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1af19c:
    // 0x1af19c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1af19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1af1a0:
    // 0x1af1a0: 0xe4670004  swc1        $f7, 0x4($v1)
    ctx->pc = 0x1af1a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1af1a4:
    // 0x1af1a4: 0xe5641124  swc1        $f4, 0x1124($t3)
    ctx->pc = 0x1af1a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4388), bits); }
label_1af1a8:
    // 0x1af1a8: 0x8ce2489c  lw          $v0, 0x489C($a3)
    ctx->pc = 0x1af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
label_1af1ac:
    // 0x1af1ac: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1af1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1af1b0:
    // 0x1af1b0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1af1b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1af1b4:
    // 0x1af1b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af1b8:
    // 0x1af1b8: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1af1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1af1bc:
    // 0x1af1bc: 0x1468002a  bne         $v1, $t0, . + 4 + (0x2A << 2)
label_1af1c0:
    if (ctx->pc == 0x1AF1C0u) {
        ctx->pc = 0x1AF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1BCu;
        // 0x1af1c0: 0xe540d470  swc1        $f0, -0x2B90($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294956144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF1C4u;
        goto label_1af1c4;
    }
    ctx->pc = 0x1AF1BCu;
    {
        const bool branch_taken_0x1af1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x1AF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1BCu;
        // 0x1af1c0: 0xe540d470  swc1        $f0, -0x2B90($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294956144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1bc) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF1C4u;
label_1af1c4:
    // 0x1af1c4: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_1af1c8:
    // 0x1af1c8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1af1c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1af1cc:
    // 0x1af1cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af1d0:
    // 0x1af1d0: 0x10000025  b           . + 4 + (0x25 << 2)
label_1af1d4:
    if (ctx->pc == 0x1AF1D4u) {
        ctx->pc = 0x1AF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1D0u;
        // 0x1af1d4: 0xe480d4bc  swc1        $f0, -0x2B44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF1D8u;
        goto label_1af1d8;
    }
    ctx->pc = 0x1AF1D0u;
    {
        const bool branch_taken_0x1af1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1D0u;
        // 0x1af1d4: 0xe480d4bc  swc1        $f0, -0x2B44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1d0) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF1D8u;
label_1af1d8:
    // 0x1af1d8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1af1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1af1dc:
    // 0x1af1dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1af1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1af1e0:
    // 0x1af1e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1af1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af1e4:
    // 0x1af1e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af1e8:
    // 0x1af1e8: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x1af1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_1af1ec:
    // 0x1af1ec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1af1f0:
    if (ctx->pc == 0x1AF1F0u) {
        ctx->pc = 0x1AF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1ECu;
        // 0x1af1f0: 0xe442d508  swc1        $f2, -0x2AF8($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956296), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF1F4u;
        goto label_1af1f4;
    }
    ctx->pc = 0x1AF1ECu;
    {
        const bool branch_taken_0x1af1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1ECu;
        // 0x1af1f0: 0xe442d508  swc1        $f2, -0x2AF8($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1ec) {
            ctx->pc = 0x1AF220u;
            goto label_1af220;
        }
    }
    ctx->pc = 0x1AF1F4u;
label_1af1f4:
    // 0x1af1f4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1af1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1af1f8:
    // 0x1af1f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af1f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1af1fc:
    // 0x1af1fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af200:
    // 0x1af200: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af204:
    // 0x1af204: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1af204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1af208:
    // 0x1af208: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1af208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1af20c:
    // 0x1af20c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af210:
    // 0x1af210: 0xe460d4c0  swc1        $f0, -0x2B40($v1)
    ctx->pc = 0x1af210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956224), bits); }
label_1af214:
    // 0x1af214: 0xe441d508  swc1        $f1, -0x2AF8($v0)
    ctx->pc = 0x1af214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956296), bits); }
label_1af218:
    // 0x1af218: 0x10000013  b           . + 4 + (0x13 << 2)
label_1af21c:
    if (ctx->pc == 0x1AF21Cu) {
        ctx->pc = 0x1AF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF218u;
        // 0x1af21c: 0xe5621124  swc1        $f2, 0x1124($t3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4388), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF220u;
        goto label_1af220;
    }
    ctx->pc = 0x1AF218u;
    {
        const bool branch_taken_0x1af218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF218u;
        // 0x1af21c: 0xe5621124  swc1        $f2, 0x1124($t3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af218) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF220u;
label_1af220:
    // 0x1af220: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x1af220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_1af224:
    // 0x1af224: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1af228:
    if (ctx->pc == 0x1AF228u) {
        ctx->pc = 0x1AF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF224u;
        // 0x1af228: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF22Cu;
        goto label_1af22c;
    }
    ctx->pc = 0x1AF224u;
    {
        const bool branch_taken_0x1af224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF224u;
        // 0x1af228: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af224) {
            ctx->pc = 0x1AF254u;
            goto label_1af254;
        }
    }
    ctx->pc = 0x1AF22Cu;
label_1af22c:
    // 0x1af22c: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1af22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
label_1af230:
    // 0x1af230: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1af230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1af234:
    // 0x1af234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af238:
    // 0x1af238: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x1af238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
label_1af23c:
    // 0x1af23c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1af23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1af240:
    // 0x1af240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af244:
    // 0x1af244: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af248:
    // 0x1af248: 0xe480d4bc  swc1        $f0, -0x2B44($a0)
    ctx->pc = 0x1af248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956220), bits); }
label_1af24c:
    // 0x1af24c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1af250:
    if (ctx->pc == 0x1AF250u) {
        ctx->pc = 0x1AF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF24Cu;
        // 0x1af250: 0xe441d4c0  swc1        $f1, -0x2B40($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF254u;
        goto label_1af254;
    }
    ctx->pc = 0x1AF24Cu;
    {
        const bool branch_taken_0x1af24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF24Cu;
        // 0x1af250: 0xe441d4c0  swc1        $f1, -0x2B40($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af24c) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF254u;
label_1af254:
    // 0x1af254: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x1af254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_1af258:
    // 0x1af258: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1af258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1af25c:
    // 0x1af25c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af260:
    // 0x1af260: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af264:
    // 0x1af264: 0xe460d4bc  swc1        $f0, -0x2B44($v1)
    ctx->pc = 0x1af264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956220), bits); }
label_1af268:
    // 0x1af268: 0xc06ba0a  jal         func_1AE828
label_1af26c:
    if (ctx->pc == 0x1AF26Cu) {
        ctx->pc = 0x1AF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF268u;
        // 0x1af26c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF270u;
        goto label_1af270;
    }
    ctx->pc = 0x1AF268u;
    SET_GPR_U32(ctx, 31, 0x1AF270u);
    ctx->pc = 0x1AF26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF268u;
    // 0x1af26c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1AF268u, 0x1AF270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF270u;
label_1af270:
    // 0x1af270: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af274:
    // 0x1af274: 0x8c82cdb4  lw          $v0, -0x324C($a0)
    ctx->pc = 0x1af274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_1af278:
    // 0x1af278: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1af278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1af27c:
    // 0x1af27c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1af27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1af280:
    // 0x1af280: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1af284:
    if (ctx->pc == 0x1AF284u) {
        ctx->pc = 0x1AF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF280u;
        // 0x1af284: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF288u;
        goto label_1af288;
    }
    ctx->pc = 0x1AF280u;
    {
        const bool branch_taken_0x1af280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF280u;
        // 0x1af284: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af280) {
            ctx->pc = 0x1AF2C8u;
            goto label_1af2c8;
        }
    }
    ctx->pc = 0x1AF288u;
label_1af288:
    // 0x1af288: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1af28c:
    if (ctx->pc == 0x1AF28Cu) {
        ctx->pc = 0x1AF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF288u;
        // 0x1af28c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF290u;
        goto label_1af290;
    }
    ctx->pc = 0x1AF288u;
    {
        const bool branch_taken_0x1af288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF288u;
        // 0x1af28c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af288) {
            ctx->pc = 0x1AF2ACu;
            goto label_1af2ac;
        }
    }
    ctx->pc = 0x1AF290u;
label_1af290:
    // 0x1af290: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1af294:
    if (ctx->pc == 0x1AF294u) {
        ctx->pc = 0x1AF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF290u;
        // 0x1af294: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF298u;
        goto label_1af298;
    }
    ctx->pc = 0x1AF290u;
    {
        const bool branch_taken_0x1af290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF290u;
        // 0x1af294: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af290) {
            ctx->pc = 0x1AF30Cu;
            goto label_1af30c;
        }
    }
    ctx->pc = 0x1AF298u;
label_1af298:
    // 0x1af298: 0x3c013dd7  lui         $at, 0x3DD7
    ctx->pc = 0x1af298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15831 << 16));
label_1af29c:
    // 0x1af29c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1af29cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1af2a0:
    // 0x1af2a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af2a4:
    // 0x1af2a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1af2a8:
    if (ctx->pc == 0x1AF2A8u) {
        ctx->pc = 0x1AF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2A4u;
        // 0x1af2a8: 0xe440d48c  swc1        $f0, -0x2B74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956172), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2ACu;
        goto label_1af2ac;
    }
    ctx->pc = 0x1AF2A4u;
    {
        const bool branch_taken_0x1af2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2A4u;
        // 0x1af2a8: 0xe440d48c  swc1        $f0, -0x2B74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2a4) {
            ctx->pc = 0x1AF30Cu;
            goto label_1af30c;
        }
    }
    ctx->pc = 0x1AF2ACu;
label_1af2ac:
    // 0x1af2ac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1af2b0:
    if (ctx->pc == 0x1AF2B0u) {
        ctx->pc = 0x1AF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2ACu;
        // 0x1af2b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2B4u;
        goto label_1af2b4;
    }
    ctx->pc = 0x1AF2ACu;
    {
        const bool branch_taken_0x1af2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2ACu;
        // 0x1af2b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2ac) {
            ctx->pc = 0x1AF30Cu;
            goto label_1af30c;
        }
    }
    ctx->pc = 0x1AF2B4u;
label_1af2b4:
    // 0x1af2b4: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x1af2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
label_1af2b8:
    // 0x1af2b8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1af2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1af2bc:
    // 0x1af2bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af2c0:
    // 0x1af2c0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1af2c4:
    if (ctx->pc == 0x1AF2C4u) {
        ctx->pc = 0x1AF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2C0u;
        // 0x1af2c4: 0xe440d480  swc1        $f0, -0x2B80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2C8u;
        goto label_1af2c8;
    }
    ctx->pc = 0x1AF2C0u;
    {
        const bool branch_taken_0x1af2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2C0u;
        // 0x1af2c4: 0xe440d480  swc1        $f0, -0x2B80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2c0) {
            ctx->pc = 0x1AF30Cu;
            goto label_1af30c;
        }
    }
    ctx->pc = 0x1AF2C8u;
label_1af2c8:
    // 0x1af2c8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1af2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1af2cc:
    // 0x1af2cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1af2d0:
    if (ctx->pc == 0x1AF2D0u) {
        ctx->pc = 0x1AF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2CCu;
        // 0x1af2d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2D4u;
        goto label_1af2d4;
    }
    ctx->pc = 0x1AF2CCu;
    {
        const bool branch_taken_0x1af2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2CCu;
        // 0x1af2d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2cc) {
            ctx->pc = 0x1AF2F8u;
            goto label_1af2f8;
        }
    }
    ctx->pc = 0x1AF2D4u;
label_1af2d4:
    // 0x1af2d4: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1af2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1af2d8:
    // 0x1af2d8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1af2d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1af2dc:
    // 0x1af2dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af2e0:
    // 0x1af2e0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af2e4:
    // 0x1af2e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af2e8:
    // 0x1af2e8: 0xe440d494  swc1        $f0, -0x2B6C($v0)
    ctx->pc = 0x1af2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956180), bits); }
label_1af2ec:
    // 0x1af2ec: 0xe460d48c  swc1        $f0, -0x2B74($v1)
    ctx->pc = 0x1af2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956172), bits); }
label_1af2f0:
    // 0x1af2f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1af2f4:
    if (ctx->pc == 0x1AF2F4u) {
        ctx->pc = 0x1AF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2F0u;
        // 0x1af2f4: 0xac80d480  sw          $zero, -0x2B80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2F8u;
        goto label_1af2f8;
    }
    ctx->pc = 0x1AF2F0u;
    {
        const bool branch_taken_0x1af2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2F0u;
        // 0x1af2f4: 0xac80d480  sw          $zero, -0x2B80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2f0) {
            ctx->pc = 0x1AF30Cu;
            goto label_1af30c;
        }
    }
    ctx->pc = 0x1AF2F8u;
label_1af2f8:
    // 0x1af2f8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1af2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1af2fc:
    // 0x1af2fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1af2fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1af300:
    // 0x1af300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af304:
    // 0x1af304: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af308:
    // 0x1af308: 0xe440d48c  swc1        $f0, -0x2B74($v0)
    ctx->pc = 0x1af308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956172), bits); }
label_1af30c:
    // 0x1af30c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1af310:
    // 0x1af310: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1af314:
    // 0x1af314: 0x8c4377a4  lw          $v1, 0x77A4($v0)
    ctx->pc = 0x1af314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30628)));
label_1af318:
    // 0x1af318: 0x106008b7  beqz        $v1, . + 4 + (0x8B7 << 2)
label_1af31c:
    if (ctx->pc == 0x1AF31Cu) {
        ctx->pc = 0x1AF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF318u;
        // 0x1af31c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF320u;
        goto label_1af320;
    }
    ctx->pc = 0x1AF318u;
    {
        const bool branch_taken_0x1af318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF318u;
        // 0x1af31c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af318) {
            ctx->pc = 0x1B15F8u;
            return;
        }
    }
    ctx->pc = 0x1AF320u;
label_1af320:
    // 0x1af320: 0xc06c590  jal         func_1B1640
label_1af324:
    if (ctx->pc == 0x1AF324u) {
        ctx->pc = 0x1AF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF320u;
        // 0x1af324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF328u;
        goto label_1af328;
    }
    ctx->pc = 0x1AF320u;
    SET_GPR_U32(ctx, 31, 0x1AF328u);
    ctx->pc = 0x1AF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF320u;
    // 0x1af324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1AF320u, 0x1AF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF328u;
label_1af328:
    // 0x1af328: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1af32c:
    if (ctx->pc == 0x1AF32Cu) {
        ctx->pc = 0x1AF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF328u;
        // 0x1af32c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF330u;
        goto label_1af330;
    }
    ctx->pc = 0x1AF328u;
    {
        const bool branch_taken_0x1af328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF328u;
        // 0x1af32c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af328) {
            ctx->pc = 0x1AF364u;
            goto label_1af364;
        }
    }
    ctx->pc = 0x1AF330u;
label_1af330:
    // 0x1af330: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af334:
    // 0x1af334: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1af334u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1af338:
    // 0x1af338: 0x8c62b194  lw          $v0, -0x4E6C($v1)
    ctx->pc = 0x1af338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947220)));
label_1af33c:
    // 0x1af33c: 0x269515d0  addiu       $s5, $s4, 0x15D0
    ctx->pc = 0x1af33cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 5584));
label_1af340:
    // 0x1af340: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1af340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1af344:
    // 0x1af344: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
label_1af348:
    if (ctx->pc == 0x1AF348u) {
        ctx->pc = 0x1AF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF344u;
        // 0x1af348: 0x269e3f10  addiu       $fp, $s4, 0x3F10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 16144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF34Cu;
        goto label_1af34c;
    }
    ctx->pc = 0x1AF344u;
    {
        const bool branch_taken_0x1af344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF344u;
        // 0x1af348: 0x269e3f10  addiu       $fp, $s4, 0x3F10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 16144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af344) {
            ctx->pc = 0x1AF598u;
            goto label_1af598;
        }
    }
    ctx->pc = 0x1AF34Cu;
label_1af34c:
    // 0x1af34c: 0xc047ab8  jal         func_11EAE0
label_1af350:
    if (ctx->pc == 0x1AF350u) {
        ctx->pc = 0x1AF354u;
        goto label_1af354;
    }
    ctx->pc = 0x1AF34Cu;
    SET_GPR_U32(ctx, 31, 0x1AF354u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1AF34Cu, 0x1AF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF354u;
label_1af354:
    // 0x1af354: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1af354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1af358:
    // 0x1af358: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_1af35c:
    if (ctx->pc == 0x1AF35Cu) {
        ctx->pc = 0x1AF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF358u;
        // 0x1af35c: 0x8ec3deb8  lw          $v1, -0x2148($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF360u;
        goto label_1af360;
    }
    ctx->pc = 0x1AF358u;
    {
        const bool branch_taken_0x1af358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF358u;
        // 0x1af35c: 0x8ec3deb8  lw          $v1, -0x2148($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af358) {
            ctx->pc = 0x1AF59Cu;
            goto label_1af59c;
        }
    }
    ctx->pc = 0x1AF360u;
label_1af360:
    // 0x1af360: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af364:
    // 0x1af364: 0x8c43b1a4  lw          $v1, -0x4E5C($v0)
    ctx->pc = 0x1af364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947236)));
label_1af368:
    // 0x1af368: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
label_1af36c:
    if (ctx->pc == 0x1AF36Cu) {
        ctx->pc = 0x1AF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF368u;
        // 0x1af36c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF370u;
        goto label_1af370;
    }
    ctx->pc = 0x1AF368u;
    {
        const bool branch_taken_0x1af368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF368u;
        // 0x1af36c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af368) {
            ctx->pc = 0x1AF4A4u;
            goto label_1af4a4;
        }
    }
    ctx->pc = 0x1AF370u;
label_1af370:
    // 0x1af370: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af374:
    // 0x1af374: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1af374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1af378:
    // 0x1af378: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1af378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1af37c:
    // 0x1af37c: 0xc474d480  lwc1        $f20, -0x2B80($v1)
    ctx->pc = 0x1af37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1af380:
    // 0x1af380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af384:
    // 0x1af384: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1af384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1af388:
    // 0x1af388: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1af388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1af38c:
    // 0x1af38c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af390:
    // 0x1af390: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1af390u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1af394:
    // 0x1af394: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1af394u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1af398:
    // 0x1af398: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1af398u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1af39c:
    // 0x1af39c: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1af39cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1af3a0:
    // 0x1af3a0: 0x269515d0  addiu       $s5, $s4, 0x15D0
    ctx->pc = 0x1af3a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 5584));
label_1af3a4:
    // 0x1af3a4: 0x269e3f10  addiu       $fp, $s4, 0x3F10
    ctx->pc = 0x1af3a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 16144));
label_1af3a8:
    // 0x1af3a8: 0xc660d48c  lwc1        $f0, -0x2B74($s3)
    ctx->pc = 0x1af3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af3ac:
    // 0x1af3ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1af3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1af3b0:
    // 0x1af3b0: 0xc621d47c  lwc1        $f1, -0x2B84($s1)
    ctx->pc = 0x1af3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af3b4:
    // 0x1af3b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1af3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af3b8:
    // 0x1af3b8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1af3b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1af3bc:
    // 0x1af3bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1af3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1af3c0:
    // 0x1af3c0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1af3c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1af3c4:
    // 0x1af3c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1af3c8:
    // 0x1af3c8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1af3c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1af3cc:
    // 0x1af3cc: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1af3ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1af3d0:
    // 0x1af3d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af3d4:
    // 0x1af3d4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1af3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1af3d8:
    // 0x1af3d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1af3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1af3dc:
    // 0x1af3dc: 0x60f809  jalr        $v1
label_1af3e0:
    if (ctx->pc == 0x1AF3E0u) {
        ctx->pc = 0x1AF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3DCu;
        // 0x1af3e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3E4u;
        goto label_1af3e4;
    }
    ctx->pc = 0x1AF3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF3E4u);
        ctx->pc = 0x1AF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3DCu;
        // 0x1af3e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF3DCu, 0x1AF3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF3E4u;
label_1af3e4:
    // 0x1af3e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af3e8:
    // 0x1af3e8: 0xc6edd498  lwc1        $f13, -0x2B68($s7)
    ctx->pc = 0x1af3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1af3ec:
    // 0x1af3ec: 0xc44cd494  lwc1        $f12, -0x2B6C($v0)
    ctx->pc = 0x1af3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1af3f0:
    // 0x1af3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af3f4:
    // 0x1af3f4: 0xc068848  jal         func_1A2120
label_1af3f8:
    if (ctx->pc == 0x1AF3F8u) {
        ctx->pc = 0x1AF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3F4u;
        // 0x1af3f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3FCu;
        goto label_1af3fc;
    }
    ctx->pc = 0x1AF3F4u;
    SET_GPR_U32(ctx, 31, 0x1AF3FCu);
    ctx->pc = 0x1AF3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3F4u;
    // 0x1af3f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1AF3F4u, 0x1AF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3FCu;
label_1af3fc:
    // 0x1af3fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af400:
    // 0x1af400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af404:
    // 0x1af404: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1af404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1af408:
    // 0x1af408: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1af408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1af40c:
    // 0x1af40c: 0x60f809  jalr        $v1
label_1af410:
    if (ctx->pc == 0x1AF410u) {
        ctx->pc = 0x1AF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF40Cu;
        // 0x1af410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF414u;
        goto label_1af414;
    }
    ctx->pc = 0x1AF40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF414u);
        ctx->pc = 0x1AF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF40Cu;
        // 0x1af410: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF40Cu, 0x1AF414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF414u;
label_1af414:
    // 0x1af414: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af418:
    // 0x1af418: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1af418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1af41c:
    // 0x1af41c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1af41cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1af420:
    // 0x1af420: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1af424:
    // 0x1af424: 0x60f809  jalr        $v1
label_1af428:
    if (ctx->pc == 0x1AF428u) {
        ctx->pc = 0x1AF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF424u;
        // 0x1af428: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF42Cu;
        goto label_1af42c;
    }
    ctx->pc = 0x1AF424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF42Cu);
        ctx->pc = 0x1AF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF424u;
        // 0x1af428: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF424u, 0x1AF42Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF42Cu;
label_1af42c:
    // 0x1af42c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af430:
    // 0x1af430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af434:
    // 0x1af434: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1af434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1af438:
    // 0x1af438: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1af438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1af43c:
    // 0x1af43c: 0x60f809  jalr        $v1
label_1af440:
    if (ctx->pc == 0x1AF440u) {
        ctx->pc = 0x1AF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF43Cu;
        // 0x1af440: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF444u;
        goto label_1af444;
    }
    ctx->pc = 0x1AF43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF444u);
        ctx->pc = 0x1AF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF43Cu;
        // 0x1af440: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF43Cu, 0x1AF444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF444u;
label_1af444:
    // 0x1af444: 0x2e42000f  sltiu       $v0, $s2, 0xF
    ctx->pc = 0x1af444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1af448:
    // 0x1af448: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_1af44c:
    if (ctx->pc == 0x1AF44Cu) {
        ctx->pc = 0x1AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF448u;
        // 0x1af44c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF450u;
        goto label_1af450;
    }
    ctx->pc = 0x1AF448u;
    {
        const bool branch_taken_0x1af448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF448u;
        // 0x1af44c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af448) {
            ctx->pc = 0x1AF3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af3a8;
        }
    }
    ctx->pc = 0x1AF450u;
label_1af450:
    // 0x1af450: 0x2e420013  sltiu       $v0, $s2, 0x13
    ctx->pc = 0x1af450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1af454:
    // 0x1af454: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1af458:
    if (ctx->pc == 0x1AF458u) {
        ctx->pc = 0x1AF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF454u;
        // 0x1af458: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF45Cu;
        goto label_1af45c;
    }
    ctx->pc = 0x1AF454u;
    {
        const bool branch_taken_0x1af454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF454u;
        // 0x1af458: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af454) {
            ctx->pc = 0x1AF588u;
            goto label_1af588;
        }
    }
    ctx->pc = 0x1AF45Cu;
label_1af45c:
    // 0x1af45c: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x1af45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_1af460:
    // 0x1af460: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1af460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1af464:
    // 0x1af464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1af468:
    // 0x1af468: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x1af468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1af46c:
    // 0x1af46c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1af46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af470:
    // 0x1af470: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1af470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1af474:
    // 0x1af474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af478:
    // 0x1af478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1af47c:
    // 0x1af47c: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1af47cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1af480:
    // 0x1af480: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1af480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1af484:
    // 0x1af484: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1af484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1af488:
    // 0x1af488: 0x40f809  jalr        $v0
label_1af48c:
    if (ctx->pc == 0x1AF48Cu) {
        ctx->pc = 0x1AF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF488u;
        // 0x1af48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF490u;
        goto label_1af490;
    }
    ctx->pc = 0x1AF488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF490u);
        ctx->pc = 0x1AF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF488u;
        // 0x1af48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF488u, 0x1AF490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF490u;
label_1af490:
    // 0x1af490: 0x2e420013  sltiu       $v0, $s2, 0x13
    ctx->pc = 0x1af490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1af494:
    // 0x1af494: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1af498:
    if (ctx->pc == 0x1AF498u) {
        ctx->pc = 0x1AF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF494u;
        // 0x1af498: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF49Cu;
        goto label_1af49c;
    }
    ctx->pc = 0x1AF494u;
    {
        const bool branch_taken_0x1af494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF494u;
        // 0x1af498: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af494) {
            ctx->pc = 0x1AF470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af470;
        }
    }
    ctx->pc = 0x1AF49Cu;
label_1af49c:
    // 0x1af49c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1af4a0:
    if (ctx->pc == 0x1AF4A0u) {
        ctx->pc = 0x1AF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF49Cu;
        // 0x1af4a0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4A4u;
        goto label_1af4a4;
    }
    ctx->pc = 0x1AF49Cu;
    {
        const bool branch_taken_0x1af49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF49Cu;
        // 0x1af4a0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af49c) {
            ctx->pc = 0x1AF58Cu;
            goto label_1af58c;
        }
    }
    ctx->pc = 0x1AF4A4u;
label_1af4a4:
    // 0x1af4a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1af4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1af4a8:
    // 0x1af4a8: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1af4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1af4ac:
    // 0x1af4ac: 0xc474d484  lwc1        $f20, -0x2B7C($v1)
    ctx->pc = 0x1af4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1af4b0:
    // 0x1af4b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af4b4:
    // 0x1af4b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1af4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1af4b8:
    // 0x1af4b8: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1af4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1af4bc:
    // 0x1af4bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af4c0:
    // 0x1af4c0: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1af4c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1af4c4:
    // 0x1af4c4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1af4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1af4c8:
    // 0x1af4c8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1af4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1af4cc:
    // 0x1af4cc: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1af4ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1af4d0:
    // 0x1af4d0: 0x269515d0  addiu       $s5, $s4, 0x15D0
    ctx->pc = 0x1af4d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 5584));
label_1af4d4:
    // 0x1af4d4: 0x269e3f10  addiu       $fp, $s4, 0x3F10
    ctx->pc = 0x1af4d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 16144));
label_1af4d8:
    // 0x1af4d8: 0xc660d490  lwc1        $f0, -0x2B70($s3)
    ctx->pc = 0x1af4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af4dc:
    // 0x1af4dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1af4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1af4e0:
    // 0x1af4e0: 0xc641d488  lwc1        $f1, -0x2B78($s2)
    ctx->pc = 0x1af4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af4e4:
    // 0x1af4e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1af4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af4e8:
    // 0x1af4e8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1af4e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1af4ec:
    // 0x1af4ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1af4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1af4f0:
    // 0x1af4f0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1af4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1af4f4:
    // 0x1af4f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1af4f8:
    // 0x1af4f8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1af4f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1af4fc:
    // 0x1af4fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1af4fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1af500:
    // 0x1af500: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af504:
    // 0x1af504: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1af504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1af508:
    // 0x1af508: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1af508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1af50c:
    // 0x1af50c: 0x60f809  jalr        $v1
label_1af510:
    if (ctx->pc == 0x1AF510u) {
        ctx->pc = 0x1AF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF50Cu;
        // 0x1af510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF514u;
        goto label_1af514;
    }
    ctx->pc = 0x1AF50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF514u);
        ctx->pc = 0x1AF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF50Cu;
        // 0x1af510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF50Cu, 0x1AF514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF514u;
label_1af514:
    // 0x1af514: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af518:
    // 0x1af518: 0xc6ecd498  lwc1        $f12, -0x2B68($s7)
    ctx->pc = 0x1af518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1af51c:
    // 0x1af51c: 0xc46dd494  lwc1        $f13, -0x2B6C($v1)
    ctx->pc = 0x1af51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1af520:
    // 0x1af520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af524:
    // 0x1af524: 0xc068848  jal         func_1A2120
label_1af528:
    if (ctx->pc == 0x1AF528u) {
        ctx->pc = 0x1AF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF524u;
        // 0x1af528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF52Cu;
        goto label_1af52c;
    }
    ctx->pc = 0x1AF524u;
    SET_GPR_U32(ctx, 31, 0x1AF52Cu);
    ctx->pc = 0x1AF528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF524u;
    // 0x1af528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1AF524u, 0x1AF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF52Cu;
label_1af52c:
    // 0x1af52c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af530:
    // 0x1af530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af534:
    // 0x1af534: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1af534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1af538:
    // 0x1af538: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1af538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1af53c:
    // 0x1af53c: 0x60f809  jalr        $v1
label_1af540:
    if (ctx->pc == 0x1AF540u) {
        ctx->pc = 0x1AF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF53Cu;
        // 0x1af540: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF544u;
        goto label_1af544;
    }
    ctx->pc = 0x1AF53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF544u);
        ctx->pc = 0x1AF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF53Cu;
        // 0x1af540: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF53Cu, 0x1AF544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF544u;
label_1af544:
    // 0x1af544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af548:
    // 0x1af548: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1af548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1af54c:
    // 0x1af54c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1af54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1af550:
    // 0x1af550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1af550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1af554:
    // 0x1af554: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1af554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1af558:
    // 0x1af558: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1af558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1af55c:
    // 0x1af55c: 0x60f809  jalr        $v1
label_1af560:
    if (ctx->pc == 0x1AF560u) {
        ctx->pc = 0x1AF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF55Cu;
        // 0x1af560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF564u;
        goto label_1af564;
    }
    ctx->pc = 0x1AF55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF564u);
        ctx->pc = 0x1AF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF55Cu;
        // 0x1af560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF55Cu, 0x1AF564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF564u;
label_1af564:
    // 0x1af564: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af568:
    // 0x1af568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af56c:
    // 0x1af56c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1af56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1af570:
    // 0x1af570: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1af570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1af574:
    // 0x1af574: 0x60f809  jalr        $v1
label_1af578:
    if (ctx->pc == 0x1AF578u) {
        ctx->pc = 0x1AF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF574u;
        // 0x1af578: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF57Cu;
        goto label_1af57c;
    }
    ctx->pc = 0x1AF574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF57Cu);
        ctx->pc = 0x1AF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF574u;
        // 0x1af578: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF574u, 0x1AF57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF57Cu;
label_1af57c:
    // 0x1af57c: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x1af57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1af580:
    // 0x1af580: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1af584:
    if (ctx->pc == 0x1AF584u) {
        ctx->pc = 0x1AF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF580u;
        // 0x1af584: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF588u;
        goto label_1af588;
    }
    ctx->pc = 0x1AF580u;
    {
        const bool branch_taken_0x1af580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF580u;
        // 0x1af584: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af580) {
            ctx->pc = 0x1AF4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af4d8;
        }
    }
    ctx->pc = 0x1AF588u;
label_1af588:
    // 0x1af588: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1af588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1af58c:
    // 0x1af58c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af590:
    // 0x1af590: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1af590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1af594:
    // 0x1af594: 0xac4325d8  sw          $v1, 0x25D8($v0)
    ctx->pc = 0x1af594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9688), GPR_U32(ctx, 3));
label_1af598:
    // 0x1af598: 0x8ec3deb8  lw          $v1, -0x2148($s6)
    ctx->pc = 0x1af598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
label_1af59c:
    // 0x1af59c: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x1af59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_1af5a0:
    // 0x1af5a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1af5a4:
    if (ctx->pc == 0x1AF5A4u) {
        ctx->pc = 0x1AF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5A0u;
        // 0x1af5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5A8u;
        goto label_1af5a8;
    }
    ctx->pc = 0x1AF5A0u;
    {
        const bool branch_taken_0x1af5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5A0u;
        // 0x1af5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5a0) {
            ctx->pc = 0x1AF5C8u;
            goto label_1af5c8;
        }
    }
    ctx->pc = 0x1AF5A8u;
label_1af5a8:
    // 0x1af5a8: 0xc46001ec  lwc1        $f0, 0x1EC($v1)
    ctx->pc = 0x1af5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af5ac:
    // 0x1af5ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1af5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af5b0:
    // 0x1af5b0: 0x0  nop
    ctx->pc = 0x1af5b0u;
    // NOP
label_1af5b4:
    // 0x1af5b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1af5b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af5b8:
    // 0x1af5b8: 0x0  nop
    ctx->pc = 0x1af5b8u;
    // NOP
label_1af5bc:
    // 0x1af5bc: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_1af5c0:
    if (ctx->pc == 0x1AF5C0u) {
        ctx->pc = 0x1AF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5BCu;
        // 0x1af5c0: 0x8c6201d4  lw          $v0, 0x1D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5C4u;
        goto label_1af5c4;
    }
    ctx->pc = 0x1AF5BCu;
    {
        const bool branch_taken_0x1af5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1af5bc) {
            ctx->pc = 0x1AF5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF5BCu;
            // 0x1af5c0: 0x8c6201d4  lw          $v0, 0x1D4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF5F0u;
            goto label_1af5f0;
        }
    }
    ctx->pc = 0x1AF5C4u;
label_1af5c4:
    // 0x1af5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af5c8:
    // 0x1af5c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1af5cc:
    // 0x1af5cc: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1af5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_1af5d0:
    // 0x1af5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5d4:
    // 0x1af5d4: 0xc06c996  jal         func_1B2658
label_1af5d8:
    if (ctx->pc == 0x1AF5D8u) {
        ctx->pc = 0x1AF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5D4u;
        // 0x1af5d8: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5DCu;
        goto label_1af5dc;
    }
    ctx->pc = 0x1AF5D4u;
    SET_GPR_U32(ctx, 31, 0x1AF5DCu);
    ctx->pc = 0x1AF5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5D4u;
    // 0x1af5d8: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1AF5D4u, 0x1AF5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5DCu;
label_1af5dc:
    // 0x1af5dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1af5e0:
    // 0x1af5e0: 0xc06c996  jal         func_1B2658
label_1af5e4:
    if (ctx->pc == 0x1AF5E4u) {
        ctx->pc = 0x1AF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5E0u;
        // 0x1af5e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5E8u;
        goto label_1af5e8;
    }
    ctx->pc = 0x1AF5E0u;
    SET_GPR_U32(ctx, 31, 0x1AF5E8u);
    ctx->pc = 0x1AF5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5E0u;
    // 0x1af5e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1AF5E0u, 0x1AF5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5E8u;
label_1af5e8:
    // 0x1af5e8: 0x10000803  b           . + 4 + (0x803 << 2)
label_1af5ec:
    if (ctx->pc == 0x1AF5ECu) {
        ctx->pc = 0x1AF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5E8u;
        // 0x1af5ec: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5F0u;
        goto label_1af5f0;
    }
    ctx->pc = 0x1AF5E8u;
    {
        const bool branch_taken_0x1af5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5E8u;
        // 0x1af5ec: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5e8) {
            ctx->pc = 0x1B15F8u;
            return;
        }
    }
    ctx->pc = 0x1AF5F0u;
label_1af5f0:
    // 0x1af5f0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_1af5f4:
    if (ctx->pc == 0x1AF5F4u) {
        ctx->pc = 0x1AF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5F0u;
        // 0x1af5f4: 0x8ec3deb8  lw          $v1, -0x2148($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5F8u;
        goto label_1af5f8;
    }
    ctx->pc = 0x1AF5F0u;
    {
        const bool branch_taken_0x1af5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af5f0) {
            ctx->pc = 0x1AF5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF5F0u;
            // 0x1af5f4: 0x8ec3deb8  lw          $v1, -0x2148($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF64Cu;
            goto label_1af64c;
        }
    }
    ctx->pc = 0x1AF5F8u;
label_1af5f8:
    // 0x1af5f8: 0xc46001d8  lwc1        $f0, 0x1D8($v1)
    ctx->pc = 0x1af5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af5fc:
    // 0x1af5fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1af5fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af600:
    // 0x1af600: 0x0  nop
    ctx->pc = 0x1af600u;
    // NOP
label_1af604:
    // 0x1af604: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1af608:
    if (ctx->pc == 0x1AF608u) {
        ctx->pc = 0x1AF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF604u;
        // 0x1af608: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF60Cu;
        goto label_1af60c;
    }
    ctx->pc = 0x1AF604u;
    {
        const bool branch_taken_0x1af604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF604u;
        // 0x1af608: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af604) {
            ctx->pc = 0x1AF648u;
            goto label_1af648;
        }
    }
    ctx->pc = 0x1AF60Cu;
label_1af60c:
    // 0x1af60c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1af60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1af610:
    // 0x1af610: 0x8c4377ac  lw          $v1, 0x77AC($v0)
    ctx->pc = 0x1af610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30636)));
label_1af614:
    // 0x1af614: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1af618:
    if (ctx->pc == 0x1AF618u) {
        ctx->pc = 0x1AF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF614u;
        // 0x1af618: 0x8ec3deb8  lw          $v1, -0x2148($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF61Cu;
        goto label_1af61c;
    }
    ctx->pc = 0x1AF614u;
    {
        const bool branch_taken_0x1af614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF614u;
        // 0x1af618: 0x8ec3deb8  lw          $v1, -0x2148($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af614) {
            ctx->pc = 0x1AF64Cu;
            goto label_1af64c;
        }
    }
    ctx->pc = 0x1AF61Cu;
label_1af61c:
    // 0x1af61c: 0x8c4277b0  lw          $v0, 0x77B0($v0)
    ctx->pc = 0x1af61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30640)));
label_1af620:
    // 0x1af620: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1af624:
    if (ctx->pc == 0x1AF624u) {
        ctx->pc = 0x1AF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF620u;
        // 0x1af624: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF628u;
        goto label_1af628;
    }
    ctx->pc = 0x1AF620u;
    {
        const bool branch_taken_0x1af620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF620u;
        // 0x1af624: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af620) {
            ctx->pc = 0x1AF69Cu;
            goto label_1af69c;
        }
    }
    ctx->pc = 0x1AF628u;
label_1af628:
    // 0x1af628: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1af62c:
    // 0x1af62c: 0xc06c984  jal         func_1B2610
label_1af630:
    if (ctx->pc == 0x1AF630u) {
        ctx->pc = 0x1AF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF62Cu;
        // 0x1af630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF634u;
        goto label_1af634;
    }
    ctx->pc = 0x1AF62Cu;
    SET_GPR_U32(ctx, 31, 0x1AF634u);
    ctx->pc = 0x1AF630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF62Cu;
    // 0x1af630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2610u, 0x1AF62Cu, 0x1AF634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF634u;
label_1af634:
    // 0x1af634: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1af638:
    // 0x1af638: 0xc06c984  jal         func_1B2610
label_1af63c:
    if (ctx->pc == 0x1AF63Cu) {
        ctx->pc = 0x1AF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF638u;
        // 0x1af63c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF640u;
        goto label_1af640;
    }
    ctx->pc = 0x1AF638u;
    SET_GPR_U32(ctx, 31, 0x1AF640u);
    ctx->pc = 0x1AF63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF638u;
    // 0x1af63c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2610u, 0x1AF638u, 0x1AF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF640u;
label_1af640:
    // 0x1af640: 0x10000016  b           . + 4 + (0x16 << 2)
label_1af644:
    if (ctx->pc == 0x1AF644u) {
        ctx->pc = 0x1AF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF640u;
        // 0x1af644: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF648u;
        goto label_1af648;
    }
    ctx->pc = 0x1AF640u;
    {
        const bool branch_taken_0x1af640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF640u;
        // 0x1af644: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af640) {
            ctx->pc = 0x1AF69Cu;
            goto label_1af69c;
        }
    }
    ctx->pc = 0x1AF648u;
label_1af648:
    // 0x1af648: 0x8ec3deb8  lw          $v1, -0x2148($s6)
    ctx->pc = 0x1af648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958776)));
label_1af64c:
    // 0x1af64c: 0x8c6201d4  lw          $v0, 0x1D4($v1)
    ctx->pc = 0x1af64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_1af650:
    // 0x1af650: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1af654:
    if (ctx->pc == 0x1AF654u) {
        ctx->pc = 0x1AF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF650u;
        // 0x1af654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF658u;
        goto label_1af658;
    }
    ctx->pc = 0x1AF650u;
    {
        const bool branch_taken_0x1af650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF650u;
        // 0x1af654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af650) {
            ctx->pc = 0x1AF678u;
            goto label_1af678;
        }
    }
    ctx->pc = 0x1AF658u;
label_1af658:
    // 0x1af658: 0xc46101d8  lwc1        $f1, 0x1D8($v1)
    ctx->pc = 0x1af658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af65c:
    // 0x1af65c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1af65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af660:
    // 0x1af660: 0x0  nop
    ctx->pc = 0x1af660u;
    // NOP
label_1af664:
    // 0x1af664: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1af664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af668:
    // 0x1af668: 0x0  nop
    ctx->pc = 0x1af668u;
    // NOP
label_1af66c:
    // 0x1af66c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1af670:
    if (ctx->pc == 0x1AF670u) {
        ctx->pc = 0x1AF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF66Cu;
        // 0x1af670: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF674u;
        goto label_1af674;
    }
    ctx->pc = 0x1AF66Cu;
    {
        const bool branch_taken_0x1af66c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF66Cu;
        // 0x1af670: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af66c) {
            ctx->pc = 0x1AF69Cu;
            goto label_1af69c;
        }
    }
    ctx->pc = 0x1AF674u;
label_1af674:
    // 0x1af674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af678:
    // 0x1af678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1af67c:
    // 0x1af67c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1af67cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_1af680:
    // 0x1af680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af684:
    // 0x1af684: 0xc06c996  jal         func_1B2658
label_1af688:
    if (ctx->pc == 0x1AF688u) {
        ctx->pc = 0x1AF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF684u;
        // 0x1af688: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF68Cu;
        goto label_1af68c;
    }
    ctx->pc = 0x1AF684u;
    SET_GPR_U32(ctx, 31, 0x1AF68Cu);
    ctx->pc = 0x1AF688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF684u;
    // 0x1af688: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1AF684u, 0x1AF68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF68Cu;
label_1af68c:
    // 0x1af68c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1af690:
    // 0x1af690: 0xc06c996  jal         func_1B2658
label_1af694:
    if (ctx->pc == 0x1AF694u) {
        ctx->pc = 0x1AF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF690u;
        // 0x1af694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF698u;
        goto label_1af698;
    }
    ctx->pc = 0x1AF690u;
    SET_GPR_U32(ctx, 31, 0x1AF698u);
    ctx->pc = 0x1AF694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF690u;
    // 0x1af694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x1AF690u, 0x1AF698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF698u;
label_1af698:
    // 0x1af698: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af69c:
    // 0x1af69c: 0x8c43eddc  lw          $v1, -0x1224($v0)
    ctx->pc = 0x1af69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_1af6a0:
    // 0x1af6a0: 0x8c6220ac  lw          $v0, 0x20AC($v1)
    ctx->pc = 0x1af6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8364)));
label_1af6a4:
    // 0x1af6a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1af6a8:
    if (ctx->pc == 0x1AF6A8u) {
        ctx->pc = 0x1AF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6A4u;
        // 0x1af6a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6ACu;
        goto label_1af6ac;
    }
    ctx->pc = 0x1AF6A4u;
    {
        const bool branch_taken_0x1af6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6A4u;
        // 0x1af6a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6a4) {
            ctx->pc = 0x1AF6B0u;
            goto label_1af6b0;
        }
    }
    ctx->pc = 0x1AF6ACu;
label_1af6ac:
    // 0x1af6ac: 0xac6220ac  sw          $v0, 0x20AC($v1)
    ctx->pc = 0x1af6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8364), GPR_U32(ctx, 2));
label_1af6b0:
    // 0x1af6b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af6b4:
    // 0x1af6b4: 0x8c43ec34  lw          $v1, -0x13CC($v0)
    ctx->pc = 0x1af6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
label_1af6b8:
    // 0x1af6b8: 0x8c6220ac  lw          $v0, 0x20AC($v1)
    ctx->pc = 0x1af6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8364)));
label_1af6bc:
    // 0x1af6bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1af6c0:
    if (ctx->pc == 0x1AF6C0u) {
        ctx->pc = 0x1AF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6BCu;
        // 0x1af6c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6C4u;
        goto label_1af6c4;
    }
    ctx->pc = 0x1AF6BCu;
    {
        const bool branch_taken_0x1af6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6BCu;
        // 0x1af6c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6bc) {
            ctx->pc = 0x1AF6C8u;
            goto label_1af6c8;
        }
    }
    ctx->pc = 0x1AF6C4u;
label_1af6c4:
    // 0x1af6c4: 0xac6220ac  sw          $v0, 0x20AC($v1)
    ctx->pc = 0x1af6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8364), GPR_U32(ctx, 2));
label_1af6c8:
    // 0x1af6c8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1af6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1af6cc:
    // 0x1af6cc: 0x26820100  addiu       $v0, $s4, 0x100
    ctx->pc = 0x1af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_1af6d0:
    // 0x1af6d0: 0x348435e0  ori         $a0, $a0, 0x35E0
    ctx->pc = 0x1af6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13792);
label_1af6d4:
    // 0x1af6d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1af6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1af6d8:
    // 0x1af6d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1af6dc:
    // 0x1af6dc: 0x2848021  addu        $s0, $s4, $a0
    ctx->pc = 0x1af6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1af6e0:
    // 0x1af6e0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1af6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1af6e4:
    // 0x1af6e4: 0x346336e0  ori         $v1, $v1, 0x36E0
    ctx->pc = 0x1af6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14048);
label_1af6e8:
    // 0x1af6e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af6ec:
    // 0x1af6ec: 0x268415b0  addiu       $a0, $s4, 0x15B0
    ctx->pc = 0x1af6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5552));
label_1af6f0:
    // 0x1af6f0: 0x283b821  addu        $s7, $s4, $v1
    ctx->pc = 0x1af6f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1af6f4:
    // 0x1af6f4: 0x2452b1b8  addiu       $s2, $v0, -0x4E48
    ctx->pc = 0x1af6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947256));
label_1af6f8:
    // 0x1af6f8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1af6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1af6fc:
    // 0x1af6fc: 0x26827660  addiu       $v0, $s4, 0x7660
    ctx->pc = 0x1af6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 30304));
label_1af700:
    // 0x1af700: 0x26836850  addiu       $v1, $s4, 0x6850
    ctx->pc = 0x1af700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 26704));
label_1af704:
    // 0x1af704: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x1af704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1af708:
    // 0x1af708: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1af708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1af70c:
    // 0x1af70c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af710:
    // 0x1af710: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x1af710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_1af714:
    // 0x1af714: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1af714u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1af718:
    // 0x1af718: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x1af718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_1af71c:
    // 0x1af71c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af720:
    // 0x1af720: 0xc06c590  jal         func_1B1640
label_1af724:
    if (ctx->pc == 0x1AF724u) {
        ctx->pc = 0x1AF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF720u;
        // 0x1af724: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF728u;
        goto label_1af728;
    }
    ctx->pc = 0x1AF720u;
    SET_GPR_U32(ctx, 31, 0x1AF728u);
    ctx->pc = 0x1AF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF720u;
    // 0x1af724: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1AF720u, 0x1AF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF728u;
label_1af728:
    // 0x1af728: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1af72c:
    if (ctx->pc == 0x1AF72Cu) {
        ctx->pc = 0x1AF730u;
        goto label_1af730;
    }
    ctx->pc = 0x1AF728u;
    {
        const bool branch_taken_0x1af728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af728) {
            ctx->pc = 0x1AF758u;
            goto label_1af758;
        }
    }
    ctx->pc = 0x1AF730u;
label_1af730:
    // 0x1af730: 0x16330009  bne         $s1, $s3, . + 4 + (0x9 << 2)
label_1af734:
    if (ctx->pc == 0x1AF734u) {
        ctx->pc = 0x1AF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF730u;
        // 0x1af734: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF738u;
        goto label_1af738;
    }
    ctx->pc = 0x1AF730u;
    {
        const bool branch_taken_0x1af730 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF730u;
        // 0x1af734: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af730) {
            ctx->pc = 0x1AF758u;
            goto label_1af758;
        }
    }
    ctx->pc = 0x1AF738u;
label_1af738:
    // 0x1af738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af73c:
    // 0x1af73c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1af73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1af740:
    // 0x1af740: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1af740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1af744:
    // 0x1af744: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1af744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1af748:
    // 0x1af748: 0x60f809  jalr        $v1
label_1af74c:
    if (ctx->pc == 0x1AF74Cu) {
        ctx->pc = 0x1AF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF748u;
        // 0x1af74c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF750u;
        goto label_1af750;
    }
    ctx->pc = 0x1AF748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF750u);
        ctx->pc = 0x1AF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF748u;
        // 0x1af74c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF748u, 0x1AF750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF750u;
label_1af750:
    // 0x1af750: 0x10000028  b           . + 4 + (0x28 << 2)
label_1af754:
    if (ctx->pc == 0x1AF754u) {
        ctx->pc = 0x1AF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF750u;
        // 0x1af754: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF758u;
        goto label_1af758;
    }
    ctx->pc = 0x1AF750u;
    {
        const bool branch_taken_0x1af750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF750u;
        // 0x1af754: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af750) {
            ctx->pc = 0x1AF7F4u;
            goto label_1af7f4;
        }
    }
    ctx->pc = 0x1AF758u;
label_1af758:
    // 0x1af758: 0xc047e6c  jal         func_11F9B0
label_1af75c:
    if (ctx->pc == 0x1AF75Cu) {
        ctx->pc = 0x1AF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF758u;
        // 0x1af75c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF760u;
        goto label_1af760;
    }
    ctx->pc = 0x1AF758u;
    SET_GPR_U32(ctx, 31, 0x1AF760u);
    ctx->pc = 0x1AF75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF758u;
    // 0x1af75c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1AF758u, 0x1AF760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF760u;
label_1af760:
    // 0x1af760: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1af760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1af764:
    // 0x1af764: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1af764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1af768:
    // 0x1af768: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1af768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1af76c:
    // 0x1af76c: 0xa0f809  jalr        $a1
label_1af770:
    if (ctx->pc == 0x1AF770u) {
        ctx->pc = 0x1AF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF76Cu;
        // 0x1af770: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF774u;
        goto label_1af774;
    }
    ctx->pc = 0x1AF76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AF774u);
        ctx->pc = 0x1AF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF76Cu;
        // 0x1af770: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF76Cu, 0x1AF774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF774u;
label_1af774:
    // 0x1af774: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1af774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1af778:
    // 0x1af778: 0x5044000b  beql        $v0, $a0, . + 4 + (0xB << 2)
label_1af77c:
    if (ctx->pc == 0x1AF77Cu) {
        ctx->pc = 0x1AF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF778u;
        // 0x1af77c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF780u;
        goto label_1af780;
    }
    ctx->pc = 0x1AF778u;
    {
        const bool branch_taken_0x1af778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1af778) {
            ctx->pc = 0x1AF77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF778u;
            // 0x1af77c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF7A8u;
            goto label_1af7a8;
        }
    }
    ctx->pc = 0x1AF780u;
label_1af780:
    // 0x1af780: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1af784:
    if (ctx->pc == 0x1AF784u) {
        ctx->pc = 0x1AF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF780u;
        // 0x1af784: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF788u;
        goto label_1af788;
    }
    ctx->pc = 0x1AF780u;
    {
        const bool branch_taken_0x1af780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af780) {
            ctx->pc = 0x1AF784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF780u;
            // 0x1af784: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF7A8u;
            goto label_1af7a8;
        }
    }
    ctx->pc = 0x1AF788u;
label_1af788:
    // 0x1af788: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_1af78c:
    if (ctx->pc == 0x1AF78Cu) {
        ctx->pc = 0x1AF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF788u;
        // 0x1af78c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF790u;
        goto label_1af790;
    }
    ctx->pc = 0x1AF788u;
    {
        const bool branch_taken_0x1af788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF788u;
        // 0x1af78c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af788) {
            ctx->pc = 0x1AF7A4u;
            goto label_1af7a4;
        }
    }
    ctx->pc = 0x1AF790u;
label_1af790:
    // 0x1af790: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_1af794:
    if (ctx->pc == 0x1AF794u) {
        ctx->pc = 0x1AF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF790u;
        // 0x1af794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF798u;
        goto label_1af798;
    }
    ctx->pc = 0x1AF790u;
    {
        const bool branch_taken_0x1af790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1af790) {
            ctx->pc = 0x1AF794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF790u;
            // 0x1af794: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF7A8u;
            goto label_1af7a8;
        }
    }
    ctx->pc = 0x1AF798u;
label_1af798:
    // 0x1af798: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1af798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1af79c:
    // 0x1af79c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1af7a0:
    if (ctx->pc == 0x1AF7A0u) {
        ctx->pc = 0x1AF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF79Cu;
        // 0x1af7a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7A4u;
        goto label_1af7a4;
    }
    ctx->pc = 0x1AF79Cu;
    {
        const bool branch_taken_0x1af79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af79c) {
            ctx->pc = 0x1AF7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF79Cu;
            // 0x1af7a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF7DCu;
            goto label_1af7dc;
        }
    }
    ctx->pc = 0x1AF7A4u;
label_1af7a4:
    // 0x1af7a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1af7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1af7a8:
    // 0x1af7a8: 0xc06bbd4  jal         func_1AEF50
label_1af7ac:
    if (ctx->pc == 0x1AF7ACu) {
        ctx->pc = 0x1AF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7A8u;
        // 0x1af7ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7B0u;
        goto label_1af7b0;
    }
    ctx->pc = 0x1AF7A8u;
    SET_GPR_U32(ctx, 31, 0x1AF7B0u);
    ctx->pc = 0x1AF7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7A8u;
    // 0x1af7ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF50u, 0x1AF7A8u, 0x1AF7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7B0u;
label_1af7b0:
    // 0x1af7b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1af7b4:
    if (ctx->pc == 0x1AF7B4u) {
        ctx->pc = 0x1AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7B0u;
        // 0x1af7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7B8u;
        goto label_1af7b8;
    }
    ctx->pc = 0x1AF7B0u;
    {
        const bool branch_taken_0x1af7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7B0u;
        // 0x1af7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7b0) {
            ctx->pc = 0x1AF7F0u;
            goto label_1af7f0;
        }
    }
    ctx->pc = 0x1AF7B8u;
label_1af7b8:
    // 0x1af7b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af7bc:
    // 0x1af7bc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1af7c0:
    // 0x1af7c0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1af7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1af7c4:
    // 0x1af7c4: 0x60f809  jalr        $v1
label_1af7c8:
    if (ctx->pc == 0x1AF7C8u) {
        ctx->pc = 0x1AF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C4u;
        // 0x1af7c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7CCu;
        goto label_1af7cc;
    }
    ctx->pc = 0x1AF7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF7CCu);
        ctx->pc = 0x1AF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C4u;
        // 0x1af7c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF7C4u, 0x1AF7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF7CCu;
label_1af7cc:
    // 0x1af7cc: 0xc06896e  jal         func_1A25B8
label_1af7d0:
    if (ctx->pc == 0x1AF7D0u) {
        ctx->pc = 0x1AF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7CCu;
        // 0x1af7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7D4u;
        goto label_1af7d4;
    }
    ctx->pc = 0x1AF7CCu;
    SET_GPR_U32(ctx, 31, 0x1AF7D4u);
    ctx->pc = 0x1AF7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7CCu;
    // 0x1af7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A25B8u, 0x1AF7CCu, 0x1AF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7D4u;
label_1af7d4:
    // 0x1af7d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1af7d8:
    if (ctx->pc == 0x1AF7D8u) {
        ctx->pc = 0x1AF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7D4u;
        // 0x1af7d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7DCu;
        goto label_1af7dc;
    }
    ctx->pc = 0x1AF7D4u;
    {
        const bool branch_taken_0x1af7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7D4u;
        // 0x1af7d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7d4) {
            ctx->pc = 0x1AF7F4u;
            goto label_1af7f4;
        }
    }
    ctx->pc = 0x1AF7DCu;
label_1af7dc:
    // 0x1af7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af7e0:
    // 0x1af7e0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1af7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1af7e4:
    // 0x1af7e4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1af7e8:
    // 0x1af7e8: 0x60f809  jalr        $v1
label_1af7ec:
    if (ctx->pc == 0x1AF7ECu) {
        ctx->pc = 0x1AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7E8u;
        // 0x1af7ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7F0u;
        goto label_1af7f0;
    }
    ctx->pc = 0x1AF7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF7F0u);
        ctx->pc = 0x1AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7E8u;
        // 0x1af7ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF7E8u, 0x1AF7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF7F0u;
label_1af7f0:
    // 0x1af7f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1af7f4:
    // 0x1af7f4: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1af7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1af7f8:
    // 0x1af7f8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1af7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1af7fc:
    // 0x1af7fc: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_1af800:
    if (ctx->pc == 0x1AF800u) {
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF804u;
        goto label_1af804;
    }
    ctx->pc = 0x1AF7FCu;
    {
        const bool branch_taken_0x1af7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7fc) {
            ctx->pc = 0x1AF720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af720;
        }
    }
    ctx->pc = 0x1AF804u;
label_1af804:
    // 0x1af804: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af808:
    // 0x1af808: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_1af80c:
    // 0x1af80c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1af80cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1af810:
    // 0x1af810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af814:
    // 0x1af814: 0x8c82cdb4  lw          $v0, -0x324C($a0)
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_1af818:
    // 0x1af818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1af81c:
    // 0x1af81c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af820:
    // 0x1af820: 0xe440d504  swc1        $f0, -0x2AFC($v0)
    ctx->pc = 0x1af820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956292), bits); }
label_1af824:
    // 0x1af824: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1af824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1af828:
    // 0x1af828: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_1af82c:
    if (ctx->pc == 0x1AF82Cu) {
        ctx->pc = 0x1AF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF828u;
        // 0x1af82c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF830u;
        goto label_1af830;
    }
    ctx->pc = 0x1AF828u;
    {
        const bool branch_taken_0x1af828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF828u;
        // 0x1af82c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af828) {
            ctx->pc = 0x1AFA48u;
            goto label_1afa48;
        }
    }
    ctx->pc = 0x1AF830u;
label_1af830:
    // 0x1af830: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1af834:
    if (ctx->pc == 0x1AF834u) {
        ctx->pc = 0x1AF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF830u;
        // 0x1af834: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF838u;
        goto label_1af838;
    }
    ctx->pc = 0x1AF830u;
    {
        const bool branch_taken_0x1af830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF830u;
        // 0x1af834: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af830) {
            ctx->pc = 0x1AF8E4u;
            goto label_1af8e4;
        }
    }
    ctx->pc = 0x1AF838u;
label_1af838:
    // 0x1af838: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
label_1af83c:
    if (ctx->pc == 0x1AF83Cu) {
        ctx->pc = 0x1AF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF838u;
        // 0x1af83c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF840u;
        goto label_1af840;
    }
    ctx->pc = 0x1AF838u;
    {
        const bool branch_taken_0x1af838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF838u;
        // 0x1af83c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af838) {
            ctx->pc = 0x1AFC8Cu;
            goto label_1afc8c;
        }
    }
    ctx->pc = 0x1AF840u;
label_1af840:
    // 0x1af840: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1af840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
label_1af844:
    // 0x1af844: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1af844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1af848:
    // 0x1af848: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1af848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1af84c:
    // 0x1af84c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1af84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1af850:
    // 0x1af850: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1af854:
    // 0x1af854: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af858:
    // 0x1af858: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af85c:
    // 0x1af85c: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1af85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1af860:
    // 0x1af860: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1af860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1af864:
    // 0x1af864: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1af864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1af868:
    // 0x1af868: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1af868u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1af86c:
    // 0x1af86c: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x1af86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
label_1af870:
    // 0x1af870: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1af870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1af874:
    // 0x1af874: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1af874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1af878:
    // 0x1af878: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1af878u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1af87c:
    // 0x1af87c: 0x3c01bf1c  lui         $at, 0xBF1C
    ctx->pc = 0x1af87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48924 << 16));
label_1af880:
    // 0x1af880: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1af880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1af884:
    // 0x1af884: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1af884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1af888:
    // 0x1af888: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1af888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1af88c:
    // 0x1af88c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af890:
    // 0x1af890: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1af890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1af894:
    // 0x1af894: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1af894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1af898:
    // 0x1af898: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1af898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_1af89c:
    // 0x1af89c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1af89cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1af8a0:
    // 0x1af8a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af8a4:
    // 0x1af8a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af8a8:
    // 0x1af8a8: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1af8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
label_1af8ac:
    // 0x1af8ac: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1af8acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1af8b0:
    // 0x1af8b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1af8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af8b4:
    // 0x1af8b4: 0xe483d46c  swc1        $f3, -0x2B94($a0)
    ctx->pc = 0x1af8b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956140), bits); }
label_1af8b8:
    // 0x1af8b8: 0xe461d4a0  swc1        $f1, -0x2B60($v1)
    ctx->pc = 0x1af8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956192), bits); }
label_1af8bc:
    // 0x1af8bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af8c0:
    // 0x1af8c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af8c4:
    // 0x1af8c4: 0xe4e4d434  swc1        $f4, -0x2BCC($a3)
    ctx->pc = 0x1af8c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956084), bits); }
label_1af8c8:
    // 0x1af8c8: 0xe4c6d454  swc1        $f6, -0x2BAC($a2)
    ctx->pc = 0x1af8c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956116), bits); }
label_1af8cc:
    // 0x1af8cc: 0xe4a5d468  swc1        $f5, -0x2B98($a1)
    ctx->pc = 0x1af8ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956136), bits); }
label_1af8d0:
    // 0x1af8d0: 0xe440d4a4  swc1        $f0, -0x2B5C($v0)
    ctx->pc = 0x1af8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956196), bits); }
label_1af8d4:
    // 0x1af8d4: 0xe467d428  swc1        $f7, -0x2BD8($v1)
    ctx->pc = 0x1af8d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956072), bits); }
label_1af8d8:
    // 0x1af8d8: 0xe506d450  swc1        $f6, -0x2BB0($t0)
    ctx->pc = 0x1af8d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956112), bits); }
label_1af8dc:
    // 0x1af8dc: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1af8e0:
    if (ctx->pc == 0x1AF8E0u) {
        ctx->pc = 0x1AF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8DCu;
        // 0x1af8e0: 0xe482d4a8  swc1        $f2, -0x2B58($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8E4u;
        goto label_1af8e4;
    }
    ctx->pc = 0x1AF8DCu;
    {
        const bool branch_taken_0x1af8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8DCu;
        // 0x1af8e0: 0xe482d4a8  swc1        $f2, -0x2B58($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8dc) {
            ctx->pc = 0x1AFC8Cu;
            goto label_1afc8c;
        }
    }
    ctx->pc = 0x1AF8E4u;
label_1af8e4:
    // 0x1af8e4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1af8e8:
    if (ctx->pc == 0x1AF8E8u) {
        ctx->pc = 0x1AF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E4u;
        // 0x1af8e8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF8ECu;
        goto label_1af8ec;
    }
    ctx->pc = 0x1AF8E4u;
    {
        const bool branch_taken_0x1af8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E4u;
        // 0x1af8e8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8e4) {
            ctx->pc = 0x1AF9A4u;
            goto label_1af9a4;
        }
    }
    ctx->pc = 0x1AF8ECu;
label_1af8ec:
    // 0x1af8ec: 0x3c013da9  lui         $at, 0x3DA9
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15785 << 16));
label_1af8f0:
    // 0x1af8f0: 0x3421fbe7  ori         $at, $at, 0xFBE7
    ctx->pc = 0x1af8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64487);
label_1af8f4:
    // 0x1af8f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af8f8:
    // 0x1af8f8: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x1af8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_1af8fc:
    // 0x1af8fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af900:
    // 0x1af900: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af904:
    // 0x1af904: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1af904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1af908:
    // 0x1af908: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1af908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1af90c:
    // 0x1af90c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1af90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1af910:
    // 0x1af910: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1af914:
    // 0x1af914: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
label_1af918:
    // 0x1af918: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1af918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1af91c:
    // 0x1af91c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1af91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1af920:
    // 0x1af920: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1af920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1af924:
    // 0x1af924: 0x3c01bf2b  lui         $at, 0xBF2B
    ctx->pc = 0x1af924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48939 << 16));
label_1af928:
    // 0x1af928: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1af928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1af92c:
    // 0x1af92c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1af92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1af930:
    // 0x1af930: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1af930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1af934:
    // 0x1af934: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1af934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_1af938:
    // 0x1af938: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1af938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1af93c:
    // 0x1af93c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1af93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1af940:
    // 0x1af940: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1af940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1af944:
    // 0x1af944: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1af944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1af948:
    // 0x1af948: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1af948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1af94c:
    // 0x1af94c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1af94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1af950:
    // 0x1af950: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1af950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1af954:
    // 0x1af954: 0x3c013dd7  lui         $at, 0x3DD7
    ctx->pc = 0x1af954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15831 << 16));
label_1af958:
    // 0x1af958: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1af958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1af95c:
    // 0x1af95c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1af95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1af960:
    // 0x1af960: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af964:
    // 0x1af964: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1af964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_1af968:
    // 0x1af968: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1af968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1af96c:
    // 0x1af96c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1af96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af970:
    // 0x1af970: 0xe461d490  swc1        $f1, -0x2B70($v1)
    ctx->pc = 0x1af970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956176), bits); }
label_1af974:
    // 0x1af974: 0xe440d484  swc1        $f0, -0x2B7C($v0)
    ctx->pc = 0x1af974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956164), bits); }
label_1af978:
    // 0x1af978: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1af978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1af97c:
    // 0x1af97c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af980:
    // 0x1af980: 0xe525d434  swc1        $f5, -0x2BCC($t1)
    ctx->pc = 0x1af980u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956084), bits); }
label_1af984:
    // 0x1af984: 0xe507d438  swc1        $f7, -0x2BC8($t0)
    ctx->pc = 0x1af984u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956088), bits); }
label_1af988:
    // 0x1af988: 0xe4e6d468  swc1        $f6, -0x2B98($a3)
    ctx->pc = 0x1af988u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956136), bits); }
label_1af98c:
    // 0x1af98c: 0xe4c4d450  swc1        $f4, -0x2BB0($a2)
    ctx->pc = 0x1af98cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956112), bits); }
label_1af990:
    // 0x1af990: 0xe4a3d48c  swc1        $f3, -0x2B74($a1)
    ctx->pc = 0x1af990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956172), bits); }
label_1af994:
    // 0x1af994: 0xe482d498  swc1        $f2, -0x2B68($a0)
    ctx->pc = 0x1af994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956184), bits); }
label_1af998:
    // 0x1af998: 0xe448d428  swc1        $f8, -0x2BD8($v0)
    ctx->pc = 0x1af998u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956072), bits); }
label_1af99c:
    // 0x1af99c: 0x100000bb  b           . + 4 + (0xBB << 2)
label_1af9a0:
    if (ctx->pc == 0x1AF9A0u) {
        ctx->pc = 0x1AF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF99Cu;
        // 0x1af9a0: 0xe467d42c  swc1        $f7, -0x2BD4($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF9A4u;
        goto label_1af9a4;
    }
    ctx->pc = 0x1AF99Cu;
    {
        const bool branch_taken_0x1af99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF99Cu;
        // 0x1af9a0: 0xe467d42c  swc1        $f7, -0x2BD4($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af99c) {
            ctx->pc = 0x1AFC8Cu;
            goto label_1afc8c;
        }
    }
    ctx->pc = 0x1AF9A4u;
label_1af9a4:
    // 0x1af9a4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1af9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1af9a8:
    // 0x1af9a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1af9ac:
    // 0x1af9ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1af9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af9b0:
    // 0x1af9b0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1af9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1af9b4:
    // 0x1af9b4: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1af9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1af9b8:
    // 0x1af9b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af9b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1af9bc:
    // 0x1af9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af9c0:
    // 0x1af9c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1af9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1af9c4:
    // 0x1af9c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af9c8:
    // 0x1af9c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1af9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1af9cc:
    // 0x1af9cc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1af9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1af9d0:
    // 0x1af9d0: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_1af9d4:
    // 0x1af9d4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1af9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1af9d8:
    // 0x1af9d8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1af9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1af9dc:
    // 0x1af9dc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1af9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1af9e0:
    // 0x1af9e0: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_1af9e4:
    // 0x1af9e4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1af9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1af9e8:
    // 0x1af9e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1af9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1af9ec:
    // 0x1af9ec: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1af9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1af9f0:
    // 0x1af9f0: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1af9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1af9f4:
    // 0x1af9f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af9f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1af9f8:
    // 0x1af9f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1af9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1af9fc:
    // 0x1af9fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1af9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1afa00:
    // 0x1afa00: 0x3c013dd7  lui         $at, 0x3DD7
    ctx->pc = 0x1afa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15831 << 16));
label_1afa04:
    // 0x1afa04: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1afa04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1afa08:
    // 0x1afa08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1afa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1afa0c:
    // 0x1afa0c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1afa0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1afa10:
    // 0x1afa10: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1afa10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1afa14:
    // 0x1afa14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1afa14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afa18:
    // 0x1afa18: 0xe482d498  swc1        $f2, -0x2B68($a0)
    ctx->pc = 0x1afa18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956184), bits); }
label_1afa1c:
    // 0x1afa1c: 0xe440d484  swc1        $f0, -0x2B7C($v0)
    ctx->pc = 0x1afa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956164), bits); }
label_1afa20:
    // 0x1afa20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1afa20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1afa24:
    // 0x1afa24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1afa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1afa28:
    // 0x1afa28: 0xe504d434  swc1        $f4, -0x2BCC($t0)
    ctx->pc = 0x1afa28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956084), bits); }
label_1afa2c:
    // 0x1afa2c: 0xe4e6d438  swc1        $f6, -0x2BC8($a3)
    ctx->pc = 0x1afa2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956088), bits); }
label_1afa30:
    // 0x1afa30: 0xe4c5d4b4  swc1        $f5, -0x2B4C($a2)
    ctx->pc = 0x1afa30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956212), bits); }
label_1afa34:
    // 0x1afa34: 0xe4a3d48c  swc1        $f3, -0x2B74($a1)
    ctx->pc = 0x1afa34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956172), bits); }
label_1afa38:
    // 0x1afa38: 0xe461d490  swc1        $f1, -0x2B70($v1)
    ctx->pc = 0x1afa38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956176), bits); }
label_1afa3c:
    // 0x1afa3c: 0xe487d428  swc1        $f7, -0x2BD8($a0)
    ctx->pc = 0x1afa3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956072), bits); }
label_1afa40:
    // 0x1afa40: 0x10000092  b           . + 4 + (0x92 << 2)
label_1afa44:
    if (ctx->pc == 0x1AFA44u) {
        ctx->pc = 0x1AFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA40u;
        // 0x1afa44: 0xe446d42c  swc1        $f6, -0x2BD4($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA48u;
        goto label_1afa48;
    }
    ctx->pc = 0x1AFA40u;
    {
        const bool branch_taken_0x1afa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA40u;
        // 0x1afa44: 0xe446d42c  swc1        $f6, -0x2BD4($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa40) {
            ctx->pc = 0x1AFC8Cu;
            goto label_1afc8c;
        }
    }
    ctx->pc = 0x1AFA48u;
label_1afa48:
    // 0x1afa48: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1afa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1afa4c:
    // 0x1afa4c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1afa50:
    if (ctx->pc == 0x1AFA50u) {
        ctx->pc = 0x1AFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA4Cu;
        // 0x1afa50: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA54u;
        goto label_1afa54;
    }
    ctx->pc = 0x1AFA4Cu;
    {
        const bool branch_taken_0x1afa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA4Cu;
        // 0x1afa50: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa4c) {
            ctx->pc = 0x1AFB54u;
            goto label_1afb54;
        }
    }
    ctx->pc = 0x1AFA54u;
label_1afa54:
    // 0x1afa54: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1afa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_1afa58:
    // 0x1afa58: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1afa58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1afa5c:
    // 0x1afa5c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1afa5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1afa60:
    // 0x1afa60: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1afa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1afa64:
    // 0x1afa64: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_1afa68:
    // 0x1afa68: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1afa68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1afa6c:
    // 0x1afa6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1afa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afa70:
    // 0x1afa70: 0x3c01bea8  lui         $at, 0xBEA8
    ctx->pc = 0x1afa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48808 << 16));
label_1afa74:
    // 0x1afa74: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1afa74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1afa78:
    // 0x1afa78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1afa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afa7c:
    // 0x1afa7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1afa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1afa80:
    // 0x1afa80: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1afa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1afa84:
    // 0x1afa84: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1afa84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1afa88:
    // 0x1afa88: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1afa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1afa8c:
    // 0x1afa8c: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1afa8cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1afa90:
    // 0x1afa90: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1afa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1afa94:
    // 0x1afa94: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1afa94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1afa98:
    // 0x1afa98: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1afa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1afa9c:
    // 0x1afa9c: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1afa9cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1afaa0:
    // 0x1afaa0: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_1afaa4:
    // 0x1afaa4: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1afaa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1afaa8:
    // 0x1afaa8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1afaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1afaac:
    // 0x1afaac: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1afaacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1afab0:
    // 0x1afab0: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1afab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_1afab4:
    // 0x1afab4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1afab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1afab8:
    // 0x1afab8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1afab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1afabc:
    // 0x1afabc: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1afabcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1afac0:
    // 0x1afac0: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1afac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1afac4:
    // 0x1afac4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1afac8:
    // 0x1afac8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1afac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1afacc:
    // 0x1afacc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1afaccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1afad0:
    // 0x1afad0: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1afad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_1afad4:
    // 0x1afad4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1afad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1afad8:
    // 0x1afad8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1afad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1afadc:
    // 0x1afadc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1afadcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1afae0:
    // 0x1afae0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1afae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1afae4:
    // 0x1afae4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1afae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1afae8:
    // 0x1afae8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1afae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1afaec:
    // 0x1afaec: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1afaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1afaf0:
    // 0x1afaf0: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1afaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_1afaf4:
    // 0x1afaf4: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1afaf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1afaf8:
    // 0x1afaf8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1afaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1afafc:
    // 0x1afafc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1afafcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1afb00:
    // 0x1afb00: 0x3c013f8b  lui         $at, 0x3F8B
    ctx->pc = 0x1afb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16267 << 16));
label_1afb04:
    // 0x1afb04: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1afb04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1afb08:
    // 0x1afb08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1afb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1afb0c:
    // 0x1afb0c: 0xe481d46c  swc1        $f1, -0x2B94($a0)
    ctx->pc = 0x1afb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956140), bits); }
label_1afb10:
    // 0x1afb10: 0xe460d484  swc1        $f0, -0x2B7C($v1)
    ctx->pc = 0x1afb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956164), bits); }
label_1afb14:
    // 0x1afb14: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1afb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1afb18:
    // 0x1afb18: 0xe449d490  swc1        $f9, -0x2B70($v0)
    ctx->pc = 0x1afb18u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956176), bits); }
label_1afb1c:
    // 0x1afb1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1afb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1afb20:
    // 0x1afb20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1afb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1afb24:
    // 0x1afb24: 0xe586d434  swc1        $f6, -0x2BCC($t4)
    ctx->pc = 0x1afb24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956084), bits); }
label_1afb28:
    // 0x1afb28: 0xe56ad438  swc1        $f10, -0x2BC8($t3)
    ctx->pc = 0x1afb28u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956088), bits); }
label_1afb2c:
    // 0x1afb2c: 0xe547d450  swc1        $f7, -0x2BB0($t2)
    ctx->pc = 0x1afb2cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294956112), bits); }
label_1afb30:
    // 0x1afb30: 0xe525d454  swc1        $f5, -0x2BAC($t1)
    ctx->pc = 0x1afb30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956116), bits); }
label_1afb34:
    // 0x1afb34: 0xe4e4d4a0  swc1        $f4, -0x2B60($a3)
    ctx->pc = 0x1afb34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956192), bits); }
label_1afb38:
    // 0x1afb38: 0xe4c3d4a4  swc1        $f3, -0x2B5C($a2)
    ctx->pc = 0x1afb38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956196), bits); }
label_1afb3c:
    // 0x1afb3c: 0xe4a2d468  swc1        $f2, -0x2B98($a1)
    ctx->pc = 0x1afb3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956136), bits); }
label_1afb40:
    // 0x1afb40: 0xe46bd428  swc1        $f11, -0x2BD8($v1)
    ctx->pc = 0x1afb40u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956072), bits); }
label_1afb44:
    // 0x1afb44: 0xe488d4a8  swc1        $f8, -0x2B58($a0)
    ctx->pc = 0x1afb44u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956200), bits); }
label_1afb48:
    // 0x1afb48: 0xe509d498  swc1        $f9, -0x2B68($t0)
    ctx->pc = 0x1afb48u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956184), bits); }
label_1afb4c:
    // 0x1afb4c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1afb50:
    if (ctx->pc == 0x1AFB50u) {
        ctx->pc = 0x1AFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB4Cu;
        // 0x1afb50: 0xe44ad42c  swc1        $f10, -0x2BD4($v0) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB54u;
        goto label_1afb54;
    }
    ctx->pc = 0x1AFB4Cu;
    {
        const bool branch_taken_0x1afb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB4Cu;
        // 0x1afb50: 0xe44ad42c  swc1        $f10, -0x2BD4($v0) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb4c) {
            ctx->pc = 0x1AFC8Cu;
            goto label_1afc8c;
        }
    }
    ctx->pc = 0x1AFB54u;
label_1afb54:
    // 0x1afb54: 0x3c01bea8  lui         $at, 0xBEA8
    ctx->pc = 0x1afb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48808 << 16));
label_1afb58:
    // 0x1afb58: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1afb58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1afb5c:
    // 0x1afb5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1afb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afb60:
    // 0x1afb60: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1afb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_1afb64:
    // 0x1afb64: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1afb64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1afb68:
    // 0x1afb68: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1afb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1afb6c:
    // 0x1afb6c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1afb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1afb70:
    // 0x1afb70: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x1afb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
label_1afb74:
    // 0x1afb74: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1afb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1afb78:
    // 0x1afb78: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1afb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1afb7c:
    // 0x1afb7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1afb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1afb80:
    // 0x1afb80: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1afb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1afb84:
    // 0x1afb84: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afb84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1afb88:
    // 0x1afb88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1afb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afb8c:
    // 0x1afb8c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1afb8cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1afb90:
    // 0x1afb90: 0xe460d484  swc1        $f0, -0x2B7C($v1)
    ctx->pc = 0x1afb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956164), bits); }
label_1afb94:
    // 0x1afb94: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1afb98:
    // 0x1afb98: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1afb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1afb9c:
    // 0x1afb9c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1afb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1afba0:
    // 0x1afba0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1afba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1afba4:
    // 0x1afba4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1afba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afba8:
    // 0x1afba8: 0x3c01bef0  lui         $at, 0xBEF0
    ctx->pc = 0x1afba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48880 << 16));
label_1afbac:
    // 0x1afbac: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1afbacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1afbb0:
    // 0x1afbb0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1afbb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1afbb4:
    // 0x1afbb4: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1afbb4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1afbb8:
    // 0x1afbb8: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1afbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_1afbbc:
    // 0x1afbbc: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1afbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1afbc0:
    // 0x1afbc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1afbc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1afbc4:
    // 0x1afbc4: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1afbc4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1afbc8:
    // 0x1afbc8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1afbcc:
    // 0x1afbcc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1afbccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1afbd0:
    // 0x1afbd0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1afbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1afbd4:
    // 0x1afbd4: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1afbd4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1afbd8:
    // 0x1afbd8: 0x3c013d6d  lui         $at, 0x3D6D
    ctx->pc = 0x1afbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15725 << 16));
label_1afbdc:
    // 0x1afbdc: 0x34219168  ori         $at, $at, 0x9168
    ctx->pc = 0x1afbdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37224);
label_1afbe0:
    // 0x1afbe0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1afbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1afbe4:
    // 0x1afbe4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1afbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1afbe8:
    // 0x1afbe8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1afbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1afbec:
    // 0x1afbec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afbecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1afbf0:
    // 0x1afbf0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1afbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1afbf4:
    // 0x1afbf4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1afbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1afbf8:
    // 0x1afbf8: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1afbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1afbfc:
    // 0x1afbfc: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1afbfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1afc00:
    // 0x1afc00: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1afc00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1afc04:
    // 0x1afc04: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1afc04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1afc08:
    // 0x1afc08: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1afc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1afc0c:
    // 0x1afc0c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1afc0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1afc10:
    // 0x1afc10: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1afc10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1afc14:
    // 0x1afc14: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1afc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1afc18:
    // 0x1afc18: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1afc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
label_1afc1c:
    // 0x1afc1c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1afc1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1afc20:
    // 0x1afc20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1afc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1afc24:
    // 0x1afc24: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1afc24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1afc28:
    // 0x1afc28: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1afc2c:
    // 0x1afc2c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afc2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1afc30:
    // 0x1afc30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1afc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1afc34:
    // 0x1afc34: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1afc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
label_1afc38:
    // 0x1afc38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1afc3c:
    // 0x1afc3c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1afc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1afc40:
    // 0x1afc40: 0xe481d494  swc1        $f1, -0x2B6C($a0)
    ctx->pc = 0x1afc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956180), bits); }
label_1afc44:
    // 0x1afc44: 0xe44bd490  swc1        $f11, -0x2B70($v0)
    ctx->pc = 0x1afc44u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956176), bits); }
label_1afc48:
    // 0x1afc48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1afc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1afc4c:
    // 0x1afc4c: 0xe46ed428  swc1        $f14, -0x2BD8($v1)
    ctx->pc = 0x1afc4cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956072), bits); }
label_1afc50:
    // 0x1afc50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1afc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1afc54:
    // 0x1afc54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1afc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1afc58:
    // 0x1afc58: 0xe5cad434  swc1        $f10, -0x2BCC($t6)
    ctx->pc = 0x1afc58u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294956084), bits); }
label_1afc5c:
    // 0x1afc5c: 0xe5acd438  swc1        $f12, -0x2BC8($t5)
    ctx->pc = 0x1afc5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294956088), bits); }
label_1afc60:
    // 0x1afc60: 0xe589d450  swc1        $f9, -0x2BB0($t4)
    ctx->pc = 0x1afc60u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956112), bits); }
label_1afc64:
    // 0x1afc64: 0xe568d454  swc1        $f8, -0x2BAC($t3)
    ctx->pc = 0x1afc64u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956116), bits); }
label_1afc68:
    // 0x1afc68: 0xe547d4a0  swc1        $f7, -0x2B60($t2)
    ctx->pc = 0x1afc68u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294956192), bits); }
label_1afc6c:
    // 0x1afc6c: 0xe506d4a4  swc1        $f6, -0x2B5C($t0)
    ctx->pc = 0x1afc6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956196), bits); }
label_1afc70:
    // 0x1afc70: 0xe4e4d468  swc1        $f4, -0x2B98($a3)
    ctx->pc = 0x1afc70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956136), bits); }
label_1afc74:
    // 0x1afc74: 0xe4c3d46c  swc1        $f3, -0x2B94($a2)
    ctx->pc = 0x1afc74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956140), bits); }
label_1afc78:
    // 0x1afc78: 0xe4a2d500  swc1        $f2, -0x2B00($a1)
    ctx->pc = 0x1afc78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956288), bits); }
label_1afc7c:
    // 0x1afc7c: 0xe48dd4a8  swc1        $f13, -0x2B58($a0)
    ctx->pc = 0x1afc7cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956200), bits); }
label_1afc80:
    // 0x1afc80: 0xe445d504  swc1        $f5, -0x2AFC($v0)
    ctx->pc = 0x1afc80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956292), bits); }
label_1afc84:
    // 0x1afc84: 0xe52bd498  swc1        $f11, -0x2B68($t1)
    ctx->pc = 0x1afc84u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956184), bits); }
label_1afc88:
    // 0x1afc88: 0xe46cd42c  swc1        $f12, -0x2BD4($v1)
    ctx->pc = 0x1afc88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956076), bits); }
label_1afc8c:
    // 0x1afc8c: 0xc06c590  jal         func_1B1640
label_1afc90:
    if (ctx->pc == 0x1AFC90u) {
        ctx->pc = 0x1AFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC8Cu;
        // 0x1afc90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC94u;
        goto label_1afc94;
    }
    ctx->pc = 0x1AFC8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC94u);
    ctx->pc = 0x1AFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC8Cu;
    // 0x1afc90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1AFC8Cu, 0x1AFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC94u;
label_1afc94:
    // 0x1afc94: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1afc98:
    if (ctx->pc == 0x1AFC98u) {
        ctx->pc = 0x1AFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC94u;
        // 0x1afc98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC9Cu;
        goto label_1afc9c;
    }
    ctx->pc = 0x1AFC94u;
    {
        const bool branch_taken_0x1afc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC94u;
        // 0x1afc98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc94) {
            ctx->pc = 0x1AFCC4u;
            goto label_1afcc4;
        }
    }
    ctx->pc = 0x1AFC9Cu;
label_1afc9c:
    // 0x1afc9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1afc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1afca0:
    // 0x1afca0: 0x8c62b194  lw          $v0, -0x4E6C($v1)
    ctx->pc = 0x1afca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947220)));
label_1afca4:
    // 0x1afca4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1afca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1afca8:
    // 0x1afca8: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
label_1afcac:
    if (ctx->pc == 0x1AFCACu) {
        ctx->pc = 0x1AFCB0u;
        goto label_1afcb0;
    }
    ctx->pc = 0x1AFCA8u;
    {
        const bool branch_taken_0x1afca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afca8) {
            ctx->pc = 0x1AFEE8u;
            goto label_1afee8;
        }
    }
    ctx->pc = 0x1AFCB0u;
label_1afcb0:
    // 0x1afcb0: 0xc047ab8  jal         func_11EAE0
label_1afcb4:
    if (ctx->pc == 0x1AFCB4u) {
        ctx->pc = 0x1AFCB8u;
        goto label_1afcb8;
    }
    ctx->pc = 0x1AFCB0u;
    SET_GPR_U32(ctx, 31, 0x1AFCB8u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1AFCB0u, 0x1AFCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCB8u;
label_1afcb8:
    // 0x1afcb8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1afcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1afcbc:
    // 0x1afcbc: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
label_1afcc0:
    if (ctx->pc == 0x1AFCC0u) {
        ctx->pc = 0x1AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCBCu;
        // 0x1afcc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCC4u;
        goto label_1afcc4;
    }
    ctx->pc = 0x1AFCBCu;
    {
        const bool branch_taken_0x1afcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCBCu;
        // 0x1afcc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcbc) {
            ctx->pc = 0x1AFEE8u;
            goto label_1afee8;
        }
    }
    ctx->pc = 0x1AFCC4u;
label_1afcc4:
    // 0x1afcc4: 0x8c43b1a4  lw          $v1, -0x4E5C($v0)
    ctx->pc = 0x1afcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947236)));
label_1afcc8:
    // 0x1afcc8: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_1afccc:
    if (ctx->pc == 0x1AFCCCu) {
        ctx->pc = 0x1AFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCC8u;
        // 0x1afccc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCD0u;
        goto label_1afcd0;
    }
    ctx->pc = 0x1AFCC8u;
    {
        const bool branch_taken_0x1afcc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCC8u;
        // 0x1afccc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcc8) {
            ctx->pc = 0x1AFDFCu;
            goto label_1afdfc;
        }
    }
    ctx->pc = 0x1AFCD0u;
label_1afcd0:
    // 0x1afcd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1afcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1afcd4:
    // 0x1afcd4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1afcd8:
    // 0x1afcd8: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1afcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1afcdc:
    // 0x1afcdc: 0xc474d480  lwc1        $f20, -0x2B80($v1)
    ctx->pc = 0x1afcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1afce0:
    // 0x1afce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1afce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1afce4:
    // 0x1afce4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1afce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1afce8:
    // 0x1afce8: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1afce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1afcec:
    // 0x1afcec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1afcecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afcf0:
    // 0x1afcf0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1afcf0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1afcf4:
    // 0x1afcf4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1afcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1afcf8:
    // 0x1afcf8: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1afcfc:
    // 0x1afcfc: 0x0  nop
    ctx->pc = 0x1afcfcu;
    // NOP
label_1afd00:
    // 0x1afd00: 0xc660d48c  lwc1        $f0, -0x2B74($s3)
    ctx->pc = 0x1afd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1afd04:
    // 0x1afd04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1afd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1afd08:
    // 0x1afd08: 0xc621d47c  lwc1        $f1, -0x2B84($s1)
    ctx->pc = 0x1afd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afd0c:
    // 0x1afd0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1afd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afd10:
    // 0x1afd10: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1afd10u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1afd14:
    // 0x1afd14: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1afd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1afd18:
    // 0x1afd18: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1afd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1afd1c:
    // 0x1afd1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1afd1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1afd20:
    // 0x1afd20: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1afd20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1afd24:
    // 0x1afd24: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1afd24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1afd28:
    // 0x1afd28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd2c:
    // 0x1afd2c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1afd2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1afd30:
    // 0x1afd30: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1afd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1afd34:
    // 0x1afd34: 0x60f809  jalr        $v1
label_1afd38:
    if (ctx->pc == 0x1AFD38u) {
        ctx->pc = 0x1AFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD34u;
        // 0x1afd38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD3Cu;
        goto label_1afd3c;
    }
    ctx->pc = 0x1AFD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFD3Cu);
        ctx->pc = 0x1AFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD34u;
        // 0x1afd38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD34u, 0x1AFD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFD3Cu;
label_1afd3c:
    // 0x1afd3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1afd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1afd40:
    // 0x1afd40: 0xc6edd498  lwc1        $f13, -0x2B68($s7)
    ctx->pc = 0x1afd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1afd44:
    // 0x1afd44: 0xc44cd494  lwc1        $f12, -0x2B6C($v0)
    ctx->pc = 0x1afd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1afd48:
    // 0x1afd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afd4c:
    // 0x1afd4c: 0xc068848  jal         func_1A2120
label_1afd50:
    if (ctx->pc == 0x1AFD50u) {
        ctx->pc = 0x1AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD4Cu;
        // 0x1afd50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD54u;
        goto label_1afd54;
    }
    ctx->pc = 0x1AFD4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD54u);
    ctx->pc = 0x1AFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD4Cu;
    // 0x1afd50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1AFD4Cu, 0x1AFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD54u;
label_1afd54:
    // 0x1afd54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd58:
    // 0x1afd58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afd5c:
    // 0x1afd5c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1afd60:
    // 0x1afd60: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1afd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1afd64:
    // 0x1afd64: 0x60f809  jalr        $v1
label_1afd68:
    if (ctx->pc == 0x1AFD68u) {
        ctx->pc = 0x1AFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD64u;
        // 0x1afd68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD6Cu;
        goto label_1afd6c;
    }
    ctx->pc = 0x1AFD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFD6Cu);
        ctx->pc = 0x1AFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD64u;
        // 0x1afd68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD64u, 0x1AFD6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFD6Cu;
label_1afd6c:
    // 0x1afd6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd70:
    // 0x1afd70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1afd70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afd74:
    // 0x1afd74: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1afd74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1afd78:
    // 0x1afd78: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1afd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1afd7c:
    // 0x1afd7c: 0x60f809  jalr        $v1
label_1afd80:
    if (ctx->pc == 0x1AFD80u) {
        ctx->pc = 0x1AFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD7Cu;
        // 0x1afd80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD84u;
        goto label_1afd84;
    }
    ctx->pc = 0x1AFD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFD84u);
        ctx->pc = 0x1AFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD7Cu;
        // 0x1afd80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD7Cu, 0x1AFD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFD84u;
label_1afd84:
    // 0x1afd84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd88:
    // 0x1afd88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afd8c:
    // 0x1afd8c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1afd8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1afd90:
    // 0x1afd90: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1afd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1afd94:
    // 0x1afd94: 0x60f809  jalr        $v1
label_1afd98:
    if (ctx->pc == 0x1AFD98u) {
        ctx->pc = 0x1AFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD94u;
        // 0x1afd98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD9Cu;
        goto label_1afd9c;
    }
    ctx->pc = 0x1AFD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFD9Cu);
        ctx->pc = 0x1AFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD94u;
        // 0x1afd98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD94u, 0x1AFD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFD9Cu;
label_1afd9c:
    // 0x1afd9c: 0x2e42000f  sltiu       $v0, $s2, 0xF
    ctx->pc = 0x1afd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1afda0:
    // 0x1afda0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_1afda4:
    if (ctx->pc == 0x1AFDA4u) {
        ctx->pc = 0x1AFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA0u;
        // 0x1afda4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDA8u;
        goto label_1afda8;
    }
    ctx->pc = 0x1AFDA0u;
    {
        const bool branch_taken_0x1afda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA0u;
        // 0x1afda4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda0) {
            ctx->pc = 0x1AFD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd00;
        }
    }
    ctx->pc = 0x1AFDA8u;
label_1afda8:
    // 0x1afda8: 0x2e420013  sltiu       $v0, $s2, 0x13
    ctx->pc = 0x1afda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1afdac:
    // 0x1afdac: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_1afdb0:
    if (ctx->pc == 0x1AFDB0u) {
        ctx->pc = 0x1AFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDACu;
        // 0x1afdb0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDB4u;
        goto label_1afdb4;
    }
    ctx->pc = 0x1AFDACu;
    {
        const bool branch_taken_0x1afdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDACu;
        // 0x1afdb0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdac) {
            ctx->pc = 0x1AFED8u;
            goto label_1afed8;
        }
    }
    ctx->pc = 0x1AFDB4u;
label_1afdb4:
    // 0x1afdb4: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x1afdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_1afdb8:
    // 0x1afdb8: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1afdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1afdbc:
    // 0x1afdbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1afdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1afdc0:
    // 0x1afdc0: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x1afdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1afdc4:
    // 0x1afdc4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1afdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afdc8:
    // 0x1afdc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1afdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1afdcc:
    // 0x1afdcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afdd0:
    // 0x1afdd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1afdd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1afdd4:
    // 0x1afdd4: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1afdd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1afdd8:
    // 0x1afdd8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1afddc:
    // 0x1afddc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1afddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1afde0:
    // 0x1afde0: 0x40f809  jalr        $v0
label_1afde4:
    if (ctx->pc == 0x1AFDE4u) {
        ctx->pc = 0x1AFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDE0u;
        // 0x1afde4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDE8u;
        goto label_1afde8;
    }
    ctx->pc = 0x1AFDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AFDE8u);
        ctx->pc = 0x1AFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDE0u;
        // 0x1afde4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFDE0u, 0x1AFDE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFDE8u;
label_1afde8:
    // 0x1afde8: 0x2e420013  sltiu       $v0, $s2, 0x13
    ctx->pc = 0x1afde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1afdec:
    // 0x1afdec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1afdf0:
    if (ctx->pc == 0x1AFDF0u) {
        ctx->pc = 0x1AFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDECu;
        // 0x1afdf0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDF4u;
        goto label_1afdf4;
    }
    ctx->pc = 0x1AFDECu;
    {
        const bool branch_taken_0x1afdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDECu;
        // 0x1afdf0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdec) {
            ctx->pc = 0x1AFDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afdc8;
        }
    }
    ctx->pc = 0x1AFDF4u;
label_1afdf4:
    // 0x1afdf4: 0x10000039  b           . + 4 + (0x39 << 2)
label_1afdf8:
    if (ctx->pc == 0x1AFDF8u) {
        ctx->pc = 0x1AFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDF4u;
        // 0x1afdf8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFDFCu;
        goto label_1afdfc;
    }
    ctx->pc = 0x1AFDF4u;
    {
        const bool branch_taken_0x1afdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDF4u;
        // 0x1afdf8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdf4) {
            ctx->pc = 0x1AFEDCu;
            goto label_1afedc;
        }
    }
    ctx->pc = 0x1AFDFCu;
label_1afdfc:
    // 0x1afdfc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1afdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1afe00:
    // 0x1afe00: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1afe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1afe04:
    // 0x1afe04: 0xc474d484  lwc1        $f20, -0x2B7C($v1)
    ctx->pc = 0x1afe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1afe08:
    // 0x1afe08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1afe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1afe0c:
    // 0x1afe0c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1afe0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1afe10:
    // 0x1afe10: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1afe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1afe14:
    // 0x1afe14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1afe14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afe18:
    // 0x1afe18: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1afe18u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1afe1c:
    // 0x1afe1c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1afe20:
    // 0x1afe20: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1afe20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1afe24:
    // 0x1afe24: 0x0  nop
    ctx->pc = 0x1afe24u;
    // NOP
label_1afe28:
    // 0x1afe28: 0xc660d490  lwc1        $f0, -0x2B70($s3)
    ctx->pc = 0x1afe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1afe2c:
    // 0x1afe2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1afe2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1afe30:
    // 0x1afe30: 0xc641d488  lwc1        $f1, -0x2B78($s2)
    ctx->pc = 0x1afe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afe34:
    // 0x1afe34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1afe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afe38:
    // 0x1afe38: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1afe38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1afe3c:
    // 0x1afe3c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1afe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1afe40:
    // 0x1afe40: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1afe40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1afe44:
    // 0x1afe44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1afe44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1afe48:
    // 0x1afe48: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1afe48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1afe4c:
    // 0x1afe4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1afe4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1afe50:
    // 0x1afe50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afe54:
    // 0x1afe54: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1afe54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1afe58:
    // 0x1afe58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1afe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1afe5c:
    // 0x1afe5c: 0x60f809  jalr        $v1
label_1afe60:
    if (ctx->pc == 0x1AFE60u) {
        ctx->pc = 0x1AFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE5Cu;
        // 0x1afe60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE64u;
        goto label_1afe64;
    }
    ctx->pc = 0x1AFE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFE64u);
        ctx->pc = 0x1AFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE5Cu;
        // 0x1afe60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFE5Cu, 0x1AFE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFE64u;
label_1afe64:
    // 0x1afe64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1afe68:
    // 0x1afe68: 0xc6edd498  lwc1        $f13, -0x2B68($s7)
    ctx->pc = 0x1afe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1afe6c:
    // 0x1afe6c: 0xc46cd494  lwc1        $f12, -0x2B6C($v1)
    ctx->pc = 0x1afe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1afe70:
    // 0x1afe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afe74:
    // 0x1afe74: 0xc068848  jal         func_1A2120
label_1afe78:
    if (ctx->pc == 0x1AFE78u) {
        ctx->pc = 0x1AFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE74u;
        // 0x1afe78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE7Cu;
        goto label_1afe7c;
    }
    ctx->pc = 0x1AFE74u;
    SET_GPR_U32(ctx, 31, 0x1AFE7Cu);
    ctx->pc = 0x1AFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE74u;
    // 0x1afe78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1AFE74u, 0x1AFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE7Cu;
label_1afe7c:
    // 0x1afe7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afe80:
    // 0x1afe80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afe84:
    // 0x1afe84: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1afe88:
    // 0x1afe88: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1afe8c:
    // 0x1afe8c: 0x60f809  jalr        $v1
label_1afe90:
    if (ctx->pc == 0x1AFE90u) {
        ctx->pc = 0x1AFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE8Cu;
        // 0x1afe90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFE94u;
        goto label_1afe94;
    }
    ctx->pc = 0x1AFE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFE94u);
        ctx->pc = 0x1AFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE8Cu;
        // 0x1afe90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFE8Cu, 0x1AFE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFE94u;
label_1afe94:
    // 0x1afe94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afe98:
    // 0x1afe98: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1afe9c:
    // 0x1afe9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1afe9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1afea0:
    // 0x1afea0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1afea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afea4:
    // 0x1afea4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1afea8:
    // 0x1afea8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1afea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1afeac:
    // 0x1afeac: 0x60f809  jalr        $v1
label_1afeb0:
    if (ctx->pc == 0x1AFEB0u) {
        ctx->pc = 0x1AFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEACu;
        // 0x1afeb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFEB4u;
        goto label_1afeb4;
    }
    ctx->pc = 0x1AFEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFEB4u);
        ctx->pc = 0x1AFEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEACu;
        // 0x1afeb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFEACu, 0x1AFEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFEB4u;
label_1afeb4:
    // 0x1afeb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afeb8:
    // 0x1afeb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afebc:
    // 0x1afebc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1afebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1afec0:
    // 0x1afec0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1afec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1afec4:
    // 0x1afec4: 0x60f809  jalr        $v1
label_1afec8:
    if (ctx->pc == 0x1AFEC8u) {
        ctx->pc = 0x1AFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEC4u;
        // 0x1afec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFECCu;
        goto label_1afecc;
    }
    ctx->pc = 0x1AFEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFECCu);
        ctx->pc = 0x1AFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEC4u;
        // 0x1afec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFEC4u, 0x1AFECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFECCu;
label_1afecc:
    // 0x1afecc: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x1afeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1afed0:
    // 0x1afed0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1afed4:
    if (ctx->pc == 0x1AFED4u) {
        ctx->pc = 0x1AFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFED0u;
        // 0x1afed4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFED8u;
        goto label_1afed8;
    }
    ctx->pc = 0x1AFED0u;
    {
        const bool branch_taken_0x1afed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFED0u;
        // 0x1afed4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afed0) {
            ctx->pc = 0x1AFE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afe28;
        }
    }
    ctx->pc = 0x1AFED8u;
label_1afed8:
    // 0x1afed8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1afed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1afedc:
    // 0x1afedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afee0:
    // 0x1afee0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1afee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1afee4:
    // 0x1afee4: 0xac4325d8  sw          $v1, 0x25D8($v0)
    ctx->pc = 0x1afee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9688), GPR_U32(ctx, 3));
label_1afee8:
    // 0x1afee8: 0xc06c590  jal         func_1B1640
label_1afeec:
    if (ctx->pc == 0x1AFEECu) {
        ctx->pc = 0x1AFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEE8u;
        // 0x1afeec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFEF0u;
        goto label_1afef0;
    }
    ctx->pc = 0x1AFEE8u;
    SET_GPR_U32(ctx, 31, 0x1AFEF0u);
    ctx->pc = 0x1AFEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEE8u;
    // 0x1afeec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1AFEE8u, 0x1AFEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEF0u;
label_1afef0:
    // 0x1afef0: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_1afef4:
    if (ctx->pc == 0x1AFEF4u) {
        ctx->pc = 0x1AFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEF0u;
        // 0x1afef4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFEF8u;
        goto label_1afef8;
    }
    ctx->pc = 0x1AFEF0u;
    {
        const bool branch_taken_0x1afef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEF0u;
        // 0x1afef4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afef0) {
            ctx->pc = 0x1B0108u;
            return;
        }
    }
    ctx->pc = 0x1AFEF8u;
label_1afef8:
    // 0x1afef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1afef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afefc:
    // 0x1afefc: 0x8c43b1a4  lw          $v1, -0x4E5C($v0)
    ctx->pc = 0x1afefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947236)));
label_1aff00:
    // 0x1aff00: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_1aff04:
    if (ctx->pc == 0x1AFF04u) {
        ctx->pc = 0x1AFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF00u;
        // 0x1aff04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF08u;
        goto label_1aff08;
    }
    ctx->pc = 0x1AFF00u;
    {
        const bool branch_taken_0x1aff00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF00u;
        // 0x1aff04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff00) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFF08u;
label_1aff08:
    // 0x1aff08: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1aff08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1aff0c:
    // 0x1aff0c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1aff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1aff10:
    // 0x1aff10: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1aff10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1aff14:
    // 0x1aff14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aff14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1aff18:
    // 0x1aff18: 0xc494d428  lwc1        $f20, -0x2BD8($a0)
    ctx->pc = 0x1aff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aff1c:
    // 0x1aff1c: 0x3c01bea8  lui         $at, 0xBEA8
    ctx->pc = 0x1aff1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48808 << 16));
label_1aff20:
    // 0x1aff20: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1aff20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1aff24:
    // 0x1aff24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1aff24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1aff28:
    // 0x1aff28: 0x10000007  b           . + 4 + (0x7 << 2)
label_1aff2c:
    if (ctx->pc == 0x1AFF2Cu) {
        ctx->pc = 0x1AFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF28u;
        // 0x1aff2c: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF30u;
        goto label_1aff30;
    }
    ctx->pc = 0x1AFF28u;
    {
        const bool branch_taken_0x1aff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF28u;
        // 0x1aff2c: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff28) {
            ctx->pc = 0x1AFF48u;
            goto label_1aff48;
        }
    }
    ctx->pc = 0x1AFF30u;
label_1aff30:
    // 0x1aff30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1aff34:
    // 0x1aff34: 0xc455d430  lwc1        $f21, -0x2BD0($v0)
    ctx->pc = 0x1aff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1aff38:
    // 0x1aff38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aff3c:
    // 0x1aff3c: 0xc461d434  lwc1        $f1, -0x2BCC($v1)
    ctx->pc = 0x1aff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aff40:
    // 0x1aff40: 0xc454d428  lwc1        $f20, -0x2BD8($v0)
    ctx->pc = 0x1aff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aff44:
    // 0x1aff44: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x1aff44u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_1aff48:
    // 0x1aff48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1aff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1aff4c:
    // 0x1aff4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aff4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1aff50:
    // 0x1aff50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1aff50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1aff54:
    // 0x1aff54: 0xc440d438  lwc1        $f0, -0x2BC8($v0)
    ctx->pc = 0x1aff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aff58:
    // 0x1aff58: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1aff58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_1aff5c:
    // 0x1aff5c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1aff5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1aff60:
    // 0x1aff60: 0x361077d0  ori         $s0, $s0, 0x77D0
    ctx->pc = 0x1aff60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30672);
label_1aff64:
    // 0x1aff64: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1aff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1aff68:
    // 0x1aff68: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1aff68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1aff6c:
    // 0x1aff6c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1aff6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1aff70:
    // 0x1aff70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aff70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1aff74:
    // 0x1aff74: 0xe7b6000c  swc1        $f22, 0xC($sp)
    ctx->pc = 0x1aff74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1aff78:
    // 0x1aff78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aff7c:
    // 0x1aff7c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1aff7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aff80:
    // 0x1aff80: 0xc06a98c  jal         func_1AA630
label_1aff84:
    if (ctx->pc == 0x1AFF84u) {
        ctx->pc = 0x1AFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF80u;
        // 0x1aff84: 0x7ea22930  sq          $v0, 0x2930($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 10544), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF88u;
        goto label_1aff88;
    }
    ctx->pc = 0x1AFF80u;
    SET_GPR_U32(ctx, 31, 0x1AFF88u);
    ctx->pc = 0x1AFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF80u;
    // 0x1aff84: 0x7ea22930  sq          $v0, 0x2930($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 10544), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA630u, 0x1AFF80u, 0x1AFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF88u;
label_1aff88:
    // 0x1aff88: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1aff88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1aff8c:
    // 0x1aff8c: 0xc071484  jal         func_1C5210
label_1aff90:
    if (ctx->pc == 0x1AFF90u) {
        ctx->pc = 0x1AFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF8Cu;
        // 0x1aff90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF94u;
        goto label_1aff94;
    }
    ctx->pc = 0x1AFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFF94u);
    ctx->pc = 0x1AFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF8Cu;
    // 0x1aff90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5210u, 0x1AFF8Cu, 0x1AFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF94u;
label_1aff94:
    // 0x1aff94: 0xc06aa6c  jal         func_1AA9B0
label_1aff98:
    if (ctx->pc == 0x1AFF98u) {
        ctx->pc = 0x1AFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF94u;
        // 0x1aff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFF9Cu;
        goto label_1aff9c;
    }
    ctx->pc = 0x1AFF94u;
    SET_GPR_U32(ctx, 31, 0x1AFF9Cu);
    ctx->pc = 0x1AFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF94u;
    // 0x1aff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA9B0u, 0x1AFF94u, 0x1AFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF9Cu;
label_1aff9c:
    // 0x1aff9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1aff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1affa0:
    // 0x1affa0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1affa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1affa4:
    // 0x1affa4: 0xc460d42c  lwc1        $f0, -0x2BD4($v1)
    ctx->pc = 0x1affa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1affa8:
    // 0x1affa8: 0x34428280  ori         $v0, $v0, 0x8280
    ctx->pc = 0x1affa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33408);
label_1affac:
    // 0x1affac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1affacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1affb0:
    // 0x1affb0: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x1affb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1affb4:
    // 0x1affb4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1affb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1affb8:
    // 0x1affb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1affb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1affbc:
    // 0x1affbc: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1affbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1affc0:
    // 0x1affc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1affc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1affc4:
    // 0x1affc4: 0xe7b6000c  swc1        $f22, 0xC($sp)
    ctx->pc = 0x1affc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1affc8:
    // 0x1affc8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1affc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1affcc:
    // 0x1affcc: 0xc06a98c  jal         func_1AA630
label_1affd0:
    if (ctx->pc == 0x1AFFD0u) {
        ctx->pc = 0x1AFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFCCu;
        // 0x1affd0: 0x7fc22930  sq          $v0, 0x2930($fp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 30), 10544), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFD4u;
        goto label_1affd4;
    }
    ctx->pc = 0x1AFFCCu;
    SET_GPR_U32(ctx, 31, 0x1AFFD4u);
    ctx->pc = 0x1AFFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFCCu;
    // 0x1affd0: 0x7fc22930  sq          $v0, 0x2930($fp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 30), 10544), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA630u, 0x1AFFCCu, 0x1AFFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFD4u;
label_1affd4:
    // 0x1affd4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1affd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1affd8:
    // 0x1affd8: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1affd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1affdc:
    // 0x1affdc: 0x920325d4  lbu         $v1, 0x25D4($s0)
    ctx->pc = 0x1affdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9684)));
label_1affe0:
    // 0x1affe0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1affe4:
    if (ctx->pc == 0x1AFFE4u) {
        ctx->pc = 0x1AFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE0u;
        // 0x1affe4: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFE8u;
        goto label_1affe8;
    }
    ctx->pc = 0x1AFFE0u;
    {
        const bool branch_taken_0x1affe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE0u;
        // 0x1affe4: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affe0) {
            ctx->pc = 0x1AFFFCu;
            goto label_1afffc;
        }
    }
    ctx->pc = 0x1AFFE8u;
label_1affe8:
    // 0x1affe8: 0xc0710e2  jal         func_1C4388
label_1affec:
    if (ctx->pc == 0x1AFFECu) {
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFFF0u;
        goto label_1afff0;
    }
    ctx->pc = 0x1AFFE8u;
    SET_GPR_U32(ctx, 31, 0x1AFFF0u);
    ctx->pc = 0x1AFFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFE8u;
    // 0x1affec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4388u, 0x1AFFE8u, 0x1AFFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFF0u;
label_1afff0:
    // 0x1afff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afff4:
    // 0x1afff4: 0xa20225d4  sb          $v0, 0x25D4($s0)
    ctx->pc = 0x1afff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9684), (uint8_t)GPR_U32(ctx, 2));
label_1afff8:
    // 0x1afff8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1afff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1afffc:
    // 0x1afffc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1afffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b0000:
    // 0x1b0000: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x1b0000u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_1b0004:
    // 0x1b0004: 0xc071484  jal         func_1C5210
label_1b0008:
    if (ctx->pc == 0x1B0008u) {
        ctx->pc = 0x1B0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0004u;
        // 0x1b0008: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B000Cu;
        goto label_1b000c;
    }
    ctx->pc = 0x1B0004u;
    SET_GPR_U32(ctx, 31, 0x1B000Cu);
    ctx->pc = 0x1B0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0004u;
    // 0x1b0008: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5210u, 0x1B0004u, 0x1B000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B000Cu;
label_1b000c:
    // 0x1b000c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1b000cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1b0010:
    // 0x1b0010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0014:
    // 0x1b0014: 0xc06aa6c  jal         func_1AA9B0
label_1b0018:
    if (ctx->pc == 0x1B0018u) {
        ctx->pc = 0x1B0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0014u;
        // 0x1b0018: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B001Cu;
        goto label_1b001c;
    }
    ctx->pc = 0x1B0014u;
    SET_GPR_U32(ctx, 31, 0x1B001Cu);
    ctx->pc = 0x1B0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0014u;
    // 0x1b0018: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA9B0u, 0x1B0014u, 0x1B001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B001Cu;
label_1b001c:
    // 0x1b001c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b001cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0020:
    // 0x1b0020: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b0020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x1b0024u;
}
