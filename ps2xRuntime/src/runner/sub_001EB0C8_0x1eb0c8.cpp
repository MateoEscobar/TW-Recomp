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

// Function: sub_001EB0C8
// Address: 0x1eb0c8 - 0x1eb818
void sub_001EB0C8_0x1eb0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB0C8_0x1eb0c8");
#endif

    switch (ctx->pc) {
        case 0x1eb0c8u: goto label_1eb0c8;
        case 0x1eb0ccu: goto label_1eb0cc;
        case 0x1eb0d0u: goto label_1eb0d0;
        case 0x1eb0d4u: goto label_1eb0d4;
        case 0x1eb0d8u: goto label_1eb0d8;
        case 0x1eb0dcu: goto label_1eb0dc;
        case 0x1eb0e0u: goto label_1eb0e0;
        case 0x1eb0e4u: goto label_1eb0e4;
        case 0x1eb0e8u: goto label_1eb0e8;
        case 0x1eb0ecu: goto label_1eb0ec;
        case 0x1eb0f0u: goto label_1eb0f0;
        case 0x1eb0f4u: goto label_1eb0f4;
        case 0x1eb0f8u: goto label_1eb0f8;
        case 0x1eb0fcu: goto label_1eb0fc;
        case 0x1eb100u: goto label_1eb100;
        case 0x1eb104u: goto label_1eb104;
        case 0x1eb108u: goto label_1eb108;
        case 0x1eb10cu: goto label_1eb10c;
        case 0x1eb110u: goto label_1eb110;
        case 0x1eb114u: goto label_1eb114;
        case 0x1eb118u: goto label_1eb118;
        case 0x1eb11cu: goto label_1eb11c;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb124u: goto label_1eb124;
        case 0x1eb128u: goto label_1eb128;
        case 0x1eb12cu: goto label_1eb12c;
        case 0x1eb130u: goto label_1eb130;
        case 0x1eb134u: goto label_1eb134;
        case 0x1eb138u: goto label_1eb138;
        case 0x1eb13cu: goto label_1eb13c;
        case 0x1eb140u: goto label_1eb140;
        case 0x1eb144u: goto label_1eb144;
        case 0x1eb148u: goto label_1eb148;
        case 0x1eb14cu: goto label_1eb14c;
        case 0x1eb150u: goto label_1eb150;
        case 0x1eb154u: goto label_1eb154;
        case 0x1eb158u: goto label_1eb158;
        case 0x1eb15cu: goto label_1eb15c;
        case 0x1eb160u: goto label_1eb160;
        case 0x1eb164u: goto label_1eb164;
        case 0x1eb168u: goto label_1eb168;
        case 0x1eb16cu: goto label_1eb16c;
        case 0x1eb170u: goto label_1eb170;
        case 0x1eb174u: goto label_1eb174;
        case 0x1eb178u: goto label_1eb178;
        case 0x1eb17cu: goto label_1eb17c;
        case 0x1eb180u: goto label_1eb180;
        case 0x1eb184u: goto label_1eb184;
        case 0x1eb188u: goto label_1eb188;
        case 0x1eb18cu: goto label_1eb18c;
        case 0x1eb190u: goto label_1eb190;
        case 0x1eb194u: goto label_1eb194;
        case 0x1eb198u: goto label_1eb198;
        case 0x1eb19cu: goto label_1eb19c;
        case 0x1eb1a0u: goto label_1eb1a0;
        case 0x1eb1a4u: goto label_1eb1a4;
        case 0x1eb1a8u: goto label_1eb1a8;
        case 0x1eb1acu: goto label_1eb1ac;
        case 0x1eb1b0u: goto label_1eb1b0;
        case 0x1eb1b4u: goto label_1eb1b4;
        case 0x1eb1b8u: goto label_1eb1b8;
        case 0x1eb1bcu: goto label_1eb1bc;
        case 0x1eb1c0u: goto label_1eb1c0;
        case 0x1eb1c4u: goto label_1eb1c4;
        case 0x1eb1c8u: goto label_1eb1c8;
        case 0x1eb1ccu: goto label_1eb1cc;
        case 0x1eb1d0u: goto label_1eb1d0;
        case 0x1eb1d4u: goto label_1eb1d4;
        case 0x1eb1d8u: goto label_1eb1d8;
        case 0x1eb1dcu: goto label_1eb1dc;
        case 0x1eb1e0u: goto label_1eb1e0;
        case 0x1eb1e4u: goto label_1eb1e4;
        case 0x1eb1e8u: goto label_1eb1e8;
        case 0x1eb1ecu: goto label_1eb1ec;
        case 0x1eb1f0u: goto label_1eb1f0;
        case 0x1eb1f4u: goto label_1eb1f4;
        case 0x1eb1f8u: goto label_1eb1f8;
        case 0x1eb1fcu: goto label_1eb1fc;
        case 0x1eb200u: goto label_1eb200;
        case 0x1eb204u: goto label_1eb204;
        case 0x1eb208u: goto label_1eb208;
        case 0x1eb20cu: goto label_1eb20c;
        case 0x1eb210u: goto label_1eb210;
        case 0x1eb214u: goto label_1eb214;
        case 0x1eb218u: goto label_1eb218;
        case 0x1eb21cu: goto label_1eb21c;
        case 0x1eb220u: goto label_1eb220;
        case 0x1eb224u: goto label_1eb224;
        case 0x1eb228u: goto label_1eb228;
        case 0x1eb22cu: goto label_1eb22c;
        case 0x1eb230u: goto label_1eb230;
        case 0x1eb234u: goto label_1eb234;
        case 0x1eb238u: goto label_1eb238;
        case 0x1eb23cu: goto label_1eb23c;
        case 0x1eb240u: goto label_1eb240;
        case 0x1eb244u: goto label_1eb244;
        case 0x1eb248u: goto label_1eb248;
        case 0x1eb24cu: goto label_1eb24c;
        case 0x1eb250u: goto label_1eb250;
        case 0x1eb254u: goto label_1eb254;
        case 0x1eb258u: goto label_1eb258;
        case 0x1eb25cu: goto label_1eb25c;
        case 0x1eb260u: goto label_1eb260;
        case 0x1eb264u: goto label_1eb264;
        case 0x1eb268u: goto label_1eb268;
        case 0x1eb26cu: goto label_1eb26c;
        case 0x1eb270u: goto label_1eb270;
        case 0x1eb274u: goto label_1eb274;
        case 0x1eb278u: goto label_1eb278;
        case 0x1eb27cu: goto label_1eb27c;
        case 0x1eb280u: goto label_1eb280;
        case 0x1eb284u: goto label_1eb284;
        case 0x1eb288u: goto label_1eb288;
        case 0x1eb28cu: goto label_1eb28c;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb294u: goto label_1eb294;
        case 0x1eb298u: goto label_1eb298;
        case 0x1eb29cu: goto label_1eb29c;
        case 0x1eb2a0u: goto label_1eb2a0;
        case 0x1eb2a4u: goto label_1eb2a4;
        case 0x1eb2a8u: goto label_1eb2a8;
        case 0x1eb2acu: goto label_1eb2ac;
        case 0x1eb2b0u: goto label_1eb2b0;
        case 0x1eb2b4u: goto label_1eb2b4;
        case 0x1eb2b8u: goto label_1eb2b8;
        case 0x1eb2bcu: goto label_1eb2bc;
        case 0x1eb2c0u: goto label_1eb2c0;
        case 0x1eb2c4u: goto label_1eb2c4;
        case 0x1eb2c8u: goto label_1eb2c8;
        case 0x1eb2ccu: goto label_1eb2cc;
        case 0x1eb2d0u: goto label_1eb2d0;
        case 0x1eb2d4u: goto label_1eb2d4;
        case 0x1eb2d8u: goto label_1eb2d8;
        case 0x1eb2dcu: goto label_1eb2dc;
        case 0x1eb2e0u: goto label_1eb2e0;
        case 0x1eb2e4u: goto label_1eb2e4;
        case 0x1eb2e8u: goto label_1eb2e8;
        case 0x1eb2ecu: goto label_1eb2ec;
        case 0x1eb2f0u: goto label_1eb2f0;
        case 0x1eb2f4u: goto label_1eb2f4;
        case 0x1eb2f8u: goto label_1eb2f8;
        case 0x1eb2fcu: goto label_1eb2fc;
        case 0x1eb300u: goto label_1eb300;
        case 0x1eb304u: goto label_1eb304;
        case 0x1eb308u: goto label_1eb308;
        case 0x1eb30cu: goto label_1eb30c;
        case 0x1eb310u: goto label_1eb310;
        case 0x1eb314u: goto label_1eb314;
        case 0x1eb318u: goto label_1eb318;
        case 0x1eb31cu: goto label_1eb31c;
        case 0x1eb320u: goto label_1eb320;
        case 0x1eb324u: goto label_1eb324;
        case 0x1eb328u: goto label_1eb328;
        case 0x1eb32cu: goto label_1eb32c;
        case 0x1eb330u: goto label_1eb330;
        case 0x1eb334u: goto label_1eb334;
        case 0x1eb338u: goto label_1eb338;
        case 0x1eb33cu: goto label_1eb33c;
        case 0x1eb340u: goto label_1eb340;
        case 0x1eb344u: goto label_1eb344;
        case 0x1eb348u: goto label_1eb348;
        case 0x1eb34cu: goto label_1eb34c;
        case 0x1eb350u: goto label_1eb350;
        case 0x1eb354u: goto label_1eb354;
        case 0x1eb358u: goto label_1eb358;
        case 0x1eb35cu: goto label_1eb35c;
        case 0x1eb360u: goto label_1eb360;
        case 0x1eb364u: goto label_1eb364;
        case 0x1eb368u: goto label_1eb368;
        case 0x1eb36cu: goto label_1eb36c;
        case 0x1eb370u: goto label_1eb370;
        case 0x1eb374u: goto label_1eb374;
        case 0x1eb378u: goto label_1eb378;
        case 0x1eb37cu: goto label_1eb37c;
        case 0x1eb380u: goto label_1eb380;
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb388u: goto label_1eb388;
        case 0x1eb38cu: goto label_1eb38c;
        case 0x1eb390u: goto label_1eb390;
        case 0x1eb394u: goto label_1eb394;
        case 0x1eb398u: goto label_1eb398;
        case 0x1eb39cu: goto label_1eb39c;
        case 0x1eb3a0u: goto label_1eb3a0;
        case 0x1eb3a4u: goto label_1eb3a4;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb3acu: goto label_1eb3ac;
        case 0x1eb3b0u: goto label_1eb3b0;
        case 0x1eb3b4u: goto label_1eb3b4;
        case 0x1eb3b8u: goto label_1eb3b8;
        case 0x1eb3bcu: goto label_1eb3bc;
        case 0x1eb3c0u: goto label_1eb3c0;
        case 0x1eb3c4u: goto label_1eb3c4;
        case 0x1eb3c8u: goto label_1eb3c8;
        case 0x1eb3ccu: goto label_1eb3cc;
        case 0x1eb3d0u: goto label_1eb3d0;
        case 0x1eb3d4u: goto label_1eb3d4;
        case 0x1eb3d8u: goto label_1eb3d8;
        case 0x1eb3dcu: goto label_1eb3dc;
        case 0x1eb3e0u: goto label_1eb3e0;
        case 0x1eb3e4u: goto label_1eb3e4;
        case 0x1eb3e8u: goto label_1eb3e8;
        case 0x1eb3ecu: goto label_1eb3ec;
        case 0x1eb3f0u: goto label_1eb3f0;
        case 0x1eb3f4u: goto label_1eb3f4;
        case 0x1eb3f8u: goto label_1eb3f8;
        case 0x1eb3fcu: goto label_1eb3fc;
        case 0x1eb400u: goto label_1eb400;
        case 0x1eb404u: goto label_1eb404;
        case 0x1eb408u: goto label_1eb408;
        case 0x1eb40cu: goto label_1eb40c;
        case 0x1eb410u: goto label_1eb410;
        case 0x1eb414u: goto label_1eb414;
        case 0x1eb418u: goto label_1eb418;
        case 0x1eb41cu: goto label_1eb41c;
        case 0x1eb420u: goto label_1eb420;
        case 0x1eb424u: goto label_1eb424;
        case 0x1eb428u: goto label_1eb428;
        case 0x1eb42cu: goto label_1eb42c;
        case 0x1eb430u: goto label_1eb430;
        case 0x1eb434u: goto label_1eb434;
        case 0x1eb438u: goto label_1eb438;
        case 0x1eb43cu: goto label_1eb43c;
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb444u: goto label_1eb444;
        case 0x1eb448u: goto label_1eb448;
        case 0x1eb44cu: goto label_1eb44c;
        case 0x1eb450u: goto label_1eb450;
        case 0x1eb454u: goto label_1eb454;
        case 0x1eb458u: goto label_1eb458;
        case 0x1eb45cu: goto label_1eb45c;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb464u: goto label_1eb464;
        case 0x1eb468u: goto label_1eb468;
        case 0x1eb46cu: goto label_1eb46c;
        case 0x1eb470u: goto label_1eb470;
        case 0x1eb474u: goto label_1eb474;
        case 0x1eb478u: goto label_1eb478;
        case 0x1eb47cu: goto label_1eb47c;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb484u: goto label_1eb484;
        case 0x1eb488u: goto label_1eb488;
        case 0x1eb48cu: goto label_1eb48c;
        case 0x1eb490u: goto label_1eb490;
        case 0x1eb494u: goto label_1eb494;
        case 0x1eb498u: goto label_1eb498;
        case 0x1eb49cu: goto label_1eb49c;
        case 0x1eb4a0u: goto label_1eb4a0;
        case 0x1eb4a4u: goto label_1eb4a4;
        case 0x1eb4a8u: goto label_1eb4a8;
        case 0x1eb4acu: goto label_1eb4ac;
        case 0x1eb4b0u: goto label_1eb4b0;
        case 0x1eb4b4u: goto label_1eb4b4;
        case 0x1eb4b8u: goto label_1eb4b8;
        case 0x1eb4bcu: goto label_1eb4bc;
        case 0x1eb4c0u: goto label_1eb4c0;
        case 0x1eb4c4u: goto label_1eb4c4;
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb4ccu: goto label_1eb4cc;
        case 0x1eb4d0u: goto label_1eb4d0;
        case 0x1eb4d4u: goto label_1eb4d4;
        case 0x1eb4d8u: goto label_1eb4d8;
        case 0x1eb4dcu: goto label_1eb4dc;
        case 0x1eb4e0u: goto label_1eb4e0;
        case 0x1eb4e4u: goto label_1eb4e4;
        case 0x1eb4e8u: goto label_1eb4e8;
        case 0x1eb4ecu: goto label_1eb4ec;
        case 0x1eb4f0u: goto label_1eb4f0;
        case 0x1eb4f4u: goto label_1eb4f4;
        case 0x1eb4f8u: goto label_1eb4f8;
        case 0x1eb4fcu: goto label_1eb4fc;
        case 0x1eb500u: goto label_1eb500;
        case 0x1eb504u: goto label_1eb504;
        case 0x1eb508u: goto label_1eb508;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb510u: goto label_1eb510;
        case 0x1eb514u: goto label_1eb514;
        case 0x1eb518u: goto label_1eb518;
        case 0x1eb51cu: goto label_1eb51c;
        case 0x1eb520u: goto label_1eb520;
        case 0x1eb524u: goto label_1eb524;
        case 0x1eb528u: goto label_1eb528;
        case 0x1eb52cu: goto label_1eb52c;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb534u: goto label_1eb534;
        case 0x1eb538u: goto label_1eb538;
        case 0x1eb53cu: goto label_1eb53c;
        case 0x1eb540u: goto label_1eb540;
        case 0x1eb544u: goto label_1eb544;
        case 0x1eb548u: goto label_1eb548;
        case 0x1eb54cu: goto label_1eb54c;
        case 0x1eb550u: goto label_1eb550;
        case 0x1eb554u: goto label_1eb554;
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb55cu: goto label_1eb55c;
        case 0x1eb560u: goto label_1eb560;
        case 0x1eb564u: goto label_1eb564;
        case 0x1eb568u: goto label_1eb568;
        case 0x1eb56cu: goto label_1eb56c;
        case 0x1eb570u: goto label_1eb570;
        case 0x1eb574u: goto label_1eb574;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb580u: goto label_1eb580;
        case 0x1eb584u: goto label_1eb584;
        case 0x1eb588u: goto label_1eb588;
        case 0x1eb58cu: goto label_1eb58c;
        case 0x1eb590u: goto label_1eb590;
        case 0x1eb594u: goto label_1eb594;
        case 0x1eb598u: goto label_1eb598;
        case 0x1eb59cu: goto label_1eb59c;
        case 0x1eb5a0u: goto label_1eb5a0;
        case 0x1eb5a4u: goto label_1eb5a4;
        case 0x1eb5a8u: goto label_1eb5a8;
        case 0x1eb5acu: goto label_1eb5ac;
        case 0x1eb5b0u: goto label_1eb5b0;
        case 0x1eb5b4u: goto label_1eb5b4;
        case 0x1eb5b8u: goto label_1eb5b8;
        case 0x1eb5bcu: goto label_1eb5bc;
        case 0x1eb5c0u: goto label_1eb5c0;
        case 0x1eb5c4u: goto label_1eb5c4;
        case 0x1eb5c8u: goto label_1eb5c8;
        case 0x1eb5ccu: goto label_1eb5cc;
        case 0x1eb5d0u: goto label_1eb5d0;
        case 0x1eb5d4u: goto label_1eb5d4;
        case 0x1eb5d8u: goto label_1eb5d8;
        case 0x1eb5dcu: goto label_1eb5dc;
        case 0x1eb5e0u: goto label_1eb5e0;
        case 0x1eb5e4u: goto label_1eb5e4;
        case 0x1eb5e8u: goto label_1eb5e8;
        case 0x1eb5ecu: goto label_1eb5ec;
        case 0x1eb5f0u: goto label_1eb5f0;
        case 0x1eb5f4u: goto label_1eb5f4;
        case 0x1eb5f8u: goto label_1eb5f8;
        case 0x1eb5fcu: goto label_1eb5fc;
        case 0x1eb600u: goto label_1eb600;
        case 0x1eb604u: goto label_1eb604;
        case 0x1eb608u: goto label_1eb608;
        case 0x1eb60cu: goto label_1eb60c;
        case 0x1eb610u: goto label_1eb610;
        case 0x1eb614u: goto label_1eb614;
        case 0x1eb618u: goto label_1eb618;
        case 0x1eb61cu: goto label_1eb61c;
        case 0x1eb620u: goto label_1eb620;
        case 0x1eb624u: goto label_1eb624;
        case 0x1eb628u: goto label_1eb628;
        case 0x1eb62cu: goto label_1eb62c;
        case 0x1eb630u: goto label_1eb630;
        case 0x1eb634u: goto label_1eb634;
        case 0x1eb638u: goto label_1eb638;
        case 0x1eb63cu: goto label_1eb63c;
        case 0x1eb640u: goto label_1eb640;
        case 0x1eb644u: goto label_1eb644;
        case 0x1eb648u: goto label_1eb648;
        case 0x1eb64cu: goto label_1eb64c;
        case 0x1eb650u: goto label_1eb650;
        case 0x1eb654u: goto label_1eb654;
        case 0x1eb658u: goto label_1eb658;
        case 0x1eb65cu: goto label_1eb65c;
        case 0x1eb660u: goto label_1eb660;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb668u: goto label_1eb668;
        case 0x1eb66cu: goto label_1eb66c;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb674u: goto label_1eb674;
        case 0x1eb678u: goto label_1eb678;
        case 0x1eb67cu: goto label_1eb67c;
        case 0x1eb680u: goto label_1eb680;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb688u: goto label_1eb688;
        case 0x1eb68cu: goto label_1eb68c;
        case 0x1eb690u: goto label_1eb690;
        case 0x1eb694u: goto label_1eb694;
        case 0x1eb698u: goto label_1eb698;
        case 0x1eb69cu: goto label_1eb69c;
        case 0x1eb6a0u: goto label_1eb6a0;
        case 0x1eb6a4u: goto label_1eb6a4;
        case 0x1eb6a8u: goto label_1eb6a8;
        case 0x1eb6acu: goto label_1eb6ac;
        case 0x1eb6b0u: goto label_1eb6b0;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6b8u: goto label_1eb6b8;
        case 0x1eb6bcu: goto label_1eb6bc;
        case 0x1eb6c0u: goto label_1eb6c0;
        case 0x1eb6c4u: goto label_1eb6c4;
        case 0x1eb6c8u: goto label_1eb6c8;
        case 0x1eb6ccu: goto label_1eb6cc;
        case 0x1eb6d0u: goto label_1eb6d0;
        case 0x1eb6d4u: goto label_1eb6d4;
        case 0x1eb6d8u: goto label_1eb6d8;
        case 0x1eb6dcu: goto label_1eb6dc;
        case 0x1eb6e0u: goto label_1eb6e0;
        case 0x1eb6e4u: goto label_1eb6e4;
        case 0x1eb6e8u: goto label_1eb6e8;
        case 0x1eb6ecu: goto label_1eb6ec;
        case 0x1eb6f0u: goto label_1eb6f0;
        case 0x1eb6f4u: goto label_1eb6f4;
        case 0x1eb6f8u: goto label_1eb6f8;
        case 0x1eb6fcu: goto label_1eb6fc;
        case 0x1eb700u: goto label_1eb700;
        case 0x1eb704u: goto label_1eb704;
        case 0x1eb708u: goto label_1eb708;
        case 0x1eb70cu: goto label_1eb70c;
        case 0x1eb710u: goto label_1eb710;
        case 0x1eb714u: goto label_1eb714;
        case 0x1eb718u: goto label_1eb718;
        case 0x1eb71cu: goto label_1eb71c;
        case 0x1eb720u: goto label_1eb720;
        case 0x1eb724u: goto label_1eb724;
        case 0x1eb728u: goto label_1eb728;
        case 0x1eb72cu: goto label_1eb72c;
        case 0x1eb730u: goto label_1eb730;
        case 0x1eb734u: goto label_1eb734;
        case 0x1eb738u: goto label_1eb738;
        case 0x1eb73cu: goto label_1eb73c;
        case 0x1eb740u: goto label_1eb740;
        case 0x1eb744u: goto label_1eb744;
        case 0x1eb748u: goto label_1eb748;
        case 0x1eb74cu: goto label_1eb74c;
        case 0x1eb750u: goto label_1eb750;
        case 0x1eb754u: goto label_1eb754;
        case 0x1eb758u: goto label_1eb758;
        case 0x1eb75cu: goto label_1eb75c;
        case 0x1eb760u: goto label_1eb760;
        case 0x1eb764u: goto label_1eb764;
        case 0x1eb768u: goto label_1eb768;
        case 0x1eb76cu: goto label_1eb76c;
        case 0x1eb770u: goto label_1eb770;
        case 0x1eb774u: goto label_1eb774;
        case 0x1eb778u: goto label_1eb778;
        case 0x1eb77cu: goto label_1eb77c;
        case 0x1eb780u: goto label_1eb780;
        case 0x1eb784u: goto label_1eb784;
        case 0x1eb788u: goto label_1eb788;
        case 0x1eb78cu: goto label_1eb78c;
        case 0x1eb790u: goto label_1eb790;
        case 0x1eb794u: goto label_1eb794;
        case 0x1eb798u: goto label_1eb798;
        case 0x1eb79cu: goto label_1eb79c;
        case 0x1eb7a0u: goto label_1eb7a0;
        case 0x1eb7a4u: goto label_1eb7a4;
        case 0x1eb7a8u: goto label_1eb7a8;
        case 0x1eb7acu: goto label_1eb7ac;
        case 0x1eb7b0u: goto label_1eb7b0;
        case 0x1eb7b4u: goto label_1eb7b4;
        case 0x1eb7b8u: goto label_1eb7b8;
        case 0x1eb7bcu: goto label_1eb7bc;
        case 0x1eb7c0u: goto label_1eb7c0;
        case 0x1eb7c4u: goto label_1eb7c4;
        case 0x1eb7c8u: goto label_1eb7c8;
        case 0x1eb7ccu: goto label_1eb7cc;
        case 0x1eb7d0u: goto label_1eb7d0;
        case 0x1eb7d4u: goto label_1eb7d4;
        case 0x1eb7d8u: goto label_1eb7d8;
        case 0x1eb7dcu: goto label_1eb7dc;
        case 0x1eb7e0u: goto label_1eb7e0;
        case 0x1eb7e4u: goto label_1eb7e4;
        case 0x1eb7e8u: goto label_1eb7e8;
        case 0x1eb7ecu: goto label_1eb7ec;
        case 0x1eb7f0u: goto label_1eb7f0;
        case 0x1eb7f4u: goto label_1eb7f4;
        case 0x1eb7f8u: goto label_1eb7f8;
        case 0x1eb7fcu: goto label_1eb7fc;
        case 0x1eb800u: goto label_1eb800;
        case 0x1eb804u: goto label_1eb804;
        case 0x1eb808u: goto label_1eb808;
        case 0x1eb80cu: goto label_1eb80c;
        case 0x1eb810u: goto label_1eb810;
        case 0x1eb814u: goto label_1eb814;
        default: break;
    }

    ctx->pc = 0x1eb0c8u;

