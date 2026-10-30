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

// Function: sub_0013D010
// Address: 0x13d010 - 0x13d6b0
void sub_0013D010_0x13d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D010_0x13d010");
#endif

    switch (ctx->pc) {
        case 0x13d010u: goto label_13d010;
        case 0x13d014u: goto label_13d014;
        case 0x13d018u: goto label_13d018;
        case 0x13d01cu: goto label_13d01c;
        case 0x13d020u: goto label_13d020;
        case 0x13d024u: goto label_13d024;
        case 0x13d028u: goto label_13d028;
        case 0x13d02cu: goto label_13d02c;
        case 0x13d030u: goto label_13d030;
        case 0x13d034u: goto label_13d034;
        case 0x13d038u: goto label_13d038;
        case 0x13d03cu: goto label_13d03c;
        case 0x13d040u: goto label_13d040;
        case 0x13d044u: goto label_13d044;
        case 0x13d048u: goto label_13d048;
        case 0x13d04cu: goto label_13d04c;
        case 0x13d050u: goto label_13d050;
        case 0x13d054u: goto label_13d054;
        case 0x13d058u: goto label_13d058;
        case 0x13d05cu: goto label_13d05c;
        case 0x13d060u: goto label_13d060;
        case 0x13d064u: goto label_13d064;
        case 0x13d068u: goto label_13d068;
        case 0x13d06cu: goto label_13d06c;
        case 0x13d070u: goto label_13d070;
        case 0x13d074u: goto label_13d074;
        case 0x13d078u: goto label_13d078;
        case 0x13d07cu: goto label_13d07c;
        case 0x13d080u: goto label_13d080;
        case 0x13d084u: goto label_13d084;
        case 0x13d088u: goto label_13d088;
        case 0x13d08cu: goto label_13d08c;
        case 0x13d090u: goto label_13d090;
        case 0x13d094u: goto label_13d094;
        case 0x13d098u: goto label_13d098;
        case 0x13d09cu: goto label_13d09c;
        case 0x13d0a0u: goto label_13d0a0;
        case 0x13d0a4u: goto label_13d0a4;
        case 0x13d0a8u: goto label_13d0a8;
        case 0x13d0acu: goto label_13d0ac;
        case 0x13d0b0u: goto label_13d0b0;
        case 0x13d0b4u: goto label_13d0b4;
        case 0x13d0b8u: goto label_13d0b8;
        case 0x13d0bcu: goto label_13d0bc;
        case 0x13d0c0u: goto label_13d0c0;
        case 0x13d0c4u: goto label_13d0c4;
        case 0x13d0c8u: goto label_13d0c8;
        case 0x13d0ccu: goto label_13d0cc;
        case 0x13d0d0u: goto label_13d0d0;
        case 0x13d0d4u: goto label_13d0d4;
        case 0x13d0d8u: goto label_13d0d8;
        case 0x13d0dcu: goto label_13d0dc;
        case 0x13d0e0u: goto label_13d0e0;
        case 0x13d0e4u: goto label_13d0e4;
        case 0x13d0e8u: goto label_13d0e8;
        case 0x13d0ecu: goto label_13d0ec;
        case 0x13d0f0u: goto label_13d0f0;
        case 0x13d0f4u: goto label_13d0f4;
        case 0x13d0f8u: goto label_13d0f8;
        case 0x13d0fcu: goto label_13d0fc;
        case 0x13d100u: goto label_13d100;
        case 0x13d104u: goto label_13d104;
        case 0x13d108u: goto label_13d108;
        case 0x13d10cu: goto label_13d10c;
        case 0x13d110u: goto label_13d110;
        case 0x13d114u: goto label_13d114;
        case 0x13d118u: goto label_13d118;
        case 0x13d11cu: goto label_13d11c;
        case 0x13d120u: goto label_13d120;
        case 0x13d124u: goto label_13d124;
        case 0x13d128u: goto label_13d128;
        case 0x13d12cu: goto label_13d12c;
        case 0x13d130u: goto label_13d130;
        case 0x13d134u: goto label_13d134;
        case 0x13d138u: goto label_13d138;
        case 0x13d13cu: goto label_13d13c;
        case 0x13d140u: goto label_13d140;
        case 0x13d144u: goto label_13d144;
        case 0x13d148u: goto label_13d148;
        case 0x13d14cu: goto label_13d14c;
        case 0x13d150u: goto label_13d150;
        case 0x13d154u: goto label_13d154;
        case 0x13d158u: goto label_13d158;
        case 0x13d15cu: goto label_13d15c;
        case 0x13d160u: goto label_13d160;
        case 0x13d164u: goto label_13d164;
        case 0x13d168u: goto label_13d168;
        case 0x13d16cu: goto label_13d16c;
        case 0x13d170u: goto label_13d170;
        case 0x13d174u: goto label_13d174;
        case 0x13d178u: goto label_13d178;
        case 0x13d17cu: goto label_13d17c;
        case 0x13d180u: goto label_13d180;
        case 0x13d184u: goto label_13d184;
        case 0x13d188u: goto label_13d188;
        case 0x13d18cu: goto label_13d18c;
        case 0x13d190u: goto label_13d190;
        case 0x13d194u: goto label_13d194;
        case 0x13d198u: goto label_13d198;
        case 0x13d19cu: goto label_13d19c;
        case 0x13d1a0u: goto label_13d1a0;
        case 0x13d1a4u: goto label_13d1a4;
        case 0x13d1a8u: goto label_13d1a8;
        case 0x13d1acu: goto label_13d1ac;
        case 0x13d1b0u: goto label_13d1b0;
        case 0x13d1b4u: goto label_13d1b4;
        case 0x13d1b8u: goto label_13d1b8;
        case 0x13d1bcu: goto label_13d1bc;
        case 0x13d1c0u: goto label_13d1c0;
        case 0x13d1c4u: goto label_13d1c4;
        case 0x13d1c8u: goto label_13d1c8;
        case 0x13d1ccu: goto label_13d1cc;
        case 0x13d1d0u: goto label_13d1d0;
        case 0x13d1d4u: goto label_13d1d4;
        case 0x13d1d8u: goto label_13d1d8;
        case 0x13d1dcu: goto label_13d1dc;
        case 0x13d1e0u: goto label_13d1e0;
        case 0x13d1e4u: goto label_13d1e4;
        case 0x13d1e8u: goto label_13d1e8;
        case 0x13d1ecu: goto label_13d1ec;
        case 0x13d1f0u: goto label_13d1f0;
        case 0x13d1f4u: goto label_13d1f4;
        case 0x13d1f8u: goto label_13d1f8;
        case 0x13d1fcu: goto label_13d1fc;
        case 0x13d200u: goto label_13d200;
        case 0x13d204u: goto label_13d204;
        case 0x13d208u: goto label_13d208;
        case 0x13d20cu: goto label_13d20c;
        case 0x13d210u: goto label_13d210;
        case 0x13d214u: goto label_13d214;
        case 0x13d218u: goto label_13d218;
        case 0x13d21cu: goto label_13d21c;
        case 0x13d220u: goto label_13d220;
        case 0x13d224u: goto label_13d224;
        case 0x13d228u: goto label_13d228;
        case 0x13d22cu: goto label_13d22c;
        case 0x13d230u: goto label_13d230;
        case 0x13d234u: goto label_13d234;
        case 0x13d238u: goto label_13d238;
        case 0x13d23cu: goto label_13d23c;
        case 0x13d240u: goto label_13d240;
        case 0x13d244u: goto label_13d244;
        case 0x13d248u: goto label_13d248;
        case 0x13d24cu: goto label_13d24c;
        case 0x13d250u: goto label_13d250;
        case 0x13d254u: goto label_13d254;
        case 0x13d258u: goto label_13d258;
        case 0x13d25cu: goto label_13d25c;
        case 0x13d260u: goto label_13d260;
        case 0x13d264u: goto label_13d264;
        case 0x13d268u: goto label_13d268;
        case 0x13d26cu: goto label_13d26c;
        case 0x13d270u: goto label_13d270;
        case 0x13d274u: goto label_13d274;
        case 0x13d278u: goto label_13d278;
        case 0x13d27cu: goto label_13d27c;
        case 0x13d280u: goto label_13d280;
        case 0x13d284u: goto label_13d284;
        case 0x13d288u: goto label_13d288;
        case 0x13d28cu: goto label_13d28c;
        case 0x13d290u: goto label_13d290;
        case 0x13d294u: goto label_13d294;
        case 0x13d298u: goto label_13d298;
        case 0x13d29cu: goto label_13d29c;
        case 0x13d2a0u: goto label_13d2a0;
        case 0x13d2a4u: goto label_13d2a4;
        case 0x13d2a8u: goto label_13d2a8;
        case 0x13d2acu: goto label_13d2ac;
        case 0x13d2b0u: goto label_13d2b0;
        case 0x13d2b4u: goto label_13d2b4;
        case 0x13d2b8u: goto label_13d2b8;
        case 0x13d2bcu: goto label_13d2bc;
        case 0x13d2c0u: goto label_13d2c0;
        case 0x13d2c4u: goto label_13d2c4;
        case 0x13d2c8u: goto label_13d2c8;
        case 0x13d2ccu: goto label_13d2cc;
        case 0x13d2d0u: goto label_13d2d0;
        case 0x13d2d4u: goto label_13d2d4;
        case 0x13d2d8u: goto label_13d2d8;
        case 0x13d2dcu: goto label_13d2dc;
        case 0x13d2e0u: goto label_13d2e0;
        case 0x13d2e4u: goto label_13d2e4;
        case 0x13d2e8u: goto label_13d2e8;
        case 0x13d2ecu: goto label_13d2ec;
        case 0x13d2f0u: goto label_13d2f0;
        case 0x13d2f4u: goto label_13d2f4;
        case 0x13d2f8u: goto label_13d2f8;
        case 0x13d2fcu: goto label_13d2fc;
        case 0x13d300u: goto label_13d300;
        case 0x13d304u: goto label_13d304;
        case 0x13d308u: goto label_13d308;
        case 0x13d30cu: goto label_13d30c;
        case 0x13d310u: goto label_13d310;
        case 0x13d314u: goto label_13d314;
        case 0x13d318u: goto label_13d318;
        case 0x13d31cu: goto label_13d31c;
        case 0x13d320u: goto label_13d320;
        case 0x13d324u: goto label_13d324;
        case 0x13d328u: goto label_13d328;
        case 0x13d32cu: goto label_13d32c;
        case 0x13d330u: goto label_13d330;
        case 0x13d334u: goto label_13d334;
        case 0x13d338u: goto label_13d338;
        case 0x13d33cu: goto label_13d33c;
        case 0x13d340u: goto label_13d340;
        case 0x13d344u: goto label_13d344;
        case 0x13d348u: goto label_13d348;
        case 0x13d34cu: goto label_13d34c;
        case 0x13d350u: goto label_13d350;
        case 0x13d354u: goto label_13d354;
        case 0x13d358u: goto label_13d358;
        case 0x13d35cu: goto label_13d35c;
        case 0x13d360u: goto label_13d360;
        case 0x13d364u: goto label_13d364;
        case 0x13d368u: goto label_13d368;
        case 0x13d36cu: goto label_13d36c;
        case 0x13d370u: goto label_13d370;
        case 0x13d374u: goto label_13d374;
        case 0x13d378u: goto label_13d378;
        case 0x13d37cu: goto label_13d37c;
        case 0x13d380u: goto label_13d380;
        case 0x13d384u: goto label_13d384;
        case 0x13d388u: goto label_13d388;
        case 0x13d38cu: goto label_13d38c;
        case 0x13d390u: goto label_13d390;
        case 0x13d394u: goto label_13d394;
        case 0x13d398u: goto label_13d398;
        case 0x13d39cu: goto label_13d39c;
        case 0x13d3a0u: goto label_13d3a0;
        case 0x13d3a4u: goto label_13d3a4;
        case 0x13d3a8u: goto label_13d3a8;
        case 0x13d3acu: goto label_13d3ac;
        case 0x13d3b0u: goto label_13d3b0;
        case 0x13d3b4u: goto label_13d3b4;
        case 0x13d3b8u: goto label_13d3b8;
        case 0x13d3bcu: goto label_13d3bc;
        case 0x13d3c0u: goto label_13d3c0;
        case 0x13d3c4u: goto label_13d3c4;
        case 0x13d3c8u: goto label_13d3c8;
        case 0x13d3ccu: goto label_13d3cc;
        case 0x13d3d0u: goto label_13d3d0;
        case 0x13d3d4u: goto label_13d3d4;
        case 0x13d3d8u: goto label_13d3d8;
        case 0x13d3dcu: goto label_13d3dc;
        case 0x13d3e0u: goto label_13d3e0;
        case 0x13d3e4u: goto label_13d3e4;
        case 0x13d3e8u: goto label_13d3e8;
        case 0x13d3ecu: goto label_13d3ec;
        case 0x13d3f0u: goto label_13d3f0;
        case 0x13d3f4u: goto label_13d3f4;
        case 0x13d3f8u: goto label_13d3f8;
        case 0x13d3fcu: goto label_13d3fc;
        case 0x13d400u: goto label_13d400;
        case 0x13d404u: goto label_13d404;
        case 0x13d408u: goto label_13d408;
        case 0x13d40cu: goto label_13d40c;
        case 0x13d410u: goto label_13d410;
        case 0x13d414u: goto label_13d414;
        case 0x13d418u: goto label_13d418;
        case 0x13d41cu: goto label_13d41c;
        case 0x13d420u: goto label_13d420;
        case 0x13d424u: goto label_13d424;
        case 0x13d428u: goto label_13d428;
        case 0x13d42cu: goto label_13d42c;
        case 0x13d430u: goto label_13d430;
        case 0x13d434u: goto label_13d434;
        case 0x13d438u: goto label_13d438;
        case 0x13d43cu: goto label_13d43c;
        case 0x13d440u: goto label_13d440;
        case 0x13d444u: goto label_13d444;
        case 0x13d448u: goto label_13d448;
        case 0x13d44cu: goto label_13d44c;
        case 0x13d450u: goto label_13d450;
        case 0x13d454u: goto label_13d454;
        case 0x13d458u: goto label_13d458;
        case 0x13d45cu: goto label_13d45c;
        case 0x13d460u: goto label_13d460;
        case 0x13d464u: goto label_13d464;
        case 0x13d468u: goto label_13d468;
        case 0x13d46cu: goto label_13d46c;
        case 0x13d470u: goto label_13d470;
        case 0x13d474u: goto label_13d474;
        case 0x13d478u: goto label_13d478;
        case 0x13d47cu: goto label_13d47c;
        case 0x13d480u: goto label_13d480;
        case 0x13d484u: goto label_13d484;
        case 0x13d488u: goto label_13d488;
        case 0x13d48cu: goto label_13d48c;
        case 0x13d490u: goto label_13d490;
        case 0x13d494u: goto label_13d494;
        case 0x13d498u: goto label_13d498;
        case 0x13d49cu: goto label_13d49c;
        case 0x13d4a0u: goto label_13d4a0;
        case 0x13d4a4u: goto label_13d4a4;
        case 0x13d4a8u: goto label_13d4a8;
        case 0x13d4acu: goto label_13d4ac;
        case 0x13d4b0u: goto label_13d4b0;
        case 0x13d4b4u: goto label_13d4b4;
        case 0x13d4b8u: goto label_13d4b8;
        case 0x13d4bcu: goto label_13d4bc;
        case 0x13d4c0u: goto label_13d4c0;
        case 0x13d4c4u: goto label_13d4c4;
        case 0x13d4c8u: goto label_13d4c8;
        case 0x13d4ccu: goto label_13d4cc;
        case 0x13d4d0u: goto label_13d4d0;
        case 0x13d4d4u: goto label_13d4d4;
        case 0x13d4d8u: goto label_13d4d8;
        case 0x13d4dcu: goto label_13d4dc;
        case 0x13d4e0u: goto label_13d4e0;
        case 0x13d4e4u: goto label_13d4e4;
        case 0x13d4e8u: goto label_13d4e8;
        case 0x13d4ecu: goto label_13d4ec;
        case 0x13d4f0u: goto label_13d4f0;
        case 0x13d4f4u: goto label_13d4f4;
        case 0x13d4f8u: goto label_13d4f8;
        case 0x13d4fcu: goto label_13d4fc;
        case 0x13d500u: goto label_13d500;
        case 0x13d504u: goto label_13d504;
        case 0x13d508u: goto label_13d508;
        case 0x13d50cu: goto label_13d50c;
        case 0x13d510u: goto label_13d510;
        case 0x13d514u: goto label_13d514;
        case 0x13d518u: goto label_13d518;
        case 0x13d51cu: goto label_13d51c;
        case 0x13d520u: goto label_13d520;
        case 0x13d524u: goto label_13d524;
        case 0x13d528u: goto label_13d528;
        case 0x13d52cu: goto label_13d52c;
        case 0x13d530u: goto label_13d530;
        case 0x13d534u: goto label_13d534;
        case 0x13d538u: goto label_13d538;
        case 0x13d53cu: goto label_13d53c;
        case 0x13d540u: goto label_13d540;
        case 0x13d544u: goto label_13d544;
        case 0x13d548u: goto label_13d548;
        case 0x13d54cu: goto label_13d54c;
        case 0x13d550u: goto label_13d550;
        case 0x13d554u: goto label_13d554;
        case 0x13d558u: goto label_13d558;
        case 0x13d55cu: goto label_13d55c;
        case 0x13d560u: goto label_13d560;
        case 0x13d564u: goto label_13d564;
        case 0x13d568u: goto label_13d568;
        case 0x13d56cu: goto label_13d56c;
        case 0x13d570u: goto label_13d570;
        case 0x13d574u: goto label_13d574;
        case 0x13d578u: goto label_13d578;
        case 0x13d57cu: goto label_13d57c;
        case 0x13d580u: goto label_13d580;
        case 0x13d584u: goto label_13d584;
        case 0x13d588u: goto label_13d588;
        case 0x13d58cu: goto label_13d58c;
        case 0x13d590u: goto label_13d590;
        case 0x13d594u: goto label_13d594;
        case 0x13d598u: goto label_13d598;
        case 0x13d59cu: goto label_13d59c;
        case 0x13d5a0u: goto label_13d5a0;
        case 0x13d5a4u: goto label_13d5a4;
        case 0x13d5a8u: goto label_13d5a8;
        case 0x13d5acu: goto label_13d5ac;
        case 0x13d5b0u: goto label_13d5b0;
        case 0x13d5b4u: goto label_13d5b4;
        case 0x13d5b8u: goto label_13d5b8;
        case 0x13d5bcu: goto label_13d5bc;
        case 0x13d5c0u: goto label_13d5c0;
        case 0x13d5c4u: goto label_13d5c4;
        case 0x13d5c8u: goto label_13d5c8;
        case 0x13d5ccu: goto label_13d5cc;
        case 0x13d5d0u: goto label_13d5d0;
        case 0x13d5d4u: goto label_13d5d4;
        case 0x13d5d8u: goto label_13d5d8;
        case 0x13d5dcu: goto label_13d5dc;
        case 0x13d5e0u: goto label_13d5e0;
        case 0x13d5e4u: goto label_13d5e4;
        case 0x13d5e8u: goto label_13d5e8;
        case 0x13d5ecu: goto label_13d5ec;
        case 0x13d5f0u: goto label_13d5f0;
        case 0x13d5f4u: goto label_13d5f4;
        case 0x13d5f8u: goto label_13d5f8;
        case 0x13d5fcu: goto label_13d5fc;
        case 0x13d600u: goto label_13d600;
        case 0x13d604u: goto label_13d604;
        case 0x13d608u: goto label_13d608;
        case 0x13d60cu: goto label_13d60c;
        case 0x13d610u: goto label_13d610;
        case 0x13d614u: goto label_13d614;
        case 0x13d618u: goto label_13d618;
        case 0x13d61cu: goto label_13d61c;
        case 0x13d620u: goto label_13d620;
        case 0x13d624u: goto label_13d624;
        case 0x13d628u: goto label_13d628;
        case 0x13d62cu: goto label_13d62c;
        case 0x13d630u: goto label_13d630;
        case 0x13d634u: goto label_13d634;
        case 0x13d638u: goto label_13d638;
        case 0x13d63cu: goto label_13d63c;
        case 0x13d640u: goto label_13d640;
        case 0x13d644u: goto label_13d644;
        case 0x13d648u: goto label_13d648;
        case 0x13d64cu: goto label_13d64c;
        case 0x13d650u: goto label_13d650;
        case 0x13d654u: goto label_13d654;
        case 0x13d658u: goto label_13d658;
        case 0x13d65cu: goto label_13d65c;
        case 0x13d660u: goto label_13d660;
        case 0x13d664u: goto label_13d664;
        case 0x13d668u: goto label_13d668;
        case 0x13d66cu: goto label_13d66c;
        case 0x13d670u: goto label_13d670;
        case 0x13d674u: goto label_13d674;
        case 0x13d678u: goto label_13d678;
        case 0x13d67cu: goto label_13d67c;
        case 0x13d680u: goto label_13d680;
        case 0x13d684u: goto label_13d684;
        case 0x13d688u: goto label_13d688;
        case 0x13d68cu: goto label_13d68c;
        case 0x13d690u: goto label_13d690;
        case 0x13d694u: goto label_13d694;
        case 0x13d698u: goto label_13d698;
        case 0x13d69cu: goto label_13d69c;
        case 0x13d6a0u: goto label_13d6a0;
        case 0x13d6a4u: goto label_13d6a4;
        case 0x13d6a8u: goto label_13d6a8;
        case 0x13d6acu: goto label_13d6ac;
        default: break;
    }

    ctx->pc = 0x13d010u;

label_13d010:
    // 0x13d010: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x13d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_13d014:
    // 0x13d014: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x13d014u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_13d018:
    // 0x13d018: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x13d018u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_13d01c:
    // 0x13d01c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13d01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13d020:
    // 0x13d020: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x13d020u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_13d024:
    // 0x13d024: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x13d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_13d028:
    // 0x13d028: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x13d028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d02c:
    // 0x13d02c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x13d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_13d030:
    // 0x13d030: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x13d030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_13d034:
    // 0x13d034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d038:
    // 0x13d038: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x13d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_13d03c:
    // 0x13d03c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13d03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_13d040:
    // 0x13d040: 0x45010190  bc1t        . + 4 + (0x190 << 2)
label_13d044:
    if (ctx->pc == 0x13D044u) {
        ctx->pc = 0x13D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D040u;
        // 0x13d044: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D048u;
        goto label_13d048;
    }
    ctx->pc = 0x13D040u;
    {
        const bool branch_taken_0x13d040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D040u;
        // 0x13d044: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d040) {
            ctx->pc = 0x13D684u;
            goto label_13d684;
        }
    }
    ctx->pc = 0x13D048u;
label_13d048:
    // 0x13d048: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13d048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13d04c:
    // 0x13d04c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d050:
    // 0x13d050: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x13d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_13d054:
    // 0x13d054: 0x84a401f0  lh          $a0, 0x1F0($a1)
    ctx->pc = 0x13d054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 496)));