label_1eb0c8:
    // 0x1eb0c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1eb0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1eb0cc:
    // 0x1eb0cc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1eb0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_1eb0d0:
    // 0x1eb0d0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1eb0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_1eb0d4:
    // 0x1eb0d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eb0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb0d8:
    // 0x1eb0d8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1eb0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_1eb0dc:
    // 0x1eb0dc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1eb0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_1eb0e0:
    // 0x1eb0e0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1eb0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_1eb0e4:
    // 0x1eb0e4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1eb0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_1eb0e8:
    // 0x1eb0e8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1eb0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1eb0ec:
    // 0x1eb0ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1eb0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1eb0f0:
    // 0x1eb0f0: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1eb0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1eb0f4:
    // 0x1eb0f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1eb0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1eb0f8:
    // 0x1eb0f8: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1eb0f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1eb0fc:
    // 0x1eb0fc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1eb0fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1eb100:
    // 0x1eb100: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1eb100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1eb104:
    // 0x1eb104: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1eb104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1eb108:
    // 0x1eb108: 0x144001b4  bnez        $v0, . + 4 + (0x1B4 << 2)
label_1eb10c:
    if (ctx->pc == 0x1EB10Cu) {
        ctx->pc = 0x1EB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB108u;
        // 0x1eb10c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB110u;
        goto label_1eb110;
    }
    ctx->pc = 0x1EB108u;
    {
        const bool branch_taken_0x1eb108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB108u;
        // 0x1eb10c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb108) {
            ctx->pc = 0x1EB7DCu;
            goto label_1eb7dc;
        }
    }
    ctx->pc = 0x1EB110u;
label_1eb110:
    // 0x1eb110: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eb110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eb114:
    // 0x1eb114: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1eb118:
    // 0x1eb118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1eb118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1eb11c:
    // 0x1eb11c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1eb11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1eb120:
    // 0x1eb120: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1eb124:
    if (ctx->pc == 0x1EB124u) {
        ctx->pc = 0x1EB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB120u;
        // 0x1eb124: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB128u;
        goto label_1eb128;
    }
    ctx->pc = 0x1EB120u;
    {
        const bool branch_taken_0x1eb120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB120u;
        // 0x1eb124: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb120) {
            ctx->pc = 0x1EB214u;
            goto label_1eb214;
        }
    }
    ctx->pc = 0x1EB128u;
label_1eb128:
    // 0x1eb128: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1eb12c:
    if (ctx->pc == 0x1EB12Cu) {
        ctx->pc = 0x1EB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB128u;
        // 0x1eb12c: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB130u;
        goto label_1eb130;
    }
    ctx->pc = 0x1EB128u;
    {
        const bool branch_taken_0x1eb128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB128u;
        // 0x1eb12c: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb128) {
            ctx->pc = 0x1EB1A8u;
            goto label_1eb1a8;
        }
    }
    ctx->pc = 0x1EB130u;
label_1eb130:
    // 0x1eb130: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1eb130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1eb134:
    // 0x1eb134: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1eb134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1eb138:
    // 0x1eb138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eb13c:
    // 0x1eb13c: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1eb140:
    // 0x1eb140: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1eb140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1eb144:
    // 0x1eb144: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eb148:
    // 0x1eb148: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1eb148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1eb14c:
    // 0x1eb14c: 0x3c013e5c  lui         $at, 0x3E5C
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15964 << 16));
label_1eb150:
    // 0x1eb150: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1eb150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1eb154:
    // 0x1eb154: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1eb154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1eb158:
    // 0x1eb158: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1eb158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1eb15c:
    // 0x1eb15c: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x1eb15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
label_1eb160:
    // 0x1eb160: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1eb160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1eb164:
    // 0x1eb164: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eb164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1eb168:
    // 0x1eb168: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eb168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eb16c:
    // 0x1eb16c: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1eb16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1eb170:
    // 0x1eb170: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eb170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1eb174:
    // 0x1eb174: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eb174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1eb178:
    // 0x1eb178: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1eb178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1eb17c:
    // 0x1eb17c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1eb17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1eb180:
    // 0x1eb180: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1eb180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1eb184:
    // 0x1eb184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eb184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eb188:
    // 0x1eb188: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1eb188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1eb18c:
    // 0x1eb18c: 0xe441f374  swc1        $f1, -0xC8C($v0)
    ctx->pc = 0x1eb18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964084), bits); }