label_13d058:
    // 0x13d058: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x13d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_13d05c:
    // 0x13d05c: 0x8ca601f4  lw          $a2, 0x1F4($a1)
    ctx->pc = 0x13d05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 500)));
label_13d060:
    // 0x13d060: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x13d060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_13d064:
    // 0x13d064: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x13d064u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13d068:
    // 0x13d068: 0xc0f809  jalr        $a2
label_13d06c:
    if (ctx->pc == 0x13D06Cu) {
        ctx->pc = 0x13D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D068u;
        // 0x13d06c: 0xc6340374  lwc1        $f20, 0x374($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D070u;
        goto label_13d070;
    }
    ctx->pc = 0x13D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13D070u);
        ctx->pc = 0x13D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D068u;
        // 0x13d06c: 0xc6340374  lwc1        $f20, 0x374($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D068u, 0x13D070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D070u;
label_13d070:
    // 0x13d070: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x13d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13d074:
    // 0x13d074: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13d074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13d078:
    // 0x13d078: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13d07c:
    // 0x13d07c: 0x262603a0  addiu       $a2, $s1, 0x3A0
    ctx->pc = 0x13d07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 928));
label_13d080:
    // 0x13d080: 0xc04fe4c  jal         func_13F930
label_13d084:
    if (ctx->pc == 0x13D084u) {
        ctx->pc = 0x13D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D080u;
        // 0x13d084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D088u;
        goto label_13d088;
    }
    ctx->pc = 0x13D080u;
    SET_GPR_U32(ctx, 31, 0x13D088u);
    ctx->pc = 0x13D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D080u;
    // 0x13d084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D080u, 0x13D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D088u;
label_13d088:
    // 0x13d088: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d08c:
    // 0x13d08c: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x13d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d090:
    // 0x13d090: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x13d090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_13d094:
    // 0x13d094: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x13d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_13d098:
    // 0x13d098: 0x60f809  jalr        $v1
label_13d09c:
    if (ctx->pc == 0x13D09Cu) {
        ctx->pc = 0x13D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D098u;
        // 0x13d09c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D0A0u;
        goto label_13d0a0;
    }
    ctx->pc = 0x13D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13D0A0u);
        ctx->pc = 0x13D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D098u;
        // 0x13d09c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D098u, 0x13D0A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D0A0u;
label_13d0a0:
    // 0x13d0a0: 0xc62c0370  lwc1        $f12, 0x370($s1)
    ctx->pc = 0x13d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d0a4:
    // 0x13d0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d0a8:
    // 0x13d0a8: 0x2625035c  addiu       $a1, $s1, 0x35C
    ctx->pc = 0x13d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 860));
label_13d0ac:
    // 0x13d0ac: 0xc04fe4c  jal         func_13F930
label_13d0b0:
    if (ctx->pc == 0x13D0B0u) {
        ctx->pc = 0x13D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0ACu;
        // 0x13d0b0: 0x2626039c  addiu       $a2, $s1, 0x39C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 924));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D0B4u;
        goto label_13d0b4;
    }
    ctx->pc = 0x13D0ACu;
    SET_GPR_U32(ctx, 31, 0x13D0B4u);
    ctx->pc = 0x13D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0ACu;
    // 0x13d0b0: 0x2626039c  addiu       $a2, $s1, 0x39C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D0ACu, 0x13D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0B4u;
label_13d0b4:
    // 0x13d0b4: 0xc6200358  lwc1        $f0, 0x358($s1)
    ctx->pc = 0x13d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d0b8:
    // 0x13d0b8: 0xc634037c  lwc1        $f20, 0x37C($s1)
    ctx->pc = 0x13d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13d0bc:
    // 0x13d0bc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x13d0bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d0c0:
    // 0x13d0c0: 0x0  nop
    ctx->pc = 0x13d0c0u;
    // NOP
label_13d0c4:
    // 0x13d0c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_13d0c8:
    if (ctx->pc == 0x13D0C8u) {
        ctx->pc = 0x13D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0C4u;
        // 0x13d0c8: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D0CCu;
        goto label_13d0cc;
    }
    ctx->pc = 0x13D0C4u;
    {
        const bool branch_taken_0x13d0c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0C4u;
        // 0x13d0c8: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0c4) {
            ctx->pc = 0x13D0DCu;
            goto label_13d0dc;
        }
    }
    ctx->pc = 0x13D0CCu;
label_13d0cc:
    // 0x13d0cc: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x13d0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d0d0:
    // 0x13d0d0: 0x0  nop
    ctx->pc = 0x13d0d0u;
    // NOP
label_13d0d4:
    // 0x13d0d4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_13d0d8:
    if (ctx->pc == 0x13D0D8u) {
        ctx->pc = 0x13D0DCu;
        goto label_13d0dc;
    }
    ctx->pc = 0x13D0D4u;
    {
        const bool branch_taken_0x13d0d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d0d4) {
            ctx->pc = 0x13D16Cu;
            goto label_13d16c;
        }
    }
    ctx->pc = 0x13D0DCu;
label_13d0dc:
    // 0x13d0dc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x13d0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d0e0:
    // 0x13d0e0: 0x0  nop
    ctx->pc = 0x13d0e0u;
    // NOP
label_13d0e4:
    // 0x13d0e4: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_13d0e8:
    if (ctx->pc == 0x13D0E8u) {
        ctx->pc = 0x13D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0E4u;
        // 0x13d0e8: 0xc621037c  lwc1        $f1, 0x37C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D0ECu;
        goto label_13d0ec;
    }
    ctx->pc = 0x13D0E4u;
    {
        const bool branch_taken_0x13d0e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d0e4) {
            ctx->pc = 0x13D0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D0E4u;
            // 0x13d0e8: 0xc621037c  lwc1        $f1, 0x37C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D124u;
            goto label_13d124;
        }
    }
    ctx->pc = 0x13D0ECu;
label_13d0ec:
    // 0x13d0ec: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x13d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_13d0f0:
    // 0x13d0f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_13d0f4:
    if (ctx->pc == 0x13D0F4u) {
        ctx->pc = 0x13D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0F0u;
        // 0x13d0f4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D0F8u;
        goto label_13d0f8;
    }
    ctx->pc = 0x13D0F0u;
    {
        const bool branch_taken_0x13d0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0F0u;
        // 0x13d0f4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0f0) {
            ctx->pc = 0x13D11Cu;
            goto label_13d11c;
        }
    }
    ctx->pc = 0x13D0F8u;
label_13d0f8:
    // 0x13d0f8: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x13d0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_13d0fc:
    // 0x13d0fc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x13d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_13d100:
    // 0x13d100: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x13d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d104:
    // 0x13d104: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13d104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13d108:
    // 0x13d108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13d10c:
    // 0x13d10c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d110:
    // 0x13d110: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13d110u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13d114:
    // 0x13d114: 0x10000002  b           . + 4 + (0x2 << 2)
label_13d118:
    if (ctx->pc == 0x13D118u) {
        ctx->pc = 0x13D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D114u;
        // 0x13d118: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D11Cu;
        goto label_13d11c;
    }
    ctx->pc = 0x13D114u;
    {
        const bool branch_taken_0x13d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D114u;
        // 0x13d118: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d114) {
            ctx->pc = 0x13D120u;
            goto label_13d120;
        }
    }
    ctx->pc = 0x13D11Cu;
label_13d11c:
    // 0x13d11c: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x13d11cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_13d120:
    // 0x13d120: 0xc621037c  lwc1        $f1, 0x37C($s1)
    ctx->pc = 0x13d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d124:
    // 0x13d124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d128:
    // 0x13d128: 0x0  nop
    ctx->pc = 0x13d128u;
    // NOP
label_13d12c:
    // 0x13d12c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13d12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d130:
    // 0x13d130: 0x0  nop
    ctx->pc = 0x13d130u;
    // NOP
label_13d134:
    // 0x13d134: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_13d138:
    if (ctx->pc == 0x13D138u) {
        ctx->pc = 0x13D13Cu;
        goto label_13d13c;
    }
    ctx->pc = 0x13D134u;
    {
        const bool branch_taken_0x13d134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d134) {
            ctx->pc = 0x13D16Cu;
            goto label_13d16c;
        }
    }
    ctx->pc = 0x13D13Cu;