label_1eb190:
    // 0x1eb190: 0xe462f378  swc1        $f2, -0xC88($v1)
    ctx->pc = 0x1eb190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964088), bits); }
label_1eb194:
    // 0x1eb194: 0xe480f388  swc1        $f0, -0xC78($a0)
    ctx->pc = 0x1eb194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964104), bits); }
label_1eb198:
    // 0x1eb198: 0xe4e5f380  swc1        $f5, -0xC80($a3)
    ctx->pc = 0x1eb198u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964096), bits); }
label_1eb19c:
    // 0x1eb19c: 0xe4c4f384  swc1        $f4, -0xC7C($a2)
    ctx->pc = 0x1eb19cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964100), bits); }
label_1eb1a0:
    // 0x1eb1a0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1eb1a4:
    if (ctx->pc == 0x1EB1A4u) {
        ctx->pc = 0x1EB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1A0u;
        // 0x1eb1a4: 0xe4a3f37c  swc1        $f3, -0xC84($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB1A8u;
        goto label_1eb1a8;
    }
    ctx->pc = 0x1EB1A0u;
    {
        const bool branch_taken_0x1eb1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1A0u;
        // 0x1eb1a4: 0xe4a3f37c  swc1        $f3, -0xC84($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1a0) {
            ctx->pc = 0x1EB2DCu;
            goto label_1eb2dc;
        }
    }
    ctx->pc = 0x1EB1A8u;
label_1eb1a8:
    // 0x1eb1a8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1eb1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1eb1ac:
    // 0x1eb1ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1eb1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1eb1b0:
    // 0x1eb1b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eb1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1eb1b4:
    // 0x1eb1b4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1eb1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1eb1b8:
    // 0x1eb1b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eb1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1eb1bc:
    // 0x1eb1bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eb1c0:
    // 0x1eb1c0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1eb1c4:
    // 0x1eb1c4: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1eb1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_1eb1c8:
    // 0x1eb1c8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1eb1c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1eb1cc:
    // 0x1eb1cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eb1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eb1d0:
    // 0x1eb1d0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1eb1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1eb1d4:
    // 0x1eb1d4: 0x3c013e6e  lui         $at, 0x3E6E
    ctx->pc = 0x1eb1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15982 << 16));
label_1eb1d8:
    // 0x1eb1d8: 0x3421978d  ori         $at, $at, 0x978D
    ctx->pc = 0x1eb1d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38797);
label_1eb1dc:
    // 0x1eb1dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eb1e0:
    // 0x1eb1e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1eb1e4:
    // 0x1eb1e4: 0x3c013f4a  lui         $at, 0x3F4A
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16202 << 16));
label_1eb1e8:
    // 0x1eb1e8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1eb1e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1eb1ec:
    // 0x1eb1ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eb1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1eb1f0:
    // 0x1eb1f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eb1f4:
    // 0x1eb1f4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1eb1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1eb1f8:
    // 0x1eb1f8: 0xe461f374  swc1        $f1, -0xC8C($v1)
    ctx->pc = 0x1eb1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964084), bits); }
label_1eb1fc:
    // 0x1eb1fc: 0xe440f378  swc1        $f0, -0xC88($v0)
    ctx->pc = 0x1eb1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964088), bits); }
label_1eb200:
    // 0x1eb200: 0xe484f388  swc1        $f4, -0xC78($a0)
    ctx->pc = 0x1eb200u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964104), bits); }
label_1eb204:
    // 0x1eb204: 0xe4c2f380  swc1        $f2, -0xC80($a2)
    ctx->pc = 0x1eb204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964096), bits); }
label_1eb208:
    // 0x1eb208: 0xe4e3f384  swc1        $f3, -0xC7C($a3)
    ctx->pc = 0x1eb208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964100), bits); }
label_1eb20c:
    // 0x1eb20c: 0x10000033  b           . + 4 + (0x33 << 2)
label_1eb210:
    if (ctx->pc == 0x1EB210u) {
        ctx->pc = 0x1EB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB20Cu;
        // 0x1eb210: 0xe4a4f37c  swc1        $f4, -0xC84($a1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB214u;
        goto label_1eb214;
    }
    ctx->pc = 0x1EB20Cu;
    {
        const bool branch_taken_0x1eb20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB20Cu;
        // 0x1eb210: 0xe4a4f37c  swc1        $f4, -0xC84($a1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb20c) {
            ctx->pc = 0x1EB2DCu;
            goto label_1eb2dc;
        }
    }
    ctx->pc = 0x1EB214u;
label_1eb214:
    // 0x1eb214: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1eb214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1eb218:
    // 0x1eb218: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1eb21c:
    if (ctx->pc == 0x1EB21Cu) {
        ctx->pc = 0x1EB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB218u;
        // 0x1eb21c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB220u;
        goto label_1eb220;
    }
    ctx->pc = 0x1EB218u;
    {
        const bool branch_taken_0x1eb218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB218u;
        // 0x1eb21c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb218) {
            ctx->pc = 0x1EB234u;
            goto label_1eb234;
        }
    }
    ctx->pc = 0x1EB220u;
label_1eb220:
    // 0x1eb220: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1eb224:
    // 0x1eb224: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eb224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1eb228:
    // 0x1eb228: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eb22c:
    // 0x1eb22c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1eb230:
    if (ctx->pc == 0x1EB230u) {
        ctx->pc = 0x1EB234u;
        goto label_1eb234;
    }
    ctx->pc = 0x1EB22Cu;
    {
        const bool branch_taken_0x1eb22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb22c) {
            ctx->pc = 0x1EB288u;
            goto label_1eb288;
        }
    }
    ctx->pc = 0x1EB234u;
label_1eb234:
    // 0x1eb234: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1eb234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1eb238:
    // 0x1eb238: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1eb23c:
    if (ctx->pc == 0x1EB23Cu) {
        ctx->pc = 0x1EB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB238u;
        // 0x1eb23c: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB240u;
        goto label_1eb240;
    }
    ctx->pc = 0x1EB238u;
    {
        const bool branch_taken_0x1eb238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB238u;
        // 0x1eb23c: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb238) {
            ctx->pc = 0x1EB278u;
            goto label_1eb278;
        }
    }
    ctx->pc = 0x1EB240u;
label_1eb240:
    // 0x1eb240: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1eb240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1eb244:
    // 0x1eb244: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1eb244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1eb248:
    // 0x1eb248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eb24c:
    // 0x1eb24c: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x1eb24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
label_1eb250:
    // 0x1eb250: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1eb250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1eb254:
    // 0x1eb254: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eb258:
    // 0x1eb258: 0x3c013e12  lui         $at, 0x3E12
    ctx->pc = 0x1eb258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15890 << 16));
label_1eb25c:
    // 0x1eb25c: 0x34216e98  ori         $at, $at, 0x6E98
    ctx->pc = 0x1eb25cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28312);
label_1eb260:
    // 0x1eb260: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eb260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1eb264:
    // 0x1eb264: 0x3c013f63  lui         $at, 0x3F63
    ctx->pc = 0x1eb264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16227 << 16));
label_1eb268:
    // 0x1eb268: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1eb268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1eb26c:
    // 0x1eb26c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eb26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1eb270:
    // 0x1eb270: 0x10000010  b           . + 4 + (0x10 << 2)
label_1eb274:
    if (ctx->pc == 0x1EB274u) {
        ctx->pc = 0x1EB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB270u;
        // 0x1eb274: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB278u;
        goto label_1eb278;
    }
    ctx->pc = 0x1EB270u;
    {
        const bool branch_taken_0x1eb270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB270u;
        // 0x1eb274: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb270) {
            ctx->pc = 0x1EB2B4u;
            goto label_1eb2b4;
        }
    }
    ctx->pc = 0x1EB278u;
label_1eb278:
    // 0x1eb278: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1eb278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1eb27c:
    // 0x1eb27c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1eb27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1eb280:
    // 0x1eb280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eb284:
    // 0x1eb284: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1eb284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1eb288:
    // 0x1eb288: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x1eb288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_1eb28c:
    // 0x1eb28c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1eb28cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1eb290:
    // 0x1eb290: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eb294:
    // 0x1eb294: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1eb294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1eb298:
    // 0x1eb298: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1eb298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_1eb29c:
    // 0x1eb29c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1eb29cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1eb2a0:
    // 0x1eb2a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eb2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1eb2a4:
    // 0x1eb2a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1eb2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1eb2a8:
    // 0x1eb2a8: 0x3c013f58  lui         $at, 0x3F58
    ctx->pc = 0x1eb2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16216 << 16));
label_1eb2ac:
    // 0x1eb2ac: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1eb2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1eb2b0:
    // 0x1eb2b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eb2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1eb2b4:
    // 0x1eb2b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eb2b8:
    // 0x1eb2b8: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1eb2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1eb2bc:
    // 0x1eb2bc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1eb2bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1eb2c0:
    // 0x1eb2c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eb2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eb2c4:
    // 0x1eb2c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1eb2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1eb2c8:
    // 0x1eb2c8: 0xe441f374  swc1        $f1, -0xC8C($v0)
    ctx->pc = 0x1eb2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964084), bits); }
label_1eb2cc:
    // 0x1eb2cc: 0xe462f378  swc1        $f2, -0xC88($v1)
    ctx->pc = 0x1eb2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964088), bits); }
label_1eb2d0:
    // 0x1eb2d0: 0xe4a3f380  swc1        $f3, -0xC80($a1)
    ctx->pc = 0x1eb2d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964096), bits); }
label_1eb2d4:
    // 0x1eb2d4: 0xe4c4f384  swc1        $f4, -0xC7C($a2)
    ctx->pc = 0x1eb2d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964100), bits); }