label_13d13c:
    // 0x13d13c: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x13d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_13d140:
    // 0x13d140: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13d144:
    if (ctx->pc == 0x13D144u) {
        ctx->pc = 0x13D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D140u;
        // 0x13d144: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D148u;
        goto label_13d148;
    }
    ctx->pc = 0x13D140u;
    {
        const bool branch_taken_0x13d140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D140u;
        // 0x13d144: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d140) {
            ctx->pc = 0x13D168u;
            goto label_13d168;
        }
    }
    ctx->pc = 0x13D148u;
label_13d148:
    // 0x13d148: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x13d148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_13d14c:
    // 0x13d14c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x13d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_13d150:
    // 0x13d150: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x13d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d154:
    // 0x13d154: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13d154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13d158:
    // 0x13d158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13d15c:
    // 0x13d15c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d160:
    // 0x13d160: 0x10000002  b           . + 4 + (0x2 << 2)
label_13d164:
    if (ctx->pc == 0x13D164u) {
        ctx->pc = 0x13D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D160u;
        // 0x13d164: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D168u;
        goto label_13d168;
    }
    ctx->pc = 0x13D160u;
    {
        const bool branch_taken_0x13d160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D160u;
        // 0x13d164: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d160) {
            ctx->pc = 0x13D16Cu;
            goto label_13d16c;
        }
    }
    ctx->pc = 0x13D168u;
label_13d168:
    // 0x13d168: 0xc6340358  lwc1        $f20, 0x358($s1)
    ctx->pc = 0x13d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13d16c:
    // 0x13d16c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13d16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13d170:
    // 0x13d170: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x13d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d174:
    // 0x13d174: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x13d174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d178:
    // 0x13d178: 0x0  nop
    ctx->pc = 0x13d178u;
    // NOP
label_13d17c:
    // 0x13d17c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_13d180:
    if (ctx->pc == 0x13D180u) {
        ctx->pc = 0x13D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D17Cu;
        // 0x13d180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D184u;
        goto label_13d184;
    }
    ctx->pc = 0x13D17Cu;
    {
        const bool branch_taken_0x13d17c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D17Cu;
        // 0x13d180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d17c) {
            ctx->pc = 0x13D1D0u;
            goto label_13d1d0;
        }
    }
    ctx->pc = 0x13D184u;
label_13d184:
    // 0x13d184: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d184u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13d188:
    // 0x13d188: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x13d188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_13d18c:
    // 0x13d18c: 0xc04fe4c  jal         func_13F930
label_13d190:
    if (ctx->pc == 0x13D190u) {
        ctx->pc = 0x13D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D18Cu;
        // 0x13d190: 0x262603a4  addiu       $a2, $s1, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 932));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D194u;
        goto label_13d194;
    }
    ctx->pc = 0x13D18Cu;
    SET_GPR_U32(ctx, 31, 0x13D194u);
    ctx->pc = 0x13D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D18Cu;
    // 0x13d190: 0x262603a4  addiu       $a2, $s1, 0x3A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D18Cu, 0x13D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D194u;
label_13d194:
    // 0x13d194: 0xc622037c  lwc1        $f2, 0x37C($s1)
    ctx->pc = 0x13d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13d198:
    // 0x13d198: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x13d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d19c:
    // 0x13d19c: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x13d19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d1a0:
    // 0x13d1a0: 0x0  nop
    ctx->pc = 0x13d1a0u;
    // NOP
label_13d1a4:
    // 0x13d1a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_13d1a8:
    if (ctx->pc == 0x13D1A8u) {
        ctx->pc = 0x13D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1A4u;
        // 0x13d1a8: 0xe6200358  swc1        $f0, 0x358($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1ACu;
        goto label_13d1ac;
    }
    ctx->pc = 0x13D1A4u;
    {
        const bool branch_taken_0x13d1a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1A4u;
        // 0x13d1a8: 0xe6200358  swc1        $f0, 0x358($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1a4) {
            ctx->pc = 0x13D1D0u;
            goto label_13d1d0;
        }
    }
    ctx->pc = 0x13D1ACu;
label_13d1ac:
    // 0x13d1ac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13d1acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_13d1b0:
    // 0x13d1b0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_13d1b4:
    // 0x13d1b4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x13d1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_13d1b8:
    // 0x13d1b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13d1bc:
    // 0x13d1bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x13d1bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_13d1c0:
    // 0x13d1c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d1c4:
    // 0x13d1c4: 0x0  nop
    ctx->pc = 0x13d1c4u;
    // NOP
label_13d1c8:
    // 0x13d1c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_13d1cc:
    if (ctx->pc == 0x13D1CCu) {
        ctx->pc = 0x13D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1C8u;
        // 0x13d1cc: 0xe6220358  swc1        $f2, 0x358($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1D0u;
        goto label_13d1d0;
    }
    ctx->pc = 0x13D1C8u;
    {
        const bool branch_taken_0x13d1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d1c8) {
            ctx->pc = 0x13D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D1C8u;
            // 0x13d1cc: 0xe6220358  swc1        $f2, 0x358($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D1D0u;
            goto label_13d1d0;
        }
    }
    ctx->pc = 0x13D1D0u;
label_13d1d0:
    // 0x13d1d0: 0xc6200378  lwc1        $f0, 0x378($s1)
    ctx->pc = 0x13d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d1d4:
    // 0x13d1d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13d1d8:
    // 0x13d1d8: 0x0  nop
    ctx->pc = 0x13d1d8u;
    // NOP
label_13d1dc:
    // 0x13d1dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13d1dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d1e0:
    // 0x13d1e0: 0x0  nop
    ctx->pc = 0x13d1e0u;
    // NOP
label_13d1e4:
    // 0x13d1e4: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_13d1e8:
    if (ctx->pc == 0x13D1E8u) {
        ctx->pc = 0x13D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1E4u;
        // 0x13d1e8: 0xc62c0378  lwc1        $f12, 0x378($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1ECu;
        goto label_13d1ec;
    }
    ctx->pc = 0x13D1E4u;
    {
        const bool branch_taken_0x13d1e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d1e4) {
            ctx->pc = 0x13D1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D1E4u;
            // 0x13d1e8: 0xc62c0378  lwc1        $f12, 0x378($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D258u;
            goto label_13d258;
        }
    }
    ctx->pc = 0x13D1ECu;
label_13d1ec:
    // 0x13d1ec: 0xc62003c8  lwc1        $f0, 0x3C8($s1)
    ctx->pc = 0x13d1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d1f0:
    // 0x13d1f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13d1f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d1f4:
    // 0x13d1f4: 0x0  nop
    ctx->pc = 0x13d1f4u;
    // NOP
label_13d1f8:
    // 0x13d1f8: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_13d1fc:
    if (ctx->pc == 0x13D1FCu) {
        ctx->pc = 0x13D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1F8u;
        // 0x13d1fc: 0xc62c0378  lwc1        $f12, 0x378($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D200u;
        goto label_13d200;
    }
    ctx->pc = 0x13D1F8u;
    {
        const bool branch_taken_0x13d1f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d1f8) {
            ctx->pc = 0x13D1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D1F8u;
            // 0x13d1fc: 0xc62c0378  lwc1        $f12, 0x378($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D258u;
            goto label_13d258;
        }
    }
    ctx->pc = 0x13D200u;
label_13d200:
    // 0x13d200: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d204:
    // 0x13d204: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13d208:
    // 0x13d208: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13d20c:
    // 0x13d20c: 0x40f809  jalr        $v0
label_13d210:
    if (ctx->pc == 0x13D210u) {
        ctx->pc = 0x13D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D20Cu;
        // 0x13d210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D214u;
        goto label_13d214;
    }
    ctx->pc = 0x13D20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D214u);
        ctx->pc = 0x13D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D20Cu;
        // 0x13d210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D20Cu, 0x13D214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D214u;
label_13d214:
    // 0x13d214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d218:
    // 0x13d218: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13d218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13d21c:
    // 0x13d21c: 0xc136afa  jal         func_4DABE8
label_13d220:
    if (ctx->pc == 0x13D220u) {
        ctx->pc = 0x13D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D21Cu;
        // 0x13d220: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D224u;
        goto label_13d224;
    }
    ctx->pc = 0x13D21Cu;
    SET_GPR_U32(ctx, 31, 0x13D224u);
    ctx->pc = 0x13D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D21Cu;
    // 0x13d220: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D21Cu, 0x13D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D224u;
label_13d224:
    // 0x13d224: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13d224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d228:
    // 0x13d228: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13d228u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13d22c:
    // 0x13d22c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13d22cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d230:
    // 0x13d230: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13d230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d234:
    // 0x13d234: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13d234u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13d238:
    // 0x13d238: 0x4a0003bf  vwaitq
    ctx->pc = 0x13d238u;
    // VWAITQ (Q already resolved in this runtime)
label_13d23c:
    // 0x13d23c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13d23cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d240:
    // 0x13d240: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13d240u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13d244:
    // 0x13d244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d248:
    // 0x13d248: 0x0  nop
    ctx->pc = 0x13d248u;
    // NOP
label_13d24c:
    // 0x13d24c: 0xe62003c8  swc1        $f0, 0x3C8($s1)
    ctx->pc = 0x13d24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 968), bits); }
label_13d250:
    // 0x13d250: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13d254:
    // 0x13d254: 0xc62c0378  lwc1        $f12, 0x378($s1)
    ctx->pc = 0x13d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d258:
    // 0x13d258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d25c:
    // 0x13d25c: 0x0  nop
    ctx->pc = 0x13d25cu;
    // NOP
label_13d260:
    // 0x13d260: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x13d260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d264:
    // 0x13d264: 0x0  nop
    ctx->pc = 0x13d264u;
    // NOP
label_13d268:
    // 0x13d268: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_13d26c:
    if (ctx->pc == 0x13D26Cu) {
        ctx->pc = 0x13D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D268u;
        // 0x13d26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D270u;
        goto label_13d270;
    }
    ctx->pc = 0x13D268u;
    {
        const bool branch_taken_0x13d268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D268u;
        // 0x13d26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d268) {
            ctx->pc = 0x13D284u;
            goto label_13d284;
        }
    }
    ctx->pc = 0x13D270u;
label_13d270:
    // 0x13d270: 0x262503c8  addiu       $a1, $s1, 0x3C8
    ctx->pc = 0x13d270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
label_13d274:
    // 0x13d274: 0xc04fe4c  jal         func_13F930