label_1eb2d8:
    // 0x1eb2d8: 0xe480f37c  swc1        $f0, -0xC84($a0)
    ctx->pc = 0x1eb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964092), bits); }
label_1eb2dc:
    // 0x1eb2dc: 0xa24000c4  sb          $zero, 0xC4($s2)
    ctx->pc = 0x1eb2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 196), (uint8_t)GPR_U32(ctx, 0));
label_1eb2e0:
    // 0x1eb2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2e4:
    // 0x1eb2e4: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x1eb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
label_1eb2e8:
    // 0x1eb2e8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1eb2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1eb2ec:
    // 0x1eb2ec: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1eb2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1eb2f0:
    // 0x1eb2f0: 0xc07aa7a  jal         func_1EA9E8
label_1eb2f4:
    if (ctx->pc == 0x1EB2F4u) {
        ctx->pc = 0x1EB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2F0u;
        // 0x1eb2f4: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2F8u;
        goto label_1eb2f8;
    }
    ctx->pc = 0x1EB2F0u;
    SET_GPR_U32(ctx, 31, 0x1EB2F8u);
    ctx->pc = 0x1EB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB2F0u;
    // 0x1eb2f4: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9E8u, 0x1EB2F0u, 0x1EB2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2F8u;
label_1eb2f8:
    // 0x1eb2f8: 0x26146ce8  addiu       $s4, $s0, 0x6CE8
    ctx->pc = 0x1eb2f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 27880));
label_1eb2fc:
    // 0x1eb2fc: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x1eb2fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1eb300:
    // 0x1eb300: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1eb300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1eb304:
    // 0x1eb304: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eb304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eb308:
    // 0x1eb308: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1eb308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eb30c:
    // 0x1eb30c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1eb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1eb310:
    // 0x1eb310: 0x24a56d70  addiu       $a1, $a1, 0x6D70
    ctx->pc = 0x1eb310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28016));
label_1eb314:
    // 0x1eb314: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1eb314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb318:
    // 0x1eb318: 0x2409013a  addiu       $t1, $zero, 0x13A
    ctx->pc = 0x1eb318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_1eb31c:
    // 0x1eb31c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eb31cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eb320:
    // 0x1eb320: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eb320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb324:
    // 0x1eb324: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eb324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eb328:
    // 0x1eb328: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1eb328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb32c:
    // 0x1eb32c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1eb32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1eb330:
    // 0x1eb330: 0x40f809  jalr        $v0
label_1eb334:
    if (ctx->pc == 0x1EB334u) {
        ctx->pc = 0x1EB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB330u;
        // 0x1eb334: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB338u;
        goto label_1eb338;
    }
    ctx->pc = 0x1EB330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB338u);
        ctx->pc = 0x1EB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB330u;
        // 0x1eb334: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB330u, 0x1EB338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB338u;
label_1eb338:
    // 0x1eb338: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1eb338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb33c:
    // 0x1eb33c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_1eb340:
    if (ctx->pc == 0x1EB340u) {
        ctx->pc = 0x1EB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB33Cu;
        // 0x1eb340: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB344u;
        goto label_1eb344;
    }
    ctx->pc = 0x1EB33Cu;
    {
        const bool branch_taken_0x1eb33c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB33Cu;
        // 0x1eb340: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb33c) {
            ctx->pc = 0x1EB350u;
            goto label_1eb350;
        }
    }
    ctx->pc = 0x1EB344u;
label_1eb344:
    // 0x1eb344: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1eb344u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1eb348:
    // 0x1eb348: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1eb348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_1eb34c:
    // 0x1eb34c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1eb34cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_1eb350:
    // 0x1eb350: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1eb350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1eb354:
    // 0x1eb354: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1eb354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1eb358:
    // 0x1eb358: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1eb35c:
    // 0x1eb35c: 0xae47008c  sw          $a3, 0x8C($s2)
    ctx->pc = 0x1eb35cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 7));
label_1eb360:
    // 0x1eb360: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1eb360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1eb364:
    // 0x1eb364: 0x248a6d98  addiu       $t2, $a0, 0x6D98
    ctx->pc = 0x1eb364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 28056));
label_1eb368:
    // 0x1eb368: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x1eb368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1eb36c:
    // 0x1eb36c: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x1eb36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1eb370:
    // 0x1eb370: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1eb370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eb374:
    // 0x1eb374: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1eb374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eb378:
    // 0x1eb378: 0xac67ee40  sw          $a3, -0x11C0($v1)
    ctx->pc = 0x1eb378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962752), GPR_U32(ctx, 7));
label_1eb37c:
    // 0x1eb37c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1eb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1eb380:
    // 0x1eb380: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1eb380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1eb384:
    // 0x1eb384: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1eb384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1eb388:
    // 0x1eb388: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1eb388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1eb38c:
    // 0x1eb38c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1eb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1eb390:
    // 0x1eb390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1eb394:
    // 0x1eb394: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1eb394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1eb398:
    // 0x1eb398: 0x60f809  jalr        $v1
label_1eb39c:
    if (ctx->pc == 0x1EB39Cu) {
        ctx->pc = 0x1EB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB398u;
        // 0x1eb39c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3A0u;
        goto label_1eb3a0;
    }
    ctx->pc = 0x1EB398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB3A0u);
        ctx->pc = 0x1EB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB398u;
        // 0x1eb39c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB398u, 0x1EB3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB3A0u;
label_1eb3a0:
    // 0x1eb3a0: 0xc07f728  jal         func_1FDCA0
label_1eb3a4:
    if (ctx->pc == 0x1EB3A4u) {
        ctx->pc = 0x1EB3A8u;
        goto label_1eb3a8;
    }
    ctx->pc = 0x1EB3A0u;
    SET_GPR_U32(ctx, 31, 0x1EB3A8u);
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1EB3A0u, 0x1EB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3A8u;
label_1eb3a8:
    // 0x1eb3a8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1eb3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1eb3ac:
    // 0x1eb3ac: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x1eb3acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1eb3b0:
    // 0x1eb3b0: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1eb3b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1eb3b4:
    // 0x1eb3b4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1eb3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1eb3b8:
    // 0x1eb3b8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1eb3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1eb3bc:
    // 0x1eb3bc: 0x24a56da0  addiu       $a1, $a1, 0x6DA0
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28064));
label_1eb3c0:
    // 0x1eb3c0: 0xe676000c  swc1        $f22, 0xC($s3)
    ctx->pc = 0x1eb3c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1eb3c4:
    // 0x1eb3c4: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1eb3c8:
    // 0x1eb3c8: 0x8ecc27e4  lw          $t4, 0x27E4($s6)
    ctx->pc = 0x1eb3c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_1eb3cc:
    // 0x1eb3cc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eb3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eb3d0:
    // 0x1eb3d0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1eb3d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb3d4:
    // 0x1eb3d4: 0x24090145  addiu       $t1, $zero, 0x145
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_1eb3d8:
    // 0x1eb3d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1eb3dc:
    // 0x1eb3dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eb3dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb3e0:
    // 0x1eb3e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb3e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb3e4:
    // 0x1eb3e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eb3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eb3e8:
    // 0x1eb3e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eb3ec:
    // 0x1eb3ec: 0x40f809  jalr        $v0
label_1eb3f0:
    if (ctx->pc == 0x1EB3F0u) {
        ctx->pc = 0x1EB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3ECu;
        // 0x1eb3f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3F4u;
        goto label_1eb3f4;
    }
    ctx->pc = 0x1EB3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB3F4u);
        ctx->pc = 0x1EB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3ECu;
        // 0x1eb3f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB3ECu, 0x1EB3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB3F4u;
label_1eb3f4:
    // 0x1eb3f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1eb3f8:
    if (ctx->pc == 0x1EB3F8u) {
        ctx->pc = 0x1EB3FCu;
        goto label_1eb3fc;
    }
    ctx->pc = 0x1EB3F4u;
    {
        const bool branch_taken_0x1eb3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3f4) {
            ctx->pc = 0x1EB404u;
            goto label_1eb404;
        }
    }
    ctx->pc = 0x1EB3FCu;
label_1eb3fc:
    // 0x1eb3fc: 0xc0733e2  jal         func_1CCF88
label_1eb400:
    if (ctx->pc == 0x1EB400u) {
        ctx->pc = 0x1EB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3FCu;
        // 0x1eb400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB404u;
        goto label_1eb404;
    }
    ctx->pc = 0x1EB3FCu;
    SET_GPR_U32(ctx, 31, 0x1EB404u);
    ctx->pc = 0x1EB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB3FCu;
    // 0x1eb400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1EB3FCu, 0x1EB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB404u;
label_1eb404:
    // 0x1eb404: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1eb404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1eb408:
    // 0x1eb408: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1eb408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1eb40c:
    // 0x1eb40c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1eb40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1eb410:
    // 0x1eb410: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1eb410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1eb414:
    // 0x1eb414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb418:
    // 0x1eb418: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x1eb418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_1eb41c:
    // 0x1eb41c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1eb41cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1eb420:
    // 0x1eb420: 0xc05e602  jal         func_179808
label_1eb424:
    if (ctx->pc == 0x1EB424u) {
        ctx->pc = 0x1EB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB420u;
        // 0x1eb424: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB428u;
        goto label_1eb428;
    }
    ctx->pc = 0x1EB420u;
    SET_GPR_U32(ctx, 31, 0x1EB428u);
    ctx->pc = 0x1EB424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB420u;
    // 0x1eb424: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1EB420u, 0x1EB428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB428u;