label_13d278:
    if (ctx->pc == 0x13D278u) {
        ctx->pc = 0x13D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D274u;
        // 0x13d278: 0x262603a8  addiu       $a2, $s1, 0x3A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D27Cu;
        goto label_13d27c;
    }
    ctx->pc = 0x13D274u;
    SET_GPR_U32(ctx, 31, 0x13D27Cu);
    ctx->pc = 0x13D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D274u;
    // 0x13d278: 0x262603a8  addiu       $a2, $s1, 0x3A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D274u, 0x13D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D27Cu;
label_13d27c:
    // 0x13d27c: 0x10000003  b           . + 4 + (0x3 << 2)
label_13d280:
    if (ctx->pc == 0x13D280u) {
        ctx->pc = 0x13D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D27Cu;
        // 0x13d280: 0xc62c0380  lwc1        $f12, 0x380($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D284u;
        goto label_13d284;
    }
    ctx->pc = 0x13D27Cu;
    {
        const bool branch_taken_0x13d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D27Cu;
        // 0x13d280: 0xc62c0380  lwc1        $f12, 0x380($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d27c) {
            ctx->pc = 0x13D28Cu;
            goto label_13d28c;
        }
    }
    ctx->pc = 0x13D284u;
label_13d284:
    // 0x13d284: 0xe62003c8  swc1        $f0, 0x3C8($s1)
    ctx->pc = 0x13d284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 968), bits); }
label_13d288:
    // 0x13d288: 0xc62c0380  lwc1        $f12, 0x380($s1)
    ctx->pc = 0x13d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d28c:
    // 0x13d28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d290:
    // 0x13d290: 0x26250360  addiu       $a1, $s1, 0x360
    ctx->pc = 0x13d290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_13d294:
    // 0x13d294: 0xc04fe4c  jal         func_13F930
label_13d298:
    if (ctx->pc == 0x13D298u) {
        ctx->pc = 0x13D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D294u;
        // 0x13d298: 0x262603ac  addiu       $a2, $s1, 0x3AC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D29Cu;
        goto label_13d29c;
    }
    ctx->pc = 0x13D294u;
    SET_GPR_U32(ctx, 31, 0x13D29Cu);
    ctx->pc = 0x13D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D294u;
    // 0x13d298: 0x262603ac  addiu       $a2, $s1, 0x3AC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D294u, 0x13D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D29Cu;
label_13d29c:
    // 0x13d29c: 0xc62c0384  lwc1        $f12, 0x384($s1)
    ctx->pc = 0x13d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d2a0:
    // 0x13d2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d2a4:
    // 0x13d2a4: 0x26250364  addiu       $a1, $s1, 0x364
    ctx->pc = 0x13d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 868));
label_13d2a8:
    // 0x13d2a8: 0xc04fe4c  jal         func_13F930
label_13d2ac:
    if (ctx->pc == 0x13D2ACu) {
        ctx->pc = 0x13D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2A8u;
        // 0x13d2ac: 0x262603b0  addiu       $a2, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D2B0u;
        goto label_13d2b0;
    }
    ctx->pc = 0x13D2A8u;
    SET_GPR_U32(ctx, 31, 0x13D2B0u);
    ctx->pc = 0x13D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2A8u;
    // 0x13d2ac: 0x262603b0  addiu       $a2, $s1, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D2A8u, 0x13D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2B0u;
label_13d2b0:
    // 0x13d2b0: 0xc62c0398  lwc1        $f12, 0x398($s1)
    ctx->pc = 0x13d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d2b4:
    // 0x13d2b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d2b8:
    // 0x13d2b8: 0x26250328  addiu       $a1, $s1, 0x328
    ctx->pc = 0x13d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 808));
label_13d2bc:
    // 0x13d2bc: 0xc04fe4c  jal         func_13F930
label_13d2c0:
    if (ctx->pc == 0x13D2C0u) {
        ctx->pc = 0x13D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2BCu;
        // 0x13d2c0: 0x262603c4  addiu       $a2, $s1, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D2C4u;
        goto label_13d2c4;
    }
    ctx->pc = 0x13D2BCu;
    SET_GPR_U32(ctx, 31, 0x13D2C4u);
    ctx->pc = 0x13D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2BCu;
    // 0x13d2c0: 0x262603c4  addiu       $a2, $s1, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D2BCu, 0x13D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2C4u;
label_13d2c4:
    // 0x13d2c4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_13d2c8:
    // 0x13d2c8: 0xc6200388  lwc1        $f0, 0x388($s1)
    ctx->pc = 0x13d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d2cc:
    // 0x13d2cc: 0xc4419298  lwc1        $f1, -0x6D68($v0)
    ctx->pc = 0x13d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d2d0:
    // 0x13d2d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13d2d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d2d4:
    // 0x13d2d4: 0x0  nop
    ctx->pc = 0x13d2d4u;
    // NOP
label_13d2d8:
    // 0x13d2d8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_13d2dc:
    if (ctx->pc == 0x13D2DCu) {
        ctx->pc = 0x13D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2D8u;
        // 0x13d2dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D2E0u;
        goto label_13d2e0;
    }
    ctx->pc = 0x13D2D8u;
    {
        const bool branch_taken_0x13d2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2D8u;
        // 0x13d2dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2d8) {
            ctx->pc = 0x13D354u;
            goto label_13d354;
        }
    }
    ctx->pc = 0x13D2E0u;
label_13d2e0:
    // 0x13d2e0: 0xc6200368  lwc1        $f0, 0x368($s1)
    ctx->pc = 0x13d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d2e4:
    // 0x13d2e4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13d2e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d2e8:
    // 0x13d2e8: 0x0  nop
    ctx->pc = 0x13d2e8u;
    // NOP
label_13d2ec:
    // 0x13d2ec: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_13d2f0:
    if (ctx->pc == 0x13D2F0u) {
        ctx->pc = 0x13D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2ECu;
        // 0x13d2f0: 0xc62c0388  lwc1        $f12, 0x388($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D2F4u;
        goto label_13d2f4;
    }
    ctx->pc = 0x13D2ECu;
    {
        const bool branch_taken_0x13d2ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d2ec) {
            ctx->pc = 0x13D2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D2ECu;
            // 0x13d2f0: 0xc62c0388  lwc1        $f12, 0x388($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D344u;
            goto label_13d344;
        }
    }
    ctx->pc = 0x13D2F4u;
label_13d2f4:
    // 0x13d2f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d2f8:
    // 0x13d2f8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13d2f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13d2fc:
    // 0x13d2fc: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13d300:
    // 0x13d300: 0x40f809  jalr        $v0
label_13d304:
    if (ctx->pc == 0x13D304u) {
        ctx->pc = 0x13D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D300u;
        // 0x13d304: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D308u;
        goto label_13d308;
    }
    ctx->pc = 0x13D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D308u);
        ctx->pc = 0x13D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D300u;
        // 0x13d304: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D300u, 0x13D308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D308u;
label_13d308:
    // 0x13d308: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d30c:
    // 0x13d30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d310:
    // 0x13d310: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x13d310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_13d314:
    // 0x13d314: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x13d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_13d318:
    // 0x13d318: 0x40f809  jalr        $v0
label_13d31c:
    if (ctx->pc == 0x13D31Cu) {
        ctx->pc = 0x13D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D318u;
        // 0x13d31c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D320u;
        goto label_13d320;
    }
    ctx->pc = 0x13D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D320u);
        ctx->pc = 0x13D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D318u;
        // 0x13d31c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D318u, 0x13D320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D320u;
label_13d320:
    // 0x13d320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d324:
    // 0x13d324: 0xc0cd8ec  jal         func_3363B0
label_13d328:
    if (ctx->pc == 0x13D328u) {
        ctx->pc = 0x13D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D324u;
        // 0x13d328: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D32Cu;
        goto label_13d32c;
    }
    ctx->pc = 0x13D324u;
    SET_GPR_U32(ctx, 31, 0x13D32Cu);
    ctx->pc = 0x13D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D324u;
    // 0x13d328: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x13D324u, 0x13D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D32Cu;
label_13d32c:
    // 0x13d32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d330:
    // 0x13d330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d334:
    // 0x13d334: 0xc04fe6c  jal         func_13F9B0
label_13d338:
    if (ctx->pc == 0x13D338u) {
        ctx->pc = 0x13D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D334u;
        // 0x13d338: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D33Cu;
        goto label_13d33c;
    }
    ctx->pc = 0x13D334u;
    SET_GPR_U32(ctx, 31, 0x13D33Cu);
    ctx->pc = 0x13D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D334u;
    // 0x13d338: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9B0u, 0x13D334u, 0x13D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D33Cu;
label_13d33c:
    // 0x13d33c: 0xe6200368  swc1        $f0, 0x368($s1)
    ctx->pc = 0x13d33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 872), bits); }
label_13d340:
    // 0x13d340: 0xc62c0388  lwc1        $f12, 0x388($s1)
    ctx->pc = 0x13d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d344:
    // 0x13d344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d348:
    // 0x13d348: 0x26250368  addiu       $a1, $s1, 0x368
    ctx->pc = 0x13d348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 872));
label_13d34c:
    // 0x13d34c: 0xc04fe4c  jal         func_13F930
label_13d350:
    if (ctx->pc == 0x13D350u) {
        ctx->pc = 0x13D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D34Cu;
        // 0x13d350: 0x262603b4  addiu       $a2, $s1, 0x3B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D354u;
        goto label_13d354;
    }
    ctx->pc = 0x13D34Cu;
    SET_GPR_U32(ctx, 31, 0x13D354u);
    ctx->pc = 0x13D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D34Cu;
    // 0x13d350: 0x262603b4  addiu       $a2, $s1, 0x3B4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D34Cu, 0x13D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D354u;
label_13d354:
    // 0x13d354: 0xc62c038c  lwc1        $f12, 0x38C($s1)
    ctx->pc = 0x13d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d358:
    // 0x13d358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d35c:
    // 0x13d35c: 0x262503d0  addiu       $a1, $s1, 0x3D0
    ctx->pc = 0x13d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
label_13d360:
    // 0x13d360: 0xc04fe4c  jal         func_13F930
label_13d364:
    if (ctx->pc == 0x13D364u) {
        ctx->pc = 0x13D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D360u;
        // 0x13d364: 0x262603b8  addiu       $a2, $s1, 0x3B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D368u;
        goto label_13d368;
    }
    ctx->pc = 0x13D360u;
    SET_GPR_U32(ctx, 31, 0x13D368u);
    ctx->pc = 0x13D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D360u;
    // 0x13d364: 0x262603b8  addiu       $a2, $s1, 0x3B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D360u, 0x13D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D368u;