label_1eb428:
    // 0x1eb428: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1eb428u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb42c:
    // 0x1eb42c: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x1eb42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_1eb430:
    // 0x1eb430: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1eb430u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eb434:
    // 0x1eb434: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1eb438:
    // 0x1eb438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eb438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb43c:
    // 0x1eb43c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1eb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb440:
    // 0x1eb440: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1eb440u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb444:
    // 0x1eb444: 0x8c47d310  lw          $a3, -0x2CF0($v0)
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1eb448:
    // 0x1eb448: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1eb448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb44c:
    // 0x1eb44c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1eb44cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1eb450:
    // 0x1eb450: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb454:
    // 0x1eb454: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x1eb454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_1eb458:
    // 0x1eb458: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1eb458u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eb45c:
    // 0x1eb45c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1eb45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1eb460:
    // 0x1eb460: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eb460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb464:
    // 0x1eb464: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1eb468:
    // 0x1eb468: 0x40f809  jalr        $v0
label_1eb46c:
    if (ctx->pc == 0x1EB46Cu) {
        ctx->pc = 0x1EB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB468u;
        // 0x1eb46c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB470u;
        goto label_1eb470;
    }
    ctx->pc = 0x1EB468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB470u);
        ctx->pc = 0x1EB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB468u;
        // 0x1eb46c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB468u, 0x1EB470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB470u;
label_1eb470:
    // 0x1eb470: 0xc067b9c  jal         func_19EE70
label_1eb474:
    if (ctx->pc == 0x1EB474u) {
        ctx->pc = 0x1EB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB470u;
        // 0x1eb474: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB478u;
        goto label_1eb478;
    }
    ctx->pc = 0x1EB470u;
    SET_GPR_U32(ctx, 31, 0x1EB478u);
    ctx->pc = 0x1EB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB470u;
    // 0x1eb474: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EB470u, 0x1EB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB478u;
label_1eb478:
    // 0x1eb478: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x1eb478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_1eb47c:
    // 0x1eb47c: 0xc073478  jal         func_1CD1E0
label_1eb480:
    if (ctx->pc == 0x1EB480u) {
        ctx->pc = 0x1EB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB47Cu;
        // 0x1eb480: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB484u;
        goto label_1eb484;
    }
    ctx->pc = 0x1EB47Cu;
    SET_GPR_U32(ctx, 31, 0x1EB484u);
    ctx->pc = 0x1EB480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB47Cu;
    // 0x1eb480: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1EB47Cu, 0x1EB484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB484u;
label_1eb484:
    // 0x1eb484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb488:
    // 0x1eb488: 0xc05e602  jal         func_179808
label_1eb48c:
    if (ctx->pc == 0x1EB48Cu) {
        ctx->pc = 0x1EB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB488u;
        // 0x1eb48c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB490u;
        goto label_1eb490;
    }
    ctx->pc = 0x1EB488u;
    SET_GPR_U32(ctx, 31, 0x1EB490u);
    ctx->pc = 0x1EB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB488u;
    // 0x1eb48c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1EB488u, 0x1EB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB490u;
label_1eb490:
    // 0x1eb490: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1eb490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb494:
    // 0x1eb494: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1eb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb498:
    // 0x1eb498: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1eb498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1eb49c:
    // 0x1eb49c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eb49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1eb4a0:
    // 0x1eb4a0: 0xc07f734  jal         func_1FDCD0
label_1eb4a4:
    if (ctx->pc == 0x1EB4A4u) {
        ctx->pc = 0x1EB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4A0u;
        // 0x1eb4a4: 0xe621ee44  swc1        $f1, -0x11BC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4A8u;
        goto label_1eb4a8;
    }
    ctx->pc = 0x1EB4A0u;
    SET_GPR_U32(ctx, 31, 0x1EB4A8u);
    ctx->pc = 0x1EB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB4A0u;
    // 0x1eb4a4: 0xe621ee44  swc1        $f1, -0x11BC($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1EB4A0u, 0x1EB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB4A8u;
label_1eb4a8:
    // 0x1eb4a8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1eb4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1eb4ac:
    // 0x1eb4ac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1eb4b0:
    // 0x1eb4b0: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1eb4b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1eb4b4:
    // 0x1eb4b4: 0x24a56db0  addiu       $a1, $a1, 0x6DB0
    ctx->pc = 0x1eb4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28080));
label_1eb4b8:
    // 0x1eb4b8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1eb4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1eb4bc:
    // 0x1eb4bc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1eb4bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4c0:
    // 0x1eb4c0: 0xe676000c  swc1        $f22, 0xC($s3)
    ctx->pc = 0x1eb4c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1eb4c4:
    // 0x1eb4c4: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1eb4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1eb4c8:
    // 0x1eb4c8: 0x8ecc27e4  lw          $t4, 0x27E4($s6)
    ctx->pc = 0x1eb4c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_1eb4cc:
    // 0x1eb4cc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eb4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eb4d0:
    // 0x1eb4d0: 0x24090151  addiu       $t1, $zero, 0x151
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
label_1eb4d4:
    // 0x1eb4d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eb4d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4d8:
    // 0x1eb4d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1eb4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1eb4dc:
    // 0x1eb4dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb4dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb4e0:
    // 0x1eb4e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eb4e4:
    // 0x1eb4e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eb4e8:
    // 0x1eb4e8: 0x40f809  jalr        $v0
label_1eb4ec:
    if (ctx->pc == 0x1EB4ECu) {
        ctx->pc = 0x1EB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4E8u;
        // 0x1eb4ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4F0u;
        goto label_1eb4f0;
    }
    ctx->pc = 0x1EB4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB4F0u);
        ctx->pc = 0x1EB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4E8u;
        // 0x1eb4ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB4E8u, 0x1EB4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB4F0u;
label_1eb4f0:
    // 0x1eb4f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1eb4f4:
    if (ctx->pc == 0x1EB4F4u) {
        ctx->pc = 0x1EB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4F0u;
        // 0x1eb4f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4F8u;
        goto label_1eb4f8;
    }
    ctx->pc = 0x1EB4F0u;
    {
        const bool branch_taken_0x1eb4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4F0u;
        // 0x1eb4f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4f0) {
            ctx->pc = 0x1EB504u;
            goto label_1eb504;
        }
    }
    ctx->pc = 0x1EB4F8u;
label_1eb4f8:
    // 0x1eb4f8: 0xc073a9c  jal         func_1CEA70
label_1eb4fc:
    if (ctx->pc == 0x1EB4FCu) {
        ctx->pc = 0x1EB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4F8u;
        // 0x1eb4fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB500u;
        goto label_1eb500;
    }
    ctx->pc = 0x1EB4F8u;
    SET_GPR_U32(ctx, 31, 0x1EB500u);
    ctx->pc = 0x1EB4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB4F8u;
    // 0x1eb4fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1EB4F8u, 0x1EB500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB500u;
label_1eb500:
    // 0x1eb500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eb500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb504:
    // 0x1eb504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eb504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb508:
    // 0x1eb508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb50c:
    // 0x1eb50c: 0xc073ad0  jal         func_1CEB40
label_1eb510:
    if (ctx->pc == 0x1EB510u) {
        ctx->pc = 0x1EB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB50Cu;
        // 0x1eb510: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB514u;
        goto label_1eb514;
    }
    ctx->pc = 0x1EB50Cu;
    SET_GPR_U32(ctx, 31, 0x1EB514u);
    ctx->pc = 0x1EB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB50Cu;
    // 0x1eb510: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1EB50Cu, 0x1EB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB514u;
label_1eb514:
    // 0x1eb514: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x1eb514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_1eb518:
    // 0x1eb518: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1eb518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1eb51c:
    // 0x1eb51c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1eb51cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1eb520:
    // 0x1eb520: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1eb520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1eb524:
    // 0x1eb524: 0xc05e602  jal         func_179808
label_1eb528:
    if (ctx->pc == 0x1EB528u) {
        ctx->pc = 0x1EB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB524u;
        // 0x1eb528: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB52Cu;
        goto label_1eb52c;
    }
    ctx->pc = 0x1EB524u;
    SET_GPR_U32(ctx, 31, 0x1EB52Cu);
    ctx->pc = 0x1EB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB524u;
    // 0x1eb528: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1EB524u, 0x1EB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB52Cu;
label_1eb52c:
    // 0x1eb52c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1eb52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb530:
    // 0x1eb530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb534:
    // 0x1eb534: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1eb534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb538:
    // 0x1eb538: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1eb538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1eb53c:
    // 0x1eb53c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1eb53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1eb540:
    // 0x1eb540: 0xc07aaf0  jal         func_1EABC0
label_1eb544:
    if (ctx->pc == 0x1EB544u) {
        ctx->pc = 0x1EB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB540u;
        // 0x1eb544: 0xe600ee48  swc1        $f0, -0x11B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962760), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB548u;
        goto label_1eb548;
    }
    ctx->pc = 0x1EB540u;
    SET_GPR_U32(ctx, 31, 0x1EB548u);
    ctx->pc = 0x1EB544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB540u;
    // 0x1eb544: 0xe600ee48  swc1        $f0, -0x11B8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962760), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EABC0u, 0x1EB540u, 0x1EB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB548u;
label_1eb548:
    // 0x1eb548: 0x8e4500bc  lw          $a1, 0xBC($s2)
    ctx->pc = 0x1eb548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_1eb54c:
    // 0x1eb54c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb550:
    // 0x1eb550: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1eb550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1eb554:
    // 0x1eb554: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1eb558:
    // 0x1eb558: 0x60f809  jalr        $v1
label_1eb55c:
    if (ctx->pc == 0x1EB55Cu) {
        ctx->pc = 0x1EB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB558u;
        // 0x1eb55c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB560u;
        goto label_1eb560;
    }
    ctx->pc = 0x1EB558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB560u);
        ctx->pc = 0x1EB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB558u;
        // 0x1eb55c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB558u, 0x1EB560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB560u;
label_1eb560:
    // 0x1eb560: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x1eb560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1eb564:
    // 0x1eb564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb568:
    // 0x1eb568: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1eb568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1eb56c:
    // 0x1eb56c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1eb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1eb570:
    // 0x1eb570: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1eb570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb574:
    // 0x1eb574: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1eb574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1eb578:
    // 0x1eb578: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_1eb57c:
    if (ctx->pc == 0x1EB57Cu) {
        ctx->pc = 0x1EB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB578u;
        // 0x1eb57c: 0x8e4500bc  lw          $a1, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB580u;
        goto label_1eb580;
    }
    ctx->pc = 0x1EB578u;
    {
        const bool branch_taken_0x1eb578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1eb578) {
            ctx->pc = 0x1EB57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB578u;
            // 0x1eb57c: 0x8e4500bc  lw          $a1, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB588u;
            goto label_1eb588;
        }
    }
    ctx->pc = 0x1EB580u;
label_1eb580:
    // 0x1eb580: 0x1000000a  b           . + 4 + (0xA << 2)
label_1eb584:
    if (ctx->pc == 0x1EB584u) {
        ctx->pc = 0x1EB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB580u;
        // 0x1eb584: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB588u;
        goto label_1eb588;
    }
    ctx->pc = 0x1EB580u;
    {
        const bool branch_taken_0x1eb580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB580u;
        // 0x1eb584: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb580) {
            ctx->pc = 0x1EB5ACu;
            goto label_1eb5ac;
        }
    }
    ctx->pc = 0x1EB588u;
label_1eb588:
    // 0x1eb588: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb58c:
    // 0x1eb58c: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_1eb590:
    // 0x1eb590: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x1eb590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1eb594:
    // 0x1eb594: 0x40f809  jalr        $v0
label_1eb598:
    if (ctx->pc == 0x1EB598u) {
        ctx->pc = 0x1EB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB594u;
        // 0x1eb598: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB59Cu;
        goto label_1eb59c;
    }
    ctx->pc = 0x1EB594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB59Cu);
        ctx->pc = 0x1EB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB594u;
        // 0x1eb598: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB594u, 0x1EB59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB59Cu;
label_1eb59c:
    // 0x1eb59c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1eb59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1eb5a0:
    // 0x1eb5a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1eb5a4:
    if (ctx->pc == 0x1EB5A4u) {
        ctx->pc = 0x1EB5A8u;
        goto label_1eb5a8;
    }
    ctx->pc = 0x1EB5A0u;
    {
        const bool branch_taken_0x1eb5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb5a0) {
            ctx->pc = 0x1EB5C8u;
            goto label_1eb5c8;
        }
    }
    ctx->pc = 0x1EB5A8u;
label_1eb5a8:
    // 0x1eb5a8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1eb5ac:
    // 0x1eb5ac: 0xc067b9c  jal         func_19EE70
label_1eb5b0:
    if (ctx->pc == 0x1EB5B0u) {
        ctx->pc = 0x1EB5B4u;
        goto label_1eb5b4;
    }
    ctx->pc = 0x1EB5ACu;
    SET_GPR_U32(ctx, 31, 0x1EB5B4u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EB5ACu, 0x1EB5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB5B4u;
label_1eb5b4:
    // 0x1eb5b4: 0x8e4400c0  lw          $a0, 0xC0($s2)
    ctx->pc = 0x1eb5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_1eb5b8:
    // 0x1eb5b8: 0xc073b0a  jal         func_1CEC28
label_1eb5bc:
    if (ctx->pc == 0x1EB5BCu) {
        ctx->pc = 0x1EB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5B8u;
        // 0x1eb5bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB5C0u;
        goto label_1eb5c0;
    }
    ctx->pc = 0x1EB5B8u;
    SET_GPR_U32(ctx, 31, 0x1EB5C0u);
    ctx->pc = 0x1EB5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB5B8u;
    // 0x1eb5bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1EB5B8u, 0x1EB5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB5C0u;
label_1eb5c0:
    // 0x1eb5c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb5c4:
    if (ctx->pc == 0x1EB5C4u) {
        ctx->pc = 0x1EB5C8u;
        goto label_1eb5c8;
    }
    ctx->pc = 0x1EB5C0u;
    {
        const bool branch_taken_0x1eb5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb5c0) {
            ctx->pc = 0x1EB5DCu;
            goto label_1eb5dc;
        }
    }
    ctx->pc = 0x1EB5C8u;
label_1eb5c8:
    // 0x1eb5c8: 0xc067b9c  jal         func_19EE70
label_1eb5cc:
    if (ctx->pc == 0x1EB5CCu) {
        ctx->pc = 0x1EB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5C8u;
        // 0x1eb5cc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB5D0u;
        goto label_1eb5d0;
    }
    ctx->pc = 0x1EB5C8u;
    SET_GPR_U32(ctx, 31, 0x1EB5D0u);
    ctx->pc = 0x1EB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB5C8u;
    // 0x1eb5cc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EB5C8u, 0x1EB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB5D0u;
label_1eb5d0:
    // 0x1eb5d0: 0x8e4400c0  lw          $a0, 0xC0($s2)
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_1eb5d4:
    // 0x1eb5d4: 0xc073b0a  jal         func_1CEC28
label_1eb5d8:
    if (ctx->pc == 0x1EB5D8u) {
        ctx->pc = 0x1EB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5D4u;
        // 0x1eb5d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB5DCu;
        goto label_1eb5dc;
    }
    ctx->pc = 0x1EB5D4u;
    SET_GPR_U32(ctx, 31, 0x1EB5DCu);
    ctx->pc = 0x1EB5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB5D4u;
    // 0x1eb5d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1EB5D4u, 0x1EB5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB5DCu;
label_1eb5dc:
    // 0x1eb5dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1eb5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1eb5e0:
    // 0x1eb5e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eb5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eb5e4:
    // 0x1eb5e4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1eb5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1eb5e8:
    // 0x1eb5e8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1eb5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1eb5ec:
    // 0x1eb5ec: 0x24546dc0  addiu       $s4, $v0, 0x6DC0
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28096));
label_1eb5f0:
    // 0x1eb5f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1eb5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1eb5f4:
    // 0x1eb5f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eb5f8:
    // 0x1eb5f8: 0x8ecc27e4  lw          $t4, 0x27E4($s6)
    ctx->pc = 0x1eb5f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_1eb5fc:
    // 0x1eb5fc: 0x26b06ce8  addiu       $s0, $s5, 0x6CE8
    ctx->pc = 0x1eb5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 27880));
label_1eb600:
    // 0x1eb600: 0xc440f380  lwc1        $f0, -0xC80($v0)
    ctx->pc = 0x1eb600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb604:
    // 0x1eb604: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1eb604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb608:
    // 0x1eb608: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1eb608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1eb60c:
    // 0x1eb60c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eb60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eb610:
    // 0x1eb610: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1eb610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1eb614:
    // 0x1eb614: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1eb614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb618:
    // 0x1eb618: 0x24090165  addiu       $t1, $zero, 0x165
    ctx->pc = 0x1eb618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
label_1eb61c:
    // 0x1eb61c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eb61cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb620:
    // 0x1eb620: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1eb620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1eb624:
    // 0x1eb624: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb624u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb628:
    // 0x1eb628: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eb628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eb62c:
    // 0x1eb62c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eb630:
    // 0x1eb630: 0x40f809  jalr        $v0
label_1eb634:
    if (ctx->pc == 0x1EB634u) {
        ctx->pc = 0x1EB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB630u;
        // 0x1eb634: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB638u;
        goto label_1eb638;
    }
    ctx->pc = 0x1EB630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB638u);
        ctx->pc = 0x1EB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB630u;
        // 0x1eb634: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB630u, 0x1EB638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB638u;
label_1eb638:
    // 0x1eb638: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1eb63c:
    if (ctx->pc == 0x1EB63Cu) {
        ctx->pc = 0x1EB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB638u;
        // 0x1eb63c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB640u;
        goto label_1eb640;
    }
    ctx->pc = 0x1EB638u;
    {
        const bool branch_taken_0x1eb638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb638) {
            ctx->pc = 0x1EB63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB638u;
            // 0x1eb63c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB64Cu;
            goto label_1eb64c;
        }
    }
    ctx->pc = 0x1EB640u;
label_1eb640:
    // 0x1eb640: 0xc0686fe  jal         func_1A1BF8
label_1eb644:
    if (ctx->pc == 0x1EB644u) {
        ctx->pc = 0x1EB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB640u;
        // 0x1eb644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB648u;
        goto label_1eb648;
    }
    ctx->pc = 0x1EB640u;
    SET_GPR_U32(ctx, 31, 0x1EB648u);
    ctx->pc = 0x1EB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB640u;
    // 0x1eb644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EB640u, 0x1EB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB648u;
label_1eb648:
    // 0x1eb648: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x1eb648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_1eb64c:
    // 0x1eb64c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1eb64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb650:
    // 0x1eb650: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x1eb650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1eb654:
    // 0x1eb654: 0x8fd3d310  lw          $s3, -0x2CF0($fp)
    ctx->pc = 0x1eb654u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294955792)));
label_1eb658:
    // 0x1eb658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eb658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eb65c:
    // 0x1eb65c: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1eb65cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1eb660:
    // 0x1eb660: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1eb660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1eb664:
    // 0x1eb664: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1eb664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1eb668:
    // 0x1eb668: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1eb668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1eb66c:
    // 0x1eb66c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1eb66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb670:
    // 0x1eb670: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1eb670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1eb674:
    // 0x1eb674: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1eb674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb678:
    // 0x1eb678: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1eb678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1eb67c:
    // 0x1eb67c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb680:
    // 0x1eb680: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1eb680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_1eb684:
    // 0x1eb684: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1eb684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eb688:
    // 0x1eb688: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1eb688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
label_1eb68c:
    // 0x1eb68c: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1eb68cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1eb690:
    // 0x1eb690: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb690u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb694:
    // 0x1eb694: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1eb694u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1eb698:
    // 0x1eb698: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1eb698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1eb69c:
    // 0x1eb69c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1eb69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1eb6a0:
    // 0x1eb6a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1eb6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1eb6a4:
    // 0x1eb6a4: 0x8e4a0090  lw          $t2, 0x90($s2)
    ctx->pc = 0x1eb6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1eb6a8:
    // 0x1eb6a8: 0x40f809  jalr        $v0