label_13d368:
    // 0x13d368: 0xc62c0390  lwc1        $f12, 0x390($s1)
    ctx->pc = 0x13d368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d36c:
    // 0x13d36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d370:
    // 0x13d370: 0x262503d4  addiu       $a1, $s1, 0x3D4
    ctx->pc = 0x13d370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 980));
label_13d374:
    // 0x13d374: 0xc04fe4c  jal         func_13F930
label_13d378:
    if (ctx->pc == 0x13D378u) {
        ctx->pc = 0x13D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D374u;
        // 0x13d378: 0x262603bc  addiu       $a2, $s1, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 956));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D37Cu;
        goto label_13d37c;
    }
    ctx->pc = 0x13D374u;
    SET_GPR_U32(ctx, 31, 0x13D37Cu);
    ctx->pc = 0x13D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D374u;
    // 0x13d378: 0x262603bc  addiu       $a2, $s1, 0x3BC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 956));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D374u, 0x13D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D37Cu;
label_13d37c:
    // 0x13d37c: 0xc6419298  lwc1        $f1, -0x6D68($s2)
    ctx->pc = 0x13d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294939288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d380:
    // 0x13d380: 0xc6200394  lwc1        $f0, 0x394($s1)
    ctx->pc = 0x13d380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d384:
    // 0x13d384: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13d384u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d388:
    // 0x13d388: 0x0  nop
    ctx->pc = 0x13d388u;
    // NOP
label_13d38c:
    // 0x13d38c: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
label_13d390:
    if (ctx->pc == 0x13D390u) {
        ctx->pc = 0x13D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D38Cu;
        // 0x13d390: 0x7a220020  lq          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D394u;
        goto label_13d394;
    }
    ctx->pc = 0x13D38Cu;
    {
        const bool branch_taken_0x13d38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d38c) {
            ctx->pc = 0x13D390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D38Cu;
            // 0x13d390: 0x7a220020  lq          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D40Cu;
            goto label_13d40c;
        }
    }
    ctx->pc = 0x13D394u;
label_13d394:
    // 0x13d394: 0xc620036c  lwc1        $f0, 0x36C($s1)
    ctx->pc = 0x13d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d398:
    // 0x13d398: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13d398u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d39c:
    // 0x13d39c: 0x0  nop
    ctx->pc = 0x13d39cu;
    // NOP
label_13d3a0:
    // 0x13d3a0: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_13d3a4:
    if (ctx->pc == 0x13D3A4u) {
        ctx->pc = 0x13D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3A0u;
        // 0x13d3a4: 0xc62c0394  lwc1        $f12, 0x394($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3A8u;
        goto label_13d3a8;
    }
    ctx->pc = 0x13D3A0u;
    {
        const bool branch_taken_0x13d3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d3a0) {
            ctx->pc = 0x13D3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D3A0u;
            // 0x13d3a4: 0xc62c0394  lwc1        $f12, 0x394($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D3F8u;
            goto label_13d3f8;
        }
    }
    ctx->pc = 0x13D3A8u;
label_13d3a8:
    // 0x13d3a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d3ac:
    // 0x13d3ac: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13d3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13d3b0:
    // 0x13d3b0: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13d3b4:
    // 0x13d3b4: 0x40f809  jalr        $v0
label_13d3b8:
    if (ctx->pc == 0x13D3B8u) {
        ctx->pc = 0x13D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3B4u;
        // 0x13d3b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3BCu;
        goto label_13d3bc;
    }
    ctx->pc = 0x13D3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D3BCu);
        ctx->pc = 0x13D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3B4u;
        // 0x13d3b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D3B4u, 0x13D3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D3BCu;
label_13d3bc:
    // 0x13d3bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d3c0:
    // 0x13d3c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d3c4:
    // 0x13d3c4: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x13d3c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_13d3c8:
    // 0x13d3c8: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x13d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_13d3cc:
    // 0x13d3cc: 0x40f809  jalr        $v0
label_13d3d0:
    if (ctx->pc == 0x13D3D0u) {
        ctx->pc = 0x13D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3CCu;
        // 0x13d3d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3D4u;
        goto label_13d3d4;
    }
    ctx->pc = 0x13D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D3D4u);
        ctx->pc = 0x13D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3CCu;
        // 0x13d3d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D3CCu, 0x13D3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D3D4u;
label_13d3d4:
    // 0x13d3d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d3d8:
    // 0x13d3d8: 0xc0cd8ec  jal         func_3363B0
label_13d3dc:
    if (ctx->pc == 0x13D3DCu) {
        ctx->pc = 0x13D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3D8u;
        // 0x13d3dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3E0u;
        goto label_13d3e0;
    }
    ctx->pc = 0x13D3D8u;
    SET_GPR_U32(ctx, 31, 0x13D3E0u);
    ctx->pc = 0x13D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3D8u;
    // 0x13d3dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x13D3D8u, 0x13D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3E0u;
label_13d3e0:
    // 0x13d3e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d3e4:
    // 0x13d3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d3e8:
    // 0x13d3e8: 0xc04fe6c  jal         func_13F9B0
label_13d3ec:
    if (ctx->pc == 0x13D3ECu) {
        ctx->pc = 0x13D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3E8u;
        // 0x13d3ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3F0u;
        goto label_13d3f0;
    }
    ctx->pc = 0x13D3E8u;
    SET_GPR_U32(ctx, 31, 0x13D3F0u);
    ctx->pc = 0x13D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3E8u;
    // 0x13d3ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9B0u, 0x13D3E8u, 0x13D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3F0u;
label_13d3f0:
    // 0x13d3f0: 0xe620036c  swc1        $f0, 0x36C($s1)
    ctx->pc = 0x13d3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 876), bits); }
label_13d3f4:
    // 0x13d3f4: 0xc62c0394  lwc1        $f12, 0x394($s1)
    ctx->pc = 0x13d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13d3f8:
    // 0x13d3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d3fc:
    // 0x13d3fc: 0x2625036c  addiu       $a1, $s1, 0x36C
    ctx->pc = 0x13d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
label_13d400:
    // 0x13d400: 0xc04fe4c  jal         func_13F930
label_13d404:
    if (ctx->pc == 0x13D404u) {
        ctx->pc = 0x13D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D400u;
        // 0x13d404: 0x262603c0  addiu       $a2, $s1, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D408u;
        goto label_13d408;
    }
    ctx->pc = 0x13D400u;
    SET_GPR_U32(ctx, 31, 0x13D408u);
    ctx->pc = 0x13D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D400u;
    // 0x13d404: 0x262603c0  addiu       $a2, $s1, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F930u, 0x13D400u, 0x13D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D408u;
label_13d408:
    // 0x13d408: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x13d408u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_13d40c:
    // 0x13d40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d410:
    // 0x13d410: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x13d410u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_13d414:
    // 0x13d414: 0x7a230180  lq          $v1, 0x180($s1)
    ctx->pc = 0x13d414u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_13d418:
    // 0x13d418: 0x7a2502f0  lq          $a1, 0x2F0($s1)
    ctx->pc = 0x13d418u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 752)));
label_13d41c:
    // 0x13d41c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13d420:
    // 0x13d420: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x13d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_13d424:
    // 0x13d424: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x13d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_13d428:
    // 0x13d428: 0xc04edee  jal         func_13B7B8
label_13d42c:
    if (ctx->pc == 0x13D42Cu) {
        ctx->pc = 0x13D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D428u;
        // 0x13d42c: 0x7fa50030  sq          $a1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D430u;
        goto label_13d430;
    }
    ctx->pc = 0x13D428u;
    SET_GPR_U32(ctx, 31, 0x13D430u);
    ctx->pc = 0x13D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D428u;
    // 0x13d42c: 0x7fa50030  sq          $a1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B7B8u, 0x13D428u, 0x13D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D430u;
label_13d430:
    // 0x13d430: 0x8e220348  lw          $v0, 0x348($s1)
    ctx->pc = 0x13d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_13d434:
    // 0x13d434: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_13d438:
    if (ctx->pc == 0x13D438u) {
        ctx->pc = 0x13D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D434u;
        // 0x13d438: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D43Cu;
        goto label_13d43c;
    }
    ctx->pc = 0x13D434u;
    {
        const bool branch_taken_0x13d434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D434u;
        // 0x13d438: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d434) {
            ctx->pc = 0x13D688u;
            goto label_13d688;
        }
    }
    ctx->pc = 0x13D43Cu;
label_13d43c:
    // 0x13d43c: 0x922203ed  lbu         $v0, 0x3ED($s1)
    ctx->pc = 0x13d43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
label_13d440:
    // 0x13d440: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x13d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_13d444:
    // 0x13d444: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_13d448:
    if (ctx->pc == 0x13D448u) {
        ctx->pc = 0x13D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D444u;
        // 0x13d448: 0xe63601a0  swc1        $f22, 0x1A0($s1) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D44Cu;
        goto label_13d44c;
    }
    ctx->pc = 0x13D444u;
    {
        const bool branch_taken_0x13d444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D444u;
        // 0x13d448: 0xe63601a0  swc1        $f22, 0x1A0($s1) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d444) {
            ctx->pc = 0x13D48Cu;
            goto label_13d48c;
        }
    }
    ctx->pc = 0x13D44Cu;
label_13d44c:
    // 0x13d44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d450:
    // 0x13d450: 0xc04eeb4  jal         func_13BAD0
label_13d454:
    if (ctx->pc == 0x13D454u) {
        ctx->pc = 0x13D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D450u;
        // 0x13d454: 0x26250340  addiu       $a1, $s1, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D458u;
        goto label_13d458;
    }
    ctx->pc = 0x13D450u;
    SET_GPR_U32(ctx, 31, 0x13D458u);
    ctx->pc = 0x13D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D450u;
    // 0x13d454: 0x26250340  addiu       $a1, $s1, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BAD0u, 0x13D450u, 0x13D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D458u;
label_13d458:
    // 0x13d458: 0x7a2302f0  lq          $v1, 0x2F0($s1)
    ctx->pc = 0x13d458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 752)));
label_13d45c:
    // 0x13d45c: 0x962203e8  lhu         $v0, 0x3E8($s1)
    ctx->pc = 0x13d45cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1000)));
label_13d460:
    // 0x13d460: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_13d464:
    if (ctx->pc == 0x13D464u) {
        ctx->pc = 0x13D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D460u;
        // 0x13d464: 0x7e230300  sq          $v1, 0x300($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 768), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D468u;
        goto label_13d468;
    }
    ctx->pc = 0x13D460u;
    {
        const bool branch_taken_0x13d460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D460u;
        // 0x13d464: 0x7e230300  sq          $v1, 0x300($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 768), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d460) {
            ctx->pc = 0x13D480u;
            goto label_13d480;
        }
    }
    ctx->pc = 0x13D468u;