label_1eb6ac:
    if (ctx->pc == 0x1EB6ACu) {
        ctx->pc = 0x1EB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6A8u;
        // 0x1eb6ac: 0xc46cf37c  lwc1        $f12, -0xC84($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6B0u;
        goto label_1eb6b0;
    }
    ctx->pc = 0x1EB6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB6B0u);
        ctx->pc = 0x1EB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6A8u;
        // 0x1eb6ac: 0xc46cf37c  lwc1        $f12, -0xC84($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB6A8u, 0x1EB6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB6B0u;
label_1eb6b0:
    // 0x1eb6b0: 0x8e4600b0  lw          $a2, 0xB0($s2)
    ctx->pc = 0x1eb6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1eb6b4:
    // 0x1eb6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb6b8:
    // 0x1eb6b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1eb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1eb6bc:
    // 0x1eb6bc: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1eb6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1eb6c0:
    // 0x1eb6c0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1eb6c4:
    // 0x1eb6c4: 0x60f809  jalr        $v1
label_1eb6c8:
    if (ctx->pc == 0x1EB6C8u) {
        ctx->pc = 0x1EB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6C4u;
        // 0x1eb6c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6CCu;
        goto label_1eb6cc;
    }
    ctx->pc = 0x1EB6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB6CCu);
        ctx->pc = 0x1EB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6C4u;
        // 0x1eb6c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB6C4u, 0x1EB6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB6CCu;
label_1eb6cc:
    // 0x1eb6cc: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x1eb6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1eb6d0:
    // 0x1eb6d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eb6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1eb6d4:
    // 0x1eb6d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb6d8:
    // 0x1eb6d8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1eb6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1eb6dc:
    // 0x1eb6dc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1eb6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1eb6e0:
    // 0x1eb6e0: 0x60f809  jalr        $v1
label_1eb6e4:
    if (ctx->pc == 0x1EB6E4u) {
        ctx->pc = 0x1EB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6E0u;
        // 0x1eb6e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6E8u;
        goto label_1eb6e8;
    }
    ctx->pc = 0x1EB6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB6E8u);
        ctx->pc = 0x1EB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6E0u;
        // 0x1eb6e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB6E0u, 0x1EB6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB6E8u;
label_1eb6e8:
    // 0x1eb6e8: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1eb6ec:
    // 0x1eb6ec: 0x8ecc27e4  lw          $t4, 0x27E4($s6)
    ctx->pc = 0x1eb6ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_1eb6f0:
    // 0x1eb6f0: 0xc500f384  lwc1        $f0, -0xC7C($t0)
    ctx->pc = 0x1eb6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb6f4:
    // 0x1eb6f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1eb6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb6f8:
    // 0x1eb6f8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1eb6f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb6fc:
    // 0x1eb6fc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1eb6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1eb700:
    // 0x1eb700: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1eb700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1eb704:
    // 0x1eb704: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eb704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eb708:
    // 0x1eb708: 0x2409016b  addiu       $t1, $zero, 0x16B
    ctx->pc = 0x1eb708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 363));
label_1eb70c:
    // 0x1eb70c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eb70cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb710:
    // 0x1eb710: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1eb710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1eb714:
    // 0x1eb714: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb714u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb718:
    // 0x1eb718: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1eb71c:
    // 0x1eb71c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1eb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1eb720:
    // 0x1eb720: 0x40f809  jalr        $v0
label_1eb724:
    if (ctx->pc == 0x1EB724u) {
        ctx->pc = 0x1EB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB720u;
        // 0x1eb724: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB728u;
        goto label_1eb728;
    }
    ctx->pc = 0x1EB720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB728u);
        ctx->pc = 0x1EB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB720u;
        // 0x1eb724: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB720u, 0x1EB728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB728u;
label_1eb728:
    // 0x1eb728: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1eb72c:
    if (ctx->pc == 0x1EB72Cu) {
        ctx->pc = 0x1EB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB728u;
        // 0x1eb72c: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB730u;
        goto label_1eb730;
    }
    ctx->pc = 0x1EB728u;
    {
        const bool branch_taken_0x1eb728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb728) {
            ctx->pc = 0x1EB72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB728u;
            // 0x1eb72c: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB73Cu;
            goto label_1eb73c;
        }
    }
    ctx->pc = 0x1EB730u;
label_1eb730:
    // 0x1eb730: 0xc0686fe  jal         func_1A1BF8
label_1eb734:
    if (ctx->pc == 0x1EB734u) {
        ctx->pc = 0x1EB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB730u;
        // 0x1eb734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB738u;
        goto label_1eb738;
    }
    ctx->pc = 0x1EB730u;
    SET_GPR_U32(ctx, 31, 0x1EB738u);
    ctx->pc = 0x1EB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB730u;
    // 0x1eb734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EB730u, 0x1EB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB738u;
label_1eb738:
    // 0x1eb738: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x1eb738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_1eb73c:
    // 0x1eb73c: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1eb73cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1eb740:
    // 0x1eb740: 0x8e4a0090  lw          $t2, 0x90($s2)
    ctx->pc = 0x1eb740u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1eb744:
    // 0x1eb744: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1eb744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb748:
    // 0x1eb748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eb748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eb74c:
    // 0x1eb74c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1eb74cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1eb750:
    // 0x1eb750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb754:
    // 0x1eb754: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb758:
    // 0x1eb758: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1eb758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1eb75c:
    // 0x1eb75c: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1eb75cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1eb760:
    // 0x1eb760: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1eb760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
label_1eb764:
    // 0x1eb764: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb768:
    // 0x1eb768: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1eb768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1eb76c:
    // 0x1eb76c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1eb76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eb770:
    // 0x1eb770: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1eb770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_1eb774:
    // 0x1eb774: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1eb774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1eb778:
    // 0x1eb778: 0xc44cf37c  lwc1        $f12, -0xC84($v0)
    ctx->pc = 0x1eb778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1eb77c:
    // 0x1eb77c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1eb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1eb780:
    // 0x1eb780: 0x40f809  jalr        $v0
label_1eb784:
    if (ctx->pc == 0x1EB784u) {
        ctx->pc = 0x1EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB780u;
        // 0x1eb784: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB788u;
        goto label_1eb788;
    }
    ctx->pc = 0x1EB780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB788u);
        ctx->pc = 0x1EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB780u;
        // 0x1eb784: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB780u, 0x1EB788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB788u;
label_1eb788:
    // 0x1eb788: 0x8e4600b4  lw          $a2, 0xB4($s2)
    ctx->pc = 0x1eb788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_1eb78c:
    // 0x1eb78c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb790:
    // 0x1eb790: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1eb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1eb794:
    // 0x1eb794: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1eb794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1eb798:
    // 0x1eb798: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1eb798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1eb79c:
    // 0x1eb79c: 0x60f809  jalr        $v1
label_1eb7a0:
    if (ctx->pc == 0x1EB7A0u) {
        ctx->pc = 0x1EB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB79Cu;
        // 0x1eb7a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB7A4u;
        goto label_1eb7a4;
    }
    ctx->pc = 0x1EB79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB7A4u);
        ctx->pc = 0x1EB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB79Cu;
        // 0x1eb7a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB79Cu, 0x1EB7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB7A4u;
label_1eb7a4:
    // 0x1eb7a4: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x1eb7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_1eb7a8:
    // 0x1eb7a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1eb7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1eb7ac:
    // 0x1eb7ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1eb7acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1eb7b0:
    // 0x1eb7b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1eb7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1eb7b4:
    // 0x1eb7b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb7b8:
    // 0x1eb7b8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1eb7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1eb7bc:
    // 0x1eb7bc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1eb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1eb7c0:
    // 0x1eb7c0: 0x60f809  jalr        $v1
label_1eb7c4:
    if (ctx->pc == 0x1EB7C4u) {
        ctx->pc = 0x1EB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7C0u;
        // 0x1eb7c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB7C8u;
        goto label_1eb7c8;
    }
    ctx->pc = 0x1EB7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB7C8u);
        ctx->pc = 0x1EB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7C0u;
        // 0x1eb7c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB7C0u, 0x1EB7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB7C8u;
label_1eb7c8:
    // 0x1eb7c8: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x1eb7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_1eb7cc:
    // 0x1eb7cc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1eb7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1eb7d0:
    // 0x1eb7d0: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x1eb7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_1eb7d4:
    // 0x1eb7d4: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x1eb7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
label_1eb7d8:
    // 0x1eb7d8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1eb7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1eb7dc:
    // 0x1eb7dc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1eb7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1eb7e0:
    // 0x1eb7e0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1eb7e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1eb7e4:
    // 0x1eb7e4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1eb7e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1eb7e8:
    // 0x1eb7e8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1eb7e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1eb7ec:
    // 0x1eb7ec: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1eb7ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1eb7f0:
    // 0x1eb7f0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1eb7f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1eb7f4:
    // 0x1eb7f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1eb7f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1eb7f8:
    // 0x1eb7f8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1eb7f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1eb7fc:
    // 0x1eb7fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1eb7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1eb800:
    // 0x1eb800: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1eb800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1eb804:
    // 0x1eb804: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1eb804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1eb808:
    // 0x1eb808: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1eb808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eb80c:
    // 0x1eb80c: 0x3e00008  jr          $ra
label_1eb810:
    if (ctx->pc == 0x1EB810u) {
        ctx->pc = 0x1EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB80Cu;
        // 0x1eb810: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB814u;
        goto label_1eb814;
    }
    ctx->pc = 0x1EB80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB80Cu;
        // 0x1eb810: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB814u;
label_1eb814:
    // 0x1eb814: 0x0  nop
    ctx->pc = 0x1eb814u;
    // NOP
    ctx->pc = 0x1eb818u;
}