label_13d468:
    // 0x13d468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d46c:
    // 0x13d46c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d470:
    // 0x13d470: 0xc04eff8  jal         func_13BFE0
label_13d474:
    if (ctx->pc == 0x13D474u) {
        ctx->pc = 0x13D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D470u;
        // 0x13d474: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D478u;
        goto label_13d478;
    }
    ctx->pc = 0x13D470u;
    SET_GPR_U32(ctx, 31, 0x13D478u);
    ctx->pc = 0x13D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D470u;
    // 0x13d474: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BFE0u, 0x13D470u, 0x13D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D478u;
label_13d478:
    // 0x13d478: 0x10000005  b           . + 4 + (0x5 << 2)
label_13d47c:
    if (ctx->pc == 0x13D47Cu) {
        ctx->pc = 0x13D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D478u;
        // 0x13d47c: 0x922203e4  lbu         $v0, 0x3E4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D480u;
        goto label_13d480;
    }
    ctx->pc = 0x13D478u;
    {
        const bool branch_taken_0x13d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D478u;
        // 0x13d47c: 0x922203e4  lbu         $v0, 0x3E4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d478) {
            ctx->pc = 0x13D490u;
            goto label_13d490;
        }
    }
    ctx->pc = 0x13D480u;
label_13d480:
    // 0x13d480: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x13d480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_13d484:
    // 0x13d484: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x13d484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_13d488:
    // 0x13d488: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_13d48c:
    // 0x13d48c: 0x922203e4  lbu         $v0, 0x3E4($s1)
    ctx->pc = 0x13d48cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 996)));
label_13d490:
    // 0x13d490: 0x922303ed  lbu         $v1, 0x3ED($s1)
    ctx->pc = 0x13d490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1005)));
label_13d494:
    // 0x13d494: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_13d498:
    if (ctx->pc == 0x13D498u) {
        ctx->pc = 0x13D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D494u;
        // 0x13d498: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D49Cu;
        goto label_13d49c;
    }
    ctx->pc = 0x13D494u;
    {
        const bool branch_taken_0x13d494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D494u;
        // 0x13d498: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d494) {
            ctx->pc = 0x13D4B8u;
            goto label_13d4b8;
        }
    }
    ctx->pc = 0x13D49Cu;
label_13d49c:
    // 0x13d49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d4a0:
    // 0x13d4a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d4a4:
    // 0x13d4a4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13d4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d4a8:
    // 0x13d4a8: 0xc04f5ac  jal         func_13D6B0
label_13d4ac:
    if (ctx->pc == 0x13D4ACu) {
        ctx->pc = 0x13D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4A8u;
        // 0x13d4ac: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4B0u;
        goto label_13d4b0;
    }
    ctx->pc = 0x13D4A8u;
    SET_GPR_U32(ctx, 31, 0x13D4B0u);
    ctx->pc = 0x13D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4A8u;
    // 0x13d4ac: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6B0u, 0x13D4A8u, 0x13D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4B0u;
label_13d4b0:
    // 0x13d4b0: 0x10000016  b           . + 4 + (0x16 << 2)
label_13d4b4:
    if (ctx->pc == 0x13D4B4u) {
        ctx->pc = 0x13D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4B0u;
        // 0x13d4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4B8u;
        goto label_13d4b8;
    }
    ctx->pc = 0x13D4B0u;
    {
        const bool branch_taken_0x13d4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4B0u;
        // 0x13d4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4b0) {
            ctx->pc = 0x13D50Cu;
            goto label_13d50c;
        }
    }
    ctx->pc = 0x13D4B8u;
label_13d4b8:
    // 0x13d4b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13d4bc:
    // 0x13d4bc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_13d4c0:
    if (ctx->pc == 0x13D4C0u) {
        ctx->pc = 0x13D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4BCu;
        // 0x13d4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4C4u;
        goto label_13d4c4;
    }
    ctx->pc = 0x13D4BCu;
    {
        const bool branch_taken_0x13d4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4BCu;
        // 0x13d4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4bc) {
            ctx->pc = 0x13D4E0u;
            goto label_13d4e0;
        }
    }
    ctx->pc = 0x13D4C4u;
label_13d4c4:
    // 0x13d4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d4c8:
    // 0x13d4c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d4cc:
    // 0x13d4cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13d4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d4d0:
    // 0x13d4d0: 0xc04f732  jal         func_13DCC8
label_13d4d4:
    if (ctx->pc == 0x13D4D4u) {
        ctx->pc = 0x13D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4D0u;
        // 0x13d4d4: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4D8u;
        goto label_13d4d8;
    }
    ctx->pc = 0x13D4D0u;
    SET_GPR_U32(ctx, 31, 0x13D4D8u);
    ctx->pc = 0x13D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4D0u;
    // 0x13d4d4: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCC8u, 0x13D4D0u, 0x13D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4D8u;
label_13d4d8:
    // 0x13d4d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_13d4dc:
    if (ctx->pc == 0x13D4DCu) {
        ctx->pc = 0x13D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4D8u;
        // 0x13d4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4E0u;
        goto label_13d4e0;
    }
    ctx->pc = 0x13D4D8u;
    {
        const bool branch_taken_0x13d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4D8u;
        // 0x13d4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4d8) {
            ctx->pc = 0x13D50Cu;
            goto label_13d50c;
        }
    }
    ctx->pc = 0x13D4E0u;
label_13d4e0:
    // 0x13d4e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_13d4e4:
    if (ctx->pc == 0x13D4E4u) {
        ctx->pc = 0x13D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E0u;
        // 0x13d4e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4E8u;
        goto label_13d4e8;
    }
    ctx->pc = 0x13D4E0u;
    {
        const bool branch_taken_0x13d4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E0u;
        // 0x13d4e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4e0) {
            ctx->pc = 0x13D4F0u;
            goto label_13d4f0;
        }
    }
    ctx->pc = 0x13D4E8u;
label_13d4e8:
    // 0x13d4e8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_13d4ec:
    if (ctx->pc == 0x13D4ECu) {
        ctx->pc = 0x13D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E8u;
        // 0x13d4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4F0u;
        goto label_13d4f0;
    }
    ctx->pc = 0x13D4E8u;
    {
        const bool branch_taken_0x13d4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d4e8) {
            ctx->pc = 0x13D4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D4E8u;
            // 0x13d4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D50Cu;
            goto label_13d50c;
        }
    }
    ctx->pc = 0x13D4F0u;
label_13d4f0:
    // 0x13d4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d4f4:
    // 0x13d4f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13d4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d4f8:
    // 0x13d4f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13d4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d4fc:
    // 0x13d4fc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x13d4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d500:
    // 0x13d500: 0xc04f9c2  jal         func_13E708
label_13d504:
    if (ctx->pc == 0x13D504u) {
        ctx->pc = 0x13D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D500u;
        // 0x13d504: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D508u;
        goto label_13d508;
    }
    ctx->pc = 0x13D500u;
    SET_GPR_U32(ctx, 31, 0x13D508u);
    ctx->pc = 0x13D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D500u;
    // 0x13d504: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E708u, 0x13D500u, 0x13D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D508u;
label_13d508:
    // 0x13d508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d50c:
    // 0x13d50c: 0xc04f3c8  jal         func_13CF20
label_13d510:
    if (ctx->pc == 0x13D510u) {
        ctx->pc = 0x13D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D50Cu;
        // 0x13d510: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D514u;
        goto label_13d514;
    }
    ctx->pc = 0x13D50Cu;
    SET_GPR_U32(ctx, 31, 0x13D514u);
    ctx->pc = 0x13D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D50Cu;
    // 0x13d510: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CF20u, 0x13D50Cu, 0x13D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D514u;
label_13d514:
    // 0x13d514: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d518:
    // 0x13d518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d51c:
    // 0x13d51c: 0xc62103e0  lwc1        $f1, 0x3E0($s1)
    ctx->pc = 0x13d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d520:
    // 0x13d520: 0xc62001a0  lwc1        $f0, 0x1A0($s1)
    ctx->pc = 0x13d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d524:
    // 0x13d524: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13d524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13d528:
    // 0x13d528: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13d52c:
    // 0x13d52c: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x13d52cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13d530:
    // 0x13d530: 0x40f809  jalr        $v0
label_13d534:
    if (ctx->pc == 0x13D534u) {
        ctx->pc = 0x13D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D530u;
        // 0x13d534: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D538u;
        goto label_13d538;
    }
    ctx->pc = 0x13D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D538u);
        ctx->pc = 0x13D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D530u;
        // 0x13d534: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D530u, 0x13D538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D538u;
label_13d538:
    // 0x13d538: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_13d53c:
    if (ctx->pc == 0x13D53Cu) {
        ctx->pc = 0x13D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D538u;
        // 0x13d53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D540u;
        goto label_13d540;
    }
    ctx->pc = 0x13D538u;
    {
        const bool branch_taken_0x13d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D538u;
        // 0x13d53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d538) {
            ctx->pc = 0x13D5F8u;
            goto label_13d5f8;
        }
    }
    ctx->pc = 0x13D540u;
label_13d540:
    // 0x13d540: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d544:
    // 0x13d544: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13d544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13d548:
    // 0x13d548: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13d54c:
    // 0x13d54c: 0x40f809  jalr        $v0
label_13d550:
    if (ctx->pc == 0x13D550u) {
        ctx->pc = 0x13D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D54Cu;
        // 0x13d550: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D554u;
        goto label_13d554;
    }
    ctx->pc = 0x13D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D554u);
        ctx->pc = 0x13D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D54Cu;
        // 0x13d550: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D54Cu, 0x13D554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D554u;
label_13d554:
    // 0x13d554: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x13d554u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_13d558:
    // 0x13d558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13d55c:
    // 0x13d55c: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
label_13d560:
    if (ctx->pc == 0x13D560u) {
        ctx->pc = 0x13D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D55Cu;
        // 0x13d560: 0xa22003eb  sb          $zero, 0x3EB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D564u;
        goto label_13d564;
    }
    ctx->pc = 0x13D55Cu;
    {
        const bool branch_taken_0x13d55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13d55c) {
            ctx->pc = 0x13D560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D55Cu;
            // 0x13d560: 0xa22003eb  sb          $zero, 0x3EB($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D5FCu;
            goto label_13d5fc;
        }
    }
    ctx->pc = 0x13D564u;
label_13d564:
    // 0x13d564: 0xc62003e0  lwc1        $f0, 0x3E0($s1)
    ctx->pc = 0x13d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d568:
    // 0x13d568: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13d56c:
    // 0x13d56c: 0x0  nop
    ctx->pc = 0x13d56cu;
    // NOP
label_13d570:
    // 0x13d570: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13d570u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d574:
    // 0x13d574: 0x0  nop
    ctx->pc = 0x13d574u;
    // NOP
label_13d578:
    // 0x13d578: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_13d57c:
    if (ctx->pc == 0x13D57Cu) {
        ctx->pc = 0x13D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D578u;
        // 0x13d57c: 0xa22003eb  sb          $zero, 0x3EB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D580u;
        goto label_13d580;
    }
    ctx->pc = 0x13D578u;
    {
        const bool branch_taken_0x13d578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d578) {
            ctx->pc = 0x13D57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D578u;
            // 0x13d57c: 0xa22003eb  sb          $zero, 0x3EB($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D5D4u;
            goto label_13d5d4;
        }
    }
    ctx->pc = 0x13D580u;
label_13d580:
    // 0x13d580: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x13d580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d584:
    // 0x13d584: 0x0  nop
    ctx->pc = 0x13d584u;
    // NOP
label_13d588:
    // 0x13d588: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_13d58c:
    if (ctx->pc == 0x13D58Cu) {
        ctx->pc = 0x13D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D588u;
        // 0x13d58c: 0x4614a000  add.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D590u;
        goto label_13d590;
    }
    ctx->pc = 0x13D588u;
    {
        const bool branch_taken_0x13d588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d588) {
            ctx->pc = 0x13D58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D588u;
            // 0x13d58c: 0x4614a000  add.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D598u;
            goto label_13d598;
        }
    }
    ctx->pc = 0x13D590u;
label_13d590:
    // 0x13d590: 0x1000000f  b           . + 4 + (0xF << 2)
label_13d594:
    if (ctx->pc == 0x13D594u) {
        ctx->pc = 0x13D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D590u;
        // 0x13d594: 0xe62103e0  swc1        $f1, 0x3E0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D598u;
        goto label_13d598;
    }
    ctx->pc = 0x13D590u;
    {
        const bool branch_taken_0x13d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D590u;
        // 0x13d594: 0xe62103e0  swc1        $f1, 0x3E0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d590) {
            ctx->pc = 0x13D5D0u;
            goto label_13d5d0;
        }
    }
    ctx->pc = 0x13D598u;
label_13d598:
    // 0x13d598: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x13d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_13d59c:
    // 0x13d59c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13d5a0:
    // 0x13d5a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13d5a4:
    // 0x13d5a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13d5a8:
    // 0x13d5a8: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x13d5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_13d5ac:
    // 0x13d5ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13d5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_13d5b0:
    // 0x13d5b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13d5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13d5b4:
    // 0x13d5b4: 0xe63403e0  swc1        $f20, 0x3E0($s1)
    ctx->pc = 0x13d5b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
label_13d5b8:
    // 0x13d5b8: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x13d5b8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_13d5bc:
    // 0x13d5bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13d5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13d5c0:
    // 0x13d5c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13d5c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_13d5c4:
    // 0x13d5c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x13d5c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_13d5c8:
    // 0x13d5c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_13d5cc:
    if (ctx->pc == 0x13D5CCu) {
        ctx->pc = 0x13D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5C8u;
        // 0x13d5cc: 0xa22203eb  sb          $v0, 0x3EB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D5D0u;
        goto label_13d5d0;
    }
    ctx->pc = 0x13D5C8u;
    {
        const bool branch_taken_0x13d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5C8u;
        // 0x13d5cc: 0xa22203eb  sb          $v0, 0x3EB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5c8) {
            ctx->pc = 0x13D5D4u;
            goto label_13d5d4;
        }
    }
    ctx->pc = 0x13D5D0u;
label_13d5d0:
    // 0x13d5d0: 0xa22003eb  sb          $zero, 0x3EB($s1)
    ctx->pc = 0x13d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 0));
label_13d5d4:
    // 0x13d5d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x13d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_13d5d8:
    // 0x13d5d8: 0x922503eb  lbu         $a1, 0x3EB($s1)
    ctx->pc = 0x13d5d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1003)));
label_13d5dc:
    // 0x13d5dc: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x13d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_13d5e0:
    // 0x13d5e0: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x13d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_13d5e4:
    // 0x13d5e4: 0xa06501b4  sb          $a1, 0x1B4($v1)
    ctx->pc = 0x13d5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 5));
label_13d5e8:
    // 0x13d5e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13d5ec:
    // 0x13d5ec: 0x922303eb  lbu         $v1, 0x3EB($s1)
    ctx->pc = 0x13d5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1003)));
label_13d5f0:
    // 0x13d5f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_13d5f4:
    if (ctx->pc == 0x13D5F4u) {
        ctx->pc = 0x13D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5F0u;
        // 0x13d5f4: 0xa08301b4  sb          $v1, 0x1B4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 436), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D5F8u;
        goto label_13d5f8;
    }
    ctx->pc = 0x13D5F0u;
    {
        const bool branch_taken_0x13d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5F0u;
        // 0x13d5f4: 0xa08301b4  sb          $v1, 0x1B4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 436), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5f0) {
            ctx->pc = 0x13D614u;
            goto label_13d614;
        }
    }
    ctx->pc = 0x13D5F8u;
label_13d5f8:
    // 0x13d5f8: 0xa22003eb  sb          $zero, 0x3EB($s1)
    ctx->pc = 0x13d5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 0));
label_13d5fc:
    // 0x13d5fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_13d600:
    // 0x13d600: 0x2464deb8  addiu       $a0, $v1, -0x2148
    ctx->pc = 0x13d600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
label_13d604:
    // 0x13d604: 0x8c62deb8  lw          $v0, -0x2148($v1)
    ctx->pc = 0x13d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958776)));
label_13d608:
    // 0x13d608: 0xa04001b4  sb          $zero, 0x1B4($v0)
    ctx->pc = 0x13d608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 436), (uint8_t)GPR_U32(ctx, 0));
label_13d60c:
    // 0x13d60c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_13d610:
    // 0x13d610: 0xa06001b4  sb          $zero, 0x1B4($v1)
    ctx->pc = 0x13d610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 0));
label_13d614:
    // 0x13d614: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13d618:
    // 0x13d618: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13d618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13d61c:
    // 0x13d61c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13d620:
    // 0x13d620: 0x40f809  jalr        $v0
label_13d624:
    if (ctx->pc == 0x13D624u) {
        ctx->pc = 0x13D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D620u;
        // 0x13d624: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D628u;
        goto label_13d628;
    }
    ctx->pc = 0x13D620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13D628u);
        ctx->pc = 0x13D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D620u;
        // 0x13d624: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D620u, 0x13D628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D628u;
label_13d628:
    // 0x13d628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d62c:
    // 0x13d62c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13d630:
    // 0x13d630: 0xc136afa  jal         func_4DABE8
label_13d634:
    if (ctx->pc == 0x13D634u) {
        ctx->pc = 0x13D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D630u;
        // 0x13d634: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D638u;
        goto label_13d638;
    }
    ctx->pc = 0x13D630u;
    SET_GPR_U32(ctx, 31, 0x13D638u);
    ctx->pc = 0x13D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D630u;
    // 0x13d634: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13D630u, 0x13D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D638u;
label_13d638:
    // 0x13d638: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x13d638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13d63c:
    // 0x13d63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d640:
    // 0x13d640: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13d640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13d644:
    // 0x13d644: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13d644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d648:
    // 0x13d648: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13d648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d64c:
    // 0x13d64c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13d64cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d650:
    // 0x13d650: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13d650u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13d654:
    // 0x13d654: 0x4a0003bf  vwaitq
    ctx->pc = 0x13d654u;
    // VWAITQ (Q already resolved in this runtime)
label_13d658:
    // 0x13d658: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13d658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13d65c:
    // 0x13d65c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13d65cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13d660:
    // 0x13d660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d664:
    // 0x13d664: 0x0  nop
    ctx->pc = 0x13d664u;
    // NOP
label_13d668:
    // 0x13d668: 0xe62003d8  swc1        $f0, 0x3D8($s1)
    ctx->pc = 0x13d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 984), bits); }
label_13d66c:
    // 0x13d66c: 0xc04829a  jal         func_120A68
label_13d670:
    if (ctx->pc == 0x13D670u) {
        ctx->pc = 0x13D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D66Cu;
        // 0x13d670: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D674u;
        goto label_13d674;
    }
    ctx->pc = 0x13D66Cu;
    SET_GPR_U32(ctx, 31, 0x13D674u);
    ctx->pc = 0x13D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D66Cu;
    // 0x13d670: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A68u, 0x13D66Cu, 0x13D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D674u;
label_13d674:
    // 0x13d674: 0xa22003e5  sb          $zero, 0x3E5($s1)
    ctx->pc = 0x13d674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 997), (uint8_t)GPR_U32(ctx, 0));
label_13d678:
    // 0x13d678: 0xa22003e7  sb          $zero, 0x3E7($s1)
    ctx->pc = 0x13d678u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 999), (uint8_t)GPR_U32(ctx, 0));
label_13d67c:
    // 0x13d67c: 0xa22003e8  sb          $zero, 0x3E8($s1)
    ctx->pc = 0x13d67cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1000), (uint8_t)GPR_U32(ctx, 0));
label_13d680:
    // 0x13d680: 0xa22003e9  sb          $zero, 0x3E9($s1)
    ctx->pc = 0x13d680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1001), (uint8_t)GPR_U32(ctx, 0));
label_13d684:
    // 0x13d684: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x13d684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_13d688:
    // 0x13d688: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x13d688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13d68c:
    // 0x13d68c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x13d68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13d690:
    // 0x13d690: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x13d690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13d694:
    // 0x13d694: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13d694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_13d698:
    // 0x13d698: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x13d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_13d69c:
    // 0x13d69c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x13d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13d6a0:
    // 0x13d6a0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x13d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13d6a4:
    // 0x13d6a4: 0x3e00008  jr          $ra
label_13d6a8:
    if (ctx->pc == 0x13D6A8u) {
        ctx->pc = 0x13D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6A4u;
        // 0x13d6a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D6ACu;
        goto label_13d6ac;
    }
    ctx->pc = 0x13D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6A4u;
        // 0x13d6a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D6ACu;
label_13d6ac:
    // 0x13d6ac: 0x0  nop
    ctx->pc = 0x13d6acu;
    // NOP
    ctx->pc = 0x13d6b0u;
}
